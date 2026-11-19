<NodesDefinition version="2">

    <node name="sltp_reg" size="0x8.0" segment_id="0x1329">
        <field name="port_type" offset="0x0.1" size="0x0.3" enum="Network_Port=0x0,NearEnd_Port=0x1,Internal_IC_LR_Port=0x2,FarEnd_Port=0x3" />
        <field name="version" offset="0x0.24" size="0x0.4" enum="prod_40nm=0x0,prod_28nm=0x1,prod_16nm=0x3,prod_7nm=0x4,prod_5nm=0x5,serdes_gen_8=0x6,prod_3nm_serdes_gen_7p5=0x7,serdes_gen_7p2=0x8" />
        <field name="page_data" offset="0x4.0" size="0x4.0" subnode="sltp_reg_page_data_auto" condition="$(parent).port_type AND $(parent).version" />
    </node>

    <node name="sltp_reg_page_data_auto" size="0x4.0" attr_is_union="1" is_conditional="1">
        <field name="prod_3nm_serdes_gen_7p5" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port | $(parent).port_type == Internal_IC_LR_Port  | $(parent).port_type == NearEnd_Port  | $(parent).port_type == FarEnd_Port) AND ($(parent).version == prod_3nm_serdes_gen_7p5)" />
        <field name="sltp_16nm" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port | $(parent).port_type == Internal_IC_LR_Port) AND ($(parent).version == prod_16nm)" />
        <field name="sltp_28nm_40nm" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port) AND ($(parent).version == prod_40nm | $(parent).version == prod_28nm)" />
        <field name="sltp_5nm" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port | $(parent).port_type == Internal_IC_LR_Port  | $(parent).port_type == NearEnd_Port  | $(parent).port_type == FarEnd_Port) AND ($(parent).version == prod_5nm)" />
        <field name="sltp_7nm" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port | $(parent).port_type == Internal_IC_LR_Port) AND ($(parent).version == prod_7nm)" />
        <field name="sltp_gearbox" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == NearEnd_Port | $(parent).port_type == FarEnd_Port) AND ($(parent).version == prod_28nm)" />
        <field name="sltp_lut_7nm" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port | $(parent).port_type == Internal_IC_LR_Port) AND ($(parent).version == prod_7nm)" />
        <field name="sltp_serdes_gen_8" offset="0x0.0" size="0x4.0" condition="($(parent).port_type == Network_Port | $(parent).port_type == Internal_IC_LR_Port) AND ($(parent).version ==serdes_gen_8)" />
    </node>

</NodesDefinition>
