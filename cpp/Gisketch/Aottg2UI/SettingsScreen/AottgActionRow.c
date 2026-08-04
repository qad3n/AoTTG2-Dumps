// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgActionRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.ActionButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o* __this, System_String_o* text, System_Action_GisketchActionContext__o* action, int32_t variant, bool disabled, const MethodInfo* method);
// 0x445c070

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this,System_String_o *text,
               System_Action_GisketchActionContext__o *action,int32_t variant,bool_conflict disabled,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Text = text;
  il2cpp_runtime_helper_022b4080(&__this->fields,text);
  (__this->fields).Action = action;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Action,action);
  (__this->fields).Variant = variant;
  *(char *)&(__this->fields).Disabled = (char)disabled;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, System_String_o* id, System_String_o* label, System_String_o* tooltip, Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array* buttons, const MethodInfo* method);
// 0x445b980

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *tooltip,
               Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons,MethodInfo *method)

{
  if (g_data_057ae74a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ActionButton);
    g_data_057ae74a = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._tooltip = tooltip;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltip,tooltip);
  if (buttons == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              il2cpp_runtime_helper_022b2a40(TypeInfo_ActionButton,0);
  }
  (__this->fields)._buttons = buttons;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._buttons,buttons);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x445ba30

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  int32_t variant;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar1;
  long lVar2;
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  void *pvVar7;
  System_String_o *pSVar8;
  undefined4 uVar9;
  System_Action_AottgUi__o *in_RCX;
  Gisketch_Aottg2UI_Code_AottgUi_o *extraout_RDX;
  System_String_c *extraout_RDX_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  System_String_Fields SVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  System_String_o **ppSVar13;
  System_String_Fields SVar14;
  undefined1 uVar15;
  System_String_o *in_R8;
  System_String_o *pSVar16;
  System_String_o *in_R9;
  float fVar17;
  undefined2 uStack_166;
  uint uStack_164;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_160;
  System_String_o **ppSStack_158;
  System_Action_AottgUi__o *pSStack_150;
  System_String_o *pSStack_148;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_140;
  System_String_o *pSStack_138;
  System_Action_AottgUi__o *pSStack_130;
  System_String_o *in_stack_ffffffffffffffb0;
  System_String_o *in_stack_ffffffffffffffb8;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  pGVar10 = ui;
  __this_01 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)__this;
  if (g_data_057ae74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildButtons);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    __this_01 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)&TypeInfo_Math;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae74b = '\x01';
  }
  pGVar1 = (__this->fields)._buttons;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(__this->fields)._id;
    pSVar8 = (__this->fields)._label;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar17 = System_Math__Max_3cb7c60(180.0,(float)(int)pGVar1->max_length * 150.0,(MethodInfo *)0x0);
    in_RCX = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    in_R8 = (__this->fields)._tooltip;
    __this_00 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
    in_stack_ffffffffffffffb0 = (System_String_o *)0x0;
    in_stack_ffffffffffffffb8 = (System_String_o *)0x0;
    in_R9 = (System_String_o *)0x0;
    __this_01 = __this_00;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              (__this_00,(System_String_o *)pGVar10,pSVar8,fVar17,in_RCX,in_R8,(System_String_o *)0x0,
               (System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,
               in_stack_ffffffffffffffc0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae79e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057ae79e = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._id = (System_String_o *)pGVar10;
  il2cpp_runtime_helper_022b4080(&__this_01->fields,pGVar10);
  ppSVar13 = &(__this_01->fields)._label;
  (__this_01->fields)._label = (System_String_o *)extraout_RDX;
  pGVar10 = extraout_RDX;
  il2cpp_runtime_helper_022b4080();
  (__this_01->fields)._controlWidth = fVar17;
  if (__this_01 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)0x0) {
    if ((char)in_stack_ffffffffffffffc0 != '\0') {
      fVar17 = (float)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
    }
    (__this_01->fields)._controlVisualWidth = fVar17;
    (__this_01->fields)._buildControl = in_RCX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._buildControl,in_RCX);
    (__this_01->fields)._tooltip = in_R8;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._tooltip,in_R8);
    (__this_01->fields)._searchTitle = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._searchTitle);
    (__this_01->fields)._searchKeywords = in_stack_ffffffffffffffb0;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._searchKeywords);
    (__this_01->fields)._icon = in_stack_ffffffffffffffb8;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._icon);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae74c == '\0') {
    pSStack_130 = (System_Action_AottgUi__o *)0x445bcc6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pSStack_130 = (System_Action_AottgUi__o *)0x445bcd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildButtons_b__6_0);
    pSStack_130 = (System_Action_AottgUi__o *)0x445bcde;
    il2cpp_runtime_helper_023445d0(&"clear");
    pSStack_130 = (System_Action_AottgUi__o *)0x445bcea;
    il2cpp_runtime_helper_023445d0(&"Center");
    pSStack_130 = (System_Action_AottgUi__o *)0x445bcf6;
    il2cpp_runtime_helper_023445d0(&"-actions");
    pSStack_130 = (System_Action_AottgUi__o *)0x445bd02;
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae74c = '\x01';
  }
  pSStack_130 = (System_Action_AottgUi__o *)0x445bd18;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  pSStack_130 = (System_Action_AottgUi__o *)0x445bd32;
  System_Action_object____ctor();
  pSStack_130 = (System_Action_AottgUi__o *)0x445bd47;
  pSVar3 = System_String__Concat_3ae5ba0(ppSVar13[2],"-actions",(MethodInfo *)0x0);
  pSStack_130 = (System_Action_AottgUi__o *)0x445bd59;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar16 = (System_String_o *)0x0;
  pSStack_130 = (System_Action_AottgUi__o *)0x445bdde;
  pGVar11 = "Center";
  pSVar8 = "Row";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"Center",(System_String_o *)"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSStack_130 = (System_Action_AottgUi__o *)0x445be09;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,"clear",build,pSVar3,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  pSStack_130 = (System_Action_AottgUi__o *)0x445be1a;
  il2cpp_runtime_helper_022b2c90();
  pGStack_160 = pGVar11;
  ppSStack_158 = ppSVar13;
  pSStack_150 = build;
  pSStack_148 = in_R8;
  pGStack_140 = pGVar10;
  pSStack_138 = pSVar3;
  pSStack_130 = in_RCX;
  if (g_data_057ae74d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-button-");
    g_data_057ae74d = '\x01';
  }
  uStack_164 = 0;
  pvVar7 = pSVar8[1].monitor;
  if (pvVar7 != (void *)0x0) {
    if (pGStack_160 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0445c023;
    do {
      if ((int)*(uint *)((long)pvVar7 + 0x18) <= (int)uStack_164) {
        return;
      }
      if (*(uint *)((long)pvVar7 + 0x18) <= uStack_164) {
        pvVar7 = (void *)il2cpp_runtime_helper_022b2ca0();
        goto label_0445c03d;
      }
      lVar2 = *(long *)((long)pvVar7 + (long)(int)uStack_164 * 8 + 0x20);
      if (lVar2 == 0) break;
      variant = *(int32_t *)(lVar2 + 0x20);
      pSVar3 = *(System_String_o **)(lVar2 + 0x10);
      action = *(System_Action_GisketchActionContext__o **)(lVar2 + 0x18);
      SVar14 = pSVar8->fields;
      pSVar16 = System_Int32__ToString((int32_t)&uStack_164,(MethodInfo *)0x0);
      pSVar16 = System_String__Concat_3af7150
                          ((System_String_o *)SVar14,(System_String_o *)"-button-",pSVar16,(MethodInfo *)0x0
                          );
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         (pGStack_160,variant,pSVar3,action,pSVar16,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      uStack_166 = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)&uStack_166,(uint)(*(char *)(lVar2 + 0x24) == '\0'),MethodInfo_Nullable_1_Boolean);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      *(undefined2 *)((long)&(pGVar6->fields).hasIcon + 3) = uStack_166;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(140.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pSVar16 = (System_String_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
      uStack_164 = uStack_164 + 1;
      pvVar7 = pSVar8[1].monitor;
    } while (pvVar7 != (void *)0x0);
  }
  while( true ) {
    pvVar7 = (void *)il2cpp_runtime_helper_022b2c90();
label_0445c023:
    if (*(int *)((long)pvVar7 + 0x18) < 1) break;
label_0445c03d:
    uVar15 = SUB81(pSVar16,0);
    if (*(long *)((long)pvVar7 + 0x20) != 0) {
      SVar14 = pSVar8->fields;
      pSVar8 = System_Int32__ToString((int32_t)&uStack_164,(MethodInfo *)0x0);
      uVar9 = 0;
      SVar12 = "-button-";
      System_String__Concat_3af7150
                ((System_String_o *)SVar14,(System_String_o *)"-button-",pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)SVar14,(MethodInfo *)0x0);
      *(System_String_Fields *)((long)SVar14 + 0x10) = SVar12;
      il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)SVar14 + 0x10),SVar12);
      ((System_String_o *)((long)SVar14 + 0x18))->klass = extraout_RDX_00;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar14 + 0x18),extraout_RDX_00);
      *(undefined4 *)((long)SVar14 + 0x20) = uVar9;
      *(undefined1 *)((long)SVar14 + 0x24) = uVar15;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$BuildButtons
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__BuildButtons (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x445bca0

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__BuildButtons
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  int32_t variant;
  long lVar1;
  System_Action_GisketchActionContext__o *action;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  void *pvVar6;
  System_String_o *pSVar7;
  undefined4 uVar8;
  System_String_c *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  System_String_Fields SVar10;
  System_String_Fields SVar11;
  undefined1 uVar12;
  System_String_o *pSVar13;
  undefined2 uStack_b6;
  uint uStack_b4;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_b0;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *pGStack_a8;
  System_Action_AottgUi__o *pSStack_a0;
  
  if (g_data_057ae74c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildButtons_b__6_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-actions");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae74c = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-actions",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar13 = (System_String_o *)0x0;
  pGVar9 = "Center";
  pSVar7 = "Row";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)"Center",(System_String_o *)"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",build,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_b0 = pGVar9;
  pGStack_a8 = __this;
  pSStack_a0 = build;
  if (g_data_057ae74d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-button-");
    g_data_057ae74d = '\x01';
  }
  uStack_b4 = 0;
  pvVar6 = pSVar7[1].monitor;
  if (pvVar6 != (void *)0x0) {
    if (pGStack_b0 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0445c023;
    do {
      if ((int)*(uint *)((long)pvVar6 + 0x18) <= (int)uStack_b4) {
        return;
      }
      if (*(uint *)((long)pvVar6 + 0x18) <= uStack_b4) {
        pvVar6 = (void *)il2cpp_runtime_helper_022b2ca0();
        goto label_0445c03d;
      }
      lVar1 = *(long *)((long)pvVar6 + (long)(int)uStack_b4 * 8 + 0x20);
      if (lVar1 == 0) break;
      variant = *(int32_t *)(lVar1 + 0x20);
      pSVar2 = *(System_String_o **)(lVar1 + 0x10);
      action = *(System_Action_GisketchActionContext__o **)(lVar1 + 0x18);
      SVar11 = pSVar7->fields;
      pSVar13 = System_Int32__ToString((int32_t)&uStack_b4,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3af7150
                          ((System_String_o *)SVar11,(System_String_o *)"-button-",pSVar13,(MethodInfo *)0x0
                          );
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         (pGStack_b0,variant,pSVar2,action,pSVar13,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      uStack_b6 = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)&uStack_b6,(uint)(*(char *)(lVar1 + 0x24) == '\0'),MethodInfo_Nullable_1_Boolean);
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      *(undefined2 *)((long)&(pGVar5->fields).hasIcon + 3) = uStack_b6;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(140.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pSVar13 = (System_String_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      uStack_b4 = uStack_b4 + 1;
      pvVar6 = pSVar7[1].monitor;
    } while (pvVar6 != (void *)0x0);
  }
  while( true ) {
    pvVar6 = (void *)il2cpp_runtime_helper_022b2c90();
label_0445c023:
    if (*(int *)((long)pvVar6 + 0x18) < 1) break;
label_0445c03d:
    uVar12 = SUB81(pSVar13,0);
    if (*(long *)((long)pvVar6 + 0x20) != 0) {
      SVar11 = pSVar7->fields;
      pSVar7 = System_Int32__ToString((int32_t)&uStack_b4,(MethodInfo *)0x0);
      uVar8 = 0;
      SVar10 = "-button-";
      System_String__Concat_3af7150
                ((System_String_o *)SVar11,(System_String_o *)"-button-",pSVar7,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)SVar11,(MethodInfo *)0x0);
      *(System_String_Fields *)((long)SVar11 + 0x10) = SVar10;
      il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)SVar11 + 0x10),SVar10);
      ((System_String_o *)((long)SVar11 + 0x18))->klass = extraout_RDX;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar11 + 0x18),extraout_RDX);
      *(undefined4 *)((long)SVar11 + 0x20) = uVar8;
      *(undefined1 *)((long)SVar11 + 0x24) = uVar12;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$<BuildButtons>b__6_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___BuildButtons_b__6_0 (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x445be20

void Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___BuildButtons_b__6_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint uVar1;
  int32_t variant;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *pGVar2;
  System_Action_GisketchActionContext__o *action;
  System_String_o *str2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *pGVar5;
  System_String_o *pSVar6;
  undefined4 uVar7;
  System_String_c *extraout_RDX;
  System_String_Fields SVar8;
  System_String_o *pSVar9;
  undefined1 uVar10;
  System_String_o *in_R8;
  undefined2 uStack_3e;
  uint uStack_3c;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  pGStack_38 = row;
  if (g_data_057ae74d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-button-");
    g_data_057ae74d = '\x01';
  }
  uStack_3c = 0;
  pGVar5 = (__this->fields)._buttons;
  if (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
    if (pGStack_38 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0445c023;
    do {
      uVar1 = (uint)pGVar5->max_length;
      if ((int)uVar1 <= (int)uStack_3c) {
        return;
      }
      if (uVar1 <= uStack_3c) {
        pGVar5 = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)il2cpp_runtime_helper_022b2ca0();
        goto label_0445c03d;
      }
      pGVar2 = pGVar5->m_Items[(int)uStack_3c];
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0) break;
      variant = (pGVar2->fields).Variant;
      pSVar9 = (pGVar2->fields).Text;
      action = (pGVar2->fields).Action;
      pSVar6 = (__this->fields)._id;
      str2 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
      in_R8 = System_String__Concat_3af7150(pSVar6,(System_String_o *)"-button-",str2,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         (pGStack_38,variant,pSVar9,action,in_R8,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      uStack_3e = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)&uStack_3e,(uint)((char)(pGVar2->fields).Disabled == '\0'),
                 MethodInfo_Nullable_1_Boolean);
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      *(undefined2 *)((long)&(pGVar3->fields).hasIcon + 3) = uStack_3e;
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(140.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      in_R8 = (System_String_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
      uStack_3c = uStack_3c + 1;
      pGVar5 = (__this->fields)._buttons;
    } while (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0);
  }
  while( true ) {
    pGVar5 = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)il2cpp_runtime_helper_022b2c90();
label_0445c023:
    if ((int)pGVar5->max_length < 1) break;
label_0445c03d:
    uVar10 = SUB81(in_R8,0);
    if (pGVar5->m_Items[0] != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)0x0) {
      pSVar9 = (__this->fields)._id;
      pSVar6 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
      uVar7 = 0;
      SVar8 = "-button-";
      System_String__Concat_3af7150(pSVar9,(System_String_o *)"-button-",pSVar6,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      pSVar9->fields = SVar8;
      il2cpp_runtime_helper_022b4080(&pSVar9->fields,SVar8);
      pSVar9[1].klass = extraout_RDX;
      il2cpp_runtime_helper_022b4080(pSVar9 + 1,extraout_RDX);
      *(undefined4 *)&pSVar9[1].monitor = uVar7;
      *(undefined1 *)((long)&pSVar9[1].monitor + 4) = uVar10;
      return;
    }
  }
  return;
}


