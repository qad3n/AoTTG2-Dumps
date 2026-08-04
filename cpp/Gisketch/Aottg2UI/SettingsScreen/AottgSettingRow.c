// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x4460ea0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = descriptor;
  il2cpp_runtime_helper_022b4080(&__this->fields,descriptor);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4460ed0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  System_Nullable_bool__Fields layout;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  System_Nullable_bool__Fields SVar10;
  undefined8 *puVar11;
  System_Nullable_bool__Fields SVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  System_Nullable_bool__Fields SVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields SVar19;
  System_Nullable_bool__Fields SVar20;
  long lVar21;
  System_String_o *pSVar22;
  System_String_o *id;
  undefined8 uVar23;
  Il2CppObject *pIVar24;
  uint *options;
  System_Nullable_bool__Fields SVar25;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields __this_00;
  System_Nullable_bool__Fields SVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  System_Nullable_bool__Fields control;
  System_Nullable_bool__Fields SVar32;
  long lVar33;
  System_Nullable_bool__Fields SVar34;
  System_Nullable_bool__Fields SVar35;
  System_Nullable_bool__Fields SVar36;
  System_Nullable_bool__Fields SVar37;
  System_Nullable_bool__Fields SVar38;
  System_Nullable_bool__Fields SVar39;
  System_Nullable_bool__Fields SVar40;
  int32_t variant;
  System_Nullable_bool__Fields SVar41;
  System_Nullable_bool__Fields unaff_R14;
  bool bVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float max;
  undefined1 auVar46 [16];
  MethodInfo *method_00;
  System_Nullable_float__Fields SStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  if (g_data_057ae790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    g_data_057ae790 = '\x01';
  }
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  SVar12 = (System_Nullable_bool__Fields)(pGVar3->fields).Id;
  SVar39 = (System_Nullable_bool__Fields)(pGVar3->fields).Label;
  uVar9 = (ulong)(pGVar3->fields).Kind;
  if (uVar9 < 7) {
    fVar45 = *(float *)(&g_data_00d999ec + uVar9 * 4);
  }
  else {
    fVar45 = 360.0;
  }
  pGStack_38 = ui;
  SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  SVar20.hasValue = 0;
  SVar20.value = 0;
  SVar18 = (System_Nullable_bool__Fields)__this;
  SVar32 = SVar10;
  System_Action_object____ctor();
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSStack_40 = (pGVar3->fields).Tooltip;
    pSStack_48 = (pGVar3->fields).SearchTitle;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)(pGVar3->fields).SearchKeywords;
    ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar3->fields).Icon;
    uVar9 = (ulong)(pGVar3->fields).Kind;
    if (uVar9 < 7) {
      fVar43 = *(float *)(&g_data_00d999ec + uVar9 * 4);
    }
    else {
      fVar43 = 360.0;
    }
    SStack_50.hasValue = 0;
    SStack_50.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_50,fVar43,MethodInfo_Nullable_1_Single);
    method_00 = (MethodInfo *)0x4461000;
    unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
    SVar20 = SVar10;
    SVar18 = SVar12;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)unaff_R14,(System_String_o *)SVar12,
               (System_String_o *)SVar39,fVar45,(System_Action_AottgUi__o *)SVar10,pSStack_40,pSStack_48,
               (System_String_o *)__this,(System_String_o *)ui,(System_Nullable_float__o)SStack_50,method_00);
    SVar32.hasValue = 0;
    SVar32.value = 0;
    if (pGStack_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (pGStack_38,(Gisketch_Aottg2UI_Code_AottgComponent_o *)unaff_R14,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)((long)SVar32 + 0x10) != 0) {
    if (*(uint *)(*(long *)((long)SVar32 + 0x10) + 0x20) < 7) {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar27 = &stack0xffffffffffffff98;
  puVar29 = &stack0xffffffffffffff98;
  puVar30 = &stack0xffffffffffffff98;
  puVar28 = &stack0xffffffffffffff98;
  puVar31 = &stack0xffffffffffffff98;
  if (*(long *)((long)SVar32 + 0x10) != 0) {
    if (*(uint *)(*(long *)((long)SVar32 + 0x10) + 0x20) < 7) {
      return;
    }
    return;
  }
  auVar46 = il2cpp_runtime_helper_022b2c90();
  uVar9 = auVar46._0_8_;
  if (*(long *)((long)SVar32 + 0x10) == 0) {
    uVar9 = il2cpp_runtime_helper_022b2c90();
    puVar27 = &stack0xffffffffffffff90;
    SVar25 = SVar32;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch:
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar27 + -8) = ui;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x10) = SVar12;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x20) = SVar10;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x28) = SVar39;
    *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar27 + -0x30) = __this;
    *(ulong *)(puVar27 + -0x38) = uVar9;
    SVar14 = SVar18;
    SVar32 = SVar25;
    if (g_data_057ae791 == '\0') {
      *(undefined8 *)(puVar27 + -0x40) = 0x4461166;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar27 + -0x40) = 0x4461172;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSwitch_b__4_0);
      *(undefined8 *)(puVar27 + -0x40) = 0x446117e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      SVar32 = (System_Nullable_bool__Fields)&"-switch";
      *(undefined8 *)(puVar27 + -0x40) = 0x446118a;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae791 = '\x01';
    }
    if (*(long *)((long)SVar25 + 0x10) == 0) {
label_044612b2:
      *(undefined8 *)(puVar27 + -0x40) = 0x44612b7;
      auVar46 = il2cpp_runtime_helper_022b2c90();
      options = (uint *)SVar20;
      puVar28 = puVar27 + -0x38;
      SVar10 = SVar18;
      unaff_R14 = SVar25;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown;
    }
    SVar32 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar25 + 0x10) + 0x10);
    *(undefined8 *)(puVar27 + -0x40) = 0x44611b3;
    SVar14 = "-switch";
    SVar10 = (System_Nullable_bool__Fields)
             System_String__Concat_3ae5ba0
                       ((System_String_o *)SVar32,(System_String_o *)"-switch",(MethodInfo *)0x0);
    SVar20.hasValue = 0;
    SVar20.value = 0;
    if (*(long *)((long)SVar25 + 0x10) == 0) goto label_044612b2;
    plVar4 = *(long **)(*(long *)((long)SVar25 + 0x10) + 0x28);
    if (plVar4 == (long *)0x0) {
      ui._0_4_ = 0;
      ui._4_4_ = 0;
    }
    else {
      lVar21 = *plVar4;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar33 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) + 2) * 0x10 + lVar21 + 0x138);
            goto label_04461243;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar33);
      }
      *(undefined8 *)(puVar27 + -0x40) = 0x446121c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,2);
label_04461243:
      uVar23 = puVar11[1];
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)(puVar27 + -0x40) = 0x446124c;
      uVar8 = (*pcVar5)(plVar4,uVar23);
      ui._4_4_ = 0;
      ui._0_4_ = uVar8;
    }
    *(undefined8 *)(puVar27 + -0x40) = 0x446125d;
    options = (uint *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    SVar20.hasValue = 0;
    SVar20.value = 0;
    *(undefined8 *)(puVar27 + -0x40) = 0x4461277;
    SVar14 = SVar25;
    SVar32 = (System_Nullable_bool__Fields)options;
    System_Action_GisketchActionContext____ctor();
    SVar39.hasValue = 0;
    SVar39.value = 0;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)options;
    SVar12 = SVar10;
    if (SVar18 == (System_Nullable_bool__Fields)0x0) goto label_044612b2;
    *(undefined8 *)(puVar27 + -0x40) = 0x4461291;
    SVar12 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_Code_AottgUi__Switch
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,(System_String_o *)SVar10,(uint)ui & 0xff,
                        (System_Action_GisketchActionContext__o *)options,(MethodInfo *)0x0);
    uVar44 = 0x42680000;
    SVar14 = *(System_Nullable_bool__Fields *)(puVar27 + -0x30);
    SVar40 = *(System_Nullable_bool__Fields *)(puVar27 + -0x28);
    SVar10 = *(System_Nullable_bool__Fields *)(puVar27 + -0x20);
    SVar20 = *(System_Nullable_bool__Fields *)(puVar27 + -0x18);
    SVar18 = *(System_Nullable_bool__Fields *)(puVar27 + -0x10);
    ui = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar27 + -8);
    puVar31 = puVar27;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar25;
  }
  else {
    options = &switchD_04461101::switchdataD_00d999d4;
    SVar14 = SVar18;
    switch(*(undefined4 *)(*(long *)((long)SVar32 + 0x10) + 0x20)) {
    case 0:
      SVar20 = (System_Nullable_bool__Fields)options;
      SVar25 = SVar32;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch;
    case 1:
      auVar46._8_8_ = 1;
      auVar46._0_8_ = uVar9;
      break;
    case 2:
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar9;
      puVar28 = &stack0xffffffffffffff98;
      break;
    case 3:
      SVar40 = (System_Nullable_bool__Fields)options;
      SVar20 = (System_Nullable_bool__Fields)__this;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar32;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider;
    case 4:
      SVar20 = (System_Nullable_bool__Fields)ui;
      SVar25 = SVar18;
      ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar32;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput;
    case 5:
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton;
    default:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly
                ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar32,
                 (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,auVar46._8_8_);
      return;
    }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown:
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar28 + -8) = ui;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x10) = SVar12;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x20) = SVar10;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x28) = SVar39;
    *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar28 + -0x30) = __this;
    puVar31 = puVar28 + -0x38;
    *(long *)(puVar28 + -0x38) = auVar46._0_8_;
    SVar39 = (System_Nullable_bool__Fields)(auVar46._8_8_ & 0xffffffff);
    SVar40 = (System_Nullable_bool__Fields)options;
    SVar18 = SVar14;
    if (g_data_057ae792 == '\0') {
      *(undefined8 *)(puVar28 + -0x40) = 0x44612e9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar28 + -0x40) = 0x44612f5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)(puVar28 + -0x40) = 0x4461301;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar28 + -0x40) = 0x446130d;
      il2cpp_runtime_helper_023445d0(&"-select");
      *(undefined8 *)(puVar28 + -0x40) = 0x4461319;
      il2cpp_runtime_helper_023445d0(&"-dropdown");
      g_data_057ae792 = '\x01';
      SVar40 = (System_Nullable_bool__Fields)options;
    }
    *(undefined8 *)(puVar28 + -0x40) = 0x4461328;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar32;
    options = (uint *)Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions
                                ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar32,
                                 (MethodInfo *)SVar18);
    lVar21 = *(long *)((long)SVar32 + 0x10);
    if (lVar21 != 0) {
      ui = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(lVar21 + 0x28);
      if ((System_Nullable_bool__Fields)ui == (System_Nullable_bool__Fields)0x0) {
        SVar10 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
        pSVar22 = *(System_String_o **)(lVar21 + 0x10);
        if ((char)SVar39.hasValue != '\0') goto label_044613e9;
label_0446145e:
        *(undefined8 *)(puVar28 + -0x40) = 0x446146f;
        SVar39 = (System_Nullable_bool__Fields)
                 System_String__Concat_3ae5ba0(pSVar22,"-select",(MethodInfo *)0x0);
        *(undefined8 *)(puVar28 + -0x40) = 0x4461481;
        ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar40.hasValue = 0;
        SVar40.value = 0;
        *(undefined8 *)(puVar28 + -0x40) = 0x446149b;
        SVar18 = SVar32;
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)ui;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)SVar32 + 0x10) == 0) || (SVar14 == (System_Nullable_bool__Fields)0x0))
        goto label_044614ee;
        uVar8 = *(uint *)(*(long *)((long)SVar32 + 0x10) + 0x5c);
        *(undefined8 *)(puVar28 + -0x40) = 0;
        *(ulong *)(puVar28 + -0x48) = (ulong)uVar8;
        *(undefined8 *)(puVar28 + -0x50) = 0x44614c9;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,(System_String_o *)SVar39,
                            (System_String_o *)SVar10,
                            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                            (System_Action_GisketchActionContext__o *)ui,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            *(int32_t *)(puVar28 + -0x48),*(MethodInfo **)(puVar28 + -0x40));
label_044614c9:
        uVar44 = 0x43960000;
        SVar14 = *(System_Nullable_bool__Fields *)(puVar28 + -0x30);
        SVar40 = *(System_Nullable_bool__Fields *)(puVar28 + -0x28);
        SVar10 = *(System_Nullable_bool__Fields *)(puVar28 + -0x20);
        SVar20 = *(System_Nullable_bool__Fields *)(puVar28 + -0x18);
        SVar18 = *(System_Nullable_bool__Fields *)(puVar28 + -0x10);
        ui = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar28 + -8);
        puVar31 = puVar28;
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar32;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      lVar21 = *(long *)ui;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar33 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
            SVar40 = (System_Nullable_bool__Fields)
                     ((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) * 0x10 + lVar21 + 0x138);
            goto label_044613c7;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar33);
      }
      *(undefined8 *)(puVar28 + -0x40) = 0x4461389;
      SVar40 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(ui,TypeInfo_IAottgSettingAdapter,0);
label_044613c7:
      SVar18 = *(System_Nullable_bool__Fields *)((long)SVar40 + 8);
      SVar12 = *(System_Nullable_bool__Fields *)SVar40;
      *(undefined8 *)(puVar28 + -0x40) = 0x44613d0;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)ui;
      SVar10 = (System_Nullable_bool__Fields)(*(code *)SVar12)();
      if (*(long *)((long)SVar32 + 0x10) != 0) {
        pSVar22 = *(System_String_o **)(*(long *)((long)SVar32 + 0x10) + 0x10);
        if ((char)SVar39.hasValue == '\0') goto label_0446145e;
label_044613e9:
        *(undefined8 *)(puVar28 + -0x40) = 0x44613fa;
        SVar39 = (System_Nullable_bool__Fields)
                 System_String__Concat_3ae5ba0(pSVar22,"-dropdown",(MethodInfo *)0x0);
        *(undefined8 *)(puVar28 + -0x40) = 0x446140c;
        ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar40.hasValue = 0;
        SVar40.value = 0;
        *(undefined8 *)(puVar28 + -0x40) = 0x4461426;
        SVar18 = SVar32;
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)ui;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)SVar32 + 0x10) != 0) && (SVar14 != (System_Nullable_bool__Fields)0x0)) {
          uVar8 = *(uint *)(*(long *)((long)SVar32 + 0x10) + 0x5c);
          *(undefined8 *)(puVar28 + -0x40) = 0;
          *(ulong *)(puVar28 + -0x48) = (ulong)uVar8;
          *(undefined8 *)(puVar28 + -0x50) = 0x446145c;
          SVar12 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,(System_String_o *)SVar39,
                              (System_String_o *)SVar10,
                              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                              (System_Action_GisketchActionContext__o *)ui,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(int32_t *)(puVar28 + -0x48),*(MethodInfo **)(puVar28 + -0x40));
          goto label_044614c9;
        }
      }
    }
label_044614ee:
    *(undefined8 *)(puVar28 + -0x40) = 0x44614f3;
    il2cpp_runtime_helper_022b2c90();
    SVar20 = SVar32;
    unaff_R14 = SVar14;
    SVar12 = (System_Nullable_bool__Fields)options;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider:
    *(System_Nullable_bool__Fields *)(puVar31 + -8) = SVar12;
    *(System_Nullable_bool__Fields *)(puVar31 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar31 + -0x18) = SVar39;
    *(System_Nullable_bool__Fields *)(puVar31 + -0x20) = SVar20;
    puVar29 = puVar31 + -0x78;
    options = (uint *)SVar40;
    SVar25 = SVar18;
    SVar32 = (System_Nullable_bool__Fields)__this;
    if (g_data_057ae793 == '\0') {
      *(undefined8 *)(puVar31 + -0x80) = 0x4461526;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      *(undefined8 *)(puVar31 + -0x80) = 0x4461532;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
      *(undefined8 *)(puVar31 + -0x80) = 0x446153e;
      il2cpp_runtime_helper_023445d0(&"clear");
      *(undefined8 *)(puVar31 + -0x80) = 0x446154a;
      il2cpp_runtime_helper_023445d0(&"-slider-with-value");
      *(undefined8 *)(puVar31 + -0x80) = 0x4461556;
      il2cpp_runtime_helper_023445d0(&"Center");
      *(undefined8 *)(puVar31 + -0x80) = 0x4461562;
      il2cpp_runtime_helper_023445d0(&"Row");
      SVar32 = (System_Nullable_bool__Fields)&"-slider";
      *(undefined8 *)(puVar31 + -0x80) = 0x446156e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae793 = '\x01';
      options = (uint *)SVar40;
    }
    lVar21 = *(long *)((long)__this + 0x10);
    if (lVar21 != 0) {
      if (*(char *)(lVar21 + 0x59) == '\0') {
        pSVar22 = *(System_String_o **)(lVar21 + 0x10);
        *(undefined8 *)(puVar31 + -0x80) = 0x44616d7;
        pSVar22 = System_String__Concat_3ae5ba0(pSVar22,"-slider",(MethodInfo *)0x0);
        *(undefined8 *)(puVar31 + -0x80) = 0x44616e5;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                           (__this,(Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,pSVar22,(MethodInfo *)options);
        uVar44 = 0x441b0000;
        SVar14 = *(System_Nullable_bool__Fields *)(puVar31 + -0x20);
        SVar40 = *(System_Nullable_bool__Fields *)(puVar31 + -0x18);
        SVar20 = *(System_Nullable_bool__Fields *)(puVar31 + -0x10);
        SVar18 = *(System_Nullable_bool__Fields *)(puVar31 + -8);
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      *(undefined8 *)(puVar31 + -0x80) = 0x446159b;
      SVar12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)(puVar31 + -0x80) = 0x44615b5;
      SVar25 = (System_Nullable_bool__Fields)__this;
      SVar32 = SVar12;
      System_Action_object____ctor();
      if (*(long *)((long)__this + 0x10) != 0) {
        pSVar22 = *(System_String_o **)(*(long *)((long)__this + 0x10) + 0x10);
        *(undefined8 *)(puVar31 + -0x80) = 0x44615d7;
        SVar39 = (System_Nullable_bool__Fields)
                 System_String__Concat_3ae5ba0(pSVar22,"-slider-with-value",(MethodInfo *)0x0);
        *(undefined8 *)(puVar31 + -0x80) = 0x44615e9;
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)
                 Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
        *(undefined8 *)(puVar31 + -0x80) = 0x44615fb;
        pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x60) = pGVar15;
        *(undefined8 *)(puVar31 + -0x78) = 0;
        *(undefined8 *)(puVar31 + -0x70) = 0;
        *(undefined8 *)(puVar31 + -0x30) = 0;
        *(undefined4 *)(puVar31 + -0x38) = 0x3f800000;
        *(undefined4 *)(puVar31 + -0x40) = 0;
        *(undefined4 *)(puVar31 + -0x48) = 0;
        *(undefined4 *)(puVar31 + -0x50) = 0;
        *(undefined8 *)(puVar31 + -0x58) = 0;
        *(undefined8 *)(puVar31 + -0x68) = 0;
        SVar25.hasValue = 0;
        SVar25.value = 0;
        options._0_4_ = 0;
        options._4_4_ = 0;
        *(undefined8 *)(puVar31 + -0x80) = 0x446168b;
        SVar32 = "Row";
        pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x78),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x70),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x68),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x60),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x58),0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,*(float *)(puVar31 + -0x50),*(float *)(puVar31 + -0x48),
                             *(float *)(puVar31 + -0x40),*(float *)(puVar31 + -0x38),
                             *(MethodInfo **)(puVar31 + -0x30));
        if (SVar18 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar31 + -0x78) = 0;
          *(undefined8 *)(puVar31 + -0x80) = 0x44616b6;
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,"clear",
                     (System_Action_AottgUi__o *)SVar12,(System_String_o *)SVar39,pGVar17,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     *(MethodInfo **)(puVar31 + -0x78));
          return;
        }
      }
    }
    *(undefined8 *)(puVar31 + -0x80) = 0x4461708;
    il2cpp_runtime_helper_022b2c90();
    SVar20 = (System_Nullable_bool__Fields)ui;
    ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar32;
    unaff_R14 = SVar18;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput:
    *(System_Nullable_bool__Fields *)(puVar29 + -8) = SVar20;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x10) = SVar12;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x20) = SVar10;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x28) = SVar39;
    *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar29 + -0x30) = __this;
    puVar30 = puVar29 + -0x58;
    SVar18 = SVar25;
    SVar32 = (System_Nullable_bool__Fields)ui;
    if (g_data_057ae795 == '\0') {
      *(undefined8 *)(puVar29 + -0x60) = 0x4461739;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar29 + -0x60) = 0x4461745;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)(puVar29 + -0x60) = 0x4461751;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      *(undefined8 *)(puVar29 + -0x60) = 0x446175d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar29 + -0x60) = 0x4461769;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)(puVar29 + -0x60) = 0x4461775;
      il2cpp_runtime_helper_023445d0(&"inputField");
      SVar32 = (System_Nullable_bool__Fields)&"-input";
      *(undefined8 *)(puVar29 + -0x60) = 0x4461781;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
    }
    lVar21 = *(long *)((long)ui + 0x10);
    if (lVar21 != 0) {
      if (*(long **)(lVar21 + 0x28) == (long *)0x0) {
        *(undefined4 *)(puVar29 + -0x54) = 1;
      }
      else {
        *(uint *)(puVar29 + -0x54) = (uint)(**(long **)(lVar21 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      pSVar22 = *(System_String_o **)(lVar21 + 0x10);
      *(undefined8 *)(puVar29 + -0x60) = 0x44617d4;
      SVar39 = (System_Nullable_bool__Fields)
               System_String__Concat_3ae5ba0(pSVar22,"-input",(MethodInfo *)0x0);
      SVar10 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      *(undefined8 *)(puVar29 + -0x60) = 0x44617fe;
      pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar29 + -0x60) = 0x4461810;
      pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x90) = pGVar16;
      *(undefined8 *)(puVar29 + -0xa8) = 0;
      *(undefined8 *)(puVar29 + -0xa0) = 0;
      *(undefined8 *)(puVar29 + -0x60) = 0;
      *(undefined4 *)(puVar29 + -0x68) = 0x3f800000;
      *(undefined4 *)(puVar29 + -0x70) = 0;
      *(undefined4 *)(puVar29 + -0x78) = 0;
      *(undefined4 *)(puVar29 + -0x80) = 0;
      *(undefined8 *)(puVar29 + -0x88) = 0;
      *(undefined8 *)(puVar29 + -0x98) = 0;
      *(undefined4 *)(puVar29 + -0x50) = 0;
      *(undefined8 *)(puVar29 + -0xb0) = 0x44618a3;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)
               Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar15,
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0xa8),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0xa0),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x98),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x90),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x88),0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,*(float *)(puVar29 + -0x80),*(float *)(puVar29 + -0x78),
                          *(float *)(puVar29 + -0x70),*(float *)(puVar29 + -0x68),
                          *(MethodInfo **)(puVar29 + -0x60));
      *(undefined8 *)(puVar29 + -0x60) = 0x44618b9;
      unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)(puVar29 + -0x60) = 0x44618d3;
      SVar18 = (System_Nullable_bool__Fields)ui;
      SVar32 = unaff_R14;
      System_Action_GisketchActionContext____ctor();
      *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar29 + -0x38) = ui;
      if (*(long *)((long)ui + 0x10) != 0) {
        ui = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*(long *)((long)ui + 0x10) + 0x28);
        *(System_Nullable_bool__Fields *)(puVar29 + -0x40) = SVar25;
        fVar45 = 0.05;
        bVar42 = (System_Nullable_bool__Fields)ui == (System_Nullable_bool__Fields)0x0;
        SVar41 = SVar10;
        SVar12 = SVar39;
        if (bVar42) {
          SVar41.hasValue = 0;
          SVar41.value = 0;
          SVar12 = (System_Nullable_bool__Fields)ui;
          SVar25 = (System_Nullable_bool__Fields)ui;
        }
        uVar8 = *(uint *)(puVar29 + -0x54);
        SVar18.value = 0;
        SVar18.hasValue = uVar8;
        SVar26 = unaff_R14;
        layout = (System_Nullable_bool__Fields)__this;
        pSVar22 = "inputField";
        uVar7 = uVar8;
        if (bVar42) {
          SVar26.hasValue = 0;
          SVar26.value = 0;
          layout.hasValue = 0;
          layout.value = 0;
          pSVar22 = (System_String_o *)0x0;
          uVar7 = 0;
        }
        uVar23 = 0;
        if (bVar42) {
          SVar25 = *(System_Nullable_bool__Fields *)(puVar29 + -0x40);
          pSVar22 = "inputField";
          SVar26 = unaff_R14;
          SVar32 = SVar39;
          layout = (System_Nullable_bool__Fields)__this;
        }
        else {
          *(undefined4 *)(puVar29 + -0x50) = 0x3d4ccccd;
          lVar21 = *(long *)ui;
          uVar2 = *(ushort *)(lVar21 + 0x12e);
          *(System_String_o **)(puVar29 + -0x48) = pSVar22;
          *(uint *)(puVar29 + -0x4c) = uVar7;
          if ((ulong)uVar2 != 0) {
            lVar33 = 0;
            do {
              if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                puVar11 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) + 7) * 0x10 + lVar21 + 0x138
                          );
                goto label_044619df;
              }
              lVar33 = lVar33 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar33);
          }
          *(undefined8 *)(puVar29 + -0x60) = 0x446199f;
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(ui,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          SVar18 = *(System_Nullable_bool__Fields *)(puVar11 + 1);
          pcVar5 = (code *)*puVar11;
          *(undefined8 *)(puVar29 + -0x60) = 0x44619e8;
          SVar32 = (System_Nullable_bool__Fields)ui;
          uVar23 = (*pcVar5)();
          fVar45 = *(float *)(puVar29 + -0x50);
          uVar8 = *(uint *)(puVar29 + -0x4c);
          pSVar22 = *(System_String_o **)(puVar29 + -0x48);
          SVar10 = SVar41;
          SVar39 = SVar12;
          unaff_R14 = layout;
        }
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar26;
        options._4_4_ = 0;
        options._0_4_ = uVar8;
        if (SVar25 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar29 + -0x60) = 0;
          *(undefined8 *)(puVar29 + -0x68) = uVar23;
          *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar29 + -0x70) = __this;
          *(undefined8 *)(puVar29 + -0x78) = 0;
          *(undefined8 *)(puVar29 + -0x80) = 0x4461a17;
          SVar18 = SVar39;
          SVar32 = SVar25;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar25,(System_String_o *)SVar39,
                               (System_String_o *)SVar10,uVar8,pSVar22,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)layout,
                               *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar29 + -0x78),
                               *(System_Action_GisketchActionContext__o **)(puVar29 + -0x70),fVar45,
                               *(int32_t *)(puVar29 + -0x68),*(MethodInfo **)(puVar29 + -0x60));
          options._0_4_ = 0;
          options._4_4_ = 0;
          if (*(long *)(*(long *)(puVar29 + -0x38) + 0x10) != 0) {
            ui = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*(long *)(*(long *)(puVar29 + -0x38) + 0x10) + 0x28);
            if ((System_Nullable_bool__Fields)ui == (System_Nullable_bool__Fields)0x0) {
              options = *(uint **)(g_data_057b9c00 + 0xb8);
              SVar18 = *(System_Nullable_bool__Fields *)options;
            }
            else {
              lVar21 = *(long *)ui;
              if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
                lVar33 = 0;
                do {
                  if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                    options = (uint *)((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) * 0x10 + lVar21 +
                                      0x138);
                    goto label_04461ac3;
                  }
                  lVar33 = lVar33 + 0x10;
                } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar33);
              }
              *(undefined8 *)(puVar29 + -0x60) = 0x4461a89;
              options = (uint *)il2cpp_runtime_helper_02300d20(ui,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              SVar12 = *(System_Nullable_bool__Fields *)((long)options + 8);
              SVar18 = *(System_Nullable_bool__Fields *)options;
              *(undefined8 *)(puVar29 + -0x60) = 0x4461acc;
              SVar32 = (System_Nullable_bool__Fields)ui;
              SVar18 = (System_Nullable_bool__Fields)(*(code *)SVar18)(ui,SVar12);
            }
            __this._0_4_ = 0;
            __this._4_4_ = 0;
            if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar13->fields).value = (System_String_o *)SVar18;
              il2cpp_runtime_helper_022b4080(&(pGVar13->fields).value);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar29 + -0x60) = 0x4461af7;
    il2cpp_runtime_helper_022b2c90();
    SVar12 = SVar25;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton:
    *(System_Nullable_bool__Fields *)(puVar30 + -8) = SVar12;
    *(System_Nullable_bool__Fields *)(puVar30 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar30 + -0x18) = SVar39;
    *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar30 + -0x20) = __this;
    SVar25 = (System_Nullable_bool__Fields)options;
    SVar40 = SVar18;
    SVar20 = SVar32;
    if (g_data_057ae796 == '\0') {
      SVar20 = (System_Nullable_bool__Fields)&"-button";
      *(undefined8 *)(puVar30 + -0x40) = 0x4461b26;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
      SVar25 = (System_Nullable_bool__Fields)options;
    }
    lVar21 = *(long *)((long)SVar32 + 0x10);
    SVar14 = (System_Nullable_bool__Fields)__this;
    if (lVar21 == 0) {
label_04461c07:
      *(undefined8 *)(puVar30 + -0x40) = 0x4461c0c;
      il2cpp_runtime_helper_022b2c90();
      *(System_Nullable_bool__Fields *)(puVar30 + -0x40) = SVar18;
      *(System_Nullable_bool__Fields *)(puVar30 + -0x48) = SVar32;
      *(System_Nullable_bool__Fields *)(puVar30 + -0x50) = SVar10;
      *(System_Nullable_bool__Fields *)(puVar30 + -0x58) = SVar39;
      *(System_Nullable_bool__Fields *)(puVar30 + -0x60) = SVar14;
      puVar31 = puVar30 + -0xb0;
      options = (uint *)SVar25;
      SVar12 = SVar40;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar20;
      if (g_data_057ae797 == '\0') {
        *(undefined8 *)(puVar30 + -0xb8) = 0x4461c38;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        *(undefined8 *)(puVar30 + -0xb8) = 0x4461c44;
        il2cpp_runtime_helper_023445d0(&"Column");
        *(undefined8 *)(puVar30 + -0xb8) = 0x4461c50;
        il2cpp_runtime_helper_023445d0(&"text");
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-value";
        *(undefined8 *)(puVar30 + -0xb8) = 0x4461c5c;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        options = (uint *)SVar25;
      }
      lVar21 = *(long *)((long)SVar20 + 0x10);
      if (lVar21 != 0) {
        SVar14 = *(System_Nullable_bool__Fields *)(lVar21 + 0x80);
        if (SVar14 == (System_Nullable_bool__Fields)0x0) {
          SVar18 = *(System_Nullable_bool__Fields *)(lVar21 + 0x28);
          if (SVar18 == (System_Nullable_bool__Fields)0x0) {
            options = *(uint **)(g_data_057b9c00 + 0xb8);
            SVar14 = *(System_Nullable_bool__Fields *)options;
            SVar10.hasValue = 0;
            SVar10.value = 0;
          }
          else {
            lVar21 = *(long *)SVar18;
            if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
              lVar33 = 0;
              do {
                if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                  options = (uint *)((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) * 0x10 + lVar21 +
                                    0x138);
                  goto label_04461d0b;
                }
                lVar33 = lVar33 + 0x10;
              } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar33);
            }
            *(undefined8 *)(puVar30 + -0xb8) = 0x4461cd9;
            options = (uint *)il2cpp_runtime_helper_02300d20(SVar18,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar12 = *(System_Nullable_bool__Fields *)((long)options + 8);
            SVar39 = *(System_Nullable_bool__Fields *)options;
            *(undefined8 *)(puVar30 + -0xb8) = 0x4461d14;
            __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18;
            SVar14 = (System_Nullable_bool__Fields)(*(code *)SVar39)();
            lVar21 = *(long *)((long)SVar20 + 0x10);
            SVar10 = SVar40;
            if (lVar21 == 0) goto label_04461e40;
          }
        }
        __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(lVar21 + 0x10);
        *(undefined8 *)(puVar30 + -0xb8) = 0x4461d3c;
        SVar12 = "-value";
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)__this,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (SVar40 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar30 + -0xb0) = 0;
          *(undefined8 *)(puVar30 + -0xb8) = 0x4461d6b;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar40,(System_String_o *)SVar14,
                               "text",pSVar22,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               *(MethodInfo **)(puVar30 + -0xb0));
          *(undefined8 *)(puVar30 + -0xb8) = 0x4461d7d;
          SVar20 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          *(undefined8 *)(puVar30 + -0xb8) = 0x4461d8f;
          pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar30 + -0x98) = pGVar15;
          *(undefined8 *)(puVar30 + -0xb0) = 0;
          *(undefined8 *)(puVar30 + -0xa8) = 0;
          *(undefined8 *)(puVar30 + -0x68) = 0;
          *(undefined4 *)(puVar30 + -0x70) = 0x3f800000;
          *(undefined4 *)(puVar30 + -0x78) = 0;
          *(undefined4 *)(puVar30 + -0x80) = 0;
          *(undefined4 *)(puVar30 + -0x88) = 0;
          *(undefined8 *)(puVar30 + -0x90) = 0;
          *(undefined8 *)(puVar30 + -0xa0) = 0;
          SVar12.hasValue = 0;
          SVar12.value = 0;
          options._0_4_ = 0;
          options._4_4_ = 0;
          *(undefined8 *)(puVar30 + -0xb8) = 0x4461e15;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)"Column";
          pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar20,
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar30 + -0xb0),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar30 + -0xa8),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar30 + -0xa0),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar30 + -0x98),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar30 + -0x90),0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,*(float *)(puVar30 + -0x88),*(float *)(puVar30 + -0x80),
                               *(float *)(puVar30 + -0x78),*(float *)(puVar30 + -0x70),
                               *(MethodInfo **)(puVar30 + -0x68));
          SVar14.hasValue = 0;
          SVar14.value = 0;
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar13->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar17;
            il2cpp_runtime_helper_022b4080(&(pGVar13->fields).search,pGVar17);
            return;
          }
        }
      }
label_04461e40:
      *(undefined8 *)(puVar30 + -0xb8) = 0x4461e45;
      uVar44 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      SVar39 = *(System_Nullable_bool__Fields *)(lVar21 + 0x68);
      options = *(uint **)(lVar21 + 0x78);
      SVar40 = "-button";
      if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) {
        if (SVar39 == (System_Nullable_bool__Fields)0x0) {
          SVar39 = *(System_Nullable_bool__Fields *)(lVar21 + 0x18);
        }
        SVar20 = *(System_Nullable_bool__Fields *)(lVar21 + 0x10);
        options = *(uint **)(lVar21 + 0x70);
        *(undefined8 *)(puVar30 + -0x40) = 0x4461bbb;
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar20,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar14 = (System_Nullable_bool__Fields)options;
        if (SVar18 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)(puVar30 + -0x38) = 0;
        *(undefined8 *)(puVar30 + -0x30) = 0;
        *(undefined8 *)(puVar30 + -0x28) = 0;
        *(undefined8 *)(puVar30 + -0x40) = 0x4461be9;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,1,(System_String_o *)SVar39,
                            (System_String_o *)options,pSVar22,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar30 + -0x38),
                            *(System_String_o **)(puVar30 + -0x30),*(MethodInfo **)(puVar30 + -0x28));
      }
      else {
        if (SVar39 == (System_Nullable_bool__Fields)0x0) {
          SVar39 = *(System_Nullable_bool__Fields *)(lVar21 + 0x18);
        }
        SVar20 = *(System_Nullable_bool__Fields *)(lVar21 + 0x10);
        *(undefined8 *)(puVar30 + -0x40) = 0x4461b65;
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar20,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar14 = (System_Nullable_bool__Fields)options;
        if (SVar18 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)(puVar30 + -0x38) = 0;
        *(undefined8 *)(puVar30 + -0x30) = 0;
        *(undefined8 *)(puVar30 + -0x28) = 0;
        *(undefined8 *)(puVar30 + -0x40) = 0x4461b97;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,1,(System_String_o *)SVar39,
                            (System_Action_GisketchActionContext__o *)options,pSVar22,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar30 + -0x38),
                            *(System_String_o **)(puVar30 + -0x30),*(MethodInfo **)(puVar30 + -0x28));
      }
      uVar44 = 0x43a00000;
      SVar14 = *(System_Nullable_bool__Fields *)(puVar30 + -0x20);
      SVar40 = *(System_Nullable_bool__Fields *)(puVar30 + -0x18);
      SVar20 = *(System_Nullable_bool__Fields *)(puVar30 + -0x10);
      SVar18 = *(System_Nullable_bool__Fields *)(puVar30 + -8);
      puVar31 = puVar30;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar32;
    }
  }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout:
  *(System_Nullable_bool__Fields *)(puVar31 + -8) = SVar20;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x10) = SVar14;
  *(undefined4 *)(puVar31 + -0x14) = uVar44;
  __this_00 = SVar12;
  SVar34 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)(puVar31 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar31 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar34 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)(puVar31 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar12 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)__this + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)__this + 0x10) + 0x58);
    *(undefined2 *)(puVar31 + -0x16) = 0;
    *(undefined8 *)(puVar31 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar31 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar12 + 0x6b) = *(undefined2 *)(puVar31 + -0x16);
    *(undefined8 *)(puVar31 + -0x70) = 0x4461ee8;
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)(puVar31 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)(puVar31 + -0x70) = 0x4461efa;
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x50) = pGVar16;
    *(undefined8 *)(puVar31 + -0x68) = 0;
    *(undefined8 *)(puVar31 + -0x60) = 0;
    *(undefined8 *)(puVar31 + -0x20) = 0;
    *(undefined4 *)(puVar31 + -0x28) = 0x3f800000;
    *(undefined4 *)(puVar31 + -0x30) = 0;
    *(undefined4 *)(puVar31 + -0x38) = 0;
    *(undefined4 *)(puVar31 + -0x40) = 0;
    *(undefined8 *)(puVar31 + -0x48) = 0;
    *(undefined8 *)(puVar31 + -0x58) = 0;
    *(undefined8 *)(puVar31 + -0x70) = 0x4461f83;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar15,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x48),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar31 + -0x40),*(float *)(puVar31 + -0x38),
                         *(float *)(puVar31 + -0x30),*(float *)(puVar31 + -0x28),
                         *(MethodInfo **)(puVar31 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar12 + 0xd8) = pGVar17;
    *(undefined8 *)(puVar31 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar12 + 0xd8),pGVar17);
    return;
  }
  *(undefined8 *)(puVar31 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar31 + -0x70) = SVar18;
  *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar31 + -0x78) = __this;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x80) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x88) = SVar40;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x90) = SVar12;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)(puVar31 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)(puVar31 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar34 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)(puVar31 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar34 + 0x10) + 0x60);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      __this_00.hasValue = 0;
      __this_00.value = 0;
      *(undefined8 *)(puVar31 + -0x98) = 0x446200b;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    __this_00.value = 0;
    __this_00.hasValue = *(uint *)((long)__this + 0x18);
    *(undefined8 *)(puVar31 + -0x98) = 0x446202a;
    SVar18 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)__this + 0x18) < 1) {
      return;
    }
    if (SVar18 != (System_Nullable_bool__Fields)0x0) {
      SVar19 = (System_Nullable_bool__Fields)(*(ulong *)((long)__this + 0x18) & 0xffffffff);
      SVar10 = (System_Nullable_bool__Fields)((long)SVar18 + 0x20);
      SVar34.hasValue = 0;
      SVar34.value = 0;
      SVar40 = (System_Nullable_bool__Fields)__this;
      while (SVar40 = (System_Nullable_bool__Fields)((long)SVar40 + 0x20), (ulong)SVar34 < (ulong)SVar19) {
        *(undefined8 *)(puVar31 + -0x98) = 0x446205f;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar31 + -0x90),
                            (MethodInfo *)SVar40);
        options._4_4_ = 0;
        options._0_4_ = *(uint *)((long)SVar18 + 0x18);
        if (options <= (ulong)SVar34) break;
        *(System_Nullable_bool__Fields *)SVar10 = SVar12;
        *(undefined8 *)(puVar31 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(SVar10);
        SVar34 = (System_Nullable_bool__Fields)((long)SVar34 + 1);
        SVar19.value = 0;
        SVar19.hasValue = *(uint *)((long)__this + 0x18);
        options = (uint *)(long)(int)*(uint *)((long)__this + 0x18);
        SVar10 = (System_Nullable_bool__Fields)((long)SVar10 + 8);
        __this_00 = SVar12;
        if ((long)options <= (long)SVar34) {
          return;
        }
      }
      *(undefined8 *)(puVar31 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar12 = (System_Nullable_bool__Fields)((long)__this + 0x20);
  *(undefined8 *)(puVar31 + -0x98) = 0x44620b2;
  SVar35 = SVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar31 + -0x90),
             (MethodInfo *)SVar12);
  *(undefined8 *)(puVar31 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar31 + -0x98) = ui;
  *(System_Nullable_bool__Fields *)(puVar31 + -0xa0) = SVar18;
  *(System_Nullable_bool__Fields *)(puVar31 + -0xa8) = SVar12;
  *(System_Nullable_bool__Fields *)(puVar31 + -0xb0) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar31 + -0xb8) = SVar40;
  *(System_Nullable_bool__Fields *)(puVar31 + -0xc0) = SVar34;
  control = __this_00;
  SVar12 = SVar35;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)(puVar31 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar31 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)(puVar31 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar31 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar12 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)(puVar31 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar39 = __this_00;
  SVar32 = extraout_RDX;
  if (*(long *)((long)SVar35 + 0x10) != 0) {
    SVar34 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar35 + 0x10) + 0x28);
    if (SVar34 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)(puVar31 + -0xd0) = 0;
    }
    else {
      lVar21 = *(long *)SVar34;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar33 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      (lVar21 + (long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar33);
      }
      *(undefined8 *)(puVar31 + -0xf0) = 0x446219c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar34,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar23 = puVar11[1];
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)(puVar31 + -0xf0) = 0x44621cf;
      uVar44 = (*pcVar5)(SVar34,uVar23);
      *(undefined4 *)(puVar31 + -0xd0) = uVar44;
    }
    *(undefined8 *)(puVar31 + -0xf0) = 0x44621e4;
    SVar20 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar31 + -0xf0) = 0x44621fe;
    control = SVar35;
    SVar12 = SVar20;
    System_Action_GisketchActionContext____ctor();
    SVar18 = "slider";
    options = *(uint **)((long)SVar35 + 0x10);
    SVar39 = SVar20;
    SVar40 = __this_00;
    SVar10 = extraout_RDX;
    SVar32 = extraout_RDX;
    if ((System_Nullable_bool__Fields)options != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)(puVar31 + -200) = SVar35;
      SVar34 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      fVar45 = 0.0;
      SVar25 = extraout_RDX;
      SVar32 = __this_00;
      if (SVar34 == (System_Nullable_bool__Fields)0x0) {
        SVar25 = SVar34;
        SVar32 = SVar34;
      }
      fVar43 = *(float *)(puVar31 + -0xd0);
      SVar10 = extraout_RDX;
      if (SVar34 != (System_Nullable_bool__Fields)0x0) {
        lVar21 = *(long *)SVar34;
        uVar2 = *(ushort *)(lVar21 + 0x12e);
        *(float *)(puVar31 + -0xcc) = fVar43;
        if ((ulong)uVar2 != 0) {
          lVar33 = 0;
          do {
            if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
              puVar11 = (undefined8 *)
                        (lVar21 + (long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar33 = lVar33 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar33);
        }
        *(undefined8 *)(puVar31 + -0xf0) = 0x446229c;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar34,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control = *(System_Nullable_bool__Fields *)(puVar11 + 1);
        pcVar5 = (code *)*puVar11;
        *(undefined8 *)(puVar31 + -0xf0) = 0x44622c3;
        SVar12 = SVar34;
        fVar45 = (float)(*pcVar5)();
        options = *(uint **)(*(long *)(puVar31 + -200) + 0x10);
        SVar40 = SVar20;
        SVar10 = SVar25;
        SVar35 = SVar18;
        if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        fVar43 = *(float *)(puVar31 + -0xcc);
        __this_00 = SVar32;
      }
      SVar39 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      SVar35 = __this_00;
      SVar32 = SVar20;
      if (SVar39 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        SVar40 = *(System_Nullable_bool__Fields *)(puVar31 + -200);
        if (__this_00 == (System_Nullable_bool__Fields)0x0) {
          SVar34.hasValue = 0;
          SVar34.value = 0;
          control = SVar10;
        }
        else {
label_044623de:
          *(undefined8 *)(puVar31 + -0xe8) = 0;
          *(undefined8 *)(puVar31 + -0xf0) = 0x44623fc;
          options = (uint *)SVar20;
          control = SVar10;
          SVar12 = __this_00;
          SVar34 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,(System_String_o *)SVar10,fVar43,0
                              ,(System_Action_GisketchActionContext__o *)SVar20,(System_String_o *)SVar18,
                              fVar45,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)(puVar31 + -0xe8));
          if (*(long *)((long)SVar40 + 0x10) != 0) {
            bVar42 = *(char *)(*(long *)((long)SVar40 + 0x10) + 0x58) == '\0';
            *(undefined2 *)(puVar31 + -0xd2) = 0;
            control._1_7_ = 0;
            control.hasValue._0_1_ = bVar42;
            SVar12 = (System_Nullable_bool__Fields)((long)puVar31 + -0xd2);
            *(undefined8 *)(puVar31 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar12,(uint)bVar42,MethodInfo_Nullable_1_Boolean);
            if (SVar34 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar34 + 0x6b) = *(undefined2 *)(puVar31 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar21 = *(long *)SVar39;
        uVar2 = *(ushort *)(lVar21 + 0x12e);
        SVar40 = *(System_Nullable_bool__Fields *)(puVar31 + -200);
        *(float *)(puVar31 + -0xd0) = fVar45;
        *(float *)(puVar31 + -0xcc) = fVar43;
        options._0_4_ = 0;
        options._4_4_ = 0;
        if ((ulong)uVar2 != 0) {
          options = (uint *)((ulong)uVar2 << 4);
          SVar36.hasValue = 0;
          SVar36.value = 0;
          do {
            if (*(long *)(*(long *)(lVar21 + 0xb0) + (long)SVar36) == TypeInfo_IAottgSettingAdapter) {
              options = (uint *)((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + (long)SVar36) + 4) * 0x10);
              puVar11 = (undefined8 *)(lVar21 + (long)options + 0x138);
              goto label_044623be;
            }
            SVar36 = (System_Nullable_bool__Fields)((long)SVar36 + 0x10);
          } while ((System_Nullable_bool__Fields)options != SVar36);
        }
        *(undefined8 *)(puVar31 + -0xf0) = 0x446237c;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar39,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control = *(System_Nullable_bool__Fields *)(puVar11 + 1);
        pcVar5 = (code *)*puVar11;
        *(undefined8 *)(puVar31 + -0xf0) = 0x44623c7;
        SVar12 = SVar39;
        max = (float)(*pcVar5)();
        fVar45 = *(float *)(puVar31 + -0xd0);
        fVar43 = *(float *)(puVar31 + -0xcc);
        SVar34 = SVar18;
        if (__this_00 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)(puVar31 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar31 + -0xf0) = SVar35;
  *(System_Nullable_bool__Fields *)(puVar31 + -0xf8) = SVar32;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x100) = SVar34;
  SVar32 = SVar12;
  if (g_data_057ae798 == '\0') {
    SVar32 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)(puVar31 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar21 = *(long *)((long)SVar12 + 0x10);
  if (lVar21 != 0) {
    SVar35 = (System_Nullable_bool__Fields)((long)puVar31 + -0xe0);
    SVar34 = *(System_Nullable_bool__Fields *)(lVar21 + 0x28);
    if (SVar34 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar31 + -0x110) = *(undefined8 *)(puVar31 + -0xd0);
      *(undefined8 *)(puVar31 + -0x108) = *(undefined8 *)(puVar31 + -200);
      *(undefined8 *)(puVar31 + -0x120) = *(undefined8 *)SVar35;
      *(undefined8 *)(puVar31 + -0x118) = *(undefined8 *)(puVar31 + -0xd8);
label_0446256c:
      *(undefined8 *)(puVar31 + -0x130) = *(undefined8 *)(puVar31 + -0x110);
      *(undefined8 *)(puVar31 + -0x128) = *(undefined8 *)(puVar31 + -0x108);
      *(undefined8 *)(puVar31 + -0x140) = *(undefined8 *)(puVar31 + -0x120);
      *(undefined8 *)(puVar31 + -0x138) = *(undefined8 *)(puVar31 + -0x118);
      lVar21 = *(long *)(lVar21 + 0x88);
      if (lVar21 != 0) {
        uVar23 = *(undefined8 *)(lVar21 + 0x28);
        uVar6 = *(undefined8 *)(lVar21 + 0x40);
        *(undefined4 *)(puVar31 + -0x150) = *(undefined4 *)(puVar31 + -0x130);
        *(undefined4 *)(puVar31 + -0x14c) = *(undefined4 *)(puVar31 + -300);
        *(undefined4 *)(puVar31 + -0x148) = *(undefined4 *)(puVar31 + -0x128);
        *(undefined4 *)(puVar31 + -0x144) = *(undefined4 *)(puVar31 + -0x124);
        *(undefined4 *)(puVar31 + -0x160) = *(undefined4 *)(puVar31 + -0x140);
        *(undefined4 *)(puVar31 + -0x15c) = *(undefined4 *)(puVar31 + -0x13c);
        *(undefined4 *)(puVar31 + -0x158) = *(undefined4 *)(puVar31 + -0x138);
        *(undefined4 *)(puVar31 + -0x154) = *(undefined4 *)(puVar31 + -0x134);
        pcVar5 = *(code **)(lVar21 + 0x18);
        *(undefined8 *)(puVar31 + -0x168) = 0x44625a7;
        (*pcVar5)(uVar6,uVar23);
      }
      return;
    }
    *(undefined4 *)(puVar31 + -0x130) = *(undefined4 *)(puVar31 + -0xd0);
    *(undefined4 *)(puVar31 + -300) = *(undefined4 *)(puVar31 + -0xcc);
    *(undefined4 *)(puVar31 + -0x128) = *(undefined4 *)(puVar31 + -200);
    *(undefined4 *)(puVar31 + -0x124) = *(undefined4 *)(puVar31 + -0xc4);
    *(undefined4 *)(puVar31 + -0x140) = *(undefined4 *)SVar35;
    *(undefined4 *)(puVar31 + -0x13c) = *(undefined4 *)(puVar31 + -0xdc);
    *(undefined4 *)(puVar31 + -0x138) = *(undefined4 *)(puVar31 + -0xd8);
    *(undefined4 *)(puVar31 + -0x134) = *(undefined4 *)(puVar31 + -0xd4);
    lVar21 = *(long *)SVar34;
    options._0_4_ = 0;
    options._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      options = (uint *)((ulong)*(ushort *)(lVar21 + 0x12e) << 4);
      SVar37.hasValue = 0;
      SVar37.value = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + (long)SVar37) == TypeInfo_IAottgSettingAdapter) {
          options = (uint *)((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + (long)SVar37) + 0xb) * 0x10);
          puVar11 = (undefined8 *)(lVar21 + (long)options + 0x138);
          goto label_0446252f;
        }
        SVar37 = (System_Nullable_bool__Fields)((long)SVar37 + 0x10);
      } while ((System_Nullable_bool__Fields)options != SVar37);
    }
    *(undefined8 *)(puVar31 + -0x168) = 0x44624fc;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar34,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control = *(System_Nullable_bool__Fields *)(puVar11 + 1);
    *(undefined4 *)(puVar31 + -0x150) = *(undefined4 *)(puVar31 + -0x130);
    *(undefined4 *)(puVar31 + -0x14c) = *(undefined4 *)(puVar31 + -300);
    *(undefined4 *)(puVar31 + -0x148) = *(undefined4 *)(puVar31 + -0x128);
    *(undefined4 *)(puVar31 + -0x144) = *(undefined4 *)(puVar31 + -0x124);
    *(undefined4 *)(puVar31 + -0x160) = *(undefined4 *)(puVar31 + -0x140);
    *(undefined4 *)(puVar31 + -0x15c) = *(undefined4 *)(puVar31 + -0x13c);
    *(undefined4 *)(puVar31 + -0x158) = *(undefined4 *)(puVar31 + -0x138);
    *(undefined4 *)(puVar31 + -0x154) = *(undefined4 *)(puVar31 + -0x134);
    pcVar5 = (code *)*puVar11;
    *(undefined8 *)(puVar31 + -0x168) = 0x446254b;
    SVar32 = SVar34;
    (*pcVar5)();
    lVar21 = *(long *)((long)SVar12 + 0x10);
    *(undefined8 *)(puVar31 + -0x110) = *(undefined8 *)(puVar31 + -0xd0);
    *(undefined8 *)(puVar31 + -0x108) = *(undefined8 *)(puVar31 + -200);
    *(undefined4 *)(puVar31 + -0x120) = *(undefined4 *)SVar35;
    *(undefined4 *)(puVar31 + -0x11c) = *(undefined4 *)(puVar31 + -0xdc);
    *(undefined4 *)(puVar31 + -0x118) = *(undefined4 *)(puVar31 + -0xd8);
    *(undefined4 *)(puVar31 + -0x114) = *(undefined4 *)(puVar31 + -0xd4);
    if (lVar21 != 0) goto label_0446256c;
  }
  *(undefined8 *)(puVar31 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar31 + -0x168) = SVar39;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x170) = SVar35;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x178) = SVar12;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x180) = SVar34;
  SVar12 = SVar32;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)(puVar31 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar12 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)(puVar31 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar21 = *(long *)((long)SVar32 + 0x10);
  if (lVar21 != 0) {
    SVar39 = (System_Nullable_bool__Fields)((long)puVar31 + -0x158);
    SVar34 = *(System_Nullable_bool__Fields *)(lVar21 + 0x28);
    if (SVar34 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar31 + -0x1b8) = *(undefined8 *)(puVar31 + -0x148);
      *(undefined8 *)(puVar31 + -0x1b0) = *(undefined8 *)(puVar31 + -0x140);
      *(undefined8 *)(puVar31 + -0x1c8) = *(undefined8 *)SVar39;
      *(undefined8 *)(puVar31 + -0x1c0) = *(undefined8 *)(puVar31 + -0x150);
    }
    else {
      if (*(long *)(puVar31 + -0x148) == 0) {
        SVar35.hasValue = 0;
        SVar35.value = 0;
      }
      else {
        pSVar22 = *(System_String_o **)(*(long *)(puVar31 + -0x148) + 0x50);
        *(undefined8 *)(puVar31 + -0x1f0) = 0x4462631;
        uVar8 = System_String__op_Equality(pSVar22,"true",(MethodInfo *)0x0);
        SVar35.value = 0;
        SVar35.hasValue = uVar8;
      }
      lVar21 = *(long *)SVar34;
      options._0_4_ = 0;
      options._4_4_ = 0;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        options = (uint *)((ulong)*(ushort *)(lVar21 + 0x12e) << 4);
        SVar38.hasValue = 0;
        SVar38.value = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + (long)SVar38) == TypeInfo_IAottgSettingAdapter) {
            options = (uint *)((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + (long)SVar38) + 8) * 0x10);
            puVar11 = (undefined8 *)(lVar21 + (long)options + 0x138);
            goto label_044626b5;
          }
          SVar38 = (System_Nullable_bool__Fields)((long)SVar38 + 0x10);
        } while ((System_Nullable_bool__Fields)options != SVar38);
      }
      *(undefined8 *)(puVar31 + -0x1f0) = 0x446269c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar34,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      uVar23 = puVar11[1];
      control = (System_Nullable_bool__Fields)((ulong)SVar35 & 0xff);
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)(puVar31 + -0x1f0) = 0x44626c2;
      SVar12 = SVar34;
      (*pcVar5)(SVar34,control,uVar23);
      lVar21 = *(long *)((long)SVar32 + 0x10);
      *(undefined8 *)(puVar31 + -0x1b8) = *(undefined8 *)(puVar31 + -0x148);
      *(undefined8 *)(puVar31 + -0x1b0) = *(undefined8 *)(puVar31 + -0x140);
      *(undefined4 *)(puVar31 + -0x1c8) = *(undefined4 *)SVar39;
      *(undefined4 *)(puVar31 + -0x1c4) = *(undefined4 *)(puVar31 + -0x154);
      *(undefined4 *)(puVar31 + -0x1c0) = *(undefined4 *)(puVar31 + -0x150);
      *(undefined4 *)(puVar31 + -0x1bc) = *(undefined4 *)(puVar31 + -0x14c);
      if (lVar21 == 0) goto label_04462728;
    }
    *(undefined8 *)(puVar31 + -0x198) = *(undefined8 *)(puVar31 + -0x1b8);
    *(undefined8 *)(puVar31 + -400) = *(undefined8 *)(puVar31 + -0x1b0);
    *(undefined8 *)(puVar31 + -0x1a8) = *(undefined8 *)(puVar31 + -0x1c8);
    *(undefined8 *)(puVar31 + -0x1a0) = *(undefined8 *)(puVar31 + -0x1c0);
    lVar21 = *(long *)(lVar21 + 0x88);
    if (lVar21 != 0) {
      uVar23 = *(undefined8 *)(lVar21 + 0x28);
      uVar6 = *(undefined8 *)(lVar21 + 0x40);
      *(undefined4 *)(puVar31 + -0x1d8) = *(undefined4 *)(puVar31 + -0x198);
      *(undefined4 *)(puVar31 + -0x1d4) = *(undefined4 *)(puVar31 + -0x194);
      *(undefined4 *)(puVar31 + -0x1d0) = *(undefined4 *)(puVar31 + -400);
      *(undefined4 *)(puVar31 + -0x1cc) = *(undefined4 *)(puVar31 + -0x18c);
      *(undefined4 *)(puVar31 + -0x1e8) = *(undefined4 *)(puVar31 + -0x1a8);
      *(undefined4 *)(puVar31 + -0x1e4) = *(undefined4 *)(puVar31 + -0x1a4);
      *(undefined4 *)(puVar31 + -0x1e0) = *(undefined4 *)(puVar31 + -0x1a0);
      *(undefined4 *)(puVar31 + -0x1dc) = *(undefined4 *)(puVar31 + -0x19c);
      pcVar5 = *(code **)(lVar21 + 0x18);
      *(undefined8 *)(puVar31 + -0x1f0) = 0x446271d;
      (*pcVar5)(uVar6,uVar23);
    }
    return;
  }
label_04462728:
  *(undefined8 *)(puVar31 + -0x1f0) = 0x446272d;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar31 + -0x1f0) = SVar39;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x1f8) = SVar35;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x200) = SVar32;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x208) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x210) = SVar40;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x218) = SVar34;
  SVar39 = SVar12;
  if (g_data_057ae79c == '\0') {
    *(undefined8 *)(puVar31 + -0x278) = 0x4462759;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar31 + -0x278) = 0x4462765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    *(undefined8 *)(puVar31 + -0x278) = 0x4462771;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar31 + -0x278) = 0x446277d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar31 + -0x278) = 0x4462789;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)(puVar31 + -0x278) = 0x4462795;
    il2cpp_runtime_helper_023445d0(&"-value-button");
    *(undefined8 *)(puVar31 + -0x278) = 0x44627a1;
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar39 = (System_Nullable_bool__Fields)&"0";
    *(undefined8 *)(puVar31 + -0x278) = 0x44627ad;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar12 + 0x10) != 0) {
    pSVar22 = *(System_String_o **)(*(long *)((long)SVar12 + 0x10) + 0x10);
    *(undefined8 *)(puVar31 + -0x278) = 0x44627d6;
    pSVar22 = System_String__Concat_3ae5ba0(pSVar22,"-slider",(MethodInfo *)0x0);
    *(undefined8 *)(puVar31 + -0x278) = 0x44627e4;
    SVar34 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar12,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)control,pSVar22,(MethodInfo *)options);
    *(undefined8 *)(puVar31 + -0x278) = 0x44627f6;
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(undefined8 *)(puVar31 + -0x260) = 0;
    *(undefined8 *)(puVar31 + -600) = 0;
    *(undefined8 *)(puVar31 + -0x270) = 0;
    *(undefined8 *)(puVar31 + -0x268) = 0;
    *(undefined8 *)(puVar31 + -0x228) = 0;
    *(undefined4 *)(puVar31 + -0x230) = 0x3f800000;
    *(undefined4 *)(puVar31 + -0x238) = 0x3f800000;
    *(undefined4 *)(puVar31 + -0x240) = 0;
    *(undefined4 *)(puVar31 + -0x248) = 0;
    *(undefined8 *)(puVar31 + -0x250) = 0;
    *(undefined8 *)(puVar31 + -0x278) = 0x4462873;
    SVar39 = "Column";
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar15,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x270),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x268),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x260),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -600),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x250),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar31 + -0x248),*(float *)(puVar31 + -0x240),
                         *(float *)(puVar31 + -0x238),*(float *)(puVar31 + -0x230),
                         *(MethodInfo **)(puVar31 + -0x228));
    if (SVar34 != (System_Nullable_bool__Fields)0x0) {
      SVar39 = (System_Nullable_bool__Fields)((long)SVar34 + 0xd8);
      *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar34 + 0xd8) = pGVar17;
      *(undefined8 *)(puVar31 + -0x278) = 0x4462895;
      il2cpp_runtime_helper_022b4080(SVar39,pGVar17);
      if (*(long *)((long)SVar12 + 0x10) != 0) {
        plVar4 = *(long **)(*(long *)((long)SVar12 + 0x10) + 0x28);
        if (plVar4 == (long *)0x0) {
          variant = 4;
          pSVar22 = "0";
        }
        else {
          lVar21 = *plVar4;
          if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
            lVar33 = 0;
            do {
              if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                puVar11 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar33) * 0x10 + lVar21 + 0x138);
                goto label_04462936;
              }
              lVar33 = lVar33 + 0x10;
            } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar33);
          }
          *(undefined8 *)(puVar31 + -0x278) = 0x4462909;
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar4 != (long *)0x0) << 2;
          uVar23 = puVar11[1];
          pcVar5 = (code *)*puVar11;
          *(undefined8 *)(puVar31 + -0x278) = 0x4462943;
          pSVar22 = (System_String_o *)(*pcVar5)(plVar4,uVar23);
        }
        *(undefined8 *)(puVar31 + -0x278) = 0x4462955;
        SVar32 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        *(undefined8 *)(puVar31 + -0x278) = 0x446296f;
        SVar39 = SVar32;
        System_Action_GisketchActionContext____ctor();
        SVar34 = control;
        if (*(long *)((long)SVar12 + 0x10) != 0) {
          SVar39 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar12 + 0x10) + 0x10);
          *(undefined8 *)(puVar31 + -0x278) = 0x4462991;
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar39,"-value-button",(MethodInfo *)0x0);
          if (control != (System_Nullable_bool__Fields)0x0) {
            *(undefined8 *)(puVar31 + -0x270) = 0;
            *(undefined8 *)(puVar31 + -0x268) = 0;
            *(undefined8 *)(puVar31 + -0x260) = 0;
            *(undefined8 *)(puVar31 + -0x278) = 0x44629c1;
            SVar39 = control;
            SVar34 = (System_Nullable_bool__Fields)
                     Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)control,variant,pSVar22,
                                (System_Action_GisketchActionContext__o *)SVar32,id,(System_String_o *)0x0,
                                *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar31 + -0x270),
                                *(System_String_o **)(puVar31 + -0x268),*(MethodInfo **)(puVar31 + -0x260));
            if (*(long *)((long)SVar12 + 0x10) != 0) {
              cVar1 = *(char *)(*(long *)((long)SVar12 + 0x10) + 0x58);
              *(undefined2 *)(puVar31 + -0x21a) = 0;
              SVar39 = (System_Nullable_bool__Fields)((long)puVar31 + -0x21a);
              *(undefined8 *)(puVar31 + -0x278) = 0x44629f6;
              System_Nullable_bool____ctor((System_Nullable_bool__o)SVar39,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean)
              ;
              if (SVar34 != (System_Nullable_bool__Fields)0x0) {
                *(undefined2 *)((long)SVar34 + 0x6b) = *(undefined2 *)(puVar31 + -0x21a);
                *(undefined8 *)(puVar31 + -0x278) = 0x4462a1e;
                pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar31 + -0x260) = 0;
                *(undefined8 *)(puVar31 + -600) = 0;
                *(undefined8 *)(puVar31 + -0x270) = 0;
                *(undefined8 *)(puVar31 + -0x268) = 0;
                *(undefined8 *)(puVar31 + -0x228) = 0;
                *(undefined4 *)(puVar31 + -0x230) = 0;
                *(undefined4 *)(puVar31 + -0x238) = 0;
                *(undefined4 *)(puVar31 + -0x240) = 0;
                *(undefined4 *)(puVar31 + -0x248) = 0;
                *(undefined8 *)(puVar31 + -0x250) = 0;
                *(undefined8 *)(puVar31 + -0x278) = 0x4462a95;
                pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ((System_String_o *)"Column",(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     pGVar15,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x270),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x268),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x260),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -600),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar31 + -0x250),0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,*(float *)(puVar31 + -0x248),
                                     *(float *)(puVar31 + -0x240),*(float *)(puVar31 + -0x238),
                                     *(float *)(puVar31 + -0x230),*(MethodInfo **)(puVar31 + -0x228));
                *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar34 + 0xd8) = pGVar17;
                *(undefined8 *)(puVar31 + -0x278) = 0x4462aae;
                il2cpp_runtime_helper_022b4080((long)SVar34 + 0xd8,pGVar17);
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar31 + -0x278) = 0x4462ac2;
  uVar23 = il2cpp_runtime_helper_022b2c90();
  lVar21 = *(long *)((long)SVar39 + 0x10);
  *(System_Nullable_bool__Fields *)(puVar31 + -0x278) = control;
  *(System_Nullable_bool__Fields *)(puVar31 + -0x280) = SVar34;
  *(undefined8 *)(puVar31 + -0x288) = uVar23;
  if (g_data_057ae7ad == '\0') {
    *(undefined8 *)(puVar31 + -0x290) = 0x4462afc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    *(undefined8 *)(puVar31 + -0x290) = 0x4462b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    *(undefined8 *)(puVar31 + -0x290) = 0x4462b14;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar21 != 0) && (*(long *)(lVar21 + 0x28) != 0)) && (*(char *)(lVar21 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar21;
    uVar23 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
    *(undefined8 *)(puVar31 + -0x290) = 0x4462b60;
    il2cpp_runtime_helper_022b4080(uVar23,lVar21);
    if (*(UnityEngine_GameObject_o **)(puVar31 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)(puVar31 + -0x290) = 0x4462b78;
      pIVar24 = UnityEngine_GameObject__GetComponentInParent_object_
                          (*(UnityEngine_GameObject_o **)(puVar31 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar24 != (Il2CppObject *)0x0) &&
         (pIVar24[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar24[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x44610e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 in_RAX;
  System_Nullable_bool__Fields SVar9;
  undefined8 *puVar10;
  System_Nullable_bool__Fields SVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar15;
  System_Nullable_bool__Fields SVar16;
  System_Nullable_bool__Fields SVar17;
  System_Nullable_bool__Fields SVar18;
  long lVar19;
  System_String_o *pSVar20;
  System_String_o *id;
  undefined8 uVar21;
  Il2CppObject *pIVar22;
  System_Nullable_bool__Fields in_RCX;
  uint *options;
  ulong uVar23;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields __this_00;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar24;
  undefined1 *puVar25;
  System_Nullable_bool__Fields unaff_RBP;
  System_Nullable_bool__Fields control_00;
  long lVar26;
  System_Nullable_bool__Fields SVar27;
  System_Nullable_bool__Fields SVar28;
  System_Nullable_bool__Fields SVar29;
  System_Nullable_bool__Fields SVar30;
  System_Nullable_bool__Fields SVar31;
  System_Nullable_bool__Fields SVar32;
  System_Nullable_bool__Fields unaff_R12;
  System_Nullable_bool__Fields SVar33;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar34;
  undefined4 uVar35;
  float fVar36;
  float max;
  float value;
  undefined1 auVar37 [16];
  undefined1 auStack_8 [8];
  
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    in_RAX = il2cpp_runtime_helper_022b2c90();
    puVar25 = auStack_8;
    SVar17 = (System_Nullable_bool__Fields)__this;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch:
    *(System_Nullable_bool__Fields *)(puVar25 + -8) = unaff_RBP;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x30) = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)(puVar25 + -0x38);
    *(undefined8 *)(puVar25 + -0x38) = in_RAX;
    SVar11 = (System_Nullable_bool__Fields)control;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar17;
    if (g_data_057ae791 == '\0') {
      *(undefined8 *)(puVar25 + -0x40) = 0x4461166;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar25 + -0x40) = 0x4461172;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSwitch_b__4_0);
      *(undefined8 *)(puVar25 + -0x40) = 0x446117e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-switch";
      *(undefined8 *)(puVar25 + -0x40) = 0x446118a;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae791 = '\x01';
    }
    if (*(long *)((long)SVar17 + 0x10) == 0) {
label_044612b2:
      *(undefined8 *)(puVar25 + -0x40) = 0x44612b7;
      auVar37 = il2cpp_runtime_helper_022b2c90();
      uVar23 = auVar37._8_8_;
      in_RAX = auVar37._0_8_;
      options = (uint *)in_RCX;
      unaff_R13 = (System_Nullable_bool__Fields)control;
      unaff_R14 = SVar17;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown;
    }
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar17 + 0x10) + 0x10);
    *(undefined8 *)(puVar25 + -0x40) = 0x44611b3;
    SVar11 = "-switch";
    SVar9 = (System_Nullable_bool__Fields)
            System_String__Concat_3ae5ba0
                      ((System_String_o *)__this,(System_String_o *)"-switch",(MethodInfo *)0x0);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if (*(long *)((long)SVar17 + 0x10) == 0) goto label_044612b2;
    plVar4 = *(long **)(*(long *)((long)SVar17 + 0x10) + 0x28);
    if (plVar4 == (long *)0x0) {
      unaff_RBP.hasValue = 0;
      unaff_RBP.value = 0;
    }
    else {
      lVar19 = *plVar4;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
            puVar10 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) + 2) * 0x10 + lVar19 + 0x138);
            goto label_04461243;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar26);
      }
      *(undefined8 *)(puVar25 + -0x40) = 0x446121c;
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,2);
label_04461243:
      uVar21 = puVar10[1];
      pcVar5 = (code *)*puVar10;
      *(undefined8 *)(puVar25 + -0x40) = 0x446124c;
      uVar8 = (*pcVar5)(plVar4,uVar21);
      unaff_RBP.value = 0;
      unaff_RBP.hasValue = uVar8;
    }
    *(undefined8 *)(puVar25 + -0x40) = 0x446125d;
    options = (uint *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    *(undefined8 *)(puVar25 + -0x40) = 0x4461277;
    SVar11 = SVar17;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)options;
    System_Action_GisketchActionContext____ctor();
    unaff_R12.hasValue = 0;
    unaff_R12.value = 0;
    unaff_RBX = (System_Nullable_bool__Fields)options;
    unaff_R15 = SVar9;
    if ((System_Nullable_bool__Fields)control == (System_Nullable_bool__Fields)0x0) goto label_044612b2;
    *(undefined8 *)(puVar25 + -0x40) = 0x4461291;
    SVar11 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_Code_AottgUi__Switch
                       (control,(System_String_o *)SVar9,unaff_RBP.hasValue & 0xff,
                        (System_Action_GisketchActionContext__o *)options,(MethodInfo *)0x0);
    uVar35 = 0x42680000;
    SVar27 = *(System_Nullable_bool__Fields *)(puVar25 + -0x30);
    SVar33 = *(System_Nullable_bool__Fields *)(puVar25 + -0x28);
    unaff_R13 = *(System_Nullable_bool__Fields *)(puVar25 + -0x20);
    SVar9 = *(System_Nullable_bool__Fields *)(puVar25 + -0x18);
    control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar25 + -0x10);
    unaff_RBP = *(System_Nullable_bool__Fields *)(puVar25 + -8);
    unaff_RBX = SVar17;
  }
  else {
    options = &switchD_04461101::switchdataD_00d999d4;
    SVar11 = (System_Nullable_bool__Fields)control;
    switch((pGVar3->fields).Kind) {
    case 0:
      in_RCX = (System_Nullable_bool__Fields)options;
      puVar25 = (undefined1 *)register0x00000020;
      SVar17 = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch;
    case 1:
      uVar23 = 1;
      break;
    case 2:
      uVar23 = 0;
      break;
    case 3:
      SVar9 = (System_Nullable_bool__Fields)options;
      SVar17 = unaff_RBX;
      puVar25 = (undefined1 *)register0x00000020;
      unaff_RBX = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider;
    case 4:
      puVar25 = (undefined1 *)register0x00000020;
      SVar11 = unaff_RBP;
      SVar17 = (System_Nullable_bool__Fields)control;
      unaff_RBP = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput;
    case 5:
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton;
    default:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly(__this,control,method);
      return;
    }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown:
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -8) = unaff_RBP;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    unaff_R12 = (System_Nullable_bool__Fields)(uVar23 & 0xffffffff);
    SVar9 = (System_Nullable_bool__Fields)options;
    control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11;
    if (g_data_057ae792 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44612e9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44612f5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461301;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x446130d;
      il2cpp_runtime_helper_023445d0(&"-select");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461319;
      il2cpp_runtime_helper_023445d0(&"-dropdown");
      g_data_057ae792 = '\x01';
      SVar9 = (System_Nullable_bool__Fields)options;
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461328;
    unaff_RBX = (System_Nullable_bool__Fields)__this;
    options = (uint *)Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions
                                (__this,(MethodInfo *)control);
    lVar19 = *(long *)((long)__this + 0x10);
    if (lVar19 != 0) {
      unaff_RBP = *(System_Nullable_bool__Fields *)(lVar19 + 0x28);
      if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
        unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
        pSVar20 = *(System_String_o **)(lVar19 + 0x10);
        if ((char)unaff_R12.hasValue != '\0') goto label_044613e9;
label_0446145e:
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x446146f;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar20,"-select",(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461481;
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar9.hasValue = 0;
        SVar9.value = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x446149b;
        control = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
        unaff_RBX = unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)__this + 0x10) == 0) || (SVar11 == (System_Nullable_bool__Fields)0x0))
        goto label_044614ee;
        uVar8 = *(uint *)(*(long *)((long)__this + 0x10) + 0x5c);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        *(ulong *)((long)register0x00000020 + -0x48) = (ulong)uVar8;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44614c9;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)unaff_R12,
                            (System_String_o *)unaff_R13,
                            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                            (System_Action_GisketchActionContext__o *)unaff_RBP,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            *(int32_t *)((long)register0x00000020 + -0x48),
                            *(MethodInfo **)((long)register0x00000020 + -0x40));
label_044614c9:
        uVar35 = 0x43960000;
        SVar27 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x30);
        SVar33 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x28);
        unaff_R13 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x20);
        SVar9 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x18);
        control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)register0x00000020 + -0x10);
        unaff_RBP = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -8);
        puVar25 = (undefined1 *)register0x00000020;
        unaff_RBX = (System_Nullable_bool__Fields)__this;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      lVar19 = *(long *)unaff_RBP;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
            SVar9 = (System_Nullable_bool__Fields)
                    ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) * 0x10 + lVar19 + 0x138);
            goto label_044613c7;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar26);
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461389;
      SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_044613c7:
      control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)SVar9 + 8);
      SVar17 = *(System_Nullable_bool__Fields *)SVar9;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44613d0;
      unaff_RBX = unaff_RBP;
      unaff_R13 = (System_Nullable_bool__Fields)(*(code *)SVar17)();
      if (*(long *)((long)__this + 0x10) != 0) {
        pSVar20 = *(System_String_o **)(*(long *)((long)__this + 0x10) + 0x10);
        if ((char)unaff_R12.hasValue == '\0') goto label_0446145e;
label_044613e9:
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44613fa;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar20,"-dropdown",(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x446140c;
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar9.hasValue = 0;
        SVar9.value = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461426;
        control = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
        unaff_RBX = unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)__this + 0x10) != 0) && (SVar11 != (System_Nullable_bool__Fields)0x0)) {
          uVar8 = *(uint *)(*(long *)((long)__this + 0x10) + 0x5c);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
          *(ulong *)((long)register0x00000020 + -0x48) = (ulong)uVar8;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x446145c;
          SVar11 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)unaff_R12,
                              (System_String_o *)unaff_R13,
                              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                              (System_Action_GisketchActionContext__o *)unaff_RBP,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(int32_t *)((long)register0x00000020 + -0x48),
                              *(MethodInfo **)((long)register0x00000020 + -0x40));
          goto label_044614c9;
        }
      }
    }
label_044614ee:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44614f3;
    il2cpp_runtime_helper_022b2c90();
    SVar17 = (System_Nullable_bool__Fields)__this;
    puVar25 = (undefined1 *)((long)register0x00000020 + -0x38);
    unaff_R14 = SVar11;
    unaff_R15 = (System_Nullable_bool__Fields)options;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider:
    *(System_Nullable_bool__Fields *)(puVar25 + -8) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x18) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x20) = SVar17;
    options = (uint *)SVar9;
    SVar17 = (System_Nullable_bool__Fields)control;
    SVar27 = unaff_RBX;
    if (g_data_057ae793 == '\0') {
      *(undefined8 *)(puVar25 + -0x80) = 0x4461526;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      *(undefined8 *)(puVar25 + -0x80) = 0x4461532;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
      *(undefined8 *)(puVar25 + -0x80) = 0x446153e;
      il2cpp_runtime_helper_023445d0(&"clear");
      *(undefined8 *)(puVar25 + -0x80) = 0x446154a;
      il2cpp_runtime_helper_023445d0(&"-slider-with-value");
      *(undefined8 *)(puVar25 + -0x80) = 0x4461556;
      il2cpp_runtime_helper_023445d0(&"Center");
      *(undefined8 *)(puVar25 + -0x80) = 0x4461562;
      il2cpp_runtime_helper_023445d0(&"Row");
      SVar27 = (System_Nullable_bool__Fields)&"-slider";
      *(undefined8 *)(puVar25 + -0x80) = 0x446156e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae793 = '\x01';
      options = (uint *)SVar9;
    }
    lVar19 = *(long *)((long)unaff_RBX + 0x10);
    if (lVar19 != 0) {
      if (*(char *)(lVar19 + 0x59) == '\0') {
        pSVar20 = *(System_String_o **)(lVar19 + 0x10);
        *(undefined8 *)(puVar25 + -0x80) = 0x44616d7;
        pSVar20 = System_String__Concat_3ae5ba0(pSVar20,"-slider",(MethodInfo *)0x0);
        *(undefined8 *)(puVar25 + -0x80) = 0x44616e5;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBX,control,pSVar20,
                            (MethodInfo *)options);
        uVar35 = 0x441b0000;
        SVar27 = *(System_Nullable_bool__Fields *)(puVar25 + -0x20);
        SVar33 = *(System_Nullable_bool__Fields *)(puVar25 + -0x18);
        SVar9 = *(System_Nullable_bool__Fields *)(puVar25 + -0x10);
        control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar25 + -8);
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      *(undefined8 *)(puVar25 + -0x80) = 0x446159b;
      unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)(puVar25 + -0x80) = 0x44615b5;
      SVar17 = unaff_RBX;
      SVar27 = unaff_R15;
      System_Action_object____ctor();
      if (*(long *)((long)unaff_RBX + 0x10) != 0) {
        pSVar20 = *(System_String_o **)(*(long *)((long)unaff_RBX + 0x10) + 0x10);
        *(undefined8 *)(puVar25 + -0x80) = 0x44615d7;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar20,"-slider-with-value",(MethodInfo *)0x0);
        *(undefined8 *)(puVar25 + -0x80) = 0x44615e9;
        unaff_RBX = (System_Nullable_bool__Fields)
                    Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
        *(undefined8 *)(puVar25 + -0x80) = 0x44615fb;
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x60) = pGVar13;
        *(undefined8 *)(puVar25 + -0x78) = 0;
        *(undefined8 *)(puVar25 + -0x70) = 0;
        *(undefined8 *)(puVar25 + -0x30) = 0;
        *(undefined4 *)(puVar25 + -0x38) = 0x3f800000;
        *(undefined4 *)(puVar25 + -0x40) = 0;
        *(undefined4 *)(puVar25 + -0x48) = 0;
        *(undefined4 *)(puVar25 + -0x50) = 0;
        *(undefined8 *)(puVar25 + -0x58) = 0;
        *(undefined8 *)(puVar25 + -0x68) = 0;
        SVar17.hasValue = 0;
        SVar17.value = 0;
        options._0_4_ = 0;
        options._4_4_ = 0;
        *(undefined8 *)(puVar25 + -0x80) = 0x446168b;
        SVar27 = "Row";
        pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x78),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x70),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x68),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x60),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x58),0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,*(float *)(puVar25 + -0x50),*(float *)(puVar25 + -0x48),
                             *(float *)(puVar25 + -0x40),*(float *)(puVar25 + -0x38),
                             *(MethodInfo **)(puVar25 + -0x30));
        if ((System_Nullable_bool__Fields)control != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar25 + -0x78) = 0;
          *(undefined8 *)(puVar25 + -0x80) = 0x44616b6;
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (control,"clear",(System_Action_AottgUi__o *)unaff_R15,(System_String_o *)unaff_R12,
                     pGVar15,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     *(MethodInfo **)(puVar25 + -0x78));
          return;
        }
      }
    }
    *(undefined8 *)(puVar25 + -0x80) = 0x4461708;
    il2cpp_runtime_helper_022b2c90();
    puVar25 = puVar25 + -0x78;
    SVar11 = unaff_RBP;
    unaff_RBP = SVar27;
    unaff_R14 = (System_Nullable_bool__Fields)control;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput:
    *(System_Nullable_bool__Fields *)(puVar25 + -8) = SVar11;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar25 + -0x30) = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)(puVar25 + -0x58);
    control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
    if (g_data_057ae795 == '\0') {
      *(undefined8 *)(puVar25 + -0x60) = 0x4461739;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar25 + -0x60) = 0x4461745;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)(puVar25 + -0x60) = 0x4461751;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      *(undefined8 *)(puVar25 + -0x60) = 0x446175d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar25 + -0x60) = 0x4461769;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)(puVar25 + -0x60) = 0x4461775;
      il2cpp_runtime_helper_023445d0(&"inputField");
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-input";
      *(undefined8 *)(puVar25 + -0x60) = 0x4461781;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
    }
    lVar19 = *(long *)((long)unaff_RBP + 0x10);
    if (lVar19 != 0) {
      if (*(long **)(lVar19 + 0x28) == (long *)0x0) {
        *(undefined4 *)(puVar25 + -0x54) = 1;
      }
      else {
        *(uint *)(puVar25 + -0x54) = (uint)(**(long **)(lVar19 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      pSVar20 = *(System_String_o **)(lVar19 + 0x10);
      *(undefined8 *)(puVar25 + -0x60) = 0x44617d4;
      unaff_R12 = (System_Nullable_bool__Fields)
                  System_String__Concat_3ae5ba0(pSVar20,"-input",(MethodInfo *)0x0);
      unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      *(undefined8 *)(puVar25 + -0x60) = 0x44617fe;
      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar25 + -0x60) = 0x4461810;
      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x90) = pGVar14;
      *(undefined8 *)(puVar25 + -0xa8) = 0;
      *(undefined8 *)(puVar25 + -0xa0) = 0;
      *(undefined8 *)(puVar25 + -0x60) = 0;
      *(undefined4 *)(puVar25 + -0x68) = 0x3f800000;
      *(undefined4 *)(puVar25 + -0x70) = 0;
      *(undefined4 *)(puVar25 + -0x78) = 0;
      *(undefined4 *)(puVar25 + -0x80) = 0;
      *(undefined8 *)(puVar25 + -0x88) = 0;
      *(undefined8 *)(puVar25 + -0x98) = 0;
      *(undefined4 *)(puVar25 + -0x50) = 0;
      *(undefined8 *)(puVar25 + -0xb0) = 0x44618a3;
      unaff_RBX = (System_Nullable_bool__Fields)
                  Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar13,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0xa8),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0xa0),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x98),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x90),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x88),0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,*(float *)(puVar25 + -0x80),*(float *)(puVar25 + -0x78),
                             *(float *)(puVar25 + -0x70),*(float *)(puVar25 + -0x68),
                             *(MethodInfo **)(puVar25 + -0x60));
      *(undefined8 *)(puVar25 + -0x60) = 0x44618b9;
      unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)(puVar25 + -0x60) = 0x44618d3;
      control = (Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_RBP;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R14;
      System_Action_GisketchActionContext____ctor();
      *(System_Nullable_bool__Fields *)(puVar25 + -0x38) = unaff_RBP;
      if (*(long *)((long)unaff_RBP + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)unaff_RBP + 0x10) + 0x28);
        *(System_Nullable_bool__Fields *)(puVar25 + -0x40) = SVar17;
        fVar36 = 0.05;
        bVar34 = unaff_RBP == (System_Nullable_bool__Fields)0x0;
        SVar33 = unaff_R13;
        SVar11 = unaff_R12;
        if (bVar34) {
          SVar33.hasValue = 0;
          SVar33.value = 0;
          SVar11 = unaff_RBP;
          SVar17 = unaff_RBP;
        }
        uVar8 = *(uint *)(puVar25 + -0x54);
        control._4_4_ = 0;
        control._0_4_ = uVar8;
        SVar24 = unaff_R14;
        SVar18 = unaff_RBX;
        pSVar20 = "inputField";
        uVar7 = uVar8;
        if (bVar34) {
          SVar24.hasValue = 0;
          SVar24.value = 0;
          SVar18.hasValue = 0;
          SVar18.value = 0;
          pSVar20 = (System_String_o *)0x0;
          uVar7 = 0;
        }
        uVar21 = 0;
        if (bVar34) {
          SVar17 = *(System_Nullable_bool__Fields *)(puVar25 + -0x40);
          pSVar20 = "inputField";
          SVar24 = unaff_R14;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R12;
          SVar18 = unaff_RBX;
        }
        else {
          *(undefined4 *)(puVar25 + -0x50) = 0x3d4ccccd;
          lVar19 = *(long *)unaff_RBP;
          uVar2 = *(ushort *)(lVar19 + 0x12e);
          *(System_String_o **)(puVar25 + -0x48) = pSVar20;
          *(uint *)(puVar25 + -0x4c) = uVar7;
          if ((ulong)uVar2 != 0) {
            lVar26 = 0;
            do {
              if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
                puVar10 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) + 7) * 0x10 + lVar19 + 0x138
                          );
                goto label_044619df;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar26);
          }
          *(undefined8 *)(puVar25 + -0x60) = 0x446199f;
          puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar10 + 1);
          pcVar5 = (code *)*puVar10;
          *(undefined8 *)(puVar25 + -0x60) = 0x44619e8;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
          uVar21 = (*pcVar5)();
          fVar36 = *(float *)(puVar25 + -0x50);
          uVar8 = *(uint *)(puVar25 + -0x4c);
          pSVar20 = *(System_String_o **)(puVar25 + -0x48);
          unaff_R13 = SVar33;
          unaff_R12 = SVar11;
          unaff_R14 = SVar18;
        }
        unaff_RBX = SVar24;
        options._4_4_ = 0;
        options._0_4_ = uVar8;
        if (SVar17 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar25 + -0x60) = 0;
          *(undefined8 *)(puVar25 + -0x68) = uVar21;
          *(System_Nullable_bool__Fields *)(puVar25 + -0x70) = unaff_RBX;
          *(undefined8 *)(puVar25 + -0x78) = 0;
          *(undefined8 *)(puVar25 + -0x80) = 0x4461a17;
          control = (Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R12;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar17;
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,(System_String_o *)unaff_R12,
                               (System_String_o *)unaff_R13,uVar8,pSVar20,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar18,
                               *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar25 + -0x78),
                               *(System_Action_GisketchActionContext__o **)(puVar25 + -0x70),fVar36,
                               *(int32_t *)(puVar25 + -0x68),*(MethodInfo **)(puVar25 + -0x60));
          options._0_4_ = 0;
          options._4_4_ = 0;
          if (*(long *)(*(long *)(puVar25 + -0x38) + 0x10) != 0) {
            unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)(*(long *)(puVar25 + -0x38) + 0x10) + 0x28)
            ;
            if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
              options = *(uint **)(g_data_057b9c00 + 0xb8);
              control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)options;
            }
            else {
              lVar19 = *(long *)unaff_RBP;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
                lVar26 = 0;
                do {
                  if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
                    options = (uint *)((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) * 0x10 + lVar19 +
                                      0x138);
                    goto label_04461ac3;
                  }
                  lVar26 = lVar26 + 0x10;
                } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar26);
              }
              *(undefined8 *)(puVar25 + -0x60) = 0x4461a89;
              options = (uint *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              SVar11 = *(System_Nullable_bool__Fields *)((long)options + 8);
              SVar9 = *(System_Nullable_bool__Fields *)options;
              *(undefined8 *)(puVar25 + -0x60) = 0x4461acc;
              __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
              control = (Gisketch_Aottg2UI_Code_AottgUi_o *)(*(code *)SVar9)(unaff_RBP,SVar11);
            }
            unaff_RBX.hasValue = 0;
            unaff_RBX.value = 0;
            if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar12->fields).value = (System_String_o *)control;
              il2cpp_runtime_helper_022b4080(&(pGVar12->fields).value);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar25 + -0x60) = 0x4461af7;
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = SVar17;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton:
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -8) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x18) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x20) = unaff_RBX;
    SVar17 = (System_Nullable_bool__Fields)options;
    SVar33 = (System_Nullable_bool__Fields)control;
    SVar9 = (System_Nullable_bool__Fields)__this;
    if (g_data_057ae796 == '\0') {
      SVar9 = (System_Nullable_bool__Fields)&"-button";
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461b26;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
      SVar17 = (System_Nullable_bool__Fields)options;
    }
    lVar19 = *(long *)((long)__this + 0x10);
    SVar27 = unaff_RBX;
    if (lVar19 == 0) {
label_04461c07:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461c0c;
      il2cpp_runtime_helper_022b2c90();
      *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)register0x00000020 + -0x40) = control;
      *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)((long)register0x00000020 + -0x48) = __this;
      *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x50) = unaff_R13;
      *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x58) = unaff_R12;
      *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x60) = SVar27;
      puVar25 = (undefined1 *)((long)register0x00000020 + -0xb0);
      options = (uint *)SVar17;
      SVar11 = SVar33;
      unaff_RBX = SVar9;
      if (g_data_057ae797 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461c38;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461c44;
        il2cpp_runtime_helper_023445d0(&"Column");
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461c50;
        il2cpp_runtime_helper_023445d0(&"text");
        unaff_RBX = (System_Nullable_bool__Fields)&"-value";
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461c5c;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        options = (uint *)SVar17;
      }
      lVar19 = *(long *)((long)SVar9 + 0x10);
      if (lVar19 != 0) {
        SVar27 = *(System_Nullable_bool__Fields *)(lVar19 + 0x80);
        if (SVar27 == (System_Nullable_bool__Fields)0x0) {
          control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(lVar19 + 0x28);
          if ((System_Nullable_bool__Fields)control == (System_Nullable_bool__Fields)0x0) {
            options = *(uint **)(g_data_057b9c00 + 0xb8);
            SVar27 = *(System_Nullable_bool__Fields *)options;
            unaff_R13.hasValue = 0;
            unaff_R13.value = 0;
          }
          else {
            lVar19 = *(long *)control;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar26 = 0;
              do {
                if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
                  options = (uint *)((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) * 0x10 + lVar19 +
                                    0x138);
                  goto label_04461d0b;
                }
                lVar26 = lVar26 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar26);
            }
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461cd9;
            options = (uint *)il2cpp_runtime_helper_02300d20(control,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar11 = *(System_Nullable_bool__Fields *)((long)options + 8);
            SVar17 = *(System_Nullable_bool__Fields *)options;
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461d14;
            unaff_RBX = (System_Nullable_bool__Fields)control;
            SVar27 = (System_Nullable_bool__Fields)(*(code *)SVar17)();
            lVar19 = *(long *)((long)SVar9 + 0x10);
            unaff_R13 = SVar33;
            if (lVar19 == 0) goto label_04461e40;
          }
        }
        unaff_RBX = *(System_Nullable_bool__Fields *)(lVar19 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461d3c;
        SVar11 = "-value";
        pSVar20 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_RBX,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (SVar33 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461d6b;
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar33,(System_String_o *)SVar27,
                               "text",pSVar20,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               *(MethodInfo **)((long)register0x00000020 + -0xb0));
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461d7d;
          SVar9 = (System_Nullable_bool__Fields)
                  Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461d8f;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x98) = pGVar13;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
          *(undefined4 *)((long)register0x00000020 + -0x70) = 0x3f800000;
          *(undefined4 *)((long)register0x00000020 + -0x78) = 0;
          *(undefined4 *)((long)register0x00000020 + -0x80) = 0;
          *(undefined4 *)((long)register0x00000020 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
          SVar11.hasValue = 0;
          SVar11.value = 0;
          options._0_4_ = 0;
          options._4_4_ = 0;
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461e15;
          unaff_RBX = "Column";
          pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xb0)
                               ,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                 ((long)register0x00000020 + -0xa8),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xa0)
                               ,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                 ((long)register0x00000020 + -0x98),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x90)
                               ,0.0,0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x88),
                               *(float *)((long)register0x00000020 + -0x80),
                               *(float *)((long)register0x00000020 + -0x78),
                               *(float *)((long)register0x00000020 + -0x70),
                               *(MethodInfo **)((long)register0x00000020 + -0x68));
          SVar27.hasValue = 0;
          SVar27.value = 0;
          if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar15;
            il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar15);
            return;
          }
        }
      }
label_04461e40:
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4461e45;
      uVar35 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R12 = *(System_Nullable_bool__Fields *)(lVar19 + 0x68);
      options = *(uint **)(lVar19 + 0x78);
      SVar33 = "-button";
      if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) {
        if (unaff_R12 == (System_Nullable_bool__Fields)0x0) {
          unaff_R12 = *(System_Nullable_bool__Fields *)(lVar19 + 0x18);
        }
        SVar9 = *(System_Nullable_bool__Fields *)(lVar19 + 0x10);
        options = *(uint **)(lVar19 + 0x70);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461bbb;
        pSVar20 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar9,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar27 = (System_Nullable_bool__Fields)options;
        if ((System_Nullable_bool__Fields)control == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461be9;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           (control,1,(System_String_o *)unaff_R12,(System_String_o *)options,pSVar20,
                            (System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                             ((long)register0x00000020 + -0x38),
                            *(System_String_o **)((long)register0x00000020 + -0x30),
                            *(MethodInfo **)((long)register0x00000020 + -0x28));
      }
      else {
        if (unaff_R12 == (System_Nullable_bool__Fields)0x0) {
          unaff_R12 = *(System_Nullable_bool__Fields *)(lVar19 + 0x18);
        }
        SVar9 = *(System_Nullable_bool__Fields *)(lVar19 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461b65;
        pSVar20 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar9,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar27 = (System_Nullable_bool__Fields)options;
        if ((System_Nullable_bool__Fields)control == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4461b97;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           (control,1,(System_String_o *)unaff_R12,
                            (System_Action_GisketchActionContext__o *)options,pSVar20,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                             ((long)register0x00000020 + -0x38),
                            *(System_String_o **)((long)register0x00000020 + -0x30),
                            *(MethodInfo **)((long)register0x00000020 + -0x28));
      }
      uVar35 = 0x43a00000;
      SVar27 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x20);
      SVar33 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x18);
      SVar9 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x10);
      control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)register0x00000020 + -8);
      puVar25 = (undefined1 *)register0x00000020;
      unaff_RBX = (System_Nullable_bool__Fields)__this;
    }
  }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout:
  *(System_Nullable_bool__Fields *)(puVar25 + -8) = SVar9;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x10) = SVar27;
  *(undefined4 *)(puVar25 + -0x14) = uVar35;
  __this_00 = SVar11;
  SVar28 = unaff_RBX;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)(puVar25 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar25 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar28 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)(puVar25 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar11 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)unaff_RBX + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)unaff_RBX + 0x10) + 0x58);
    *(undefined2 *)(puVar25 + -0x16) = 0;
    *(undefined8 *)(puVar25 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar25 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar11 + 0x6b) = *(undefined2 *)(puVar25 + -0x16);
    *(undefined8 *)(puVar25 + -0x70) = 0x4461ee8;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)(puVar25 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)(puVar25 + -0x70) = 0x4461efa;
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x50) = pGVar14;
    *(undefined8 *)(puVar25 + -0x68) = 0;
    *(undefined8 *)(puVar25 + -0x60) = 0;
    *(undefined8 *)(puVar25 + -0x20) = 0;
    *(undefined4 *)(puVar25 + -0x28) = 0x3f800000;
    *(undefined4 *)(puVar25 + -0x30) = 0;
    *(undefined4 *)(puVar25 + -0x38) = 0;
    *(undefined4 *)(puVar25 + -0x40) = 0;
    *(undefined8 *)(puVar25 + -0x48) = 0;
    *(undefined8 *)(puVar25 + -0x58) = 0;
    *(undefined8 *)(puVar25 + -0x70) = 0x4461f83;
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar13,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x48),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar25 + -0x40),*(float *)(puVar25 + -0x38),
                         *(float *)(puVar25 + -0x30),*(float *)(puVar25 + -0x28),
                         *(MethodInfo **)(puVar25 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar11 + 0xd8) = pGVar15;
    *(undefined8 *)(puVar25 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar11 + 0xd8),pGVar15);
    return;
  }
  *(undefined8 *)(puVar25 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar25 + -0x70) = control;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x78) = unaff_RBX;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x88) = SVar33;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x90) = SVar11;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)(puVar25 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)(puVar25 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar28 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)(puVar25 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_RBX = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar28 + 0x10) + 0x60);
    if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
      __this_00.hasValue = 0;
      __this_00.value = 0;
      *(undefined8 *)(puVar25 + -0x98) = 0x446200b;
      unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (unaff_RBX == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    __this_00.value = 0;
    __this_00.hasValue = *(uint *)((long)unaff_RBX + 0x18);
    *(undefined8 *)(puVar25 + -0x98) = 0x446202a;
    control = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)unaff_RBX + 0x18) < 1) {
      return;
    }
    if ((System_Nullable_bool__Fields)control != (System_Nullable_bool__Fields)0x0) {
      SVar16 = (System_Nullable_bool__Fields)(*(ulong *)((long)unaff_RBX + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)control + 0x20);
      SVar28.hasValue = 0;
      SVar28.value = 0;
      SVar33 = unaff_RBX;
      while (SVar33 = (System_Nullable_bool__Fields)((long)SVar33 + 0x20), (ulong)SVar28 < (ulong)SVar16) {
        *(undefined8 *)(puVar25 + -0x98) = 0x446205f;
        SVar17 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar25 + -0x90),
                            (MethodInfo *)SVar33);
        options._4_4_ = 0;
        options._0_4_ = *(uint *)((long)control + 0x18);
        if (options <= (ulong)SVar28) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar17;
        *(undefined8 *)(puVar25 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar28 = (System_Nullable_bool__Fields)((long)SVar28 + 1);
        SVar16.value = 0;
        SVar16.hasValue = *(uint *)((long)unaff_RBX + 0x18);
        options = (uint *)(long)(int)*(uint *)((long)unaff_RBX + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        __this_00 = SVar17;
        if ((long)options <= (long)SVar28) {
          return;
        }
      }
      *(undefined8 *)(puVar25 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar17 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x20);
  *(undefined8 *)(puVar25 + -0x98) = 0x44620b2;
  SVar29 = SVar17;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar25 + -0x90),
             (MethodInfo *)SVar17);
  *(undefined8 *)(puVar25 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar25 + -0x98) = unaff_RBP;
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)(puVar25 + -0xa0) = control;
  *(System_Nullable_bool__Fields *)(puVar25 + -0xa8) = SVar17;
  *(System_Nullable_bool__Fields *)(puVar25 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar25 + -0xb8) = SVar33;
  *(System_Nullable_bool__Fields *)(puVar25 + -0xc0) = SVar28;
  control_00 = __this_00;
  SVar17 = SVar29;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)(puVar25 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar25 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)(puVar25 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar25 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar17 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)(puVar25 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar11 = __this_00;
  SVar9 = extraout_RDX;
  if (*(long *)((long)SVar29 + 0x10) != 0) {
    SVar28 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar29 + 0x10) + 0x28);
    if (SVar28 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)(puVar25 + -0xd0) = 0;
    }
    else {
      lVar19 = *(long *)SVar28;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
            puVar10 = (undefined8 *)
                      (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar26);
      }
      *(undefined8 *)(puVar25 + -0xf0) = 0x446219c;
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar28,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar21 = puVar10[1];
      pcVar5 = (code *)*puVar10;
      *(undefined8 *)(puVar25 + -0xf0) = 0x44621cf;
      uVar35 = (*pcVar5)(SVar28,uVar21);
      *(undefined4 *)(puVar25 + -0xd0) = uVar35;
    }
    *(undefined8 *)(puVar25 + -0xf0) = 0x44621e4;
    SVar18 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar25 + -0xf0) = 0x44621fe;
    control_00 = SVar29;
    SVar17 = SVar18;
    System_Action_GisketchActionContext____ctor();
    SVar27 = "slider";
    options = *(uint **)((long)SVar29 + 0x10);
    SVar11 = SVar18;
    SVar33 = __this_00;
    unaff_R13 = extraout_RDX;
    SVar9 = extraout_RDX;
    if ((System_Nullable_bool__Fields)options != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)(puVar25 + -200) = SVar29;
      SVar28 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      fVar36 = 0.0;
      SVar24 = extraout_RDX;
      SVar9 = __this_00;
      if (SVar28 == (System_Nullable_bool__Fields)0x0) {
        SVar24 = SVar28;
        SVar9 = SVar28;
      }
      value = *(float *)(puVar25 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar28 != (System_Nullable_bool__Fields)0x0) {
        lVar19 = *(long *)SVar28;
        uVar2 = *(ushort *)(lVar19 + 0x12e);
        *(float *)(puVar25 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar26 = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
              puVar10 = (undefined8 *)
                        (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar26 = lVar26 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar26);
        }
        *(undefined8 *)(puVar25 + -0xf0) = 0x446229c;
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar28,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control_00 = *(System_Nullable_bool__Fields *)(puVar10 + 1);
        pcVar5 = (code *)*puVar10;
        *(undefined8 *)(puVar25 + -0xf0) = 0x44622c3;
        SVar17 = SVar28;
        fVar36 = (float)(*pcVar5)();
        options = *(uint **)(*(long *)(puVar25 + -200) + 0x10);
        SVar33 = SVar18;
        unaff_R13 = SVar24;
        SVar29 = SVar27;
        if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)(puVar25 + -0xcc);
        __this_00 = SVar9;
      }
      SVar11 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      SVar29 = __this_00;
      SVar9 = SVar18;
      if (SVar11 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        SVar33 = *(System_Nullable_bool__Fields *)(puVar25 + -200);
        if (__this_00 == (System_Nullable_bool__Fields)0x0) {
          SVar28.hasValue = 0;
          SVar28.value = 0;
          control_00 = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)(puVar25 + -0xe8) = 0;
          *(undefined8 *)(puVar25 + -0xf0) = 0x44623fc;
          options = (uint *)SVar18;
          control_00 = unaff_R13;
          SVar17 = __this_00;
          SVar28 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,(System_String_o *)unaff_R13,value
                              ,0,(System_Action_GisketchActionContext__o *)SVar18,(System_String_o *)SVar27,
                              fVar36,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)(puVar25 + -0xe8));
          if (*(long *)((long)SVar33 + 0x10) != 0) {
            bVar34 = *(char *)(*(long *)((long)SVar33 + 0x10) + 0x58) == '\0';
            *(undefined2 *)(puVar25 + -0xd2) = 0;
            control_00._1_7_ = 0;
            control_00.hasValue._0_1_ = bVar34;
            SVar17 = (System_Nullable_bool__Fields)((long)puVar25 + -0xd2);
            *(undefined8 *)(puVar25 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar17,(uint)bVar34,MethodInfo_Nullable_1_Boolean);
            if (SVar28 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar28 + 0x6b) = *(undefined2 *)(puVar25 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar19 = *(long *)SVar11;
        uVar2 = *(ushort *)(lVar19 + 0x12e);
        SVar33 = *(System_Nullable_bool__Fields *)(puVar25 + -200);
        *(float *)(puVar25 + -0xd0) = fVar36;
        *(float *)(puVar25 + -0xcc) = value;
        options._0_4_ = 0;
        options._4_4_ = 0;
        if ((ulong)uVar2 != 0) {
          options = (uint *)((ulong)uVar2 << 4);
          SVar30.hasValue = 0;
          SVar30.value = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + (long)SVar30) == TypeInfo_IAottgSettingAdapter) {
              options = (uint *)((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + (long)SVar30) + 4) * 0x10);
              puVar10 = (undefined8 *)(lVar19 + (long)options + 0x138);
              goto label_044623be;
            }
            SVar30 = (System_Nullable_bool__Fields)((long)SVar30 + 0x10);
          } while ((System_Nullable_bool__Fields)options != SVar30);
        }
        *(undefined8 *)(puVar25 + -0xf0) = 0x446237c;
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control_00 = *(System_Nullable_bool__Fields *)(puVar10 + 1);
        pcVar5 = (code *)*puVar10;
        *(undefined8 *)(puVar25 + -0xf0) = 0x44623c7;
        SVar17 = SVar11;
        max = (float)(*pcVar5)();
        fVar36 = *(float *)(puVar25 + -0xd0);
        value = *(float *)(puVar25 + -0xcc);
        SVar28 = SVar27;
        if (__this_00 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)(puVar25 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar25 + -0xf0) = SVar29;
  *(System_Nullable_bool__Fields *)(puVar25 + -0xf8) = SVar9;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x100) = SVar28;
  SVar9 = SVar17;
  if (g_data_057ae798 == '\0') {
    SVar9 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)(puVar25 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar19 = *(long *)((long)SVar17 + 0x10);
  if (lVar19 != 0) {
    SVar29 = (System_Nullable_bool__Fields)((long)puVar25 + -0xe0);
    SVar28 = *(System_Nullable_bool__Fields *)(lVar19 + 0x28);
    if (SVar28 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar25 + -0x110) = *(undefined8 *)(puVar25 + -0xd0);
      *(undefined8 *)(puVar25 + -0x108) = *(undefined8 *)(puVar25 + -200);
      *(undefined8 *)(puVar25 + -0x120) = *(undefined8 *)SVar29;
      *(undefined8 *)(puVar25 + -0x118) = *(undefined8 *)(puVar25 + -0xd8);
label_0446256c:
      *(undefined8 *)(puVar25 + -0x130) = *(undefined8 *)(puVar25 + -0x110);
      *(undefined8 *)(puVar25 + -0x128) = *(undefined8 *)(puVar25 + -0x108);
      *(undefined8 *)(puVar25 + -0x140) = *(undefined8 *)(puVar25 + -0x120);
      *(undefined8 *)(puVar25 + -0x138) = *(undefined8 *)(puVar25 + -0x118);
      lVar19 = *(long *)(lVar19 + 0x88);
      if (lVar19 != 0) {
        uVar21 = *(undefined8 *)(lVar19 + 0x28);
        uVar6 = *(undefined8 *)(lVar19 + 0x40);
        *(undefined4 *)(puVar25 + -0x150) = *(undefined4 *)(puVar25 + -0x130);
        *(undefined4 *)(puVar25 + -0x14c) = *(undefined4 *)(puVar25 + -300);
        *(undefined4 *)(puVar25 + -0x148) = *(undefined4 *)(puVar25 + -0x128);
        *(undefined4 *)(puVar25 + -0x144) = *(undefined4 *)(puVar25 + -0x124);
        *(undefined4 *)(puVar25 + -0x160) = *(undefined4 *)(puVar25 + -0x140);
        *(undefined4 *)(puVar25 + -0x15c) = *(undefined4 *)(puVar25 + -0x13c);
        *(undefined4 *)(puVar25 + -0x158) = *(undefined4 *)(puVar25 + -0x138);
        *(undefined4 *)(puVar25 + -0x154) = *(undefined4 *)(puVar25 + -0x134);
        pcVar5 = *(code **)(lVar19 + 0x18);
        *(undefined8 *)(puVar25 + -0x168) = 0x44625a7;
        (*pcVar5)(uVar6,uVar21);
      }
      return;
    }
    *(undefined4 *)(puVar25 + -0x130) = *(undefined4 *)(puVar25 + -0xd0);
    *(undefined4 *)(puVar25 + -300) = *(undefined4 *)(puVar25 + -0xcc);
    *(undefined4 *)(puVar25 + -0x128) = *(undefined4 *)(puVar25 + -200);
    *(undefined4 *)(puVar25 + -0x124) = *(undefined4 *)(puVar25 + -0xc4);
    *(undefined4 *)(puVar25 + -0x140) = *(undefined4 *)SVar29;
    *(undefined4 *)(puVar25 + -0x13c) = *(undefined4 *)(puVar25 + -0xdc);
    *(undefined4 *)(puVar25 + -0x138) = *(undefined4 *)(puVar25 + -0xd8);
    *(undefined4 *)(puVar25 + -0x134) = *(undefined4 *)(puVar25 + -0xd4);
    lVar19 = *(long *)SVar28;
    options._0_4_ = 0;
    options._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      options = (uint *)((ulong)*(ushort *)(lVar19 + 0x12e) << 4);
      SVar31.hasValue = 0;
      SVar31.value = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + (long)SVar31) == TypeInfo_IAottgSettingAdapter) {
          options = (uint *)((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + (long)SVar31) + 0xb) * 0x10);
          puVar10 = (undefined8 *)(lVar19 + (long)options + 0x138);
          goto label_0446252f;
        }
        SVar31 = (System_Nullable_bool__Fields)((long)SVar31 + 0x10);
      } while ((System_Nullable_bool__Fields)options != SVar31);
    }
    *(undefined8 *)(puVar25 + -0x168) = 0x44624fc;
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar28,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control_00 = *(System_Nullable_bool__Fields *)(puVar10 + 1);
    *(undefined4 *)(puVar25 + -0x150) = *(undefined4 *)(puVar25 + -0x130);
    *(undefined4 *)(puVar25 + -0x14c) = *(undefined4 *)(puVar25 + -300);
    *(undefined4 *)(puVar25 + -0x148) = *(undefined4 *)(puVar25 + -0x128);
    *(undefined4 *)(puVar25 + -0x144) = *(undefined4 *)(puVar25 + -0x124);
    *(undefined4 *)(puVar25 + -0x160) = *(undefined4 *)(puVar25 + -0x140);
    *(undefined4 *)(puVar25 + -0x15c) = *(undefined4 *)(puVar25 + -0x13c);
    *(undefined4 *)(puVar25 + -0x158) = *(undefined4 *)(puVar25 + -0x138);
    *(undefined4 *)(puVar25 + -0x154) = *(undefined4 *)(puVar25 + -0x134);
    pcVar5 = (code *)*puVar10;
    *(undefined8 *)(puVar25 + -0x168) = 0x446254b;
    SVar9 = SVar28;
    (*pcVar5)();
    lVar19 = *(long *)((long)SVar17 + 0x10);
    *(undefined8 *)(puVar25 + -0x110) = *(undefined8 *)(puVar25 + -0xd0);
    *(undefined8 *)(puVar25 + -0x108) = *(undefined8 *)(puVar25 + -200);
    *(undefined4 *)(puVar25 + -0x120) = *(undefined4 *)SVar29;
    *(undefined4 *)(puVar25 + -0x11c) = *(undefined4 *)(puVar25 + -0xdc);
    *(undefined4 *)(puVar25 + -0x118) = *(undefined4 *)(puVar25 + -0xd8);
    *(undefined4 *)(puVar25 + -0x114) = *(undefined4 *)(puVar25 + -0xd4);
    if (lVar19 != 0) goto label_0446256c;
  }
  *(undefined8 *)(puVar25 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar25 + -0x168) = SVar11;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x170) = SVar29;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x178) = SVar17;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x180) = SVar28;
  SVar17 = SVar9;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)(puVar25 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar17 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)(puVar25 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar19 = *(long *)((long)SVar9 + 0x10);
  if (lVar19 != 0) {
    SVar11 = (System_Nullable_bool__Fields)((long)puVar25 + -0x158);
    SVar28 = *(System_Nullable_bool__Fields *)(lVar19 + 0x28);
    if (SVar28 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar25 + -0x1b8) = *(undefined8 *)(puVar25 + -0x148);
      *(undefined8 *)(puVar25 + -0x1b0) = *(undefined8 *)(puVar25 + -0x140);
      *(undefined8 *)(puVar25 + -0x1c8) = *(undefined8 *)SVar11;
      *(undefined8 *)(puVar25 + -0x1c0) = *(undefined8 *)(puVar25 + -0x150);
    }
    else {
      if (*(long *)(puVar25 + -0x148) == 0) {
        SVar29.hasValue = 0;
        SVar29.value = 0;
      }
      else {
        pSVar20 = *(System_String_o **)(*(long *)(puVar25 + -0x148) + 0x50);
        *(undefined8 *)(puVar25 + -0x1f0) = 0x4462631;
        uVar8 = System_String__op_Equality(pSVar20,"true",(MethodInfo *)0x0);
        SVar29.value = 0;
        SVar29.hasValue = uVar8;
      }
      lVar19 = *(long *)SVar28;
      options._0_4_ = 0;
      options._4_4_ = 0;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        options = (uint *)((ulong)*(ushort *)(lVar19 + 0x12e) << 4);
        SVar32.hasValue = 0;
        SVar32.value = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + (long)SVar32) == TypeInfo_IAottgSettingAdapter) {
            options = (uint *)((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + (long)SVar32) + 8) * 0x10);
            puVar10 = (undefined8 *)(lVar19 + (long)options + 0x138);
            goto label_044626b5;
          }
          SVar32 = (System_Nullable_bool__Fields)((long)SVar32 + 0x10);
        } while ((System_Nullable_bool__Fields)options != SVar32);
      }
      *(undefined8 *)(puVar25 + -0x1f0) = 0x446269c;
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar28,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      uVar21 = puVar10[1];
      control_00 = (System_Nullable_bool__Fields)((ulong)SVar29 & 0xff);
      pcVar5 = (code *)*puVar10;
      *(undefined8 *)(puVar25 + -0x1f0) = 0x44626c2;
      SVar17 = SVar28;
      (*pcVar5)(SVar28,control_00,uVar21);
      lVar19 = *(long *)((long)SVar9 + 0x10);
      *(undefined8 *)(puVar25 + -0x1b8) = *(undefined8 *)(puVar25 + -0x148);
      *(undefined8 *)(puVar25 + -0x1b0) = *(undefined8 *)(puVar25 + -0x140);
      *(undefined4 *)(puVar25 + -0x1c8) = *(undefined4 *)SVar11;
      *(undefined4 *)(puVar25 + -0x1c4) = *(undefined4 *)(puVar25 + -0x154);
      *(undefined4 *)(puVar25 + -0x1c0) = *(undefined4 *)(puVar25 + -0x150);
      *(undefined4 *)(puVar25 + -0x1bc) = *(undefined4 *)(puVar25 + -0x14c);
      if (lVar19 == 0) goto label_04462728;
    }
    *(undefined8 *)(puVar25 + -0x198) = *(undefined8 *)(puVar25 + -0x1b8);
    *(undefined8 *)(puVar25 + -400) = *(undefined8 *)(puVar25 + -0x1b0);
    *(undefined8 *)(puVar25 + -0x1a8) = *(undefined8 *)(puVar25 + -0x1c8);
    *(undefined8 *)(puVar25 + -0x1a0) = *(undefined8 *)(puVar25 + -0x1c0);
    lVar19 = *(long *)(lVar19 + 0x88);
    if (lVar19 != 0) {
      uVar21 = *(undefined8 *)(lVar19 + 0x28);
      uVar6 = *(undefined8 *)(lVar19 + 0x40);
      *(undefined4 *)(puVar25 + -0x1d8) = *(undefined4 *)(puVar25 + -0x198);
      *(undefined4 *)(puVar25 + -0x1d4) = *(undefined4 *)(puVar25 + -0x194);
      *(undefined4 *)(puVar25 + -0x1d0) = *(undefined4 *)(puVar25 + -400);
      *(undefined4 *)(puVar25 + -0x1cc) = *(undefined4 *)(puVar25 + -0x18c);
      *(undefined4 *)(puVar25 + -0x1e8) = *(undefined4 *)(puVar25 + -0x1a8);
      *(undefined4 *)(puVar25 + -0x1e4) = *(undefined4 *)(puVar25 + -0x1a4);
      *(undefined4 *)(puVar25 + -0x1e0) = *(undefined4 *)(puVar25 + -0x1a0);
      *(undefined4 *)(puVar25 + -0x1dc) = *(undefined4 *)(puVar25 + -0x19c);
      pcVar5 = *(code **)(lVar19 + 0x18);
      *(undefined8 *)(puVar25 + -0x1f0) = 0x446271d;
      (*pcVar5)(uVar6,uVar21);
    }
    return;
  }
label_04462728:
  *(undefined8 *)(puVar25 + -0x1f0) = 0x446272d;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar25 + -0x1f0) = SVar11;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x1f8) = SVar29;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x200) = SVar9;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x208) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x210) = SVar33;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x218) = SVar28;
  SVar11 = SVar17;
  if (g_data_057ae79c == '\0') {
    *(undefined8 *)(puVar25 + -0x278) = 0x4462759;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar25 + -0x278) = 0x4462765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    *(undefined8 *)(puVar25 + -0x278) = 0x4462771;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar25 + -0x278) = 0x446277d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar25 + -0x278) = 0x4462789;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)(puVar25 + -0x278) = 0x4462795;
    il2cpp_runtime_helper_023445d0(&"-value-button");
    *(undefined8 *)(puVar25 + -0x278) = 0x44627a1;
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar11 = (System_Nullable_bool__Fields)&"0";
    *(undefined8 *)(puVar25 + -0x278) = 0x44627ad;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar17 + 0x10) != 0) {
    pSVar20 = *(System_String_o **)(*(long *)((long)SVar17 + 0x10) + 0x10);
    *(undefined8 *)(puVar25 + -0x278) = 0x44627d6;
    pSVar20 = System_String__Concat_3ae5ba0(pSVar20,"-slider",(MethodInfo *)0x0);
    *(undefined8 *)(puVar25 + -0x278) = 0x44627e4;
    SVar28 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar17,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,pSVar20,(MethodInfo *)options);
    *(undefined8 *)(puVar25 + -0x278) = 0x44627f6;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(undefined8 *)(puVar25 + -0x260) = 0;
    *(undefined8 *)(puVar25 + -600) = 0;
    *(undefined8 *)(puVar25 + -0x270) = 0;
    *(undefined8 *)(puVar25 + -0x268) = 0;
    *(undefined8 *)(puVar25 + -0x228) = 0;
    *(undefined4 *)(puVar25 + -0x230) = 0x3f800000;
    *(undefined4 *)(puVar25 + -0x238) = 0x3f800000;
    *(undefined4 *)(puVar25 + -0x240) = 0;
    *(undefined4 *)(puVar25 + -0x248) = 0;
    *(undefined8 *)(puVar25 + -0x250) = 0;
    *(undefined8 *)(puVar25 + -0x278) = 0x4462873;
    SVar11 = "Column";
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar13,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x270),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x268),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x260),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -600),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x250),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar25 + -0x248),*(float *)(puVar25 + -0x240),
                         *(float *)(puVar25 + -0x238),*(float *)(puVar25 + -0x230),
                         *(MethodInfo **)(puVar25 + -0x228));
    if (SVar28 != (System_Nullable_bool__Fields)0x0) {
      SVar11 = (System_Nullable_bool__Fields)((long)SVar28 + 0xd8);
      *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar28 + 0xd8) = pGVar15;
      *(undefined8 *)(puVar25 + -0x278) = 0x4462895;
      il2cpp_runtime_helper_022b4080(SVar11,pGVar15);
      if (*(long *)((long)SVar17 + 0x10) != 0) {
        plVar4 = *(long **)(*(long *)((long)SVar17 + 0x10) + 0x28);
        if (plVar4 == (long *)0x0) {
          variant = 4;
          pSVar20 = "0";
        }
        else {
          lVar19 = *plVar4;
          if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
            lVar26 = 0;
            do {
              if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar26) == TypeInfo_IAottgSettingAdapter) {
                puVar10 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar26) * 0x10 + lVar19 + 0x138);
                goto label_04462936;
              }
              lVar26 = lVar26 + 0x10;
            } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar26);
          }
          *(undefined8 *)(puVar25 + -0x278) = 0x4462909;
          puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar4 != (long *)0x0) << 2;
          uVar21 = puVar10[1];
          pcVar5 = (code *)*puVar10;
          *(undefined8 *)(puVar25 + -0x278) = 0x4462943;
          pSVar20 = (System_String_o *)(*pcVar5)(plVar4,uVar21);
        }
        *(undefined8 *)(puVar25 + -0x278) = 0x4462955;
        SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        *(undefined8 *)(puVar25 + -0x278) = 0x446296f;
        SVar11 = SVar9;
        System_Action_GisketchActionContext____ctor();
        SVar28 = control_00;
        if (*(long *)((long)SVar17 + 0x10) != 0) {
          SVar11 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar17 + 0x10) + 0x10);
          *(undefined8 *)(puVar25 + -0x278) = 0x4462991;
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar11,"-value-button",(MethodInfo *)0x0);
          if (control_00 != (System_Nullable_bool__Fields)0x0) {
            *(undefined8 *)(puVar25 + -0x270) = 0;
            *(undefined8 *)(puVar25 + -0x268) = 0;
            *(undefined8 *)(puVar25 + -0x260) = 0;
            *(undefined8 *)(puVar25 + -0x278) = 0x44629c1;
            SVar11 = control_00;
            SVar28 = (System_Nullable_bool__Fields)
                     Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,variant,pSVar20,
                                (System_Action_GisketchActionContext__o *)SVar9,id,(System_String_o *)0x0,
                                *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar25 + -0x270),
                                *(System_String_o **)(puVar25 + -0x268),*(MethodInfo **)(puVar25 + -0x260));
            if (*(long *)((long)SVar17 + 0x10) != 0) {
              cVar1 = *(char *)(*(long *)((long)SVar17 + 0x10) + 0x58);
              *(undefined2 *)(puVar25 + -0x21a) = 0;
              SVar11 = (System_Nullable_bool__Fields)((long)puVar25 + -0x21a);
              *(undefined8 *)(puVar25 + -0x278) = 0x44629f6;
              System_Nullable_bool____ctor((System_Nullable_bool__o)SVar11,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean)
              ;
              if (SVar28 != (System_Nullable_bool__Fields)0x0) {
                *(undefined2 *)((long)SVar28 + 0x6b) = *(undefined2 *)(puVar25 + -0x21a);
                *(undefined8 *)(puVar25 + -0x278) = 0x4462a1e;
                pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar25 + -0x260) = 0;
                *(undefined8 *)(puVar25 + -600) = 0;
                *(undefined8 *)(puVar25 + -0x270) = 0;
                *(undefined8 *)(puVar25 + -0x268) = 0;
                *(undefined8 *)(puVar25 + -0x228) = 0;
                *(undefined4 *)(puVar25 + -0x230) = 0;
                *(undefined4 *)(puVar25 + -0x238) = 0;
                *(undefined4 *)(puVar25 + -0x240) = 0;
                *(undefined4 *)(puVar25 + -0x248) = 0;
                *(undefined8 *)(puVar25 + -0x250) = 0;
                *(undefined8 *)(puVar25 + -0x278) = 0x4462a95;
                pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ((System_String_o *)"Column",(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     pGVar13,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x270),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x268),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x260),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -600),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar25 + -0x250),0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,*(float *)(puVar25 + -0x248),
                                     *(float *)(puVar25 + -0x240),*(float *)(puVar25 + -0x238),
                                     *(float *)(puVar25 + -0x230),*(MethodInfo **)(puVar25 + -0x228));
                *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar28 + 0xd8) = pGVar15;
                *(undefined8 *)(puVar25 + -0x278) = 0x4462aae;
                il2cpp_runtime_helper_022b4080((long)SVar28 + 0xd8,pGVar15);
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar25 + -0x278) = 0x4462ac2;
  uVar21 = il2cpp_runtime_helper_022b2c90();
  lVar19 = *(long *)((long)SVar11 + 0x10);
  *(System_Nullable_bool__Fields *)(puVar25 + -0x278) = control_00;
  *(System_Nullable_bool__Fields *)(puVar25 + -0x280) = SVar28;
  *(undefined8 *)(puVar25 + -0x288) = uVar21;
  if (g_data_057ae7ad == '\0') {
    *(undefined8 *)(puVar25 + -0x290) = 0x4462afc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    *(undefined8 *)(puVar25 + -0x290) = 0x4462b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    *(undefined8 *)(puVar25 + -0x290) = 0x4462b14;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) && (*(char *)(lVar19 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar19;
    uVar21 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
    *(undefined8 *)(puVar25 + -0x290) = 0x4462b60;
    il2cpp_runtime_helper_022b4080(uVar21,lVar19);
    if (*(UnityEngine_GameObject_o **)(puVar25 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)(puVar25 + -0x290) = 0x4462b78;
      pIVar22 = UnityEngine_GameObject__GetComponentInParent_object_
                          (*(UnityEngine_GameObject_o **)(puVar25 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar22 != (Il2CppObject *)0x0) &&
         (pIVar22[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar22[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSwitch
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x4461140

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint type;
  uint uVar9;
  System_Nullable_bool__Fields SVar10;
  VirtualInvokeData *pVVar11;
  System_Nullable_bool__Fields SVar12;
  System_Nullable_bool__Fields SVar13;
  System_Nullable_bool__Fields SVar14;
  System_Nullable_bool__Fields SVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  System_Nullable_bool__Fields *pSVar20;
  undefined8 *puVar21;
  System_Nullable_bool__Fields SVar22;
  System_String_o *pSVar23;
  System_String_o *pSVar24;
  undefined8 uVar25;
  Il2CppObject *pIVar26;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar27;
  undefined8 *puVar28;
  System_Nullable_bool__Fields unaff_RBP;
  System_Nullable_bool__Fields SVar29;
  System_Nullable_bool__Fields control_00;
  System_Nullable_bool__Fields *pSVar30;
  long lVar31;
  System_Nullable_bool__Fields SVar32;
  long lVar33;
  System_Nullable_bool__Fields SVar34;
  long *plVar35;
  System_Nullable_bool__Fields SVar36;
  System_String_o **ppSVar37;
  System_Nullable_bool__Fields SVar38;
  System_String_o **ppSVar39;
  System_Nullable_bool__Fields unaff_R12;
  int32_t iVar40;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields SVar41;
  System_Nullable_bool__Fields *unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar42;
  undefined4 uVar43;
  float fVar44;
  float max;
  float value;
  undefined1 auVar45 [16];
  undefined1 auStack_140 [4];
  uint uStack_13c;
  float fStack_138;
  uint uStack_134;
  System_String_o *pSStack_130;
  System_Nullable_bool__Fields SStack_128;
  System_Nullable_bool__Fields SStack_120;
  System_Nullable_bool__Fields SStack_118;
  System_Nullable_bool__Fields SStack_110;
  System_Nullable_bool__Fields SStack_108;
  System_Nullable_bool__Fields SStack_100;
  System_Nullable_bool__Fields SStack_f8;
  System_Nullable_bool__Fields SStack_f0;
  undefined8 uStack_70;
  System_Nullable_bool__Fields SStack_68;
  System_Nullable_bool__Fields SStack_60;
  System_Nullable_bool__Fields SStack_58;
  System_Nullable_bool__Fields SStack_50;
  System_Nullable_bool__Fields SStack_48;
  System_Nullable_bool__Fields SStack_40;
  undefined1 auStack_38 [8];
  
  SVar13 = (System_Nullable_bool__Fields)control;
  pSVar30 = (System_Nullable_bool__Fields *)__this;
  if (g_data_057ae791 == '\0') {
    SStack_40.hasValue = 0x4461166;
    SStack_40.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    SStack_40.hasValue = 0x4461172;
    SStack_40.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSwitch_b__4_0);
    SStack_40.hasValue = 0x446117e;
    SStack_40.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    pSVar30 = &"-switch";
    SStack_40.hasValue = 0x446118a;
    SStack_40.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae791 = '\x01';
  }
  pGVar3 = (__this->fields)._descriptor;
  SVar14 = unaff_RBX;
  SVar15 = unaff_RBP;
  SVar29 = unaff_R12;
  SVar22 = unaff_R15;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_044612b2:
    SStack_40.hasValue = 0x44612b7;
    SStack_40.value = 0;
    auVar45 = il2cpp_runtime_helper_022b2c90();
    uStack_70 = auVar45._0_8_;
    unaff_R12 = (System_Nullable_bool__Fields)(auVar45._8_8_ & 0xffffffff);
    SVar12 = in_RCX;
    SVar10 = SVar13;
    SStack_68 = SVar14;
    SStack_60 = SVar29;
    SStack_58 = (System_Nullable_bool__Fields)control;
    SStack_50 = (System_Nullable_bool__Fields)__this;
    SStack_48 = SVar22;
    SStack_40 = SVar15;
    if (g_data_057ae792 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&"-select");
      il2cpp_runtime_helper_023445d0(&"-dropdown");
      g_data_057ae792 = '\x01';
      SVar12 = in_RCX;
    }
    pSVar20 = pSVar30;
    SVar14 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)pSVar30,(MethodInfo *)SVar10);
    lVar31 = *(long *)((long)pSVar30 + 0x10);
    unaff_RBP = SVar15;
    unaff_R13 = (System_Nullable_bool__Fields)control;
    if (lVar31 != 0) {
      unaff_RBP = *(System_Nullable_bool__Fields *)(lVar31 + 0x28);
      if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
        unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
        pSVar23 = *(System_String_o **)(lVar31 + 0x10);
        if ((char)unaff_R12.hasValue != '\0') goto label_044613e9;
label_0446145e:
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar23,"-select",(MethodInfo *)0x0);
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar12.hasValue = 0;
        SVar12.value = 0;
        SVar10 = (System_Nullable_bool__Fields)pSVar30;
        pSVar20 = (System_Nullable_bool__Fields *)unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)pSVar30 + 0x10) == 0) || (SVar13 == (System_Nullable_bool__Fields)0x0))
        goto label_044614ee;
        SVar13 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)unaff_R12,
                            (System_String_o *)unaff_R13,
                            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)SVar14,
                            (System_Action_GisketchActionContext__o *)unaff_RBP,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            *(int32_t *)(*(long *)((long)pSVar30 + 0x10) + 0x5c),(MethodInfo *)0x0);
        SVar12 = SVar14;
label_044614c9:
        uVar43 = 0x43960000;
        puVar28 = (undefined8 *)auStack_38;
        unaff_RBX = SStack_68;
        unaff_RBP = SStack_40;
        pSVar20 = pSVar30;
        unaff_R12 = SStack_60;
        unaff_R13 = SStack_58;
        unaff_R14 = (System_Nullable_bool__Fields *)SStack_50;
        unaff_R15 = SStack_48;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      lVar31 = *(long *)unaff_RBP;
      if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
        lVar33 = 0;
        do {
          if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
            SVar12 = (System_Nullable_bool__Fields)
                     ((long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + lVar31 + 0x138);
            goto label_044613c7;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
      }
      SVar12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_044613c7:
      SVar10 = *(System_Nullable_bool__Fields *)((long)SVar12 + 8);
      pSVar20 = (System_Nullable_bool__Fields *)unaff_RBP;
      unaff_R13 = (System_Nullable_bool__Fields)(**(code **)SVar12)();
      if (*(long *)((long)pSVar30 + 0x10) != 0) {
        pSVar23 = *(System_String_o **)(*(long *)((long)pSVar30 + 0x10) + 0x10);
        if ((char)unaff_R12.hasValue == '\0') goto label_0446145e;
label_044613e9:
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar23,"-dropdown",(MethodInfo *)0x0);
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar12.hasValue = 0;
        SVar12.value = 0;
        SVar10 = (System_Nullable_bool__Fields)pSVar30;
        pSVar20 = (System_Nullable_bool__Fields *)unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)pSVar30 + 0x10) != 0) && (SVar13 != (System_Nullable_bool__Fields)0x0)) {
          SVar13 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)unaff_R12,
                              (System_String_o *)unaff_R13,
                              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)SVar14,
                              (System_Action_GisketchActionContext__o *)unaff_RBP,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(int32_t *)(*(long *)((long)pSVar30 + 0x10) + 0x5c),(MethodInfo *)0x0);
          SVar12 = SVar14;
          goto label_044614c9;
        }
      }
    }
label_044614ee:
    il2cpp_runtime_helper_022b2c90();
    SVar29 = SVar10;
    ppSVar37 = (System_String_o **)pSVar20;
    unaff_R14 = (System_Nullable_bool__Fields *)SVar13;
    unaff_R15 = SVar14;
    if (g_data_057ae793 == '\0') {
      SStack_f0.hasValue = 0x4461526;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      SStack_f0.hasValue = 0x4461532;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
      SStack_f0.hasValue = 0x446153e;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0(&"clear");
      SStack_f0.hasValue = 0x446154a;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0(&"-slider-with-value");
      SStack_f0.hasValue = 0x4461556;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0(&"Center");
      SStack_f0.hasValue = 0x4461562;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0(&"Row");
      ppSVar37 = &"-slider";
      SStack_f0.hasValue = 0x446156e;
      SStack_f0.value = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae793 = '\x01';
      unaff_R14 = (System_Nullable_bool__Fields *)SVar13;
    }
    lVar31 = *(long *)((long)pSVar20 + 0x10);
    SVar15 = unaff_R12;
    if (lVar31 != 0) {
      if (*(char *)(lVar31 + 0x59) == '\0') {
        SStack_f0.hasValue = 0x44616d7;
        SStack_f0.value = 0;
        pSVar23 = System_String__Concat_3ae5ba0
                            (*(System_String_o **)(lVar31 + 0x10),"-slider",(MethodInfo *)0x0);
        SStack_f0.hasValue = 0x44616e5;
        SStack_f0.value = 0;
        SVar13 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)pSVar20,
                            (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar10,pSVar23,(MethodInfo *)SVar12);
        uVar43 = 0x441b0000;
        puVar28 = &uStack_70;
        unaff_RBX = (System_Nullable_bool__Fields)pSVar30;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      SStack_f0.hasValue = 0x446159b;
      SStack_f0.value = 0;
      SVar14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      SVar12.hasValue = 0;
      SVar12.value = 0;
      SStack_f0.hasValue = 0x44615b5;
      SStack_f0.value = 0;
      SVar29 = (System_Nullable_bool__Fields)pSVar20;
      ppSVar37 = (System_String_o **)SVar14;
      System_Action_object____ctor();
      if (*(long *)((long)pSVar20 + 0x10) != 0) {
        SStack_f0.hasValue = 0x44615d7;
        SStack_f0.value = 0;
        SVar15 = (System_Nullable_bool__Fields)
                 System_String__Concat_3ae5ba0
                           (*(System_String_o **)(*(long *)((long)pSVar20 + 0x10) + 0x10),"-slider-with-value",
                            (MethodInfo *)0x0);
        SStack_f0.hasValue = 0x44615e9;
        SStack_f0.value = 0;
        pSVar20 = (System_Nullable_bool__Fields *)
                  Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
        SStack_f0.hasValue = 0x44615fb;
        SStack_f0.value = 0;
        pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        SVar29.hasValue = 0;
        SVar29.value = 0;
        SVar12.hasValue = 0;
        SVar12.value = 0;
        SStack_f0.hasValue = 0x446168b;
        SStack_f0.value = 0;
        ppSVar37 = (System_String_o **)"Row";
        pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)pSVar20,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar17,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        if (SVar10 != (System_Nullable_bool__Fields)0x0) {
          SStack_f0.hasValue = 0x44616b6;
          SStack_f0.value = 0;
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar10,"clear",
                     (System_Action_AottgUi__o *)SVar14,(System_String_o *)SVar15,pGVar19,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    SStack_f0.hasValue = 0x4461708;
    SStack_f0.value = 0;
    il2cpp_runtime_helper_022b2c90();
    puVar28 = (undefined8 *)auStack_140;
    SVar22 = SVar12;
    unaff_R15 = SVar29;
    ppSVar39 = ppSVar37;
    SStack_118 = (System_Nullable_bool__Fields)pSVar20;
    SStack_110 = SVar15;
    SStack_108 = unaff_R13;
    SStack_100 = SVar10;
    SStack_f8 = SVar14;
    SStack_f0 = unaff_RBP;
    if (g_data_057ae795 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"inputField");
      ppSVar39 = &"-input";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
      SVar22 = SVar12;
    }
    lVar31 = *(long *)((long)ppSVar37 + 0x10);
    unaff_RBP = (System_Nullable_bool__Fields)ppSVar37;
    if (lVar31 != 0) {
      if (*(long **)(lVar31 + 0x28) == (long *)0x0) {
        uStack_13c = 1;
      }
      else {
        uStack_13c = (uint)(**(long **)(lVar31 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      SVar15 = (System_Nullable_bool__Fields)
               System_String__Concat_3ae5ba0
                         (*(System_String_o **)(lVar31 + 0x10),"-input",(MethodInfo *)0x0);
      unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      fStack_138 = 0.0;
      pSVar20 = (System_Nullable_bool__Fields *)
                Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar17,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar18,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
      SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      SVar22.hasValue = 0;
      SVar22.value = 0;
      unaff_R15 = (System_Nullable_bool__Fields)ppSVar37;
      ppSVar39 = (System_String_o **)SVar10;
      System_Action_GisketchActionContext____ctor();
      SStack_120 = (System_Nullable_bool__Fields)ppSVar37;
      if (*(long *)((long)ppSVar37 + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)ppSVar37 + 0x10) + 0x28);
        fVar44 = 0.05;
        bVar42 = unaff_RBP == (System_Nullable_bool__Fields)0x0;
        SVar41 = unaff_R13;
        SVar13 = SVar15;
        SVar14 = SVar29;
        if (bVar42) {
          SVar41.hasValue = 0;
          SVar41.value = 0;
          SVar13 = unaff_RBP;
          SVar14 = unaff_RBP;
        }
        unaff_R15.value = 0;
        unaff_R15.hasValue = uStack_13c;
        SVar27 = SVar10;
        SVar22 = (System_Nullable_bool__Fields)pSVar20;
        pSVar23 = "inputField";
        uVar9 = uStack_13c;
        if (bVar42) {
          SVar27.hasValue = 0;
          SVar27.value = 0;
          pSVar23 = (System_String_o *)0x0;
          SVar22 = unaff_RBP;
          uVar9 = 0;
        }
        iVar40 = 0;
        SVar32 = SVar10;
        ppSVar39 = (System_String_o **)SVar15;
        SVar12 = (System_Nullable_bool__Fields)pSVar20;
        type = uStack_13c;
        pSVar24 = "inputField";
        SStack_128 = SVar29;
        if (!bVar42) {
          fStack_138 = 0.05;
          lVar31 = *(long *)unaff_RBP;
          uStack_134 = uVar9;
          pSStack_130 = pSVar23;
          if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
            lVar33 = 0;
            do {
              if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                puVar21 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) + 7) * 0x10 + lVar31 + 0x138
                          );
                goto label_044619df;
              }
              lVar33 = lVar33 + 0x10;
            } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
          }
          puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          unaff_R15 = *(System_Nullable_bool__Fields *)(puVar21 + 1);
          ppSVar39 = (System_String_o **)unaff_RBP;
          iVar40 = (*(code *)*puVar21)();
          SVar32 = SVar27;
          unaff_R13 = SVar41;
          SVar15 = SVar13;
          SVar29 = SVar14;
          SVar12 = SVar22;
          SVar10 = SVar22;
          fVar44 = fStack_138;
          type = uStack_134;
          pSVar24 = pSStack_130;
        }
        pSVar20 = (System_Nullable_bool__Fields *)SVar32;
        SVar22.value = 0;
        SVar22.hasValue = type;
        if (SVar29 != (System_Nullable_bool__Fields)0x0) {
          unaff_R15 = SVar15;
          ppSVar39 = (System_String_o **)SVar29;
          pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar29,(System_String_o *)SVar15,
                               (System_String_o *)unaff_R13,type,pSVar24,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar12,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               (System_Action_GisketchActionContext__o *)pSVar20,fVar44,iVar40,
                               (MethodInfo *)0x0);
          SVar22.hasValue = 0;
          SVar22.value = 0;
          if (*(long *)((long)SStack_120 + 0x10) != 0) {
            unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)SStack_120 + 0x10) + 0x28);
            if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
              SVar22 = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
              unaff_R15 = *(System_Nullable_bool__Fields *)SVar22;
            }
            else {
              lVar31 = *(long *)unaff_RBP;
              if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
                lVar33 = 0;
                do {
                  if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                    SVar22 = (System_Nullable_bool__Fields)
                             ((long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + lVar31 + 0x138);
                    goto label_04461ac3;
                  }
                  lVar33 = lVar33 + 0x10;
                } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
              }
              SVar22 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              ppSVar39 = (System_String_o **)unaff_RBP;
              unaff_R15 = (System_Nullable_bool__Fields)
                          (**(code **)SVar22)(unaff_RBP,*(undefined8 *)((long)SVar22 + 8));
            }
            pSVar20._0_4_ = 0;
            pSVar20._4_4_ = 0;
            if (pGVar16 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar16->fields).value = (System_String_o *)unaff_R15;
              il2cpp_runtime_helper_022b4080(&(pGVar16->fields).value);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_R12 = unaff_R15;
    unaff_R14 = (System_Nullable_bool__Fields *)ppSVar39;
    SVar14 = (System_Nullable_bool__Fields)pSVar20;
    if (g_data_057ae796 == '\0') {
      unaff_R14 = &"-button";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
    }
    lVar31 = *(long *)((long)ppSVar39 + 0x10);
    unaff_RBX = (System_Nullable_bool__Fields)pSVar20;
    if (lVar31 == 0) {
label_04461c07:
      il2cpp_runtime_helper_022b2c90();
      puVar28 = (undefined8 *)&stack0xfffffffffffffe10;
      SVar12 = SVar22;
      SVar13 = unaff_R12;
      pSVar20 = unaff_R14;
      if (g_data_057ae797 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"text");
        pSVar20 = &"-value";
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        SVar12 = SVar22;
      }
      lVar31 = *(long *)((long)unaff_R14 + 0x10);
      if (lVar31 != 0) {
        unaff_RBX = *(System_Nullable_bool__Fields *)(lVar31 + 0x80);
        if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
          unaff_R15 = *(System_Nullable_bool__Fields *)(lVar31 + 0x28);
          if (unaff_R15 == (System_Nullable_bool__Fields)0x0) {
            SVar12 = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
            unaff_RBX = *(System_Nullable_bool__Fields *)SVar12;
            unaff_R13.hasValue = 0;
            unaff_R13.value = 0;
          }
          else {
            lVar31 = *(long *)unaff_R15;
            if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
              lVar33 = 0;
              do {
                if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                  SVar12 = (System_Nullable_bool__Fields)
                           ((long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + lVar31 + 0x138);
                  goto label_04461d0b;
                }
                lVar33 = lVar33 + 0x10;
              } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
            }
            SVar12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_R15,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar13 = *(System_Nullable_bool__Fields *)((long)SVar12 + 8);
            pSVar20 = (System_Nullable_bool__Fields *)unaff_R15;
            unaff_RBX = (System_Nullable_bool__Fields)(**(code **)SVar12)();
            lVar31 = *(long *)((long)unaff_R14 + 0x10);
            unaff_R13 = unaff_R12;
            if (lVar31 == 0) goto label_04461e40;
          }
        }
        pSVar20 = *(System_Nullable_bool__Fields **)(lVar31 + 0x10);
        SVar13 = "-value";
        pSVar23 = System_String__Concat_3ae5ba0
                            ((System_String_o *)pSVar20,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
          pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R12,(System_String_o *)unaff_RBX,
                               "text",pSVar23,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          unaff_R14 = (System_Nullable_bool__Fields *)
                      Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          SVar13.hasValue = 0;
          SVar13.value = 0;
          SVar12.hasValue = 0;
          SVar12.value = 0;
          pSVar20 = (System_Nullable_bool__Fields *)"Column";
          pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_R14,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar17,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,1.0,(MethodInfo *)0x0);
          unaff_RBX.hasValue = 0;
          unaff_RBX.value = 0;
          if (pGVar16 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar16->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar19;
            il2cpp_runtime_helper_022b4080(&(pGVar16->fields).search,pGVar19);
            return;
          }
        }
      }
label_04461e40:
      uVar43 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar23 = *(System_String_o **)(lVar31 + 0x68);
      SVar12 = *(System_Nullable_bool__Fields *)(lVar31 + 0x78);
      unaff_R12 = "-button";
      if (SVar12 == (System_Nullable_bool__Fields)0x0) {
        if (pSVar23 == (System_String_o *)0x0) {
          pSVar23 = *(System_String_o **)(lVar31 + 0x18);
        }
        unaff_R14 = *(System_Nullable_bool__Fields **)(lVar31 + 0x10);
        SVar12 = *(System_Nullable_bool__Fields *)(lVar31 + 0x70);
        pSVar24 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_R14,(System_String_o *)"-button",(MethodInfo *)0x0);
        unaff_RBX = SVar12;
        if (unaff_R15 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        SVar13 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15,1,pSVar23,(System_String_o *)SVar12,
                            pSVar24,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        unaff_R12 = SVar15;
        unaff_R14 = (System_Nullable_bool__Fields *)SVar10;
        unaff_R15 = SVar29;
      }
      else {
        if (pSVar23 == (System_String_o *)0x0) {
          pSVar23 = *(System_String_o **)(lVar31 + 0x18);
        }
        unaff_R14 = *(System_Nullable_bool__Fields **)(lVar31 + 0x10);
        pSVar24 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_R14,(System_String_o *)"-button",(MethodInfo *)0x0);
        unaff_RBX = SVar12;
        if (unaff_R15 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        SVar13 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15,1,pSVar23,
                            (System_Action_GisketchActionContext__o *)SVar12,pSVar24,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        unaff_R12 = SVar15;
        unaff_R14 = (System_Nullable_bool__Fields *)SVar10;
        unaff_R15 = SVar29;
      }
      uVar43 = 0x43a00000;
      unaff_RBX = SVar14;
      pSVar20 = (System_Nullable_bool__Fields *)ppSVar39;
    }
  }
  else {
    pSVar30 = (System_Nullable_bool__Fields *)(pGVar3->fields).Id;
    SStack_40.hasValue = 0x44611b3;
    SStack_40.value = 0;
    SVar13 = "-switch";
    SVar10 = (System_Nullable_bool__Fields)
             System_String__Concat_3ae5ba0
                       ((System_String_o *)pSVar30,(System_String_o *)"-switch",(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._descriptor;
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_044612b2;
    pGVar4 = (pGVar3->fields).Adapter;
    if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      SVar15.hasValue = 0;
      SVar15.value = 0;
    }
    else {
      pGVar5 = pGVar4->klass;
      uVar2._0_1_ = (pGVar5->_2).rank;
      uVar2._1_1_ = (pGVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pGVar5->_1).interfaceOffsets;
        lVar31 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar31) == TypeInfo_IAottgSettingAdapter) {
            pVVar11 = pGVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar31) + 2);
            goto label_04461243;
          }
          lVar31 = lVar31 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar31);
      }
      SStack_40.hasValue = 0x446121c;
      SStack_40.value = 0;
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar4,TypeInfo_IAottgSettingAdapter,2);
label_04461243:
      SStack_40.hasValue = 0x446124c;
      SStack_40.value = 0;
      uVar9 = (*pVVar11->methodPtr)(pGVar4,pVVar11->method);
      SVar15.value = 0;
      SVar15.hasValue = uVar9;
    }
    SStack_40.hasValue = 0x446125d;
    SStack_40.value = 0;
    SVar12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    SStack_40.hasValue = 0x4461277;
    SStack_40.value = 0;
    SVar13 = (System_Nullable_bool__Fields)__this;
    pSVar30 = (System_Nullable_bool__Fields *)SVar12;
    System_Action_GisketchActionContext____ctor();
    SVar14 = SVar12;
    SVar29 = (System_Nullable_bool__Fields)control;
    SVar22 = SVar10;
    if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044612b2;
    SStack_40.hasValue = 0x4461291;
    SStack_40.value = 0;
    SVar13 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_Code_AottgUi__Switch
                       (control,(System_String_o *)SVar10,SVar15.hasValue & 0xff,
                        (System_Action_GisketchActionContext__o *)SVar12,(MethodInfo *)0x0);
    uVar43 = 0x42680000;
    puVar28 = (undefined8 *)register0x00000020;
    pSVar20 = (System_Nullable_bool__Fields *)__this;
  }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout:
  *(System_Nullable_bool__Fields **)((long)puVar28 + -8) = unaff_R14;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x10) = unaff_RBX;
  *(undefined4 *)((long)puVar28 + -0x14) = uVar43;
  SVar14 = SVar13;
  pSVar30 = pSVar20;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    pSVar30 = &"Row";
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar13 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)pSVar20 + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)pSVar20 + 0x10) + 0x58);
    *(undefined2 *)((long)puVar28 + -0x16) = 0;
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar28 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar13 + 0x6b) = *(undefined2 *)((long)puVar28 + -0x16);
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461ee8;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)((long)puVar28 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461efa;
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x50) = pGVar18;
    *(undefined8 *)((long)puVar28 + -0x68) = 0;
    *(undefined8 *)((long)puVar28 + -0x60) = 0;
    *(undefined8 *)((long)puVar28 + -0x20) = 0;
    *(undefined4 *)((long)puVar28 + -0x28) = 0x3f800000;
    *(undefined4 *)((long)puVar28 + -0x30) = 0;
    *(undefined4 *)((long)puVar28 + -0x38) = 0;
    *(undefined4 *)((long)puVar28 + -0x40) = 0;
    *(undefined8 *)((long)puVar28 + -0x48) = 0;
    *(undefined8 *)((long)puVar28 + -0x58) = 0;
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461f83;
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar17,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x48),0.0,0.0,0.0,0.0,
                         0.0,0.0,0.0,*(float *)((long)puVar28 + -0x40),*(float *)((long)puVar28 + -0x38),
                         *(float *)((long)puVar28 + -0x30),*(float *)((long)puVar28 + -0x28),
                         *(MethodInfo **)((long)puVar28 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar13 + 0xd8) = pGVar19;
    *(undefined8 *)((long)puVar28 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((long)SVar13 + 0xd8,pGVar19);
    return;
  }
  *(undefined8 *)((long)puVar28 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x70) = unaff_R15;
  *(System_Nullable_bool__Fields **)((long)puVar28 + -0x78) = pSVar20;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x88) = unaff_R12;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x90) = SVar13;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)((long)puVar28 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)((long)puVar28 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)pSVar30 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)((long)puVar28 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar20 = *(System_Nullable_bool__Fields **)(*(long *)((long)pSVar30 + 0x10) + 0x60);
    if ((System_Nullable_bool__Fields)pSVar20 == (System_Nullable_bool__Fields)0x0) {
      SVar14.hasValue = 0;
      SVar14.value = 0;
      *(undefined8 *)((long)puVar28 + -0x98) = 0x446200b;
      pSVar20 = (System_Nullable_bool__Fields *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if ((System_Nullable_bool__Fields)pSVar20 == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar14.value = 0;
    SVar14.hasValue = *(uint *)((long)pSVar20 + 0x18);
    *(undefined8 *)((long)puVar28 + -0x98) = 0x446202a;
    unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)pSVar20 + 0x18) < 1) {
      return;
    }
    if (unaff_R15 != (System_Nullable_bool__Fields)0x0) {
      SVar10 = (System_Nullable_bool__Fields)(*(ulong *)((long)pSVar20 + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R15 + 0x20);
      pSVar30._0_4_ = 0;
      pSVar30._4_4_ = 0;
      unaff_R12 = (System_Nullable_bool__Fields)pSVar20;
      while (unaff_R12 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20), pSVar30 < (ulong)SVar10) {
        *(undefined8 *)((long)puVar28 + -0x98) = 0x446205f;
        SVar13 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)
                             ((long)puVar28 + -0x90),(MethodInfo *)unaff_R12);
        SVar12.value = 0;
        SVar12.hasValue = *(uint *)((long)unaff_R15 + 0x18);
        if ((ulong)SVar12 <= pSVar30) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar13;
        *(undefined8 *)((long)puVar28 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        pSVar30 = (System_Nullable_bool__Fields *)((long)pSVar30 + 1);
        SVar10.value = 0;
        SVar10.hasValue = *(uint *)((long)pSVar20 + 0x18);
        SVar12 = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)pSVar20 + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar14 = SVar13;
        if ((long)SVar12 <= (long)pSVar30) {
          return;
        }
      }
      *(undefined8 *)((long)puVar28 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar13 = (System_Nullable_bool__Fields)((long)pSVar20 + 0x20);
  *(undefined8 *)((long)puVar28 + -0x98) = 0x44620b2;
  SVar32 = SVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)((long)puVar28 + -0x90),
             (MethodInfo *)SVar13);
  *(undefined8 *)((long)puVar28 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x98) = unaff_RBP;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0xa0) = unaff_R15;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0xa8) = SVar13;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0xb8) = unaff_R12;
  *(System_Nullable_bool__Fields **)((long)puVar28 + -0xc0) = pSVar30;
  control_00 = SVar14;
  pSVar20 = (System_Nullable_bool__Fields *)SVar32;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    pSVar20 = &"slider";
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar13 = SVar14;
  SVar15 = extraout_RDX;
  if (*(long *)((long)SVar32 + 0x10) != 0) {
    pSVar30 = *(System_Nullable_bool__Fields **)(*(long *)((long)SVar32 + 0x10) + 0x28);
    if ((System_Nullable_bool__Fields)pSVar30 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)((long)puVar28 + -0xd0) = 0;
    }
    else {
      lVar31 = *(long *)pSVar30;
      if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
        lVar33 = 0;
        do {
          if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
            puVar21 = (undefined8 *)
                      (lVar31 + (long)(*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
      }
      *(undefined8 *)((long)puVar28 + -0xf0) = 0x446219c;
      puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar25 = puVar21[1];
      pcVar7 = (code *)*puVar21;
      *(undefined8 *)((long)puVar28 + -0xf0) = 0x44621cf;
      uVar43 = (*pcVar7)(pSVar30,uVar25);
      *(undefined4 *)((long)puVar28 + -0xd0) = uVar43;
    }
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x44621e4;
    SVar22 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)puVar28 + -0xf0) = 0x44621fe;
    control_00 = SVar32;
    pSVar20 = (System_Nullable_bool__Fields *)SVar22;
    System_Action_GisketchActionContext____ctor();
    SVar29 = "slider";
    SVar12 = *(System_Nullable_bool__Fields *)((long)SVar32 + 0x10);
    SVar13 = SVar22;
    unaff_R12 = SVar14;
    unaff_R13 = extraout_RDX;
    SVar15 = extraout_RDX;
    if (SVar12 != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)((long)puVar28 + -200) = SVar32;
      pSVar30 = *(System_Nullable_bool__Fields **)((long)SVar12 + 0x28);
      fVar44 = 0.0;
      SVar10 = extraout_RDX;
      SVar15 = SVar14;
      if ((System_Nullable_bool__Fields)pSVar30 == (System_Nullable_bool__Fields)0x0) {
        SVar10 = (System_Nullable_bool__Fields)pSVar30;
        SVar15 = (System_Nullable_bool__Fields)pSVar30;
      }
      value = *(float *)((long)puVar28 + -0xd0);
      unaff_R13 = extraout_RDX;
      if ((System_Nullable_bool__Fields)pSVar30 != (System_Nullable_bool__Fields)0x0) {
        lVar31 = *(long *)pSVar30;
        uVar2 = *(ushort *)(lVar31 + 0x12e);
        *(float *)((long)puVar28 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar33 = 0;
          do {
            if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
              puVar21 = (undefined8 *)
                        (lVar31 + (long)(*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar33 = lVar33 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar33);
        }
        *(undefined8 *)((long)puVar28 + -0xf0) = 0x446229c;
        puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control_00 = *(System_Nullable_bool__Fields *)(puVar21 + 1);
        pcVar7 = (code *)*puVar21;
        *(undefined8 *)((long)puVar28 + -0xf0) = 0x44622c3;
        pSVar20 = pSVar30;
        fVar44 = (float)(*pcVar7)();
        SVar12 = *(System_Nullable_bool__Fields *)(*(long *)((long)puVar28 + -200) + 0x10);
        unaff_R12 = SVar22;
        unaff_R13 = SVar10;
        SVar32 = SVar29;
        if (SVar12 == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)((long)puVar28 + -0xcc);
        SVar14 = SVar15;
      }
      SVar13 = *(System_Nullable_bool__Fields *)((long)SVar12 + 0x28);
      SVar32 = SVar14;
      SVar15 = SVar22;
      if (SVar13 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        unaff_R12 = *(System_Nullable_bool__Fields *)((long)puVar28 + -200);
        if (SVar14 == (System_Nullable_bool__Fields)0x0) {
          pSVar30._0_4_ = 0;
          pSVar30._4_4_ = 0;
          control_00 = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)((long)puVar28 + -0xe8) = 0;
          *(undefined8 *)((long)puVar28 + -0xf0) = 0x44623fc;
          SVar12 = SVar22;
          control_00 = unaff_R13;
          pSVar20 = (System_Nullable_bool__Fields *)SVar14;
          pSVar30 = (System_Nullable_bool__Fields *)
                    Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,(System_String_o *)unaff_R13,value,0
                               ,(System_Action_GisketchActionContext__o *)SVar22,(System_String_o *)SVar29,
                               fVar44,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               *(MethodInfo **)((long)puVar28 + -0xe8));
          if (*(long *)((long)unaff_R12 + 0x10) != 0) {
            bVar42 = *(char *)(*(long *)((long)unaff_R12 + 0x10) + 0x58) == '\0';
            *(undefined2 *)((long)puVar28 + -0xd2) = 0;
            control_00._1_7_ = 0;
            control_00.hasValue._0_1_ = bVar42;
            pSVar20 = (System_Nullable_bool__Fields *)((long)puVar28 + -0xd2);
            *(undefined8 *)((long)puVar28 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)pSVar20,(uint)bVar42,MethodInfo_Nullable_1_Boolean);
            if ((System_Nullable_bool__Fields)pSVar30 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)pSVar30 + 0x6b) = *(undefined2 *)((long)puVar28 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar31 = *(long *)SVar13;
        uVar2 = *(ushort *)(lVar31 + 0x12e);
        unaff_R12 = *(System_Nullable_bool__Fields *)((long)puVar28 + -200);
        *(float *)((long)puVar28 + -0xd0) = fVar44;
        *(float *)((long)puVar28 + -0xcc) = value;
        SVar12.hasValue = 0;
        SVar12.value = 0;
        if ((ulong)uVar2 != 0) {
          SVar12 = (System_Nullable_bool__Fields)((ulong)uVar2 << 4);
          SVar34.hasValue = 0;
          SVar34.value = 0;
          do {
            if (*(long *)(*(long *)(lVar31 + 0xb0) + (long)SVar34) == TypeInfo_IAottgSettingAdapter) {
              SVar12 = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar31 + 0xb0) + 8 + (long)SVar34) + 4) * 0x10);
              puVar21 = (undefined8 *)(lVar31 + (long)SVar12 + 0x138);
              goto label_044623be;
            }
            SVar34 = (System_Nullable_bool__Fields)((long)SVar34 + 0x10);
          } while (SVar12 != SVar34);
        }
        *(undefined8 *)((long)puVar28 + -0xf0) = 0x446237c;
        puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar13,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control_00 = *(System_Nullable_bool__Fields *)(puVar21 + 1);
        pcVar7 = (code *)*puVar21;
        *(undefined8 *)((long)puVar28 + -0xf0) = 0x44623c7;
        pSVar20 = (System_Nullable_bool__Fields *)SVar13;
        max = (float)(*pcVar7)();
        fVar44 = *(float *)((long)puVar28 + -0xd0);
        value = *(float *)((long)puVar28 + -0xcc);
        pSVar30 = (System_Nullable_bool__Fields *)SVar29;
        if (SVar14 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)((long)puVar28 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0xf0) = SVar32;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0xf8) = SVar15;
  *(System_Nullable_bool__Fields **)((long)puVar28 + -0x100) = pSVar30;
  plVar35 = (long *)pSVar20;
  if (g_data_057ae798 == '\0') {
    plVar35 = &TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)((long)puVar28 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar31 = *(long *)((long)pSVar20 + 0x10);
  if (lVar31 != 0) {
    SVar32 = (System_Nullable_bool__Fields)((long)puVar28 + -0xe0);
    pSVar30 = *(System_Nullable_bool__Fields **)(lVar31 + 0x28);
    if ((System_Nullable_bool__Fields)pSVar30 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)puVar28 + -0x110) = *(undefined8 *)((long)puVar28 + -0xd0);
      *(undefined8 *)((long)puVar28 + -0x108) = *(undefined8 *)((long)puVar28 + -200);
      *(undefined8 *)((long)puVar28 + -0x120) = *(undefined8 *)SVar32;
      *(undefined8 *)((long)puVar28 + -0x118) = *(undefined8 *)((long)puVar28 + -0xd8);
label_0446256c:
      *(undefined8 *)((long)puVar28 + -0x130) = *(undefined8 *)((long)puVar28 + -0x110);
      *(undefined8 *)((long)puVar28 + -0x128) = *(undefined8 *)((long)puVar28 + -0x108);
      *(undefined8 *)((long)puVar28 + -0x140) = *(undefined8 *)((long)puVar28 + -0x120);
      *(undefined8 *)((long)puVar28 + -0x138) = *(undefined8 *)((long)puVar28 + -0x118);
      lVar31 = *(long *)(lVar31 + 0x88);
      if (lVar31 != 0) {
        uVar25 = *(undefined8 *)(lVar31 + 0x28);
        uVar8 = *(undefined8 *)(lVar31 + 0x40);
        *(undefined4 *)((long)puVar28 + -0x150) = *(undefined4 *)((long)puVar28 + -0x130);
        *(undefined4 *)((long)puVar28 + -0x14c) = *(undefined4 *)((long)puVar28 + -300);
        *(undefined4 *)((long)puVar28 + -0x148) = *(undefined4 *)((long)puVar28 + -0x128);
        *(undefined4 *)((long)puVar28 + -0x144) = *(undefined4 *)((long)puVar28 + -0x124);
        *(undefined4 *)((long)puVar28 + -0x160) = *(undefined4 *)((long)puVar28 + -0x140);
        *(undefined4 *)((long)puVar28 + -0x15c) = *(undefined4 *)((long)puVar28 + -0x13c);
        *(undefined4 *)((long)puVar28 + -0x158) = *(undefined4 *)((long)puVar28 + -0x138);
        *(undefined4 *)((long)puVar28 + -0x154) = *(undefined4 *)((long)puVar28 + -0x134);
        pcVar7 = *(code **)(lVar31 + 0x18);
        *(undefined8 *)((long)puVar28 + -0x168) = 0x44625a7;
        (*pcVar7)(uVar8,uVar25);
      }
      return;
    }
    *(undefined4 *)((long)puVar28 + -0x130) = *(undefined4 *)((long)puVar28 + -0xd0);
    *(undefined4 *)((long)puVar28 + -300) = *(undefined4 *)((long)puVar28 + -0xcc);
    *(undefined4 *)((long)puVar28 + -0x128) = *(undefined4 *)((long)puVar28 + -200);
    *(undefined4 *)((long)puVar28 + -0x124) = *(undefined4 *)((long)puVar28 + -0xc4);
    *(undefined4 *)((long)puVar28 + -0x140) = *(undefined4 *)SVar32;
    *(undefined4 *)((long)puVar28 + -0x13c) = *(undefined4 *)((long)puVar28 + -0xdc);
    *(undefined4 *)((long)puVar28 + -0x138) = *(undefined4 *)((long)puVar28 + -0xd8);
    *(undefined4 *)((long)puVar28 + -0x134) = *(undefined4 *)((long)puVar28 + -0xd4);
    lVar31 = *(long *)pSVar30;
    SVar12.hasValue = 0;
    SVar12.value = 0;
    if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
      SVar12 = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar31 + 0x12e) << 4);
      SVar36.hasValue = 0;
      SVar36.value = 0;
      do {
        if (*(long *)(*(long *)(lVar31 + 0xb0) + (long)SVar36) == TypeInfo_IAottgSettingAdapter) {
          SVar12 = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar31 + 0xb0) + 8 + (long)SVar36) + 0xb) * 0x10);
          puVar21 = (undefined8 *)(lVar31 + (long)SVar12 + 0x138);
          goto label_0446252f;
        }
        SVar36 = (System_Nullable_bool__Fields)((long)SVar36 + 0x10);
      } while (SVar12 != SVar36);
    }
    *(undefined8 *)((long)puVar28 + -0x168) = 0x44624fc;
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control_00 = *(System_Nullable_bool__Fields *)(puVar21 + 1);
    *(undefined4 *)((long)puVar28 + -0x150) = *(undefined4 *)((long)puVar28 + -0x130);
    *(undefined4 *)((long)puVar28 + -0x14c) = *(undefined4 *)((long)puVar28 + -300);
    *(undefined4 *)((long)puVar28 + -0x148) = *(undefined4 *)((long)puVar28 + -0x128);
    *(undefined4 *)((long)puVar28 + -0x144) = *(undefined4 *)((long)puVar28 + -0x124);
    *(undefined4 *)((long)puVar28 + -0x160) = *(undefined4 *)((long)puVar28 + -0x140);
    *(undefined4 *)((long)puVar28 + -0x15c) = *(undefined4 *)((long)puVar28 + -0x13c);
    *(undefined4 *)((long)puVar28 + -0x158) = *(undefined4 *)((long)puVar28 + -0x138);
    *(undefined4 *)((long)puVar28 + -0x154) = *(undefined4 *)((long)puVar28 + -0x134);
    pcVar7 = (code *)*puVar21;
    *(undefined8 *)((long)puVar28 + -0x168) = 0x446254b;
    plVar35 = (long *)pSVar30;
    (*pcVar7)();
    lVar31 = *(long *)((long)pSVar20 + 0x10);
    *(undefined8 *)((long)puVar28 + -0x110) = *(undefined8 *)((long)puVar28 + -0xd0);
    *(undefined8 *)((long)puVar28 + -0x108) = *(undefined8 *)((long)puVar28 + -200);
    *(undefined4 *)((long)puVar28 + -0x120) = *(undefined4 *)SVar32;
    *(undefined4 *)((long)puVar28 + -0x11c) = *(undefined4 *)((long)puVar28 + -0xdc);
    *(undefined4 *)((long)puVar28 + -0x118) = *(undefined4 *)((long)puVar28 + -0xd8);
    *(undefined4 *)((long)puVar28 + -0x114) = *(undefined4 *)((long)puVar28 + -0xd4);
    if (lVar31 != 0) goto label_0446256c;
  }
  *(undefined8 *)((long)puVar28 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x168) = SVar13;
  *(System_Nullable_bool__Fields *)((long)puVar28 + -0x170) = SVar32;
  *(System_Nullable_bool__Fields **)((long)puVar28 + -0x178) = pSVar20;
  *(System_Nullable_bool__Fields **)((long)puVar28 + -0x180) = pSVar30;
  ppSVar37 = (System_String_o **)plVar35;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)((long)puVar28 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    ppSVar37 = &"true";
    *(undefined8 *)((long)puVar28 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar31 = *(long *)((long)plVar35 + 0x10);
  if (lVar31 == 0) {
label_04462728:
    *(undefined8 *)((long)puVar28 + -0x1f0) = 0x446272d;
    il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x1f0) = SVar13;
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x1f8) = SVar32;
    *(long **)((long)puVar28 + -0x200) = plVar35;
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x208) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x210) = unaff_R12;
    *(System_Nullable_bool__Fields **)((long)puVar28 + -0x218) = pSVar30;
    ppSVar39 = ppSVar37;
    if (g_data_057ae79c == '\0') {
      *(undefined8 *)((long)puVar28 + -0x278) = 0x4462759;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x4462765;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x4462771;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x446277d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x4462789;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)((long)puVar28 + -0x278) = 0x4462795;
      il2cpp_runtime_helper_023445d0(&"-value-button");
      *(undefined8 *)((long)puVar28 + -0x278) = 0x44627a1;
      il2cpp_runtime_helper_023445d0(&"-slider");
      ppSVar39 = &"0";
      *(undefined8 *)((long)puVar28 + -0x278) = 0x44627ad;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae79c = '\x01';
    }
    if (*(long *)((long)ppSVar37 + 0x10) != 0) {
      pSVar23 = *(System_String_o **)(*(long *)((long)ppSVar37 + 0x10) + 0x10);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x44627d6;
      pSVar23 = System_String__Concat_3ae5ba0(pSVar23,"-slider",(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x44627e4;
      pSVar30 = (System_Nullable_bool__Fields *)
                Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                          ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)ppSVar37,
                           (Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,pSVar23,(MethodInfo *)SVar12);
      *(undefined8 *)((long)puVar28 + -0x278) = 0x44627f6;
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar28 + -0x260) = 0;
      *(undefined8 *)((long)puVar28 + -600) = 0;
      *(undefined8 *)((long)puVar28 + -0x270) = 0;
      *(undefined8 *)((long)puVar28 + -0x268) = 0;
      *(undefined8 *)((long)puVar28 + -0x228) = 0;
      *(undefined4 *)((long)puVar28 + -0x230) = 0x3f800000;
      *(undefined4 *)((long)puVar28 + -0x238) = 0x3f800000;
      *(undefined4 *)((long)puVar28 + -0x240) = 0;
      *(undefined4 *)((long)puVar28 + -0x248) = 0;
      *(undefined8 *)((long)puVar28 + -0x250) = 0;
      *(undefined8 *)((long)puVar28 + -0x278) = 0x4462873;
      ppSVar39 = (System_String_o **)"Column";
      pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar17,
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x270),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x268),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x260),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -600),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x250),0.0,0.0,0.0,
                           0.0,0.0,0.0,0.0,*(float *)((long)puVar28 + -0x248),
                           *(float *)((long)puVar28 + -0x240),*(float *)((long)puVar28 + -0x238),
                           *(float *)((long)puVar28 + -0x230),*(MethodInfo **)((long)puVar28 + -0x228));
      if ((System_Nullable_bool__Fields)pSVar30 != (System_Nullable_bool__Fields)0x0) {
        ppSVar39 = (System_String_o **)((long)pSVar30 + 0xd8);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)pSVar30 + 0xd8) = pGVar19;
        *(undefined8 *)((long)puVar28 + -0x278) = 0x4462895;
        il2cpp_runtime_helper_022b4080(ppSVar39,pGVar19);
        if (*(long *)((long)ppSVar37 + 0x10) != 0) {
          plVar35 = *(long **)(*(long *)((long)ppSVar37 + 0x10) + 0x28);
          if (plVar35 == (long *)0x0) {
            iVar40 = 4;
            pSVar23 = "0";
          }
          else {
            lVar31 = *plVar35;
            if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
              lVar33 = 0;
              do {
                if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IAottgSettingAdapter) {
                  puVar21 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + lVar31 + 0x138);
                  goto label_04462936;
                }
                lVar33 = lVar33 + 0x10;
              } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
            }
            *(undefined8 *)((long)puVar28 + -0x278) = 0x4462909;
            puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar35,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
            iVar40 = (uint)(plVar35 != (long *)0x0) << 2;
            uVar25 = puVar21[1];
            pcVar7 = (code *)*puVar21;
            *(undefined8 *)((long)puVar28 + -0x278) = 0x4462943;
            pSVar23 = (System_String_o *)(*pcVar7)(plVar35,uVar25);
          }
          *(undefined8 *)((long)puVar28 + -0x278) = 0x4462955;
          SVar13 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
          *(undefined8 *)((long)puVar28 + -0x278) = 0x446296f;
          ppSVar39 = (System_String_o **)SVar13;
          System_Action_GisketchActionContext____ctor();
          pSVar30 = (System_Nullable_bool__Fields *)control_00;
          if (*(long *)((long)ppSVar37 + 0x10) != 0) {
            ppSVar39 = *(System_String_o ***)(*(long *)((long)ppSVar37 + 0x10) + 0x10);
            *(undefined8 *)((long)puVar28 + -0x278) = 0x4462991;
            pSVar24 = System_String__Concat_3ae5ba0
                                ((System_String_o *)ppSVar39,"-value-button",(MethodInfo *)0x0);
            if (control_00 != (System_Nullable_bool__Fields)0x0) {
              *(undefined8 *)((long)puVar28 + -0x270) = 0;
              *(undefined8 *)((long)puVar28 + -0x268) = 0;
              *(undefined8 *)((long)puVar28 + -0x260) = 0;
              *(undefined8 *)((long)puVar28 + -0x278) = 0x44629c1;
              ppSVar39 = (System_String_o **)control_00;
              pSVar30 = (System_Nullable_bool__Fields *)
                        Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,iVar40,pSVar23,
                                   (System_Action_GisketchActionContext__o *)SVar13,pSVar24,
                                   (System_String_o *)0x0,
                                   *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                                    ((long)puVar28 + -0x270),*(System_String_o **)((long)puVar28 + -0x268),
                                   *(MethodInfo **)((long)puVar28 + -0x260));
              if (*(long *)((long)ppSVar37 + 0x10) != 0) {
                cVar1 = *(char *)(*(long *)((long)ppSVar37 + 0x10) + 0x58);
                *(undefined2 *)((long)puVar28 + -0x21a) = 0;
                ppSVar39 = (System_String_o **)((long)puVar28 + -0x21a);
                *(undefined8 *)((long)puVar28 + -0x278) = 0x44629f6;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o)ppSVar39,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
                if ((System_Nullable_bool__Fields)pSVar30 != (System_Nullable_bool__Fields)0x0) {
                  *(undefined2 *)((long)pSVar30 + 0x6b) = *(undefined2 *)((long)puVar28 + -0x21a);
                  *(undefined8 *)((long)puVar28 + -0x278) = 0x4462a1e;
                  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                  *(undefined8 *)((long)puVar28 + -0x260) = 0;
                  *(undefined8 *)((long)puVar28 + -600) = 0;
                  *(undefined8 *)((long)puVar28 + -0x270) = 0;
                  *(undefined8 *)((long)puVar28 + -0x268) = 0;
                  *(undefined8 *)((long)puVar28 + -0x228) = 0;
                  *(undefined4 *)((long)puVar28 + -0x230) = 0;
                  *(undefined4 *)((long)puVar28 + -0x238) = 0;
                  *(undefined4 *)((long)puVar28 + -0x240) = 0;
                  *(undefined4 *)((long)puVar28 + -0x248) = 0;
                  *(undefined8 *)((long)puVar28 + -0x250) = 0;
                  *(undefined8 *)((long)puVar28 + -0x278) = 0x4462a95;
                  pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ((System_String_o *)"Column",(System_String_o *)0x0,
                                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                       0.0,pGVar17,
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x270),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x268),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x260),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -600),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x250),
                                       0.0,0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)puVar28 + -0x248),
                                       *(float *)((long)puVar28 + -0x240),*(float *)((long)puVar28 + -0x238),
                                       *(float *)((long)puVar28 + -0x230),
                                       *(MethodInfo **)((long)puVar28 + -0x228));
                  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)pSVar30 + 0xd8) = pGVar19;
                  *(undefined8 *)((long)puVar28 + -0x278) = 0x4462aae;
                  il2cpp_runtime_helper_022b4080((long)pSVar30 + 0xd8,pGVar19);
                  return;
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)puVar28 + -0x278) = 0x4462ac2;
    uVar25 = il2cpp_runtime_helper_022b2c90();
    lVar31 = *(long *)((long)ppSVar39 + 0x10);
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x278) = control_00;
    *(System_Nullable_bool__Fields **)((long)puVar28 + -0x280) = pSVar30;
    *(undefined8 *)((long)puVar28 + -0x288) = uVar25;
    if (g_data_057ae7ad == '\0') {
      *(undefined8 *)((long)puVar28 + -0x290) = 0x4462afc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
      *(undefined8 *)((long)puVar28 + -0x290) = 0x4462b08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      *(undefined8 *)((long)puVar28 + -0x290) = 0x4462b14;
      il2cpp_runtime_helper_023445d0(&"setting-slider-value");
      g_data_057ae7ad = '\x01';
    }
    if (((lVar31 != 0) && (*(long *)(lVar31 + 0x28) != 0)) && (*(char *)(lVar31 + 0x58) == '\0')) {
      **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar31;
      uVar25 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      *(undefined8 *)((long)puVar28 + -0x290) = 0x4462b60;
      il2cpp_runtime_helper_022b4080(uVar25,lVar31);
      if (*(UnityEngine_GameObject_o **)((long)puVar28 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)puVar28 + -0x290) = 0x4462b78;
        pIVar26 = UnityEngine_GameObject__GetComponentInParent_object_
                            (*(UnityEngine_GameObject_o **)((long)puVar28 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if ((pIVar26 != (Il2CppObject *)0x0) &&
           (pIVar26[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar26[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  SVar13 = (System_Nullable_bool__Fields)((long)puVar28 + -0x158);
  pSVar30 = *(System_Nullable_bool__Fields **)(lVar31 + 0x28);
  if ((System_Nullable_bool__Fields)pSVar30 == (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)puVar28 + -0x1b8) = *(undefined8 *)((long)puVar28 + -0x148);
    *(undefined8 *)((long)puVar28 + -0x1b0) = *(undefined8 *)((long)puVar28 + -0x140);
    *(undefined8 *)((long)puVar28 + -0x1c8) = *(undefined8 *)SVar13;
    *(undefined8 *)((long)puVar28 + -0x1c0) = *(undefined8 *)((long)puVar28 + -0x150);
  }
  else {
    if (*(long *)((long)puVar28 + -0x148) == 0) {
      SVar32.hasValue = 0;
      SVar32.value = 0;
    }
    else {
      pSVar23 = *(System_String_o **)(*(long *)((long)puVar28 + -0x148) + 0x50);
      *(undefined8 *)((long)puVar28 + -0x1f0) = 0x4462631;
      uVar9 = System_String__op_Equality(pSVar23,"true",(MethodInfo *)0x0);
      SVar32.value = 0;
      SVar32.hasValue = uVar9;
    }
    lVar31 = *(long *)pSVar30;
    SVar12.hasValue = 0;
    SVar12.value = 0;
    if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
      SVar12 = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar31 + 0x12e) << 4);
      SVar38.hasValue = 0;
      SVar38.value = 0;
      do {
        if (*(long *)(*(long *)(lVar31 + 0xb0) + (long)SVar38) == TypeInfo_IAottgSettingAdapter) {
          SVar12 = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar31 + 0xb0) + 8 + (long)SVar38) + 8) * 0x10);
          puVar21 = (undefined8 *)(lVar31 + (long)SVar12 + 0x138);
          goto label_044626b5;
        }
        SVar38 = (System_Nullable_bool__Fields)((long)SVar38 + 0x10);
      } while (SVar12 != SVar38);
    }
    *(undefined8 *)((long)puVar28 + -0x1f0) = 0x446269c;
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar30,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
    uVar25 = puVar21[1];
    control_00 = (System_Nullable_bool__Fields)((ulong)SVar32 & 0xff);
    pcVar7 = (code *)*puVar21;
    *(undefined8 *)((long)puVar28 + -0x1f0) = 0x44626c2;
    ppSVar37 = (System_String_o **)pSVar30;
    (*pcVar7)(pSVar30,control_00,uVar25);
    lVar31 = *(long *)((long)plVar35 + 0x10);
    *(undefined8 *)((long)puVar28 + -0x1b8) = *(undefined8 *)((long)puVar28 + -0x148);
    *(undefined8 *)((long)puVar28 + -0x1b0) = *(undefined8 *)((long)puVar28 + -0x140);
    *(undefined4 *)((long)puVar28 + -0x1c8) = *(undefined4 *)SVar13;
    *(undefined4 *)((long)puVar28 + -0x1c4) = *(undefined4 *)((long)puVar28 + -0x154);
    *(undefined4 *)((long)puVar28 + -0x1c0) = *(undefined4 *)((long)puVar28 + -0x150);
    *(undefined4 *)((long)puVar28 + -0x1bc) = *(undefined4 *)((long)puVar28 + -0x14c);
    if (lVar31 == 0) goto label_04462728;
  }
  *(undefined8 *)((long)puVar28 + -0x198) = *(undefined8 *)((long)puVar28 + -0x1b8);
  *(undefined8 *)((long)puVar28 + -400) = *(undefined8 *)((long)puVar28 + -0x1b0);
  *(undefined8 *)((long)puVar28 + -0x1a8) = *(undefined8 *)((long)puVar28 + -0x1c8);
  *(undefined8 *)((long)puVar28 + -0x1a0) = *(undefined8 *)((long)puVar28 + -0x1c0);
  lVar31 = *(long *)(lVar31 + 0x88);
  if (lVar31 != 0) {
    uVar25 = *(undefined8 *)(lVar31 + 0x28);
    uVar8 = *(undefined8 *)(lVar31 + 0x40);
    *(undefined4 *)((long)puVar28 + -0x1d8) = *(undefined4 *)((long)puVar28 + -0x198);
    *(undefined4 *)((long)puVar28 + -0x1d4) = *(undefined4 *)((long)puVar28 + -0x194);
    *(undefined4 *)((long)puVar28 + -0x1d0) = *(undefined4 *)((long)puVar28 + -400);
    *(undefined4 *)((long)puVar28 + -0x1cc) = *(undefined4 *)((long)puVar28 + -0x18c);
    *(undefined4 *)((long)puVar28 + -0x1e8) = *(undefined4 *)((long)puVar28 + -0x1a8);
    *(undefined4 *)((long)puVar28 + -0x1e4) = *(undefined4 *)((long)puVar28 + -0x1a4);
    *(undefined4 *)((long)puVar28 + -0x1e0) = *(undefined4 *)((long)puVar28 + -0x1a0);
    *(undefined4 *)((long)puVar28 + -0x1dc) = *(undefined4 *)((long)puVar28 + -0x19c);
    pcVar7 = *(code **)(lVar31 + 0x18);
    *(undefined8 *)((long)puVar28 + -0x1f0) = 0x446271d;
    (*pcVar7)(uVar8,uVar25);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildDropdown
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, bool dropdown, const MethodInfo* method);
// 0x44612c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,bool_conflict dropdown,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  uint type;
  uint uVar7;
  System_Nullable_bool__Fields SVar8;
  System_Nullable_bool__Fields SVar9;
  System_Nullable_bool__Fields SVar10;
  System_Nullable_bool__Fields SVar11;
  System_Nullable_bool__Fields SVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  System_Nullable_bool__Fields SVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  System_Nullable_bool__Fields SVar18;
  undefined8 *puVar19;
  long lVar20;
  System_String_o *pSVar21;
  System_String_o *pSVar22;
  undefined8 uVar23;
  Il2CppObject *pIVar24;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar25;
  undefined1 *puVar26;
  System_Nullable_bool__Fields unaff_RBP;
  System_Nullable_bool__Fields SVar27;
  long lVar28;
  System_Nullable_bool__Fields SVar29;
  System_Nullable_bool__Fields SVar30;
  System_Nullable_bool__Fields SVar31;
  System_Nullable_bool__Fields SVar32;
  System_Nullable_bool__Fields SVar33;
  System_Nullable_bool__Fields SVar34;
  System_Nullable_bool__Fields unaff_R12;
  int32_t iVar35;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar36;
  undefined4 uVar37;
  float fVar38;
  float max;
  float value;
  undefined1 auStack_108 [4];
  uint uStack_104;
  float fStack_100;
  uint uStack_fc;
  System_String_o *pSStack_f8;
  System_Nullable_bool__Fields SStack_f0;
  System_Nullable_bool__Fields SStack_e8;
  System_Nullable_bool__Fields SStack_e0;
  System_Nullable_bool__Fields SStack_d8;
  System_Nullable_bool__Fields SStack_d0;
  System_Nullable_bool__Fields SStack_c8;
  System_Nullable_bool__Fields SStack_c0;
  System_Nullable_bool__Fields SStack_b8;
  undefined1 auStack_38 [8];
  
  SVar10.value = 0;
  SVar10.hasValue = dropdown;
  SVar30 = (System_Nullable_bool__Fields)control;
  if (g_data_057ae792 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&"-select");
    il2cpp_runtime_helper_023445d0(&"-dropdown");
    g_data_057ae792 = '\x01';
  }
  SVar18 = (System_Nullable_bool__Fields)__this;
  SVar8 = (System_Nullable_bool__Fields)
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions(__this,(MethodInfo *)SVar30);
  pGVar3 = (__this->fields)._descriptor;
  SVar11 = unaff_RBP;
  SVar9 = unaff_R13;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_044614ee:
    unaff_R13 = SVar9;
    unaff_R12 = SVar10;
    unaff_RBP = SVar11;
    il2cpp_runtime_helper_022b2c90();
    SVar9 = SVar30;
    SVar10 = SVar18;
    unaff_R14 = (System_Nullable_bool__Fields)control;
    unaff_R15 = SVar8;
    if (g_data_057ae793 == '\0') {
      SStack_b8.hasValue = 0x4461526;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      SStack_b8.hasValue = 0x4461532;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
      SStack_b8.hasValue = 0x446153e;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0(&"clear");
      SStack_b8.hasValue = 0x446154a;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0(&"-slider-with-value");
      SStack_b8.hasValue = 0x4461556;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0(&"Center");
      SStack_b8.hasValue = 0x4461562;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0(&"Row");
      SVar10 = (System_Nullable_bool__Fields)&"-slider";
      SStack_b8.hasValue = 0x446156e;
      SStack_b8.value = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae793 = '\x01';
      unaff_R14 = (System_Nullable_bool__Fields)control;
    }
    lVar20 = *(long *)((long)SVar18 + 0x10);
    SVar12 = unaff_R12;
    if (lVar20 != 0) {
      if (*(char *)(lVar20 + 0x59) == '\0') {
        SStack_b8.hasValue = 0x44616d7;
        SStack_b8.value = 0;
        pSVar21 = System_String__Concat_3ae5ba0
                            (*(System_String_o **)(lVar20 + 0x10),"-slider",(MethodInfo *)0x0);
        SStack_b8.hasValue = 0x44616e5;
        SStack_b8.value = 0;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18,
                            (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar30,pSVar21,method);
        uVar37 = 0x441b0000;
        puVar26 = auStack_38;
        unaff_RBX = (System_Nullable_bool__Fields)__this;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      SStack_b8.hasValue = 0x446159b;
      SStack_b8.value = 0;
      SVar8 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      method._0_4_ = 0;
      method._4_4_ = 0;
      SStack_b8.hasValue = 0x44615b5;
      SStack_b8.value = 0;
      SVar9 = SVar18;
      SVar10 = SVar8;
      System_Action_object____ctor();
      if (*(long *)((long)SVar18 + 0x10) != 0) {
        SStack_b8.hasValue = 0x44615d7;
        SStack_b8.value = 0;
        SVar12 = (System_Nullable_bool__Fields)
                 System_String__Concat_3ae5ba0
                           (*(System_String_o **)(*(long *)((long)SVar18 + 0x10) + 0x10),"-slider-with-value",
                            (MethodInfo *)0x0);
        SStack_b8.hasValue = 0x44615e9;
        SStack_b8.value = 0;
        SVar18 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0)
        ;
        SStack_b8.hasValue = 0x44615fb;
        SStack_b8.value = 0;
        pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        SVar9.hasValue = 0;
        SVar9.value = 0;
        method._0_4_ = 0;
        method._4_4_ = 0;
        SStack_b8.hasValue = 0x446168b;
        SStack_b8.value = 0;
        SVar10 = "Row";
        pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar18,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar15,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        if (SVar30 != (System_Nullable_bool__Fields)0x0) {
          SStack_b8.hasValue = 0x44616b6;
          SStack_b8.value = 0;
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar30,"clear",(System_Action_AottgUi__o *)SVar8
                     ,(System_String_o *)SVar12,pGVar17,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    SStack_b8.hasValue = 0x4461708;
    SStack_b8.value = 0;
    il2cpp_runtime_helper_022b2c90();
    puVar26 = auStack_108;
    SVar14 = (System_Nullable_bool__Fields)method;
    unaff_R15 = SVar9;
    SVar29 = SVar10;
    SStack_e0 = SVar18;
    SStack_d8 = SVar12;
    SStack_d0 = unaff_R13;
    SStack_c8 = SVar30;
    SStack_c0 = SVar8;
    SStack_b8 = unaff_RBP;
    if (g_data_057ae795 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"inputField");
      SVar29 = (System_Nullable_bool__Fields)&"-input";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
      SVar14 = (System_Nullable_bool__Fields)method;
    }
    lVar20 = *(long *)((long)SVar10 + 0x10);
    unaff_RBP = SVar10;
    if (lVar20 != 0) {
      if (*(long **)(lVar20 + 0x28) == (long *)0x0) {
        uStack_104 = 1;
      }
      else {
        uStack_104 = (uint)(**(long **)(lVar20 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      SVar12 = (System_Nullable_bool__Fields)
               System_String__Concat_3ae5ba0
                         (*(System_String_o **)(lVar20 + 0x10),"-input",(MethodInfo *)0x0);
      unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      fStack_100 = 0.0;
      SVar18 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar15,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar16,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      SVar30 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      SVar14.hasValue = 0;
      SVar14.value = 0;
      unaff_R15 = SVar10;
      SVar29 = SVar30;
      System_Action_GisketchActionContext____ctor();
      SStack_e8 = SVar10;
      if (*(long *)((long)SVar10 + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar10 + 0x10) + 0x28);
        fVar38 = 0.05;
        bVar36 = unaff_RBP == (System_Nullable_bool__Fields)0x0;
        SVar8 = unaff_R13;
        SVar10 = SVar12;
        SVar11 = SVar9;
        if (bVar36) {
          SVar8.hasValue = 0;
          SVar8.value = 0;
          SVar10 = unaff_RBP;
          SVar11 = unaff_RBP;
        }
        unaff_R15.value = 0;
        unaff_R15.hasValue = uStack_104;
        SVar25 = SVar30;
        SVar14 = SVar18;
        pSVar21 = "inputField";
        uVar7 = uStack_104;
        if (bVar36) {
          SVar25.hasValue = 0;
          SVar25.value = 0;
          pSVar21 = (System_String_o *)0x0;
          SVar14 = unaff_RBP;
          uVar7 = 0;
        }
        iVar35 = 0;
        SVar27 = SVar30;
        SVar29 = SVar12;
        SVar31 = SVar18;
        type = uStack_104;
        pSVar22 = "inputField";
        SStack_f0 = SVar9;
        if (!bVar36) {
          fStack_100 = 0.05;
          lVar20 = *(long *)unaff_RBP;
          uStack_fc = uVar7;
          pSStack_f8 = pSVar21;
          if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
            lVar28 = 0;
            do {
              if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
                puVar19 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) + 7) * 0x10 + lVar20 + 0x138
                          );
                goto label_044619df;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar28);
          }
          puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          unaff_R15 = *(System_Nullable_bool__Fields *)(puVar19 + 1);
          SVar29 = unaff_RBP;
          iVar35 = (*(code *)*puVar19)();
          SVar27 = SVar25;
          unaff_R13 = SVar8;
          SVar12 = SVar10;
          SVar9 = SVar11;
          SVar31 = SVar14;
          SVar30 = SVar14;
          fVar38 = fStack_100;
          type = uStack_fc;
          pSVar22 = pSStack_f8;
        }
        SVar18 = SVar27;
        SVar14.value = 0;
        SVar14.hasValue = type;
        if (SVar9 != (System_Nullable_bool__Fields)0x0) {
          unaff_R15 = SVar12;
          SVar29 = SVar9;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar9,(System_String_o *)SVar12,
                               (System_String_o *)unaff_R13,type,pSVar22,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar31,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               (System_Action_GisketchActionContext__o *)SVar18,fVar38,iVar35,
                               (MethodInfo *)0x0);
          SVar14.hasValue = 0;
          SVar14.value = 0;
          if (*(long *)((long)SStack_e8 + 0x10) != 0) {
            unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)SStack_e8 + 0x10) + 0x28);
            if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
              SVar14 = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
              unaff_R15 = *(System_Nullable_bool__Fields *)SVar14;
            }
            else {
              lVar20 = *(long *)unaff_RBP;
              if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
                lVar28 = 0;
                do {
                  if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
                    SVar14 = (System_Nullable_bool__Fields)
                             ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) * 0x10 + lVar20 + 0x138);
                    goto label_04461ac3;
                  }
                  lVar28 = lVar28 + 0x10;
                } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar28);
              }
              SVar14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              SVar29 = unaff_RBP;
              unaff_R15 = (System_Nullable_bool__Fields)
                          (*(code *)*(System_Nullable_bool__Fields *)SVar14)
                                    (unaff_RBP,*(System_Nullable_bool__Fields *)((long)SVar14 + 8));
            }
            SVar18.hasValue = 0;
            SVar18.value = 0;
            if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar13->fields).value = (System_String_o *)unaff_R15;
              il2cpp_runtime_helper_022b4080(&(pGVar13->fields).value);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_R12 = unaff_R15;
    unaff_R14 = SVar29;
    SVar10 = SVar18;
    if (g_data_057ae796 == '\0') {
      unaff_R14 = (System_Nullable_bool__Fields)&"-button";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
    }
    lVar20 = *(long *)((long)SVar29 + 0x10);
    unaff_RBX = SVar18;
    if (lVar20 == 0) {
label_04461c07:
      il2cpp_runtime_helper_022b2c90();
      puVar26 = &stack0xfffffffffffffe48;
      method = (MethodInfo *)SVar14;
      SVar11 = unaff_R12;
      SVar18 = unaff_R14;
      if (g_data_057ae797 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"text");
        SVar18 = (System_Nullable_bool__Fields)&"-value";
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        method = (MethodInfo *)SVar14;
      }
      lVar20 = *(long *)((long)unaff_R14 + 0x10);
      if (lVar20 != 0) {
        unaff_RBX = *(System_Nullable_bool__Fields *)(lVar20 + 0x80);
        if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
          unaff_R15 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
          if (unaff_R15 == (System_Nullable_bool__Fields)0x0) {
            method = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
            unaff_RBX = *(System_Nullable_bool__Fields *)method;
            unaff_R13.hasValue = 0;
            unaff_R13.value = 0;
          }
          else {
            lVar20 = *(long *)unaff_R15;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar28 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
                  method = (MethodInfo *)
                           ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) * 0x10 + lVar20 + 0x138);
                  goto label_04461d0b;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar28);
            }
            method = (MethodInfo *)il2cpp_runtime_helper_02300d20(unaff_R15,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar11 = *(System_Nullable_bool__Fields *)((long)method + 8);
            SVar18 = unaff_R15;
            unaff_RBX = (System_Nullable_bool__Fields)(*(code *)*(System_Nullable_bool__Fields *)method)();
            lVar20 = *(long *)((long)unaff_R14 + 0x10);
            unaff_R13 = unaff_R12;
            if (lVar20 == 0) goto label_04461e40;
          }
        }
        SVar18 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
        SVar11 = "-value";
        pSVar21 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar18,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R12,(System_String_o *)unaff_RBX,
                               "text",pSVar21,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          unaff_R14 = (System_Nullable_bool__Fields)
                      Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          SVar11.hasValue = 0;
          SVar11.value = 0;
          method._0_4_ = 0;
          method._4_4_ = 0;
          SVar18 = "Column";
          pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_R14,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar15,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,1.0,(MethodInfo *)0x0);
          unaff_RBX.hasValue = 0;
          unaff_RBX.value = 0;
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar13->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar17;
            il2cpp_runtime_helper_022b4080(&(pGVar13->fields).search,pGVar17);
            return;
          }
        }
      }
label_04461e40:
      uVar37 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar21 = *(System_String_o **)(lVar20 + 0x68);
      method = *(MethodInfo **)(lVar20 + 0x78);
      unaff_R12 = "-button";
      if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) {
        if (pSVar21 == (System_String_o *)0x0) {
          pSVar21 = *(System_String_o **)(lVar20 + 0x18);
        }
        unaff_R14 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
        method = *(MethodInfo **)(lVar20 + 0x70);
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_R14,(System_String_o *)"-button",(MethodInfo *)0x0);
        unaff_RBX = (System_Nullable_bool__Fields)method;
        if (unaff_R15 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15,1,pSVar21,(System_String_o *)method,
                            pSVar22,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        unaff_R12 = SVar12;
        unaff_R14 = SVar30;
        unaff_R15 = SVar9;
      }
      else {
        if (pSVar21 == (System_String_o *)0x0) {
          pSVar21 = *(System_String_o **)(lVar20 + 0x18);
        }
        unaff_R14 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_R14,(System_String_o *)"-button",(MethodInfo *)0x0);
        unaff_RBX = (System_Nullable_bool__Fields)method;
        if (unaff_R15 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        SVar11 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15,1,pSVar21,
                            (System_Action_GisketchActionContext__o *)method,pSVar22,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        unaff_R12 = SVar12;
        unaff_R14 = SVar30;
        unaff_R15 = SVar9;
      }
      uVar37 = 0x43a00000;
      unaff_RBX = SVar10;
      SVar18 = SVar29;
    }
  }
  else {
    SVar11 = (System_Nullable_bool__Fields)(pGVar3->fields).Adapter;
    if (SVar11 == (System_Nullable_bool__Fields)0x0) {
      SVar9 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      pSVar21 = (pGVar3->fields).Id;
    }
    else {
      lVar20 = *(long *)SVar11;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar28 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
            method = (MethodInfo *)
                     ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) * 0x10 + lVar20 + 0x138);
            goto label_044613c7;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar28);
      }
      method = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IAottgSettingAdapter,0);
label_044613c7:
      SVar30 = *(System_Nullable_bool__Fields *)((long)method + 8);
      SVar18 = SVar11;
      SVar9 = (System_Nullable_bool__Fields)(*(code *)*(System_Nullable_bool__Fields *)method)();
      pGVar3 = (__this->fields)._descriptor;
      if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_044614ee;
      pSVar21 = (pGVar3->fields).Id;
    }
    SVar30 = (System_Nullable_bool__Fields)__this;
    if ((char)dropdown == '\0') {
      SVar10 = (System_Nullable_bool__Fields)
               System_String__Concat_3ae5ba0(pSVar21,"-select",(MethodInfo *)0x0);
      SVar11 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      method._0_4_ = 0;
      method._4_4_ = 0;
      SVar18 = SVar11;
      System_Action_GisketchActionContext____ctor();
      pGVar3 = (__this->fields)._descriptor;
      if ((pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
         (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_044614ee;
      SVar11 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                         (control,(System_String_o *)SVar10,(System_String_o *)SVar9,
                          (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)SVar8,
                          (System_Action_GisketchActionContext__o *)SVar11,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(pGVar3->fields).ShowValue,
                          (MethodInfo *)0x0);
      method = (MethodInfo *)SVar8;
    }
    else {
      SVar10 = (System_Nullable_bool__Fields)
               System_String__Concat_3ae5ba0(pSVar21,"-dropdown",(MethodInfo *)0x0);
      SVar11 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      method._0_4_ = 0;
      method._4_4_ = 0;
      SVar18 = SVar11;
      System_Action_GisketchActionContext____ctor();
      pGVar3 = (__this->fields)._descriptor;
      if ((pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
         (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_044614ee;
      SVar11 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
                         (control,(System_String_o *)SVar10,(System_String_o *)SVar9,
                          (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)SVar8,
                          (System_Action_GisketchActionContext__o *)SVar11,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(pGVar3->fields).ShowValue,
                          (MethodInfo *)0x0);
      method = (MethodInfo *)SVar8;
    }
    uVar37 = 0x43960000;
    puVar26 = (undefined1 *)register0x00000020;
    SVar18 = (System_Nullable_bool__Fields)__this;
  }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout:
  *(System_Nullable_bool__Fields *)(puVar26 + -8) = unaff_R14;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x10) = unaff_RBX;
  *(undefined4 *)(puVar26 + -0x14) = uVar37;
  SVar12 = SVar11;
  SVar30 = SVar18;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)(puVar26 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar26 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar30 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)(puVar26 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar11 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)SVar18 + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)SVar18 + 0x10) + 0x58);
    *(undefined2 *)(puVar26 + -0x16) = 0;
    *(undefined8 *)(puVar26 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar26 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar11 + 0x6b) = *(undefined2 *)(puVar26 + -0x16);
    *(undefined8 *)(puVar26 + -0x70) = 0x4461ee8;
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)(puVar26 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)(puVar26 + -0x70) = 0x4461efa;
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x50) = pGVar16;
    *(undefined8 *)(puVar26 + -0x68) = 0;
    *(undefined8 *)(puVar26 + -0x60) = 0;
    *(undefined8 *)(puVar26 + -0x20) = 0;
    *(undefined4 *)(puVar26 + -0x28) = 0x3f800000;
    *(undefined4 *)(puVar26 + -0x30) = 0;
    *(undefined4 *)(puVar26 + -0x38) = 0;
    *(undefined4 *)(puVar26 + -0x40) = 0;
    *(undefined8 *)(puVar26 + -0x48) = 0;
    *(undefined8 *)(puVar26 + -0x58) = 0;
    *(undefined8 *)(puVar26 + -0x70) = 0x4461f83;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar15,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x48),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar26 + -0x40),*(float *)(puVar26 + -0x38),
                         *(float *)(puVar26 + -0x30),*(float *)(puVar26 + -0x28),
                         *(MethodInfo **)(puVar26 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar11 + 0xd8) = pGVar17;
    *(undefined8 *)(puVar26 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar11 + 0xd8),pGVar17);
    return;
  }
  *(undefined8 *)(puVar26 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar26 + -0x70) = unaff_R15;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x78) = SVar18;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x88) = unaff_R12;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x90) = SVar11;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)(puVar26 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)(puVar26 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar30 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)(puVar26 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar18 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar30 + 0x10) + 0x60);
    if (SVar18 == (System_Nullable_bool__Fields)0x0) {
      SVar12.hasValue = 0;
      SVar12.value = 0;
      *(undefined8 *)(puVar26 + -0x98) = 0x446200b;
      SVar18 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (SVar18 == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar12.value = 0;
    SVar12.hasValue = *(uint *)((long)SVar18 + 0x18);
    *(undefined8 *)(puVar26 + -0x98) = 0x446202a;
    unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)SVar18 + 0x18) < 1) {
      return;
    }
    if (unaff_R15 != (System_Nullable_bool__Fields)0x0) {
      SVar29 = (System_Nullable_bool__Fields)(*(ulong *)((long)SVar18 + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R15 + 0x20);
      SVar30.hasValue = 0;
      SVar30.value = 0;
      unaff_R12 = SVar18;
      while (unaff_R12 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20), (ulong)SVar30 < (ulong)SVar29
            ) {
        *(undefined8 *)(puVar26 + -0x98) = 0x446205f;
        SVar10 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar26 + -0x90),
                            (MethodInfo *)unaff_R12);
        method._4_4_ = 0;
        method._0_4_ = *(uint *)((long)unaff_R15 + 0x18);
        if (method <= (ulong)SVar30) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar10;
        *(undefined8 *)(puVar26 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar30 = (System_Nullable_bool__Fields)((long)SVar30 + 1);
        SVar29.value = 0;
        SVar29.hasValue = *(uint *)((long)SVar18 + 0x18);
        method = (MethodInfo *)(long)(int)*(uint *)((long)SVar18 + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar12 = SVar10;
        if ((long)method <= (long)SVar30) {
          return;
        }
      }
      *(undefined8 *)(puVar26 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar18 = (System_Nullable_bool__Fields)((long)SVar18 + 0x20);
  *(undefined8 *)(puVar26 + -0x98) = 0x44620b2;
  SVar31 = SVar18;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar26 + -0x90),
             (MethodInfo *)SVar18);
  *(undefined8 *)(puVar26 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar26 + -0x98) = unaff_RBP;
  *(System_Nullable_bool__Fields *)(puVar26 + -0xa0) = unaff_R15;
  *(System_Nullable_bool__Fields *)(puVar26 + -0xa8) = SVar18;
  *(System_Nullable_bool__Fields *)(puVar26 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar26 + -0xb8) = unaff_R12;
  *(System_Nullable_bool__Fields *)(puVar26 + -0xc0) = SVar30;
  SVar27 = SVar12;
  SVar10 = SVar31;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)(puVar26 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar26 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)(puVar26 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar26 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar10 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)(puVar26 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar11 = SVar12;
  SVar9 = extraout_RDX;
  if (*(long *)((long)SVar31 + 0x10) != 0) {
    SVar30 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar31 + 0x10) + 0x28);
    if (SVar30 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)(puVar26 + -0xd0) = 0;
    }
    else {
      lVar20 = *(long *)SVar30;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar28 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
            puVar19 = (undefined8 *)
                      (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar28);
      }
      *(undefined8 *)(puVar26 + -0xf0) = 0x446219c;
      puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar23 = puVar19[1];
      pcVar4 = (code *)*puVar19;
      *(undefined8 *)(puVar26 + -0xf0) = 0x44621cf;
      uVar37 = (*pcVar4)(SVar30,uVar23);
      *(undefined4 *)(puVar26 + -0xd0) = uVar37;
    }
    *(undefined8 *)(puVar26 + -0xf0) = 0x44621e4;
    SVar8 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar26 + -0xf0) = 0x44621fe;
    SVar27 = SVar31;
    SVar10 = SVar8;
    System_Action_GisketchActionContext____ctor();
    SVar18 = "slider";
    method = *(MethodInfo **)((long)SVar31 + 0x10);
    SVar11 = SVar8;
    unaff_R12 = SVar12;
    unaff_R13 = extraout_RDX;
    SVar9 = extraout_RDX;
    if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)(puVar26 + -200) = SVar31;
      SVar30 = *(System_Nullable_bool__Fields *)((long)method + 0x28);
      fVar38 = 0.0;
      SVar14 = extraout_RDX;
      SVar9 = SVar12;
      if (SVar30 == (System_Nullable_bool__Fields)0x0) {
        SVar14 = SVar30;
        SVar9 = SVar30;
      }
      value = *(float *)(puVar26 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar30 != (System_Nullable_bool__Fields)0x0) {
        lVar20 = *(long *)SVar30;
        uVar2 = *(ushort *)(lVar20 + 0x12e);
        *(float *)(puVar26 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar28 = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
              puVar19 = (undefined8 *)
                        (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar28);
        }
        *(undefined8 *)(puVar26 + -0xf0) = 0x446229c;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        SVar27 = *(System_Nullable_bool__Fields *)(puVar19 + 1);
        pcVar4 = (code *)*puVar19;
        *(undefined8 *)(puVar26 + -0xf0) = 0x44622c3;
        SVar10 = SVar30;
        fVar38 = (float)(*pcVar4)();
        method = *(MethodInfo **)(*(long *)(puVar26 + -200) + 0x10);
        unaff_R12 = SVar8;
        unaff_R13 = SVar14;
        SVar31 = SVar18;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)(puVar26 + -0xcc);
        SVar12 = SVar9;
      }
      SVar11 = *(System_Nullable_bool__Fields *)((long)method + 0x28);
      SVar31 = SVar12;
      SVar9 = SVar8;
      if (SVar11 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        unaff_R12 = *(System_Nullable_bool__Fields *)(puVar26 + -200);
        if (SVar12 == (System_Nullable_bool__Fields)0x0) {
          SVar30.hasValue = 0;
          SVar30.value = 0;
          SVar27 = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)(puVar26 + -0xe8) = 0;
          *(undefined8 *)(puVar26 + -0xf0) = 0x44623fc;
          method = (MethodInfo *)SVar8;
          SVar27 = unaff_R13;
          SVar10 = SVar12;
          SVar30 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar12,(System_String_o *)unaff_R13,value,0,
                              (System_Action_GisketchActionContext__o *)SVar8,(System_String_o *)SVar18,fVar38
                              ,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)(puVar26 + -0xe8));
          if (*(long *)((long)unaff_R12 + 0x10) != 0) {
            bVar36 = *(char *)(*(long *)((long)unaff_R12 + 0x10) + 0x58) == '\0';
            *(undefined2 *)(puVar26 + -0xd2) = 0;
            SVar27._1_7_ = 0;
            SVar27.hasValue._0_1_ = bVar36;
            SVar10 = (System_Nullable_bool__Fields)((long)puVar26 + -0xd2);
            *(undefined8 *)(puVar26 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar10,(uint)bVar36,MethodInfo_Nullable_1_Boolean);
            if (SVar30 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar30 + 0x6b) = *(undefined2 *)(puVar26 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar20 = *(long *)SVar11;
        uVar2 = *(ushort *)(lVar20 + 0x12e);
        unaff_R12 = *(System_Nullable_bool__Fields *)(puVar26 + -200);
        *(float *)(puVar26 + -0xd0) = fVar38;
        *(float *)(puVar26 + -0xcc) = value;
        method._0_4_ = 0;
        method._4_4_ = 0;
        if ((ulong)uVar2 != 0) {
          method = (MethodInfo *)((ulong)uVar2 << 4);
          SVar32.hasValue = 0;
          SVar32.value = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar32) == TypeInfo_IAottgSettingAdapter) {
              method = (MethodInfo *)
                       ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar32) + 4) * 0x10);
              puVar19 = (undefined8 *)(lVar20 + (long)method + 0x138);
              goto label_044623be;
            }
            SVar32 = (System_Nullable_bool__Fields)((long)SVar32 + 0x10);
          } while ((System_Nullable_bool__Fields)method != SVar32);
        }
        *(undefined8 *)(puVar26 + -0xf0) = 0x446237c;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        SVar27 = *(System_Nullable_bool__Fields *)(puVar19 + 1);
        pcVar4 = (code *)*puVar19;
        *(undefined8 *)(puVar26 + -0xf0) = 0x44623c7;
        SVar10 = SVar11;
        max = (float)(*pcVar4)();
        fVar38 = *(float *)(puVar26 + -0xd0);
        value = *(float *)(puVar26 + -0xcc);
        SVar30 = SVar18;
        if (SVar12 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)(puVar26 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar26 + -0xf0) = SVar31;
  *(System_Nullable_bool__Fields *)(puVar26 + -0xf8) = SVar9;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x100) = SVar30;
  SVar9 = SVar10;
  if (g_data_057ae798 == '\0') {
    SVar9 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)(puVar26 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar20 = *(long *)((long)SVar10 + 0x10);
  if (lVar20 != 0) {
    SVar31 = (System_Nullable_bool__Fields)((long)puVar26 + -0xe0);
    SVar30 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
    if (SVar30 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar26 + -0x110) = *(undefined8 *)(puVar26 + -0xd0);
      *(undefined8 *)(puVar26 + -0x108) = *(undefined8 *)(puVar26 + -200);
      *(undefined8 *)(puVar26 + -0x120) = *(undefined8 *)SVar31;
      *(undefined8 *)(puVar26 + -0x118) = *(undefined8 *)(puVar26 + -0xd8);
label_0446256c:
      *(undefined8 *)(puVar26 + -0x130) = *(undefined8 *)(puVar26 + -0x110);
      *(undefined8 *)(puVar26 + -0x128) = *(undefined8 *)(puVar26 + -0x108);
      *(undefined8 *)(puVar26 + -0x140) = *(undefined8 *)(puVar26 + -0x120);
      *(undefined8 *)(puVar26 + -0x138) = *(undefined8 *)(puVar26 + -0x118);
      lVar20 = *(long *)(lVar20 + 0x88);
      if (lVar20 != 0) {
        uVar23 = *(undefined8 *)(lVar20 + 0x28);
        uVar5 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined4 *)(puVar26 + -0x150) = *(undefined4 *)(puVar26 + -0x130);
        *(undefined4 *)(puVar26 + -0x14c) = *(undefined4 *)(puVar26 + -300);
        *(undefined4 *)(puVar26 + -0x148) = *(undefined4 *)(puVar26 + -0x128);
        *(undefined4 *)(puVar26 + -0x144) = *(undefined4 *)(puVar26 + -0x124);
        *(undefined4 *)(puVar26 + -0x160) = *(undefined4 *)(puVar26 + -0x140);
        *(undefined4 *)(puVar26 + -0x15c) = *(undefined4 *)(puVar26 + -0x13c);
        *(undefined4 *)(puVar26 + -0x158) = *(undefined4 *)(puVar26 + -0x138);
        *(undefined4 *)(puVar26 + -0x154) = *(undefined4 *)(puVar26 + -0x134);
        pcVar4 = *(code **)(lVar20 + 0x18);
        *(undefined8 *)(puVar26 + -0x168) = 0x44625a7;
        (*pcVar4)(uVar5,uVar23);
      }
      return;
    }
    *(undefined4 *)(puVar26 + -0x130) = *(undefined4 *)(puVar26 + -0xd0);
    *(undefined4 *)(puVar26 + -300) = *(undefined4 *)(puVar26 + -0xcc);
    *(undefined4 *)(puVar26 + -0x128) = *(undefined4 *)(puVar26 + -200);
    *(undefined4 *)(puVar26 + -0x124) = *(undefined4 *)(puVar26 + -0xc4);
    *(undefined4 *)(puVar26 + -0x140) = *(undefined4 *)SVar31;
    *(undefined4 *)(puVar26 + -0x13c) = *(undefined4 *)(puVar26 + -0xdc);
    *(undefined4 *)(puVar26 + -0x138) = *(undefined4 *)(puVar26 + -0xd8);
    *(undefined4 *)(puVar26 + -0x134) = *(undefined4 *)(puVar26 + -0xd4);
    lVar20 = *(long *)SVar30;
    method._0_4_ = 0;
    method._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      method = (MethodInfo *)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
      SVar33.hasValue = 0;
      SVar33.value = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar33) == TypeInfo_IAottgSettingAdapter) {
          method = (MethodInfo *)((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar33) + 0xb) * 0x10);
          puVar19 = (undefined8 *)(lVar20 + (long)method + 0x138);
          goto label_0446252f;
        }
        SVar33 = (System_Nullable_bool__Fields)((long)SVar33 + 0x10);
      } while ((System_Nullable_bool__Fields)method != SVar33);
    }
    *(undefined8 *)(puVar26 + -0x168) = 0x44624fc;
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    SVar27 = *(System_Nullable_bool__Fields *)(puVar19 + 1);
    *(undefined4 *)(puVar26 + -0x150) = *(undefined4 *)(puVar26 + -0x130);
    *(undefined4 *)(puVar26 + -0x14c) = *(undefined4 *)(puVar26 + -300);
    *(undefined4 *)(puVar26 + -0x148) = *(undefined4 *)(puVar26 + -0x128);
    *(undefined4 *)(puVar26 + -0x144) = *(undefined4 *)(puVar26 + -0x124);
    *(undefined4 *)(puVar26 + -0x160) = *(undefined4 *)(puVar26 + -0x140);
    *(undefined4 *)(puVar26 + -0x15c) = *(undefined4 *)(puVar26 + -0x13c);
    *(undefined4 *)(puVar26 + -0x158) = *(undefined4 *)(puVar26 + -0x138);
    *(undefined4 *)(puVar26 + -0x154) = *(undefined4 *)(puVar26 + -0x134);
    pcVar4 = (code *)*puVar19;
    *(undefined8 *)(puVar26 + -0x168) = 0x446254b;
    SVar9 = SVar30;
    (*pcVar4)();
    lVar20 = *(long *)((long)SVar10 + 0x10);
    *(undefined8 *)(puVar26 + -0x110) = *(undefined8 *)(puVar26 + -0xd0);
    *(undefined8 *)(puVar26 + -0x108) = *(undefined8 *)(puVar26 + -200);
    *(undefined4 *)(puVar26 + -0x120) = *(undefined4 *)SVar31;
    *(undefined4 *)(puVar26 + -0x11c) = *(undefined4 *)(puVar26 + -0xdc);
    *(undefined4 *)(puVar26 + -0x118) = *(undefined4 *)(puVar26 + -0xd8);
    *(undefined4 *)(puVar26 + -0x114) = *(undefined4 *)(puVar26 + -0xd4);
    if (lVar20 != 0) goto label_0446256c;
  }
  *(undefined8 *)(puVar26 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar26 + -0x168) = SVar11;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x170) = SVar31;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x178) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar26 + -0x180) = SVar30;
  SVar10 = SVar9;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)(puVar26 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar10 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)(puVar26 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar20 = *(long *)((long)SVar9 + 0x10);
  if (lVar20 == 0) {
label_04462728:
    *(undefined8 *)(puVar26 + -0x1f0) = 0x446272d;
    il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_bool__Fields *)(puVar26 + -0x1f0) = SVar11;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x1f8) = SVar31;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x200) = SVar9;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x208) = unaff_R13;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x210) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x218) = SVar30;
    SVar11 = SVar10;
    if (g_data_057ae79c == '\0') {
      *(undefined8 *)(puVar26 + -0x278) = 0x4462759;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar26 + -0x278) = 0x4462765;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
      *(undefined8 *)(puVar26 + -0x278) = 0x4462771;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar26 + -0x278) = 0x446277d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
      *(undefined8 *)(puVar26 + -0x278) = 0x4462789;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)(puVar26 + -0x278) = 0x4462795;
      il2cpp_runtime_helper_023445d0(&"-value-button");
      *(undefined8 *)(puVar26 + -0x278) = 0x44627a1;
      il2cpp_runtime_helper_023445d0(&"-slider");
      SVar11 = (System_Nullable_bool__Fields)&"0";
      *(undefined8 *)(puVar26 + -0x278) = 0x44627ad;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae79c = '\x01';
    }
    if (*(long *)((long)SVar10 + 0x10) != 0) {
      pSVar21 = *(System_String_o **)(*(long *)((long)SVar10 + 0x10) + 0x10);
      *(undefined8 *)(puVar26 + -0x278) = 0x44627d6;
      pSVar21 = System_String__Concat_3ae5ba0(pSVar21,"-slider",(MethodInfo *)0x0);
      *(undefined8 *)(puVar26 + -0x278) = 0x44627e4;
      SVar30 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                         ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar10,
                          (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar27,pSVar21,method);
      *(undefined8 *)(puVar26 + -0x278) = 0x44627f6;
      pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar26 + -0x260) = 0;
      *(undefined8 *)(puVar26 + -600) = 0;
      *(undefined8 *)(puVar26 + -0x270) = 0;
      *(undefined8 *)(puVar26 + -0x268) = 0;
      *(undefined8 *)(puVar26 + -0x228) = 0;
      *(undefined4 *)(puVar26 + -0x230) = 0x3f800000;
      *(undefined4 *)(puVar26 + -0x238) = 0x3f800000;
      *(undefined4 *)(puVar26 + -0x240) = 0;
      *(undefined4 *)(puVar26 + -0x248) = 0;
      *(undefined8 *)(puVar26 + -0x250) = 0;
      *(undefined8 *)(puVar26 + -0x278) = 0x4462873;
      SVar11 = "Column";
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar15,
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x270),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x268),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x260),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -600),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x250),0.0,0.0,0.0,0.0,0.0
                           ,0.0,0.0,*(float *)(puVar26 + -0x248),*(float *)(puVar26 + -0x240),
                           *(float *)(puVar26 + -0x238),*(float *)(puVar26 + -0x230),
                           *(MethodInfo **)(puVar26 + -0x228));
      if (SVar30 != (System_Nullable_bool__Fields)0x0) {
        SVar11 = (System_Nullable_bool__Fields)((long)SVar30 + 0xd8);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar30 + 0xd8) = pGVar17;
        *(undefined8 *)(puVar26 + -0x278) = 0x4462895;
        il2cpp_runtime_helper_022b4080(SVar11,pGVar17);
        if (*(long *)((long)SVar10 + 0x10) != 0) {
          plVar6 = *(long **)(*(long *)((long)SVar10 + 0x10) + 0x28);
          if (plVar6 == (long *)0x0) {
            iVar35 = 4;
            pSVar21 = "0";
          }
          else {
            lVar20 = *plVar6;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar28 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar28) == TypeInfo_IAottgSettingAdapter) {
                  puVar19 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar28) * 0x10 + lVar20 + 0x138);
                  goto label_04462936;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar28);
            }
            *(undefined8 *)(puVar26 + -0x278) = 0x4462909;
            puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
            iVar35 = (uint)(plVar6 != (long *)0x0) << 2;
            uVar23 = puVar19[1];
            pcVar4 = (code *)*puVar19;
            *(undefined8 *)(puVar26 + -0x278) = 0x4462943;
            pSVar21 = (System_String_o *)(*pcVar4)(plVar6,uVar23);
          }
          *(undefined8 *)(puVar26 + -0x278) = 0x4462955;
          SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
          *(undefined8 *)(puVar26 + -0x278) = 0x446296f;
          SVar11 = SVar9;
          System_Action_GisketchActionContext____ctor();
          SVar30 = SVar27;
          if (*(long *)((long)SVar10 + 0x10) != 0) {
            SVar11 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar10 + 0x10) + 0x10);
            *(undefined8 *)(puVar26 + -0x278) = 0x4462991;
            pSVar22 = System_String__Concat_3ae5ba0((System_String_o *)SVar11,"-value-button",(MethodInfo *)0x0);
            if (SVar27 != (System_Nullable_bool__Fields)0x0) {
              *(undefined8 *)(puVar26 + -0x270) = 0;
              *(undefined8 *)(puVar26 + -0x268) = 0;
              *(undefined8 *)(puVar26 + -0x260) = 0;
              *(undefined8 *)(puVar26 + -0x278) = 0x44629c1;
              SVar11 = SVar27;
              SVar30 = (System_Nullable_bool__Fields)
                       Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                 ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar27,iVar35,pSVar21,
                                  (System_Action_GisketchActionContext__o *)SVar9,pSVar22,
                                  (System_String_o *)0x0,
                                  *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar26 + -0x270),
                                  *(System_String_o **)(puVar26 + -0x268),*(MethodInfo **)(puVar26 + -0x260));
              if (*(long *)((long)SVar10 + 0x10) != 0) {
                cVar1 = *(char *)(*(long *)((long)SVar10 + 0x10) + 0x58);
                *(undefined2 *)(puVar26 + -0x21a) = 0;
                SVar11 = (System_Nullable_bool__Fields)((long)puVar26 + -0x21a);
                *(undefined8 *)(puVar26 + -0x278) = 0x44629f6;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o)SVar11,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
                if (SVar30 != (System_Nullable_bool__Fields)0x0) {
                  *(undefined2 *)((long)SVar30 + 0x6b) = *(undefined2 *)(puVar26 + -0x21a);
                  *(undefined8 *)(puVar26 + -0x278) = 0x4462a1e;
                  pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                  *(undefined8 *)(puVar26 + -0x260) = 0;
                  *(undefined8 *)(puVar26 + -600) = 0;
                  *(undefined8 *)(puVar26 + -0x270) = 0;
                  *(undefined8 *)(puVar26 + -0x268) = 0;
                  *(undefined8 *)(puVar26 + -0x228) = 0;
                  *(undefined4 *)(puVar26 + -0x230) = 0;
                  *(undefined4 *)(puVar26 + -0x238) = 0;
                  *(undefined4 *)(puVar26 + -0x240) = 0;
                  *(undefined4 *)(puVar26 + -0x248) = 0;
                  *(undefined8 *)(puVar26 + -0x250) = 0;
                  *(undefined8 *)(puVar26 + -0x278) = 0x4462a95;
                  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ((System_String_o *)"Column",(System_String_o *)0x0,
                                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                       0.0,pGVar15,
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x270),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x268),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x260),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -600),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar26 + -0x250),0.0,0.0
                                       ,0.0,0.0,0.0,0.0,0.0,*(float *)(puVar26 + -0x248),
                                       *(float *)(puVar26 + -0x240),*(float *)(puVar26 + -0x238),
                                       *(float *)(puVar26 + -0x230),*(MethodInfo **)(puVar26 + -0x228));
                  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar30 + 0xd8) = pGVar17;
                  *(undefined8 *)(puVar26 + -0x278) = 0x4462aae;
                  il2cpp_runtime_helper_022b4080((long)SVar30 + 0xd8,pGVar17);
                  return;
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar26 + -0x278) = 0x4462ac2;
    uVar23 = il2cpp_runtime_helper_022b2c90();
    lVar20 = *(long *)((long)SVar11 + 0x10);
    *(System_Nullable_bool__Fields *)(puVar26 + -0x278) = SVar27;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x280) = SVar30;
    *(undefined8 *)(puVar26 + -0x288) = uVar23;
    if (g_data_057ae7ad == '\0') {
      *(undefined8 *)(puVar26 + -0x290) = 0x4462afc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
      *(undefined8 *)(puVar26 + -0x290) = 0x4462b08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      *(undefined8 *)(puVar26 + -0x290) = 0x4462b14;
      il2cpp_runtime_helper_023445d0(&"setting-slider-value");
      g_data_057ae7ad = '\x01';
    }
    if (((lVar20 != 0) && (*(long *)(lVar20 + 0x28) != 0)) && (*(char *)(lVar20 + 0x58) == '\0')) {
      **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar20;
      uVar23 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      *(undefined8 *)(puVar26 + -0x290) = 0x4462b60;
      il2cpp_runtime_helper_022b4080(uVar23,lVar20);
      if (*(UnityEngine_GameObject_o **)(puVar26 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)(puVar26 + -0x290) = 0x4462b78;
        pIVar24 = UnityEngine_GameObject__GetComponentInParent_object_
                            (*(UnityEngine_GameObject_o **)(puVar26 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if ((pIVar24 != (Il2CppObject *)0x0) &&
           (pIVar24[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar24[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  SVar11 = (System_Nullable_bool__Fields)((long)puVar26 + -0x158);
  SVar30 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
  if (SVar30 == (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)(puVar26 + -0x1b8) = *(undefined8 *)(puVar26 + -0x148);
    *(undefined8 *)(puVar26 + -0x1b0) = *(undefined8 *)(puVar26 + -0x140);
    *(undefined8 *)(puVar26 + -0x1c8) = *(undefined8 *)SVar11;
    *(undefined8 *)(puVar26 + -0x1c0) = *(undefined8 *)(puVar26 + -0x150);
  }
  else {
    if (*(long *)(puVar26 + -0x148) == 0) {
      SVar31.hasValue = 0;
      SVar31.value = 0;
    }
    else {
      pSVar21 = *(System_String_o **)(*(long *)(puVar26 + -0x148) + 0x50);
      *(undefined8 *)(puVar26 + -0x1f0) = 0x4462631;
      uVar7 = System_String__op_Equality(pSVar21,"true",(MethodInfo *)0x0);
      SVar31.value = 0;
      SVar31.hasValue = uVar7;
    }
    lVar20 = *(long *)SVar30;
    method._0_4_ = 0;
    method._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      method = (MethodInfo *)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
      SVar34.hasValue = 0;
      SVar34.value = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar34) == TypeInfo_IAottgSettingAdapter) {
          method = (MethodInfo *)((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar34) + 8) * 0x10);
          puVar19 = (undefined8 *)(lVar20 + (long)method + 0x138);
          goto label_044626b5;
        }
        SVar34 = (System_Nullable_bool__Fields)((long)SVar34 + 0x10);
      } while ((System_Nullable_bool__Fields)method != SVar34);
    }
    *(undefined8 *)(puVar26 + -0x1f0) = 0x446269c;
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
    uVar23 = puVar19[1];
    SVar27 = (System_Nullable_bool__Fields)((ulong)SVar31 & 0xff);
    pcVar4 = (code *)*puVar19;
    *(undefined8 *)(puVar26 + -0x1f0) = 0x44626c2;
    SVar10 = SVar30;
    (*pcVar4)(SVar30,SVar27,uVar23);
    lVar20 = *(long *)((long)SVar9 + 0x10);
    *(undefined8 *)(puVar26 + -0x1b8) = *(undefined8 *)(puVar26 + -0x148);
    *(undefined8 *)(puVar26 + -0x1b0) = *(undefined8 *)(puVar26 + -0x140);
    *(undefined4 *)(puVar26 + -0x1c8) = *(undefined4 *)SVar11;
    *(undefined4 *)(puVar26 + -0x1c4) = *(undefined4 *)(puVar26 + -0x154);
    *(undefined4 *)(puVar26 + -0x1c0) = *(undefined4 *)(puVar26 + -0x150);
    *(undefined4 *)(puVar26 + -0x1bc) = *(undefined4 *)(puVar26 + -0x14c);
    if (lVar20 == 0) goto label_04462728;
  }
  *(undefined8 *)(puVar26 + -0x198) = *(undefined8 *)(puVar26 + -0x1b8);
  *(undefined8 *)(puVar26 + -400) = *(undefined8 *)(puVar26 + -0x1b0);
  *(undefined8 *)(puVar26 + -0x1a8) = *(undefined8 *)(puVar26 + -0x1c8);
  *(undefined8 *)(puVar26 + -0x1a0) = *(undefined8 *)(puVar26 + -0x1c0);
  lVar20 = *(long *)(lVar20 + 0x88);
  if (lVar20 != 0) {
    uVar23 = *(undefined8 *)(lVar20 + 0x28);
    uVar5 = *(undefined8 *)(lVar20 + 0x40);
    *(undefined4 *)(puVar26 + -0x1d8) = *(undefined4 *)(puVar26 + -0x198);
    *(undefined4 *)(puVar26 + -0x1d4) = *(undefined4 *)(puVar26 + -0x194);
    *(undefined4 *)(puVar26 + -0x1d0) = *(undefined4 *)(puVar26 + -400);
    *(undefined4 *)(puVar26 + -0x1cc) = *(undefined4 *)(puVar26 + -0x18c);
    *(undefined4 *)(puVar26 + -0x1e8) = *(undefined4 *)(puVar26 + -0x1a8);
    *(undefined4 *)(puVar26 + -0x1e4) = *(undefined4 *)(puVar26 + -0x1a4);
    *(undefined4 *)(puVar26 + -0x1e0) = *(undefined4 *)(puVar26 + -0x1a0);
    *(undefined4 *)(puVar26 + -0x1dc) = *(undefined4 *)(puVar26 + -0x19c);
    pcVar4 = *(code **)(lVar20 + 0x18);
    *(undefined8 *)(puVar26 + -0x1f0) = 0x446271d;
    (*pcVar4)(uVar5,uVar23);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSlider
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x4461500

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  uint type;
  int32_t iVar7;
  uint uVar8;
  System_Nullable_bool__Fields SVar9;
  System_Nullable_bool__Fields SVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar13;
  undefined8 *puVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  System_String_o *pSVar16;
  System_Nullable_bool__Fields SVar17;
  System_Nullable_bool__Fields SVar18;
  long lVar19;
  System_String_o *pSVar20;
  undefined8 uVar21;
  Il2CppObject *pIVar22;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar23;
  System_Nullable_bool__Fields unaff_RBP;
  System_Nullable_bool__Fields SVar24;
  System_Nullable_bool__Fields SVar25;
  System_Nullable_bool__Fields SVar26;
  long lVar27;
  System_Nullable_bool__Fields SVar28;
  System_Nullable_bool__Fields SVar29;
  System_Nullable_bool__Fields SVar30;
  System_Nullable_bool__Fields SVar31;
  System_Nullable_bool__Fields unaff_R12;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields SVar32;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar33;
  float fVar34;
  undefined4 uVar35;
  float max;
  float value;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  float fStack_c8;
  uint uStack_c4;
  System_String_o *pSStack_c0;
  System_Nullable_bool__Fields SStack_b8;
  System_Nullable_bool__Fields SStack_b0;
  System_Nullable_bool__Fields SStack_a8;
  System_Nullable_bool__Fields SStack_a0;
  
  SVar18 = (System_Nullable_bool__Fields)control;
  SVar25 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-slider-with-value");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    SVar25 = (System_Nullable_bool__Fields)&"-slider";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae793 = '\x01';
  }
  pGVar3 = (__this->fields)._descriptor;
  SVar10 = unaff_R12;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_04461703:
    il2cpp_runtime_helper_022b2c90();
    SVar9 = in_RCX;
    unaff_R15 = SVar18;
    SVar26 = SVar25;
    SStack_a8 = (System_Nullable_bool__Fields)__this;
    SStack_a0 = SVar10;
    if (g_data_057ae795 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"inputField");
      SVar26 = (System_Nullable_bool__Fields)&"-input";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
      SVar9 = in_RCX;
    }
    lVar19 = *(long *)((long)SVar25 + 0x10);
    unaff_RBP = SVar25;
    if (lVar19 != 0) {
      if (*(long **)(lVar19 + 0x28) == (long *)0x0) {
        uStack_cc = 1;
      }
      else {
        uStack_cc = (uint)(**(long **)(lVar19 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      SVar10 = (System_Nullable_bool__Fields)
               System_String__Concat_3ae5ba0
                         (*(System_String_o **)(lVar19 + 0x10),"-input",(MethodInfo *)0x0);
      unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      fStack_c8 = 0.0;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)
               Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar11,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar13,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      control = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      SVar9.hasValue = 0;
      SVar9.value = 0;
      unaff_R15 = SVar25;
      SVar26 = (System_Nullable_bool__Fields)control;
      System_Action_GisketchActionContext____ctor();
      SStack_b0 = SVar25;
      if (*(long *)((long)SVar25 + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar25 + 0x10) + 0x28);
        fVar34 = 0.05;
        bVar33 = unaff_RBP == (System_Nullable_bool__Fields)0x0;
        SVar32 = unaff_R13;
        SVar25 = SVar10;
        SVar9 = SVar18;
        if (bVar33) {
          SVar32.hasValue = 0;
          SVar32.value = 0;
          SVar25 = unaff_RBP;
          SVar9 = unaff_RBP;
        }
        unaff_R15.value = 0;
        unaff_R15.hasValue = uStack_cc;
        SVar23 = (System_Nullable_bool__Fields)control;
        SVar17 = (System_Nullable_bool__Fields)__this;
        pSVar20 = "inputField";
        uVar8 = uStack_cc;
        if (bVar33) {
          SVar23.hasValue = 0;
          SVar23.value = 0;
          pSVar20 = (System_String_o *)0x0;
          SVar17 = unaff_RBP;
          uVar8 = 0;
        }
        iVar7 = 0;
        SVar24 = (System_Nullable_bool__Fields)control;
        SVar26 = SVar10;
        SVar28 = (System_Nullable_bool__Fields)__this;
        type = uStack_cc;
        pSVar16 = "inputField";
        SStack_b8 = SVar18;
        if (!bVar33) {
          fStack_c8 = 0.05;
          lVar19 = *(long *)unaff_RBP;
          uStack_c4 = uVar8;
          pSStack_c0 = pSVar20;
          if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
            lVar27 = 0;
            do {
              if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar27) == TypeInfo_IAottgSettingAdapter) {
                puVar14 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar27) + 7) * 0x10 + lVar19 + 0x138
                          );
                goto label_044619df;
              }
              lVar27 = lVar27 + 0x10;
            } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar27);
          }
          puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          unaff_R15 = *(System_Nullable_bool__Fields *)(puVar14 + 1);
          SVar26 = unaff_RBP;
          iVar7 = (*(code *)*puVar14)();
          SVar24 = SVar23;
          unaff_R13 = SVar32;
          SVar10 = SVar25;
          SVar18 = SVar9;
          SVar28 = SVar17;
          control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17;
          fVar34 = fStack_c8;
          type = uStack_c4;
          pSVar16 = pSStack_c0;
        }
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar24;
        SVar9.value = 0;
        SVar9.hasValue = type;
        if (SVar18 != (System_Nullable_bool__Fields)0x0) {
          unaff_R15 = SVar10;
          SVar26 = SVar18;
          pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,(System_String_o *)SVar10,
                               (System_String_o *)unaff_R13,type,pSVar16,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar28,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               (System_Action_GisketchActionContext__o *)__this,fVar34,iVar7,(MethodInfo *)0x0
                              );
          SVar9.hasValue = 0;
          SVar9.value = 0;
          if (*(long *)((long)SStack_b0 + 0x10) != 0) {
            unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)SStack_b0 + 0x10) + 0x28);
            if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
              SVar9 = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
              unaff_R15 = *(System_Nullable_bool__Fields *)SVar9;
            }
            else {
              lVar19 = *(long *)unaff_RBP;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
                lVar27 = 0;
                do {
                  if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar27) == TypeInfo_IAottgSettingAdapter) {
                    SVar9 = (System_Nullable_bool__Fields)
                            ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar27) * 0x10 + lVar19 + 0x138);
                    goto label_04461ac3;
                  }
                  lVar27 = lVar27 + 0x10;
                } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar27);
              }
              SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              SVar26 = unaff_RBP;
              unaff_R15 = (System_Nullable_bool__Fields)
                          (*(code *)*(System_Nullable_bool__Fields *)SVar9)
                                    (unaff_RBP,*(System_Nullable_bool__Fields *)((long)SVar9 + 8));
            }
            __this._0_4_ = 0;
            __this._4_4_ = 0;
            if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar15->fields).value = (System_String_o *)unaff_R15;
              il2cpp_runtime_helper_022b4080(&(pGVar15->fields).value);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_R12 = unaff_R15;
    unaff_R14 = SVar26;
    SVar25 = (System_Nullable_bool__Fields)__this;
    if (g_data_057ae796 == '\0') {
      unaff_R14 = (System_Nullable_bool__Fields)&"-button";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
    }
    lVar19 = *(long *)((long)SVar26 + 0x10);
    unaff_RBX = (System_Nullable_bool__Fields)__this;
    if (lVar19 == 0) {
label_04461c07:
      il2cpp_runtime_helper_022b2c90();
      register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffe80;
      in_RCX = SVar9;
      SVar17 = unaff_R12;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R14;
      if (g_data_057ae797 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"text");
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-value";
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        in_RCX = SVar9;
      }
      lVar19 = *(long *)((long)unaff_R14 + 0x10);
      if (lVar19 != 0) {
        unaff_RBX = *(System_Nullable_bool__Fields *)(lVar19 + 0x80);
        if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
          unaff_R15 = *(System_Nullable_bool__Fields *)(lVar19 + 0x28);
          if (unaff_R15 == (System_Nullable_bool__Fields)0x0) {
            in_RCX = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
            unaff_RBX = *(System_Nullable_bool__Fields *)in_RCX;
            unaff_R13.hasValue = 0;
            unaff_R13.value = 0;
          }
          else {
            lVar19 = *(long *)unaff_R15;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar27 = 0;
              do {
                if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar27) == TypeInfo_IAottgSettingAdapter) {
                  in_RCX = (System_Nullable_bool__Fields)
                           ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar27) * 0x10 + lVar19 + 0x138);
                  goto label_04461d0b;
                }
                lVar27 = lVar27 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar27);
            }
            in_RCX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_R15,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar17 = *(System_Nullable_bool__Fields *)((long)in_RCX + 8);
            __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R15;
            unaff_RBX = (System_Nullable_bool__Fields)(*(code *)*(System_Nullable_bool__Fields *)in_RCX)();
            lVar19 = *(long *)((long)unaff_R14 + 0x10);
            unaff_R13 = unaff_R12;
            if (lVar19 == 0) goto label_04461e40;
          }
        }
        __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(lVar19 + 0x10);
        SVar17 = "-value";
        pSVar20 = System_String__Concat_3ae5ba0
                            ((System_String_o *)__this,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
          pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R12,(System_String_o *)unaff_RBX,
                               "text",pSVar20,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          unaff_R14 = (System_Nullable_bool__Fields)
                      Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          SVar17.hasValue = 0;
          SVar17.value = 0;
          in_RCX.hasValue = 0;
          in_RCX.value = 0;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)"Column";
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_R14,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar11,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,1.0,(MethodInfo *)0x0);
          unaff_RBX.hasValue = 0;
          unaff_RBX.value = 0;
          if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar15->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar12;
            il2cpp_runtime_helper_022b4080(&(pGVar15->fields).search,pGVar12);
            return;
          }
        }
      }
label_04461e40:
      uVar35 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar20 = *(System_String_o **)(lVar19 + 0x68);
      in_RCX = *(System_Nullable_bool__Fields *)(lVar19 + 0x78);
      unaff_R12 = "-button";
      if (in_RCX == (System_Nullable_bool__Fields)0x0) {
        if (pSVar20 == (System_String_o *)0x0) {
          pSVar20 = *(System_String_o **)(lVar19 + 0x18);
        }
        unaff_R14 = *(System_Nullable_bool__Fields *)(lVar19 + 0x10);
        in_RCX = *(System_Nullable_bool__Fields *)(lVar19 + 0x70);
        pSVar16 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_R14,(System_String_o *)"-button",(MethodInfo *)0x0);
        unaff_RBX = in_RCX;
        if (unaff_R15 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        SVar17 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15,1,pSVar20,(System_String_o *)in_RCX,
                            pSVar16,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        unaff_RBX = SVar25;
        unaff_R12 = SVar10;
        unaff_R14 = (System_Nullable_bool__Fields)control;
        unaff_R15 = SVar18;
      }
      else {
        if (pSVar20 == (System_String_o *)0x0) {
          pSVar20 = *(System_String_o **)(lVar19 + 0x18);
        }
        unaff_R14 = *(System_Nullable_bool__Fields *)(lVar19 + 0x10);
        pSVar16 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_R14,(System_String_o *)"-button",(MethodInfo *)0x0);
        unaff_RBX = in_RCX;
        if (unaff_R15 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        SVar17 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15,1,pSVar20,
                            (System_Action_GisketchActionContext__o *)in_RCX,pSVar16,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        unaff_RBX = SVar25;
        unaff_R12 = SVar10;
        unaff_R14 = (System_Nullable_bool__Fields)control;
        unaff_R15 = SVar18;
      }
      uVar35 = 0x43a00000;
      register0x00000020 = (BADSPACEBASE *)auStack_d0;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar26;
    }
  }
  else {
    if (*(char *)((long)&(pGVar3->fields).Disabled + 1) != '\0') {
      SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      in_RCX.hasValue = 0;
      in_RCX.value = 0;
      SVar18 = (System_Nullable_bool__Fields)__this;
      SVar25 = SVar9;
      System_Action_object____ctor();
      pGVar3 = (__this->fields)._descriptor;
      if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        SVar10 = (System_Nullable_bool__Fields)
                 System_String__Concat_3ae5ba0((pGVar3->fields).Id,"-slider-with-value",(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)
                 Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        SVar18.hasValue = 0;
        SVar18.value = 0;
        in_RCX.hasValue = 0;
        in_RCX.value = 0;
        SVar25 = "Row";
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar11,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (control,"clear",(System_Action_AottgUi__o *)SVar9,(System_String_o *)SVar10,pGVar12,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_04461703;
    }
    pSVar20 = System_String__Concat_3ae5ba0((pGVar3->fields).Id,"-slider",(MethodInfo *)0x0);
    SVar17 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       (__this,control,pSVar20,(MethodInfo *)in_RCX);
    uVar35 = 0x441b0000;
  }
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined4 *)((long)register0x00000020 + -0x14) = uVar35;
  SVar10 = SVar17;
  SVar25 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar25 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar17 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)__this + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)__this + 0x10) + 0x58);
    *(undefined2 *)((long)register0x00000020 + -0x16) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)register0x00000020 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean)
    ;
    *(undefined2 *)((long)SVar17 + 0x6b) = *(undefined2 *)((long)register0x00000020 + -0x16);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461ee8;
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points
                        (*(float *)((long)register0x00000020 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461efa;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x50) = pGVar13;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x28) = 0x3f800000;
    *(undefined4 *)((long)register0x00000020 + -0x30) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461f83;
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar11,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x48),0.0,
                         0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x40),
                         *(float *)((long)register0x00000020 + -0x38),
                         *(float *)((long)register0x00000020 + -0x30),
                         *(float *)((long)register0x00000020 + -0x28),
                         *(MethodInfo **)((long)register0x00000020 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar17 + 0xd8) = pGVar12;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar17 + 0xd8),pGVar12);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x70) = unaff_R15;
  *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)((long)register0x00000020 + -0x78) = __this;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x88) = unaff_R12;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x90) = SVar17;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar25 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar25 + 0x10) + 0x60);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      SVar10.hasValue = 0;
      SVar10.value = 0;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x446200b;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar10.value = 0;
    SVar10.hasValue = *(uint *)((long)__this + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x446202a;
    unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)__this + 0x18) < 1) {
      return;
    }
    if (unaff_R15 != (System_Nullable_bool__Fields)0x0) {
      SVar26 = (System_Nullable_bool__Fields)(*(ulong *)((long)__this + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R15 + 0x20);
      SVar25.hasValue = 0;
      SVar25.value = 0;
      unaff_R12 = (System_Nullable_bool__Fields)__this;
      while (unaff_R12 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20), (ulong)SVar25 < (ulong)SVar26
            ) {
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x446205f;
        SVar18 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)
                             ((long)register0x00000020 + -0x90),(MethodInfo *)unaff_R12);
        in_RCX.value = 0;
        in_RCX.hasValue = *(uint *)((long)unaff_R15 + 0x18);
        if ((ulong)in_RCX <= (ulong)SVar25) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar18;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar25 = (System_Nullable_bool__Fields)((long)SVar25 + 1);
        SVar26.value = 0;
        SVar26.hasValue = *(uint *)((long)__this + 0x18);
        in_RCX = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)__this + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar10 = SVar18;
        if ((long)in_RCX <= (long)SVar25) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar18 = (System_Nullable_bool__Fields)((long)__this + 0x20);
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620b2;
  SVar28 = SVar18;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)((long)register0x00000020 + -0x90)
             ,(MethodInfo *)SVar18);
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x98) = unaff_RBP;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xa0) = unaff_R15;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xa8) = SVar18;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xb8) = unaff_R12;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xc0) = SVar25;
  SVar24 = SVar10;
  SVar18 = SVar28;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar18 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar9 = SVar10;
  SVar26 = extraout_RDX;
  if (*(long *)((long)SVar28 + 0x10) != 0) {
    SVar25 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar28 + 0x10) + 0x28);
    if (SVar25 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)((long)register0x00000020 + -0xd0) = 0;
    }
    else {
      lVar19 = *(long *)SVar25;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar27 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar27) == TypeInfo_IAottgSettingAdapter) {
            puVar14 = (undefined8 *)
                      (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar27) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar27 = lVar27 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar27);
      }
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446219c;
      puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar25,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar21 = puVar14[1];
      pcVar4 = (code *)*puVar14;
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44621cf;
      uVar35 = (*pcVar4)(SVar25,uVar21);
      *(undefined4 *)((long)register0x00000020 + -0xd0) = uVar35;
    }
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44621e4;
    SVar17 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44621fe;
    SVar24 = SVar28;
    SVar18 = SVar17;
    System_Action_GisketchActionContext____ctor();
    SVar32 = "slider";
    in_RCX = *(System_Nullable_bool__Fields *)((long)SVar28 + 0x10);
    SVar9 = SVar17;
    unaff_R12 = SVar10;
    unaff_R13 = extraout_RDX;
    SVar26 = extraout_RDX;
    if (in_RCX != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)((long)register0x00000020 + -200) = SVar28;
      SVar25 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      fVar34 = 0.0;
      SVar23 = extraout_RDX;
      SVar26 = SVar10;
      if (SVar25 == (System_Nullable_bool__Fields)0x0) {
        SVar23 = SVar25;
        SVar26 = SVar25;
      }
      value = *(float *)((long)register0x00000020 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar25 != (System_Nullable_bool__Fields)0x0) {
        lVar19 = *(long *)SVar25;
        uVar2 = *(ushort *)(lVar19 + 0x12e);
        *(float *)((long)register0x00000020 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar27 = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar27) == TypeInfo_IAottgSettingAdapter) {
              puVar14 = (undefined8 *)
                        (lVar19 + (long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar27) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar27);
        }
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446229c;
        puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar25,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        SVar24 = *(System_Nullable_bool__Fields *)(puVar14 + 1);
        pcVar4 = (code *)*puVar14;
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44622c3;
        SVar18 = SVar25;
        fVar34 = (float)(*pcVar4)();
        in_RCX = *(System_Nullable_bool__Fields *)(*(long *)((long)register0x00000020 + -200) + 0x10);
        unaff_R12 = SVar17;
        unaff_R13 = SVar23;
        SVar28 = SVar32;
        if (in_RCX == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)((long)register0x00000020 + -0xcc);
        SVar10 = SVar26;
      }
      SVar9 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      SVar28 = SVar10;
      SVar26 = SVar17;
      if (SVar9 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        unaff_R12 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -200);
        if (SVar10 == (System_Nullable_bool__Fields)0x0) {
          SVar25.hasValue = 0;
          SVar25.value = 0;
          SVar24 = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44623fc;
          in_RCX = SVar17;
          SVar24 = unaff_R13;
          SVar18 = SVar10;
          SVar25 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar10,(System_String_o *)unaff_R13,value,0,
                              (System_Action_GisketchActionContext__o *)SVar17,(System_String_o *)SVar32,
                              fVar34,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)((long)register0x00000020 + -0xe8));
          if (*(long *)((long)unaff_R12 + 0x10) != 0) {
            bVar33 = *(char *)(*(long *)((long)unaff_R12 + 0x10) + 0x58) == '\0';
            *(undefined2 *)((long)register0x00000020 + -0xd2) = 0;
            SVar24._1_7_ = 0;
            SVar24.hasValue._0_1_ = bVar33;
            SVar18 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0xd2);
            *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar18,(uint)bVar33,MethodInfo_Nullable_1_Boolean);
            if (SVar25 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar25 + 0x6b) = *(undefined2 *)((long)register0x00000020 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar19 = *(long *)SVar9;
        uVar2 = *(ushort *)(lVar19 + 0x12e);
        unaff_R12 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -200);
        *(float *)((long)register0x00000020 + -0xd0) = fVar34;
        *(float *)((long)register0x00000020 + -0xcc) = value;
        in_RCX.hasValue = 0;
        in_RCX.value = 0;
        if ((ulong)uVar2 != 0) {
          in_RCX = (System_Nullable_bool__Fields)((ulong)uVar2 << 4);
          SVar29.hasValue = 0;
          SVar29.value = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + (long)SVar29) == TypeInfo_IAottgSettingAdapter) {
              in_RCX = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + (long)SVar29) + 4) * 0x10);
              puVar14 = (undefined8 *)(lVar19 + (long)in_RCX + 0x138);
              goto label_044623be;
            }
            SVar29 = (System_Nullable_bool__Fields)((long)SVar29 + 0x10);
          } while (in_RCX != SVar29);
        }
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446237c;
        puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar9,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        SVar24 = *(System_Nullable_bool__Fields *)(puVar14 + 1);
        pcVar4 = (code *)*puVar14;
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44623c7;
        SVar18 = SVar9;
        max = (float)(*pcVar4)();
        fVar34 = *(float *)((long)register0x00000020 + -0xd0);
        value = *(float *)((long)register0x00000020 + -0xcc);
        SVar25 = SVar32;
        if (SVar10 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xf0) = SVar28;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xf8) = SVar26;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x100) = SVar25;
  SVar10 = SVar18;
  if (g_data_057ae798 == '\0') {
    SVar10 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar19 = *(long *)((long)SVar18 + 0x10);
  if (lVar19 != 0) {
    SVar28 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0xe0);
    SVar25 = *(System_Nullable_bool__Fields *)(lVar19 + 0x28);
    if (SVar25 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x110) = *(undefined8 *)((long)register0x00000020 + -0xd0);
      *(undefined8 *)((long)register0x00000020 + -0x108) = *(undefined8 *)((long)register0x00000020 + -200);
      *(undefined8 *)((long)register0x00000020 + -0x120) = *(undefined8 *)SVar28;
      *(undefined8 *)((long)register0x00000020 + -0x118) = *(undefined8 *)((long)register0x00000020 + -0xd8);
label_0446256c:
      *(undefined8 *)((long)register0x00000020 + -0x130) = *(undefined8 *)((long)register0x00000020 + -0x110);
      *(undefined8 *)((long)register0x00000020 + -0x128) = *(undefined8 *)((long)register0x00000020 + -0x108);
      *(undefined8 *)((long)register0x00000020 + -0x140) = *(undefined8 *)((long)register0x00000020 + -0x120);
      *(undefined8 *)((long)register0x00000020 + -0x138) = *(undefined8 *)((long)register0x00000020 + -0x118);
      lVar19 = *(long *)(lVar19 + 0x88);
      if (lVar19 != 0) {
        uVar21 = *(undefined8 *)(lVar19 + 0x28);
        uVar5 = *(undefined8 *)(lVar19 + 0x40);
        *(undefined4 *)((long)register0x00000020 + -0x150) =
             *(undefined4 *)((long)register0x00000020 + -0x130);
        *(undefined4 *)((long)register0x00000020 + -0x14c) = *(undefined4 *)((long)register0x00000020 + -300);
        *(undefined4 *)((long)register0x00000020 + -0x148) =
             *(undefined4 *)((long)register0x00000020 + -0x128);
        *(undefined4 *)((long)register0x00000020 + -0x144) =
             *(undefined4 *)((long)register0x00000020 + -0x124);
        *(undefined4 *)((long)register0x00000020 + -0x160) =
             *(undefined4 *)((long)register0x00000020 + -0x140);
        *(undefined4 *)((long)register0x00000020 + -0x15c) =
             *(undefined4 *)((long)register0x00000020 + -0x13c);
        *(undefined4 *)((long)register0x00000020 + -0x158) =
             *(undefined4 *)((long)register0x00000020 + -0x138);
        *(undefined4 *)((long)register0x00000020 + -0x154) =
             *(undefined4 *)((long)register0x00000020 + -0x134);
        pcVar4 = *(code **)(lVar19 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x168) = 0x44625a7;
        (*pcVar4)(uVar5,uVar21);
      }
      return;
    }
    *(undefined4 *)((long)register0x00000020 + -0x130) = *(undefined4 *)((long)register0x00000020 + -0xd0);
    *(undefined4 *)((long)register0x00000020 + -300) = *(undefined4 *)((long)register0x00000020 + -0xcc);
    *(undefined4 *)((long)register0x00000020 + -0x128) = *(undefined4 *)((long)register0x00000020 + -200);
    *(undefined4 *)((long)register0x00000020 + -0x124) = *(undefined4 *)((long)register0x00000020 + -0xc4);
    *(undefined4 *)((long)register0x00000020 + -0x140) = *(undefined4 *)SVar28;
    *(undefined4 *)((long)register0x00000020 + -0x13c) = *(undefined4 *)((long)register0x00000020 + -0xdc);
    *(undefined4 *)((long)register0x00000020 + -0x138) = *(undefined4 *)((long)register0x00000020 + -0xd8);
    *(undefined4 *)((long)register0x00000020 + -0x134) = *(undefined4 *)((long)register0x00000020 + -0xd4);
    lVar19 = *(long *)SVar25;
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar19 + 0x12e) << 4);
      SVar30.hasValue = 0;
      SVar30.value = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + (long)SVar30) == TypeInfo_IAottgSettingAdapter) {
          in_RCX = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + (long)SVar30) + 0xb) * 0x10);
          puVar14 = (undefined8 *)(lVar19 + (long)in_RCX + 0x138);
          goto label_0446252f;
        }
        SVar30 = (System_Nullable_bool__Fields)((long)SVar30 + 0x10);
      } while (in_RCX != SVar30);
    }
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x44624fc;
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar25,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    SVar24 = *(System_Nullable_bool__Fields *)(puVar14 + 1);
    *(undefined4 *)((long)register0x00000020 + -0x150) = *(undefined4 *)((long)register0x00000020 + -0x130);
    *(undefined4 *)((long)register0x00000020 + -0x14c) = *(undefined4 *)((long)register0x00000020 + -300);
    *(undefined4 *)((long)register0x00000020 + -0x148) = *(undefined4 *)((long)register0x00000020 + -0x128);
    *(undefined4 *)((long)register0x00000020 + -0x144) = *(undefined4 *)((long)register0x00000020 + -0x124);
    *(undefined4 *)((long)register0x00000020 + -0x160) = *(undefined4 *)((long)register0x00000020 + -0x140);
    *(undefined4 *)((long)register0x00000020 + -0x15c) = *(undefined4 *)((long)register0x00000020 + -0x13c);
    *(undefined4 *)((long)register0x00000020 + -0x158) = *(undefined4 *)((long)register0x00000020 + -0x138);
    *(undefined4 *)((long)register0x00000020 + -0x154) = *(undefined4 *)((long)register0x00000020 + -0x134);
    pcVar4 = (code *)*puVar14;
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x446254b;
    SVar10 = SVar25;
    (*pcVar4)();
    lVar19 = *(long *)((long)SVar18 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x110) = *(undefined8 *)((long)register0x00000020 + -0xd0);
    *(undefined8 *)((long)register0x00000020 + -0x108) = *(undefined8 *)((long)register0x00000020 + -200);
    *(undefined4 *)((long)register0x00000020 + -0x120) = *(undefined4 *)SVar28;
    *(undefined4 *)((long)register0x00000020 + -0x11c) = *(undefined4 *)((long)register0x00000020 + -0xdc);
    *(undefined4 *)((long)register0x00000020 + -0x118) = *(undefined4 *)((long)register0x00000020 + -0xd8);
    *(undefined4 *)((long)register0x00000020 + -0x114) = *(undefined4 *)((long)register0x00000020 + -0xd4);
    if (lVar19 != 0) goto label_0446256c;
  }
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x168) = SVar9;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x170) = SVar28;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x178) = SVar18;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x180) = SVar25;
  SVar18 = SVar10;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar18 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar19 = *(long *)((long)SVar10 + 0x10);
  if (lVar19 == 0) {
label_04462728:
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x446272d;
    il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x1f0) = SVar9;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x1f8) = SVar28;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x200) = SVar10;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x208) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x210) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x218) = SVar25;
    SVar10 = SVar18;
    if (g_data_057ae79c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462759;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462765;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462771;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x446277d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462789;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462795;
      il2cpp_runtime_helper_023445d0(&"-value-button");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627a1;
      il2cpp_runtime_helper_023445d0(&"-slider");
      SVar10 = (System_Nullable_bool__Fields)&"0";
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627ad;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae79c = '\x01';
    }
    if (*(long *)((long)SVar18 + 0x10) != 0) {
      pSVar20 = *(System_String_o **)(*(long *)((long)SVar18 + 0x10) + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627d6;
      pSVar20 = System_String__Concat_3ae5ba0(pSVar20,"-slider",(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627e4;
      SVar25 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                         ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18,
                          (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar24,pSVar20,(MethodInfo *)in_RCX);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627f6;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000020 + -600) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x228) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x230) = 0x3f800000;
      *(undefined4 *)((long)register0x00000020 + -0x238) = 0x3f800000;
      *(undefined4 *)((long)register0x00000020 + -0x240) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x250) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462873;
      SVar10 = "Column";
      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar11,
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x270),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x268),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x260),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -600),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x250),
                           0.0,0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x248),
                           *(float *)((long)register0x00000020 + -0x240),
                           *(float *)((long)register0x00000020 + -0x238),
                           *(float *)((long)register0x00000020 + -0x230),
                           *(MethodInfo **)((long)register0x00000020 + -0x228));
      if (SVar25 != (System_Nullable_bool__Fields)0x0) {
        SVar10 = (System_Nullable_bool__Fields)((long)SVar25 + 0xd8);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar25 + 0xd8) = pGVar12;
        *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462895;
        il2cpp_runtime_helper_022b4080(SVar10,pGVar12);
        if (*(long *)((long)SVar18 + 0x10) != 0) {
          plVar6 = *(long **)(*(long *)((long)SVar18 + 0x10) + 0x28);
          if (plVar6 == (long *)0x0) {
            iVar7 = 4;
            pSVar20 = "0";
          }
          else {
            lVar19 = *plVar6;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar27 = 0;
              do {
                if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar27) == TypeInfo_IAottgSettingAdapter) {
                  puVar14 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar27) * 0x10 + lVar19 + 0x138);
                  goto label_04462936;
                }
                lVar27 = lVar27 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar27);
            }
            *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462909;
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
            iVar7 = (uint)(plVar6 != (long *)0x0) << 2;
            uVar21 = puVar14[1];
            pcVar4 = (code *)*puVar14;
            *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462943;
            pSVar20 = (System_String_o *)(*pcVar4)(plVar6,uVar21);
          }
          *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462955;
          SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
          *(undefined8 *)((long)register0x00000020 + -0x278) = 0x446296f;
          SVar10 = SVar9;
          System_Action_GisketchActionContext____ctor();
          SVar25 = SVar24;
          if (*(long *)((long)SVar18 + 0x10) != 0) {
            SVar10 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar18 + 0x10) + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462991;
            pSVar16 = System_String__Concat_3ae5ba0((System_String_o *)SVar10,"-value-button",(MethodInfo *)0x0);
            if (SVar24 != (System_Nullable_bool__Fields)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44629c1;
              SVar10 = SVar24;
              SVar25 = (System_Nullable_bool__Fields)
                       Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                 ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar24,iVar7,pSVar20,
                                  (System_Action_GisketchActionContext__o *)SVar9,pSVar16,
                                  (System_String_o *)0x0,
                                  *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                                   ((long)register0x00000020 + -0x270),
                                  *(System_String_o **)((long)register0x00000020 + -0x268),
                                  *(MethodInfo **)((long)register0x00000020 + -0x260));
              if (*(long *)((long)SVar18 + 0x10) != 0) {
                cVar1 = *(char *)(*(long *)((long)SVar18 + 0x10) + 0x58);
                *(undefined2 *)((long)register0x00000020 + -0x21a) = 0;
                SVar10 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0x21a);
                *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44629f6;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o)SVar10,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
                if (SVar25 != (System_Nullable_bool__Fields)0x0) {
                  *(undefined2 *)((long)SVar25 + 0x6b) = *(undefined2 *)((long)register0x00000020 + -0x21a);
                  *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462a1e;
                  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                  *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
                  *(undefined8 *)((long)register0x00000020 + -600) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x228) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x230) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x238) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x240) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x248) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x250) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462a95;
                  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ((System_String_o *)"Column",(System_String_o *)0x0,
                                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                       0.0,pGVar11,
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x270),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x268),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x260),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -600),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x250),0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                       *(float *)((long)register0x00000020 + -0x248),
                                       *(float *)((long)register0x00000020 + -0x240),
                                       *(float *)((long)register0x00000020 + -0x238),
                                       *(float *)((long)register0x00000020 + -0x230),
                                       *(MethodInfo **)((long)register0x00000020 + -0x228));
                  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar25 + 0xd8) = pGVar12;
                  *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462aae;
                  il2cpp_runtime_helper_022b4080((long)SVar25 + 0xd8,pGVar12);
                  return;
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462ac2;
    uVar21 = il2cpp_runtime_helper_022b2c90();
    lVar19 = *(long *)((long)SVar10 + 0x10);
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x278) = SVar24;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x280) = SVar25;
    *(undefined8 *)((long)register0x00000020 + -0x288) = uVar21;
    if (g_data_057ae7ad == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462afc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b14;
      il2cpp_runtime_helper_023445d0(&"setting-slider-value");
      g_data_057ae7ad = '\x01';
    }
    if (((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) && (*(char *)(lVar19 + 0x58) == '\0')) {
      **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar19;
      uVar21 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b60;
      il2cpp_runtime_helper_022b4080(uVar21,lVar19);
      if (*(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x260) != (UnityEngine_GameObject_o *)0x0
         ) {
        *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b78;
        pIVar22 = UnityEngine_GameObject__GetComponentInParent_object_
                            (*(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if ((pIVar22 != (Il2CppObject *)0x0) &&
           (pIVar22[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar22[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  SVar9 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0x158);
  SVar25 = *(System_Nullable_bool__Fields *)(lVar19 + 0x28);
  if (SVar25 == (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x1b8) = *(undefined8 *)((long)register0x00000020 + -0x148);
    *(undefined8 *)((long)register0x00000020 + -0x1b0) = *(undefined8 *)((long)register0x00000020 + -0x140);
    *(undefined8 *)((long)register0x00000020 + -0x1c8) = *(undefined8 *)SVar9;
    *(undefined8 *)((long)register0x00000020 + -0x1c0) = *(undefined8 *)((long)register0x00000020 + -0x150);
  }
  else {
    if (*(long *)((long)register0x00000020 + -0x148) == 0) {
      SVar28.hasValue = 0;
      SVar28.value = 0;
    }
    else {
      pSVar20 = *(System_String_o **)(*(long *)((long)register0x00000020 + -0x148) + 0x50);
      *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x4462631;
      uVar8 = System_String__op_Equality(pSVar20,"true",(MethodInfo *)0x0);
      SVar28.value = 0;
      SVar28.hasValue = uVar8;
    }
    lVar19 = *(long *)SVar25;
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar19 + 0x12e) << 4);
      SVar31.hasValue = 0;
      SVar31.value = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + (long)SVar31) == TypeInfo_IAottgSettingAdapter) {
          in_RCX = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + (long)SVar31) + 8) * 0x10);
          puVar14 = (undefined8 *)(lVar19 + (long)in_RCX + 0x138);
          goto label_044626b5;
        }
        SVar31 = (System_Nullable_bool__Fields)((long)SVar31 + 0x10);
      } while (in_RCX != SVar31);
    }
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x446269c;
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar25,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
    uVar21 = puVar14[1];
    SVar24 = (System_Nullable_bool__Fields)((ulong)SVar28 & 0xff);
    pcVar4 = (code *)*puVar14;
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x44626c2;
    SVar18 = SVar25;
    (*pcVar4)(SVar25,SVar24,uVar21);
    lVar19 = *(long *)((long)SVar10 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x1b8) = *(undefined8 *)((long)register0x00000020 + -0x148);
    *(undefined8 *)((long)register0x00000020 + -0x1b0) = *(undefined8 *)((long)register0x00000020 + -0x140);
    *(undefined4 *)((long)register0x00000020 + -0x1c8) = *(undefined4 *)SVar9;
    *(undefined4 *)((long)register0x00000020 + -0x1c4) = *(undefined4 *)((long)register0x00000020 + -0x154);
    *(undefined4 *)((long)register0x00000020 + -0x1c0) = *(undefined4 *)((long)register0x00000020 + -0x150);
    *(undefined4 *)((long)register0x00000020 + -0x1bc) = *(undefined4 *)((long)register0x00000020 + -0x14c);
    if (lVar19 == 0) goto label_04462728;
  }
  *(undefined8 *)((long)register0x00000020 + -0x198) = *(undefined8 *)((long)register0x00000020 + -0x1b8);
  *(undefined8 *)((long)register0x00000020 + -400) = *(undefined8 *)((long)register0x00000020 + -0x1b0);
  *(undefined8 *)((long)register0x00000020 + -0x1a8) = *(undefined8 *)((long)register0x00000020 + -0x1c8);
  *(undefined8 *)((long)register0x00000020 + -0x1a0) = *(undefined8 *)((long)register0x00000020 + -0x1c0);
  lVar19 = *(long *)(lVar19 + 0x88);
  if (lVar19 != 0) {
    uVar21 = *(undefined8 *)(lVar19 + 0x28);
    uVar5 = *(undefined8 *)(lVar19 + 0x40);
    *(undefined4 *)((long)register0x00000020 + -0x1d8) = *(undefined4 *)((long)register0x00000020 + -0x198);
    *(undefined4 *)((long)register0x00000020 + -0x1d4) = *(undefined4 *)((long)register0x00000020 + -0x194);
    *(undefined4 *)((long)register0x00000020 + -0x1d0) = *(undefined4 *)((long)register0x00000020 + -400);
    *(undefined4 *)((long)register0x00000020 + -0x1cc) = *(undefined4 *)((long)register0x00000020 + -0x18c);
    *(undefined4 *)((long)register0x00000020 + -0x1e8) = *(undefined4 *)((long)register0x00000020 + -0x1a8);
    *(undefined4 *)((long)register0x00000020 + -0x1e4) = *(undefined4 *)((long)register0x00000020 + -0x1a4);
    *(undefined4 *)((long)register0x00000020 + -0x1e0) = *(undefined4 *)((long)register0x00000020 + -0x1a0);
    *(undefined4 *)((long)register0x00000020 + -0x1dc) = *(undefined4 *)((long)register0x00000020 + -0x19c);
    pcVar4 = *(code **)(lVar19 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x446271d;
    (*pcVar4)(uVar5,uVar21);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, System_String_o* id, const MethodInfo* method);
// 0x44620c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
          Gisketch_Aottg2UI_Code_AottgUi_o *control,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  long *plVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  System_Nullable_bool__Fields SVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  long lVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  System_Nullable_bool__Fields SVar15;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields control_00;
  System_Nullable_bool__Fields SVar16;
  long lVar17;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields unaff_R12;
  int32_t variant;
  System_String_o *unaff_R13;
  bool bVar19;
  float min;
  float max;
  float value;
  UnityEngine_GameObject_o *in_stack_fffffffffffffe30;
  undefined2 local_18a;
  System_Nullable_bool__Fields SStack_188;
  System_Nullable_bool__Fields SStack_180;
  System_String_o *pSStack_178;
  System_Nullable_bool__Fields SStack_170;
  System_Nullable_bool__Fields SStack_168;
  System_Nullable_bool__Fields SStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  System_Nullable_bool__Fields SStack_f0;
  System_Nullable_bool__Fields SStack_e8;
  System_Nullable_bool__Fields SStack_e0;
  System_Nullable_bool__Fields SStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  bool_conflict bStack_b8;
  bool_conflict bStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  System_Nullable_bool__Fields SStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  System_Nullable_bool__Fields SStack_78;
  System_Nullable_bool__Fields SStack_70;
  System_Nullable_bool__Fields SStack_68;
  System_Nullable_bool__Fields SStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  float local_40;
  float fStack_3c;
  System_Nullable_bool__Fields SStack_38;
  
  control_00 = (System_Nullable_bool__Fields)control;
  SVar16 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae794 == '\0') {
    SStack_60.hasValue = 0x44620ec;
    SStack_60.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    SStack_60.hasValue = 0x44620f8;
    SStack_60.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    SStack_60.hasValue = 0x4462104;
    SStack_60.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SStack_60.hasValue = 0x4462110;
    SStack_60.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar16 = (System_Nullable_bool__Fields)&"slider";
    SStack_60.hasValue = 0x446211c;
    SStack_60.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  SVar15 = (System_Nullable_bool__Fields)control;
  SStack_68 = (System_Nullable_bool__Fields)id;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    unaff_RBX = (System_Nullable_bool__Fields)(pGVar1->fields).Adapter;
    if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
      local_40 = 0.0;
    }
    else {
      lVar11 = *(long *)unaff_RBX;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar17) == TypeInfo_IAottgSettingAdapter) {
            puVar8 = (undefined8 *)
                     (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar17) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar17);
      }
      SStack_60.hasValue = 0x446219c;
      SStack_60.value = 0;
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      SStack_60.hasValue = 0x44621cf;
      SStack_60.value = 0;
      local_40 = (float)(*(code *)*puVar8)(unaff_RBX,puVar8[1]);
    }
    SStack_60.hasValue = 0x44621e4;
    SStack_60.value = 0;
    SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    SStack_60.hasValue = 0x44621fe;
    SStack_60.value = 0;
    control_00 = (System_Nullable_bool__Fields)__this;
    SVar16 = SVar9;
    System_Action_GisketchActionContext____ctor();
    SVar18 = "slider";
    method = (MethodInfo *)(__this->fields)._descriptor;
    SVar15 = SVar9;
    unaff_R12 = (System_Nullable_bool__Fields)control;
    unaff_R13 = id;
    if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
      unaff_RBX = *(System_Nullable_bool__Fields *)((long)method + 0x28);
      min = 0.0;
      value = local_40;
      SStack_38 = (System_Nullable_bool__Fields)__this;
      if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
        lVar11 = *(long *)unaff_RBX;
        fStack_3c = local_40;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar17) == TypeInfo_IAottgSettingAdapter) {
              puVar8 = (undefined8 *)
                       (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar17) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar17);
        }
        SStack_60.hasValue = 0x446229c;
        SStack_60.value = 0;
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control_00 = *(System_Nullable_bool__Fields *)(puVar8 + 1);
        SStack_60.hasValue = 0x44622c3;
        SStack_60.value = 0;
        SVar16 = unaff_RBX;
        min = (float)(*(code *)*puVar8)();
        method = *(MethodInfo **)((long)SStack_38 + 0x10);
        unaff_R12 = SVar9;
        SStack_68 = (System_Nullable_bool__Fields)control;
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18;
        value = fStack_3c;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
      }
      unaff_R12 = SStack_38;
      SVar15 = *(System_Nullable_bool__Fields *)((long)method + 0x28);
      SStack_68 = SVar9;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)control;
      if (SVar15 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          unaff_RBX.hasValue = 0;
          unaff_RBX.value = 0;
          control_00 = (System_Nullable_bool__Fields)id;
        }
        else {
label_044623de:
          SStack_60.hasValue = 0x44623fc;
          SStack_60.value = 0;
          method = (MethodInfo *)SVar9;
          control_00 = (System_Nullable_bool__Fields)id;
          SVar16 = (System_Nullable_bool__Fields)control;
          unaff_RBX = (System_Nullable_bool__Fields)
                      Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                                (control,id,value,0,(System_Action_GisketchActionContext__o *)SVar9,
                                 (System_String_o *)SVar18,min,max,
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (*(long *)((long)unaff_R12 + 0x10) != 0) {
            bVar19 = *(char *)(*(long *)((long)unaff_R12 + 0x10) + 0x58) == '\0';
            uStack_42 = 0;
            control_00._1_7_ = 0;
            control_00.hasValue._0_1_ = bVar19;
            SVar16 = (System_Nullable_bool__Fields)&uStack_42;
            SStack_60.hasValue = 0x446242e;
            SStack_60.value = 0;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar16,(uint)bVar19,MethodInfo_Nullable_1_Boolean);
            if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)unaff_RBX + 0x6b) = uStack_42;
              return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_RBX;
            }
          }
        }
      }
      else {
        lVar11 = *(long *)SVar15;
        method._0_4_ = 0;
        method._4_4_ = 0;
        local_40 = min;
        fStack_3c = value;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          method = (MethodInfo *)((ulong)*(ushort *)(lVar11 + 0x12e) << 4);
          SVar16.hasValue = 0;
          SVar16.value = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + (long)SVar16) == TypeInfo_IAottgSettingAdapter) {
              method = (MethodInfo *)
                       ((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + (long)SVar16) + 4) * 0x10);
              puVar8 = (undefined8 *)(lVar11 + (long)method + 0x138);
              goto label_044623be;
            }
            SVar16 = (System_Nullable_bool__Fields)((long)SVar16 + 0x10);
          } while ((System_Nullable_bool__Fields)method != SVar16);
        }
        SStack_60.hasValue = 0x446237c;
        SStack_60.value = 0;
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar15,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control_00 = *(System_Nullable_bool__Fields *)(puVar8 + 1);
        SStack_60.hasValue = 0x44623c7;
        SStack_60.value = 0;
        SVar16 = SVar15;
        max = (float)(*(code *)*puVar8)();
        unaff_RBX = SVar18;
        value = fStack_3c;
        min = local_40;
        if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  SStack_60.hasValue = 0x4462453;
  SStack_60.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar18 = SVar16;
  SStack_70 = unaff_RBX;
  SStack_60 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae798 == '\0') {
    SVar18 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    SStack_d8.hasValue = 0x4462481;
    SStack_d8.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar11 = *(long *)((long)SVar16 + 0x10);
  if (lVar11 != 0) {
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&local_50;
    unaff_RBX = *(System_Nullable_bool__Fields *)(lVar11 + 0x28);
    if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
      local_90 = local_50;
      uStack_8c = uStack_4c;
      uStack_88 = CONCAT26(uStack_42,CONCAT24(uStack_44,uStack_48));
      local_80 = CONCAT44(fStack_3c,local_40);
label_0446256c:
      local_a0 = local_80;
      uVar4 = local_a0;
      SStack_98 = SStack_38;
      SVar16 = SStack_98;
      uStack_a8 = uStack_88;
      uVar3 = uStack_a8;
      lVar11 = *(long *)(lVar11 + 0x88);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (lVar11 != 0) {
        uStack_a8._0_4_ = (undefined4)uStack_88;
        uStack_a8._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
        local_a0._0_4_ = (undefined4)local_80;
        local_a0._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
        SStack_98.hasValue = SStack_38.hasValue;
        SStack_98.value = SStack_38.value;
        local_c0 = (undefined4)local_a0;
        uStack_bc = local_a0._4_4_;
        bStack_b8 = SStack_98.hasValue;
        bStack_b4 = SStack_98.value;
        local_d0 = local_90;
        uStack_cc = uStack_8c;
        uStack_c8 = (undefined4)uStack_a8;
        uStack_c4 = uStack_a8._4_4_;
        SStack_d8.hasValue = 0x44625a7;
        SStack_d8.value = 0;
        uStack_a8 = uVar3;
        local_a0 = uVar4;
        SStack_98 = SVar16;
        SStack_78 = SStack_38;
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
      return pGVar10;
    }
    local_a0 = CONCAT44(fStack_3c,local_40);
    SStack_98 = SStack_38;
    local_b0 = CONCAT44(uStack_4c,local_50);
    uStack_a8 = CONCAT44(CONCAT22(uStack_42,uStack_44),uStack_48);
    lVar11 = *(long *)unaff_RBX;
    method._0_4_ = 0;
    method._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      method = (MethodInfo *)((ulong)*(ushort *)(lVar11 + 0x12e) << 4);
      SVar18.hasValue = 0;
      SVar18.value = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + (long)SVar18) == TypeInfo_IAottgSettingAdapter) {
          method = (MethodInfo *)((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + (long)SVar18) + 0xb) * 0x10);
          puVar8 = (undefined8 *)(lVar11 + (long)method + 0x138);
          goto label_0446252f;
        }
        SVar18 = (System_Nullable_bool__Fields)((long)SVar18 + 0x10);
      } while ((System_Nullable_bool__Fields)method != SVar18);
    }
    SStack_d8.hasValue = 0x44624fc;
    SStack_d8.value = 0;
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control_00 = *(System_Nullable_bool__Fields *)(puVar8 + 1);
    local_c0 = (undefined4)local_a0;
    uStack_bc = local_a0._4_4_;
    bStack_b8 = SStack_98.hasValue;
    bStack_b4 = SStack_98.value;
    local_d0 = (undefined4)local_b0;
    uStack_cc = local_b0._4_4_;
    uStack_c8 = (undefined4)uStack_a8;
    uStack_c4 = uStack_a8._4_4_;
    SStack_d8.hasValue = 0x446254b;
    SStack_d8.value = 0;
    SVar18 = unaff_RBX;
    (*(code *)*puVar8)();
    lVar11 = *(long *)((long)SVar16 + 0x10);
    local_80 = CONCAT44(fStack_3c,local_40);
    SStack_78 = SStack_38;
    local_90 = local_50;
    uStack_8c = uStack_4c;
    uStack_88 = CONCAT44(CONCAT22(uStack_42,uStack_44),uStack_48);
    if (lVar11 != 0) goto label_0446256c;
  }
  SStack_d8.hasValue = 0x44625b6;
  SStack_d8.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar9 = SVar18;
  SStack_f0 = unaff_RBX;
  SStack_e8 = SVar16;
  SStack_e0 = (System_Nullable_bool__Fields)__this;
  SStack_d8 = SVar15;
  if (g_data_057ae79b == '\0') {
    SStack_160.hasValue = 0x44625e2;
    SStack_160.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar9 = (System_Nullable_bool__Fields)&"true";
    SStack_160.hasValue = 0x44625ee;
    SStack_160.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar11 = *(long *)((long)SVar18 + 0x10);
  if (lVar11 == 0) {
label_04462728:
    SStack_160.hasValue = 0x446272d;
    SStack_160.value = 0;
    il2cpp_runtime_helper_022b2c90();
    SVar16 = SVar9;
    SStack_188 = unaff_RBX;
    SStack_180 = unaff_R12;
    pSStack_178 = unaff_R13;
    SStack_170 = SVar18;
    SStack_168 = (System_Nullable_bool__Fields)__this;
    SStack_160 = SVar15;
    if (g_data_057ae79c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"-value-button");
      il2cpp_runtime_helper_023445d0(&"-slider");
      SVar16 = (System_Nullable_bool__Fields)&"0";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae79c = '\x01';
    }
    if (*(long *)((long)SVar9 + 0x10) != 0) {
      pSVar12 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)(*(long *)((long)SVar9 + 0x10) + 0x10),"-slider",
                           (MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                          ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar9,
                           (Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,pSVar12,method);
      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffe30 = (UnityEngine_GameObject_o *)0x0;
      SVar16 = "Column";
      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar13,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           1.0,1.0,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        SVar16 = (System_Nullable_bool__Fields)&(pGVar10->fields).search;
        (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar14;
        il2cpp_runtime_helper_022b4080(SVar16,pGVar14);
        if (*(long *)((long)SVar9 + 0x10) != 0) {
          plVar2 = *(long **)(*(long *)((long)SVar9 + 0x10) + 0x28);
          if (plVar2 == (long *)0x0) {
            variant = 4;
            pSVar12 = "0";
          }
          else {
            lVar11 = *plVar2;
            if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar17) == TypeInfo_IAottgSettingAdapter) {
                  puVar8 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar17) * 0x10 + lVar11 + 0x138);
                  goto label_04462936;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar17);
            }
            puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
            variant = (uint)(plVar2 != (long *)0x0) << 2;
            pSVar12 = (System_String_o *)(*(code *)*puVar8)(plVar2,puVar8[1]);
          }
          SVar15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
          SVar16 = SVar15;
          System_Action_GisketchActionContext____ctor();
          if (*(long *)((long)SVar9 + 0x10) != 0) {
            SVar16 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar9 + 0x10) + 0x10);
            id_00 = System_String__Concat_3ae5ba0((System_String_o *)SVar16,"-value-button",(MethodInfo *)0x0);
            if (control_00 != (System_Nullable_bool__Fields)0x0) {
              in_stack_fffffffffffffe30 = (UnityEngine_GameObject_o *)0x0;
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,variant,pSVar12,
                                   (System_Action_GisketchActionContext__o *)SVar15,id_00,
                                   (System_String_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                   (System_String_o *)0x0,(MethodInfo *)0x0);
              SVar16 = control_00;
              if (*(long *)((long)SVar9 + 0x10) != 0) {
                local_18a = 0;
                SVar16 = (System_Nullable_bool__Fields)&local_18a;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o)SVar16,
                           (uint)(*(char *)(*(long *)((long)SVar9 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
                if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  *(undefined2 *)((long)&(pGVar10->fields).hasIcon + 3) = local_18a;
                  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                  pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ((System_String_o *)"Column",(System_String_o *)0x0,
                                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                       0.0,pGVar13,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                       0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                  (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar14;
                  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                            il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar14);
                  return pGVar10;
                }
              }
            }
          }
        }
      }
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_022b2c90();
    lVar11 = *(long *)((long)SVar16 + 0x10);
    if (g_data_057ae7ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023445d0(&"setting-slider-value");
      g_data_057ae7ad = '\x01';
    }
    if (((lVar11 != 0) && (*(long *)(lVar11 + 0x28) != 0)) && (*(char *)(lVar11 + 0x58) == '\0')) {
      **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar11;
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar11);
      if (((in_stack_fffffffffffffe30 != (UnityEngine_GameObject_o *)0x0) &&
          (pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     UnityEngine_GameObject__GetComponentInParent_object_
                               (in_stack_fffffffffffffe30,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
          pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
         (__this_00 = *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)
                       &(pGVar10->fields).min.fields.value,
         __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this_00,"setting-slider-value",1,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
    return pGVar10;
  }
  SVar15 = (System_Nullable_bool__Fields)&uStack_c8;
  unaff_RBX = *(System_Nullable_bool__Fields *)(lVar11 + 0x28);
  if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
    local_138 = CONCAT44(uStack_c4,uStack_c8);
    uStack_130 = CONCAT44(uStack_bc,local_c0);
    local_128 = CONCAT44(bStack_b4,bStack_b8);
  }
  else {
    if (CONCAT44(bStack_b4,bStack_b8) == 0) {
      __this._0_4_ = 0;
      __this._4_4_ = 0;
    }
    else {
      SStack_160.hasValue = 0x4462631;
      SStack_160.value = 0;
      uVar7 = System_String__op_Equality
                        (*(System_String_o **)(CONCAT44(bStack_b4,bStack_b8) + 0x50),"true",
                         (MethodInfo *)0x0);
      __this._4_4_ = 0;
      __this._0_4_ = uVar7;
    }
    lVar11 = *(long *)unaff_RBX;
    method._0_4_ = 0;
    method._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      method = (MethodInfo *)((ulong)*(ushort *)(lVar11 + 0x12e) << 4);
      SVar9.hasValue = 0;
      SVar9.value = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + (long)SVar9) == TypeInfo_IAottgSettingAdapter) {
          method = (MethodInfo *)((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + (long)SVar9) + 8) * 0x10);
          puVar8 = (undefined8 *)(lVar11 + (long)method + 0x138);
          goto label_044626b5;
        }
        SVar9 = (System_Nullable_bool__Fields)((long)SVar9 + 0x10);
      } while ((System_Nullable_bool__Fields)method != SVar9);
    }
    SStack_160.hasValue = 0x446269c;
    SStack_160.value = 0;
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
    control_00 = (System_Nullable_bool__Fields)((ulong)__this & 0xff);
    SStack_160.hasValue = 0x44626c2;
    SStack_160.value = 0;
    SVar9 = unaff_RBX;
    (*(code *)*puVar8)(unaff_RBX,control_00,puVar8[1]);
    lVar11 = *(long *)((long)SVar18 + 0x10);
    local_128 = CONCAT44(bStack_b4,bStack_b8);
    uStack_120 = local_b0;
    local_138 = CONCAT44(uStack_c4,uStack_c8);
    uStack_130 = CONCAT44(uStack_bc,local_c0);
    if (lVar11 == 0) goto label_04462728;
  }
  local_108 = local_128;
  uVar5 = local_108;
  uStack_100 = local_b0;
  uVar6 = uStack_100;
  local_118 = local_138;
  uVar3 = local_118;
  uStack_110 = uStack_130;
  uVar4 = uStack_110;
  lVar11 = *(long *)(lVar11 + 0x88);
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (lVar11 != 0) {
    local_118._0_4_ = (undefined4)local_138;
    local_118._4_4_ = (undefined4)((ulong)local_138 >> 0x20);
    uStack_110._0_4_ = (undefined4)uStack_130;
    uStack_110._4_4_ = (undefined4)((ulong)uStack_130 >> 0x20);
    local_108._0_4_ = (undefined4)local_128;
    local_108._4_4_ = (undefined4)((ulong)local_128 >> 0x20);
    uStack_100._0_4_ = (undefined4)local_b0;
    uStack_100._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
    local_148 = (undefined4)local_108;
    uStack_144 = local_108._4_4_;
    uStack_140 = (undefined4)uStack_100;
    uStack_13c = uStack_100._4_4_;
    local_158 = (undefined4)local_118;
    uStack_154 = local_118._4_4_;
    uStack_150 = (undefined4)uStack_110;
    uStack_14c = uStack_110._4_4_;
    SStack_160.hasValue = 0x446271d;
    SStack_160.value = 0;
    local_118 = uVar3;
    uStack_110 = uVar4;
    local_108 = uVar5;
    uStack_100 = uVar6;
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
  }
  return pGVar10;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildInput
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x4461710

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  uint type;
  int32_t iVar8;
  uint uVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  undefined8 *puVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  System_Nullable_bool__Fields SVar14;
  System_String_o *pSVar15;
  System_Nullable_bool__Fields SVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields SVar19;
  long lVar20;
  System_String_o *pSVar21;
  undefined8 uVar22;
  Il2CppObject *pIVar23;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields SVar24;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields SVar25;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar26;
  undefined1 *puVar27;
  System_Nullable_bool__Fields SVar28;
  long lVar29;
  System_Nullable_bool__Fields SVar30;
  System_Nullable_bool__Fields SVar31;
  System_Nullable_bool__Fields SVar32;
  System_Nullable_bool__Fields SVar33;
  System_Nullable_bool__Fields SVar34;
  System_Nullable_bool__Fields SVar35;
  System_Nullable_bool__Fields unaff_R12;
  System_Nullable_bool__Fields SVar36;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  bool bVar37;
  float fVar38;
  undefined4 uVar39;
  float max;
  float value;
  undefined1 auStack_58 [4];
  uint uStack_54;
  float fStack_50;
  uint uStack_4c;
  System_String_o *pSStack_48;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGStack_38;
  
  puVar27 = auStack_58;
  SVar14 = (System_Nullable_bool__Fields)control;
  SVar28 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae795 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"inputField");
    SVar28 = (System_Nullable_bool__Fields)&"-input";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae795 = '\x01';
  }
  pGVar3 = (__this->fields)._descriptor;
  SVar35 = (System_Nullable_bool__Fields)__this;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pGVar4 = (pGVar3->fields).Adapter;
    if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      uStack_54 = 1;
    }
    else {
      uStack_54 = (uint)(pGVar4->klass != TypeInfo_AottgStringSettingAdapter);
    }
    unaff_R12 = (System_Nullable_bool__Fields)
                System_String__Concat_3ae5ba0((pGVar3->fields).Id,"-input",(MethodInfo *)0x0);
    unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    fStack_50 = 0.0;
    unaff_RBX = (System_Nullable_bool__Fields)
                Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar11,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
    unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    SVar14 = (System_Nullable_bool__Fields)__this;
    SVar28 = unaff_R14;
    System_Action_GisketchActionContext____ctor();
    pGVar3 = (__this->fields)._descriptor;
    pGStack_38 = __this;
    if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      SVar35 = (System_Nullable_bool__Fields)(pGVar3->fields).Adapter;
      fVar38 = 0.05;
      bVar37 = SVar35 == (System_Nullable_bool__Fields)0x0;
      SVar19 = unaff_R13;
      SVar30 = unaff_R12;
      SVar36 = (System_Nullable_bool__Fields)control;
      if (bVar37) {
        SVar19.hasValue = 0;
        SVar19.value = 0;
        SVar30 = SVar35;
        SVar36 = SVar35;
      }
      SVar14.value = 0;
      SVar14.hasValue = uStack_54;
      SVar26 = unaff_R14;
      SVar24 = unaff_RBX;
      pSVar21 = "inputField";
      uVar9 = uStack_54;
      if (bVar37) {
        SVar26.hasValue = 0;
        SVar26.value = 0;
        pSVar21 = (System_String_o *)0x0;
        SVar24 = SVar35;
        uVar9 = 0;
      }
      iVar8 = 0;
      SVar25 = unaff_R14;
      SVar28 = unaff_R12;
      SVar16 = unaff_RBX;
      type = uStack_54;
      pSVar15 = "inputField";
      pGStack_40 = control;
      if (!bVar37) {
        fStack_50 = 0.05;
        lVar20 = *(long *)SVar35;
        uStack_4c = uVar9;
        pSStack_48 = pSVar21;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
          lVar29 = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
              puVar12 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar29) + 7) * 0x10 + lVar20 + 0x138);
              goto label_044619df;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar29);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar35,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
        SVar14 = *(System_Nullable_bool__Fields *)(puVar12 + 1);
        SVar28 = SVar35;
        iVar8 = (*(code *)*puVar12)();
        SVar25 = SVar26;
        unaff_R13 = SVar19;
        unaff_R12 = SVar30;
        control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar36;
        SVar16 = SVar24;
        unaff_R14 = SVar24;
        fVar38 = fStack_50;
        type = uStack_4c;
        pSVar15 = pSStack_48;
      }
      unaff_RBX = SVar25;
      in_RCX.value = 0;
      in_RCX.hasValue = type;
      if ((System_Nullable_bool__Fields)control != (System_Nullable_bool__Fields)0x0) {
        SVar14 = unaff_R12;
        SVar28 = (System_Nullable_bool__Fields)control;
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                            (control,(System_String_o *)unaff_R12,(System_String_o *)unaff_R13,type,pSVar15,
                             (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar16,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                             (System_Action_GisketchActionContext__o *)unaff_RBX,fVar38,iVar8,
                             (MethodInfo *)0x0);
        pGVar3 = (pGStack_38->fields)._descriptor;
        in_RCX.hasValue = 0;
        in_RCX.value = 0;
        if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          SVar35 = (System_Nullable_bool__Fields)(pGVar3->fields).Adapter;
          if (SVar35 == (System_Nullable_bool__Fields)0x0) {
            in_RCX = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
            SVar14 = *(System_Nullable_bool__Fields *)in_RCX;
          }
          else {
            lVar20 = *(long *)SVar35;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar29 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                  in_RCX = (System_Nullable_bool__Fields)
                           ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar29) * 0x10 + lVar20 + 0x138);
                  goto label_04461ac3;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar29);
            }
            in_RCX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(SVar35,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
            SVar28 = SVar35;
            SVar14 = (System_Nullable_bool__Fields)
                     (*(code *)*(System_Nullable_bool__Fields *)in_RCX)
                               (SVar35,*(System_Nullable_bool__Fields *)((long)in_RCX + 8));
          }
          unaff_RBX.hasValue = 0;
          unaff_RBX.value = 0;
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar13->fields).value = (System_String_o *)SVar14;
            il2cpp_runtime_helper_022b4080(&(pGVar13->fields).value);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar36 = SVar14;
  SVar30 = SVar28;
  SVar19 = unaff_RBX;
  if (g_data_057ae796 == '\0') {
    SVar30 = (System_Nullable_bool__Fields)&"-button";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae796 = '\x01';
  }
  lVar20 = *(long *)((long)SVar28 + 0x10);
  if (lVar20 == 0) {
label_04461c07:
    il2cpp_runtime_helper_022b2c90();
    puVar27 = &stack0xfffffffffffffef8;
    SVar24 = in_RCX;
    SVar16 = SVar36;
    SVar28 = SVar30;
    if (g_data_057ae797 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"text");
      SVar28 = (System_Nullable_bool__Fields)&"-value";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae797 = '\x01';
      SVar24 = in_RCX;
    }
    lVar20 = *(long *)((long)SVar30 + 0x10);
    if (lVar20 != 0) {
      unaff_RBX = *(System_Nullable_bool__Fields *)(lVar20 + 0x80);
      if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
        SVar14 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
        if (SVar14 == (System_Nullable_bool__Fields)0x0) {
          SVar24 = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
          unaff_RBX = *(System_Nullable_bool__Fields *)SVar24;
          unaff_R13.hasValue = 0;
          unaff_R13.value = 0;
        }
        else {
          lVar20 = *(long *)SVar14;
          if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
            lVar29 = 0;
            do {
              if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                SVar24 = (System_Nullable_bool__Fields)
                         ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar29) * 0x10 + lVar20 + 0x138);
                goto label_04461d0b;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar29);
          }
          SVar24 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(SVar14,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
          SVar16 = *(System_Nullable_bool__Fields *)((long)SVar24 + 8);
          SVar28 = SVar14;
          unaff_RBX = (System_Nullable_bool__Fields)(*(code *)*(System_Nullable_bool__Fields *)SVar24)();
          lVar20 = *(long *)((long)SVar30 + 0x10);
          unaff_R13 = SVar36;
          if (lVar20 == 0) goto label_04461e40;
        }
      }
      SVar28 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
      SVar16 = "-value";
      pSVar21 = System_String__Concat_3ae5ba0
                          ((System_String_o *)SVar28,(System_String_o *)"-value",(MethodInfo *)0x0);
      if (SVar36 != (System_Nullable_bool__Fields)0x0) {
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Text
                            ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar36,(System_String_o *)unaff_RBX,
                             "text",pSVar21,(System_String_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        SVar30 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0)
        ;
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        SVar16.hasValue = 0;
        SVar16.value = 0;
        SVar24.hasValue = 0;
        SVar24.value = 0;
        SVar28 = "Column";
        pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar30,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar10,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        unaff_RBX.hasValue = 0;
        unaff_RBX.value = 0;
        if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar13->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar17;
          il2cpp_runtime_helper_022b4080(&(pGVar13->fields).search,pGVar17);
          return;
        }
      }
    }
label_04461e40:
    uVar39 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar21 = *(System_String_o **)(lVar20 + 0x68);
    SVar24 = *(System_Nullable_bool__Fields *)(lVar20 + 0x78);
    SVar36 = "-button";
    if (SVar24 == (System_Nullable_bool__Fields)0x0) {
      if (pSVar21 == (System_String_o *)0x0) {
        pSVar21 = *(System_String_o **)(lVar20 + 0x18);
      }
      SVar30 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
      SVar24 = *(System_Nullable_bool__Fields *)(lVar20 + 0x70);
      pSVar15 = System_String__Concat_3ae5ba0
                          ((System_String_o *)SVar30,(System_String_o *)"-button",(MethodInfo *)0x0);
      unaff_RBX = SVar24;
      if (SVar14 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
      SVar16 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_Code_AottgUi__Button
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,1,pSVar21,(System_String_o *)SVar24,
                          pSVar15,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      unaff_RBX = SVar19;
      SVar36 = unaff_R12;
      SVar30 = unaff_R14;
      SVar14 = (System_Nullable_bool__Fields)control;
    }
    else {
      if (pSVar21 == (System_String_o *)0x0) {
        pSVar21 = *(System_String_o **)(lVar20 + 0x18);
      }
      SVar30 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
      pSVar15 = System_String__Concat_3ae5ba0
                          ((System_String_o *)SVar30,(System_String_o *)"-button",(MethodInfo *)0x0);
      unaff_RBX = SVar24;
      if (SVar14 == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
      SVar16 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,1,pSVar21,
                          (System_Action_GisketchActionContext__o *)SVar24,pSVar15,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      unaff_RBX = SVar19;
      SVar36 = unaff_R12;
      SVar30 = unaff_R14;
      SVar14 = (System_Nullable_bool__Fields)control;
    }
    uVar39 = 0x43a00000;
  }
  *(System_Nullable_bool__Fields *)(puVar27 + -8) = SVar30;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x10) = unaff_RBX;
  *(undefined4 *)(puVar27 + -0x14) = uVar39;
  SVar25 = SVar16;
  SVar30 = SVar28;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)(puVar27 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar27 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar30 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)(puVar27 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar16 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)SVar28 + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)SVar28 + 0x10) + 0x58);
    *(undefined2 *)(puVar27 + -0x16) = 0;
    *(undefined8 *)(puVar27 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar27 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar16 + 0x6b) = *(undefined2 *)(puVar27 + -0x16);
    *(undefined8 *)(puVar27 + -0x70) = 0x4461ee8;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)(puVar27 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)(puVar27 + -0x70) = 0x4461efa;
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x50) = pGVar11;
    *(undefined8 *)(puVar27 + -0x68) = 0;
    *(undefined8 *)(puVar27 + -0x60) = 0;
    *(undefined8 *)(puVar27 + -0x20) = 0;
    *(undefined4 *)(puVar27 + -0x28) = 0x3f800000;
    *(undefined4 *)(puVar27 + -0x30) = 0;
    *(undefined4 *)(puVar27 + -0x38) = 0;
    *(undefined4 *)(puVar27 + -0x40) = 0;
    *(undefined8 *)(puVar27 + -0x48) = 0;
    *(undefined8 *)(puVar27 + -0x58) = 0;
    *(undefined8 *)(puVar27 + -0x70) = 0x4461f83;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                         0.0,pGVar10,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x48),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar27 + -0x40),*(float *)(puVar27 + -0x38),
                         *(float *)(puVar27 + -0x30),*(float *)(puVar27 + -0x28),
                         *(MethodInfo **)(puVar27 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar16 + 0xd8) = pGVar17;
    *(undefined8 *)(puVar27 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar16 + 0xd8),pGVar17);
    return;
  }
  *(undefined8 *)(puVar27 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar27 + -0x70) = SVar14;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x78) = SVar28;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x88) = SVar36;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x90) = SVar16;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)(puVar27 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)(puVar27 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar30 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)(puVar27 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar28 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar30 + 0x10) + 0x60);
    if (SVar28 == (System_Nullable_bool__Fields)0x0) {
      SVar25.hasValue = 0;
      SVar25.value = 0;
      *(undefined8 *)(puVar27 + -0x98) = 0x446200b;
      SVar28 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (SVar28 == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar25.value = 0;
    SVar25.hasValue = *(uint *)((long)SVar28 + 0x18);
    *(undefined8 *)(puVar27 + -0x98) = 0x446202a;
    SVar14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)SVar28 + 0x18) < 1) {
      return;
    }
    if (SVar14 != (System_Nullable_bool__Fields)0x0) {
      SVar18 = (System_Nullable_bool__Fields)(*(ulong *)((long)SVar28 + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)SVar14 + 0x20);
      SVar30.hasValue = 0;
      SVar30.value = 0;
      SVar36 = SVar28;
      while (SVar36 = (System_Nullable_bool__Fields)((long)SVar36 + 0x20), (ulong)SVar30 < (ulong)SVar18) {
        *(undefined8 *)(puVar27 + -0x98) = 0x446205f;
        SVar19 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar27 + -0x90),
                            (MethodInfo *)SVar36);
        SVar24.value = 0;
        SVar24.hasValue = *(uint *)((long)SVar14 + 0x18);
        if ((ulong)SVar24 <= (ulong)SVar30) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar19;
        *(undefined8 *)(puVar27 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar30 = (System_Nullable_bool__Fields)((long)SVar30 + 1);
        SVar18.value = 0;
        SVar18.hasValue = *(uint *)((long)SVar28 + 0x18);
        SVar24 = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)SVar28 + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar25 = SVar19;
        if ((long)SVar24 <= (long)SVar30) {
          return;
        }
      }
      *(undefined8 *)(puVar27 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar28 = (System_Nullable_bool__Fields)((long)SVar28 + 0x20);
  *(undefined8 *)(puVar27 + -0x98) = 0x44620b2;
  SVar31 = SVar28;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar27 + -0x90),
             (MethodInfo *)SVar28);
  *(undefined8 *)(puVar27 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar27 + -0x98) = SVar35;
  *(System_Nullable_bool__Fields *)(puVar27 + -0xa0) = SVar14;
  *(System_Nullable_bool__Fields *)(puVar27 + -0xa8) = SVar28;
  *(System_Nullable_bool__Fields *)(puVar27 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar27 + -0xb8) = SVar36;
  *(System_Nullable_bool__Fields *)(puVar27 + -0xc0) = SVar30;
  SVar28 = SVar25;
  SVar14 = SVar31;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)(puVar27 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar27 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)(puVar27 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar27 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar14 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)(puVar27 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar35 = SVar25;
  SVar19 = extraout_RDX;
  if (*(long *)((long)SVar31 + 0x10) != 0) {
    SVar30 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar31 + 0x10) + 0x28);
    if (SVar30 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)(puVar27 + -0xd0) = 0;
    }
    else {
      lVar20 = *(long *)SVar30;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar29 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
            puVar12 = (undefined8 *)
                      (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar29) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar29);
      }
      *(undefined8 *)(puVar27 + -0xf0) = 0x446219c;
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar22 = puVar12[1];
      pcVar5 = (code *)*puVar12;
      *(undefined8 *)(puVar27 + -0xf0) = 0x44621cf;
      uVar39 = (*pcVar5)(SVar30,uVar22);
      *(undefined4 *)(puVar27 + -0xd0) = uVar39;
    }
    *(undefined8 *)(puVar27 + -0xf0) = 0x44621e4;
    SVar16 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar27 + -0xf0) = 0x44621fe;
    SVar28 = SVar31;
    SVar14 = SVar16;
    System_Action_GisketchActionContext____ctor();
    SVar26 = "slider";
    SVar24 = *(System_Nullable_bool__Fields *)((long)SVar31 + 0x10);
    SVar35 = SVar16;
    SVar36 = SVar25;
    unaff_R13 = extraout_RDX;
    SVar19 = extraout_RDX;
    if (SVar24 != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)(puVar27 + -200) = SVar31;
      SVar30 = *(System_Nullable_bool__Fields *)((long)SVar24 + 0x28);
      fVar38 = 0.0;
      SVar18 = extraout_RDX;
      SVar19 = SVar25;
      if (SVar30 == (System_Nullable_bool__Fields)0x0) {
        SVar18 = SVar30;
        SVar19 = SVar30;
      }
      value = *(float *)(puVar27 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar30 != (System_Nullable_bool__Fields)0x0) {
        lVar20 = *(long *)SVar30;
        uVar2 = *(ushort *)(lVar20 + 0x12e);
        *(float *)(puVar27 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar29 = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
              puVar12 = (undefined8 *)
                        (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar29) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar29);
        }
        *(undefined8 *)(puVar27 + -0xf0) = 0x446229c;
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        SVar28 = *(System_Nullable_bool__Fields *)(puVar12 + 1);
        pcVar5 = (code *)*puVar12;
        *(undefined8 *)(puVar27 + -0xf0) = 0x44622c3;
        SVar14 = SVar30;
        fVar38 = (float)(*pcVar5)();
        SVar24 = *(System_Nullable_bool__Fields *)(*(long *)(puVar27 + -200) + 0x10);
        SVar36 = SVar16;
        unaff_R13 = SVar18;
        SVar31 = SVar26;
        if (SVar24 == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)(puVar27 + -0xcc);
        SVar25 = SVar19;
      }
      SVar35 = *(System_Nullable_bool__Fields *)((long)SVar24 + 0x28);
      SVar31 = SVar25;
      SVar19 = SVar16;
      if (SVar35 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        SVar36 = *(System_Nullable_bool__Fields *)(puVar27 + -200);
        if (SVar25 == (System_Nullable_bool__Fields)0x0) {
          SVar30.hasValue = 0;
          SVar30.value = 0;
          SVar28 = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)(puVar27 + -0xe8) = 0;
          *(undefined8 *)(puVar27 + -0xf0) = 0x44623fc;
          SVar24 = SVar16;
          SVar28 = unaff_R13;
          SVar14 = SVar25;
          SVar30 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar25,(System_String_o *)unaff_R13,value,0,
                              (System_Action_GisketchActionContext__o *)SVar16,(System_String_o *)SVar26,
                              fVar38,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)(puVar27 + -0xe8));
          if (*(long *)((long)SVar36 + 0x10) != 0) {
            bVar37 = *(char *)(*(long *)((long)SVar36 + 0x10) + 0x58) == '\0';
            *(undefined2 *)(puVar27 + -0xd2) = 0;
            SVar28._1_7_ = 0;
            SVar28.hasValue._0_1_ = bVar37;
            SVar14 = (System_Nullable_bool__Fields)((long)puVar27 + -0xd2);
            *(undefined8 *)(puVar27 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar14,(uint)bVar37,MethodInfo_Nullable_1_Boolean);
            if (SVar30 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar30 + 0x6b) = *(undefined2 *)(puVar27 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar20 = *(long *)SVar35;
        uVar2 = *(ushort *)(lVar20 + 0x12e);
        SVar36 = *(System_Nullable_bool__Fields *)(puVar27 + -200);
        *(float *)(puVar27 + -0xd0) = fVar38;
        *(float *)(puVar27 + -0xcc) = value;
        SVar24.hasValue = 0;
        SVar24.value = 0;
        if ((ulong)uVar2 != 0) {
          SVar24 = (System_Nullable_bool__Fields)((ulong)uVar2 << 4);
          SVar32.hasValue = 0;
          SVar32.value = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar32) == TypeInfo_IAottgSettingAdapter) {
              SVar24 = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar32) + 4) * 0x10);
              puVar12 = (undefined8 *)(lVar20 + (long)SVar24 + 0x138);
              goto label_044623be;
            }
            SVar32 = (System_Nullable_bool__Fields)((long)SVar32 + 0x10);
          } while (SVar24 != SVar32);
        }
        *(undefined8 *)(puVar27 + -0xf0) = 0x446237c;
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar35,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        SVar28 = *(System_Nullable_bool__Fields *)(puVar12 + 1);
        pcVar5 = (code *)*puVar12;
        *(undefined8 *)(puVar27 + -0xf0) = 0x44623c7;
        SVar14 = SVar35;
        max = (float)(*pcVar5)();
        fVar38 = *(float *)(puVar27 + -0xd0);
        value = *(float *)(puVar27 + -0xcc);
        SVar30 = SVar26;
        if (SVar25 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)(puVar27 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar27 + -0xf0) = SVar31;
  *(System_Nullable_bool__Fields *)(puVar27 + -0xf8) = SVar19;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x100) = SVar30;
  SVar19 = SVar14;
  if (g_data_057ae798 == '\0') {
    SVar19 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)(puVar27 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar20 = *(long *)((long)SVar14 + 0x10);
  if (lVar20 != 0) {
    SVar31 = (System_Nullable_bool__Fields)((long)puVar27 + -0xe0);
    SVar30 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
    if (SVar30 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar27 + -0x110) = *(undefined8 *)(puVar27 + -0xd0);
      *(undefined8 *)(puVar27 + -0x108) = *(undefined8 *)(puVar27 + -200);
      *(undefined8 *)(puVar27 + -0x120) = *(undefined8 *)SVar31;
      *(undefined8 *)(puVar27 + -0x118) = *(undefined8 *)(puVar27 + -0xd8);
label_0446256c:
      *(undefined8 *)(puVar27 + -0x130) = *(undefined8 *)(puVar27 + -0x110);
      *(undefined8 *)(puVar27 + -0x128) = *(undefined8 *)(puVar27 + -0x108);
      *(undefined8 *)(puVar27 + -0x140) = *(undefined8 *)(puVar27 + -0x120);
      *(undefined8 *)(puVar27 + -0x138) = *(undefined8 *)(puVar27 + -0x118);
      lVar20 = *(long *)(lVar20 + 0x88);
      if (lVar20 != 0) {
        uVar22 = *(undefined8 *)(lVar20 + 0x28);
        uVar6 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined4 *)(puVar27 + -0x150) = *(undefined4 *)(puVar27 + -0x130);
        *(undefined4 *)(puVar27 + -0x14c) = *(undefined4 *)(puVar27 + -300);
        *(undefined4 *)(puVar27 + -0x148) = *(undefined4 *)(puVar27 + -0x128);
        *(undefined4 *)(puVar27 + -0x144) = *(undefined4 *)(puVar27 + -0x124);
        *(undefined4 *)(puVar27 + -0x160) = *(undefined4 *)(puVar27 + -0x140);
        *(undefined4 *)(puVar27 + -0x15c) = *(undefined4 *)(puVar27 + -0x13c);
        *(undefined4 *)(puVar27 + -0x158) = *(undefined4 *)(puVar27 + -0x138);
        *(undefined4 *)(puVar27 + -0x154) = *(undefined4 *)(puVar27 + -0x134);
        pcVar5 = *(code **)(lVar20 + 0x18);
        *(undefined8 *)(puVar27 + -0x168) = 0x44625a7;
        (*pcVar5)(uVar6,uVar22);
      }
      return;
    }
    *(undefined4 *)(puVar27 + -0x130) = *(undefined4 *)(puVar27 + -0xd0);
    *(undefined4 *)(puVar27 + -300) = *(undefined4 *)(puVar27 + -0xcc);
    *(undefined4 *)(puVar27 + -0x128) = *(undefined4 *)(puVar27 + -200);
    *(undefined4 *)(puVar27 + -0x124) = *(undefined4 *)(puVar27 + -0xc4);
    *(undefined4 *)(puVar27 + -0x140) = *(undefined4 *)SVar31;
    *(undefined4 *)(puVar27 + -0x13c) = *(undefined4 *)(puVar27 + -0xdc);
    *(undefined4 *)(puVar27 + -0x138) = *(undefined4 *)(puVar27 + -0xd8);
    *(undefined4 *)(puVar27 + -0x134) = *(undefined4 *)(puVar27 + -0xd4);
    lVar20 = *(long *)SVar30;
    SVar24.hasValue = 0;
    SVar24.value = 0;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      SVar24 = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
      SVar33.hasValue = 0;
      SVar33.value = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar33) == TypeInfo_IAottgSettingAdapter) {
          SVar24 = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar33) + 0xb) * 0x10);
          puVar12 = (undefined8 *)(lVar20 + (long)SVar24 + 0x138);
          goto label_0446252f;
        }
        SVar33 = (System_Nullable_bool__Fields)((long)SVar33 + 0x10);
      } while (SVar24 != SVar33);
    }
    *(undefined8 *)(puVar27 + -0x168) = 0x44624fc;
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    SVar28 = *(System_Nullable_bool__Fields *)(puVar12 + 1);
    *(undefined4 *)(puVar27 + -0x150) = *(undefined4 *)(puVar27 + -0x130);
    *(undefined4 *)(puVar27 + -0x14c) = *(undefined4 *)(puVar27 + -300);
    *(undefined4 *)(puVar27 + -0x148) = *(undefined4 *)(puVar27 + -0x128);
    *(undefined4 *)(puVar27 + -0x144) = *(undefined4 *)(puVar27 + -0x124);
    *(undefined4 *)(puVar27 + -0x160) = *(undefined4 *)(puVar27 + -0x140);
    *(undefined4 *)(puVar27 + -0x15c) = *(undefined4 *)(puVar27 + -0x13c);
    *(undefined4 *)(puVar27 + -0x158) = *(undefined4 *)(puVar27 + -0x138);
    *(undefined4 *)(puVar27 + -0x154) = *(undefined4 *)(puVar27 + -0x134);
    pcVar5 = (code *)*puVar12;
    *(undefined8 *)(puVar27 + -0x168) = 0x446254b;
    SVar19 = SVar30;
    (*pcVar5)();
    lVar20 = *(long *)((long)SVar14 + 0x10);
    *(undefined8 *)(puVar27 + -0x110) = *(undefined8 *)(puVar27 + -0xd0);
    *(undefined8 *)(puVar27 + -0x108) = *(undefined8 *)(puVar27 + -200);
    *(undefined4 *)(puVar27 + -0x120) = *(undefined4 *)SVar31;
    *(undefined4 *)(puVar27 + -0x11c) = *(undefined4 *)(puVar27 + -0xdc);
    *(undefined4 *)(puVar27 + -0x118) = *(undefined4 *)(puVar27 + -0xd8);
    *(undefined4 *)(puVar27 + -0x114) = *(undefined4 *)(puVar27 + -0xd4);
    if (lVar20 != 0) goto label_0446256c;
  }
  *(undefined8 *)(puVar27 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar27 + -0x168) = SVar35;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x170) = SVar31;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x178) = SVar14;
  *(System_Nullable_bool__Fields *)(puVar27 + -0x180) = SVar30;
  SVar14 = SVar19;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)(puVar27 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar14 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)(puVar27 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar20 = *(long *)((long)SVar19 + 0x10);
  if (lVar20 == 0) {
label_04462728:
    *(undefined8 *)(puVar27 + -0x1f0) = 0x446272d;
    il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_bool__Fields *)(puVar27 + -0x1f0) = SVar35;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x1f8) = SVar31;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x200) = SVar19;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x208) = unaff_R13;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x210) = SVar36;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x218) = SVar30;
    SVar35 = SVar14;
    if (g_data_057ae79c == '\0') {
      *(undefined8 *)(puVar27 + -0x278) = 0x4462759;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar27 + -0x278) = 0x4462765;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
      *(undefined8 *)(puVar27 + -0x278) = 0x4462771;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar27 + -0x278) = 0x446277d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
      *(undefined8 *)(puVar27 + -0x278) = 0x4462789;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)(puVar27 + -0x278) = 0x4462795;
      il2cpp_runtime_helper_023445d0(&"-value-button");
      *(undefined8 *)(puVar27 + -0x278) = 0x44627a1;
      il2cpp_runtime_helper_023445d0(&"-slider");
      SVar35 = (System_Nullable_bool__Fields)&"0";
      *(undefined8 *)(puVar27 + -0x278) = 0x44627ad;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae79c = '\x01';
    }
    if (*(long *)((long)SVar14 + 0x10) != 0) {
      pSVar21 = *(System_String_o **)(*(long *)((long)SVar14 + 0x10) + 0x10);
      *(undefined8 *)(puVar27 + -0x278) = 0x44627d6;
      pSVar21 = System_String__Concat_3ae5ba0(pSVar21,"-slider",(MethodInfo *)0x0);
      *(undefined8 *)(puVar27 + -0x278) = 0x44627e4;
      SVar30 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                         ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar14,
                          (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar28,pSVar21,(MethodInfo *)SVar24);
      *(undefined8 *)(puVar27 + -0x278) = 0x44627f6;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar27 + -0x260) = 0;
      *(undefined8 *)(puVar27 + -600) = 0;
      *(undefined8 *)(puVar27 + -0x270) = 0;
      *(undefined8 *)(puVar27 + -0x268) = 0;
      *(undefined8 *)(puVar27 + -0x228) = 0;
      *(undefined4 *)(puVar27 + -0x230) = 0x3f800000;
      *(undefined4 *)(puVar27 + -0x238) = 0x3f800000;
      *(undefined4 *)(puVar27 + -0x240) = 0;
      *(undefined4 *)(puVar27 + -0x248) = 0;
      *(undefined8 *)(puVar27 + -0x250) = 0;
      *(undefined8 *)(puVar27 + -0x278) = 0x4462873;
      SVar35 = "Column";
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar10,
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x270),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x268),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x260),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -600),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x250),0.0,0.0,0.0,0.0,0.0
                           ,0.0,0.0,*(float *)(puVar27 + -0x248),*(float *)(puVar27 + -0x240),
                           *(float *)(puVar27 + -0x238),*(float *)(puVar27 + -0x230),
                           *(MethodInfo **)(puVar27 + -0x228));
      if (SVar30 != (System_Nullable_bool__Fields)0x0) {
        SVar35 = (System_Nullable_bool__Fields)((long)SVar30 + 0xd8);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar30 + 0xd8) = pGVar17;
        *(undefined8 *)(puVar27 + -0x278) = 0x4462895;
        il2cpp_runtime_helper_022b4080(SVar35,pGVar17);
        if (*(long *)((long)SVar14 + 0x10) != 0) {
          plVar7 = *(long **)(*(long *)((long)SVar14 + 0x10) + 0x28);
          if (plVar7 == (long *)0x0) {
            iVar8 = 4;
            pSVar21 = "0";
          }
          else {
            lVar20 = *plVar7;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar29 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                  puVar12 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar29) * 0x10 + lVar20 + 0x138);
                  goto label_04462936;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar29);
            }
            *(undefined8 *)(puVar27 + -0x278) = 0x4462909;
            puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
            iVar8 = (uint)(plVar7 != (long *)0x0) << 2;
            uVar22 = puVar12[1];
            pcVar5 = (code *)*puVar12;
            *(undefined8 *)(puVar27 + -0x278) = 0x4462943;
            pSVar21 = (System_String_o *)(*pcVar5)(plVar7,uVar22);
          }
          *(undefined8 *)(puVar27 + -0x278) = 0x4462955;
          SVar36 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
          *(undefined8 *)(puVar27 + -0x278) = 0x446296f;
          SVar35 = SVar36;
          System_Action_GisketchActionContext____ctor();
          SVar30 = SVar28;
          if (*(long *)((long)SVar14 + 0x10) != 0) {
            SVar35 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar14 + 0x10) + 0x10);
            *(undefined8 *)(puVar27 + -0x278) = 0x4462991;
            pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)SVar35,"-value-button",(MethodInfo *)0x0);
            if (SVar28 != (System_Nullable_bool__Fields)0x0) {
              *(undefined8 *)(puVar27 + -0x270) = 0;
              *(undefined8 *)(puVar27 + -0x268) = 0;
              *(undefined8 *)(puVar27 + -0x260) = 0;
              *(undefined8 *)(puVar27 + -0x278) = 0x44629c1;
              SVar35 = SVar28;
              SVar30 = (System_Nullable_bool__Fields)
                       Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                 ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar28,iVar8,pSVar21,
                                  (System_Action_GisketchActionContext__o *)SVar36,pSVar15,
                                  (System_String_o *)0x0,
                                  *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar27 + -0x270),
                                  *(System_String_o **)(puVar27 + -0x268),*(MethodInfo **)(puVar27 + -0x260));
              if (*(long *)((long)SVar14 + 0x10) != 0) {
                cVar1 = *(char *)(*(long *)((long)SVar14 + 0x10) + 0x58);
                *(undefined2 *)(puVar27 + -0x21a) = 0;
                SVar35 = (System_Nullable_bool__Fields)((long)puVar27 + -0x21a);
                *(undefined8 *)(puVar27 + -0x278) = 0x44629f6;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o)SVar35,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
                if (SVar30 != (System_Nullable_bool__Fields)0x0) {
                  *(undefined2 *)((long)SVar30 + 0x6b) = *(undefined2 *)(puVar27 + -0x21a);
                  *(undefined8 *)(puVar27 + -0x278) = 0x4462a1e;
                  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                  *(undefined8 *)(puVar27 + -0x260) = 0;
                  *(undefined8 *)(puVar27 + -600) = 0;
                  *(undefined8 *)(puVar27 + -0x270) = 0;
                  *(undefined8 *)(puVar27 + -0x268) = 0;
                  *(undefined8 *)(puVar27 + -0x228) = 0;
                  *(undefined4 *)(puVar27 + -0x230) = 0;
                  *(undefined4 *)(puVar27 + -0x238) = 0;
                  *(undefined4 *)(puVar27 + -0x240) = 0;
                  *(undefined4 *)(puVar27 + -0x248) = 0;
                  *(undefined8 *)(puVar27 + -0x250) = 0;
                  *(undefined8 *)(puVar27 + -0x278) = 0x4462a95;
                  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ((System_String_o *)"Column",(System_String_o *)0x0,
                                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                       0.0,pGVar10,
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x270),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x268),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x260),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -600),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x250),0.0,0.0
                                       ,0.0,0.0,0.0,0.0,0.0,*(float *)(puVar27 + -0x248),
                                       *(float *)(puVar27 + -0x240),*(float *)(puVar27 + -0x238),
                                       *(float *)(puVar27 + -0x230),*(MethodInfo **)(puVar27 + -0x228));
                  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar30 + 0xd8) = pGVar17;
                  *(undefined8 *)(puVar27 + -0x278) = 0x4462aae;
                  il2cpp_runtime_helper_022b4080((long)SVar30 + 0xd8,pGVar17);
                  return;
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar27 + -0x278) = 0x4462ac2;
    uVar22 = il2cpp_runtime_helper_022b2c90();
    lVar20 = *(long *)((long)SVar35 + 0x10);
    *(System_Nullable_bool__Fields *)(puVar27 + -0x278) = SVar28;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x280) = SVar30;
    *(undefined8 *)(puVar27 + -0x288) = uVar22;
    if (g_data_057ae7ad == '\0') {
      *(undefined8 *)(puVar27 + -0x290) = 0x4462afc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
      *(undefined8 *)(puVar27 + -0x290) = 0x4462b08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      *(undefined8 *)(puVar27 + -0x290) = 0x4462b14;
      il2cpp_runtime_helper_023445d0(&"setting-slider-value");
      g_data_057ae7ad = '\x01';
    }
    if (((lVar20 != 0) && (*(long *)(lVar20 + 0x28) != 0)) && (*(char *)(lVar20 + 0x58) == '\0')) {
      **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar20;
      uVar22 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      *(undefined8 *)(puVar27 + -0x290) = 0x4462b60;
      il2cpp_runtime_helper_022b4080(uVar22,lVar20);
      if (*(UnityEngine_GameObject_o **)(puVar27 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)(puVar27 + -0x290) = 0x4462b78;
        pIVar23 = UnityEngine_GameObject__GetComponentInParent_object_
                            (*(UnityEngine_GameObject_o **)(puVar27 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if ((pIVar23 != (Il2CppObject *)0x0) &&
           (pIVar23[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar23[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  SVar35 = (System_Nullable_bool__Fields)((long)puVar27 + -0x158);
  SVar30 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
  if (SVar30 == (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)(puVar27 + -0x1b8) = *(undefined8 *)(puVar27 + -0x148);
    *(undefined8 *)(puVar27 + -0x1b0) = *(undefined8 *)(puVar27 + -0x140);
    *(undefined8 *)(puVar27 + -0x1c8) = *(undefined8 *)SVar35;
    *(undefined8 *)(puVar27 + -0x1c0) = *(undefined8 *)(puVar27 + -0x150);
  }
  else {
    if (*(long *)(puVar27 + -0x148) == 0) {
      SVar31.hasValue = 0;
      SVar31.value = 0;
    }
    else {
      pSVar21 = *(System_String_o **)(*(long *)(puVar27 + -0x148) + 0x50);
      *(undefined8 *)(puVar27 + -0x1f0) = 0x4462631;
      uVar9 = System_String__op_Equality(pSVar21,"true",(MethodInfo *)0x0);
      SVar31.value = 0;
      SVar31.hasValue = uVar9;
    }
    lVar20 = *(long *)SVar30;
    SVar24.hasValue = 0;
    SVar24.value = 0;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      SVar24 = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
      SVar34.hasValue = 0;
      SVar34.value = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar34) == TypeInfo_IAottgSettingAdapter) {
          SVar24 = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar34) + 8) * 0x10);
          puVar12 = (undefined8 *)(lVar20 + (long)SVar24 + 0x138);
          goto label_044626b5;
        }
        SVar34 = (System_Nullable_bool__Fields)((long)SVar34 + 0x10);
      } while (SVar24 != SVar34);
    }
    *(undefined8 *)(puVar27 + -0x1f0) = 0x446269c;
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar30,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
    uVar22 = puVar12[1];
    SVar28 = (System_Nullable_bool__Fields)((ulong)SVar31 & 0xff);
    pcVar5 = (code *)*puVar12;
    *(undefined8 *)(puVar27 + -0x1f0) = 0x44626c2;
    SVar14 = SVar30;
    (*pcVar5)(SVar30,SVar28,uVar22);
    lVar20 = *(long *)((long)SVar19 + 0x10);
    *(undefined8 *)(puVar27 + -0x1b8) = *(undefined8 *)(puVar27 + -0x148);
    *(undefined8 *)(puVar27 + -0x1b0) = *(undefined8 *)(puVar27 + -0x140);
    *(undefined4 *)(puVar27 + -0x1c8) = *(undefined4 *)SVar35;
    *(undefined4 *)(puVar27 + -0x1c4) = *(undefined4 *)(puVar27 + -0x154);
    *(undefined4 *)(puVar27 + -0x1c0) = *(undefined4 *)(puVar27 + -0x150);
    *(undefined4 *)(puVar27 + -0x1bc) = *(undefined4 *)(puVar27 + -0x14c);
    if (lVar20 == 0) goto label_04462728;
  }
  *(undefined8 *)(puVar27 + -0x198) = *(undefined8 *)(puVar27 + -0x1b8);
  *(undefined8 *)(puVar27 + -400) = *(undefined8 *)(puVar27 + -0x1b0);
  *(undefined8 *)(puVar27 + -0x1a8) = *(undefined8 *)(puVar27 + -0x1c8);
  *(undefined8 *)(puVar27 + -0x1a0) = *(undefined8 *)(puVar27 + -0x1c0);
  lVar20 = *(long *)(lVar20 + 0x88);
  if (lVar20 != 0) {
    uVar22 = *(undefined8 *)(lVar20 + 0x28);
    uVar6 = *(undefined8 *)(lVar20 + 0x40);
    *(undefined4 *)(puVar27 + -0x1d8) = *(undefined4 *)(puVar27 + -0x198);
    *(undefined4 *)(puVar27 + -0x1d4) = *(undefined4 *)(puVar27 + -0x194);
    *(undefined4 *)(puVar27 + -0x1d0) = *(undefined4 *)(puVar27 + -400);
    *(undefined4 *)(puVar27 + -0x1cc) = *(undefined4 *)(puVar27 + -0x18c);
    *(undefined4 *)(puVar27 + -0x1e8) = *(undefined4 *)(puVar27 + -0x1a8);
    *(undefined4 *)(puVar27 + -0x1e4) = *(undefined4 *)(puVar27 + -0x1a4);
    *(undefined4 *)(puVar27 + -0x1e0) = *(undefined4 *)(puVar27 + -0x1a0);
    *(undefined4 *)(puVar27 + -0x1dc) = *(undefined4 *)(puVar27 + -0x19c);
    pcVar5 = *(code **)(lVar20 + 0x18);
    *(undefined8 *)(puVar27 + -0x1f0) = 0x446271d;
    (*pcVar5)(uVar6,uVar22);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildActionButton
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x4461b00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  System_String_o *pSVar8;
  System_Nullable_bool__Fields SVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  System_Nullable_bool__Fields SVar14;
  undefined8 *puVar15;
  System_Nullable_bool__Fields action;
  long lVar16;
  System_String_o *id;
  undefined8 uVar17;
  Il2CppObject *pIVar18;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields SVar19;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields unaff_RBX;
  undefined8 unaff_RBP;
  System_Nullable_bool__Fields control_00;
  System_Nullable_bool__Fields SVar20;
  System_Nullable_bool__Fields SVar21;
  long lVar22;
  System_Nullable_bool__Fields SVar23;
  System_Nullable_bool__Fields SVar24;
  System_Nullable_bool__Fields SVar25;
  System_Nullable_bool__Fields SVar26;
  System_Nullable_bool__Fields unaff_R12;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *text;
  System_Nullable_bool__Fields SVar27;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar28;
  undefined4 uVar29;
  float min;
  float max;
  float value;
  
  SVar27 = (System_Nullable_bool__Fields)control;
  SVar20 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae796 == '\0') {
    SVar20 = (System_Nullable_bool__Fields)&"-button";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae796 = '\x01';
  }
  pGVar3 = (__this->fields)._descriptor;
  SVar19 = unaff_RBX;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_04461c07:
    unaff_RBX = SVar19;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffff50;
    SVar19 = in_RCX;
    SVar9 = SVar27;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar20;
    if (g_data_057ae797 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"text");
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-value";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae797 = '\x01';
      SVar19 = in_RCX;
    }
    lVar16 = *(long *)((long)SVar20 + 0x10);
    if (lVar16 != 0) {
      unaff_RBX = *(System_Nullable_bool__Fields *)(lVar16 + 0x80);
      if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
        control = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(lVar16 + 0x28);
        if ((System_Nullable_bool__Fields)control == (System_Nullable_bool__Fields)0x0) {
          SVar19 = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
          unaff_RBX = *(System_Nullable_bool__Fields *)SVar19;
          unaff_R13.hasValue = 0;
          unaff_R13.value = 0;
        }
        else {
          lVar16 = *(long *)control;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar22 = 0;
            do {
              if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar22) == TypeInfo_IAottgSettingAdapter) {
                SVar19 = (System_Nullable_bool__Fields)
                         ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar22) * 0x10 + lVar16 + 0x138);
                goto label_04461d0b;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar22);
          }
          SVar19 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(control,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
          SVar9 = *(System_Nullable_bool__Fields *)((long)SVar19 + 8);
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)control;
          unaff_RBX = (System_Nullable_bool__Fields)(*(code *)*(System_Nullable_bool__Fields *)SVar19)();
          lVar16 = *(long *)((long)SVar20 + 0x10);
          unaff_R13 = SVar27;
          if (lVar16 == 0) goto label_04461e40;
        }
      }
      __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(lVar16 + 0x10);
      SVar9 = "-value";
      pSVar8 = System_String__Concat_3ae5ba0
                         ((System_String_o *)__this,(System_String_o *)"-value",(MethodInfo *)0x0);
      if (SVar27 != (System_Nullable_bool__Fields)0x0) {
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Text
                            ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar27,(System_String_o *)unaff_RBX,
                             "text",pSVar8,(System_String_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        SVar20 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0)
        ;
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        SVar9.hasValue = 0;
        SVar9.value = 0;
        SVar19.hasValue = 0;
        SVar19.value = 0;
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)"Column";
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar20,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar11,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        unaff_RBX.hasValue = 0;
        unaff_RBX.value = 0;
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
          il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar13);
          return;
        }
      }
    }
label_04461e40:
    uVar29 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    text = (pGVar3->fields).Options;
    SVar19 = (System_Nullable_bool__Fields)(pGVar3->fields).ActionId;
    SVar27 = "-button";
    if (SVar19 == (System_Nullable_bool__Fields)0x0) {
      if (text == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
        text = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)(pGVar3->fields).Label;
      }
      SVar20 = (System_Nullable_bool__Fields)(pGVar3->fields).Id;
      SVar19 = (System_Nullable_bool__Fields)(pGVar3->fields).ActionText;
      pSVar8 = System_String__Concat_3ae5ba0
                         ((System_String_o *)SVar20,(System_String_o *)"-button",(MethodInfo *)0x0);
      if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_04461c07;
      SVar9 = (System_Nullable_bool__Fields)
              Gisketch_Aottg2UI_Code_AottgUi__Button
                        (control,1,(System_String_o *)text,(System_String_o *)SVar19,pSVar8,
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (System_String_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      if (text == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
        text = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)(pGVar3->fields).Label;
      }
      SVar20 = (System_Nullable_bool__Fields)(pGVar3->fields).Id;
      pSVar8 = System_String__Concat_3ae5ba0
                         ((System_String_o *)SVar20,(System_String_o *)"-button",(MethodInfo *)0x0);
      if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_04461c07;
      SVar9 = (System_Nullable_bool__Fields)
              Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                        (control,1,(System_String_o *)text,(System_Action_GisketchActionContext__o *)SVar19,
                         pSVar8,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
    }
    uVar29 = 0x43a00000;
    SVar27 = unaff_R12;
    SVar20 = unaff_R14;
    control = (Gisketch_Aottg2UI_Code_AottgUi_o *)unaff_R15;
  }
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -8) = SVar20;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined4 *)((long)register0x00000020 + -0x14) = uVar29;
  SVar24 = SVar9;
  SVar20 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar20 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461e90;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar9 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)__this + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)__this + 0x10) + 0x58);
    *(undefined2 *)((long)register0x00000020 + -0x16) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)register0x00000020 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean)
    ;
    *(undefined2 *)((long)SVar9 + 0x6b) = *(undefined2 *)((long)register0x00000020 + -0x16);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461ee8;
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points
                        (*(float *)((long)register0x00000020 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461efa;
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x50) = pGVar12;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x28) = 0x3f800000;
    *(undefined4 *)((long)register0x00000020 + -0x30) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461f83;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                         0.0,pGVar11,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x48),0.0,
                         0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x40),
                         *(float *)((long)register0x00000020 + -0x38),
                         *(float *)((long)register0x00000020 + -0x30),
                         *(float *)((long)register0x00000020 + -0x28),
                         *(MethodInfo **)((long)register0x00000020 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar9 + 0xd8) = pGVar13;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461f9c;
    il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar9 + 0xd8),pGVar13);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)register0x00000020 + -0x70) = control;
  *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)((long)register0x00000020 + -0x78) = __this;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x88) = SVar27;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x90) = SVar9;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar20 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar20 + 0x10) + 0x60);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      SVar24.hasValue = 0;
      SVar24.value = 0;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x446200b;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar24.value = 0;
    SVar24.hasValue = *(uint *)((long)__this + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x446202a;
    control = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)__this + 0x18) < 1) {
      return;
    }
    if ((System_Nullable_bool__Fields)control != (System_Nullable_bool__Fields)0x0) {
      SVar14 = (System_Nullable_bool__Fields)(*(ulong *)((long)__this + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)control + 0x20);
      SVar20.hasValue = 0;
      SVar20.value = 0;
      SVar27 = (System_Nullable_bool__Fields)__this;
      while (SVar27 = (System_Nullable_bool__Fields)((long)SVar27 + 0x20), (ulong)SVar20 < (ulong)SVar14) {
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x446205f;
        SVar9 = (System_Nullable_bool__Fields)
                Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                          ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                           *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)
                            ((long)register0x00000020 + -0x90),(MethodInfo *)SVar27);
        SVar19.value = 0;
        SVar19.hasValue = *(uint *)((long)control + 0x18);
        if ((ulong)SVar19 <= (ulong)SVar20) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar9;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x4462077;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar20 = (System_Nullable_bool__Fields)((long)SVar20 + 1);
        SVar14.value = 0;
        SVar14.hasValue = *(uint *)((long)__this + 0x18);
        SVar19 = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)__this + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar24 = SVar9;
        if ((long)SVar19 <= (long)SVar20) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar9 = (System_Nullable_bool__Fields)((long)__this + 0x20);
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620b2;
  SVar21 = SVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)((long)register0x00000020 + -0x90)
             ,(MethodInfo *)SVar9);
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x98) = unaff_RBP;
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)register0x00000020 + -0xa0) = control;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xa8) = SVar9;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xb8) = SVar27;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xc0) = SVar20;
  control_00 = SVar24;
  SVar9 = SVar21;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar9 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar14 = SVar24;
  SVar25 = extraout_RDX;
  if (*(long *)((long)SVar21 + 0x10) != 0) {
    SVar20 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar21 + 0x10) + 0x28);
    if (SVar20 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)((long)register0x00000020 + -0xd0) = 0;
    }
    else {
      lVar16 = *(long *)SVar20;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar22 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar22) == TypeInfo_IAottgSettingAdapter) {
            puVar15 = (undefined8 *)
                      (lVar16 + (long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar22) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar22);
      }
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446219c;
      puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar20,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar17 = puVar15[1];
      pcVar4 = (code *)*puVar15;
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44621cf;
      uVar29 = (*pcVar4)(SVar20,uVar17);
      *(undefined4 *)((long)register0x00000020 + -0xd0) = uVar29;
    }
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44621e4;
    action = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44621fe;
    control_00 = SVar21;
    SVar9 = action;
    System_Action_GisketchActionContext____ctor();
    SVar26 = "slider";
    SVar19 = *(System_Nullable_bool__Fields *)((long)SVar21 + 0x10);
    SVar14 = action;
    SVar27 = SVar24;
    unaff_R13 = extraout_RDX;
    SVar25 = extraout_RDX;
    if (SVar19 != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)((long)register0x00000020 + -200) = SVar21;
      SVar20 = *(System_Nullable_bool__Fields *)((long)SVar19 + 0x28);
      min = 0.0;
      SVar21 = extraout_RDX;
      SVar25 = SVar24;
      if (SVar20 == (System_Nullable_bool__Fields)0x0) {
        SVar21 = SVar20;
        SVar25 = SVar20;
      }
      value = *(float *)((long)register0x00000020 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar20 != (System_Nullable_bool__Fields)0x0) {
        lVar16 = *(long *)SVar20;
        uVar2 = *(ushort *)(lVar16 + 0x12e);
        *(float *)((long)register0x00000020 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar22 = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar22) == TypeInfo_IAottgSettingAdapter) {
              puVar15 = (undefined8 *)
                        (lVar16 + (long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar22) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar22);
        }
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446229c;
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar20,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control_00 = *(System_Nullable_bool__Fields *)(puVar15 + 1);
        pcVar4 = (code *)*puVar15;
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44622c3;
        SVar9 = SVar20;
        min = (float)(*pcVar4)();
        SVar19 = *(System_Nullable_bool__Fields *)(*(long *)((long)register0x00000020 + -200) + 0x10);
        SVar27 = action;
        unaff_R13 = SVar21;
        SVar21 = SVar26;
        if (SVar19 == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)((long)register0x00000020 + -0xcc);
        SVar24 = SVar25;
      }
      SVar14 = *(System_Nullable_bool__Fields *)((long)SVar19 + 0x28);
      SVar21 = SVar24;
      SVar25 = action;
      if (SVar14 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        SVar27 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -200);
        if (SVar24 == (System_Nullable_bool__Fields)0x0) {
          SVar20.hasValue = 0;
          SVar20.value = 0;
          control_00 = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44623fc;
          SVar19 = action;
          control_00 = unaff_R13;
          SVar9 = SVar24;
          SVar20 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar24,(System_String_o *)unaff_R13,value,0,
                              (System_Action_GisketchActionContext__o *)action,(System_String_o *)SVar26,min,
                              max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)((long)register0x00000020 + -0xe8));
          if (*(long *)((long)SVar27 + 0x10) != 0) {
            bVar28 = *(char *)(*(long *)((long)SVar27 + 0x10) + 0x58) == '\0';
            *(undefined2 *)((long)register0x00000020 + -0xd2) = 0;
            control_00._1_7_ = 0;
            control_00.hasValue._0_1_ = bVar28;
            SVar9 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0xd2);
            *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar9,(uint)bVar28,MethodInfo_Nullable_1_Boolean);
            if (SVar20 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar20 + 0x6b) = *(undefined2 *)((long)register0x00000020 + -0xd2);
              return;
            }
          }
        }
      }
      else {
        lVar16 = *(long *)SVar14;
        uVar2 = *(ushort *)(lVar16 + 0x12e);
        SVar27 = *(System_Nullable_bool__Fields *)((long)register0x00000020 + -200);
        *(float *)((long)register0x00000020 + -0xd0) = min;
        *(float *)((long)register0x00000020 + -0xcc) = value;
        SVar19.hasValue = 0;
        SVar19.value = 0;
        if ((ulong)uVar2 != 0) {
          SVar19 = (System_Nullable_bool__Fields)((ulong)uVar2 << 4);
          SVar23.hasValue = 0;
          SVar23.value = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + (long)SVar23) == TypeInfo_IAottgSettingAdapter) {
              SVar19 = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + (long)SVar23) + 4) * 0x10);
              puVar15 = (undefined8 *)(lVar16 + (long)SVar19 + 0x138);
              goto label_044623be;
            }
            SVar23 = (System_Nullable_bool__Fields)((long)SVar23 + 0x10);
          } while (SVar19 != SVar23);
        }
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x446237c;
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar14,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control_00 = *(System_Nullable_bool__Fields *)(puVar15 + 1);
        pcVar4 = (code *)*puVar15;
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44623c7;
        SVar9 = SVar14;
        max = (float)(*pcVar4)();
        min = *(float *)((long)register0x00000020 + -0xd0);
        value = *(float *)((long)register0x00000020 + -0xcc);
        SVar20 = SVar26;
        if (SVar24 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xf0) = SVar21;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0xf8) = SVar25;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x100) = SVar20;
  SVar24 = SVar9;
  if (g_data_057ae798 == '\0') {
    SVar24 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar16 = *(long *)((long)SVar9 + 0x10);
  if (lVar16 != 0) {
    SVar21 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0xe0);
    SVar20 = *(System_Nullable_bool__Fields *)(lVar16 + 0x28);
    if (SVar20 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x110) = *(undefined8 *)((long)register0x00000020 + -0xd0);
      *(undefined8 *)((long)register0x00000020 + -0x108) = *(undefined8 *)((long)register0x00000020 + -200);
      *(undefined8 *)((long)register0x00000020 + -0x120) = *(undefined8 *)SVar21;
      *(undefined8 *)((long)register0x00000020 + -0x118) = *(undefined8 *)((long)register0x00000020 + -0xd8);
label_0446256c:
      *(undefined8 *)((long)register0x00000020 + -0x130) = *(undefined8 *)((long)register0x00000020 + -0x110);
      *(undefined8 *)((long)register0x00000020 + -0x128) = *(undefined8 *)((long)register0x00000020 + -0x108);
      *(undefined8 *)((long)register0x00000020 + -0x140) = *(undefined8 *)((long)register0x00000020 + -0x120);
      *(undefined8 *)((long)register0x00000020 + -0x138) = *(undefined8 *)((long)register0x00000020 + -0x118);
      lVar16 = *(long *)(lVar16 + 0x88);
      if (lVar16 != 0) {
        uVar17 = *(undefined8 *)(lVar16 + 0x28);
        uVar5 = *(undefined8 *)(lVar16 + 0x40);
        *(undefined4 *)((long)register0x00000020 + -0x150) =
             *(undefined4 *)((long)register0x00000020 + -0x130);
        *(undefined4 *)((long)register0x00000020 + -0x14c) = *(undefined4 *)((long)register0x00000020 + -300);
        *(undefined4 *)((long)register0x00000020 + -0x148) =
             *(undefined4 *)((long)register0x00000020 + -0x128);
        *(undefined4 *)((long)register0x00000020 + -0x144) =
             *(undefined4 *)((long)register0x00000020 + -0x124);
        *(undefined4 *)((long)register0x00000020 + -0x160) =
             *(undefined4 *)((long)register0x00000020 + -0x140);
        *(undefined4 *)((long)register0x00000020 + -0x15c) =
             *(undefined4 *)((long)register0x00000020 + -0x13c);
        *(undefined4 *)((long)register0x00000020 + -0x158) =
             *(undefined4 *)((long)register0x00000020 + -0x138);
        *(undefined4 *)((long)register0x00000020 + -0x154) =
             *(undefined4 *)((long)register0x00000020 + -0x134);
        pcVar4 = *(code **)(lVar16 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x168) = 0x44625a7;
        (*pcVar4)(uVar5,uVar17);
      }
      return;
    }
    *(undefined4 *)((long)register0x00000020 + -0x130) = *(undefined4 *)((long)register0x00000020 + -0xd0);
    *(undefined4 *)((long)register0x00000020 + -300) = *(undefined4 *)((long)register0x00000020 + -0xcc);
    *(undefined4 *)((long)register0x00000020 + -0x128) = *(undefined4 *)((long)register0x00000020 + -200);
    *(undefined4 *)((long)register0x00000020 + -0x124) = *(undefined4 *)((long)register0x00000020 + -0xc4);
    *(undefined4 *)((long)register0x00000020 + -0x140) = *(undefined4 *)SVar21;
    *(undefined4 *)((long)register0x00000020 + -0x13c) = *(undefined4 *)((long)register0x00000020 + -0xdc);
    *(undefined4 *)((long)register0x00000020 + -0x138) = *(undefined4 *)((long)register0x00000020 + -0xd8);
    *(undefined4 *)((long)register0x00000020 + -0x134) = *(undefined4 *)((long)register0x00000020 + -0xd4);
    lVar16 = *(long *)SVar20;
    SVar19.hasValue = 0;
    SVar19.value = 0;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      SVar19 = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar16 + 0x12e) << 4);
      SVar25.hasValue = 0;
      SVar25.value = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + (long)SVar25) == TypeInfo_IAottgSettingAdapter) {
          SVar19 = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + (long)SVar25) + 0xb) * 0x10);
          puVar15 = (undefined8 *)(lVar16 + (long)SVar19 + 0x138);
          goto label_0446252f;
        }
        SVar25 = (System_Nullable_bool__Fields)((long)SVar25 + 0x10);
      } while (SVar19 != SVar25);
    }
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x44624fc;
    puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar20,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control_00 = *(System_Nullable_bool__Fields *)(puVar15 + 1);
    *(undefined4 *)((long)register0x00000020 + -0x150) = *(undefined4 *)((long)register0x00000020 + -0x130);
    *(undefined4 *)((long)register0x00000020 + -0x14c) = *(undefined4 *)((long)register0x00000020 + -300);
    *(undefined4 *)((long)register0x00000020 + -0x148) = *(undefined4 *)((long)register0x00000020 + -0x128);
    *(undefined4 *)((long)register0x00000020 + -0x144) = *(undefined4 *)((long)register0x00000020 + -0x124);
    *(undefined4 *)((long)register0x00000020 + -0x160) = *(undefined4 *)((long)register0x00000020 + -0x140);
    *(undefined4 *)((long)register0x00000020 + -0x15c) = *(undefined4 *)((long)register0x00000020 + -0x13c);
    *(undefined4 *)((long)register0x00000020 + -0x158) = *(undefined4 *)((long)register0x00000020 + -0x138);
    *(undefined4 *)((long)register0x00000020 + -0x154) = *(undefined4 *)((long)register0x00000020 + -0x134);
    pcVar4 = (code *)*puVar15;
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x446254b;
    SVar24 = SVar20;
    (*pcVar4)();
    lVar16 = *(long *)((long)SVar9 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x110) = *(undefined8 *)((long)register0x00000020 + -0xd0);
    *(undefined8 *)((long)register0x00000020 + -0x108) = *(undefined8 *)((long)register0x00000020 + -200);
    *(undefined4 *)((long)register0x00000020 + -0x120) = *(undefined4 *)SVar21;
    *(undefined4 *)((long)register0x00000020 + -0x11c) = *(undefined4 *)((long)register0x00000020 + -0xdc);
    *(undefined4 *)((long)register0x00000020 + -0x118) = *(undefined4 *)((long)register0x00000020 + -0xd8);
    *(undefined4 *)((long)register0x00000020 + -0x114) = *(undefined4 *)((long)register0x00000020 + -0xd4);
    if (lVar16 != 0) goto label_0446256c;
  }
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x168) = SVar14;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x170) = SVar21;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x178) = SVar9;
  *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x180) = SVar20;
  SVar9 = SVar24;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar9 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar16 = *(long *)((long)SVar24 + 0x10);
  if (lVar16 == 0) {
label_04462728:
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x446272d;
    il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x1f0) = SVar14;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x1f8) = SVar21;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x200) = SVar24;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x208) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x210) = SVar27;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x218) = SVar20;
    SVar27 = SVar9;
    if (g_data_057ae79c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462759;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462765;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462771;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x446277d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462789;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462795;
      il2cpp_runtime_helper_023445d0(&"-value-button");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627a1;
      il2cpp_runtime_helper_023445d0(&"-slider");
      SVar27 = (System_Nullable_bool__Fields)&"0";
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627ad;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae79c = '\x01';
    }
    if (*(long *)((long)SVar9 + 0x10) != 0) {
      pSVar8 = *(System_String_o **)(*(long *)((long)SVar9 + 0x10) + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627d6;
      pSVar8 = System_String__Concat_3ae5ba0(pSVar8,"-slider",(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627e4;
      SVar20 = (System_Nullable_bool__Fields)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                         ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar9,
                          (Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,pSVar8,(MethodInfo *)SVar19);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44627f6;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000020 + -600) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x228) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x230) = 0x3f800000;
      *(undefined4 *)((long)register0x00000020 + -0x238) = 0x3f800000;
      *(undefined4 *)((long)register0x00000020 + -0x240) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x250) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462873;
      SVar27 = "Column";
      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar11,
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x270),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x268),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x260),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -600),
                           *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x250),
                           0.0,0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x248),
                           *(float *)((long)register0x00000020 + -0x240),
                           *(float *)((long)register0x00000020 + -0x238),
                           *(float *)((long)register0x00000020 + -0x230),
                           *(MethodInfo **)((long)register0x00000020 + -0x228));
      if (SVar20 != (System_Nullable_bool__Fields)0x0) {
        SVar27 = (System_Nullable_bool__Fields)((long)SVar20 + 0xd8);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar20 + 0xd8) = pGVar13;
        *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462895;
        il2cpp_runtime_helper_022b4080(SVar27,pGVar13);
        if (*(long *)((long)SVar9 + 0x10) != 0) {
          plVar6 = *(long **)(*(long *)((long)SVar9 + 0x10) + 0x28);
          if (plVar6 == (long *)0x0) {
            variant = 4;
            pSVar8 = "0";
          }
          else {
            lVar16 = *plVar6;
            if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
              lVar22 = 0;
              do {
                if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar22) == TypeInfo_IAottgSettingAdapter) {
                  puVar15 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar22) * 0x10 + lVar16 + 0x138);
                  goto label_04462936;
                }
                lVar22 = lVar22 + 0x10;
              } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar22);
            }
            *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462909;
            puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
            variant = (uint)(plVar6 != (long *)0x0) << 2;
            uVar17 = puVar15[1];
            pcVar4 = (code *)*puVar15;
            *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462943;
            pSVar8 = (System_String_o *)(*pcVar4)(plVar6,uVar17);
          }
          *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462955;
          SVar19 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
          *(undefined8 *)((long)register0x00000020 + -0x278) = 0x446296f;
          SVar27 = SVar19;
          System_Action_GisketchActionContext____ctor();
          SVar20 = control_00;
          if (*(long *)((long)SVar9 + 0x10) != 0) {
            SVar27 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar9 + 0x10) + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462991;
            id = System_String__Concat_3ae5ba0((System_String_o *)SVar27,"-value-button",(MethodInfo *)0x0);
            if (control_00 != (System_Nullable_bool__Fields)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44629c1;
              SVar27 = control_00;
              SVar20 = (System_Nullable_bool__Fields)
                       Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                 ((Gisketch_Aottg2UI_Code_AottgUi_o *)control_00,variant,pSVar8,
                                  (System_Action_GisketchActionContext__o *)SVar19,id,(System_String_o *)0x0,
                                  *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                                   ((long)register0x00000020 + -0x270),
                                  *(System_String_o **)((long)register0x00000020 + -0x268),
                                  *(MethodInfo **)((long)register0x00000020 + -0x260));
              if (*(long *)((long)SVar9 + 0x10) != 0) {
                cVar1 = *(char *)(*(long *)((long)SVar9 + 0x10) + 0x58);
                *(undefined2 *)((long)register0x00000020 + -0x21a) = 0;
                SVar27 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0x21a);
                *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44629f6;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o)SVar27,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
                if (SVar20 != (System_Nullable_bool__Fields)0x0) {
                  *(undefined2 *)((long)SVar20 + 0x6b) = *(undefined2 *)((long)register0x00000020 + -0x21a);
                  *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462a1e;
                  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                  *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
                  *(undefined8 *)((long)register0x00000020 + -600) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x228) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x230) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x238) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x240) = 0;
                  *(undefined4 *)((long)register0x00000020 + -0x248) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x250) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462a95;
                  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ((System_String_o *)"Column",(System_String_o *)0x0,
                                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                                       0.0,pGVar11,
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x270),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x268),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x260),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -600),
                                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                        ((long)register0x00000020 + -0x250),0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                       *(float *)((long)register0x00000020 + -0x248),
                                       *(float *)((long)register0x00000020 + -0x240),
                                       *(float *)((long)register0x00000020 + -0x238),
                                       *(float *)((long)register0x00000020 + -0x230),
                                       *(MethodInfo **)((long)register0x00000020 + -0x228));
                  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar20 + 0xd8) = pGVar13;
                  *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462aae;
                  il2cpp_runtime_helper_022b4080((long)SVar20 + 0xd8,pGVar13);
                  return;
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x278) = 0x4462ac2;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    lVar16 = *(long *)((long)SVar27 + 0x10);
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x278) = control_00;
    *(System_Nullable_bool__Fields *)((long)register0x00000020 + -0x280) = SVar20;
    *(undefined8 *)((long)register0x00000020 + -0x288) = uVar17;
    if (g_data_057ae7ad == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462afc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b14;
      il2cpp_runtime_helper_023445d0(&"setting-slider-value");
      g_data_057ae7ad = '\x01';
    }
    if (((lVar16 != 0) && (*(long *)(lVar16 + 0x28) != 0)) && (*(char *)(lVar16 + 0x58) == '\0')) {
      **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar16;
      uVar17 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b60;
      il2cpp_runtime_helper_022b4080(uVar17,lVar16);
      if (*(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x260) != (UnityEngine_GameObject_o *)0x0
         ) {
        *(undefined8 *)((long)register0x00000020 + -0x290) = 0x4462b78;
        pIVar18 = UnityEngine_GameObject__GetComponentInParent_object_
                            (*(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if ((pIVar18 != (Il2CppObject *)0x0) &&
           (pIVar18[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar18[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  SVar14 = (System_Nullable_bool__Fields)((long)register0x00000020 + -0x158);
  SVar20 = *(System_Nullable_bool__Fields *)(lVar16 + 0x28);
  if (SVar20 == (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x1b8) = *(undefined8 *)((long)register0x00000020 + -0x148);
    *(undefined8 *)((long)register0x00000020 + -0x1b0) = *(undefined8 *)((long)register0x00000020 + -0x140);
    *(undefined8 *)((long)register0x00000020 + -0x1c8) = *(undefined8 *)SVar14;
    *(undefined8 *)((long)register0x00000020 + -0x1c0) = *(undefined8 *)((long)register0x00000020 + -0x150);
  }
  else {
    if (*(long *)((long)register0x00000020 + -0x148) == 0) {
      SVar21.hasValue = 0;
      SVar21.value = 0;
    }
    else {
      pSVar8 = *(System_String_o **)(*(long *)((long)register0x00000020 + -0x148) + 0x50);
      *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x4462631;
      uVar7 = System_String__op_Equality(pSVar8,"true",(MethodInfo *)0x0);
      SVar21.value = 0;
      SVar21.hasValue = uVar7;
    }
    lVar16 = *(long *)SVar20;
    SVar19.hasValue = 0;
    SVar19.value = 0;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      SVar19 = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar16 + 0x12e) << 4);
      SVar26.hasValue = 0;
      SVar26.value = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + (long)SVar26) == TypeInfo_IAottgSettingAdapter) {
          SVar19 = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + (long)SVar26) + 8) * 0x10);
          puVar15 = (undefined8 *)(lVar16 + (long)SVar19 + 0x138);
          goto label_044626b5;
        }
        SVar26 = (System_Nullable_bool__Fields)((long)SVar26 + 0x10);
      } while (SVar19 != SVar26);
    }
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x446269c;
    puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar20,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
    uVar17 = puVar15[1];
    control_00 = (System_Nullable_bool__Fields)((ulong)SVar21 & 0xff);
    pcVar4 = (code *)*puVar15;
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x44626c2;
    SVar9 = SVar20;
    (*pcVar4)(SVar20,control_00,uVar17);
    lVar16 = *(long *)((long)SVar24 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x1b8) = *(undefined8 *)((long)register0x00000020 + -0x148);
    *(undefined8 *)((long)register0x00000020 + -0x1b0) = *(undefined8 *)((long)register0x00000020 + -0x140);
    *(undefined4 *)((long)register0x00000020 + -0x1c8) = *(undefined4 *)SVar14;
    *(undefined4 *)((long)register0x00000020 + -0x1c4) = *(undefined4 *)((long)register0x00000020 + -0x154);
    *(undefined4 *)((long)register0x00000020 + -0x1c0) = *(undefined4 *)((long)register0x00000020 + -0x150);
    *(undefined4 *)((long)register0x00000020 + -0x1bc) = *(undefined4 *)((long)register0x00000020 + -0x14c);
    if (lVar16 == 0) goto label_04462728;
  }
  *(undefined8 *)((long)register0x00000020 + -0x198) = *(undefined8 *)((long)register0x00000020 + -0x1b8);
  *(undefined8 *)((long)register0x00000020 + -400) = *(undefined8 *)((long)register0x00000020 + -0x1b0);
  *(undefined8 *)((long)register0x00000020 + -0x1a8) = *(undefined8 *)((long)register0x00000020 + -0x1c8);
  *(undefined8 *)((long)register0x00000020 + -0x1a0) = *(undefined8 *)((long)register0x00000020 + -0x1c0);
  lVar16 = *(long *)(lVar16 + 0x88);
  if (lVar16 != 0) {
    uVar17 = *(undefined8 *)(lVar16 + 0x28);
    uVar5 = *(undefined8 *)(lVar16 + 0x40);
    *(undefined4 *)((long)register0x00000020 + -0x1d8) = *(undefined4 *)((long)register0x00000020 + -0x198);
    *(undefined4 *)((long)register0x00000020 + -0x1d4) = *(undefined4 *)((long)register0x00000020 + -0x194);
    *(undefined4 *)((long)register0x00000020 + -0x1d0) = *(undefined4 *)((long)register0x00000020 + -400);
    *(undefined4 *)((long)register0x00000020 + -0x1cc) = *(undefined4 *)((long)register0x00000020 + -0x18c);
    *(undefined4 *)((long)register0x00000020 + -0x1e8) = *(undefined4 *)((long)register0x00000020 + -0x1a8);
    *(undefined4 *)((long)register0x00000020 + -0x1e4) = *(undefined4 *)((long)register0x00000020 + -0x1a4);
    *(undefined4 *)((long)register0x00000020 + -0x1e0) = *(undefined4 *)((long)register0x00000020 + -0x1a0);
    *(undefined4 *)((long)register0x00000020 + -0x1dc) = *(undefined4 *)((long)register0x00000020 + -0x19c);
    pcVar4 = *(code **)(lVar16 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0x446271d;
    (*pcVar4)(uVar5,uVar17);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildReadOnly
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x4461c10

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  long *plVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  System_Nullable_bool__Fields SVar12;
  undefined8 *puVar13;
  long lVar14;
  System_String_o *id;
  Il2CppObject *pIVar15;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields id_00;
  System_Action_GisketchActionContext__o *unaff_RBX;
  System_Nullable_bool__Fields SVar16;
  System_Nullable_bool__Fields SVar17;
  long lVar18;
  System_Nullable_bool__Fields SVar19;
  System_Nullable_bool__Fields SVar20;
  System_Nullable_bool__Fields SVar21;
  System_Nullable_bool__Fields SVar22;
  System_Nullable_bool__Fields SVar23;
  System_Nullable_bool__Fields SVar24;
  System_Nullable_bool__Fields SVar25;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar26;
  float min;
  float max;
  float value;
  UnityEngine_GameObject_o *in_stack_fffffffffffffd28;
  undefined2 uStack_292;
  System_Nullable_bool__Fields SStack_290;
  System_Nullable_bool__Fields SStack_288;
  System_Nullable_bool__Fields SStack_280;
  System_Nullable_bool__Fields SStack_278;
  System_Nullable_bool__Fields SStack_270;
  System_Nullable_bool__Fields SStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  System_Nullable_bool__Fields SStack_1f8;
  System_Nullable_bool__Fields SStack_1f0;
  System_Nullable_bool__Fields SStack_1e8;
  System_Nullable_bool__Fields SStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  bool_conflict bStack_1c0;
  bool_conflict bStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  System_Nullable_bool__Fields SStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  System_Nullable_bool__Fields SStack_180;
  System_Nullable_bool__Fields SStack_178;
  System_Nullable_bool__Fields SStack_170;
  System_Nullable_bool__Fields SStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  float fStack_148;
  float fStack_144;
  System_Nullable_bool__Fields SStack_140;
  System_Nullable_bool__Fields SStack_138;
  System_Nullable_bool__Fields SStack_130;
  System_Nullable_bool__Fields SStack_128;
  System_Nullable_bool__Fields SStack_120;
  System_Nullable_bool__Fields SStack_118;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar27;
  undefined2 local_8e;
  float local_8c;
  System_Action_GisketchActionContext__o *pSStack_88;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStack_80;
  
  SVar21 = (System_Nullable_bool__Fields)control;
  SVar17 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae797 == '\0') {
    pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461c38;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461c44;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461c50;
    il2cpp_runtime_helper_023445d0(&"text");
    SVar17 = (System_Nullable_bool__Fields)&"-value";
    pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461c5c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae797 = '\x01';
  }
  pGVar7 = (__this->fields)._descriptor;
  if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    unaff_RBX = (pGVar7->fields).Action;
    if (unaff_RBX == (System_Action_GisketchActionContext__o *)0x0) {
      unaff_R15 = (System_Nullable_bool__Fields)(pGVar7->fields).Adapter;
      if (unaff_R15 == (System_Nullable_bool__Fields)0x0) {
        in_RCX = *(System_Nullable_bool__Fields *)(g_data_057b9c00 + 0xb8);
        unaff_RBX = *(System_Action_GisketchActionContext__o **)in_RCX;
        unaff_R13.hasValue = 0;
        unaff_R13.value = 0;
      }
      else {
        lVar14 = *(long *)unaff_R15;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar18 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar18) == TypeInfo_IAottgSettingAdapter) {
              in_RCX = (System_Nullable_bool__Fields)
                       ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar18) * 0x10 + lVar14 + 0x138);
              goto label_04461d0b;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar18);
        }
        pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461cd9;
        in_RCX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_R15,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
        SVar21 = *(System_Nullable_bool__Fields *)((long)in_RCX + 8);
        pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461d14;
        SVar17 = unaff_R15;
        unaff_RBX = (System_Action_GisketchActionContext__o *)(**(code **)in_RCX)();
        pGVar7 = (__this->fields)._descriptor;
        unaff_R13 = (System_Nullable_bool__Fields)control;
        if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_04461e40;
      }
    }
    SVar17 = (System_Nullable_bool__Fields)(pGVar7->fields).Id;
    pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461d3c;
    SVar21 = "-value";
    pSVar8 = System_String__Concat_3ae5ba0
                       ((System_String_o *)SVar17,(System_String_o *)"-value",(MethodInfo *)0x0);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461d6b;
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (control,(System_String_o *)unaff_RBX,"text",pSVar8,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461d7d;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)
               Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461d8f;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      SVar21.hasValue = 0;
      SVar21.value = 0;
      in_RCX.hasValue = 0;
      in_RCX.value = 0;
      pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461e15;
      SVar17 = "Column";
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
      unaff_RBX = (System_Action_GisketchActionContext__o *)0x0;
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar11);
        return;
      }
    }
  }
label_04461e40:
  pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x4461e45;
  local_8c = (float)il2cpp_runtime_helper_022b2c90();
  SVar23 = SVar21;
  SVar19 = SVar17;
  pSStack_88 = unaff_RBX;
  pGStack_80 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this;
  if (g_data_057ae79a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar19 = (System_Nullable_bool__Fields)&"Row";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar21 == (System_Nullable_bool__Fields)0x0) {
    return;
  }
  if (*(long *)((long)SVar17 + 0x10) != 0) {
    local_8e = 0;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)&local_8e,
               (uint)(*(char *)(*(long *)((long)SVar17 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar21 + 0x6b) = local_8e;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(local_8c,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                         0.0,pGVar10,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar21 + 0xd8) = pGVar11;
    il2cpp_runtime_helper_022b4080((long)SVar21 + 0xd8,pGVar11);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar27 = control;
  SVar20 = unaff_R13;
  SVar16 = SVar17;
  if (g_data_057ae799 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar19 + 0x10) == 0) {
label_044620a1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar17 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar19 + 0x10) + 0x60);
    if (SVar17 == (System_Nullable_bool__Fields)0x0) {
      SVar23.hasValue = 0;
      SVar23.value = 0;
      SVar17 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (SVar17 == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar23.value = 0;
    SVar23.hasValue = *(uint *)((long)SVar17 + 0x18);
    unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)SVar17 + 0x18) < 1) {
      return;
    }
    if (unaff_R15 != (System_Nullable_bool__Fields)0x0) {
      SVar24 = (System_Nullable_bool__Fields)(*(ulong *)((long)SVar17 + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R15 + 0x20);
      SVar19.hasValue = 0;
      SVar19.value = 0;
      control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17;
      while (control = (Gisketch_Aottg2UI_Code_AottgUi_o *)((long)control + 0x20),
            (ulong)SVar19 < (ulong)SVar24) {
        __this_00.fields.Text = (System_String_o *)pGVar27;
        __this_00.fields.Value = (System_String_o *)SVar21;
        __this_00.fields.Enabled = SVar20.hasValue;
        __this_00.fields._20_4_ = SVar20.value;
        __this_00.fields.Tooltip = (System_String_o *)SVar16;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           (__this_00,(MethodInfo *)control);
        in_RCX.value = 0;
        in_RCX.hasValue = *(uint *)((long)unaff_R15 + 0x18);
        if ((ulong)in_RCX <= (ulong)SVar19) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar12;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar19 = (System_Nullable_bool__Fields)((long)SVar19 + 1);
        SVar24.value = 0;
        SVar24.hasValue = *(uint *)((long)SVar17 + 0x18);
        in_RCX = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)SVar17 + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar23 = SVar12;
        if ((long)in_RCX <= (long)SVar19) {
          return;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar17 = (System_Nullable_bool__Fields)((long)SVar17 + 0x20);
  __this_01.fields.Text = (System_String_o *)pGVar27;
  __this_01.fields.Value = (System_String_o *)SVar21;
  __this_01.fields.Enabled = SVar20.hasValue;
  __this_01.fields._20_4_ = SVar20.value;
  __this_01.fields.Tooltip = (System_String_o *)SVar16;
  SVar20 = SVar17;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice(__this_01,(MethodInfo *)SVar17);
  il2cpp_runtime_helper_022b2c90();
  SVar16 = SVar23;
  SVar21 = SVar20;
  SStack_138 = SVar19;
  SStack_130 = (System_Nullable_bool__Fields)control;
  SStack_128 = unaff_R13;
  SStack_120 = SVar17;
  SStack_118 = unaff_R15;
  if (g_data_057ae794 == '\0') {
    SStack_168.hasValue = 0x44620ec;
    SStack_168.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    SStack_168.hasValue = 0x44620f8;
    SStack_168.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    SStack_168.hasValue = 0x4462104;
    SStack_168.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SStack_168.hasValue = 0x4462110;
    SStack_168.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar21 = (System_Nullable_bool__Fields)&"slider";
    SStack_168.hasValue = 0x446211c;
    SStack_168.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar17 = SVar23;
  SStack_170 = id_00;
  if (*(long *)((long)SVar20 + 0x10) != 0) {
    SVar19 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar20 + 0x10) + 0x28);
    if (SVar19 == (System_Nullable_bool__Fields)0x0) {
      fStack_148 = 0.0;
    }
    else {
      lVar14 = *(long *)SVar19;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar18) == TypeInfo_IAottgSettingAdapter) {
            puVar13 = (undefined8 *)
                      (lVar14 + (long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar18) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar18);
      }
      SStack_168.hasValue = 0x446219c;
      SStack_168.value = 0;
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar19,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      SStack_168.hasValue = 0x44621cf;
      SStack_168.value = 0;
      fStack_148 = (float)(*(code *)*puVar13)(SVar19,puVar13[1]);
    }
    SStack_168.hasValue = 0x44621e4;
    SStack_168.value = 0;
    SVar12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    SStack_168.hasValue = 0x44621fe;
    SStack_168.value = 0;
    SVar16 = SVar20;
    SVar21 = SVar12;
    System_Action_GisketchActionContext____ctor();
    SVar24 = "slider";
    in_RCX = *(System_Nullable_bool__Fields *)((long)SVar20 + 0x10);
    SVar17 = SVar12;
    control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar23;
    unaff_R13 = id_00;
    SStack_170 = id_00;
    if (in_RCX != (System_Nullable_bool__Fields)0x0) {
      SVar19 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      min = 0.0;
      value = fStack_148;
      SStack_140 = SVar20;
      if (SVar19 != (System_Nullable_bool__Fields)0x0) {
        lVar14 = *(long *)SVar19;
        fStack_144 = fStack_148;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar18 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar18) == TypeInfo_IAottgSettingAdapter) {
              puVar13 = (undefined8 *)
                        (lVar14 + (long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar18) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar18);
        }
        SStack_168.hasValue = 0x446229c;
        SStack_168.value = 0;
        puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar19,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        SVar16 = *(System_Nullable_bool__Fields *)(puVar13 + 1);
        SStack_168.hasValue = 0x44622c3;
        SStack_168.value = 0;
        SVar21 = SVar19;
        min = (float)(*(code *)*puVar13)();
        in_RCX = *(System_Nullable_bool__Fields *)((long)SStack_140 + 0x10);
        control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar12;
        SStack_170 = SVar23;
        SVar20 = SVar24;
        value = fStack_144;
        if (in_RCX == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
      }
      control = (Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_140;
      SVar17 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      SVar20 = SVar23;
      SStack_170 = SVar12;
      if (SVar17 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        if (SVar23 == (System_Nullable_bool__Fields)0x0) {
          SVar19.hasValue = 0;
          SVar19.value = 0;
          SVar16 = id_00;
        }
        else {
label_044623de:
          SStack_168.hasValue = 0x44623fc;
          SStack_168.value = 0;
          in_RCX = SVar12;
          SVar16 = id_00;
          SVar21 = SVar23;
          SVar19 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar23,(System_String_o *)id_00,value,0,
                              (System_Action_GisketchActionContext__o *)SVar12,(System_String_o *)SVar24,min,
                              max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (*(long *)((long)control + 0x10) != 0) {
            bVar26 = *(char *)(*(long *)((long)control + 0x10) + 0x58) == '\0';
            uStack_14a = 0;
            SVar16._1_7_ = 0;
            SVar16.hasValue._0_1_ = bVar26;
            SVar21 = (System_Nullable_bool__Fields)&uStack_14a;
            SStack_168.hasValue = 0x446242e;
            SStack_168.value = 0;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar21,(uint)bVar26,MethodInfo_Nullable_1_Boolean);
            if (SVar19 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar19 + 0x6b) = uStack_14a;
              return;
            }
          }
        }
      }
      else {
        lVar14 = *(long *)SVar17;
        in_RCX.hasValue = 0;
        in_RCX.value = 0;
        fStack_148 = min;
        fStack_144 = value;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar14 + 0x12e) << 4);
          SVar22.hasValue = 0;
          SVar22.value = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + (long)SVar22) == TypeInfo_IAottgSettingAdapter) {
              in_RCX = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + (long)SVar22) + 4) * 0x10);
              puVar13 = (undefined8 *)(lVar14 + (long)in_RCX + 0x138);
              goto label_044623be;
            }
            SVar22 = (System_Nullable_bool__Fields)((long)SVar22 + 0x10);
          } while (in_RCX != SVar22);
        }
        SStack_168.hasValue = 0x446237c;
        SStack_168.value = 0;
        puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        SVar16 = *(System_Nullable_bool__Fields *)(puVar13 + 1);
        SStack_168.hasValue = 0x44623c7;
        SStack_168.value = 0;
        SVar21 = SVar17;
        max = (float)(*(code *)*puVar13)();
        SVar19 = SVar24;
        value = fStack_144;
        min = fStack_148;
        if (SVar23 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  SStack_168.hasValue = 0x4462453;
  SStack_168.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar23 = SVar21;
  SStack_178 = SVar19;
  SStack_168 = SVar20;
  if (g_data_057ae798 == '\0') {
    SVar23 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    SStack_1e0.hasValue = 0x4462481;
    SStack_1e0.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar14 = *(long *)((long)SVar21 + 0x10);
  if (lVar14 != 0) {
    SVar20 = (System_Nullable_bool__Fields)&uStack_158;
    SVar19 = *(System_Nullable_bool__Fields *)(lVar14 + 0x28);
    if (SVar19 == (System_Nullable_bool__Fields)0x0) {
      uStack_198 = uStack_158;
      uStack_194 = uStack_154;
      uStack_190 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
      uStack_188 = CONCAT44(fStack_144,fStack_148);
label_0446256c:
      uStack_1a8 = uStack_188;
      uVar3 = uStack_1a8;
      SStack_1a0 = SStack_140;
      SVar21 = SStack_1a0;
      uStack_1b0 = uStack_190;
      uVar2 = uStack_1b0;
      lVar14 = *(long *)(lVar14 + 0x88);
      if (lVar14 != 0) {
        uStack_1b0._0_4_ = (undefined4)uStack_190;
        uStack_1b0._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
        uStack_1a8._0_4_ = (undefined4)uStack_188;
        uStack_1a8._4_4_ = (undefined4)((ulong)uStack_188 >> 0x20);
        SStack_1a0.hasValue = SStack_140.hasValue;
        SStack_1a0.value = SStack_140.value;
        uStack_1c8 = (undefined4)uStack_1a8;
        uStack_1c4 = uStack_1a8._4_4_;
        bStack_1c0 = SStack_1a0.hasValue;
        bStack_1bc = SStack_1a0.value;
        uStack_1d8 = uStack_198;
        uStack_1d4 = uStack_194;
        uStack_1d0 = (undefined4)uStack_1b0;
        uStack_1cc = uStack_1b0._4_4_;
        SStack_1e0.hasValue = 0x44625a7;
        SStack_1e0.value = 0;
        uStack_1b0 = uVar2;
        uStack_1a8 = uVar3;
        SStack_1a0 = SVar21;
        SStack_180 = SStack_140;
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
      }
      return;
    }
    uStack_1a8 = CONCAT44(fStack_144,fStack_148);
    SStack_1a0 = SStack_140;
    uStack_1b8 = CONCAT44(uStack_154,uStack_158);
    uStack_1b0 = CONCAT44(CONCAT22(uStack_14a,uStack_14c),uStack_150);
    lVar14 = *(long *)SVar19;
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar14 + 0x12e) << 4);
      SVar12.hasValue = 0;
      SVar12.value = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + (long)SVar12) == TypeInfo_IAottgSettingAdapter) {
          in_RCX = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + (long)SVar12) + 0xb) * 0x10);
          puVar13 = (undefined8 *)(lVar14 + (long)in_RCX + 0x138);
          goto label_0446252f;
        }
        SVar12 = (System_Nullable_bool__Fields)((long)SVar12 + 0x10);
      } while (in_RCX != SVar12);
    }
    SStack_1e0.hasValue = 0x44624fc;
    SStack_1e0.value = 0;
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar19,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    SVar16 = *(System_Nullable_bool__Fields *)(puVar13 + 1);
    uStack_1c8 = (undefined4)uStack_1a8;
    uStack_1c4 = uStack_1a8._4_4_;
    bStack_1c0 = SStack_1a0.hasValue;
    bStack_1bc = SStack_1a0.value;
    uStack_1d8 = (undefined4)uStack_1b8;
    uStack_1d4 = uStack_1b8._4_4_;
    uStack_1d0 = (undefined4)uStack_1b0;
    uStack_1cc = uStack_1b0._4_4_;
    SStack_1e0.hasValue = 0x446254b;
    SStack_1e0.value = 0;
    SVar23 = SVar19;
    (*(code *)*puVar13)();
    lVar14 = *(long *)((long)SVar21 + 0x10);
    uStack_188 = CONCAT44(fStack_144,fStack_148);
    SStack_180 = SStack_140;
    uStack_198 = uStack_158;
    uStack_194 = uStack_154;
    uStack_190 = CONCAT44(CONCAT22(uStack_14a,uStack_14c),uStack_150);
    if (lVar14 != 0) goto label_0446256c;
  }
  SStack_1e0.hasValue = 0x44625b6;
  SStack_1e0.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar24 = SVar23;
  SStack_1f8 = SVar19;
  SStack_1f0 = SVar21;
  SStack_1e8 = SVar20;
  SStack_1e0 = SVar17;
  if (g_data_057ae79b == '\0') {
    SStack_268.hasValue = 0x44625e2;
    SStack_268.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar24 = (System_Nullable_bool__Fields)&"true";
    SStack_268.hasValue = 0x44625ee;
    SStack_268.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar14 = *(long *)((long)SVar23 + 0x10);
  if (lVar14 != 0) {
    SVar17 = (System_Nullable_bool__Fields)&uStack_1d0;
    SVar19 = *(System_Nullable_bool__Fields *)(lVar14 + 0x28);
    if (SVar19 == (System_Nullable_bool__Fields)0x0) {
      uStack_240 = CONCAT44(uStack_1cc,uStack_1d0);
      uStack_238 = CONCAT44(uStack_1c4,uStack_1c8);
      uStack_230 = CONCAT44(bStack_1bc,bStack_1c0);
    }
    else {
      if (CONCAT44(bStack_1bc,bStack_1c0) == 0) {
        SVar20.hasValue = 0;
        SVar20.value = 0;
      }
      else {
        SStack_268.hasValue = 0x4462631;
        SStack_268.value = 0;
        uVar6 = System_String__op_Equality
                          (*(System_String_o **)(CONCAT44(bStack_1bc,bStack_1c0) + 0x50),"true",
                           (MethodInfo *)0x0);
        SVar20.value = 0;
        SVar20.hasValue = uVar6;
      }
      lVar14 = *(long *)SVar19;
      in_RCX.hasValue = 0;
      in_RCX.value = 0;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar14 + 0x12e) << 4);
        SVar25.hasValue = 0;
        SVar25.value = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + (long)SVar25) == TypeInfo_IAottgSettingAdapter) {
            in_RCX = (System_Nullable_bool__Fields)
                     ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + (long)SVar25) + 8) * 0x10);
            puVar13 = (undefined8 *)(lVar14 + (long)in_RCX + 0x138);
            goto label_044626b5;
          }
          SVar25 = (System_Nullable_bool__Fields)((long)SVar25 + 0x10);
        } while (in_RCX != SVar25);
      }
      SStack_268.hasValue = 0x446269c;
      SStack_268.value = 0;
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar19,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      SVar16 = (System_Nullable_bool__Fields)((ulong)SVar20 & 0xff);
      SStack_268.hasValue = 0x44626c2;
      SStack_268.value = 0;
      SVar24 = SVar19;
      (*(code *)*puVar13)(SVar19,SVar16,puVar13[1]);
      lVar14 = *(long *)((long)SVar23 + 0x10);
      uStack_230 = CONCAT44(bStack_1bc,bStack_1c0);
      uStack_228 = uStack_1b8;
      uStack_240 = CONCAT44(uStack_1cc,uStack_1d0);
      uStack_238 = CONCAT44(uStack_1c4,uStack_1c8);
      if (lVar14 == 0) goto label_04462728;
    }
    uStack_210 = uStack_230;
    uVar4 = uStack_210;
    uStack_208 = uStack_1b8;
    uVar5 = uStack_208;
    uStack_220 = uStack_240;
    uVar2 = uStack_220;
    uStack_218 = uStack_238;
    uVar3 = uStack_218;
    lVar14 = *(long *)(lVar14 + 0x88);
    if (lVar14 != 0) {
      uStack_220._0_4_ = (undefined4)uStack_240;
      uStack_220._4_4_ = (undefined4)((ulong)uStack_240 >> 0x20);
      uStack_218._0_4_ = (undefined4)uStack_238;
      uStack_218._4_4_ = (undefined4)((ulong)uStack_238 >> 0x20);
      uStack_210._0_4_ = (undefined4)uStack_230;
      uStack_210._4_4_ = (undefined4)((ulong)uStack_230 >> 0x20);
      uStack_208._0_4_ = (undefined4)uStack_1b8;
      uStack_208._4_4_ = (undefined4)((ulong)uStack_1b8 >> 0x20);
      uStack_250 = (undefined4)uStack_210;
      uStack_24c = uStack_210._4_4_;
      uStack_248 = (undefined4)uStack_208;
      uStack_244 = uStack_208._4_4_;
      uStack_260 = (undefined4)uStack_220;
      uStack_25c = uStack_220._4_4_;
      uStack_258 = (undefined4)uStack_218;
      uStack_254 = uStack_218._4_4_;
      SStack_268.hasValue = 0x446271d;
      SStack_268.value = 0;
      uStack_220 = uVar2;
      uStack_218 = uVar3;
      uStack_210 = uVar4;
      uStack_208 = uVar5;
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
    }
    return;
  }
label_04462728:
  SStack_268.hasValue = 0x446272d;
  SStack_268.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar21 = SVar24;
  SStack_290 = SVar19;
  SStack_288 = (System_Nullable_bool__Fields)control;
  SStack_280 = unaff_R13;
  SStack_278 = SVar23;
  SStack_270 = SVar20;
  SStack_268 = SVar17;
  if (g_data_057ae79c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-value-button");
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar21 = (System_Nullable_bool__Fields)&"0";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar24 + 0x10) != 0) {
    pSVar8 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)(*(long *)((long)SVar24 + 0x10) + 0x10),"-slider",
                        (MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar24,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,pSVar8,(MethodInfo *)in_RCX);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffd28 = (UnityEngine_GameObject_o *)0x0;
    SVar21 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar10,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      SVar21 = (System_Nullable_bool__Fields)&(pGVar9->fields).search;
      (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(SVar21,pGVar11);
      if (*(long *)((long)SVar24 + 0x10) != 0) {
        plVar1 = *(long **)(*(long *)((long)SVar24 + 0x10) + 0x28);
        if (plVar1 == (long *)0x0) {
          variant = 4;
          pSVar8 = "0";
        }
        else {
          lVar14 = *plVar1;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar18) == TypeInfo_IAottgSettingAdapter) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar18) * 0x10 + lVar14 + 0x138);
                goto label_04462936;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar18);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar1,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar1 != (long *)0x0) << 2;
          pSVar8 = (System_String_o *)(*(code *)*puVar13)(plVar1,puVar13[1]);
        }
        SVar17 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar21 = SVar17;
        System_Action_GisketchActionContext____ctor();
        if (*(long *)((long)SVar24 + 0x10) != 0) {
          SVar21 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar24 + 0x10) + 0x10);
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar21,"-value-button",(MethodInfo *)0x0);
          if (SVar16 != (System_Nullable_bool__Fields)0x0) {
            in_stack_fffffffffffffd28 = (UnityEngine_GameObject_o *)0x0;
            pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,variant,pSVar8,
                                (System_Action_GisketchActionContext__o *)SVar17,id,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0);
            SVar21 = SVar16;
            if (*(long *)((long)SVar24 + 0x10) != 0) {
              uStack_292 = 0;
              SVar21 = (System_Nullable_bool__Fields)&uStack_292;
              System_Nullable_bool____ctor
                        ((System_Nullable_bool__o)SVar21,
                         (uint)(*(char *)(*(long *)((long)SVar24 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
              if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined2 *)((long)&(pGVar9->fields).hasIcon + 3) = uStack_292;
                pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ((System_String_o *)"Column",(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     pGVar10,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
                il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar11);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar14 = *(long *)((long)SVar21 + 0x10);
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) && (*(char *)(lVar14 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar14;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar14);
    if (((in_stack_fffffffffffffd28 != (UnityEngine_GameObject_o *)0x0) &&
        (pIVar15 = UnityEngine_GameObject__GetComponentInParent_object_
                             (in_stack_fffffffffffffd28,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar15 != (Il2CppObject *)0x0)) &&
       (pIVar15[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar15[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnValueChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4462460

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnValueChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar4;
  long lVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_Nullable_bool__Fields action;
  System_String_o *id;
  Il2CppObject *pIVar10;
  MethodInfo *in_RCX;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar11;
  System_Nullable_bool__Fields __this_00;
  long lVar12;
  int32_t variant;
  ulong uVar13;
  UnityEngine_GameObject_o *in_stack_fffffffffffffe88;
  undefined2 uStack_132;
  System_Nullable_bool__Fields SStack_130;
  int32_t iStack_60;
  undefined4 uStack_5c;
  
  SVar11 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae798 == '\0') {
    SVar11 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  pGVar4 = (__this->fields)._descriptor;
  if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    unaff_RBX = (System_Nullable_bool__Fields)(pGVar4->fields).Adapter;
    if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
label_0446256c:
      pSVar6 = (pGVar4->fields).ReadOnlyText;
      if (pSVar6 != (System_String_o *)0x0) {
        (*(code *)pSVar6[1].klass)(pSVar6[2].fields,pSVar6[1].fields);
      }
      return;
    }
    lVar5 = *(long *)unaff_RBX;
    in_RCX = (MethodInfo *)0x0;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      in_RCX = (MethodInfo *)((ulong)*(ushort *)(lVar5 + 0x12e) << 4);
      lVar12 = 0;
      do {
        if (*(long *)(lVar12 + *(long *)(lVar5 + 0xb0)) == TypeInfo_IAottgSettingAdapter) {
          in_RCX = (MethodInfo *)((long)(*(int *)(lVar12 + 8 + *(long *)(lVar5 + 0xb0)) + 0xb) * 0x10);
          puVar3 = (undefined8 *)((long)&in_RCX[3].parameters + lVar5);
          goto label_0446252f;
        }
        lVar12 = lVar12 + 0x10;
      } while (in_RCX != (MethodInfo *)lVar12);
    }
    puVar3 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    method = *(MethodInfo **)(puVar3 + 1);
    iStack_60 = context.fields.InputSource;
    uStack_5c = context.fields._28_4_;
    SVar11 = unaff_RBX;
    (*(code *)*puVar3)();
    pGVar4 = (__this->fields)._descriptor;
    if (pGVar4 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_0446256c;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = SVar11;
  if (g_data_057ae79b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    __this_00 = (System_Nullable_bool__Fields)&"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar5 = *(long *)((long)SVar11 + 0x10);
  if (lVar5 != 0) {
    unaff_RBX = *(System_Nullable_bool__Fields *)(lVar5 + 0x28);
    if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
      if (CONCAT44(uStack_5c,iStack_60) == 0) {
        uVar13 = 0;
      }
      else {
        uVar2 = System_String__op_Equality
                          (*(System_String_o **)(CONCAT44(uStack_5c,iStack_60) + 0x50),"true",
                           (MethodInfo *)0x0);
        uVar13 = (ulong)uVar2;
      }
      lVar5 = *(long *)unaff_RBX;
      in_RCX = (MethodInfo *)0x0;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        in_RCX = (MethodInfo *)((ulong)*(ushort *)(lVar5 + 0x12e) << 4);
        lVar12 = 0;
        do {
          if (*(long *)(lVar12 + *(long *)(lVar5 + 0xb0)) == TypeInfo_IAottgSettingAdapter) {
            in_RCX = (MethodInfo *)((long)(*(int *)(lVar12 + 8 + *(long *)(lVar5 + 0xb0)) + 8) * 0x10);
            puVar3 = (undefined8 *)((long)&in_RCX[3].parameters + lVar5);
            goto label_044626b5;
          }
          lVar12 = lVar12 + 0x10;
        } while (in_RCX != (MethodInfo *)lVar12);
      }
      puVar3 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      method = (MethodInfo *)(uVar13 & 0xff);
      __this_00 = unaff_RBX;
      (*(code *)*puVar3)(unaff_RBX,method,puVar3[1]);
      lVar5 = *(long *)((long)SVar11 + 0x10);
      if (lVar5 == 0) goto label_04462728;
    }
    lVar5 = *(long *)(lVar5 + 0x88);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    return;
  }
label_04462728:
  il2cpp_runtime_helper_022b2c90();
  SVar11 = __this_00;
  SStack_130 = unaff_RBX;
  if (g_data_057ae79c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-value-button");
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar11 = (System_Nullable_bool__Fields)&"0";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)__this_00 + 0x10) != 0) {
    pSVar6 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)(*(long *)((long)__this_00 + 0x10) + 0x10),"-slider",
                        (MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)__this_00,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)method,pSVar6,in_RCX);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffe88 = (UnityEngine_GameObject_o *)0x0;
    SVar11 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      SVar11 = (System_Nullable_bool__Fields)&(pGVar7->fields).search;
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(SVar11,pGVar9);
      if (*(long *)((long)__this_00 + 0x10) != 0) {
        plVar1 = *(long **)(*(long *)((long)__this_00 + 0x10) + 0x28);
        if (plVar1 == (long *)0x0) {
          variant = 4;
          pSVar6 = "0";
        }
        else {
          lVar5 = *plVar1;
          if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar12) == TypeInfo_IAottgSettingAdapter) {
                puVar3 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar12) * 0x10 + lVar5 + 0x138);
                goto label_04462936;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar12);
          }
          puVar3 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar1,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar1 != (long *)0x0) << 2;
          pSVar6 = (System_String_o *)(*(code *)*puVar3)(plVar1,puVar3[1]);
        }
        action = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar11 = action;
        System_Action_GisketchActionContext____ctor();
        if (*(long *)((long)__this_00 + 0x10) != 0) {
          SVar11 = *(System_Nullable_bool__Fields *)(*(long *)((long)__this_00 + 0x10) + 0x10);
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar11,"-value-button",(MethodInfo *)0x0);
          if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
            in_stack_fffffffffffffe88 = (UnityEngine_GameObject_o *)0x0;
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,variant,pSVar6,
                                (System_Action_GisketchActionContext__o *)action,id,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0);
            SVar11 = (System_Nullable_bool__Fields)method;
            if (*(long *)((long)__this_00 + 0x10) != 0) {
              uStack_132 = 0;
              SVar11 = (System_Nullable_bool__Fields)&uStack_132;
              System_Nullable_bool____ctor
                        ((System_Nullable_bool__o)SVar11,
                         (uint)(*(char *)(*(long *)((long)__this_00 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
              if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined2 *)((long)&(pGVar7->fields).hasIcon + 3) = uStack_132;
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ((System_String_o *)"Column",(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
                il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar5 = *(long *)((long)SVar11 + 0x10);
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) && (*(char *)(lVar5 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar5;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar5);
    if (((in_stack_fffffffffffffe88 != (UnityEngine_GameObject_o *)0x0) &&
        (pIVar10 = UnityEngine_GameObject__GetComponentInParent_object_
                             (in_stack_fffffffffffffe88,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar10 != (Il2CppObject *)0x0)) &&
       (pIVar10[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar10[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ChoiceOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x4461fb0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  long *plVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  System_Nullable_bool__Fields SVar8;
  undefined8 *puVar9;
  System_Nullable_bool__Fields SVar10;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar11;
  long lVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar16;
  System_Nullable_bool__Fields SVar17;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *extraout_RAX;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields id_00;
  undefined8 unaff_RBX;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields SVar19;
  long lVar20;
  System_Nullable_bool__Fields unaff_R12;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields SVar21;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *unaff_R15;
  bool bVar22;
  float min;
  float max;
  float value;
  UnityEngine_GameObject_o *in_stack_fffffffffffffe08;
  undefined2 uStack_1b2;
  System_Nullable_bool__Fields SStack_1b0;
  System_Nullable_bool__Fields SStack_1a8;
  System_Nullable_bool__Fields SStack_1a0;
  System_Nullable_bool__Fields SStack_198;
  System_Nullable_bool__Fields SStack_190;
  System_Nullable_bool__Fields SStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  System_Nullable_bool__Fields SStack_118;
  System_Nullable_bool__Fields SStack_110;
  System_Nullable_bool__Fields SStack_108;
  System_Nullable_bool__Fields SStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  bool_conflict bStack_e0;
  bool_conflict bStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  System_Nullable_bool__Fields SStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  System_Nullable_bool__Fields SStack_a0;
  System_Nullable_bool__Fields SStack_98;
  System_Nullable_bool__Fields SStack_90;
  System_Nullable_bool__Fields SStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  float fStack_68;
  float fStack_64;
  System_Nullable_bool__Fields SStack_60;
  System_Nullable_bool__Fields SStack_58;
  System_Nullable_bool__Fields SStack_50;
  System_Nullable_bool__Fields SStack_48;
  System_Nullable_bool__Fields SStack_40;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_38;
  
  SVar19 = unaff_R12;
  SVar17 = unaff_R13;
  SVar18 = unaff_R14;
  if (g_data_057ae799 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_044620a1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R14.hasValue = (pGVar1->fields).MaxVisibleItems;
    unaff_R14.value = *(bool_conflict *)&(pGVar1->fields).field_0x54;
    if (unaff_R14 == (System_Nullable_bool__Fields)0x0) {
      method._0_4_ = 0;
      method._4_4_ = 0;
      unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (unaff_R14 == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    method._4_4_ = 0;
    method._0_4_ = *(uint *)((long)unaff_R14 + 0x18);
    unaff_R15 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)unaff_R14 + 0x18) < 1) {
      return unaff_R15;
    }
    if (unaff_R15 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      SVar21 = (System_Nullable_bool__Fields)(*(ulong *)((long)unaff_R14 + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)unaff_R15->m_Items;
      __this._0_4_ = 0;
      __this._4_4_ = 0;
      unaff_R12 = unaff_R14;
      while (unaff_R12 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20), __this < (ulong)SVar21) {
        __this_00.fields.Text = (System_String_o *)SVar19;
        __this_00.fields.Value = (System_String_o *)unaff_RBX;
        __this_00.fields.Enabled = SVar17.hasValue;
        __this_00.fields._20_4_ = SVar17.value;
        __this_00.fields.Tooltip = (System_String_o *)SVar18;
        SVar8 = (System_Nullable_bool__Fields)
                Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                          (__this_00,(MethodInfo *)unaff_R12);
        in_RCX.value = 0;
        in_RCX.hasValue = (uint)unaff_R15->max_length;
        if ((ulong)in_RCX <= __this) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar8;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)((long)__this + 1);
        SVar21.value = 0;
        SVar21.hasValue = *(uint *)((long)unaff_R14 + 0x18);
        in_RCX = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)unaff_R14 + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        method = (MethodInfo *)SVar8;
        if ((long)in_RCX <= (long)__this) {
          return unaff_R15;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar21 = (System_Nullable_bool__Fields)((long)unaff_R14 + 0x20);
  __this_01.fields.Text = (System_String_o *)SVar19;
  __this_01.fields.Value = (System_String_o *)unaff_RBX;
  __this_01.fields.Enabled = SVar17.hasValue;
  __this_01.fields._20_4_ = SVar17.value;
  __this_01.fields.Tooltip = (System_String_o *)SVar18;
  SVar17 = SVar21;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice(__this_01,(MethodInfo *)SVar21);
  il2cpp_runtime_helper_022b2c90();
  SVar18 = (System_Nullable_bool__Fields)method;
  SVar19 = SVar17;
  SStack_58 = (System_Nullable_bool__Fields)__this;
  SStack_50 = unaff_R12;
  SStack_48 = unaff_R13;
  SStack_40 = SVar21;
  pGStack_38 = unaff_R15;
  if (g_data_057ae794 == '\0') {
    SStack_88.hasValue = 0x44620ec;
    SStack_88.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    SStack_88.hasValue = 0x44620f8;
    SStack_88.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    SStack_88.hasValue = 0x4462104;
    SStack_88.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SStack_88.hasValue = 0x4462110;
    SStack_88.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar19 = (System_Nullable_bool__Fields)&"slider";
    SStack_88.hasValue = 0x446211c;
    SStack_88.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar21 = (System_Nullable_bool__Fields)method;
  SStack_90 = id_00;
  if (*(long *)((long)SVar17 + 0x10) != 0) {
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar17 + 0x10) + 0x28);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      fStack_68 = 0.0;
    }
    else {
      lVar12 = *(long *)__this;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar20) == TypeInfo_IAottgSettingAdapter) {
            puVar9 = (undefined8 *)
                     (lVar12 + (long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar20) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar20);
      }
      SStack_88.hasValue = 0x446219c;
      SStack_88.value = 0;
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      SStack_88.hasValue = 0x44621cf;
      SStack_88.value = 0;
      fStack_68 = (float)(*(code *)*puVar9)(__this,puVar9[1]);
    }
    SStack_88.hasValue = 0x44621e4;
    SStack_88.value = 0;
    SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    SStack_88.hasValue = 0x44621fe;
    SStack_88.value = 0;
    SVar18 = SVar17;
    SVar19 = SVar10;
    System_Action_GisketchActionContext____ctor();
    SVar8 = "slider";
    in_RCX = *(System_Nullable_bool__Fields *)((long)SVar17 + 0x10);
    SVar21 = SVar10;
    unaff_R12 = (System_Nullable_bool__Fields)method;
    unaff_R13 = id_00;
    SStack_90 = id_00;
    if (in_RCX != (System_Nullable_bool__Fields)0x0) {
      __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)((long)in_RCX + 0x28);
      min = 0.0;
      value = fStack_68;
      SStack_60 = SVar17;
      if ((System_Nullable_bool__Fields)__this != (System_Nullable_bool__Fields)0x0) {
        lVar12 = *(long *)__this;
        fStack_64 = fStack_68;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar20 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar20) == TypeInfo_IAottgSettingAdapter) {
              puVar9 = (undefined8 *)
                       (lVar12 + (long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar20) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar20);
        }
        SStack_88.hasValue = 0x446229c;
        SStack_88.value = 0;
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        SVar18 = *(System_Nullable_bool__Fields *)(puVar9 + 1);
        SStack_88.hasValue = 0x44622c3;
        SStack_88.value = 0;
        SVar19 = (System_Nullable_bool__Fields)__this;
        min = (float)(*(code *)*puVar9)();
        in_RCX = *(System_Nullable_bool__Fields *)((long)SStack_60 + 0x10);
        unaff_R12 = SVar10;
        SStack_90 = (System_Nullable_bool__Fields)method;
        SVar17 = SVar8;
        value = fStack_64;
        if (in_RCX == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
      }
      unaff_R12 = SStack_60;
      SVar21 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      SVar17 = (System_Nullable_bool__Fields)method;
      SStack_90 = SVar10;
      if (SVar21 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) {
          __this._0_4_ = 0;
          __this._4_4_ = 0;
          SVar18 = id_00;
        }
        else {
label_044623de:
          SStack_88.hasValue = 0x44623fc;
          SStack_88.value = 0;
          in_RCX = SVar10;
          SVar18 = id_00;
          SVar19 = (System_Nullable_bool__Fields)method;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,(System_String_o *)id_00,value,0,
                              (System_Action_GisketchActionContext__o *)SVar10,(System_String_o *)SVar8,min,
                              max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (*(long *)((long)unaff_R12 + 0x10) != 0) {
            bVar22 = *(char *)(*(long *)((long)unaff_R12 + 0x10) + 0x58) == '\0';
            uStack_6a = 0;
            SVar18._1_7_ = 0;
            SVar18.hasValue._0_1_ = bVar22;
            SVar19 = (System_Nullable_bool__Fields)&uStack_6a;
            SStack_88.hasValue = 0x446242e;
            SStack_88.value = 0;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar19,(uint)bVar22,MethodInfo_Nullable_1_Boolean);
            if ((System_Nullable_bool__Fields)__this != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)__this + 0x6b) = uStack_6a;
              return (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                     (System_Nullable_bool__Fields)__this;
            }
          }
        }
      }
      else {
        lVar12 = *(long *)SVar21;
        in_RCX.hasValue = 0;
        in_RCX.value = 0;
        fStack_68 = min;
        fStack_64 = value;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar12 + 0x12e) << 4);
          SVar19.hasValue = 0;
          SVar19.value = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + (long)SVar19) == TypeInfo_IAottgSettingAdapter) {
              in_RCX = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + (long)SVar19) + 4) * 0x10);
              puVar9 = (undefined8 *)(lVar12 + (long)in_RCX + 0x138);
              goto label_044623be;
            }
            SVar19 = (System_Nullable_bool__Fields)((long)SVar19 + 0x10);
          } while (in_RCX != SVar19);
        }
        SStack_88.hasValue = 0x446237c;
        SStack_88.value = 0;
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar21,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        SVar18 = *(System_Nullable_bool__Fields *)(puVar9 + 1);
        SStack_88.hasValue = 0x44623c7;
        SStack_88.value = 0;
        SVar19 = SVar21;
        max = (float)(*(code *)*puVar9)();
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar8;
        value = fStack_64;
        min = fStack_68;
        if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  SStack_88.hasValue = 0x4462453;
  SStack_88.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar8 = SVar19;
  SStack_98 = (System_Nullable_bool__Fields)__this;
  SStack_88 = SVar17;
  if (g_data_057ae798 == '\0') {
    SVar8 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    SStack_100.hasValue = 0x4462481;
    SStack_100.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar12 = *(long *)((long)SVar19 + 0x10);
  if (lVar12 != 0) {
    SVar17 = (System_Nullable_bool__Fields)&uStack_78;
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(lVar12 + 0x28);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      uStack_b8 = uStack_78;
      uStack_b4 = uStack_74;
      uStack_b0 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
      uStack_a8 = CONCAT44(fStack_64,fStack_68);
label_0446256c:
      uStack_c8 = uStack_a8;
      uVar4 = uStack_c8;
      SStack_c0 = SStack_60;
      SVar19 = SStack_c0;
      uStack_d0 = uStack_b0;
      uVar3 = uStack_d0;
      lVar12 = *(long *)(lVar12 + 0x88);
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
      if (lVar12 != 0) {
        uStack_d0._0_4_ = (undefined4)uStack_b0;
        uStack_d0._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
        uStack_c8._0_4_ = (undefined4)uStack_a8;
        uStack_c8._4_4_ = (undefined4)((ulong)uStack_a8 >> 0x20);
        SStack_c0.hasValue = SStack_60.hasValue;
        SStack_c0.value = SStack_60.value;
        uStack_e8 = (undefined4)uStack_c8;
        uStack_e4 = uStack_c8._4_4_;
        bStack_e0 = SStack_c0.hasValue;
        bStack_dc = SStack_c0.value;
        uStack_f8 = uStack_b8;
        uStack_f4 = uStack_b4;
        uStack_f0 = (undefined4)uStack_d0;
        uStack_ec = uStack_d0._4_4_;
        SStack_100.hasValue = 0x44625a7;
        SStack_100.value = 0;
        uStack_d0 = uVar3;
        uStack_c8 = uVar4;
        SStack_c0 = SVar19;
        SStack_a0 = SStack_60;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                  (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
      }
      return pGVar11;
    }
    uStack_c8 = CONCAT44(fStack_64,fStack_68);
    SStack_c0 = SStack_60;
    uStack_d8 = CONCAT44(uStack_74,uStack_78);
    uStack_d0 = CONCAT44(CONCAT22(uStack_6a,uStack_6c),uStack_70);
    lVar12 = *(long *)__this;
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
      in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar12 + 0x12e) << 4);
      SVar8.hasValue = 0;
      SVar8.value = 0;
      do {
        if (*(long *)(*(long *)(lVar12 + 0xb0) + (long)SVar8) == TypeInfo_IAottgSettingAdapter) {
          in_RCX = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + (long)SVar8) + 0xb) * 0x10);
          puVar9 = (undefined8 *)(lVar12 + (long)in_RCX + 0x138);
          goto label_0446252f;
        }
        SVar8 = (System_Nullable_bool__Fields)((long)SVar8 + 0x10);
      } while (in_RCX != SVar8);
    }
    SStack_100.hasValue = 0x44624fc;
    SStack_100.value = 0;
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    SVar18 = *(System_Nullable_bool__Fields *)(puVar9 + 1);
    uStack_e8 = (undefined4)uStack_c8;
    uStack_e4 = uStack_c8._4_4_;
    bStack_e0 = SStack_c0.hasValue;
    bStack_dc = SStack_c0.value;
    uStack_f8 = (undefined4)uStack_d8;
    uStack_f4 = uStack_d8._4_4_;
    uStack_f0 = (undefined4)uStack_d0;
    uStack_ec = uStack_d0._4_4_;
    SStack_100.hasValue = 0x446254b;
    SStack_100.value = 0;
    SVar8 = (System_Nullable_bool__Fields)__this;
    (*(code *)*puVar9)();
    lVar12 = *(long *)((long)SVar19 + 0x10);
    uStack_a8 = CONCAT44(fStack_64,fStack_68);
    SStack_a0 = SStack_60;
    uStack_b8 = uStack_78;
    uStack_b4 = uStack_74;
    uStack_b0 = CONCAT44(CONCAT22(uStack_6a,uStack_6c),uStack_70);
    if (lVar12 != 0) goto label_0446256c;
  }
  SStack_100.hasValue = 0x44625b6;
  SStack_100.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar10 = SVar8;
  SStack_118 = (System_Nullable_bool__Fields)__this;
  SStack_110 = SVar19;
  SStack_108 = SVar17;
  SStack_100 = SVar21;
  if (g_data_057ae79b == '\0') {
    SStack_188.hasValue = 0x44625e2;
    SStack_188.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar10 = (System_Nullable_bool__Fields)&"true";
    SStack_188.hasValue = 0x44625ee;
    SStack_188.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar12 = *(long *)((long)SVar8 + 0x10);
  if (lVar12 != 0) {
    SVar21 = (System_Nullable_bool__Fields)&uStack_f0;
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(lVar12 + 0x28);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      uStack_160 = CONCAT44(uStack_ec,uStack_f0);
      uStack_158 = CONCAT44(uStack_e4,uStack_e8);
      uStack_150 = CONCAT44(bStack_dc,bStack_e0);
    }
    else {
      if (CONCAT44(bStack_dc,bStack_e0) == 0) {
        SVar17.hasValue = 0;
        SVar17.value = 0;
      }
      else {
        SStack_188.hasValue = 0x4462631;
        SStack_188.value = 0;
        uVar7 = System_String__op_Equality
                          (*(System_String_o **)(CONCAT44(bStack_dc,bStack_e0) + 0x50),"true",
                           (MethodInfo *)0x0);
        SVar17.value = 0;
        SVar17.hasValue = uVar7;
      }
      lVar12 = *(long *)__this;
      in_RCX.hasValue = 0;
      in_RCX.value = 0;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar12 + 0x12e) << 4);
        SVar10.hasValue = 0;
        SVar10.value = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + (long)SVar10) == TypeInfo_IAottgSettingAdapter) {
            in_RCX = (System_Nullable_bool__Fields)
                     ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + (long)SVar10) + 8) * 0x10);
            puVar9 = (undefined8 *)(lVar12 + (long)in_RCX + 0x138);
            goto label_044626b5;
          }
          SVar10 = (System_Nullable_bool__Fields)((long)SVar10 + 0x10);
        } while (in_RCX != SVar10);
      }
      SStack_188.hasValue = 0x446269c;
      SStack_188.value = 0;
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      SVar18 = (System_Nullable_bool__Fields)((ulong)SVar17 & 0xff);
      SStack_188.hasValue = 0x44626c2;
      SStack_188.value = 0;
      SVar10 = (System_Nullable_bool__Fields)__this;
      (*(code *)*puVar9)(__this,SVar18,puVar9[1]);
      lVar12 = *(long *)((long)SVar8 + 0x10);
      uStack_150 = CONCAT44(bStack_dc,bStack_e0);
      uStack_148 = uStack_d8;
      uStack_160 = CONCAT44(uStack_ec,uStack_f0);
      uStack_158 = CONCAT44(uStack_e4,uStack_e8);
      if (lVar12 == 0) goto label_04462728;
    }
    uStack_130 = uStack_150;
    uVar5 = uStack_130;
    uStack_128 = uStack_d8;
    uVar6 = uStack_128;
    uStack_140 = uStack_160;
    uVar3 = uStack_140;
    uStack_138 = uStack_158;
    uVar4 = uStack_138;
    lVar12 = *(long *)(lVar12 + 0x88);
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    if (lVar12 != 0) {
      uStack_140._0_4_ = (undefined4)uStack_160;
      uStack_140._4_4_ = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_138._0_4_ = (undefined4)uStack_158;
      uStack_138._4_4_ = (undefined4)((ulong)uStack_158 >> 0x20);
      uStack_130._0_4_ = (undefined4)uStack_150;
      uStack_130._4_4_ = (undefined4)((ulong)uStack_150 >> 0x20);
      uStack_128._0_4_ = (undefined4)uStack_d8;
      uStack_128._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
      uStack_170 = (undefined4)uStack_130;
      uStack_16c = uStack_130._4_4_;
      uStack_168 = (undefined4)uStack_128;
      uStack_164 = uStack_128._4_4_;
      uStack_180 = (undefined4)uStack_140;
      uStack_17c = uStack_140._4_4_;
      uStack_178 = (undefined4)uStack_138;
      uStack_174 = uStack_138._4_4_;
      SStack_188.hasValue = 0x446271d;
      SStack_188.value = 0;
      uStack_140 = uVar3;
      uStack_138 = uVar4;
      uStack_130 = uVar5;
      uStack_128 = uVar6;
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
    }
    return pGVar11;
  }
label_04462728:
  SStack_188.hasValue = 0x446272d;
  SStack_188.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar19 = SVar10;
  SStack_1b0 = (System_Nullable_bool__Fields)__this;
  SStack_1a8 = unaff_R12;
  SStack_1a0 = unaff_R13;
  SStack_198 = SVar8;
  SStack_190 = SVar17;
  SStack_188 = SVar21;
  if (g_data_057ae79c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-value-button");
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar19 = (System_Nullable_bool__Fields)&"0";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar10 + 0x10) != 0) {
    pSVar13 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)((long)SVar10 + 0x10) + 0x10),"-slider",
                         (MethodInfo *)0x0);
    pGVar14 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                        ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar10,
                         (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,pSVar13,(MethodInfo *)in_RCX);
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffe08 = (UnityEngine_GameObject_o *)0x0;
    SVar19 = "Column";
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar15,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      SVar19 = (System_Nullable_bool__Fields)&(pGVar14->fields).search;
      (pGVar14->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar16;
      il2cpp_runtime_helper_022b4080(SVar19,pGVar16);
      if (*(long *)((long)SVar10 + 0x10) != 0) {
        plVar2 = *(long **)(*(long *)((long)SVar10 + 0x10) + 0x28);
        if (plVar2 == (long *)0x0) {
          variant = 4;
          pSVar13 = "0";
        }
        else {
          lVar12 = *plVar2;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
            lVar20 = 0;
            do {
              if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar20) == TypeInfo_IAottgSettingAdapter) {
                puVar9 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar20) * 0x10 + lVar12 + 0x138);
                goto label_04462936;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar20);
          }
          puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar2 != (long *)0x0) << 2;
          pSVar13 = (System_String_o *)(*(code *)*puVar9)(plVar2,puVar9[1]);
        }
        SVar17 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar19 = SVar17;
        System_Action_GisketchActionContext____ctor();
        if (*(long *)((long)SVar10 + 0x10) != 0) {
          SVar19 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar10 + 0x10) + 0x10);
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar19,"-value-button",(MethodInfo *)0x0);
          if (SVar18 != (System_Nullable_bool__Fields)0x0) {
            in_stack_fffffffffffffe08 = (UnityEngine_GameObject_o *)0x0;
            pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,variant,pSVar13,
                                 (System_Action_GisketchActionContext__o *)SVar17,id,(System_String_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                 (System_String_o *)0x0,(MethodInfo *)0x0);
            SVar19 = SVar18;
            if (*(long *)((long)SVar10 + 0x10) != 0) {
              uStack_1b2 = 0;
              SVar19 = (System_Nullable_bool__Fields)&uStack_1b2;
              System_Nullable_bool____ctor
                        ((System_Nullable_bool__o)SVar19,
                         (uint)(*(char *)(*(long *)((long)SVar10 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
              if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined2 *)((long)&(pGVar14->fields).hasIcon + 3) = uStack_1b2;
                pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ((System_String_o *)"Column",(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     pGVar15,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar14->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar16;
                pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                          il2cpp_runtime_helper_022b4080(&(pGVar14->fields).search,pGVar16);
                return pGVar11;
              }
            }
          }
        }
      }
    }
  }
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)((long)SVar19 + 0x10);
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)il2cpp_runtime_helper_023445d0(&"setting-slider-value")
    ;
    g_data_057ae7ad = '\x01';
  }
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(char *)(lVar12 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar12;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
              il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar12);
    if (((in_stack_fffffffffffffe08 != (UnityEngine_GameObject_o *)0x0) &&
        (pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                   UnityEngine_GameObject__GetComponentInParent_object_
                             (in_stack_fffffffffffffe08,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
        pGVar11 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) &&
       (pGVar11->m_Items[0xd] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar11->m_Items[0xd],"setting-slider-value",1,
                 (MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  return pGVar11;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x4461060

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  System_Nullable_bool__Fields SVar10;
  undefined8 *puVar11;
  System_Nullable_bool__Fields SVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar16;
  System_Nullable_bool__Fields SVar17;
  System_Nullable_bool__Fields SVar18;
  undefined8 *puVar19;
  System_Nullable_bool__Fields SVar20;
  long lVar21;
  System_String_o *pSVar22;
  System_String_o *id;
  undefined8 uVar23;
  Il2CppObject *pIVar24;
  System_Nullable_bool__Fields in_RCX;
  uint *options;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields __this_00;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  System_Nullable_bool__Fields unaff_RBP;
  System_Nullable_bool__Fields control;
  long lVar29;
  System_Nullable_bool__Fields SVar30;
  System_Nullable_bool__Fields SVar31;
  System_Nullable_bool__Fields SVar32;
  System_Nullable_bool__Fields SVar33;
  System_Nullable_bool__Fields SVar34;
  System_Nullable_bool__Fields SVar35;
  System_Nullable_bool__Fields unaff_R12;
  System_Nullable_bool__Fields SVar36;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar37;
  float extraout_XMM0_Da;
  float fVar38;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined4 uVar39;
  float max;
  float value;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  undefined1 auVar40 [16];
  ulong uStack_18;
  undefined8 auStack_10 [2];
  
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    uVar9 = (ulong)(pGVar3->fields).Kind;
    if (uVar9 < 7) {
      return *(float *)(&g_data_00d999ec + uVar9 * 4);
    }
    return 360.0;
  }
  auStack_10[0] = 0x4461091;
  auStack_10[0] = il2cpp_runtime_helper_022b2c90();
  puVar26 = auStack_10;
  puVar27 = auStack_10;
  puVar28 = auStack_10;
  puVar19 = auStack_10;
  puVar11 = auStack_10;
  if (*(long *)((long)__this + 0x10) != 0) {
    uVar9 = (ulong)*(int *)(*(long *)((long)__this + 0x10) + 0x20);
    if (uVar9 < 7) {
      return *(float *)(&g_data_00d999ec + uVar9 * 4);
    }
    return 360.0;
  }
  uStack_18 = 0x44610d1;
  auVar40 = il2cpp_runtime_helper_022b2c90();
  uVar9 = auVar40._0_8_;
  uStack_18 = uVar9;
  if (*(long *)((long)__this + 0x10) == 0) {
    uVar9 = il2cpp_runtime_helper_022b2c90();
    puVar26 = &uStack_18;
    SVar18 = (System_Nullable_bool__Fields)__this;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch:
    *(System_Nullable_bool__Fields *)((long)puVar26 + -8) = unaff_RBP;
    *(System_Nullable_bool__Fields *)((long)puVar26 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)puVar26 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)puVar26 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)puVar26 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)puVar26 + -0x30) = unaff_RBX;
    *(ulong *)((long)puVar26 + -0x38) = uVar9;
    SVar12 = (System_Nullable_bool__Fields)method;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18;
    if (g_data_057ae791 == '\0') {
      *(undefined8 *)((long)puVar26 + -0x40) = 0x4461166;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)puVar26 + -0x40) = 0x4461172;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSwitch_b__4_0);
      *(undefined8 *)((long)puVar26 + -0x40) = 0x446117e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-switch";
      *(undefined8 *)((long)puVar26 + -0x40) = 0x446118a;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae791 = '\x01';
    }
    if (*(long *)((long)SVar18 + 0x10) == 0) {
label_044612b2:
      *(undefined8 *)((long)puVar26 + -0x40) = 0x44612b7;
      auVar40 = il2cpp_runtime_helper_022b2c90();
      options = (uint *)in_RCX;
      puVar19 = (undefined8 *)((long)puVar26 + -0x38);
      unaff_R13 = (System_Nullable_bool__Fields)method;
      unaff_R14 = SVar18;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown;
    }
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar18 + 0x10) + 0x10);
    *(undefined8 *)((long)puVar26 + -0x40) = 0x44611b3;
    SVar12 = "-switch";
    SVar10 = (System_Nullable_bool__Fields)
             System_String__Concat_3ae5ba0
                       ((System_String_o *)__this,(System_String_o *)"-switch",(MethodInfo *)0x0);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if (*(long *)((long)SVar18 + 0x10) == 0) goto label_044612b2;
    plVar4 = *(long **)(*(long *)((long)SVar18 + 0x10) + 0x28);
    if (plVar4 == (long *)0x0) {
      unaff_RBP.hasValue = 0;
      unaff_RBP.value = 0;
    }
    else {
      lVar21 = *plVar4;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar29 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) + 2) * 0x10 + lVar21 + 0x138);
            goto label_04461243;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar29);
      }
      *(undefined8 *)((long)puVar26 + -0x40) = 0x446121c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,2);
label_04461243:
      uVar23 = puVar11[1];
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)((long)puVar26 + -0x40) = 0x446124c;
      uVar8 = (*pcVar5)(plVar4,uVar23);
      unaff_RBP.value = 0;
      unaff_RBP.hasValue = uVar8;
    }
    *(undefined8 *)((long)puVar26 + -0x40) = 0x446125d;
    options = (uint *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    *(undefined8 *)((long)puVar26 + -0x40) = 0x4461277;
    SVar12 = SVar18;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)options;
    System_Action_GisketchActionContext____ctor();
    unaff_R12.hasValue = 0;
    unaff_R12.value = 0;
    unaff_RBX = (System_Nullable_bool__Fields)options;
    unaff_R15 = SVar10;
    if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_044612b2;
    *(undefined8 *)((long)puVar26 + -0x40) = 0x4461291;
    SVar12 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_Code_AottgUi__Switch
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,(System_String_o *)SVar10,
                        unaff_RBP.hasValue & 0xff,(System_Action_GisketchActionContext__o *)options,
                        (MethodInfo *)0x0);
    fVar38 = 58.0;
    SVar30 = *(System_Nullable_bool__Fields *)((long)puVar26 + -0x30);
    SVar36 = *(System_Nullable_bool__Fields *)((long)puVar26 + -0x28);
    unaff_R13 = *(System_Nullable_bool__Fields *)((long)puVar26 + -0x20);
    SVar10 = *(System_Nullable_bool__Fields *)((long)puVar26 + -0x18);
    method = *(MethodInfo **)((long)puVar26 + -0x10);
    unaff_RBP = *(System_Nullable_bool__Fields *)((long)puVar26 + -8);
    puVar11 = puVar26;
    unaff_RBX = SVar18;
  }
  else {
    options = &switchD_04461101::switchdataD_00d999d4;
    SVar12 = (System_Nullable_bool__Fields)method;
    switch(*(undefined4 *)(*(long *)((long)__this + 0x10) + 0x20)) {
    case 0:
      in_RCX = (System_Nullable_bool__Fields)options;
      SVar18 = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch;
    case 1:
      auVar40._8_8_ = 1;
      auVar40._0_8_ = uVar9;
      break;
    case 2:
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar9;
      puVar19 = auStack_10;
      break;
    case 3:
      SVar10 = (System_Nullable_bool__Fields)options;
      SVar18 = unaff_RBX;
      unaff_RBX = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider;
    case 4:
      SVar12 = unaff_RBP;
      SVar18 = (System_Nullable_bool__Fields)method;
      unaff_RBP = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput;
    case 5:
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton;
    default:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly
                (__this,(Gisketch_Aottg2UI_Code_AottgUi_o *)method,auVar40._8_8_);
      return extraout_XMM0_Da;
    }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown:
    *(System_Nullable_bool__Fields *)((long)puVar19 + -8) = unaff_RBP;
    *(System_Nullable_bool__Fields *)((long)puVar19 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)puVar19 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)puVar19 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)puVar19 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)puVar19 + -0x30) = unaff_RBX;
    puVar11 = (undefined8 *)((long)puVar19 + -0x38);
    *(long *)((long)puVar19 + -0x38) = auVar40._0_8_;
    unaff_R12 = (System_Nullable_bool__Fields)(auVar40._8_8_ & 0xffffffff);
    SVar10 = (System_Nullable_bool__Fields)options;
    method = (MethodInfo *)SVar12;
    if (g_data_057ae792 == '\0') {
      *(undefined8 *)((long)puVar19 + -0x40) = 0x44612e9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)puVar19 + -0x40) = 0x44612f5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)((long)puVar19 + -0x40) = 0x4461301;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)((long)puVar19 + -0x40) = 0x446130d;
      il2cpp_runtime_helper_023445d0(&"-select");
      *(undefined8 *)((long)puVar19 + -0x40) = 0x4461319;
      il2cpp_runtime_helper_023445d0(&"-dropdown");
      g_data_057ae792 = '\x01';
      SVar10 = (System_Nullable_bool__Fields)options;
    }
    *(undefined8 *)((long)puVar19 + -0x40) = 0x4461328;
    unaff_RBX = (System_Nullable_bool__Fields)__this;
    options = (uint *)Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions(__this,method);
    lVar21 = *(long *)((long)__this + 0x10);
    if (lVar21 != 0) {
      unaff_RBP = *(System_Nullable_bool__Fields *)(lVar21 + 0x28);
      if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
        unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
        pSVar22 = *(System_String_o **)(lVar21 + 0x10);
        if ((char)unaff_R12.hasValue != '\0') goto label_044613e9;
label_0446145e:
        *(undefined8 *)((long)puVar19 + -0x40) = 0x446146f;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar22,"-select",(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar19 + -0x40) = 0x4461481;
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar10.hasValue = 0;
        SVar10.value = 0;
        *(undefined8 *)((long)puVar19 + -0x40) = 0x446149b;
        method = (MethodInfo *)__this;
        unaff_RBX = unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)__this + 0x10) == 0) || (SVar12 == (System_Nullable_bool__Fields)0x0))
        goto label_044614ee;
        uVar8 = *(uint *)(*(long *)((long)__this + 0x10) + 0x5c);
        *(undefined8 *)((long)puVar19 + -0x40) = 0;
        *(ulong *)((long)puVar19 + -0x48) = (ulong)uVar8;
        *(undefined8 *)((long)puVar19 + -0x50) = 0x44614c9;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar12,(System_String_o *)unaff_R12,
                            (System_String_o *)unaff_R13,
                            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                            (System_Action_GisketchActionContext__o *)unaff_RBP,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            *(int32_t *)((long)puVar19 + -0x48),*(MethodInfo **)((long)puVar19 + -0x40));
label_044614c9:
        fVar38 = 300.0;
        SVar30 = *(System_Nullable_bool__Fields *)((long)puVar19 + -0x30);
        SVar36 = *(System_Nullable_bool__Fields *)((long)puVar19 + -0x28);
        unaff_R13 = *(System_Nullable_bool__Fields *)((long)puVar19 + -0x20);
        SVar10 = *(System_Nullable_bool__Fields *)((long)puVar19 + -0x18);
        method = *(MethodInfo **)((long)puVar19 + -0x10);
        unaff_RBP = *(System_Nullable_bool__Fields *)((long)puVar19 + -8);
        puVar11 = puVar19;
        unaff_RBX = (System_Nullable_bool__Fields)__this;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      lVar21 = *(long *)unaff_RBP;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar29 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
            SVar10 = (System_Nullable_bool__Fields)
                     ((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) * 0x10 + lVar21 + 0x138);
            goto label_044613c7;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar29);
      }
      *(undefined8 *)((long)puVar19 + -0x40) = 0x4461389;
      SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_044613c7:
      method = *(MethodInfo **)((long)SVar10 + 8);
      SVar18 = *(System_Nullable_bool__Fields *)SVar10;
      *(undefined8 *)((long)puVar19 + -0x40) = 0x44613d0;
      unaff_RBX = unaff_RBP;
      unaff_R13 = (System_Nullable_bool__Fields)(*(code *)SVar18)();
      if (*(long *)((long)__this + 0x10) != 0) {
        pSVar22 = *(System_String_o **)(*(long *)((long)__this + 0x10) + 0x10);
        if ((char)unaff_R12.hasValue == '\0') goto label_0446145e;
label_044613e9:
        *(undefined8 *)((long)puVar19 + -0x40) = 0x44613fa;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar22,"-dropdown",(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar19 + -0x40) = 0x446140c;
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar10.hasValue = 0;
        SVar10.value = 0;
        *(undefined8 *)((long)puVar19 + -0x40) = 0x4461426;
        method = (MethodInfo *)__this;
        unaff_RBX = unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)__this + 0x10) != 0) && (SVar12 != (System_Nullable_bool__Fields)0x0)) {
          uVar8 = *(uint *)(*(long *)((long)__this + 0x10) + 0x5c);
          *(undefined8 *)((long)puVar19 + -0x40) = 0;
          *(ulong *)((long)puVar19 + -0x48) = (ulong)uVar8;
          *(undefined8 *)((long)puVar19 + -0x50) = 0x446145c;
          SVar12 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar12,(System_String_o *)unaff_R12,
                              (System_String_o *)unaff_R13,
                              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                              (System_Action_GisketchActionContext__o *)unaff_RBP,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(int32_t *)((long)puVar19 + -0x48),*(MethodInfo **)((long)puVar19 + -0x40));
          goto label_044614c9;
        }
      }
    }
label_044614ee:
    *(undefined8 *)((long)puVar19 + -0x40) = 0x44614f3;
    il2cpp_runtime_helper_022b2c90();
    SVar18 = (System_Nullable_bool__Fields)__this;
    unaff_R14 = SVar12;
    unaff_R15 = (System_Nullable_bool__Fields)options;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider:
    *(System_Nullable_bool__Fields *)((long)puVar11 + -8) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)puVar11 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)puVar11 + -0x18) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)puVar11 + -0x20) = SVar18;
    puVar27 = (undefined8 *)((long)puVar11 + -0x78);
    options = (uint *)SVar10;
    SVar18 = (System_Nullable_bool__Fields)method;
    SVar30 = unaff_RBX;
    if (g_data_057ae793 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x80) = 0x4461526;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      *(undefined8 *)((long)puVar11 + -0x80) = 0x4461532;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
      *(undefined8 *)((long)puVar11 + -0x80) = 0x446153e;
      il2cpp_runtime_helper_023445d0(&"clear");
      *(undefined8 *)((long)puVar11 + -0x80) = 0x446154a;
      il2cpp_runtime_helper_023445d0(&"-slider-with-value");
      *(undefined8 *)((long)puVar11 + -0x80) = 0x4461556;
      il2cpp_runtime_helper_023445d0(&"Center");
      *(undefined8 *)((long)puVar11 + -0x80) = 0x4461562;
      il2cpp_runtime_helper_023445d0(&"Row");
      SVar30 = (System_Nullable_bool__Fields)&"-slider";
      *(undefined8 *)((long)puVar11 + -0x80) = 0x446156e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae793 = '\x01';
      options = (uint *)SVar10;
    }
    lVar21 = *(long *)((long)unaff_RBX + 0x10);
    if (lVar21 != 0) {
      if (*(char *)(lVar21 + 0x59) == '\0') {
        pSVar22 = *(System_String_o **)(lVar21 + 0x10);
        *(undefined8 *)((long)puVar11 + -0x80) = 0x44616d7;
        pSVar22 = System_String__Concat_3ae5ba0(pSVar22,"-slider",(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x80) = 0x44616e5;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBX,
                            (Gisketch_Aottg2UI_Code_AottgUi_o *)method,pSVar22,(MethodInfo *)options);
        fVar38 = 620.0;
        SVar30 = *(System_Nullable_bool__Fields *)((long)puVar11 + -0x20);
        SVar36 = *(System_Nullable_bool__Fields *)((long)puVar11 + -0x18);
        SVar10 = *(System_Nullable_bool__Fields *)((long)puVar11 + -0x10);
        method = *(MethodInfo **)((long)puVar11 + -8);
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      *(undefined8 *)((long)puVar11 + -0x80) = 0x446159b;
      unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)((long)puVar11 + -0x80) = 0x44615b5;
      SVar18 = unaff_RBX;
      SVar30 = unaff_R15;
      System_Action_object____ctor();
      if (*(long *)((long)unaff_RBX + 0x10) != 0) {
        pSVar22 = *(System_String_o **)(*(long *)((long)unaff_RBX + 0x10) + 0x10);
        *(undefined8 *)((long)puVar11 + -0x80) = 0x44615d7;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar22,"-slider-with-value",(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x80) = 0x44615e9;
        unaff_RBX = (System_Nullable_bool__Fields)
                    Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x80) = 0x44615fb;
        pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x60) = pGVar14;
        *(undefined8 *)((long)puVar11 + -0x78) = 0;
        *(undefined8 *)((long)puVar11 + -0x70) = 0;
        *(undefined8 *)((long)puVar11 + -0x30) = 0;
        *(undefined4 *)((long)puVar11 + -0x38) = 0x3f800000;
        *(undefined4 *)((long)puVar11 + -0x40) = 0;
        *(undefined4 *)((long)puVar11 + -0x48) = 0;
        *(undefined4 *)((long)puVar11 + -0x50) = 0;
        *(undefined8 *)((long)puVar11 + -0x58) = 0;
        *(undefined8 *)((long)puVar11 + -0x68) = 0;
        SVar18.hasValue = 0;
        SVar18.value = 0;
        options._0_4_ = 0;
        options._4_4_ = 0;
        *(undefined8 *)((long)puVar11 + -0x80) = 0x446168b;
        SVar30 = "Row";
        pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x78),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x70),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x68),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x60),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x58),0.0,0.0,0.0,
                             0.0,0.0,0.0,0.0,*(float *)((long)puVar11 + -0x50),
                             *(float *)((long)puVar11 + -0x48),*(float *)((long)puVar11 + -0x40),
                             *(float *)((long)puVar11 + -0x38),*(MethodInfo **)((long)puVar11 + -0x30));
        if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)puVar11 + -0x78) = 0;
          *(undefined8 *)((long)puVar11 + -0x80) = 0x44616b6;
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,"clear",
                     (System_Action_AottgUi__o *)unaff_R15,(System_String_o *)unaff_R12,pGVar16,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     *(MethodInfo **)((long)puVar11 + -0x78));
          return extraout_XMM0_Da_00;
        }
      }
    }
    *(undefined8 *)((long)puVar11 + -0x80) = 0x4461708;
    il2cpp_runtime_helper_022b2c90();
    SVar12 = unaff_RBP;
    unaff_RBP = SVar30;
    unaff_R14 = (System_Nullable_bool__Fields)method;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput:
    *(System_Nullable_bool__Fields *)((long)puVar27 + -8) = SVar12;
    *(System_Nullable_bool__Fields *)((long)puVar27 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)puVar27 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)puVar27 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)puVar27 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)puVar27 + -0x30) = unaff_RBX;
    puVar28 = (undefined8 *)((long)puVar27 + -0x58);
    method = (MethodInfo *)SVar18;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
    if (g_data_057ae795 == '\0') {
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461739;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461745;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461751;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x446175d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461769;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461775;
      il2cpp_runtime_helper_023445d0(&"inputField");
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-input";
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461781;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
    }
    lVar21 = *(long *)((long)unaff_RBP + 0x10);
    if (lVar21 != 0) {
      if (*(long **)(lVar21 + 0x28) == (long *)0x0) {
        *(undefined4 *)((long)puVar27 + -0x54) = 1;
      }
      else {
        *(uint *)((long)puVar27 + -0x54) = (uint)(**(long **)(lVar21 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      pSVar22 = *(System_String_o **)(lVar21 + 0x10);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x44617d4;
      unaff_R12 = (System_Nullable_bool__Fields)
                  System_String__Concat_3ae5ba0(pSVar22,"-input",(MethodInfo *)0x0);
      unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x44617fe;
      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar27 + -0x60) = 0x4461810;
      pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar27 + -0x90) = pGVar15;
      *(undefined8 *)((long)puVar27 + -0xa8) = 0;
      *(undefined8 *)((long)puVar27 + -0xa0) = 0;
      *(undefined8 *)((long)puVar27 + -0x60) = 0;
      *(undefined4 *)((long)puVar27 + -0x68) = 0x3f800000;
      *(undefined4 *)((long)puVar27 + -0x70) = 0;
      *(undefined4 *)((long)puVar27 + -0x78) = 0;
      *(undefined4 *)((long)puVar27 + -0x80) = 0;
      *(undefined8 *)((long)puVar27 + -0x88) = 0;
      *(undefined8 *)((long)puVar27 + -0x98) = 0;
      *(undefined4 *)((long)puVar27 + -0x50) = 0;
      *(undefined8 *)((long)puVar27 + -0xb0) = 0x44618a3;
      unaff_RBX = (System_Nullable_bool__Fields)
                  Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar14,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar27 + -0xa8),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar27 + -0xa0),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar27 + -0x98),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar27 + -0x90),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar27 + -0x88),0.0,0.0,0.0,
                             0.0,0.0,0.0,0.0,*(float *)((long)puVar27 + -0x80),
                             *(float *)((long)puVar27 + -0x78),*(float *)((long)puVar27 + -0x70),
                             *(float *)((long)puVar27 + -0x68),*(MethodInfo **)((long)puVar27 + -0x60));
      *(undefined8 *)((long)puVar27 + -0x60) = 0x44618b9;
      unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)((long)puVar27 + -0x60) = 0x44618d3;
      method = (MethodInfo *)unaff_RBP;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R14;
      System_Action_GisketchActionContext____ctor();
      *(System_Nullable_bool__Fields *)((long)puVar27 + -0x38) = unaff_RBP;
      if (*(long *)((long)unaff_RBP + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)unaff_RBP + 0x10) + 0x28);
        *(System_Nullable_bool__Fields *)((long)puVar27 + -0x40) = SVar18;
        fVar38 = 0.05;
        bVar37 = unaff_RBP == (System_Nullable_bool__Fields)0x0;
        SVar36 = unaff_R13;
        SVar12 = unaff_R12;
        if (bVar37) {
          SVar36.hasValue = 0;
          SVar36.value = 0;
          SVar12 = unaff_RBP;
          SVar18 = unaff_RBP;
        }
        uVar8 = *(uint *)((long)puVar27 + -0x54);
        method._4_4_ = 0;
        method._0_4_ = uVar8;
        SVar25 = unaff_R14;
        SVar20 = unaff_RBX;
        pSVar22 = "inputField";
        uVar7 = uVar8;
        if (bVar37) {
          SVar25.hasValue = 0;
          SVar25.value = 0;
          SVar20.hasValue = 0;
          SVar20.value = 0;
          pSVar22 = (System_String_o *)0x0;
          uVar7 = 0;
        }
        uVar23 = 0;
        if (bVar37) {
          SVar18 = *(System_Nullable_bool__Fields *)((long)puVar27 + -0x40);
          pSVar22 = "inputField";
          SVar25 = unaff_R14;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R12;
          SVar20 = unaff_RBX;
        }
        else {
          *(undefined4 *)((long)puVar27 + -0x50) = 0x3d4ccccd;
          lVar21 = *(long *)unaff_RBP;
          uVar2 = *(ushort *)(lVar21 + 0x12e);
          *(System_String_o **)((long)puVar27 + -0x48) = pSVar22;
          *(uint *)((long)puVar27 + -0x4c) = uVar7;
          if ((ulong)uVar2 != 0) {
            lVar29 = 0;
            do {
              if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                puVar11 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) + 7) * 0x10 + lVar21 + 0x138
                          );
                goto label_044619df;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar29);
          }
          *(undefined8 *)((long)puVar27 + -0x60) = 0x446199f;
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          method = *(MethodInfo **)(puVar11 + 1);
          pcVar5 = (code *)*puVar11;
          *(undefined8 *)((long)puVar27 + -0x60) = 0x44619e8;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
          uVar23 = (*pcVar5)();
          fVar38 = *(float *)((long)puVar27 + -0x50);
          uVar8 = *(uint *)((long)puVar27 + -0x4c);
          pSVar22 = *(System_String_o **)((long)puVar27 + -0x48);
          unaff_R13 = SVar36;
          unaff_R12 = SVar12;
          unaff_R14 = SVar20;
        }
        unaff_RBX = SVar25;
        options._4_4_ = 0;
        options._0_4_ = uVar8;
        if (SVar18 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)puVar27 + -0x60) = 0;
          *(undefined8 *)((long)puVar27 + -0x68) = uVar23;
          *(System_Nullable_bool__Fields *)((long)puVar27 + -0x70) = unaff_RBX;
          *(undefined8 *)((long)puVar27 + -0x78) = 0;
          *(undefined8 *)((long)puVar27 + -0x80) = 0x4461a17;
          method = (MethodInfo *)unaff_R12;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,(System_String_o *)unaff_R12,
                               (System_String_o *)unaff_R13,uVar8,pSVar22,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar20,
                               *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)puVar27 + -0x78),
                               *(System_Action_GisketchActionContext__o **)((long)puVar27 + -0x70),fVar38,
                               *(int32_t *)((long)puVar27 + -0x68),*(MethodInfo **)((long)puVar27 + -0x60));
          options._0_4_ = 0;
          options._4_4_ = 0;
          if (*(long *)(*(long *)((long)puVar27 + -0x38) + 0x10) != 0) {
            unaff_RBP = *(System_Nullable_bool__Fields *)
                         (*(long *)(*(long *)((long)puVar27 + -0x38) + 0x10) + 0x28);
            if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
              options = *(uint **)(g_data_057b9c00 + 0xb8);
              method = *(MethodInfo **)options;
            }
            else {
              lVar21 = *(long *)unaff_RBP;
              if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
                lVar29 = 0;
                do {
                  if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                    options = (uint *)((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) * 0x10 + lVar21 +
                                      0x138);
                    goto label_04461ac3;
                  }
                  lVar29 = lVar29 + 0x10;
                } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar29);
              }
              *(undefined8 *)((long)puVar27 + -0x60) = 0x4461a89;
              options = (uint *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              SVar12 = *(System_Nullable_bool__Fields *)((long)options + 8);
              SVar10 = *(System_Nullable_bool__Fields *)options;
              *(undefined8 *)((long)puVar27 + -0x60) = 0x4461acc;
              __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
              method = (MethodInfo *)(*(code *)SVar10)(unaff_RBP,SVar12);
            }
            unaff_RBX.hasValue = 0;
            unaff_RBX.value = 0;
            if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar13->fields).value = (System_String_o *)method;
              fVar38 = (float)il2cpp_runtime_helper_022b4080(&(pGVar13->fields).value);
              return fVar38;
            }
          }
        }
      }
    }
    *(undefined8 *)((long)puVar27 + -0x60) = 0x4461af7;
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = SVar18;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton:
    *(System_Nullable_bool__Fields *)((long)puVar28 + -8) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x18) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)puVar28 + -0x20) = unaff_RBX;
    SVar18 = (System_Nullable_bool__Fields)options;
    SVar36 = (System_Nullable_bool__Fields)method;
    SVar10 = (System_Nullable_bool__Fields)__this;
    if (g_data_057ae796 == '\0') {
      SVar10 = (System_Nullable_bool__Fields)&"-button";
      *(undefined8 *)((long)puVar28 + -0x40) = 0x4461b26;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
      SVar18 = (System_Nullable_bool__Fields)options;
    }
    lVar21 = *(long *)((long)__this + 0x10);
    SVar30 = unaff_RBX;
    if (lVar21 == 0) {
label_04461c07:
      *(undefined8 *)((long)puVar28 + -0x40) = 0x4461c0c;
      il2cpp_runtime_helper_022b2c90();
      *(MethodInfo **)((long)puVar28 + -0x40) = method;
      *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)((long)puVar28 + -0x48) = __this;
      *(System_Nullable_bool__Fields *)((long)puVar28 + -0x50) = unaff_R13;
      *(System_Nullable_bool__Fields *)((long)puVar28 + -0x58) = unaff_R12;
      *(System_Nullable_bool__Fields *)((long)puVar28 + -0x60) = SVar30;
      puVar11 = (undefined8 *)((long)puVar28 + -0xb0);
      options = (uint *)SVar18;
      SVar12 = SVar36;
      unaff_RBX = SVar10;
      if (g_data_057ae797 == '\0') {
        *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461c38;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461c44;
        il2cpp_runtime_helper_023445d0(&"Column");
        *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461c50;
        il2cpp_runtime_helper_023445d0(&"text");
        unaff_RBX = (System_Nullable_bool__Fields)&"-value";
        *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461c5c;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        options = (uint *)SVar18;
      }
      lVar21 = *(long *)((long)SVar10 + 0x10);
      if (lVar21 != 0) {
        SVar30 = *(System_Nullable_bool__Fields *)(lVar21 + 0x80);
        if (SVar30 == (System_Nullable_bool__Fields)0x0) {
          method = *(MethodInfo **)(lVar21 + 0x28);
          if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) {
            options = *(uint **)(g_data_057b9c00 + 0xb8);
            SVar30 = *(System_Nullable_bool__Fields *)options;
            unaff_R13.hasValue = 0;
            unaff_R13.value = 0;
          }
          else {
            lVar21 = *(long *)method;
            if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
              lVar29 = 0;
              do {
                if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                  options = (uint *)((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) * 0x10 + lVar21 +
                                    0x138);
                  goto label_04461d0b;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar29);
            }
            *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461cd9;
            options = (uint *)il2cpp_runtime_helper_02300d20(method,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar12 = *(System_Nullable_bool__Fields *)((long)options + 8);
            SVar18 = *(System_Nullable_bool__Fields *)options;
            *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461d14;
            unaff_RBX = (System_Nullable_bool__Fields)method;
            SVar30 = (System_Nullable_bool__Fields)(*(code *)SVar18)();
            lVar21 = *(long *)((long)SVar10 + 0x10);
            unaff_R13 = SVar36;
            if (lVar21 == 0) goto label_04461e40;
          }
        }
        unaff_RBX = *(System_Nullable_bool__Fields *)(lVar21 + 0x10);
        *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461d3c;
        SVar12 = "-value";
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_RBX,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (SVar36 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)puVar28 + -0xb0) = 0;
          *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461d6b;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar36,(System_String_o *)SVar30,
                               "text",pSVar22,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               *(MethodInfo **)((long)puVar28 + -0xb0));
          *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461d7d;
          SVar10 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461d8f;
          pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x98) = pGVar14;
          *(undefined8 *)((long)puVar28 + -0xb0) = 0;
          *(undefined8 *)((long)puVar28 + -0xa8) = 0;
          *(undefined8 *)((long)puVar28 + -0x68) = 0;
          *(undefined4 *)((long)puVar28 + -0x70) = 0x3f800000;
          *(undefined4 *)((long)puVar28 + -0x78) = 0;
          *(undefined4 *)((long)puVar28 + -0x80) = 0;
          *(undefined4 *)((long)puVar28 + -0x88) = 0;
          *(undefined8 *)((long)puVar28 + -0x90) = 0;
          *(undefined8 *)((long)puVar28 + -0xa0) = 0;
          SVar12.hasValue = 0;
          SVar12.value = 0;
          options._0_4_ = 0;
          options._4_4_ = 0;
          *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461e15;
          unaff_RBX = "Column";
          pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar10,
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0xb0),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0xa8),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0xa0),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x98),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar28 + -0x90),0.0,0.0,
                               0.0,0.0,0.0,0.0,0.0,*(float *)((long)puVar28 + -0x88),
                               *(float *)((long)puVar28 + -0x80),*(float *)((long)puVar28 + -0x78),
                               *(float *)((long)puVar28 + -0x70),*(MethodInfo **)((long)puVar28 + -0x68));
          SVar30.hasValue = 0;
          SVar30.value = 0;
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar13->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar16;
            fVar38 = (float)il2cpp_runtime_helper_022b4080(&(pGVar13->fields).search,pGVar16);
            return fVar38;
          }
        }
      }
label_04461e40:
      *(undefined8 *)((long)puVar28 + -0xb8) = 0x4461e45;
      fVar38 = (float)il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R12 = *(System_Nullable_bool__Fields *)(lVar21 + 0x68);
      options = *(uint **)(lVar21 + 0x78);
      SVar36 = "-button";
      if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) {
        if (unaff_R12 == (System_Nullable_bool__Fields)0x0) {
          unaff_R12 = *(System_Nullable_bool__Fields *)(lVar21 + 0x18);
        }
        SVar10 = *(System_Nullable_bool__Fields *)(lVar21 + 0x10);
        options = *(uint **)(lVar21 + 0x70);
        *(undefined8 *)((long)puVar28 + -0x40) = 0x4461bbb;
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar10,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar30 = (System_Nullable_bool__Fields)options;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)((long)puVar28 + -0x38) = 0;
        *(undefined8 *)((long)puVar28 + -0x30) = 0;
        *(undefined8 *)((long)puVar28 + -0x28) = 0;
        *(undefined8 *)((long)puVar28 + -0x40) = 0x4461be9;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,1,(System_String_o *)unaff_R12,
                            (System_String_o *)options,pSVar22,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)puVar28 + -0x38),
                            *(System_String_o **)((long)puVar28 + -0x30),
                            *(MethodInfo **)((long)puVar28 + -0x28));
      }
      else {
        if (unaff_R12 == (System_Nullable_bool__Fields)0x0) {
          unaff_R12 = *(System_Nullable_bool__Fields *)(lVar21 + 0x18);
        }
        SVar10 = *(System_Nullable_bool__Fields *)(lVar21 + 0x10);
        *(undefined8 *)((long)puVar28 + -0x40) = 0x4461b65;
        pSVar22 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar10,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar30 = (System_Nullable_bool__Fields)options;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)((long)puVar28 + -0x38) = 0;
        *(undefined8 *)((long)puVar28 + -0x30) = 0;
        *(undefined8 *)((long)puVar28 + -0x28) = 0;
        *(undefined8 *)((long)puVar28 + -0x40) = 0x4461b97;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,1,(System_String_o *)unaff_R12,
                            (System_Action_GisketchActionContext__o *)options,pSVar22,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)puVar28 + -0x38),
                            *(System_String_o **)((long)puVar28 + -0x30),
                            *(MethodInfo **)((long)puVar28 + -0x28));
      }
      fVar38 = 320.0;
      SVar30 = *(System_Nullable_bool__Fields *)((long)puVar28 + -0x20);
      SVar36 = *(System_Nullable_bool__Fields *)((long)puVar28 + -0x18);
      SVar10 = *(System_Nullable_bool__Fields *)((long)puVar28 + -0x10);
      method = *(MethodInfo **)((long)puVar28 + -8);
      puVar11 = puVar28;
      unaff_RBX = (System_Nullable_bool__Fields)__this;
    }
  }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout:
  *(System_Nullable_bool__Fields *)((long)puVar11 + -8) = SVar10;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x10) = SVar30;
  *(float *)((long)puVar11 + -0x14) = fVar38;
  __this_00 = SVar12;
  SVar31 = unaff_RBX;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar31 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461e90;
    fVar38 = (float)il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar12 == (System_Nullable_bool__Fields)0x0) {
    return fVar38;
  }
  if (*(long *)((long)unaff_RBX + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)unaff_RBX + 0x10) + 0x58);
    *(undefined2 *)((long)puVar11 + -0x16) = 0;
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar11 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar12 + 0x6b) = *(undefined2 *)((long)puVar11 + -0x16);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461ee8;
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)((long)puVar11 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461efa;
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x50) = pGVar15;
    *(undefined8 *)((long)puVar11 + -0x68) = 0;
    *(undefined8 *)((long)puVar11 + -0x60) = 0;
    *(undefined8 *)((long)puVar11 + -0x20) = 0;
    *(undefined4 *)((long)puVar11 + -0x28) = 0x3f800000;
    *(undefined4 *)((long)puVar11 + -0x30) = 0;
    *(undefined4 *)((long)puVar11 + -0x38) = 0;
    *(undefined4 *)((long)puVar11 + -0x40) = 0;
    *(undefined8 *)((long)puVar11 + -0x48) = 0;
    *(undefined8 *)((long)puVar11 + -0x58) = 0;
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461f83;
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar14,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x48),0.0,0.0,0.0,0.0,
                         0.0,0.0,0.0,*(float *)((long)puVar11 + -0x40),*(float *)((long)puVar11 + -0x38),
                         *(float *)((long)puVar11 + -0x30),*(float *)((long)puVar11 + -0x28),
                         *(MethodInfo **)((long)puVar11 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar12 + 0xd8) = pGVar16;
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4461f9c;
    fVar38 = (float)il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar12 + 0xd8),pGVar16);
    return fVar38;
  }
  *(undefined8 *)((long)puVar11 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)((long)puVar11 + -0x70) = method;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x78) = unaff_RBX;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x88) = SVar36;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x90) = SVar12;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)((long)puVar11 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar31 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)((long)puVar11 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_RBX = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar31 + 0x10) + 0x60);
    if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
      __this_00.hasValue = 0;
      __this_00.value = 0;
      *(undefined8 *)((long)puVar11 + -0x98) = 0x446200b;
      unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (unaff_RBX == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    __this_00.value = 0;
    __this_00.hasValue = *(uint *)((long)unaff_RBX + 0x18);
    *(undefined8 *)((long)puVar11 + -0x98) = 0x446202a;
    method = (MethodInfo *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)unaff_RBX + 0x18) < 1) {
      return extraout_XMM0_Da_01;
    }
    if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
      SVar17 = (System_Nullable_bool__Fields)(*(ulong *)((long)unaff_RBX + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)method + 0x20);
      SVar31.hasValue = 0;
      SVar31.value = 0;
      SVar36 = unaff_RBX;
      while (SVar36 = (System_Nullable_bool__Fields)((long)SVar36 + 0x20), (ulong)SVar31 < (ulong)SVar17) {
        *(undefined8 *)((long)puVar11 + -0x98) = 0x446205f;
        SVar18 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)
                             ((long)puVar11 + -0x90),(MethodInfo *)SVar36);
        options._4_4_ = 0;
        options._0_4_ = *(uint *)((long)method + 0x18);
        if (options <= (ulong)SVar31) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar18;
        *(undefined8 *)((long)puVar11 + -0x98) = 0x4462077;
        fVar38 = (float)il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar31 = (System_Nullable_bool__Fields)((long)SVar31 + 1);
        SVar17.value = 0;
        SVar17.hasValue = *(uint *)((long)unaff_RBX + 0x18);
        options = (uint *)(long)(int)*(uint *)((long)unaff_RBX + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        __this_00 = SVar18;
        if ((long)options <= (long)SVar31) {
          return fVar38;
        }
      }
      *(undefined8 *)((long)puVar11 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar18 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x20);
  *(undefined8 *)((long)puVar11 + -0x98) = 0x44620b2;
  SVar32 = SVar18;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)((long)puVar11 + -0x90),
             (MethodInfo *)SVar18);
  *(undefined8 *)((long)puVar11 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x98) = unaff_RBP;
  *(MethodInfo **)((long)puVar11 + -0xa0) = method;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0xa8) = SVar18;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0xb8) = SVar36;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0xc0) = SVar31;
  control = __this_00;
  SVar18 = SVar32;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar18 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar12 = __this_00;
  SVar10 = extraout_RDX;
  if (*(long *)((long)SVar32 + 0x10) != 0) {
    SVar31 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar32 + 0x10) + 0x28);
    if (SVar31 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)((long)puVar11 + -0xd0) = 0;
    }
    else {
      lVar21 = *(long *)SVar31;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar29 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
            puVar19 = (undefined8 *)
                      (lVar21 + (long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar29);
      }
      *(undefined8 *)((long)puVar11 + -0xf0) = 0x446219c;
      puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar31,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar23 = puVar19[1];
      pcVar5 = (code *)*puVar19;
      *(undefined8 *)((long)puVar11 + -0xf0) = 0x44621cf;
      uVar39 = (*pcVar5)(SVar31,uVar23);
      *(undefined4 *)((long)puVar11 + -0xd0) = uVar39;
    }
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x44621e4;
    SVar20 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)puVar11 + -0xf0) = 0x44621fe;
    control = SVar32;
    SVar18 = SVar20;
    System_Action_GisketchActionContext____ctor();
    SVar30 = "slider";
    options = *(uint **)((long)SVar32 + 0x10);
    SVar12 = SVar20;
    SVar36 = __this_00;
    unaff_R13 = extraout_RDX;
    SVar10 = extraout_RDX;
    if ((System_Nullable_bool__Fields)options != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)((long)puVar11 + -200) = SVar32;
      SVar31 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      fVar38 = 0.0;
      SVar25 = extraout_RDX;
      SVar10 = __this_00;
      if (SVar31 == (System_Nullable_bool__Fields)0x0) {
        SVar25 = SVar31;
        SVar10 = SVar31;
      }
      value = *(float *)((long)puVar11 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar31 != (System_Nullable_bool__Fields)0x0) {
        lVar21 = *(long *)SVar31;
        uVar2 = *(ushort *)(lVar21 + 0x12e);
        *(float *)((long)puVar11 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar29 = 0;
          do {
            if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
              puVar19 = (undefined8 *)
                        (lVar21 + (long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar29);
        }
        *(undefined8 *)((long)puVar11 + -0xf0) = 0x446229c;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar31,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control = *(System_Nullable_bool__Fields *)(puVar19 + 1);
        pcVar5 = (code *)*puVar19;
        *(undefined8 *)((long)puVar11 + -0xf0) = 0x44622c3;
        SVar18 = SVar31;
        fVar38 = (float)(*pcVar5)();
        options = *(uint **)(*(long *)((long)puVar11 + -200) + 0x10);
        SVar36 = SVar20;
        unaff_R13 = SVar25;
        SVar32 = SVar30;
        if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)((long)puVar11 + -0xcc);
        __this_00 = SVar10;
      }
      SVar12 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      SVar32 = __this_00;
      SVar10 = SVar20;
      if (SVar12 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        SVar36 = *(System_Nullable_bool__Fields *)((long)puVar11 + -200);
        if (__this_00 == (System_Nullable_bool__Fields)0x0) {
          SVar31.hasValue = 0;
          SVar31.value = 0;
          control = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)((long)puVar11 + -0xe8) = 0;
          *(undefined8 *)((long)puVar11 + -0xf0) = 0x44623fc;
          options = (uint *)SVar20;
          control = unaff_R13;
          SVar18 = __this_00;
          SVar31 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,(System_String_o *)unaff_R13,value
                              ,0,(System_Action_GisketchActionContext__o *)SVar20,(System_String_o *)SVar30,
                              fVar38,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)((long)puVar11 + -0xe8));
          if (*(long *)((long)SVar36 + 0x10) != 0) {
            bVar37 = *(char *)(*(long *)((long)SVar36 + 0x10) + 0x58) == '\0';
            *(undefined2 *)((long)puVar11 + -0xd2) = 0;
            control._1_7_ = 0;
            control.hasValue._0_1_ = bVar37;
            SVar18 = (System_Nullable_bool__Fields)((long)puVar11 + -0xd2);
            *(undefined8 *)((long)puVar11 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar18,(uint)bVar37,MethodInfo_Nullable_1_Boolean);
            if (SVar31 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar31 + 0x6b) = *(undefined2 *)((long)puVar11 + -0xd2);
              return extraout_XMM0_Da_02;
            }
          }
        }
      }
      else {
        lVar21 = *(long *)SVar12;
        uVar2 = *(ushort *)(lVar21 + 0x12e);
        SVar36 = *(System_Nullable_bool__Fields *)((long)puVar11 + -200);
        *(float *)((long)puVar11 + -0xd0) = fVar38;
        *(float *)((long)puVar11 + -0xcc) = value;
        options._0_4_ = 0;
        options._4_4_ = 0;
        if ((ulong)uVar2 != 0) {
          options = (uint *)((ulong)uVar2 << 4);
          SVar33.hasValue = 0;
          SVar33.value = 0;
          do {
            if (*(long *)(*(long *)(lVar21 + 0xb0) + (long)SVar33) == TypeInfo_IAottgSettingAdapter) {
              options = (uint *)((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + (long)SVar33) + 4) * 0x10);
              puVar19 = (undefined8 *)(lVar21 + (long)options + 0x138);
              goto label_044623be;
            }
            SVar33 = (System_Nullable_bool__Fields)((long)SVar33 + 0x10);
          } while ((System_Nullable_bool__Fields)options != SVar33);
        }
        *(undefined8 *)((long)puVar11 + -0xf0) = 0x446237c;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar12,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control = *(System_Nullable_bool__Fields *)(puVar19 + 1);
        pcVar5 = (code *)*puVar19;
        *(undefined8 *)((long)puVar11 + -0xf0) = 0x44623c7;
        SVar18 = SVar12;
        max = (float)(*pcVar5)();
        fVar38 = *(float *)((long)puVar11 + -0xd0);
        value = *(float *)((long)puVar11 + -0xcc);
        SVar31 = SVar30;
        if (__this_00 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)((long)puVar11 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0xf0) = SVar32;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0xf8) = SVar10;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x100) = SVar31;
  SVar10 = SVar18;
  if (g_data_057ae798 == '\0') {
    SVar10 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)((long)puVar11 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar21 = *(long *)((long)SVar18 + 0x10);
  if (lVar21 != 0) {
    SVar32 = (System_Nullable_bool__Fields)((long)puVar11 + -0xe0);
    SVar31 = *(System_Nullable_bool__Fields *)(lVar21 + 0x28);
    if (SVar31 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)puVar11 + -0x110) = *(undefined8 *)((long)puVar11 + -0xd0);
      *(undefined8 *)((long)puVar11 + -0x108) = *(undefined8 *)((long)puVar11 + -200);
      *(undefined8 *)((long)puVar11 + -0x120) = *(undefined8 *)SVar32;
      *(undefined8 *)((long)puVar11 + -0x118) = *(undefined8 *)((long)puVar11 + -0xd8);
label_0446256c:
      fVar38 = *(float *)((long)puVar11 + -0x120);
      *(undefined8 *)((long)puVar11 + -0x130) = *(undefined8 *)((long)puVar11 + -0x110);
      *(undefined8 *)((long)puVar11 + -0x128) = *(undefined8 *)((long)puVar11 + -0x108);
      *(float *)((long)puVar11 + -0x140) = fVar38;
      *(undefined4 *)((long)puVar11 + -0x13c) = *(undefined4 *)((long)puVar11 + -0x11c);
      *(undefined4 *)((long)puVar11 + -0x138) = *(undefined4 *)((long)puVar11 + -0x118);
      *(undefined4 *)((long)puVar11 + -0x134) = *(undefined4 *)((long)puVar11 + -0x114);
      lVar21 = *(long *)(lVar21 + 0x88);
      if (lVar21 != 0) {
        uVar23 = *(undefined8 *)(lVar21 + 0x28);
        uVar6 = *(undefined8 *)(lVar21 + 0x40);
        *(undefined4 *)((long)puVar11 + -0x150) = *(undefined4 *)((long)puVar11 + -0x130);
        *(undefined4 *)((long)puVar11 + -0x14c) = *(undefined4 *)((long)puVar11 + -300);
        *(undefined4 *)((long)puVar11 + -0x148) = *(undefined4 *)((long)puVar11 + -0x128);
        *(undefined4 *)((long)puVar11 + -0x144) = *(undefined4 *)((long)puVar11 + -0x124);
        *(undefined4 *)((long)puVar11 + -0x160) = *(undefined4 *)((long)puVar11 + -0x140);
        *(undefined4 *)((long)puVar11 + -0x15c) = *(undefined4 *)((long)puVar11 + -0x13c);
        *(undefined4 *)((long)puVar11 + -0x158) = *(undefined4 *)((long)puVar11 + -0x138);
        *(undefined4 *)((long)puVar11 + -0x154) = *(undefined4 *)((long)puVar11 + -0x134);
        pcVar5 = *(code **)(lVar21 + 0x18);
        *(undefined8 *)((long)puVar11 + -0x168) = 0x44625a7;
        fVar38 = (float)(*pcVar5)(uVar6,uVar23);
      }
      return fVar38;
    }
    *(undefined4 *)((long)puVar11 + -0x130) = *(undefined4 *)((long)puVar11 + -0xd0);
    *(undefined4 *)((long)puVar11 + -300) = *(undefined4 *)((long)puVar11 + -0xcc);
    *(undefined4 *)((long)puVar11 + -0x128) = *(undefined4 *)((long)puVar11 + -200);
    *(undefined4 *)((long)puVar11 + -0x124) = *(undefined4 *)((long)puVar11 + -0xc4);
    *(undefined4 *)((long)puVar11 + -0x140) = *(undefined4 *)SVar32;
    *(undefined4 *)((long)puVar11 + -0x13c) = *(undefined4 *)((long)puVar11 + -0xdc);
    *(undefined4 *)((long)puVar11 + -0x138) = *(undefined4 *)((long)puVar11 + -0xd8);
    *(undefined4 *)((long)puVar11 + -0x134) = *(undefined4 *)((long)puVar11 + -0xd4);
    lVar21 = *(long *)SVar31;
    options._0_4_ = 0;
    options._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      options = (uint *)((ulong)*(ushort *)(lVar21 + 0x12e) << 4);
      SVar34.hasValue = 0;
      SVar34.value = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + (long)SVar34) == TypeInfo_IAottgSettingAdapter) {
          options = (uint *)((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + (long)SVar34) + 0xb) * 0x10);
          puVar19 = (undefined8 *)(lVar21 + (long)options + 0x138);
          goto label_0446252f;
        }
        SVar34 = (System_Nullable_bool__Fields)((long)SVar34 + 0x10);
      } while ((System_Nullable_bool__Fields)options != SVar34);
    }
    *(undefined8 *)((long)puVar11 + -0x168) = 0x44624fc;
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar31,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control = *(System_Nullable_bool__Fields *)(puVar19 + 1);
    *(undefined4 *)((long)puVar11 + -0x150) = *(undefined4 *)((long)puVar11 + -0x130);
    *(undefined4 *)((long)puVar11 + -0x14c) = *(undefined4 *)((long)puVar11 + -300);
    *(undefined4 *)((long)puVar11 + -0x148) = *(undefined4 *)((long)puVar11 + -0x128);
    *(undefined4 *)((long)puVar11 + -0x144) = *(undefined4 *)((long)puVar11 + -0x124);
    *(undefined4 *)((long)puVar11 + -0x160) = *(undefined4 *)((long)puVar11 + -0x140);
    *(undefined4 *)((long)puVar11 + -0x15c) = *(undefined4 *)((long)puVar11 + -0x13c);
    *(undefined4 *)((long)puVar11 + -0x158) = *(undefined4 *)((long)puVar11 + -0x138);
    *(undefined4 *)((long)puVar11 + -0x154) = *(undefined4 *)((long)puVar11 + -0x134);
    pcVar5 = (code *)*puVar19;
    *(undefined8 *)((long)puVar11 + -0x168) = 0x446254b;
    SVar10 = SVar31;
    (*pcVar5)();
    lVar21 = *(long *)((long)SVar18 + 0x10);
    *(undefined8 *)((long)puVar11 + -0x110) = *(undefined8 *)((long)puVar11 + -0xd0);
    *(undefined8 *)((long)puVar11 + -0x108) = *(undefined8 *)((long)puVar11 + -200);
    *(undefined4 *)((long)puVar11 + -0x120) = *(undefined4 *)SVar32;
    *(undefined4 *)((long)puVar11 + -0x11c) = *(undefined4 *)((long)puVar11 + -0xdc);
    *(undefined4 *)((long)puVar11 + -0x118) = *(undefined4 *)((long)puVar11 + -0xd8);
    *(undefined4 *)((long)puVar11 + -0x114) = *(undefined4 *)((long)puVar11 + -0xd4);
    if (lVar21 != 0) goto label_0446256c;
  }
  *(undefined8 *)((long)puVar11 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x168) = SVar12;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x170) = SVar32;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x178) = SVar18;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x180) = SVar31;
  SVar18 = SVar10;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)((long)puVar11 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar18 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)((long)puVar11 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar21 = *(long *)((long)SVar10 + 0x10);
  if (lVar21 != 0) {
    SVar12 = (System_Nullable_bool__Fields)((long)puVar11 + -0x158);
    SVar31 = *(System_Nullable_bool__Fields *)(lVar21 + 0x28);
    if (SVar31 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)puVar11 + -0x1b8) = *(undefined8 *)((long)puVar11 + -0x148);
      *(undefined8 *)((long)puVar11 + -0x1b0) = *(undefined8 *)((long)puVar11 + -0x140);
      *(undefined8 *)((long)puVar11 + -0x1c8) = *(undefined8 *)SVar12;
      *(undefined8 *)((long)puVar11 + -0x1c0) = *(undefined8 *)((long)puVar11 + -0x150);
    }
    else {
      if (*(long *)((long)puVar11 + -0x148) == 0) {
        SVar32.hasValue = 0;
        SVar32.value = 0;
      }
      else {
        pSVar22 = *(System_String_o **)(*(long *)((long)puVar11 + -0x148) + 0x50);
        *(undefined8 *)((long)puVar11 + -0x1f0) = 0x4462631;
        uVar8 = System_String__op_Equality(pSVar22,"true",(MethodInfo *)0x0);
        SVar32.value = 0;
        SVar32.hasValue = uVar8;
      }
      lVar21 = *(long *)SVar31;
      options._0_4_ = 0;
      options._4_4_ = 0;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        options = (uint *)((ulong)*(ushort *)(lVar21 + 0x12e) << 4);
        SVar35.hasValue = 0;
        SVar35.value = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + (long)SVar35) == TypeInfo_IAottgSettingAdapter) {
            options = (uint *)((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + (long)SVar35) + 8) * 0x10);
            puVar19 = (undefined8 *)(lVar21 + (long)options + 0x138);
            goto label_044626b5;
          }
          SVar35 = (System_Nullable_bool__Fields)((long)SVar35 + 0x10);
        } while ((System_Nullable_bool__Fields)options != SVar35);
      }
      *(undefined8 *)((long)puVar11 + -0x1f0) = 0x446269c;
      puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar31,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      uVar23 = puVar19[1];
      control = (System_Nullable_bool__Fields)((ulong)SVar32 & 0xff);
      pcVar5 = (code *)*puVar19;
      *(undefined8 *)((long)puVar11 + -0x1f0) = 0x44626c2;
      SVar18 = SVar31;
      (*pcVar5)(SVar31,control,uVar23);
      lVar21 = *(long *)((long)SVar10 + 0x10);
      *(undefined8 *)((long)puVar11 + -0x1b8) = *(undefined8 *)((long)puVar11 + -0x148);
      *(undefined8 *)((long)puVar11 + -0x1b0) = *(undefined8 *)((long)puVar11 + -0x140);
      *(undefined4 *)((long)puVar11 + -0x1c8) = *(undefined4 *)SVar12;
      *(undefined4 *)((long)puVar11 + -0x1c4) = *(undefined4 *)((long)puVar11 + -0x154);
      *(undefined4 *)((long)puVar11 + -0x1c0) = *(undefined4 *)((long)puVar11 + -0x150);
      *(undefined4 *)((long)puVar11 + -0x1bc) = *(undefined4 *)((long)puVar11 + -0x14c);
      if (lVar21 == 0) goto label_04462728;
    }
    fVar38 = *(float *)((long)puVar11 + -0x1c8);
    *(undefined8 *)((long)puVar11 + -0x198) = *(undefined8 *)((long)puVar11 + -0x1b8);
    *(undefined8 *)((long)puVar11 + -400) = *(undefined8 *)((long)puVar11 + -0x1b0);
    *(float *)((long)puVar11 + -0x1a8) = fVar38;
    *(undefined4 *)((long)puVar11 + -0x1a4) = *(undefined4 *)((long)puVar11 + -0x1c4);
    *(undefined4 *)((long)puVar11 + -0x1a0) = *(undefined4 *)((long)puVar11 + -0x1c0);
    *(undefined4 *)((long)puVar11 + -0x19c) = *(undefined4 *)((long)puVar11 + -0x1bc);
    lVar21 = *(long *)(lVar21 + 0x88);
    if (lVar21 != 0) {
      uVar23 = *(undefined8 *)(lVar21 + 0x28);
      uVar6 = *(undefined8 *)(lVar21 + 0x40);
      *(undefined4 *)((long)puVar11 + -0x1d8) = *(undefined4 *)((long)puVar11 + -0x198);
      *(undefined4 *)((long)puVar11 + -0x1d4) = *(undefined4 *)((long)puVar11 + -0x194);
      *(undefined4 *)((long)puVar11 + -0x1d0) = *(undefined4 *)((long)puVar11 + -400);
      *(undefined4 *)((long)puVar11 + -0x1cc) = *(undefined4 *)((long)puVar11 + -0x18c);
      *(undefined4 *)((long)puVar11 + -0x1e8) = *(undefined4 *)((long)puVar11 + -0x1a8);
      *(undefined4 *)((long)puVar11 + -0x1e4) = *(undefined4 *)((long)puVar11 + -0x1a4);
      *(undefined4 *)((long)puVar11 + -0x1e0) = *(undefined4 *)((long)puVar11 + -0x1a0);
      *(undefined4 *)((long)puVar11 + -0x1dc) = *(undefined4 *)((long)puVar11 + -0x19c);
      pcVar5 = *(code **)(lVar21 + 0x18);
      *(undefined8 *)((long)puVar11 + -0x1f0) = 0x446271d;
      fVar38 = (float)(*pcVar5)(uVar6,uVar23);
    }
    return fVar38;
  }
label_04462728:
  *(undefined8 *)((long)puVar11 + -0x1f0) = 0x446272d;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x1f0) = SVar12;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x1f8) = SVar32;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x200) = SVar10;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x208) = unaff_R13;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x210) = SVar36;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x218) = SVar31;
  SVar12 = SVar18;
  if (g_data_057ae79c == '\0') {
    *(undefined8 *)((long)puVar11 + -0x278) = 0x4462759;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x4462765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x4462771;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x446277d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x4462789;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)((long)puVar11 + -0x278) = 0x4462795;
    il2cpp_runtime_helper_023445d0(&"-value-button");
    *(undefined8 *)((long)puVar11 + -0x278) = 0x44627a1;
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar12 = (System_Nullable_bool__Fields)&"0";
    *(undefined8 *)((long)puVar11 + -0x278) = 0x44627ad;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar18 + 0x10) != 0) {
    pSVar22 = *(System_String_o **)(*(long *)((long)SVar18 + 0x10) + 0x10);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x44627d6;
    pSVar22 = System_String__Concat_3ae5ba0(pSVar22,"-slider",(MethodInfo *)0x0);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x44627e4;
    SVar31 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)control,pSVar22,(MethodInfo *)options);
    *(undefined8 *)((long)puVar11 + -0x278) = 0x44627f6;
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(undefined8 *)((long)puVar11 + -0x260) = 0;
    *(undefined8 *)((long)puVar11 + -600) = 0;
    *(undefined8 *)((long)puVar11 + -0x270) = 0;
    *(undefined8 *)((long)puVar11 + -0x268) = 0;
    *(undefined8 *)((long)puVar11 + -0x228) = 0;
    *(undefined4 *)((long)puVar11 + -0x230) = 0x3f800000;
    *(undefined4 *)((long)puVar11 + -0x238) = 0x3f800000;
    *(undefined4 *)((long)puVar11 + -0x240) = 0;
    *(undefined4 *)((long)puVar11 + -0x248) = 0;
    *(undefined8 *)((long)puVar11 + -0x250) = 0;
    *(undefined8 *)((long)puVar11 + -0x278) = 0x4462873;
    SVar12 = "Column";
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar14,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x270),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x268),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x260),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -600),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x250),0.0,0.0,0.0,0.0
                         ,0.0,0.0,0.0,*(float *)((long)puVar11 + -0x248),*(float *)((long)puVar11 + -0x240),
                         *(float *)((long)puVar11 + -0x238),*(float *)((long)puVar11 + -0x230),
                         *(MethodInfo **)((long)puVar11 + -0x228));
    if (SVar31 != (System_Nullable_bool__Fields)0x0) {
      SVar12 = (System_Nullable_bool__Fields)((long)SVar31 + 0xd8);
      *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar31 + 0xd8) = pGVar16;
      *(undefined8 *)((long)puVar11 + -0x278) = 0x4462895;
      il2cpp_runtime_helper_022b4080(SVar12,pGVar16);
      if (*(long *)((long)SVar18 + 0x10) != 0) {
        plVar4 = *(long **)(*(long *)((long)SVar18 + 0x10) + 0x28);
        if (plVar4 == (long *)0x0) {
          variant = 4;
          pSVar22 = "0";
        }
        else {
          lVar21 = *plVar4;
          if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
            lVar29 = 0;
            do {
              if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar29) == TypeInfo_IAottgSettingAdapter) {
                puVar19 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar29) * 0x10 + lVar21 + 0x138);
                goto label_04462936;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar29);
          }
          *(undefined8 *)((long)puVar11 + -0x278) = 0x4462909;
          puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar4 != (long *)0x0) << 2;
          uVar23 = puVar19[1];
          pcVar5 = (code *)*puVar19;
          *(undefined8 *)((long)puVar11 + -0x278) = 0x4462943;
          pSVar22 = (System_String_o *)(*pcVar5)(plVar4,uVar23);
        }
        *(undefined8 *)((long)puVar11 + -0x278) = 0x4462955;
        SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        *(undefined8 *)((long)puVar11 + -0x278) = 0x446296f;
        SVar12 = SVar10;
        System_Action_GisketchActionContext____ctor();
        SVar31 = control;
        if (*(long *)((long)SVar18 + 0x10) != 0) {
          SVar12 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar18 + 0x10) + 0x10);
          *(undefined8 *)((long)puVar11 + -0x278) = 0x4462991;
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar12,"-value-button",(MethodInfo *)0x0);
          if (control != (System_Nullable_bool__Fields)0x0) {
            *(undefined8 *)((long)puVar11 + -0x270) = 0;
            *(undefined8 *)((long)puVar11 + -0x268) = 0;
            *(undefined8 *)((long)puVar11 + -0x260) = 0;
            *(undefined8 *)((long)puVar11 + -0x278) = 0x44629c1;
            SVar12 = control;
            SVar31 = (System_Nullable_bool__Fields)
                     Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)control,variant,pSVar22,
                                (System_Action_GisketchActionContext__o *)SVar10,id,(System_String_o *)0x0,
                                *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                                 ((long)puVar11 + -0x270),*(System_String_o **)((long)puVar11 + -0x268),
                                *(MethodInfo **)((long)puVar11 + -0x260));
            if (*(long *)((long)SVar18 + 0x10) != 0) {
              cVar1 = *(char *)(*(long *)((long)SVar18 + 0x10) + 0x58);
              *(undefined2 *)((long)puVar11 + -0x21a) = 0;
              SVar12 = (System_Nullable_bool__Fields)((long)puVar11 + -0x21a);
              *(undefined8 *)((long)puVar11 + -0x278) = 0x44629f6;
              System_Nullable_bool____ctor((System_Nullable_bool__o)SVar12,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean)
              ;
              if (SVar31 != (System_Nullable_bool__Fields)0x0) {
                *(undefined2 *)((long)SVar31 + 0x6b) = *(undefined2 *)((long)puVar11 + -0x21a);
                *(undefined8 *)((long)puVar11 + -0x278) = 0x4462a1e;
                pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                *(undefined8 *)((long)puVar11 + -0x260) = 0;
                *(undefined8 *)((long)puVar11 + -600) = 0;
                *(undefined8 *)((long)puVar11 + -0x270) = 0;
                *(undefined8 *)((long)puVar11 + -0x268) = 0;
                *(undefined8 *)((long)puVar11 + -0x228) = 0;
                *(undefined4 *)((long)puVar11 + -0x230) = 0;
                *(undefined4 *)((long)puVar11 + -0x238) = 0;
                *(undefined4 *)((long)puVar11 + -0x240) = 0;
                *(undefined4 *)((long)puVar11 + -0x248) = 0;
                *(undefined8 *)((long)puVar11 + -0x250) = 0;
                *(undefined8 *)((long)puVar11 + -0x278) = 0x4462a95;
                pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ((System_String_o *)"Column",(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     pGVar14,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)
                                              ((long)puVar11 + -0x270),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x268),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x260),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -600),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)puVar11 + -0x250),0.0
                                     ,0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)puVar11 + -0x248),
                                     *(float *)((long)puVar11 + -0x240),*(float *)((long)puVar11 + -0x238),
                                     *(float *)((long)puVar11 + -0x230),
                                     *(MethodInfo **)((long)puVar11 + -0x228));
                *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar31 + 0xd8) = pGVar16;
                *(undefined8 *)((long)puVar11 + -0x278) = 0x4462aae;
                fVar38 = (float)il2cpp_runtime_helper_022b4080((long)SVar31 + 0xd8,pGVar16);
                return fVar38;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)puVar11 + -0x278) = 0x4462ac2;
  uVar23 = il2cpp_runtime_helper_022b2c90();
  lVar21 = *(long *)((long)SVar12 + 0x10);
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x278) = control;
  *(System_Nullable_bool__Fields *)((long)puVar11 + -0x280) = SVar31;
  *(undefined8 *)((long)puVar11 + -0x288) = uVar23;
  fVar38 = extraout_XMM0_Da_03;
  if (g_data_057ae7ad == '\0') {
    *(undefined8 *)((long)puVar11 + -0x290) = 0x4462afc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    *(undefined8 *)((long)puVar11 + -0x290) = 0x4462b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    *(undefined8 *)((long)puVar11 + -0x290) = 0x4462b14;
    fVar38 = (float)il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar21 != 0) && (*(long *)(lVar21 + 0x28) != 0)) && (*(char *)(lVar21 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar21;
    uVar23 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
    *(undefined8 *)((long)puVar11 + -0x290) = 0x4462b60;
    fVar38 = (float)il2cpp_runtime_helper_022b4080(uVar23,lVar21);
    if (*(UnityEngine_GameObject_o **)((long)puVar11 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)puVar11 + -0x290) = 0x4462b78;
      pIVar24 = UnityEngine_GameObject__GetComponentInParent_object_
                          (*(UnityEngine_GameObject_o **)((long)puVar11 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      fVar38 = extraout_XMM0_Da_04;
      if ((pIVar24 != (Il2CppObject *)0x0) &&
         (pIVar24[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar24[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
        return extraout_XMM0_Da_05;
      }
    }
  }
  return fVar38;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlVisualWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlVisualWidth (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x44610a0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlVisualWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  System_Nullable_bool__Fields SVar10;
  undefined8 *puVar11;
  System_Nullable_bool__Fields SVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar16;
  System_Nullable_bool__Fields SVar17;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields SVar19;
  long lVar20;
  System_String_o *pSVar21;
  System_String_o *id;
  undefined8 uVar22;
  Il2CppObject *pIVar23;
  System_Nullable_bool__Fields in_RCX;
  uint *options;
  System_Nullable_bool__Fields extraout_RDX;
  System_Nullable_bool__Fields __this_00;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields SVar24;
  ulong *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  System_Nullable_bool__Fields unaff_RBP;
  System_Nullable_bool__Fields control;
  long lVar30;
  System_Nullable_bool__Fields SVar31;
  System_Nullable_bool__Fields SVar32;
  System_Nullable_bool__Fields SVar33;
  System_Nullable_bool__Fields SVar34;
  System_Nullable_bool__Fields SVar35;
  System_Nullable_bool__Fields SVar36;
  System_Nullable_bool__Fields unaff_R12;
  System_Nullable_bool__Fields SVar37;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields unaff_R14;
  System_Nullable_bool__Fields unaff_R15;
  bool bVar38;
  float extraout_XMM0_Da;
  float fVar39;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined4 uVar40;
  float max;
  float value;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  undefined1 auVar41 [16];
  ulong uStack_10;
  undefined1 auStack_8 [8];
  
  puVar25 = (ulong *)auStack_8;
  puVar27 = auStack_8;
  puVar28 = auStack_8;
  puVar26 = auStack_8;
  puVar29 = auStack_8;
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    uVar9 = (ulong)(pGVar3->fields).Kind;
    if (uVar9 < 7) {
      return *(float *)(&g_data_00d999ec + uVar9 * 4);
    }
    return 360.0;
  }
  uStack_10 = 0x44610d1;
  auVar41 = il2cpp_runtime_helper_022b2c90();
  uVar9 = auVar41._0_8_;
  uStack_10 = uVar9;
  if (*(long *)((long)__this + 0x10) == 0) {
    uVar9 = il2cpp_runtime_helper_022b2c90();
    puVar25 = &uStack_10;
    SVar18 = (System_Nullable_bool__Fields)__this;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch:
    *(System_Nullable_bool__Fields *)((long)puVar25 + -8) = unaff_RBP;
    *(System_Nullable_bool__Fields *)((long)puVar25 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)((long)puVar25 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)((long)puVar25 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)((long)puVar25 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)((long)puVar25 + -0x30) = unaff_RBX;
    *(ulong *)((long)puVar25 + -0x38) = uVar9;
    SVar12 = (System_Nullable_bool__Fields)method;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18;
    if (g_data_057ae791 == '\0') {
      *(undefined8 *)((long)puVar25 + -0x40) = 0x4461166;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)((long)puVar25 + -0x40) = 0x4461172;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSwitch_b__4_0);
      *(undefined8 *)((long)puVar25 + -0x40) = 0x446117e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-switch";
      *(undefined8 *)((long)puVar25 + -0x40) = 0x446118a;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae791 = '\x01';
    }
    if (*(long *)((long)SVar18 + 0x10) == 0) {
label_044612b2:
      *(undefined8 *)((long)puVar25 + -0x40) = 0x44612b7;
      auVar41 = il2cpp_runtime_helper_022b2c90();
      options = (uint *)in_RCX;
      puVar26 = (undefined1 *)((long)puVar25 + -0x38);
      unaff_R13 = (System_Nullable_bool__Fields)method;
      unaff_R14 = SVar18;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown;
    }
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar18 + 0x10) + 0x10);
    *(undefined8 *)((long)puVar25 + -0x40) = 0x44611b3;
    SVar12 = "-switch";
    SVar10 = (System_Nullable_bool__Fields)
             System_String__Concat_3ae5ba0
                       ((System_String_o *)__this,(System_String_o *)"-switch",(MethodInfo *)0x0);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if (*(long *)((long)SVar18 + 0x10) == 0) goto label_044612b2;
    plVar4 = *(long **)(*(long *)((long)SVar18 + 0x10) + 0x28);
    if (plVar4 == (long *)0x0) {
      unaff_RBP.hasValue = 0;
      unaff_RBP.value = 0;
    }
    else {
      lVar20 = *plVar4;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar30 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) + 2) * 0x10 + lVar20 + 0x138);
            goto label_04461243;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar30);
      }
      *(undefined8 *)((long)puVar25 + -0x40) = 0x446121c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,2);
label_04461243:
      uVar22 = puVar11[1];
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)((long)puVar25 + -0x40) = 0x446124c;
      uVar8 = (*pcVar5)(plVar4,uVar22);
      unaff_RBP.value = 0;
      unaff_RBP.hasValue = uVar8;
    }
    *(undefined8 *)((long)puVar25 + -0x40) = 0x446125d;
    options = (uint *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    *(undefined8 *)((long)puVar25 + -0x40) = 0x4461277;
    SVar12 = SVar18;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)options;
    System_Action_GisketchActionContext____ctor();
    unaff_R12.hasValue = 0;
    unaff_R12.value = 0;
    unaff_RBX = (System_Nullable_bool__Fields)options;
    unaff_R15 = SVar10;
    if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_044612b2;
    *(undefined8 *)((long)puVar25 + -0x40) = 0x4461291;
    SVar12 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_Code_AottgUi__Switch
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,(System_String_o *)SVar10,
                        unaff_RBP.hasValue & 0xff,(System_Action_GisketchActionContext__o *)options,
                        (MethodInfo *)0x0);
    fVar39 = 58.0;
    SVar31 = *(System_Nullable_bool__Fields *)((long)puVar25 + -0x30);
    SVar37 = *(System_Nullable_bool__Fields *)((long)puVar25 + -0x28);
    unaff_R13 = *(System_Nullable_bool__Fields *)((long)puVar25 + -0x20);
    SVar10 = *(System_Nullable_bool__Fields *)((long)puVar25 + -0x18);
    method = *(MethodInfo **)((long)puVar25 + -0x10);
    unaff_RBP = *(System_Nullable_bool__Fields *)((long)puVar25 + -8);
    puVar29 = (undefined1 *)puVar25;
    unaff_RBX = SVar18;
  }
  else {
    options = &switchD_04461101::switchdataD_00d999d4;
    SVar12 = (System_Nullable_bool__Fields)method;
    switch(*(undefined4 *)(*(long *)((long)__this + 0x10) + 0x20)) {
    case 0:
      in_RCX = (System_Nullable_bool__Fields)options;
      SVar18 = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch;
    case 1:
      auVar41._8_8_ = 1;
      auVar41._0_8_ = uVar9;
      break;
    case 2:
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar9;
      puVar26 = auStack_8;
      break;
    case 3:
      SVar10 = (System_Nullable_bool__Fields)options;
      SVar18 = unaff_RBX;
      unaff_RBX = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider;
    case 4:
      SVar12 = unaff_RBP;
      SVar18 = (System_Nullable_bool__Fields)method;
      unaff_RBP = (System_Nullable_bool__Fields)__this;
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput;
    case 5:
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton;
    default:
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly
                (__this,(Gisketch_Aottg2UI_Code_AottgUi_o *)method,auVar41._8_8_);
      return extraout_XMM0_Da;
    }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown:
    *(System_Nullable_bool__Fields *)(puVar26 + -8) = unaff_RBP;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar26 + -0x30) = unaff_RBX;
    puVar29 = puVar26 + -0x38;
    *(long *)(puVar26 + -0x38) = auVar41._0_8_;
    unaff_R12 = (System_Nullable_bool__Fields)(auVar41._8_8_ & 0xffffffff);
    SVar10 = (System_Nullable_bool__Fields)options;
    method = (MethodInfo *)SVar12;
    if (g_data_057ae792 == '\0') {
      *(undefined8 *)(puVar26 + -0x40) = 0x44612e9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar26 + -0x40) = 0x44612f5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)(puVar26 + -0x40) = 0x4461301;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar26 + -0x40) = 0x446130d;
      il2cpp_runtime_helper_023445d0(&"-select");
      *(undefined8 *)(puVar26 + -0x40) = 0x4461319;
      il2cpp_runtime_helper_023445d0(&"-dropdown");
      g_data_057ae792 = '\x01';
      SVar10 = (System_Nullable_bool__Fields)options;
    }
    *(undefined8 *)(puVar26 + -0x40) = 0x4461328;
    unaff_RBX = (System_Nullable_bool__Fields)__this;
    options = (uint *)Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions(__this,method);
    lVar20 = *(long *)((long)__this + 0x10);
    if (lVar20 != 0) {
      unaff_RBP = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
      if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
        unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
        pSVar21 = *(System_String_o **)(lVar20 + 0x10);
        if ((char)unaff_R12.hasValue != '\0') goto label_044613e9;
label_0446145e:
        *(undefined8 *)(puVar26 + -0x40) = 0x446146f;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar21,"-select",(MethodInfo *)0x0);
        *(undefined8 *)(puVar26 + -0x40) = 0x4461481;
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar10.hasValue = 0;
        SVar10.value = 0;
        *(undefined8 *)(puVar26 + -0x40) = 0x446149b;
        method = (MethodInfo *)__this;
        unaff_RBX = unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)__this + 0x10) == 0) || (SVar12 == (System_Nullable_bool__Fields)0x0))
        goto label_044614ee;
        uVar8 = *(uint *)(*(long *)((long)__this + 0x10) + 0x5c);
        *(undefined8 *)(puVar26 + -0x40) = 0;
        *(ulong *)(puVar26 + -0x48) = (ulong)uVar8;
        *(undefined8 *)(puVar26 + -0x50) = 0x44614c9;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar12,(System_String_o *)unaff_R12,
                            (System_String_o *)unaff_R13,
                            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                            (System_Action_GisketchActionContext__o *)unaff_RBP,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            *(int32_t *)(puVar26 + -0x48),*(MethodInfo **)(puVar26 + -0x40));
label_044614c9:
        fVar39 = 300.0;
        SVar31 = *(System_Nullable_bool__Fields *)(puVar26 + -0x30);
        SVar37 = *(System_Nullable_bool__Fields *)(puVar26 + -0x28);
        unaff_R13 = *(System_Nullable_bool__Fields *)(puVar26 + -0x20);
        SVar10 = *(System_Nullable_bool__Fields *)(puVar26 + -0x18);
        method = *(MethodInfo **)(puVar26 + -0x10);
        unaff_RBP = *(System_Nullable_bool__Fields *)(puVar26 + -8);
        puVar29 = puVar26;
        unaff_RBX = (System_Nullable_bool__Fields)__this;
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      lVar20 = *(long *)unaff_RBP;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar30 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
            SVar10 = (System_Nullable_bool__Fields)
                     ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) * 0x10 + lVar20 + 0x138);
            goto label_044613c7;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar30);
      }
      *(undefined8 *)(puVar26 + -0x40) = 0x4461389;
      SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_044613c7:
      method = *(MethodInfo **)((long)SVar10 + 8);
      SVar18 = *(System_Nullable_bool__Fields *)SVar10;
      *(undefined8 *)(puVar26 + -0x40) = 0x44613d0;
      unaff_RBX = unaff_RBP;
      unaff_R13 = (System_Nullable_bool__Fields)(*(code *)SVar18)();
      if (*(long *)((long)__this + 0x10) != 0) {
        pSVar21 = *(System_String_o **)(*(long *)((long)__this + 0x10) + 0x10);
        if ((char)unaff_R12.hasValue == '\0') goto label_0446145e;
label_044613e9:
        *(undefined8 *)(puVar26 + -0x40) = 0x44613fa;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar21,"-dropdown",(MethodInfo *)0x0);
        *(undefined8 *)(puVar26 + -0x40) = 0x446140c;
        unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar10.hasValue = 0;
        SVar10.value = 0;
        *(undefined8 *)(puVar26 + -0x40) = 0x4461426;
        method = (MethodInfo *)__this;
        unaff_RBX = unaff_RBP;
        System_Action_GisketchActionContext____ctor();
        if ((*(long *)((long)__this + 0x10) != 0) && (SVar12 != (System_Nullable_bool__Fields)0x0)) {
          uVar8 = *(uint *)(*(long *)((long)__this + 0x10) + 0x5c);
          *(undefined8 *)(puVar26 + -0x40) = 0;
          *(ulong *)(puVar26 + -0x48) = (ulong)uVar8;
          *(undefined8 *)(puVar26 + -0x50) = 0x446145c;
          SVar12 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar12,(System_String_o *)unaff_R12,
                              (System_String_o *)unaff_R13,
                              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                              (System_Action_GisketchActionContext__o *)unaff_RBP,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(int32_t *)(puVar26 + -0x48),*(MethodInfo **)(puVar26 + -0x40));
          goto label_044614c9;
        }
      }
    }
label_044614ee:
    *(undefined8 *)(puVar26 + -0x40) = 0x44614f3;
    il2cpp_runtime_helper_022b2c90();
    SVar18 = (System_Nullable_bool__Fields)__this;
    unaff_R14 = SVar12;
    unaff_R15 = (System_Nullable_bool__Fields)options;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider:
    *(System_Nullable_bool__Fields *)(puVar29 + -8) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x18) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar29 + -0x20) = SVar18;
    puVar27 = puVar29 + -0x78;
    options = (uint *)SVar10;
    SVar18 = (System_Nullable_bool__Fields)method;
    SVar31 = unaff_RBX;
    if (g_data_057ae793 == '\0') {
      *(undefined8 *)(puVar29 + -0x80) = 0x4461526;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      *(undefined8 *)(puVar29 + -0x80) = 0x4461532;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_0);
      *(undefined8 *)(puVar29 + -0x80) = 0x446153e;
      il2cpp_runtime_helper_023445d0(&"clear");
      *(undefined8 *)(puVar29 + -0x80) = 0x446154a;
      il2cpp_runtime_helper_023445d0(&"-slider-with-value");
      *(undefined8 *)(puVar29 + -0x80) = 0x4461556;
      il2cpp_runtime_helper_023445d0(&"Center");
      *(undefined8 *)(puVar29 + -0x80) = 0x4461562;
      il2cpp_runtime_helper_023445d0(&"Row");
      SVar31 = (System_Nullable_bool__Fields)&"-slider";
      *(undefined8 *)(puVar29 + -0x80) = 0x446156e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae793 = '\x01';
      options = (uint *)SVar10;
    }
    lVar20 = *(long *)((long)unaff_RBX + 0x10);
    if (lVar20 != 0) {
      if (*(char *)(lVar20 + 0x59) == '\0') {
        pSVar21 = *(System_String_o **)(lVar20 + 0x10);
        *(undefined8 *)(puVar29 + -0x80) = 0x44616d7;
        pSVar21 = System_String__Concat_3ae5ba0(pSVar21,"-slider",(MethodInfo *)0x0);
        *(undefined8 *)(puVar29 + -0x80) = 0x44616e5;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBX,
                            (Gisketch_Aottg2UI_Code_AottgUi_o *)method,pSVar21,(MethodInfo *)options);
        fVar39 = 620.0;
        SVar31 = *(System_Nullable_bool__Fields *)(puVar29 + -0x20);
        SVar37 = *(System_Nullable_bool__Fields *)(puVar29 + -0x18);
        SVar10 = *(System_Nullable_bool__Fields *)(puVar29 + -0x10);
        method = *(MethodInfo **)(puVar29 + -8);
        goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout;
      }
      *(undefined8 *)(puVar29 + -0x80) = 0x446159b;
      unaff_R15 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)(puVar29 + -0x80) = 0x44615b5;
      SVar18 = unaff_RBX;
      SVar31 = unaff_R15;
      System_Action_object____ctor();
      if (*(long *)((long)unaff_RBX + 0x10) != 0) {
        pSVar21 = *(System_String_o **)(*(long *)((long)unaff_RBX + 0x10) + 0x10);
        *(undefined8 *)(puVar29 + -0x80) = 0x44615d7;
        unaff_R12 = (System_Nullable_bool__Fields)
                    System_String__Concat_3ae5ba0(pSVar21,"-slider-with-value",(MethodInfo *)0x0);
        *(undefined8 *)(puVar29 + -0x80) = 0x44615e9;
        unaff_RBX = (System_Nullable_bool__Fields)
                    Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
        *(undefined8 *)(puVar29 + -0x80) = 0x44615fb;
        pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x60) = pGVar14;
        *(undefined8 *)(puVar29 + -0x78) = 0;
        *(undefined8 *)(puVar29 + -0x70) = 0;
        *(undefined8 *)(puVar29 + -0x30) = 0;
        *(undefined4 *)(puVar29 + -0x38) = 0x3f800000;
        *(undefined4 *)(puVar29 + -0x40) = 0;
        *(undefined4 *)(puVar29 + -0x48) = 0;
        *(undefined4 *)(puVar29 + -0x50) = 0;
        *(undefined8 *)(puVar29 + -0x58) = 0;
        *(undefined8 *)(puVar29 + -0x68) = 0;
        SVar18.hasValue = 0;
        SVar18.value = 0;
        options._0_4_ = 0;
        options._4_4_ = 0;
        *(undefined8 *)(puVar29 + -0x80) = 0x446168b;
        SVar31 = "Row";
        pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x78),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x70),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x68),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x60),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x58),0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,*(float *)(puVar29 + -0x50),*(float *)(puVar29 + -0x48),
                             *(float *)(puVar29 + -0x40),*(float *)(puVar29 + -0x38),
                             *(MethodInfo **)(puVar29 + -0x30));
        if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar29 + -0x78) = 0;
          *(undefined8 *)(puVar29 + -0x80) = 0x44616b6;
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,"clear",
                     (System_Action_AottgUi__o *)unaff_R15,(System_String_o *)unaff_R12,pGVar16,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     *(MethodInfo **)(puVar29 + -0x78));
          return extraout_XMM0_Da_00;
        }
      }
    }
    *(undefined8 *)(puVar29 + -0x80) = 0x4461708;
    il2cpp_runtime_helper_022b2c90();
    SVar12 = unaff_RBP;
    unaff_RBP = SVar31;
    unaff_R14 = (System_Nullable_bool__Fields)method;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput:
    *(System_Nullable_bool__Fields *)(puVar27 + -8) = SVar12;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x10) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x18) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x20) = unaff_R13;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x28) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar27 + -0x30) = unaff_RBX;
    puVar28 = puVar27 + -0x58;
    method = (MethodInfo *)SVar18;
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
    if (g_data_057ae795 == '\0') {
      *(undefined8 *)(puVar27 + -0x60) = 0x4461739;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      *(undefined8 *)(puVar27 + -0x60) = 0x4461745;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
      *(undefined8 *)(puVar27 + -0x60) = 0x4461751;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgStringSettingAdapter);
      *(undefined8 *)(puVar27 + -0x60) = 0x446175d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
      *(undefined8 *)(puVar27 + -0x60) = 0x4461769;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)(puVar27 + -0x60) = 0x4461775;
      il2cpp_runtime_helper_023445d0(&"inputField");
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)&"-input";
      *(undefined8 *)(puVar27 + -0x60) = 0x4461781;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae795 = '\x01';
    }
    lVar20 = *(long *)((long)unaff_RBP + 0x10);
    if (lVar20 != 0) {
      if (*(long **)(lVar20 + 0x28) == (long *)0x0) {
        *(undefined4 *)(puVar27 + -0x54) = 1;
      }
      else {
        *(uint *)(puVar27 + -0x54) = (uint)(**(long **)(lVar20 + 0x28) != TypeInfo_AottgStringSettingAdapter);
      }
      pSVar21 = *(System_String_o **)(lVar20 + 0x10);
      *(undefined8 *)(puVar27 + -0x60) = 0x44617d4;
      unaff_R12 = (System_Nullable_bool__Fields)
                  System_String__Concat_3ae5ba0(pSVar21,"-input",(MethodInfo *)0x0);
      unaff_R13 = **(System_Nullable_bool__Fields **)(g_data_057b9c00 + 0xb8);
      *(undefined8 *)(puVar27 + -0x60) = 0x44617fe;
      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar27 + -0x60) = 0x4461810;
      pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x90) = pGVar15;
      *(undefined8 *)(puVar27 + -0xa8) = 0;
      *(undefined8 *)(puVar27 + -0xa0) = 0;
      *(undefined8 *)(puVar27 + -0x60) = 0;
      *(undefined4 *)(puVar27 + -0x68) = 0x3f800000;
      *(undefined4 *)(puVar27 + -0x70) = 0;
      *(undefined4 *)(puVar27 + -0x78) = 0;
      *(undefined4 *)(puVar27 + -0x80) = 0;
      *(undefined8 *)(puVar27 + -0x88) = 0;
      *(undefined8 *)(puVar27 + -0x98) = 0;
      *(undefined4 *)(puVar27 + -0x50) = 0;
      *(undefined8 *)(puVar27 + -0xb0) = 0x44618a3;
      unaff_RBX = (System_Nullable_bool__Fields)
                  Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar14,
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0xa8),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0xa0),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x98),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x90),
                             *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar27 + -0x88),0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,*(float *)(puVar27 + -0x80),*(float *)(puVar27 + -0x78),
                             *(float *)(puVar27 + -0x70),*(float *)(puVar27 + -0x68),
                             *(MethodInfo **)(puVar27 + -0x60));
      *(undefined8 *)(puVar27 + -0x60) = 0x44618b9;
      unaff_R14 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      options._0_4_ = 0;
      options._4_4_ = 0;
      *(undefined8 *)(puVar27 + -0x60) = 0x44618d3;
      method = (MethodInfo *)unaff_RBP;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R14;
      System_Action_GisketchActionContext____ctor();
      *(System_Nullable_bool__Fields *)(puVar27 + -0x38) = unaff_RBP;
      if (*(long *)((long)unaff_RBP + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)unaff_RBP + 0x10) + 0x28);
        *(System_Nullable_bool__Fields *)(puVar27 + -0x40) = SVar18;
        fVar39 = 0.05;
        bVar38 = unaff_RBP == (System_Nullable_bool__Fields)0x0;
        SVar37 = unaff_R13;
        SVar12 = unaff_R12;
        if (bVar38) {
          SVar37.hasValue = 0;
          SVar37.value = 0;
          SVar12 = unaff_RBP;
          SVar18 = unaff_RBP;
        }
        uVar8 = *(uint *)(puVar27 + -0x54);
        method._4_4_ = 0;
        method._0_4_ = uVar8;
        SVar24 = unaff_R14;
        SVar19 = unaff_RBX;
        pSVar21 = "inputField";
        uVar7 = uVar8;
        if (bVar38) {
          SVar24.hasValue = 0;
          SVar24.value = 0;
          SVar19.hasValue = 0;
          SVar19.value = 0;
          pSVar21 = (System_String_o *)0x0;
          uVar7 = 0;
        }
        uVar22 = 0;
        if (bVar38) {
          SVar18 = *(System_Nullable_bool__Fields *)(puVar27 + -0x40);
          pSVar21 = "inputField";
          SVar24 = unaff_R14;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_R12;
          SVar19 = unaff_RBX;
        }
        else {
          *(undefined4 *)(puVar27 + -0x50) = 0x3d4ccccd;
          lVar20 = *(long *)unaff_RBP;
          uVar2 = *(ushort *)(lVar20 + 0x12e);
          *(System_String_o **)(puVar27 + -0x48) = pSVar21;
          *(uint *)(puVar27 + -0x4c) = uVar7;
          if ((ulong)uVar2 != 0) {
            lVar30 = 0;
            do {
              if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
                puVar11 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) + 7) * 0x10 + lVar20 + 0x138
                          );
                goto label_044619df;
              }
              lVar30 = lVar30 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar30);
          }
          *(undefined8 *)(puVar27 + -0x60) = 0x446199f;
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,7);
label_044619df:
          method = *(MethodInfo **)(puVar11 + 1);
          pcVar5 = (code *)*puVar11;
          *(undefined8 *)(puVar27 + -0x60) = 0x44619e8;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
          uVar22 = (*pcVar5)();
          fVar39 = *(float *)(puVar27 + -0x50);
          uVar8 = *(uint *)(puVar27 + -0x4c);
          pSVar21 = *(System_String_o **)(puVar27 + -0x48);
          unaff_R13 = SVar37;
          unaff_R12 = SVar12;
          unaff_R14 = SVar19;
        }
        unaff_RBX = SVar24;
        options._4_4_ = 0;
        options._0_4_ = uVar8;
        if (SVar18 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar27 + -0x60) = 0;
          *(undefined8 *)(puVar27 + -0x68) = uVar22;
          *(System_Nullable_bool__Fields *)(puVar27 + -0x70) = unaff_RBX;
          *(undefined8 *)(puVar27 + -0x78) = 0;
          *(undefined8 *)(puVar27 + -0x80) = 0x4461a17;
          method = (MethodInfo *)unaff_R12;
          __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar18,(System_String_o *)unaff_R12,
                               (System_String_o *)unaff_R13,uVar8,pSVar21,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar19,
                               *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar27 + -0x78),
                               *(System_Action_GisketchActionContext__o **)(puVar27 + -0x70),fVar39,
                               *(int32_t *)(puVar27 + -0x68),*(MethodInfo **)(puVar27 + -0x60));
          options._0_4_ = 0;
          options._4_4_ = 0;
          if (*(long *)(*(long *)(puVar27 + -0x38) + 0x10) != 0) {
            unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)(*(long *)(puVar27 + -0x38) + 0x10) + 0x28)
            ;
            if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
              options = *(uint **)(g_data_057b9c00 + 0xb8);
              method = *(MethodInfo **)options;
            }
            else {
              lVar20 = *(long *)unaff_RBP;
              if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
                lVar30 = 0;
                do {
                  if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
                    options = (uint *)((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) * 0x10 + lVar20 +
                                      0x138);
                    goto label_04461ac3;
                  }
                  lVar30 = lVar30 + 0x10;
                } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar30);
              }
              *(undefined8 *)(puVar27 + -0x60) = 0x4461a89;
              options = (uint *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IAottgSettingAdapter,0);
label_04461ac3:
              SVar12 = *(System_Nullable_bool__Fields *)((long)options + 8);
              SVar10 = *(System_Nullable_bool__Fields *)options;
              *(undefined8 *)(puVar27 + -0x60) = 0x4461acc;
              __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)unaff_RBP;
              method = (MethodInfo *)(*(code *)SVar10)(unaff_RBP,SVar12);
            }
            unaff_RBX.hasValue = 0;
            unaff_RBX.value = 0;
            if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar13->fields).value = (System_String_o *)method;
              fVar39 = (float)il2cpp_runtime_helper_022b4080(&(pGVar13->fields).value);
              return fVar39;
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar27 + -0x60) = 0x4461af7;
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = SVar18;
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton:
    *(System_Nullable_bool__Fields *)(puVar28 + -8) = unaff_R15;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x10) = unaff_R14;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x18) = unaff_R12;
    *(System_Nullable_bool__Fields *)(puVar28 + -0x20) = unaff_RBX;
    SVar18 = (System_Nullable_bool__Fields)options;
    SVar37 = (System_Nullable_bool__Fields)method;
    SVar10 = (System_Nullable_bool__Fields)__this;
    if (g_data_057ae796 == '\0') {
      SVar10 = (System_Nullable_bool__Fields)&"-button";
      *(undefined8 *)(puVar28 + -0x40) = 0x4461b26;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae796 = '\x01';
      SVar18 = (System_Nullable_bool__Fields)options;
    }
    lVar20 = *(long *)((long)__this + 0x10);
    SVar31 = unaff_RBX;
    if (lVar20 == 0) {
label_04461c07:
      *(undefined8 *)(puVar28 + -0x40) = 0x4461c0c;
      il2cpp_runtime_helper_022b2c90();
      *(MethodInfo **)(puVar28 + -0x40) = method;
      *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(puVar28 + -0x48) = __this;
      *(System_Nullable_bool__Fields *)(puVar28 + -0x50) = unaff_R13;
      *(System_Nullable_bool__Fields *)(puVar28 + -0x58) = unaff_R12;
      *(System_Nullable_bool__Fields *)(puVar28 + -0x60) = SVar31;
      puVar29 = puVar28 + -0xb0;
      options = (uint *)SVar18;
      SVar12 = SVar37;
      unaff_RBX = SVar10;
      if (g_data_057ae797 == '\0') {
        *(undefined8 *)(puVar28 + -0xb8) = 0x4461c38;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
        *(undefined8 *)(puVar28 + -0xb8) = 0x4461c44;
        il2cpp_runtime_helper_023445d0(&"Column");
        *(undefined8 *)(puVar28 + -0xb8) = 0x4461c50;
        il2cpp_runtime_helper_023445d0(&"text");
        unaff_RBX = (System_Nullable_bool__Fields)&"-value";
        *(undefined8 *)(puVar28 + -0xb8) = 0x4461c5c;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae797 = '\x01';
        options = (uint *)SVar18;
      }
      lVar20 = *(long *)((long)SVar10 + 0x10);
      if (lVar20 != 0) {
        SVar31 = *(System_Nullable_bool__Fields *)(lVar20 + 0x80);
        if (SVar31 == (System_Nullable_bool__Fields)0x0) {
          method = *(MethodInfo **)(lVar20 + 0x28);
          if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) {
            options = *(uint **)(g_data_057b9c00 + 0xb8);
            SVar31 = *(System_Nullable_bool__Fields *)options;
            unaff_R13.hasValue = 0;
            unaff_R13.value = 0;
          }
          else {
            lVar20 = *(long *)method;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar30 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
                  options = (uint *)((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) * 0x10 + lVar20 +
                                    0x138);
                  goto label_04461d0b;
                }
                lVar30 = lVar30 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar30);
            }
            *(undefined8 *)(puVar28 + -0xb8) = 0x4461cd9;
            options = (uint *)il2cpp_runtime_helper_02300d20(method,TypeInfo_IAottgSettingAdapter,0);
label_04461d0b:
            SVar12 = *(System_Nullable_bool__Fields *)((long)options + 8);
            SVar18 = *(System_Nullable_bool__Fields *)options;
            *(undefined8 *)(puVar28 + -0xb8) = 0x4461d14;
            unaff_RBX = (System_Nullable_bool__Fields)method;
            SVar31 = (System_Nullable_bool__Fields)(*(code *)SVar18)();
            lVar20 = *(long *)((long)SVar10 + 0x10);
            unaff_R13 = SVar37;
            if (lVar20 == 0) goto label_04461e40;
          }
        }
        unaff_RBX = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
        *(undefined8 *)(puVar28 + -0xb8) = 0x4461d3c;
        SVar12 = "-value";
        pSVar21 = System_String__Concat_3ae5ba0
                            ((System_String_o *)unaff_RBX,(System_String_o *)"-value",(MethodInfo *)0x0);
        if (SVar37 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)(puVar28 + -0xb0) = 0;
          *(undefined8 *)(puVar28 + -0xb8) = 0x4461d6b;
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar37,(System_String_o *)SVar31,
                               "text",pSVar21,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               *(MethodInfo **)(puVar28 + -0xb0));
          *(undefined8 *)(puVar28 + -0xb8) = 0x4461d7d;
          SVar10 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
          *(undefined8 *)(puVar28 + -0xb8) = 0x4461d8f;
          pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar28 + -0x98) = pGVar14;
          *(undefined8 *)(puVar28 + -0xb0) = 0;
          *(undefined8 *)(puVar28 + -0xa8) = 0;
          *(undefined8 *)(puVar28 + -0x68) = 0;
          *(undefined4 *)(puVar28 + -0x70) = 0x3f800000;
          *(undefined4 *)(puVar28 + -0x78) = 0;
          *(undefined4 *)(puVar28 + -0x80) = 0;
          *(undefined4 *)(puVar28 + -0x88) = 0;
          *(undefined8 *)(puVar28 + -0x90) = 0;
          *(undefined8 *)(puVar28 + -0xa0) = 0;
          SVar12.hasValue = 0;
          SVar12.value = 0;
          options._0_4_ = 0;
          options._4_4_ = 0;
          *(undefined8 *)(puVar28 + -0xb8) = 0x4461e15;
          unaff_RBX = "Column";
          pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar10,
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar28 + -0xb0),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar28 + -0xa8),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar28 + -0xa0),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar28 + -0x98),
                               *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar28 + -0x90),0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,*(float *)(puVar28 + -0x88),*(float *)(puVar28 + -0x80),
                               *(float *)(puVar28 + -0x78),*(float *)(puVar28 + -0x70),
                               *(MethodInfo **)(puVar28 + -0x68));
          SVar31.hasValue = 0;
          SVar31.value = 0;
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar13->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar16;
            fVar39 = (float)il2cpp_runtime_helper_022b4080(&(pGVar13->fields).search,pGVar16);
            return fVar39;
          }
        }
      }
label_04461e40:
      *(undefined8 *)(puVar28 + -0xb8) = 0x4461e45;
      fVar39 = (float)il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R12 = *(System_Nullable_bool__Fields *)(lVar20 + 0x68);
      options = *(uint **)(lVar20 + 0x78);
      SVar37 = "-button";
      if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) {
        if (unaff_R12 == (System_Nullable_bool__Fields)0x0) {
          unaff_R12 = *(System_Nullable_bool__Fields *)(lVar20 + 0x18);
        }
        SVar10 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
        options = *(uint **)(lVar20 + 0x70);
        *(undefined8 *)(puVar28 + -0x40) = 0x4461bbb;
        pSVar21 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar10,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar31 = (System_Nullable_bool__Fields)options;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)(puVar28 + -0x38) = 0;
        *(undefined8 *)(puVar28 + -0x30) = 0;
        *(undefined8 *)(puVar28 + -0x28) = 0;
        *(undefined8 *)(puVar28 + -0x40) = 0x4461be9;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,1,(System_String_o *)unaff_R12,
                            (System_String_o *)options,pSVar21,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar28 + -0x38),
                            *(System_String_o **)(puVar28 + -0x30),*(MethodInfo **)(puVar28 + -0x28));
      }
      else {
        if (unaff_R12 == (System_Nullable_bool__Fields)0x0) {
          unaff_R12 = *(System_Nullable_bool__Fields *)(lVar20 + 0x18);
        }
        SVar10 = *(System_Nullable_bool__Fields *)(lVar20 + 0x10);
        *(undefined8 *)(puVar28 + -0x40) = 0x4461b65;
        pSVar21 = System_String__Concat_3ae5ba0
                            ((System_String_o *)SVar10,(System_String_o *)"-button",(MethodInfo *)0x0);
        SVar31 = (System_Nullable_bool__Fields)options;
        if ((System_Nullable_bool__Fields)method == (System_Nullable_bool__Fields)0x0) goto label_04461c07;
        *(undefined8 *)(puVar28 + -0x38) = 0;
        *(undefined8 *)(puVar28 + -0x30) = 0;
        *(undefined8 *)(puVar28 + -0x28) = 0;
        *(undefined8 *)(puVar28 + -0x40) = 0x4461b97;
        SVar12 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,1,(System_String_o *)unaff_R12,
                            (System_Action_GisketchActionContext__o *)options,pSVar21,(System_String_o *)0x0,
                            *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar28 + -0x38),
                            *(System_String_o **)(puVar28 + -0x30),*(MethodInfo **)(puVar28 + -0x28));
      }
      fVar39 = 320.0;
      SVar31 = *(System_Nullable_bool__Fields *)(puVar28 + -0x20);
      SVar37 = *(System_Nullable_bool__Fields *)(puVar28 + -0x18);
      SVar10 = *(System_Nullable_bool__Fields *)(puVar28 + -0x10);
      method = *(MethodInfo **)(puVar28 + -8);
      puVar29 = puVar28;
      unaff_RBX = (System_Nullable_bool__Fields)__this;
    }
  }
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout:
  *(System_Nullable_bool__Fields *)(puVar29 + -8) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x10) = SVar31;
  *(float *)(puVar29 + -0x14) = fVar39;
  __this_00 = SVar12;
  SVar32 = unaff_RBX;
  if (g_data_057ae79a == '\0') {
    *(undefined8 *)(puVar29 + -0x70) = 0x4461e78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar29 + -0x70) = 0x4461e84;
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar32 = (System_Nullable_bool__Fields)&"Row";
    *(undefined8 *)(puVar29 + -0x70) = 0x4461e90;
    fVar39 = (float)il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (SVar12 == (System_Nullable_bool__Fields)0x0) {
    return fVar39;
  }
  if (*(long *)((long)unaff_RBX + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)((long)unaff_RBX + 0x10) + 0x58);
    *(undefined2 *)(puVar29 + -0x16) = 0;
    *(undefined8 *)(puVar29 + -0x70) = 0x4461ed2;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)puVar29 + -0x16),(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)SVar12 + 0x6b) = *(undefined2 *)(puVar29 + -0x16);
    *(undefined8 *)(puVar29 + -0x70) = 0x4461ee8;
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Points(*(float *)(puVar29 + -0x14),(MethodInfo *)0x0);
    *(undefined8 *)(puVar29 + -0x70) = 0x4461efa;
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x50) = pGVar15;
    *(undefined8 *)(puVar29 + -0x68) = 0;
    *(undefined8 *)(puVar29 + -0x60) = 0;
    *(undefined8 *)(puVar29 + -0x20) = 0;
    *(undefined4 *)(puVar29 + -0x28) = 0x3f800000;
    *(undefined4 *)(puVar29 + -0x30) = 0;
    *(undefined4 *)(puVar29 + -0x38) = 0;
    *(undefined4 *)(puVar29 + -0x40) = 0;
    *(undefined8 *)(puVar29 + -0x48) = 0;
    *(undefined8 *)(puVar29 + -0x58) = 0;
    *(undefined8 *)(puVar29 + -0x70) = 0x4461f83;
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row","Center","Center",(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar14,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x58),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x50),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x48),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar29 + -0x40),*(float *)(puVar29 + -0x38),
                         *(float *)(puVar29 + -0x30),*(float *)(puVar29 + -0x28),
                         *(MethodInfo **)(puVar29 + -0x20));
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar12 + 0xd8) = pGVar16;
    *(undefined8 *)(puVar29 + -0x70) = 0x4461f9c;
    fVar39 = (float)il2cpp_runtime_helper_022b4080((undefined8 *)((long)SVar12 + 0xd8),pGVar16);
    return fVar39;
  }
  *(undefined8 *)(puVar29 + -0x70) = 0x4461fa9;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)(puVar29 + -0x70) = method;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x78) = unaff_RBX;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x80) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x88) = SVar37;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x90) = SVar12;
  if (g_data_057ae799 == '\0') {
    *(undefined8 *)(puVar29 + -0x98) = 0x4461fd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    *(undefined8 *)(puVar29 + -0x98) = 0x4461fdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar32 + 0x10) == 0) {
label_044620a1:
    *(undefined8 *)(puVar29 + -0x98) = 0x44620a6;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_RBX = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar32 + 0x10) + 0x60);
    if (unaff_RBX == (System_Nullable_bool__Fields)0x0) {
      __this_00.hasValue = 0;
      __this_00.value = 0;
      *(undefined8 *)(puVar29 + -0x98) = 0x446200b;
      unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if (unaff_RBX == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    __this_00.value = 0;
    __this_00.hasValue = *(uint *)((long)unaff_RBX + 0x18);
    *(undefined8 *)(puVar29 + -0x98) = 0x446202a;
    method = (MethodInfo *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)unaff_RBX + 0x18) < 1) {
      return extraout_XMM0_Da_01;
    }
    if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
      SVar17 = (System_Nullable_bool__Fields)(*(ulong *)((long)unaff_RBX + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)((long)method + 0x20);
      SVar32.hasValue = 0;
      SVar32.value = 0;
      SVar37 = unaff_RBX;
      while (SVar37 = (System_Nullable_bool__Fields)((long)SVar37 + 0x20), (ulong)SVar32 < (ulong)SVar17) {
        *(undefined8 *)(puVar29 + -0x98) = 0x446205f;
        SVar18 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
                            *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar29 + -0x90),
                            (MethodInfo *)SVar37);
        options._4_4_ = 0;
        options._0_4_ = *(uint *)((long)method + 0x18);
        if (options <= (ulong)SVar32) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar18;
        *(undefined8 *)(puVar29 + -0x98) = 0x4462077;
        fVar39 = (float)il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar32 = (System_Nullable_bool__Fields)((long)SVar32 + 1);
        SVar17.value = 0;
        SVar17.hasValue = *(uint *)((long)unaff_RBX + 0x18);
        options = (uint *)(long)(int)*(uint *)((long)unaff_RBX + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        __this_00 = SVar18;
        if ((long)options <= (long)SVar32) {
          return fVar39;
        }
      }
      *(undefined8 *)(puVar29 + -0x98) = 0x44620a1;
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar18 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x20);
  *(undefined8 *)(puVar29 + -0x98) = 0x44620b2;
  SVar33 = SVar18;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
            ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o)
             *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *)(puVar29 + -0x90),
             (MethodInfo *)SVar18);
  *(undefined8 *)(puVar29 + -0x98) = 0x44620b7;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar29 + -0x98) = unaff_RBP;
  *(MethodInfo **)(puVar29 + -0xa0) = method;
  *(System_Nullable_bool__Fields *)(puVar29 + -0xa8) = SVar18;
  *(System_Nullable_bool__Fields *)(puVar29 + -0xb0) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar29 + -0xb8) = SVar37;
  *(System_Nullable_bool__Fields *)(puVar29 + -0xc0) = SVar32;
  control = __this_00;
  SVar18 = SVar33;
  if (g_data_057ae794 == '\0') {
    *(undefined8 *)(puVar29 + -0xf0) = 0x44620ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar29 + -0xf0) = 0x44620f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    *(undefined8 *)(puVar29 + -0xf0) = 0x4462104;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar29 + -0xf0) = 0x4462110;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar18 = (System_Nullable_bool__Fields)&"slider";
    *(undefined8 *)(puVar29 + -0xf0) = 0x446211c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar12 = __this_00;
  SVar10 = extraout_RDX;
  if (*(long *)((long)SVar33 + 0x10) != 0) {
    SVar32 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar33 + 0x10) + 0x28);
    if (SVar32 == (System_Nullable_bool__Fields)0x0) {
      *(undefined4 *)(puVar29 + -0xd0) = 0;
    }
    else {
      lVar20 = *(long *)SVar32;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar30 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar30);
      }
      *(undefined8 *)(puVar29 + -0xf0) = 0x446219c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar32,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      uVar22 = puVar11[1];
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)(puVar29 + -0xf0) = 0x44621cf;
      uVar40 = (*pcVar5)(SVar32,uVar22);
      *(undefined4 *)(puVar29 + -0xd0) = uVar40;
    }
    *(undefined8 *)(puVar29 + -0xf0) = 0x44621e4;
    SVar19 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar29 + -0xf0) = 0x44621fe;
    control = SVar33;
    SVar18 = SVar19;
    System_Action_GisketchActionContext____ctor();
    SVar31 = "slider";
    options = *(uint **)((long)SVar33 + 0x10);
    SVar12 = SVar19;
    SVar37 = __this_00;
    unaff_R13 = extraout_RDX;
    SVar10 = extraout_RDX;
    if ((System_Nullable_bool__Fields)options != (System_Nullable_bool__Fields)0x0) {
      *(System_Nullable_bool__Fields *)(puVar29 + -200) = SVar33;
      SVar32 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      fVar39 = 0.0;
      SVar24 = extraout_RDX;
      SVar10 = __this_00;
      if (SVar32 == (System_Nullable_bool__Fields)0x0) {
        SVar24 = SVar32;
        SVar10 = SVar32;
      }
      value = *(float *)(puVar29 + -0xd0);
      unaff_R13 = extraout_RDX;
      if (SVar32 != (System_Nullable_bool__Fields)0x0) {
        lVar20 = *(long *)SVar32;
        uVar2 = *(ushort *)(lVar20 + 0x12e);
        *(float *)(puVar29 + -0xcc) = value;
        if ((ulong)uVar2 != 0) {
          lVar30 = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
              puVar11 = (undefined8 *)
                        (lVar20 + (long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar30);
        }
        *(undefined8 *)(puVar29 + -0xf0) = 0x446229c;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar32,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        control = *(System_Nullable_bool__Fields *)(puVar11 + 1);
        pcVar5 = (code *)*puVar11;
        *(undefined8 *)(puVar29 + -0xf0) = 0x44622c3;
        SVar18 = SVar32;
        fVar39 = (float)(*pcVar5)();
        options = *(uint **)(*(long *)(puVar29 + -200) + 0x10);
        SVar37 = SVar19;
        unaff_R13 = SVar24;
        SVar33 = SVar31;
        if ((System_Nullable_bool__Fields)options == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
        value = *(float *)(puVar29 + -0xcc);
        __this_00 = SVar10;
      }
      SVar12 = *(System_Nullable_bool__Fields *)((long)options + 0x28);
      SVar33 = __this_00;
      SVar10 = SVar19;
      if (SVar12 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        SVar37 = *(System_Nullable_bool__Fields *)(puVar29 + -200);
        if (__this_00 == (System_Nullable_bool__Fields)0x0) {
          SVar32.hasValue = 0;
          SVar32.value = 0;
          control = unaff_R13;
        }
        else {
label_044623de:
          *(undefined8 *)(puVar29 + -0xe8) = 0;
          *(undefined8 *)(puVar29 + -0xf0) = 0x44623fc;
          options = (uint *)SVar19;
          control = unaff_R13;
          SVar18 = __this_00;
          SVar32 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,(System_String_o *)unaff_R13,value
                              ,0,(System_Action_GisketchActionContext__o *)SVar19,(System_String_o *)SVar31,
                              fVar39,max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              *(MethodInfo **)(puVar29 + -0xe8));
          if (*(long *)((long)SVar37 + 0x10) != 0) {
            bVar38 = *(char *)(*(long *)((long)SVar37 + 0x10) + 0x58) == '\0';
            *(undefined2 *)(puVar29 + -0xd2) = 0;
            control._1_7_ = 0;
            control.hasValue._0_1_ = bVar38;
            SVar18 = (System_Nullable_bool__Fields)((long)puVar29 + -0xd2);
            *(undefined8 *)(puVar29 + -0xf0) = 0x446242e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar18,(uint)bVar38,MethodInfo_Nullable_1_Boolean);
            if (SVar32 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar32 + 0x6b) = *(undefined2 *)(puVar29 + -0xd2);
              return extraout_XMM0_Da_02;
            }
          }
        }
      }
      else {
        lVar20 = *(long *)SVar12;
        uVar2 = *(ushort *)(lVar20 + 0x12e);
        SVar37 = *(System_Nullable_bool__Fields *)(puVar29 + -200);
        *(float *)(puVar29 + -0xd0) = fVar39;
        *(float *)(puVar29 + -0xcc) = value;
        options._0_4_ = 0;
        options._4_4_ = 0;
        if ((ulong)uVar2 != 0) {
          options = (uint *)((ulong)uVar2 << 4);
          SVar34.hasValue = 0;
          SVar34.value = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar34) == TypeInfo_IAottgSettingAdapter) {
              options = (uint *)((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar34) + 4) * 0x10);
              puVar11 = (undefined8 *)(lVar20 + (long)options + 0x138);
              goto label_044623be;
            }
            SVar34 = (System_Nullable_bool__Fields)((long)SVar34 + 0x10);
          } while ((System_Nullable_bool__Fields)options != SVar34);
        }
        *(undefined8 *)(puVar29 + -0xf0) = 0x446237c;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar12,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        control = *(System_Nullable_bool__Fields *)(puVar11 + 1);
        pcVar5 = (code *)*puVar11;
        *(undefined8 *)(puVar29 + -0xf0) = 0x44623c7;
        SVar18 = SVar12;
        max = (float)(*pcVar5)();
        fVar39 = *(float *)(puVar29 + -0xd0);
        value = *(float *)(puVar29 + -0xcc);
        SVar32 = SVar31;
        if (__this_00 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  *(undefined8 *)(puVar29 + -0xf0) = 0x4462453;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar29 + -0xf0) = SVar33;
  *(System_Nullable_bool__Fields *)(puVar29 + -0xf8) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x100) = SVar32;
  SVar10 = SVar18;
  if (g_data_057ae798 == '\0') {
    SVar10 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    *(undefined8 *)(puVar29 + -0x168) = 0x4462481;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar20 = *(long *)((long)SVar18 + 0x10);
  if (lVar20 != 0) {
    SVar33 = (System_Nullable_bool__Fields)((long)puVar29 + -0xe0);
    SVar32 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
    if (SVar32 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar29 + -0x110) = *(undefined8 *)(puVar29 + -0xd0);
      *(undefined8 *)(puVar29 + -0x108) = *(undefined8 *)(puVar29 + -200);
      *(undefined8 *)(puVar29 + -0x120) = *(undefined8 *)SVar33;
      *(undefined8 *)(puVar29 + -0x118) = *(undefined8 *)(puVar29 + -0xd8);
label_0446256c:
      fVar39 = *(float *)(puVar29 + -0x120);
      *(undefined8 *)(puVar29 + -0x130) = *(undefined8 *)(puVar29 + -0x110);
      *(undefined8 *)(puVar29 + -0x128) = *(undefined8 *)(puVar29 + -0x108);
      *(float *)(puVar29 + -0x140) = fVar39;
      *(undefined4 *)(puVar29 + -0x13c) = *(undefined4 *)(puVar29 + -0x11c);
      *(undefined4 *)(puVar29 + -0x138) = *(undefined4 *)(puVar29 + -0x118);
      *(undefined4 *)(puVar29 + -0x134) = *(undefined4 *)(puVar29 + -0x114);
      lVar20 = *(long *)(lVar20 + 0x88);
      if (lVar20 != 0) {
        uVar22 = *(undefined8 *)(lVar20 + 0x28);
        uVar6 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined4 *)(puVar29 + -0x150) = *(undefined4 *)(puVar29 + -0x130);
        *(undefined4 *)(puVar29 + -0x14c) = *(undefined4 *)(puVar29 + -300);
        *(undefined4 *)(puVar29 + -0x148) = *(undefined4 *)(puVar29 + -0x128);
        *(undefined4 *)(puVar29 + -0x144) = *(undefined4 *)(puVar29 + -0x124);
        *(undefined4 *)(puVar29 + -0x160) = *(undefined4 *)(puVar29 + -0x140);
        *(undefined4 *)(puVar29 + -0x15c) = *(undefined4 *)(puVar29 + -0x13c);
        *(undefined4 *)(puVar29 + -0x158) = *(undefined4 *)(puVar29 + -0x138);
        *(undefined4 *)(puVar29 + -0x154) = *(undefined4 *)(puVar29 + -0x134);
        pcVar5 = *(code **)(lVar20 + 0x18);
        *(undefined8 *)(puVar29 + -0x168) = 0x44625a7;
        fVar39 = (float)(*pcVar5)(uVar6,uVar22);
      }
      return fVar39;
    }
    *(undefined4 *)(puVar29 + -0x130) = *(undefined4 *)(puVar29 + -0xd0);
    *(undefined4 *)(puVar29 + -300) = *(undefined4 *)(puVar29 + -0xcc);
    *(undefined4 *)(puVar29 + -0x128) = *(undefined4 *)(puVar29 + -200);
    *(undefined4 *)(puVar29 + -0x124) = *(undefined4 *)(puVar29 + -0xc4);
    *(undefined4 *)(puVar29 + -0x140) = *(undefined4 *)SVar33;
    *(undefined4 *)(puVar29 + -0x13c) = *(undefined4 *)(puVar29 + -0xdc);
    *(undefined4 *)(puVar29 + -0x138) = *(undefined4 *)(puVar29 + -0xd8);
    *(undefined4 *)(puVar29 + -0x134) = *(undefined4 *)(puVar29 + -0xd4);
    lVar20 = *(long *)SVar32;
    options._0_4_ = 0;
    options._4_4_ = 0;
    if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
      options = (uint *)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
      SVar35.hasValue = 0;
      SVar35.value = 0;
      do {
        if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar35) == TypeInfo_IAottgSettingAdapter) {
          options = (uint *)((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar35) + 0xb) * 0x10);
          puVar11 = (undefined8 *)(lVar20 + (long)options + 0x138);
          goto label_0446252f;
        }
        SVar35 = (System_Nullable_bool__Fields)((long)SVar35 + 0x10);
      } while ((System_Nullable_bool__Fields)options != SVar35);
    }
    *(undefined8 *)(puVar29 + -0x168) = 0x44624fc;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar32,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    control = *(System_Nullable_bool__Fields *)(puVar11 + 1);
    *(undefined4 *)(puVar29 + -0x150) = *(undefined4 *)(puVar29 + -0x130);
    *(undefined4 *)(puVar29 + -0x14c) = *(undefined4 *)(puVar29 + -300);
    *(undefined4 *)(puVar29 + -0x148) = *(undefined4 *)(puVar29 + -0x128);
    *(undefined4 *)(puVar29 + -0x144) = *(undefined4 *)(puVar29 + -0x124);
    *(undefined4 *)(puVar29 + -0x160) = *(undefined4 *)(puVar29 + -0x140);
    *(undefined4 *)(puVar29 + -0x15c) = *(undefined4 *)(puVar29 + -0x13c);
    *(undefined4 *)(puVar29 + -0x158) = *(undefined4 *)(puVar29 + -0x138);
    *(undefined4 *)(puVar29 + -0x154) = *(undefined4 *)(puVar29 + -0x134);
    pcVar5 = (code *)*puVar11;
    *(undefined8 *)(puVar29 + -0x168) = 0x446254b;
    SVar10 = SVar32;
    (*pcVar5)();
    lVar20 = *(long *)((long)SVar18 + 0x10);
    *(undefined8 *)(puVar29 + -0x110) = *(undefined8 *)(puVar29 + -0xd0);
    *(undefined8 *)(puVar29 + -0x108) = *(undefined8 *)(puVar29 + -200);
    *(undefined4 *)(puVar29 + -0x120) = *(undefined4 *)SVar33;
    *(undefined4 *)(puVar29 + -0x11c) = *(undefined4 *)(puVar29 + -0xdc);
    *(undefined4 *)(puVar29 + -0x118) = *(undefined4 *)(puVar29 + -0xd8);
    *(undefined4 *)(puVar29 + -0x114) = *(undefined4 *)(puVar29 + -0xd4);
    if (lVar20 != 0) goto label_0446256c;
  }
  *(undefined8 *)(puVar29 + -0x168) = 0x44625b6;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar29 + -0x168) = SVar12;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x170) = SVar33;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x178) = SVar18;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x180) = SVar32;
  SVar18 = SVar10;
  if (g_data_057ae79b == '\0') {
    *(undefined8 *)(puVar29 + -0x1f0) = 0x44625e2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar18 = (System_Nullable_bool__Fields)&"true";
    *(undefined8 *)(puVar29 + -0x1f0) = 0x44625ee;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar20 = *(long *)((long)SVar10 + 0x10);
  if (lVar20 != 0) {
    SVar12 = (System_Nullable_bool__Fields)((long)puVar29 + -0x158);
    SVar32 = *(System_Nullable_bool__Fields *)(lVar20 + 0x28);
    if (SVar32 == (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)(puVar29 + -0x1b8) = *(undefined8 *)(puVar29 + -0x148);
      *(undefined8 *)(puVar29 + -0x1b0) = *(undefined8 *)(puVar29 + -0x140);
      *(undefined8 *)(puVar29 + -0x1c8) = *(undefined8 *)SVar12;
      *(undefined8 *)(puVar29 + -0x1c0) = *(undefined8 *)(puVar29 + -0x150);
    }
    else {
      if (*(long *)(puVar29 + -0x148) == 0) {
        SVar33.hasValue = 0;
        SVar33.value = 0;
      }
      else {
        pSVar21 = *(System_String_o **)(*(long *)(puVar29 + -0x148) + 0x50);
        *(undefined8 *)(puVar29 + -0x1f0) = 0x4462631;
        uVar8 = System_String__op_Equality(pSVar21,"true",(MethodInfo *)0x0);
        SVar33.value = 0;
        SVar33.hasValue = uVar8;
      }
      lVar20 = *(long *)SVar32;
      options._0_4_ = 0;
      options._4_4_ = 0;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        options = (uint *)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
        SVar36.hasValue = 0;
        SVar36.value = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + (long)SVar36) == TypeInfo_IAottgSettingAdapter) {
            options = (uint *)((long)(*(int *)(*(long *)(lVar20 + 0xb0) + 8 + (long)SVar36) + 8) * 0x10);
            puVar11 = (undefined8 *)(lVar20 + (long)options + 0x138);
            goto label_044626b5;
          }
          SVar36 = (System_Nullable_bool__Fields)((long)SVar36 + 0x10);
        } while ((System_Nullable_bool__Fields)options != SVar36);
      }
      *(undefined8 *)(puVar29 + -0x1f0) = 0x446269c;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar32,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      uVar22 = puVar11[1];
      control = (System_Nullable_bool__Fields)((ulong)SVar33 & 0xff);
      pcVar5 = (code *)*puVar11;
      *(undefined8 *)(puVar29 + -0x1f0) = 0x44626c2;
      SVar18 = SVar32;
      (*pcVar5)(SVar32,control,uVar22);
      lVar20 = *(long *)((long)SVar10 + 0x10);
      *(undefined8 *)(puVar29 + -0x1b8) = *(undefined8 *)(puVar29 + -0x148);
      *(undefined8 *)(puVar29 + -0x1b0) = *(undefined8 *)(puVar29 + -0x140);
      *(undefined4 *)(puVar29 + -0x1c8) = *(undefined4 *)SVar12;
      *(undefined4 *)(puVar29 + -0x1c4) = *(undefined4 *)(puVar29 + -0x154);
      *(undefined4 *)(puVar29 + -0x1c0) = *(undefined4 *)(puVar29 + -0x150);
      *(undefined4 *)(puVar29 + -0x1bc) = *(undefined4 *)(puVar29 + -0x14c);
      if (lVar20 == 0) goto label_04462728;
    }
    fVar39 = *(float *)(puVar29 + -0x1c8);
    *(undefined8 *)(puVar29 + -0x198) = *(undefined8 *)(puVar29 + -0x1b8);
    *(undefined8 *)(puVar29 + -400) = *(undefined8 *)(puVar29 + -0x1b0);
    *(float *)(puVar29 + -0x1a8) = fVar39;
    *(undefined4 *)(puVar29 + -0x1a4) = *(undefined4 *)(puVar29 + -0x1c4);
    *(undefined4 *)(puVar29 + -0x1a0) = *(undefined4 *)(puVar29 + -0x1c0);
    *(undefined4 *)(puVar29 + -0x19c) = *(undefined4 *)(puVar29 + -0x1bc);
    lVar20 = *(long *)(lVar20 + 0x88);
    if (lVar20 != 0) {
      uVar22 = *(undefined8 *)(lVar20 + 0x28);
      uVar6 = *(undefined8 *)(lVar20 + 0x40);
      *(undefined4 *)(puVar29 + -0x1d8) = *(undefined4 *)(puVar29 + -0x198);
      *(undefined4 *)(puVar29 + -0x1d4) = *(undefined4 *)(puVar29 + -0x194);
      *(undefined4 *)(puVar29 + -0x1d0) = *(undefined4 *)(puVar29 + -400);
      *(undefined4 *)(puVar29 + -0x1cc) = *(undefined4 *)(puVar29 + -0x18c);
      *(undefined4 *)(puVar29 + -0x1e8) = *(undefined4 *)(puVar29 + -0x1a8);
      *(undefined4 *)(puVar29 + -0x1e4) = *(undefined4 *)(puVar29 + -0x1a4);
      *(undefined4 *)(puVar29 + -0x1e0) = *(undefined4 *)(puVar29 + -0x1a0);
      *(undefined4 *)(puVar29 + -0x1dc) = *(undefined4 *)(puVar29 + -0x19c);
      pcVar5 = *(code **)(lVar20 + 0x18);
      *(undefined8 *)(puVar29 + -0x1f0) = 0x446271d;
      fVar39 = (float)(*pcVar5)(uVar6,uVar22);
    }
    return fVar39;
  }
label_04462728:
  *(undefined8 *)(puVar29 + -0x1f0) = 0x446272d;
  il2cpp_runtime_helper_022b2c90();
  *(System_Nullable_bool__Fields *)(puVar29 + -0x1f0) = SVar12;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x1f8) = SVar33;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x200) = SVar10;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x208) = unaff_R13;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x210) = SVar37;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x218) = SVar32;
  SVar12 = SVar18;
  if (g_data_057ae79c == '\0') {
    *(undefined8 *)(puVar29 + -0x278) = 0x4462759;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    *(undefined8 *)(puVar29 + -0x278) = 0x4462765;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    *(undefined8 *)(puVar29 + -0x278) = 0x4462771;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    *(undefined8 *)(puVar29 + -0x278) = 0x446277d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)(puVar29 + -0x278) = 0x4462789;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)(puVar29 + -0x278) = 0x4462795;
    il2cpp_runtime_helper_023445d0(&"-value-button");
    *(undefined8 *)(puVar29 + -0x278) = 0x44627a1;
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar12 = (System_Nullable_bool__Fields)&"0";
    *(undefined8 *)(puVar29 + -0x278) = 0x44627ad;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar18 + 0x10) != 0) {
    pSVar21 = *(System_String_o **)(*(long *)((long)SVar18 + 0x10) + 0x10);
    *(undefined8 *)(puVar29 + -0x278) = 0x44627d6;
    pSVar21 = System_String__Concat_3ae5ba0(pSVar21,"-slider",(MethodInfo *)0x0);
    *(undefined8 *)(puVar29 + -0x278) = 0x44627e4;
    SVar32 = (System_Nullable_bool__Fields)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar18,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)control,pSVar21,(MethodInfo *)options);
    *(undefined8 *)(puVar29 + -0x278) = 0x44627f6;
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(undefined8 *)(puVar29 + -0x260) = 0;
    *(undefined8 *)(puVar29 + -600) = 0;
    *(undefined8 *)(puVar29 + -0x270) = 0;
    *(undefined8 *)(puVar29 + -0x268) = 0;
    *(undefined8 *)(puVar29 + -0x228) = 0;
    *(undefined4 *)(puVar29 + -0x230) = 0x3f800000;
    *(undefined4 *)(puVar29 + -0x238) = 0x3f800000;
    *(undefined4 *)(puVar29 + -0x240) = 0;
    *(undefined4 *)(puVar29 + -0x248) = 0;
    *(undefined8 *)(puVar29 + -0x250) = 0;
    *(undefined8 *)(puVar29 + -0x278) = 0x4462873;
    SVar12 = "Column";
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar14,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x270),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x268),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x260),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -600),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x250),0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,*(float *)(puVar29 + -0x248),*(float *)(puVar29 + -0x240),
                         *(float *)(puVar29 + -0x238),*(float *)(puVar29 + -0x230),
                         *(MethodInfo **)(puVar29 + -0x228));
    if (SVar32 != (System_Nullable_bool__Fields)0x0) {
      SVar12 = (System_Nullable_bool__Fields)((long)SVar32 + 0xd8);
      *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar32 + 0xd8) = pGVar16;
      *(undefined8 *)(puVar29 + -0x278) = 0x4462895;
      il2cpp_runtime_helper_022b4080(SVar12,pGVar16);
      if (*(long *)((long)SVar18 + 0x10) != 0) {
        plVar4 = *(long **)(*(long *)((long)SVar18 + 0x10) + 0x28);
        if (plVar4 == (long *)0x0) {
          variant = 4;
          pSVar21 = "0";
        }
        else {
          lVar20 = *plVar4;
          if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
            lVar30 = 0;
            do {
              if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar30) == TypeInfo_IAottgSettingAdapter) {
                puVar11 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar30) * 0x10 + lVar20 + 0x138);
                goto label_04462936;
              }
              lVar30 = lVar30 + 0x10;
            } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar30);
          }
          *(undefined8 *)(puVar29 + -0x278) = 0x4462909;
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar4 != (long *)0x0) << 2;
          uVar22 = puVar11[1];
          pcVar5 = (code *)*puVar11;
          *(undefined8 *)(puVar29 + -0x278) = 0x4462943;
          pSVar21 = (System_String_o *)(*pcVar5)(plVar4,uVar22);
        }
        *(undefined8 *)(puVar29 + -0x278) = 0x4462955;
        SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        *(undefined8 *)(puVar29 + -0x278) = 0x446296f;
        SVar12 = SVar10;
        System_Action_GisketchActionContext____ctor();
        SVar32 = control;
        if (*(long *)((long)SVar18 + 0x10) != 0) {
          SVar12 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar18 + 0x10) + 0x10);
          *(undefined8 *)(puVar29 + -0x278) = 0x4462991;
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar12,"-value-button",(MethodInfo *)0x0);
          if (control != (System_Nullable_bool__Fields)0x0) {
            *(undefined8 *)(puVar29 + -0x270) = 0;
            *(undefined8 *)(puVar29 + -0x268) = 0;
            *(undefined8 *)(puVar29 + -0x260) = 0;
            *(undefined8 *)(puVar29 + -0x278) = 0x44629c1;
            SVar12 = control;
            SVar32 = (System_Nullable_bool__Fields)
                     Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)control,variant,pSVar21,
                                (System_Action_GisketchActionContext__o *)SVar10,id,(System_String_o *)0x0,
                                *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)(puVar29 + -0x270),
                                *(System_String_o **)(puVar29 + -0x268),*(MethodInfo **)(puVar29 + -0x260));
            if (*(long *)((long)SVar18 + 0x10) != 0) {
              cVar1 = *(char *)(*(long *)((long)SVar18 + 0x10) + 0x58);
              *(undefined2 *)(puVar29 + -0x21a) = 0;
              SVar12 = (System_Nullable_bool__Fields)((long)puVar29 + -0x21a);
              *(undefined8 *)(puVar29 + -0x278) = 0x44629f6;
              System_Nullable_bool____ctor((System_Nullable_bool__o)SVar12,(uint)(cVar1 == '\0'),MethodInfo_Nullable_1_Boolean)
              ;
              if (SVar32 != (System_Nullable_bool__Fields)0x0) {
                *(undefined2 *)((long)SVar32 + 0x6b) = *(undefined2 *)(puVar29 + -0x21a);
                *(undefined8 *)(puVar29 + -0x278) = 0x4462a1e;
                pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                *(undefined8 *)(puVar29 + -0x260) = 0;
                *(undefined8 *)(puVar29 + -600) = 0;
                *(undefined8 *)(puVar29 + -0x270) = 0;
                *(undefined8 *)(puVar29 + -0x268) = 0;
                *(undefined8 *)(puVar29 + -0x228) = 0;
                *(undefined4 *)(puVar29 + -0x230) = 0;
                *(undefined4 *)(puVar29 + -0x238) = 0;
                *(undefined4 *)(puVar29 + -0x240) = 0;
                *(undefined4 *)(puVar29 + -0x248) = 0;
                *(undefined8 *)(puVar29 + -0x250) = 0;
                *(undefined8 *)(puVar29 + -0x278) = 0x4462a95;
                pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ((System_String_o *)"Column",(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     pGVar14,*(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x270),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x268),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x260),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -600),
                                     *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar29 + -0x250),0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,*(float *)(puVar29 + -0x248),
                                     *(float *)(puVar29 + -0x240),*(float *)(puVar29 + -0x238),
                                     *(float *)(puVar29 + -0x230),*(MethodInfo **)(puVar29 + -0x228));
                *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar32 + 0xd8) = pGVar16;
                *(undefined8 *)(puVar29 + -0x278) = 0x4462aae;
                fVar39 = (float)il2cpp_runtime_helper_022b4080((long)SVar32 + 0xd8,pGVar16);
                return fVar39;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar29 + -0x278) = 0x4462ac2;
  uVar22 = il2cpp_runtime_helper_022b2c90();
  lVar20 = *(long *)((long)SVar12 + 0x10);
  *(System_Nullable_bool__Fields *)(puVar29 + -0x278) = control;
  *(System_Nullable_bool__Fields *)(puVar29 + -0x280) = SVar32;
  *(undefined8 *)(puVar29 + -0x288) = uVar22;
  fVar39 = extraout_XMM0_Da_03;
  if (g_data_057ae7ad == '\0') {
    *(undefined8 *)(puVar29 + -0x290) = 0x4462afc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    *(undefined8 *)(puVar29 + -0x290) = 0x4462b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    *(undefined8 *)(puVar29 + -0x290) = 0x4462b14;
    fVar39 = (float)il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar20 != 0) && (*(long *)(lVar20 + 0x28) != 0)) && (*(char *)(lVar20 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar20;
    uVar22 = *(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
    *(undefined8 *)(puVar29 + -0x290) = 0x4462b60;
    fVar39 = (float)il2cpp_runtime_helper_022b4080(uVar22,lVar20);
    if (*(UnityEngine_GameObject_o **)(puVar29 + -0x260) != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)(puVar29 + -0x290) = 0x4462b78;
      pIVar23 = UnityEngine_GameObject__GetComponentInParent_object_
                          (*(UnityEngine_GameObject_o **)(puVar29 + -0x260),MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      fVar39 = extraout_XMM0_Da_04;
      if ((pIVar23 != (Il2CppObject *)0x0) &&
         (pIVar23[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar23[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
        return extraout_XMM0_Da_05;
      }
    }
  }
  return fVar39;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyControlLayout
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float minWidth, const MethodInfo* method);
// 0x4461e50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float minWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  long *plVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_Nullable_bool__Fields SVar10;
  undefined8 *puVar11;
  System_Nullable_bool__Fields SVar12;
  long lVar13;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  System_String_o *id;
  Il2CppObject *pIVar16;
  System_Nullable_bool__Fields in_RCX;
  System_Nullable_bool__Fields id_00;
  System_Nullable_bool__Fields SVar17;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields SVar19;
  long lVar20;
  System_Nullable_bool__Fields SVar21;
  System_Nullable_bool__Fields SVar22;
  System_Nullable_bool__Fields unaff_R12;
  int32_t variant;
  System_Nullable_bool__Fields unaff_R13;
  System_Nullable_bool__Fields SVar23;
  long unaff_R15;
  bool bVar24;
  float min;
  float max;
  float value;
  UnityEngine_GameObject_o *in_stack_fffffffffffffda0;
  undefined2 uStack_21a;
  System_Nullable_bool__Fields SStack_218;
  System_Nullable_bool__Fields SStack_210;
  System_Nullable_bool__Fields SStack_208;
  System_Nullable_bool__Fields SStack_200;
  System_Nullable_bool__Fields SStack_1f8;
  System_Nullable_bool__Fields SStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  System_Nullable_bool__Fields SStack_180;
  System_Nullable_bool__Fields SStack_178;
  System_Nullable_bool__Fields SStack_170;
  System_Nullable_bool__Fields SStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  bool_conflict bStack_148;
  bool_conflict bStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  System_Nullable_bool__Fields SStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  System_Nullable_bool__Fields SStack_108;
  System_Nullable_bool__Fields SStack_100;
  System_Nullable_bool__Fields SStack_f8;
  System_Nullable_bool__Fields SStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  float fStack_d0;
  float fStack_cc;
  System_Nullable_bool__Fields SStack_c8;
  System_Nullable_bool__Fields SStack_c0;
  System_Nullable_bool__Fields SStack_b8;
  System_Nullable_bool__Fields SStack_b0;
  System_Nullable_bool__Fields SStack_a8;
  long lStack_a0;
  undefined2 uStack_16;
  float fStack_14;
  
  SVar21 = (System_Nullable_bool__Fields)node;
  SVar17 = (System_Nullable_bool__Fields)__this;
  fStack_14 = minWidth;
  if (g_data_057ae79a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Center");
    SVar17 = (System_Nullable_bool__Fields)&"Row";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79a = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    uStack_16 = 0;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)&uStack_16,(uint)((char)(pGVar1->fields).Disabled == '\0'),
               MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)&(node->fields).hasIcon + 3) = uStack_16;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(fStack_14,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    (node->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&(node->fields).search,pGVar9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar19 = unaff_R12;
  SVar18 = unaff_R13;
  pSVar14 = (System_String_o *)__this;
  if (g_data_057ae799 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    g_data_057ae799 = '\x01';
  }
  if (*(long *)((long)SVar17 + 0x10) == 0) {
label_044620a1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)(*(long *)((long)SVar17 + 0x10) + 0x60);
    if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) {
      SVar21.hasValue = 0;
      SVar21.value = 0;
      __this = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption);
      if ((System_Nullable_bool__Fields)__this == (System_Nullable_bool__Fields)0x0) goto label_044620a1;
    }
    SVar21.value = 0;
    SVar21.hasValue = *(uint *)((long)__this + 0x18);
    unaff_R15 = il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    if ((int)*(ulong *)((long)__this + 0x18) < 1) {
      return;
    }
    if (unaff_R15 != 0) {
      SVar23 = (System_Nullable_bool__Fields)(*(ulong *)((long)__this + 0x18) & 0xffffffff);
      unaff_R13 = (System_Nullable_bool__Fields)(unaff_R15 + 0x20);
      SVar17.hasValue = 0;
      SVar17.value = 0;
      unaff_R12 = (System_Nullable_bool__Fields)__this;
      while (unaff_R12 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20), (ulong)SVar17 < (ulong)SVar23
            ) {
        __this_00.fields.Text = (System_String_o *)SVar19;
        __this_00.fields.Value = (System_String_o *)node;
        __this_00.fields.Enabled = SVar18.hasValue;
        __this_00.fields._20_4_ = SVar18.value;
        __this_00.fields.Tooltip = pSVar14;
        SVar10 = (System_Nullable_bool__Fields)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
                           (__this_00,(MethodInfo *)unaff_R12);
        in_RCX.value = 0;
        in_RCX.hasValue = *(uint *)(unaff_R15 + 0x18);
        if ((ulong)in_RCX <= (ulong)SVar17) break;
        *(System_Nullable_bool__Fields *)unaff_R13 = SVar10;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        SVar17 = (System_Nullable_bool__Fields)((long)SVar17 + 1);
        SVar23.value = 0;
        SVar23.hasValue = *(uint *)((long)__this + 0x18);
        in_RCX = (System_Nullable_bool__Fields)(long)(int)*(uint *)((long)__this + 0x18);
        unaff_R13 = (System_Nullable_bool__Fields)((long)unaff_R13 + 8);
        SVar21 = SVar10;
        if ((long)in_RCX <= (long)SVar17) {
          return;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      goto label_044620a1;
    }
  }
  SVar23 = (System_Nullable_bool__Fields)((long)__this + 0x20);
  __this_01.fields.Text = (System_String_o *)SVar19;
  __this_01.fields.Value = (System_String_o *)node;
  __this_01.fields.Enabled = SVar18.hasValue;
  __this_01.fields._20_4_ = SVar18.value;
  __this_01.fields.Tooltip = pSVar14;
  SVar18 = SVar23;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice(__this_01,(MethodInfo *)SVar23);
  il2cpp_runtime_helper_022b2c90();
  SVar10 = SVar21;
  SVar19 = SVar18;
  SStack_c0 = SVar17;
  SStack_b8 = unaff_R12;
  SStack_b0 = unaff_R13;
  SStack_a8 = SVar23;
  lStack_a0 = unaff_R15;
  if (g_data_057ae794 == '\0') {
    SStack_f0.hasValue = 0x44620ec;
    SStack_f0.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    SStack_f0.hasValue = 0x44620f8;
    SStack_f0.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SliderNode_b__7_0);
    SStack_f0.hasValue = 0x4462104;
    SStack_f0.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SStack_f0.hasValue = 0x4462110;
    SStack_f0.value = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    SVar19 = (System_Nullable_bool__Fields)&"slider";
    SStack_f0.hasValue = 0x446211c;
    SStack_f0.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae794 = '\x01';
  }
  SVar23 = SVar21;
  SStack_f8 = id_00;
  if (*(long *)((long)SVar18 + 0x10) != 0) {
    SVar17 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar18 + 0x10) + 0x28);
    if (SVar17 == (System_Nullable_bool__Fields)0x0) {
      fStack_d0 = 0.0;
    }
    else {
      lVar13 = *(long *)SVar17;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar20) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      (lVar13 + (long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar20) + 1) * 0x10 + 0x138);
            goto label_044621c6;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar20);
      }
      SStack_f0.hasValue = 0x446219c;
      SStack_f0.value = 0;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IAottgSettingAdapter,1);
label_044621c6:
      SStack_f0.hasValue = 0x44621cf;
      SStack_f0.value = 0;
      fStack_d0 = (float)(*(code *)*puVar11)(SVar17,puVar11[1]);
    }
    SStack_f0.hasValue = 0x44621e4;
    SStack_f0.value = 0;
    SVar12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    SStack_f0.hasValue = 0x44621fe;
    SStack_f0.value = 0;
    SVar10 = SVar18;
    SVar19 = SVar12;
    System_Action_GisketchActionContext____ctor();
    SVar22 = "slider";
    in_RCX = *(System_Nullable_bool__Fields *)((long)SVar18 + 0x10);
    SVar23 = SVar12;
    unaff_R12 = SVar21;
    unaff_R13 = id_00;
    SStack_f8 = id_00;
    if (in_RCX != (System_Nullable_bool__Fields)0x0) {
      SVar17 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      min = 0.0;
      value = fStack_d0;
      SStack_c8 = SVar18;
      if (SVar17 != (System_Nullable_bool__Fields)0x0) {
        lVar13 = *(long *)SVar17;
        fStack_cc = fStack_d0;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
          lVar20 = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar20) == TypeInfo_IAottgSettingAdapter) {
              puVar11 = (undefined8 *)
                        (lVar13 + (long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar20) + 3) * 0x10 + 0x138);
              goto label_044622ba;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar20);
        }
        SStack_f0.hasValue = 0x446229c;
        SStack_f0.value = 0;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IAottgSettingAdapter,3);
label_044622ba:
        SVar10 = *(System_Nullable_bool__Fields *)(puVar11 + 1);
        SStack_f0.hasValue = 0x44622c3;
        SStack_f0.value = 0;
        SVar19 = SVar17;
        min = (float)(*(code *)*puVar11)();
        in_RCX = *(System_Nullable_bool__Fields *)((long)SStack_c8 + 0x10);
        unaff_R12 = SVar12;
        SStack_f8 = SVar21;
        SVar18 = SVar22;
        value = fStack_cc;
        if (in_RCX == (System_Nullable_bool__Fields)0x0) goto label_0446244e;
      }
      unaff_R12 = SStack_c8;
      SVar23 = *(System_Nullable_bool__Fields *)((long)in_RCX + 0x28);
      SVar18 = SVar21;
      SStack_f8 = SVar12;
      if (SVar23 == (System_Nullable_bool__Fields)0x0) {
        max = 1.0;
        if (SVar21 == (System_Nullable_bool__Fields)0x0) {
          SVar17.hasValue = 0;
          SVar17.value = 0;
          SVar10 = id_00;
        }
        else {
label_044623de:
          SStack_f0.hasValue = 0x44623fc;
          SStack_f0.value = 0;
          in_RCX = SVar12;
          SVar10 = id_00;
          SVar19 = SVar21;
          SVar17 = (System_Nullable_bool__Fields)
                   Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,(System_String_o *)id_00,value,0,
                              (System_Action_GisketchActionContext__o *)SVar12,(System_String_o *)SVar22,min,
                              max,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (*(long *)((long)unaff_R12 + 0x10) != 0) {
            bVar24 = *(char *)(*(long *)((long)unaff_R12 + 0x10) + 0x58) == '\0';
            uStack_d2 = 0;
            SVar10._1_7_ = 0;
            SVar10.hasValue._0_1_ = bVar24;
            SVar19 = (System_Nullable_bool__Fields)&uStack_d2;
            SStack_f0.hasValue = 0x446242e;
            SStack_f0.value = 0;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar19,(uint)bVar24,MethodInfo_Nullable_1_Boolean);
            if (SVar17 != (System_Nullable_bool__Fields)0x0) {
              *(undefined2 *)((long)SVar17 + 0x6b) = uStack_d2;
              return;
            }
          }
        }
      }
      else {
        lVar13 = *(long *)SVar23;
        in_RCX.hasValue = 0;
        in_RCX.value = 0;
        fStack_d0 = min;
        fStack_cc = value;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
          in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar13 + 0x12e) << 4);
          SVar19.hasValue = 0;
          SVar19.value = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0xb0) + (long)SVar19) == TypeInfo_IAottgSettingAdapter) {
              in_RCX = (System_Nullable_bool__Fields)
                       ((long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + (long)SVar19) + 4) * 0x10);
              puVar11 = (undefined8 *)(lVar13 + (long)in_RCX + 0x138);
              goto label_044623be;
            }
            SVar19 = (System_Nullable_bool__Fields)((long)SVar19 + 0x10);
          } while (in_RCX != SVar19);
        }
        SStack_f0.hasValue = 0x446237c;
        SStack_f0.value = 0;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar23,TypeInfo_IAottgSettingAdapter,4);
label_044623be:
        SVar10 = *(System_Nullable_bool__Fields *)(puVar11 + 1);
        SStack_f0.hasValue = 0x44623c7;
        SStack_f0.value = 0;
        SVar19 = SVar23;
        max = (float)(*(code *)*puVar11)();
        SVar17 = SVar22;
        value = fStack_cc;
        min = fStack_d0;
        if (SVar21 != (System_Nullable_bool__Fields)0x0) goto label_044623de;
      }
    }
  }
label_0446244e:
  SStack_f0.hasValue = 0x4462453;
  SStack_f0.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar21 = SVar19;
  SStack_100 = SVar17;
  SStack_f0 = SVar18;
  if (g_data_057ae798 == '\0') {
    SVar21 = (System_Nullable_bool__Fields)&TypeInfo_IAottgSettingAdapter;
    SStack_168.hasValue = 0x4462481;
    SStack_168.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae798 = '\x01';
  }
  lVar13 = *(long *)((long)SVar19 + 0x10);
  if (lVar13 != 0) {
    SVar18 = (System_Nullable_bool__Fields)&uStack_e0;
    SVar17 = *(System_Nullable_bool__Fields *)(lVar13 + 0x28);
    if (SVar17 == (System_Nullable_bool__Fields)0x0) {
      uStack_120 = uStack_e0;
      uStack_11c = uStack_dc;
      uStack_118 = CONCAT26(uStack_d2,CONCAT24(uStack_d4,uStack_d8));
      uStack_110 = CONCAT44(fStack_cc,fStack_d0);
label_0446256c:
      uStack_130 = uStack_110;
      uVar4 = uStack_130;
      SStack_128 = SStack_c8;
      SVar17 = SStack_128;
      uStack_138 = uStack_118;
      uVar3 = uStack_138;
      lVar13 = *(long *)(lVar13 + 0x88);
      if (lVar13 != 0) {
        uStack_138._0_4_ = (undefined4)uStack_118;
        uStack_138._4_4_ = (undefined4)((ulong)uStack_118 >> 0x20);
        uStack_130._0_4_ = (undefined4)uStack_110;
        uStack_130._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
        SStack_128.hasValue = SStack_c8.hasValue;
        SStack_128.value = SStack_c8.value;
        uStack_150 = (undefined4)uStack_130;
        uStack_14c = uStack_130._4_4_;
        bStack_148 = SStack_128.hasValue;
        bStack_144 = SStack_128.value;
        uStack_160 = uStack_120;
        uStack_15c = uStack_11c;
        uStack_158 = (undefined4)uStack_138;
        uStack_154 = uStack_138._4_4_;
        SStack_168.hasValue = 0x44625a7;
        SStack_168.value = 0;
        uStack_138 = uVar3;
        uStack_130 = uVar4;
        SStack_128 = SVar17;
        SStack_108 = SStack_c8;
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
      return;
    }
    uStack_130 = CONCAT44(fStack_cc,fStack_d0);
    SStack_128 = SStack_c8;
    uStack_140 = CONCAT44(uStack_dc,uStack_e0);
    uStack_138 = CONCAT44(CONCAT22(uStack_d2,uStack_d4),uStack_d8);
    lVar13 = *(long *)SVar17;
    in_RCX.hasValue = 0;
    in_RCX.value = 0;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar13 + 0x12e) << 4);
      SVar22.hasValue = 0;
      SVar22.value = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + (long)SVar22) == TypeInfo_IAottgSettingAdapter) {
          in_RCX = (System_Nullable_bool__Fields)
                   ((long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + (long)SVar22) + 0xb) * 0x10);
          puVar11 = (undefined8 *)(lVar13 + (long)in_RCX + 0x138);
          goto label_0446252f;
        }
        SVar22 = (System_Nullable_bool__Fields)((long)SVar22 + 0x10);
      } while (in_RCX != SVar22);
    }
    SStack_168.hasValue = 0x44624fc;
    SStack_168.value = 0;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IAottgSettingAdapter,0xb);
label_0446252f:
    SVar10 = *(System_Nullable_bool__Fields *)(puVar11 + 1);
    uStack_150 = (undefined4)uStack_130;
    uStack_14c = uStack_130._4_4_;
    bStack_148 = SStack_128.hasValue;
    bStack_144 = SStack_128.value;
    uStack_160 = (undefined4)uStack_140;
    uStack_15c = uStack_140._4_4_;
    uStack_158 = (undefined4)uStack_138;
    uStack_154 = uStack_138._4_4_;
    SStack_168.hasValue = 0x446254b;
    SStack_168.value = 0;
    SVar21 = SVar17;
    (*(code *)*puVar11)();
    lVar13 = *(long *)((long)SVar19 + 0x10);
    uStack_110 = CONCAT44(fStack_cc,fStack_d0);
    SStack_108 = SStack_c8;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    uStack_118 = CONCAT44(CONCAT22(uStack_d2,uStack_d4),uStack_d8);
    if (lVar13 != 0) goto label_0446256c;
  }
  SStack_168.hasValue = 0x44625b6;
  SStack_168.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar22 = SVar21;
  SStack_180 = SVar17;
  SStack_178 = SVar19;
  SStack_170 = SVar18;
  SStack_168 = SVar23;
  if (g_data_057ae79b == '\0') {
    SStack_1f0.hasValue = 0x44625e2;
    SStack_1f0.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar22 = (System_Nullable_bool__Fields)&"true";
    SStack_1f0.hasValue = 0x44625ee;
    SStack_1f0.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  lVar13 = *(long *)((long)SVar21 + 0x10);
  if (lVar13 != 0) {
    SVar23 = (System_Nullable_bool__Fields)&uStack_158;
    SVar17 = *(System_Nullable_bool__Fields *)(lVar13 + 0x28);
    if (SVar17 == (System_Nullable_bool__Fields)0x0) {
      uStack_1c8 = CONCAT44(uStack_154,uStack_158);
      uStack_1c0 = CONCAT44(uStack_14c,uStack_150);
      uStack_1b8 = CONCAT44(bStack_144,bStack_148);
    }
    else {
      if (CONCAT44(bStack_144,bStack_148) == 0) {
        SVar18.hasValue = 0;
        SVar18.value = 0;
      }
      else {
        SStack_1f0.hasValue = 0x4462631;
        SStack_1f0.value = 0;
        uVar7 = System_String__op_Equality
                          (*(System_String_o **)(CONCAT44(bStack_144,bStack_148) + 0x50),"true",
                           (MethodInfo *)0x0);
        SVar18.value = 0;
        SVar18.hasValue = uVar7;
      }
      lVar13 = *(long *)SVar17;
      in_RCX.hasValue = 0;
      in_RCX.value = 0;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        in_RCX = (System_Nullable_bool__Fields)((ulong)*(ushort *)(lVar13 + 0x12e) << 4);
        SVar12.hasValue = 0;
        SVar12.value = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + (long)SVar12) == TypeInfo_IAottgSettingAdapter) {
            in_RCX = (System_Nullable_bool__Fields)
                     ((long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + (long)SVar12) + 8) * 0x10);
            puVar11 = (undefined8 *)(lVar13 + (long)in_RCX + 0x138);
            goto label_044626b5;
          }
          SVar12 = (System_Nullable_bool__Fields)((long)SVar12 + 0x10);
        } while (in_RCX != SVar12);
      }
      SStack_1f0.hasValue = 0x446269c;
      SStack_1f0.value = 0;
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      SVar10 = (System_Nullable_bool__Fields)((ulong)SVar18 & 0xff);
      SStack_1f0.hasValue = 0x44626c2;
      SStack_1f0.value = 0;
      SVar22 = SVar17;
      (*(code *)*puVar11)(SVar17,SVar10,puVar11[1]);
      lVar13 = *(long *)((long)SVar21 + 0x10);
      uStack_1b8 = CONCAT44(bStack_144,bStack_148);
      uStack_1b0 = uStack_140;
      uStack_1c8 = CONCAT44(uStack_154,uStack_158);
      uStack_1c0 = CONCAT44(uStack_14c,uStack_150);
      if (lVar13 == 0) goto label_04462728;
    }
    uStack_198 = uStack_1b8;
    uVar5 = uStack_198;
    uStack_190 = uStack_140;
    uVar6 = uStack_190;
    uStack_1a8 = uStack_1c8;
    uVar3 = uStack_1a8;
    uStack_1a0 = uStack_1c0;
    uVar4 = uStack_1a0;
    lVar13 = *(long *)(lVar13 + 0x88);
    if (lVar13 != 0) {
      uStack_1a8._0_4_ = (undefined4)uStack_1c8;
      uStack_1a8._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
      uStack_1a0._0_4_ = (undefined4)uStack_1c0;
      uStack_1a0._4_4_ = (undefined4)((ulong)uStack_1c0 >> 0x20);
      uStack_198._0_4_ = (undefined4)uStack_1b8;
      uStack_198._4_4_ = (undefined4)((ulong)uStack_1b8 >> 0x20);
      uStack_190._0_4_ = (undefined4)uStack_140;
      uStack_190._4_4_ = (undefined4)((ulong)uStack_140 >> 0x20);
      uStack_1d8 = (undefined4)uStack_198;
      uStack_1d4 = uStack_198._4_4_;
      uStack_1d0 = (undefined4)uStack_190;
      uStack_1cc = uStack_190._4_4_;
      uStack_1e8 = (undefined4)uStack_1a8;
      uStack_1e4 = uStack_1a8._4_4_;
      uStack_1e0 = (undefined4)uStack_1a0;
      uStack_1dc = uStack_1a0._4_4_;
      SStack_1f0.hasValue = 0x446271d;
      SStack_1f0.value = 0;
      uStack_1a8 = uVar3;
      uStack_1a0 = uVar4;
      uStack_198 = uVar5;
      uStack_190 = uVar6;
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
    }
    return;
  }
label_04462728:
  SStack_1f0.hasValue = 0x446272d;
  SStack_1f0.value = 0;
  il2cpp_runtime_helper_022b2c90();
  SVar19 = SVar22;
  SStack_218 = SVar17;
  SStack_210 = unaff_R12;
  SStack_208 = unaff_R13;
  SStack_200 = SVar21;
  SStack_1f8 = SVar18;
  SStack_1f0 = SVar23;
  if (g_data_057ae79c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-value-button");
    il2cpp_runtime_helper_023445d0(&"-slider");
    SVar19 = (System_Nullable_bool__Fields)&"0";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)SVar22 + 0x10) != 0) {
    pSVar14 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)((long)SVar22 + 0x10) + 0x10),"-slider",
                         (MethodInfo *)0x0);
    pGVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                        ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)SVar22,
                         (Gisketch_Aottg2UI_Code_AottgUi_o *)SVar10,pSVar14,(MethodInfo *)in_RCX);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffda0 = (UnityEngine_GameObject_o *)0x0;
    SVar19 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      SVar19 = (System_Nullable_bool__Fields)&(pGVar15->fields).search;
      (pGVar15->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(SVar19,pGVar9);
      if (*(long *)((long)SVar22 + 0x10) != 0) {
        plVar2 = *(long **)(*(long *)((long)SVar22 + 0x10) + 0x28);
        if (plVar2 == (long *)0x0) {
          variant = 4;
          pSVar14 = "0";
        }
        else {
          lVar13 = *plVar2;
          if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
            lVar20 = 0;
            do {
              if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar20) == TypeInfo_IAottgSettingAdapter) {
                puVar11 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar20) * 0x10 + lVar13 + 0x138);
                goto label_04462936;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar20);
          }
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar2 != (long *)0x0) << 2;
          pSVar14 = (System_String_o *)(*(code *)*puVar11)(plVar2,puVar11[1]);
        }
        SVar17 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        SVar19 = SVar17;
        System_Action_GisketchActionContext____ctor();
        if (*(long *)((long)SVar22 + 0x10) != 0) {
          SVar19 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar22 + 0x10) + 0x10);
          id = System_String__Concat_3ae5ba0((System_String_o *)SVar19,"-value-button",(MethodInfo *)0x0);
          if (SVar10 != (System_Nullable_bool__Fields)0x0) {
            in_stack_fffffffffffffda0 = (UnityEngine_GameObject_o *)0x0;
            pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar10,variant,pSVar14,
                                 (System_Action_GisketchActionContext__o *)SVar17,id,(System_String_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                 (System_String_o *)0x0,(MethodInfo *)0x0);
            SVar19 = SVar10;
            if (*(long *)((long)SVar22 + 0x10) != 0) {
              uStack_21a = 0;
              SVar19 = (System_Nullable_bool__Fields)&uStack_21a;
              System_Nullable_bool____ctor
                        ((System_Nullable_bool__o)SVar19,
                         (uint)(*(char *)(*(long *)((long)SVar22 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
              if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined2 *)((long)&(pGVar15->fields).hasIcon + 3) = uStack_21a;
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ((System_String_o *)"Column",(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar15->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
                il2cpp_runtime_helper_022b4080(&(pGVar15->fields).search,pGVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar13 = *(long *)((long)SVar19 + 0x10);
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) && (*(char *)(lVar13 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar13;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar13);
    if (((in_stack_fffffffffffffda0 != (UnityEngine_GameObject_o *)0x0) &&
        (pIVar16 = UnityEngine_GameObject__GetComponentInParent_object_
                             (in_stack_fffffffffffffda0,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar16 != (Il2CppObject *)0x0)) &&
       (pIVar16[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar16[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSwitch>b__4_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSwitch_b__4_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x44625c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSwitch_b__4_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_Nullable_bool__Fields action;
  System_String_o *id;
  Il2CppObject *pIVar10;
  MethodInfo *in_RCX;
  System_Nullable_bool__Fields unaff_RBX;
  System_Nullable_bool__Fields __this_00;
  System_Nullable_bool__Fields __this_01;
  long lVar11;
  int32_t variant;
  ulong uVar12;
  UnityEngine_GameObject_o *in_stack_ffffffffffffff00;
  undefined2 uStack_ba;
  System_Nullable_bool__Fields SStack_b8;
  
  __this_00 = (System_Nullable_bool__Fields)__this;
  if (g_data_057ae79b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    __this_00 = (System_Nullable_bool__Fields)&"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79b = '\x01';
  }
  pGVar5 = (__this->fields)._descriptor;
  if (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    unaff_RBX = (System_Nullable_bool__Fields)(pGVar5->fields).Adapter;
    if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
      if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar3 = System_String__op_Equality
                          (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
        uVar12 = (ulong)uVar3;
      }
      lVar1 = *(long *)unaff_RBX;
      in_RCX = (MethodInfo *)0x0;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        in_RCX = (MethodInfo *)((ulong)*(ushort *)(lVar1 + 0x12e) << 4);
        lVar11 = 0;
        do {
          if (*(long *)(lVar11 + *(long *)(lVar1 + 0xb0)) == TypeInfo_IAottgSettingAdapter) {
            in_RCX = (MethodInfo *)((long)(*(int *)(lVar11 + 8 + *(long *)(lVar1 + 0xb0)) + 8) * 0x10);
            puVar4 = (undefined8 *)((long)&in_RCX[3].parameters + lVar1);
            goto label_044626b5;
          }
          lVar11 = lVar11 + 0x10;
        } while (in_RCX != (MethodInfo *)lVar11);
      }
      puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,8);
label_044626b5:
      method = (MethodInfo *)(uVar12 & 0xff);
      __this_00 = unaff_RBX;
      (*(code *)*puVar4)(unaff_RBX,method,puVar4[1]);
      pGVar5 = (__this->fields)._descriptor;
      if (pGVar5 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_04462728;
    }
    pSVar6 = (pGVar5->fields).ReadOnlyText;
    if (pSVar6 != (System_String_o *)0x0) {
      (*(code *)pSVar6[1].klass)(pSVar6[2].fields,pSVar6[1].fields);
    }
    return;
  }
label_04462728:
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00;
  SStack_b8 = unaff_RBX;
  if (g_data_057ae79c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-value-button");
    il2cpp_runtime_helper_023445d0(&"-slider");
    __this_01 = (System_Nullable_bool__Fields)&"0";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  if (*(long *)((long)__this_00 + 0x10) != 0) {
    pSVar6 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)(*(long *)((long)__this_00 + 0x10) + 0x10),"-slider",
                        (MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)__this_00,
                        (Gisketch_Aottg2UI_Code_AottgUi_o *)method,pSVar6,in_RCX);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff00 = (UnityEngine_GameObject_o *)0x0;
    __this_01 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      __this_01 = (System_Nullable_bool__Fields)&(pGVar7->fields).search;
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(__this_01,pGVar9);
      if (*(long *)((long)__this_00 + 0x10) != 0) {
        plVar2 = *(long **)(*(long *)((long)__this_00 + 0x10) + 0x28);
        if (plVar2 == (long *)0x0) {
          variant = 4;
          pSVar6 = "0";
        }
        else {
          lVar1 = *plVar2;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar11 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IAottgSettingAdapter) {
                puVar4 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138);
                goto label_04462936;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
          }
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(plVar2 != (long *)0x0) << 2;
          pSVar6 = (System_String_o *)(*(code *)*puVar4)(plVar2,puVar4[1]);
        }
        action = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        __this_01 = action;
        System_Action_GisketchActionContext____ctor();
        if (*(long *)((long)__this_00 + 0x10) != 0) {
          __this_01 = *(System_Nullable_bool__Fields *)(*(long *)((long)__this_00 + 0x10) + 0x10);
          id = System_String__Concat_3ae5ba0((System_String_o *)__this_01,"-value-button",(MethodInfo *)0x0);
          if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
            in_stack_ffffffffffffff00 = (UnityEngine_GameObject_o *)0x0;
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,variant,pSVar6,
                                (System_Action_GisketchActionContext__o *)action,id,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0);
            __this_01 = (System_Nullable_bool__Fields)method;
            if (*(long *)((long)__this_00 + 0x10) != 0) {
              uStack_ba = 0;
              __this_01 = (System_Nullable_bool__Fields)&uStack_ba;
              System_Nullable_bool____ctor
                        ((System_Nullable_bool__o)__this_01,
                         (uint)(*(char *)(*(long *)((long)__this_00 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
              if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined2 *)((long)&(pGVar7->fields).hasIcon + 3) = uStack_ba;
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ((System_String_o *)"Column",(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
                il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = *(long *)((long)__this_01 + 0x10);
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(char *)(lVar1 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar1;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar1);
    if (((in_stack_ffffffffffffff00 != (UnityEngine_GameObject_o *)0x0) &&
        (pIVar10 = UnityEngine_GameObject__GetComponentInParent_object_
                             (in_stack_ffffffffffffff00,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar10 != (Il2CppObject *)0x0)) &&
       (pIVar10[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar10[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__6_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__6_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4462730

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__6_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  VirtualInvokeData *pVVar10;
  System_Nullable_bool__Fields action;
  System_String_o *id;
  Il2CppObject *pIVar11;
  MethodInfo *in_RCX;
  System_String_o **__this_00;
  long lVar12;
  int32_t variant;
  UnityEngine_GameObject_o *in_stack_ffffffffffffff88;
  undefined2 uStack_32;
  
  __this_00 = (System_String_o **)__this;
  if (g_data_057ae79c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlider_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-value-button");
    il2cpp_runtime_helper_023445d0(&"-slider");
    __this_00 = &"0";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae79c = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar6 = System_String__Concat_3ae5ba0((pGVar2->fields).Id,"-slider",(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode(__this,row,pSVar6,in_RCX);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff88 = (UnityEngine_GameObject_o *)0x0;
    __this_00 = (System_String_o **)"Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      __this_00 = (System_String_o **)&(pGVar7->fields).search;
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(__this_00,pGVar9);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pGVar3 = (pGVar2->fields).Adapter;
        if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
          variant = 4;
          pSVar6 = "0";
        }
        else {
          pGVar4 = pGVar3->klass;
          uVar1._0_1_ = (pGVar4->_2).rank;
          uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar5 = (pGVar4->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IAottgSettingAdapter) {
                pVVar10 = pGVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
                goto label_04462936;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar12);
          }
          pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar3,TypeInfo_IAottgSettingAdapter,0);
label_04462936:
          variant = (uint)(pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) << 2;
          pSVar6 = (System_String_o *)(*pVVar10->methodPtr)(pGVar3,pVVar10->method);
        }
        action = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        __this_00 = (System_String_o **)action;
        System_Action_GisketchActionContext____ctor();
        pGVar2 = (__this->fields)._descriptor;
        if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          __this_00 = (System_String_o **)(pGVar2->fields).Id;
          id = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"-value-button",(MethodInfo *)0x0);
          if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            in_stack_ffffffffffffff88 = (UnityEngine_GameObject_o *)0x0;
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               (row,variant,pSVar6,(System_Action_GisketchActionContext__o *)action,id,
                                (System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0);
            pGVar2 = (__this->fields)._descriptor;
            __this_00 = (System_String_o **)row;
            if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              uStack_32 = 0;
              __this_00 = (System_String_o **)&uStack_32;
              System_Nullable_bool____ctor
                        ((System_Nullable_bool__o)__this_00,(uint)((char)(pGVar2->fields).Disabled == '\0'),
                         MethodInfo_Nullable_1_Boolean);
              if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined2 *)((long)&(pGVar7->fields).hasIcon + 3) = uStack_32;
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ((System_String_o *)"Column",(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
                il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)((long)__this_00 + 0x10);
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(char *)(lVar12 + 0x58) == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = lVar12;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),lVar12);
    if (((in_stack_ffffffffffffff88 != (UnityEngine_GameObject_o *)0x0) &&
        (pIVar11 = UnityEngine_GameObject__GetComponentInParent_object_
                             (in_stack_ffffffffffffff88,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot), pIVar11 != (Il2CppObject *)0x0)) &&
       (pIVar11[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar11[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__6_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__6_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4462ad0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__6_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Il2CppObject *pIVar2;
  
  pGVar1 = (__this->fields)._descriptor;
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
      ((pGVar1->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) &&
     ((char)(pGVar1->fields).Disabled == '\0')) {
    **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = (long)pGVar1;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),pGVar1);
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pIVar2 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar2[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar2[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<SliderNode>b__7_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___SliderNode_b__7_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4462bb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___SliderNode_b__7_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_c *pGVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool_conflict bVar4;
  System_Globalization_CultureInfo_o *provider;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar6;
  System_Action_AottgUi__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  long *plVar13;
  long lVar14;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar15;
  MethodInfo *pMVar16;
  float fVar17;
  
  plVar13 = (long *)__this;
  if (cRam00000000057ae79d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    plVar13 = &TypeInfo_IAottgSettingAdapter;
    il2cpp_runtime_helper_023445d0();
    cRam00000000057ae79d = '\x01';
  }
  pGVar6 = (__this->fields)._descriptor;
  if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pGVar15 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)(pGVar6->fields).Adapter;
    if (pGVar15 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)0x0) {
code_r0x04462cf9:
      pSVar11 = (pGVar6->fields).ReadOnlyText;
      if (pSVar11 != (System_String_o *)0x0) {
        (*(code *)pSVar11[1].klass)(pSVar11[2].fields,pSVar11[1].fields);
      }
      return;
    }
    if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar11 = ((context.fields.Node)->fields).value;
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      fVar17 = System_Single__Parse_3ccd220(pSVar11,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      pGVar2 = pGVar15->klass;
      uVar1._0_1_ = (pGVar2->_2).rank;
      uVar1._1_1_ = (pGVar2->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar3 = (pGVar2->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar3->interfaceType + lVar14) == TypeInfo_IAottgSettingAdapter) {
            pVVar5 = &(pGVar2->vtable)._0_Equals + (*(int *)((long)&pIVar3->offset + lVar14) + 9);
            goto code_r0x04462ccd;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar14);
      }
      pVVar5 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar15,TypeInfo_IAottgSettingAdapter,9);
code_r0x04462ccd:
      method = pVVar5->method;
      (*pVVar5->methodPtr)(fVar17);
      pGVar6 = (__this->fields)._descriptor;
      plVar13 = (long *)pGVar15;
      if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto code_r0x04462cf9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae79f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchResponsiveRowLayout);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"ResponsiveRowLayout");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae79f = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty
                    ((System_String_o *)
                     (((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)plVar13)->fields)._descriptor,
                     (MethodInfo *)0x0);
  if (((char)bVar4 != '\0') ||
     (((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)((long)plVar13 + 0x48))->klass ==
      (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_c *)0x0)) {
    return;
  }
  if (*(int *)(TypeInfo_GisketchResponsiveRowLayout + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory((MethodInfo *)0x0);
  pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar6 = (((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)plVar13)->fields)._descriptor;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pMVar16 = "Row";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,8.0,6.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if ((method != (MethodInfo *)0x0) &&
     (__this_00 = "clear",
     pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,(System_String_o *)"clear",pSVar7,
                          (System_String_o *)pGVar6,pGVar9,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar16 = method, pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar10->fields).type = "ResponsiveRowLayout";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLabel_b__12_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-label-cell");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae7a0 = '\x01';
  }
  pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar11 = System_String__Concat_3ae5ba0
                      ((System_String_o *)pMVar16->invoker_method,"-label-cell",(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pMVar16 = "Row";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar12,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae7a1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"-info");
      il2cpp_runtime_helper_023445d0(&"settingInfoIcon");
      il2cpp_runtime_helper_023445d0(&"Absolute");
      il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/information");
      il2cpp_runtime_helper_023445d0(&"Image");
      g_data_057ae7a1 = '\x01';
    }
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)pMVar16->return_type,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar10->fields).type = "Image";
        il2cpp_runtime_helper_022b4080(&pGVar10->fields);
        pSVar11 = System_String__Concat_3ae5ba0
                            ((System_String_o *)pMVar16->invoker_method,"-info",(MethodInfo *)0x0);
        (pGVar10->fields).id = pSVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pSVar11);
        (pGVar10->fields).sprite = "Icons/kenney-icons/information";
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).sprite);
        (pGVar10->fields).style = "settingInfoIcon";
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style);
        (pGVar10->fields).choiceOptionRenderer = (System_String_o *)pMVar16->return_type;
        il2cpp_runtime_helper_022b4080();
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                            (System_String_o *)0x0,0.0,pGVar8,pGVar12,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            (*(float *)&pMVar16->klass + *(float *)((long)&pMVar16->klass + 4)) * 0.5 + 8.0,
                            -10.0,0.0,0.0,(MethodInfo *)0x0);
        (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar9);
        if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Add(__this_01,pGVar10,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (__this_00,(System_String_o *)"clear",pSVar7,pSVar11,pGVar9,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


