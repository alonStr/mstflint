<NodesDefinition version="2">

<config define="DEFINED_LABEL=5" />

    <node name="enum_conditions" size="0x30" segment_id="0x1329">
        <field name="kind" offset="0x0" size="0x4" enum="KIND_A=0x1,KIND_B=0x2,KIND_B_EXTRA=0x3,SHARED=0x4,DEFINED_LABEL=0x6,other_field=0x7" />
        <field name="flavor" offset="0x4" size="0x4" enum="SWEET=0x0,SOUR=0x1,SHARED=0x2" />
        <field name="other_field" offset="0x8" size="0x4" />
        <field name="details" offset="0xC" size="0x4" subnode="details_union" />
        <field name="checks" offset="0x10" size="0x14" subnode="checks_node" />
        <field name="sel_holder" offset="0x24" size="0x4" subnode="sel_node" />
        <field name="outer" offset="0x28" size="0x8" subnode="outer_union" />
    </node>

    <node name="details_union" size="0x4" attr_is_union="1" is_conditional="1">
        <field name="as_a" offset="0x0" size="0x4" condition="$(parent).kind == KIND_A" />
        <field name="as_b" offset="0x0" size="0x4" condition="$(parent).kind == KIND_B" />
        <field name="as_b_extra" offset="0x0" size="0x4" condition="$(parent).kind == KIND_B_EXTRA" />
        <field name="as_self" offset="0x0" size="0x4" subnode="self_node" condition="$(parent).as_self.tag == 10" />
        <field name="hex_or_label" offset="0x0" size="0x4" condition="$(parent).kind == 0x3 | $(parent).kind == KIND_A" />
    </node>

    <node name="self_node" size="0x4">
        <field name="tag" offset="0x0" size="0x4" />
    </node>

    <node name="checks_node" size="0x14" is_conditional="1">
        <field name="grouped" offset="0x0" size="0x4" condition="($(segment).kind == KIND_A | $(segment).kind == KIND_B) AND ($(segment).flavor == SOUR)" />
        <field name="shared_label" offset="0x4" size="0x4" condition="($(segment).kind == SHARED) AND ($(segment).flavor == SHARED)" />
        <field name="define_kept" offset="0x8" size="0x4" condition="$(segment).kind == DEFINED_LABEL" />
        <field name="label_over_field" offset="0xC" size="0x4" condition="$(segment).kind != other_field" />
        <field name="label_out_of_scope" offset="0x10" size="0x4" condition="KIND_A" />
    </node>

    <node name="sel_node" size="0x4">
        <field name="sel" offset="0x0" size="0x4" enum="SEL_X=0x1,SEL_Y=0x2" />
    </node>

    <node name="outer_union" size="0x8" attr_is_union="1">
        <field name="sel_holder" offset="0x0" size="0x4" subnode="sel_node" />
        <field name="us_field" offset="0x0" size="0x8" union_selector="$(parent).sel_holder.sel" subnode="inner_union" />
    </node>

    <node name="inner_union" size="0x8" attr_is_union="1">
        <field name="choice_x" offset="0x4" size="0x4" selected_by="SEL_X" />
        <field name="choice_y" offset="0x4" size="0x4" selected_by="SEL_Y" />
    </node>

</NodesDefinition>
