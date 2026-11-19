<NodesDefinition version="2">

    <node name="unlimited_array_conditions" size="0x14.0" segment_id="0x1329">
        <field name="header" offset="0x0.0" size="0x4.0" subnode="header_node" />
        <field name="entry" offset="0x4.0" size="0x4.0" subnode="entry_node" low_bound="0" high_bound="VARIABLE" />
    </node>

    <node name="header_node" size="0x4.0">
        <field name="mode" offset="0x0.0" size="0x0.8" enum="MODE_OFF=0x0,MODE_ON=0x1" />
    </node>

    <node name="entry_node" size="0x4.0" is_conditional="1">
        <field name="state" offset="0x0.0" size="0x0.8" enum="STATE_IDLE=0x0,STATE_ACTIVE=0x1,STATE_EVENT=0x3" />
        <field name="details" offset="0x0.8" size="0x0.8" subnode="entry_details" />
        <field name="mode_on_only" offset="0x0.16" size="0x0.16" condition="$(segment).header.mode == MODE_ON" />
    </node>

    <node name="entry_details" size="0x0.8" attr_is_union="1" is_conditional="1">
        <field name="transition" offset="0x0.0" size="0x0.8" condition="$(parent).state != STATE_EVENT" />
        <field name="event" offset="0x0.0" size="0x0.8" condition="$(parent).state == STATE_EVENT" />
    </node>

</NodesDefinition>
