// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingOption.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this, System_String_o* value, System_String_o* text, bool enabled, System_String_o* tooltip, const MethodInfo* method);
// 0x4460a10

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this,System_String_o *value,
               System_String_o *text,bool_conflict enabled,System_String_o *tooltip,MethodInfo *method)

{
  undefined4 in_register_00000014;
  System_String_o *pSVar1;
  
  value->klass = (System_String_c *)text;
  il2cpp_runtime_helper_022b4080();
  pSVar1 = (System_String_o *)CONCAT44(in_register_00000014,enabled);
  if ((System_String_o *)CONCAT44(in_register_00000014,enabled) == (System_String_o *)0x0) {
    pSVar1 = text;
  }
  value->monitor = pSVar1;
  il2cpp_runtime_helper_022b4080(&value->monitor,pSVar1);
  *(char *)&(value->fields)._stringLength = (char)tooltip;
  value[1].klass = (System_String_c *)method;
  il2cpp_runtime_helper_022b4080(value + 1,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$ToChoice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this, const MethodInfo* method);
// 0x4460a70

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar7;
  undefined8 uVar8;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar9;
  ulong uVar10;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar11;
  System_String_o *pSVar12;
  long lVar13;
  System_String_o **ppSVar14;
  ulong unaff_RBP;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar15;
  undefined8 *puVar16;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  undefined1 local_10c [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  Gisketch_Aottg2UI_Code_AottgComponent_o GStack_f0;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  System_String_o *pSStack_c0;
  undefined8 *puStack_b8;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGStack_b0;
  MethodInfo *pMStack_a8;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGStack_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  bool_conflict bStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGStack_48;
  
  if (g_data_057ae78d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae78d = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
  pGVar11 = pGVar9;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar9,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    (pGVar9->fields).value = (System_String_o *)method->methodPointer;
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    (pGVar9->fields).text = (System_String_o *)method->virtualMethodPointer;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).text);
    *(undefined1 *)&(pGVar9->fields).enabled = *(undefined1 *)&method->invoker_method;
    (pGVar9->fields).tooltip = (System_String_o *)method->name;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).tooltip);
    return pGVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_48 = pGVar9;
  if (g_data_057ae78e == '\0') {
    uStack_98 = 0x4460b26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    g_data_057ae78e = '\x01';
  }
  if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
    return pGVar11;
  }
  uStack_98 = 0x4460b49;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
           il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,*(undefined4 *)&(pGVar11->fields).text);
  pSVar12 = (pGVar11->fields).text;
  if (0 < (int)pSVar12) {
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
label_04460c55:
      pSVar12 = (pGVar11->fields).textKey;
      uStack_88 = (MethodInfo *)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_98 = 0x4460c79;
      local_90 = (MethodInfo *)pSVar12;
      il2cpp_runtime_helper_022b4080(&local_90,pSVar12);
      uStack_98 = 0x4460c89;
      uStack_88 = (MethodInfo *)pSVar12;
      il2cpp_runtime_helper_022b4080(&uStack_88,pSVar12);
      uStack_80 = CONCAT71(uStack_80._1_7_,1);
      uStack_78 = 0;
      puVar16 = &uStack_78;
      uStack_98 = 0x4460ca3;
      il2cpp_runtime_helper_022b4080(puVar16,0);
      uStack_98 = 0x4460ca8;
      il2cpp_runtime_helper_022b2c90();
      pSStack_c0 = pSVar12;
      puStack_b8 = &uStack_88;
      pGStack_b0 = pGVar11;
      pMStack_a8 = method;
      pGStack_a0 = pGVar9;
      uStack_98 = unaff_RBP;
      if (g_data_057ae78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
        g_data_057ae78f = '\x01';
      }
      local_10c._0_4_ = 0;
      if (puVar16 == (undefined8 *)0x0) {
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
      }
      else {
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
        local_10c._0_4_ = 0;
        if (0 < *(int *)(puVar16 + 3)) {
          if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
            __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)local_10c;
            pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            pSVar12 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
            if ((uint)local_10c._0_4_ < *(uint *)(puVar16 + 3)) {
              pSVar2 = (System_String_o *)puVar16[(long)(int)local_10c._0_4_ + 4];
              uStack_100 = (System_String_o *)0x0;
              uStack_f8 = 0;
              GStack_f0.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
              local_10c._4_8_ = pSVar12;
              il2cpp_runtime_helper_022b4080(local_10c + 4,pSVar12);
              uStack_100 = pSVar2;
              if (pSVar2 == (System_String_o *)0x0) {
                uStack_100 = pSVar12;
              }
              il2cpp_runtime_helper_022b4080(&uStack_100);
              uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
              GStack_f0.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
              __this_00 = &GStack_f0;
              pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
              il2cpp_runtime_helper_022b4080();
              il2cpp_runtime_helper_022b2c90();
            }
label_04460e9a:
            il2cpp_runtime_helper_022b2ca0();
            Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
            __this_00[1].klass = pGVar15;
            pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                      il2cpp_runtime_helper_022b4080(__this_00 + 1,pGVar15);
            return pGVar11;
          }
          do {
            uVar4 = local_10c._0_4_;
            __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)local_10c;
            pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            pSVar12 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
            if (*(uint *)(puVar16 + 3) <= (uint)local_10c._0_4_) goto label_04460e9a;
            pSVar2 = (System_String_o *)puVar16[(long)(int)local_10c._0_4_ + 4];
            uStack_100 = (System_String_o *)0x0;
            uStack_f8 = 0;
            GStack_f0.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            local_10c._4_8_ = pSVar12;
            il2cpp_runtime_helper_022b4080(local_10c + 4,pSVar12);
            uStack_100 = pSVar2;
            if (pSVar2 == (System_String_o *)0x0) {
              uStack_100 = pSVar12;
            }
            il2cpp_runtime_helper_022b4080(&uStack_100);
            uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
            GStack_f0.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            __this_00 = &GStack_f0;
            pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            il2cpp_runtime_helper_022b4080();
            local_d8 = uStack_f8;
            uVar6 = local_d8;
            uStack_d0 = GStack_f0.klass;
            pGVar7 = uStack_d0;
            GStack_f0.monitor = (void *)local_10c._4_8_;
            pvVar5 = GStack_f0.monitor;
            uStack_e0 = uStack_100;
            pSVar12 = uStack_e0;
            if (*(uint *)&(pGVar11->fields).text <= (uint)uVar4) goto label_04460e9a;
            lVar13 = (long)(int)uVar4;
            GStack_f0.monitor._0_4_ = (undefined4)local_10c._4_8_;
            GStack_f0.monitor._4_4_ = SUB84(local_10c._4_8_,4);
            uStack_e0._0_4_ = (bool_conflict)uStack_100;
            uStack_e0._4_4_ = (undefined4)((ulong)uStack_100 >> 0x20);
            local_d8._0_4_ = (undefined4)uStack_f8;
            local_d8._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
            uStack_d0._0_4_ = SUB84(GStack_f0.klass,0);
            uStack_d0._4_4_ = (undefined4)((ulong)GStack_f0.klass >> 0x20);
            ppSVar14 = &(pGVar11->fields).tooltip + lVar13 * 4;
            *(undefined4 *)ppSVar14 = (undefined4)local_d8;
            *(undefined4 *)((long)ppSVar14 + 4) = local_d8._4_4_;
            *(undefined4 *)(ppSVar14 + 1) = (undefined4)uStack_d0;
            *(undefined4 *)((long)ppSVar14 + 0xc) = uStack_d0._4_4_;
            ppSVar14 = &(pGVar11->fields).textKey + lVar13 * 4;
            *(undefined4 *)ppSVar14 = GStack_f0.monitor._0_4_;
            *(undefined4 *)((long)ppSVar14 + 4) = GStack_f0.monitor._4_4_;
            *(bool_conflict *)(ppSVar14 + 1) = (bool_conflict)uStack_e0;
            *(undefined4 *)((long)ppSVar14 + 0xc) = uStack_e0._4_4_;
            GStack_f0.monitor = pvVar5;
            uStack_e0 = pSVar12;
            local_d8 = uVar6;
            uStack_d0 = pGVar7;
            il2cpp_runtime_helper_022b4080(&(pGVar11->fields).textKey + lVar13 * 4);
            local_10c._0_4_ = local_10c._0_4_ + 1;
          } while ((int)local_10c._0_4_ < *(int *)(puVar16 + 3));
        }
      }
      return pGVar11;
    }
    uVar10 = (ulong)pSVar12 & 0xffffffff;
    unaff_RBP = 0;
    pGVar3 = pGVar9;
    do {
      ppSVar14 = &(pGVar3->fields).textKey;
      if (uVar10 <= unaff_RBP) {
label_04460c50:
        uStack_98 = 0x4460c55;
        il2cpp_runtime_helper_022b2ca0();
        goto label_04460c55;
      }
      method = (MethodInfo *)(&(pGVar11->fields).textKey)[unaff_RBP];
      uStack_88 = (MethodInfo *)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_98 = 0x4460bb0;
      local_90 = method;
      il2cpp_runtime_helper_022b4080(&local_90,method);
      uStack_98 = 0x4460bc0;
      uStack_88 = method;
      il2cpp_runtime_helper_022b4080(&uStack_88,method);
      uStack_80 = CONCAT71(uStack_80._1_7_,1);
      uStack_78 = 0;
      uStack_98 = 0x4460bda;
      il2cpp_runtime_helper_022b4080(&uStack_78,0);
      local_60 = uStack_80;
      uVar6 = local_60;
      uStack_58 = uStack_78;
      uVar8 = uStack_58;
      local_70 = (undefined4)local_90;
      uStack_6c = local_90._4_4_;
      bStack_68 = (bool_conflict)uStack_88;
      uStack_64 = uStack_88._4_4_;
      if (*(uint *)&(pGVar9->fields).text <= unaff_RBP) goto label_04460c50;
      local_60._0_4_ = (undefined4)uStack_80;
      local_60._4_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
      uStack_58._0_4_ = (undefined4)uStack_78;
      uStack_58._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
      *(undefined4 *)&(pGVar3->fields).tooltip = (undefined4)local_60;
      *(undefined4 *)((long)&(pGVar3->fields).tooltip + 4) = local_60._4_4_;
      *(undefined4 *)&(pGVar3->fields).tooltipKey = (undefined4)uStack_58;
      *(undefined4 *)((long)&(pGVar3->fields).tooltipKey + 4) = uStack_58._4_4_;
      *(undefined4 *)ppSVar14 = (undefined4)local_90;
      *(undefined4 *)((long)&(pGVar3->fields).textKey + 4) = local_90._4_4_;
      (pGVar3->fields).enabled = (bool_conflict)uStack_88;
      *(undefined4 *)&(pGVar3->fields).field_0x1c = uStack_88._4_4_;
      uStack_98 = 0x4460c11;
      local_60 = uVar6;
      uStack_58 = uVar8;
      il2cpp_runtime_helper_022b4080(ppSVar14,0);
      unaff_RBP = unaff_RBP + 1;
      uVar1 = *(uint *)&(pGVar11->fields).text;
      uVar10 = (ulong)uVar1;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)ppSVar14;
    } while ((long)unaff_RBP < (long)(int)uVar1);
  }
  return pGVar9;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$StringOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions (System_String_array* values, const MethodInfo* method);
// 0x4460b00

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions
          (System_String_array *values,MethodInfo *method)

{
  bool_conflict *pbVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar8;
  undefined8 uVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar10;
  ulong uVar11;
  System_String_o *pSVar12;
  long lVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *pGVar14;
  ulong unaff_RBP;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar15;
  undefined8 *puVar16;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this;
  System_String_o *unaff_R14;
  undefined1 auStack_f4 [12];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  Gisketch_Aottg2UI_Code_AottgComponent_o GStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  System_String_o *pSStack_a8;
  undefined8 *puStack_a0;
  System_String_array *pSStack_98;
  System_String_o *pSStack_90;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (g_data_057ae78e == '\0') {
    uStack_80 = 0x4460b26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    g_data_057ae78e = '\x01';
  }
  if (values == (System_String_array *)0x0) {
    pGVar10 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
    return pGVar10;
  }
  uStack_80 = 0x4460b49;
  pGVar10 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
            il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,(int)values->max_length);
  if (0 < (int)values->max_length) {
    if (pGVar10 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
label_04460c55:
      pSVar12 = values->m_Items[0];
      uStack_70 = (System_String_o *)0x0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_80 = 0x4460c79;
      uStack_78 = pSVar12;
      il2cpp_runtime_helper_022b4080(&uStack_78,pSVar12);
      uStack_80 = 0x4460c89;
      uStack_70 = pSVar12;
      il2cpp_runtime_helper_022b4080(&uStack_70,pSVar12);
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      uStack_60 = 0;
      puVar16 = &uStack_60;
      uStack_80 = 0x4460ca3;
      il2cpp_runtime_helper_022b4080(puVar16,0);
      uStack_80 = 0x4460ca8;
      il2cpp_runtime_helper_022b2c90();
      pSStack_a8 = pSVar12;
      puStack_a0 = &uStack_70;
      pSStack_98 = values;
      pSStack_90 = unaff_R14;
      pGStack_88 = pGVar10;
      uStack_80 = unaff_RBP;
      if (g_data_057ae78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
        g_data_057ae78f = '\x01';
      }
      auStack_f4._0_4_ = 0;
      if (puVar16 == (undefined8 *)0x0) {
        pGVar10 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
      }
      else {
        pGVar10 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
        auStack_f4._0_4_ = 0;
        if (0 < *(int *)(puVar16 + 3)) {
          if (pGVar10 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
            __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)auStack_f4;
            pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            pSVar12 = System_Int32__ToString((int32_t)__this,(MethodInfo *)0x0);
            if ((uint)auStack_f4._0_4_ < *(uint *)(puVar16 + 3)) {
              pSVar3 = (System_String_o *)puVar16[(long)(int)auStack_f4._0_4_ + 4];
              uStack_e8 = (System_String_o *)0x0;
              uStack_e0 = 0;
              GStack_d8.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
              auStack_f4._4_8_ = pSVar12;
              il2cpp_runtime_helper_022b4080(auStack_f4 + 4,pSVar12);
              uStack_e8 = pSVar3;
              if (pSVar3 == (System_String_o *)0x0) {
                uStack_e8 = pSVar12;
              }
              il2cpp_runtime_helper_022b4080(&uStack_e8);
              uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
              GStack_d8.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
              __this = &GStack_d8;
              pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
              il2cpp_runtime_helper_022b4080();
              il2cpp_runtime_helper_022b2c90();
            }
label_04460e9a:
            il2cpp_runtime_helper_022b2ca0();
            Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this,(MethodInfo *)0x0);
            __this[1].klass = pGVar15;
            pGVar10 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
                      il2cpp_runtime_helper_022b4080(__this + 1,pGVar15);
            return pGVar10;
          }
          do {
            uVar5 = auStack_f4._0_4_;
            __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)auStack_f4;
            pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            pSVar12 = System_Int32__ToString((int32_t)__this,(MethodInfo *)0x0);
            if (*(uint *)(puVar16 + 3) <= (uint)auStack_f4._0_4_) goto label_04460e9a;
            pSVar3 = (System_String_o *)puVar16[(long)(int)auStack_f4._0_4_ + 4];
            uStack_e8 = (System_String_o *)0x0;
            uStack_e0 = 0;
            GStack_d8.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            auStack_f4._4_8_ = pSVar12;
            il2cpp_runtime_helper_022b4080(auStack_f4 + 4,pSVar12);
            uStack_e8 = pSVar3;
            if (pSVar3 == (System_String_o *)0x0) {
              uStack_e8 = pSVar12;
            }
            il2cpp_runtime_helper_022b4080(&uStack_e8);
            uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
            GStack_d8.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            __this = &GStack_d8;
            pGVar15 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
            il2cpp_runtime_helper_022b4080();
            uStack_c0 = uStack_e0;
            uVar7 = uStack_c0;
            uStack_b8 = GStack_d8.klass;
            pGVar8 = uStack_b8;
            GStack_d8.monitor = (void *)auStack_f4._4_8_;
            pvVar6 = GStack_d8.monitor;
            uStack_c8 = uStack_e8;
            pSVar12 = uStack_c8;
            if ((uint)pGVar10->max_length <= (uint)uVar5) goto label_04460e9a;
            lVar13 = (long)(int)uVar5;
            GStack_d8.monitor._0_4_ = (undefined4)auStack_f4._4_8_;
            GStack_d8.monitor._4_4_ = SUB84(auStack_f4._4_8_,4);
            uStack_c8._0_4_ = SUB84(uStack_e8,0);
            uStack_c8._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
            uStack_c0._0_4_ = (bool_conflict)uStack_e0;
            uStack_c0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
            uStack_b8._0_4_ = SUB84(GStack_d8.klass,0);
            uStack_b8._4_4_ = (undefined4)((ulong)GStack_d8.klass >> 0x20);
            pbVar1 = &pGVar10->m_Items[lVar13].fields.Enabled;
            *pbVar1 = (bool_conflict)uStack_c0;
            pbVar1[1] = uStack_c0._4_4_;
            pbVar1[2] = (undefined4)uStack_b8;
            pbVar1[3] = uStack_b8._4_4_;
            pGVar14 = pGVar10->m_Items + lVar13;
            *(undefined4 *)&(pGVar14->fields).Value = GStack_d8.monitor._0_4_;
            *(undefined4 *)((long)&(pGVar14->fields).Value + 4) = GStack_d8.monitor._4_4_;
            *(undefined4 *)&(pGVar14->fields).Text = (undefined4)uStack_c8;
            *(undefined4 *)((long)&(pGVar14->fields).Text + 4) = uStack_c8._4_4_;
            GStack_d8.monitor = pvVar6;
            uStack_c8 = pSVar12;
            uStack_c0 = uVar7;
            uStack_b8 = pGVar8;
            il2cpp_runtime_helper_022b4080(pGVar10->m_Items + lVar13);
            auStack_f4._0_4_ = auStack_f4._0_4_ + 1;
          } while ((int)auStack_f4._0_4_ < *(int *)(puVar16 + 3));
        }
      }
      return pGVar10;
    }
    uVar11 = values->max_length & 0xffffffff;
    unaff_RBP = 0;
    pGVar4 = pGVar10;
    do {
      pGVar14 = pGVar4->m_Items;
      if (uVar11 <= unaff_RBP) {
label_04460c50:
        uStack_80 = 0x4460c55;
        il2cpp_runtime_helper_022b2ca0();
        goto label_04460c55;
      }
      unaff_R14 = values->m_Items[unaff_RBP];
      uStack_70 = (System_String_o *)0x0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_80 = 0x4460bb0;
      uStack_78 = unaff_R14;
      il2cpp_runtime_helper_022b4080(&uStack_78,unaff_R14);
      uStack_80 = 0x4460bc0;
      uStack_70 = unaff_R14;
      il2cpp_runtime_helper_022b4080(&uStack_70,unaff_R14);
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      uStack_60 = 0;
      uStack_80 = 0x4460bda;
      il2cpp_runtime_helper_022b4080(&uStack_60,0);
      uStack_48 = uStack_68;
      uVar7 = uStack_48;
      uStack_40 = uStack_60;
      uVar9 = uStack_40;
      uStack_58 = (undefined4)uStack_78;
      uStack_54 = uStack_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      if ((uint)pGVar10->max_length <= unaff_RBP) goto label_04460c50;
      uStack_48._0_4_ = (bool_conflict)uStack_68;
      uStack_48._4_4_ = (undefined4)((ulong)uStack_68 >> 0x20);
      uStack_40._0_4_ = (undefined4)uStack_60;
      uStack_40._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
      pGVar4->m_Items[0].fields.Enabled = (bool_conflict)uStack_48;
      *(undefined4 *)&pGVar4->m_Items[0].fields.field_0x14 = uStack_48._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields.Tooltip = (undefined4)uStack_40;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Tooltip + 4) = uStack_40._4_4_;
      *(undefined4 *)&(pGVar14->fields).Value = (undefined4)uStack_78;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Value + 4) = uStack_78._4_4_;
      *(undefined4 *)&pGVar4->m_Items[0].fields.Text = (undefined4)uStack_70;
      *(undefined4 *)((long)&pGVar4->m_Items[0].fields.Text + 4) = uStack_70._4_4_;
      uStack_80 = 0x4460c11;
      uStack_48 = uVar7;
      uStack_40 = uVar9;
      il2cpp_runtime_helper_022b4080(pGVar14,0);
      unaff_RBP = unaff_RBP + 1;
      uVar2 = (uint)values->max_length;
      uVar11 = (ulong)uVar2;
      pGVar4 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)pGVar14;
    } while ((long)unaff_RBP < (long)(int)uVar2);
  }
  return pGVar10;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$IndexedOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions (System_String_array* labels, const MethodInfo* method);
// 0x4460cb0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions
          (System_String_array *labels,MethodInfo *method)

{
  bool_conflict *pbVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *pGVar2;
  System_String_o *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar8;
  System_String_o *pSVar9;
  long lVar10;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar11;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this;
  undefined1 auStack_7c [12];
  undefined8 uStack_70;
  undefined8 uStack_68;
  Gisketch_Aottg2UI_Code_AottgComponent_o GStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (g_data_057ae78f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    g_data_057ae78f = '\x01';
  }
  auStack_7c._0_4_ = 0;
  if (labels == (System_String_array *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
  }
  else {
    pGVar8 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
    auStack_7c._0_4_ = 0;
    if (0 < (int)labels->max_length) {
      if (pGVar8 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
        __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)auStack_7c;
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
        pSVar9 = System_Int32__ToString((int32_t)__this,(MethodInfo *)0x0);
        if ((uint)auStack_7c._0_4_ < (uint)labels->max_length) {
          pSVar3 = labels->m_Items[(int)auStack_7c._0_4_];
          uStack_70 = (System_String_o *)0x0;
          uStack_68 = 0;
          GStack_60.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
          auStack_7c._4_8_ = pSVar9;
          il2cpp_runtime_helper_022b4080(auStack_7c + 4,pSVar9);
          uStack_70 = pSVar3;
          if (pSVar3 == (System_String_o *)0x0) {
            uStack_70 = pSVar9;
          }
          il2cpp_runtime_helper_022b4080(&uStack_70);
          uStack_68 = CONCAT71(uStack_68._1_7_,1);
          GStack_60.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
          __this = &GStack_60;
          pGVar11 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
          il2cpp_runtime_helper_022b4080();
          il2cpp_runtime_helper_022b2c90();
        }
label_04460e9a:
        il2cpp_runtime_helper_022b2ca0();
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this,(MethodInfo *)0x0);
        __this[1].klass = pGVar11;
        pGVar8 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
                 il2cpp_runtime_helper_022b4080(__this + 1,pGVar11);
        return pGVar8;
      }
      do {
        uVar4 = auStack_7c._0_4_;
        __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)auStack_7c;
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
        pSVar9 = System_Int32__ToString((int32_t)__this,(MethodInfo *)0x0);
        if ((uint)labels->max_length <= (uint)auStack_7c._0_4_) goto label_04460e9a;
        pSVar3 = labels->m_Items[(int)auStack_7c._0_4_];
        uStack_70 = (System_String_o *)0x0;
        uStack_68 = 0;
        GStack_60.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
        auStack_7c._4_8_ = pSVar9;
        il2cpp_runtime_helper_022b4080(auStack_7c + 4,pSVar9);
        uStack_70 = pSVar3;
        if (pSVar3 == (System_String_o *)0x0) {
          uStack_70 = pSVar9;
        }
        il2cpp_runtime_helper_022b4080(&uStack_70);
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        GStack_60.klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
        __this = &GStack_60;
        pGVar11 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)0x0;
        il2cpp_runtime_helper_022b4080();
        uStack_48 = uStack_68;
        uVar6 = uStack_48;
        uStack_40 = GStack_60.klass;
        pGVar7 = uStack_40;
        GStack_60.monitor = (void *)auStack_7c._4_8_;
        pvVar5 = GStack_60.monitor;
        uStack_50 = uStack_70;
        pSVar9 = uStack_50;
        if ((uint)pGVar8->max_length <= (uint)uVar4) goto label_04460e9a;
        lVar10 = (long)(int)uVar4;
        GStack_60.monitor._0_4_ = (undefined4)auStack_7c._4_8_;
        GStack_60.monitor._4_4_ = SUB84(auStack_7c._4_8_,4);
        uStack_50._0_4_ = SUB84(uStack_70,0);
        uStack_50._4_4_ = (undefined4)((ulong)uStack_70 >> 0x20);
        uStack_48._0_4_ = (bool_conflict)uStack_68;
        uStack_48._4_4_ = (undefined4)((ulong)uStack_68 >> 0x20);
        uStack_40._0_4_ = SUB84(GStack_60.klass,0);
        uStack_40._4_4_ = (undefined4)((ulong)GStack_60.klass >> 0x20);
        pbVar1 = &pGVar8->m_Items[lVar10].fields.Enabled;
        *pbVar1 = (bool_conflict)uStack_48;
        pbVar1[1] = uStack_48._4_4_;
        pbVar1[2] = (undefined4)uStack_40;
        pbVar1[3] = uStack_40._4_4_;
        pGVar2 = pGVar8->m_Items + lVar10;
        *(undefined4 *)&(pGVar2->fields).Value = GStack_60.monitor._0_4_;
        *(undefined4 *)((long)&(pGVar2->fields).Value + 4) = GStack_60.monitor._4_4_;
        *(undefined4 *)&(pGVar2->fields).Text = (undefined4)uStack_50;
        *(undefined4 *)((long)&(pGVar2->fields).Text + 4) = uStack_50._4_4_;
        GStack_60.monitor = pvVar5;
        uStack_50 = pSVar9;
        uStack_48 = uVar6;
        uStack_40 = pGVar7;
        il2cpp_runtime_helper_022b4080(pGVar8->m_Items + lVar10);
        auStack_7c._0_4_ = auStack_7c._0_4_ + 1;
      } while ((int)auStack_7c._0_4_ < (int)labels->max_length);
    }
  }
  return pGVar8;
}


