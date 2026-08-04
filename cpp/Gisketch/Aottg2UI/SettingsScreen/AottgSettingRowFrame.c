// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingRowFrame.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, System_String_o* id, System_String_o* label, float controlWidth, System_Action_AottgUi__o* buildControl, System_String_o* tooltip, System_String_o* searchTitle, System_String_o* searchKeywords, System_String_o* icon, System_Nullable_float__o controlVisualWidth, const MethodInfo* method);
// 0x445bb70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,System_String_o *id,
               System_String_o *label,float controlWidth,System_Action_AottgUi__o *buildControl,
               System_String_o *tooltip,System_String_o *searchTitle,System_String_o *searchKeywords,
               System_String_o *icon,System_Nullable_float__o controlVisualWidth,MethodInfo *method)

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
  System_String_o **ppSVar11;
  System_String_Fields SVar12;
  undefined1 uVar13;
  System_String_o *pSVar14;
  undefined2 local_10e;
  uint local_10c;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_108;
  System_String_o **ppSStack_100;
  System_Action_AottgUi__o *pSStack_f8;
  System_String_o *pSStack_f0;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_e8;
  System_String_o *pSStack_e0;
  System_Action_AottgUi__o *pSStack_d8;
  
  if (g_data_057ae79e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057ae79e = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  ppSVar11 = &(__this->fields)._label;
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080();
  (__this->fields)._controlWidth = controlWidth;
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)0x0) {
    if ((char)controlVisualWidth.fields.hasValue != '\0') {
      controlWidth = controlVisualWidth.fields.value;
    }
    (__this->fields)._controlVisualWidth = controlWidth;
    (__this->fields)._buildControl = buildControl;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._buildControl,buildControl);
    (__this->fields)._tooltip = tooltip;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltip,tooltip);
    (__this->fields)._searchTitle = searchTitle;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._searchTitle);
    (__this->fields)._searchKeywords = searchKeywords;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._searchKeywords);
    (__this->fields)._icon = icon;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._icon);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae74c == '\0') {
    pSStack_d8 = (System_Action_AottgUi__o *)0x445bcc6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pSStack_d8 = (System_Action_AottgUi__o *)0x445bcd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildButtons_b__6_0);
    pSStack_d8 = (System_Action_AottgUi__o *)0x445bcde;
    il2cpp_runtime_helper_023445d0(&"clear");
    pSStack_d8 = (System_Action_AottgUi__o *)0x445bcea;
    il2cpp_runtime_helper_023445d0(&"Center");
    pSStack_d8 = (System_Action_AottgUi__o *)0x445bcf6;
    il2cpp_runtime_helper_023445d0(&"-actions");
    pSStack_d8 = (System_Action_AottgUi__o *)0x445bd02;
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae74c = '\x01';
  }
  pSStack_d8 = (System_Action_AottgUi__o *)0x445bd18;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  pSStack_d8 = (System_Action_AottgUi__o *)0x445bd32;
  System_Action_object____ctor();
  pSStack_d8 = (System_Action_AottgUi__o *)0x445bd47;
  pSVar2 = System_String__Concat_3ae5ba0(ppSVar11[2],"-actions",(MethodInfo *)0x0);
  pSStack_d8 = (System_Action_AottgUi__o *)0x445bd59;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar14 = (System_String_o *)0x0;
  pSStack_d8 = (System_Action_AottgUi__o *)0x445bdde;
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
  if ((Gisketch_Aottg2UI_Code_AottgUi_o *)label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSStack_d8 = (System_Action_AottgUi__o *)0x445be09;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)label,"clear",build,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  pSStack_d8 = (System_Action_AottgUi__o *)0x445be1a;
  il2cpp_runtime_helper_022b2c90();
  local_108 = pGVar9;
  ppSStack_100 = ppSVar11;
  pSStack_f8 = build;
  pSStack_f0 = tooltip;
  pGStack_e8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)label;
  pSStack_e0 = pSVar2;
  pSStack_d8 = buildControl;
  if (g_data_057ae74d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-button-");
    g_data_057ae74d = '\x01';
  }
  local_10c = 0;
  pvVar6 = pSVar7[1].monitor;
  if (pvVar6 != (void *)0x0) {
    if (local_108 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0445c023;
    do {
      if ((int)*(uint *)((long)pvVar6 + 0x18) <= (int)local_10c) {
        return;
      }
      if (*(uint *)((long)pvVar6 + 0x18) <= local_10c) {
        pvVar6 = (void *)il2cpp_runtime_helper_022b2ca0();
        goto label_0445c03d;
      }
      lVar1 = *(long *)((long)pvVar6 + (long)(int)local_10c * 8 + 0x20);
      if (lVar1 == 0) break;
      variant = *(int32_t *)(lVar1 + 0x20);
      pSVar2 = *(System_String_o **)(lVar1 + 0x10);
      action = *(System_Action_GisketchActionContext__o **)(lVar1 + 0x18);
      SVar12 = pSVar7->fields;
      pSVar14 = System_Int32__ToString((int32_t)&local_10c,(MethodInfo *)0x0);
      pSVar14 = System_String__Concat_3af7150
                          ((System_String_o *)SVar12,(System_String_o *)"-button-",pSVar14,(MethodInfo *)0x0
                          );
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         (local_108,variant,pSVar2,action,pSVar14,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      local_10e = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)&local_10e,(uint)(*(char *)(lVar1 + 0x24) == '\0'),MethodInfo_Nullable_1_Boolean);
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      *(undefined2 *)((long)&(pGVar5->fields).hasIcon + 3) = local_10e;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(140.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pSVar14 = (System_String_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
      local_10c = local_10c + 1;
      pvVar6 = pSVar7[1].monitor;
    } while (pvVar6 != (void *)0x0);
  }
  while( true ) {
    pvVar6 = (void *)il2cpp_runtime_helper_022b2c90();
label_0445c023:
    if (*(int *)((long)pvVar6 + 0x18) < 1) break;
label_0445c03d:
    uVar13 = SUB81(pSVar14,0);
    if (*(long *)((long)pvVar6 + 0x20) != 0) {
      SVar12 = pSVar7->fields;
      pSVar7 = System_Int32__ToString((int32_t)&local_10c,(MethodInfo *)0x0);
      uVar8 = 0;
      SVar10 = "-button-";
      System_String__Concat_3af7150
                ((System_String_o *)SVar12,(System_String_o *)"-button-",pSVar7,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)SVar12,(MethodInfo *)0x0);
      *(System_String_Fields *)((long)SVar12 + 0x10) = SVar10;
      il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)SVar12 + 0x10),SVar10);
      ((System_String_o *)((long)SVar12 + 0x18))->klass = extraout_RDX;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar12 + 0x18),extraout_RDX);
      *(undefined4 *)((long)SVar12 + 0x20) = uVar8;
      *(undefined1 *)((long)SVar12 + 0x24) = uVar13;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4462d50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  
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
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._id,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') || ((__this->fields)._buildControl == (System_Action_AottgUi__o *)0x0)) {
    return;
  }
  if (*(int *)(TypeInfo_GisketchResponsiveRowLayout + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory((MethodInfo *)0x0);
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar6 = (__this->fields)._id;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar8 = "Row";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,8.0,6.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_00 = "clear";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,(System_String_o *)"clear",pSVar2,pSVar6,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = ui;
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).type = "ResponsiveRowLayout";
      il2cpp_runtime_helper_022b4080(&pGVar5->fields);
      return;
    }
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
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar6 = System_String__Concat_3ae5ba0
                     ((System_String_o *)(pGVar8->fields)._children,"-label-cell",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar8 = "Row";
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_00,(System_String_o *)"clear",pSVar2,pSVar6,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
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
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pGVar8[1].klass,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar5->fields);
    pSVar6 = System_String__Concat_3ae5ba0
                       ((System_String_o *)(pGVar8->fields)._children,"-info",(MethodInfo *)0x0);
    (pGVar5->fields).id = pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pSVar6);
    (pGVar5->fields).sprite = "Icons/kenney-icons/information";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).sprite);
    (pGVar5->fields).style = "settingInfoIcon";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style);
    (pGVar5->fields).choiceOptionRenderer = (System_String_o *)pGVar8[1].klass;
    il2cpp_runtime_helper_022b4080();
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,pGVar3,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        (*(float *)&(pGVar8->fields)._ownerId +
                        *(float *)((long)&(pGVar8->fields)._ownerId + 4)) * 0.5 + 8.0,-10.0,0.0,0.0,
                        (MethodInfo *)0x0);
    (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_01,pGVar5,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildLabel
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4462f30

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar6;
  
  if (g_data_057ae7a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLabel_b__12_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-label-cell");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae7a0 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-label-cell",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar6 = "Row";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,6.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,"clear",build,pSVar2,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
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
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[1].fields,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    pSVar2 = System_String__Concat_3ae5ba0((System_String_o *)pSVar6->fields,"-info",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar2);
    (__this_00->fields).sprite = "Icons/kenney-icons/information";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).sprite);
    (__this_00->fields).style = "settingInfoIcon";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    (__this_00->fields).choiceOptionRenderer = (System_String_o *)pSVar6[1].fields;
    il2cpp_runtime_helper_022b4080();
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        (*(float *)&pSVar6[1].monitor + *(float *)((long)&pSVar6[1].monitor + 4)) * 0.5 + 8.0,
                        -10.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).search,pGVar5);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_01,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$BuildTooltip
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x44630d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildTooltip
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
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
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-info",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar2);
    (__this_00->fields).sprite = "Icons/kenney-icons/information";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).sprite);
    (__this_00->fields).style = "settingInfoIcon";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    (__this_00->fields).choiceOptionRenderer = (__this->fields)._tooltip;
    il2cpp_runtime_helper_022b4080();
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5 + 8.0,
                        -10.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).search,pGVar3);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(control,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout (const MethodInfo* method);
// 0x4463320

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae7a2 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$ControlShellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x44633e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7a3 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._controlWidth,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0
                      ,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$TooltipIconOffsetX
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__TooltipIconOffsetX (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, const MethodInfo* method);
// 0x4463300

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__TooltipIconOffsetX
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,MethodInfo *method)

{
  return ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5 + 8.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__11_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__11_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x44634c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__11_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *text;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  System_Action_AottgUi__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  long lVar6;
  undefined1 *puVar7;
  MethodInfo *extraout_RDX;
  System_String_c *extraout_RDX_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  MethodInfo *method_00;
  System_String_Fields SVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  
  if (g_data_057ae7a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__11_1);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-control");
    g_data_057ae7a4 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__BuildLabel(__this,row,method);
  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar4 = System_String__Concat_3ae5ba0((__this->fields)._id,"-control",(MethodInfo *)0x0);
  if (g_data_057ae7a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae7a2 = '\x01';
  }
  __this_01 = "Center";
  __this_02 = "Row";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)"Center",
                      (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,"clear",pSVar3,pSVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__11_2);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-control-shell");
    g_data_057ae7a5 = '\x01';
  }
  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  puVar7 = (undefined1 *)0x0;
  System_Action_object____ctor();
  method_00 = "-control-shell";
  pSVar4 = System_String__Concat_3ae5ba0
                     ((__this_02->fields)._id,(System_String_o *)"-control-shell",(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout(__this_02,method_00);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,"clear",pSVar3,pSVar4,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (__this_02->fields)._buildControl;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae7a6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"setting");
      il2cpp_runtime_helper_023445d0(&"-label");
      il2cpp_runtime_helper_023445d0(&"settingLabel");
      g_data_057ae7a6 = '\x01';
    }
    pSVar4 = (__this_02->fields)._id;
    text = (__this_02->fields)._label;
    SVar8 = "-label";
    id = System_String__Concat_3ae5ba0(pSVar4,(System_String_o *)"-label",(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,text,"settingLabel",id,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      puVar7 = (undefined1 *)0x0;
      pSVar4 = "Column";
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search);
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
        Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
        pSVar4 = (__this_02->fields)._searchTitle;
        SVar8._stringLength = 0;
        SVar8._firstChar = 0;
        SVar8._6_2_ = 0;
        bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        puVar7 = &g_data_00000018;
        lVar6 = 0x30;
        if ((char)bVar1 != '\0') {
          lVar6 = 0x18;
        }
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
          (__this_00->fields).title = *(System_String_o **)((long)&__this_02->klass + lVar6);
          il2cpp_runtime_helper_022b4080(&__this_00->fields);
          (__this_00->fields).keywords = (__this_02->fields)._searchKeywords;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).keywords);
          (__this_00->fields).icon = (__this_02->fields)._icon;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).icon);
          (__this_00->fields).kind = "setting";
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).kind);
          (pGVar2->fields).popover = (System_String_o *)__this_00;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).popover,__this_00);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae7a7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingDescriptor);
      g_data_057ae7a7 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar4,(MethodInfo *)0x0);
    pSVar4->fields = SVar8;
    il2cpp_runtime_helper_022b4080(&pSVar4->fields,SVar8);
    pSVar4[1].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pSVar4 + 1,extraout_RDX_00);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingDescriptor,0);
    }
    pSVar4[1].monitor = puVar7;
    il2cpp_runtime_helper_022b4080(&pSVar4[1].monitor,puVar7);
    return;
  }
  (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
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
  bVar1 = System_String__IsNullOrEmpty((__this_02->fields)._tooltip,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar2->fields);
    pSVar4 = System_String__Concat_3ae5ba0((__this_02->fields)._id,"-info",(MethodInfo *)0x0);
    (pGVar2->fields).id = pSVar4;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,pSVar4);
    (pGVar2->fields).sprite = "Icons/kenney-icons/information";
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).sprite);
    (pGVar2->fields).style = "settingInfoIcon";
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).style);
    (pGVar2->fields).choiceOptionRenderer = (__this_02->fields)._tooltip;
    il2cpp_runtime_helper_022b4080();
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        ((__this_02->fields)._controlWidth + (__this_02->fields)._controlVisualWidth) * 0.5 +
                        8.0,-10.0,0.0,0.0,(MethodInfo *)0x0);
    (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
    if (method_00 != (MethodInfo *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__11_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__11_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x4463650

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__11_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_String_o *text;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  System_Action_AottgUi__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  long lVar6;
  undefined1 *puVar7;
  System_String_c *extraout_RDX;
  MethodInfo *method_00;
  System_String_Fields SVar8;
  
  if (g_data_057ae7a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__11_2);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-control-shell");
    g_data_057ae7a5 = '\x01';
  }
  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  puVar7 = (undefined1 *)0x0;
  System_Action_object____ctor();
  method_00 = "-control-shell";
  pSVar4 = System_String__Concat_3ae5ba0
                     ((__this->fields)._id,(System_String_o *)"-control-shell",(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame__ControlShellLayout(__this,method_00);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",pSVar3,pSVar4,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (__this->fields)._buildControl;
  if (pSVar3 != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
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
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).type = "Image";
      il2cpp_runtime_helper_022b4080(&pGVar2->fields);
      pSVar4 = System_String__Concat_3ae5ba0((__this->fields)._id,"-info",(MethodInfo *)0x0);
      (pGVar2->fields).id = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,pSVar4);
      (pGVar2->fields).sprite = "Icons/kenney-icons/information";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).sprite);
      (pGVar2->fields).style = "settingInfoIcon";
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).style);
      (pGVar2->fields).choiceOptionRenderer = (__this->fields)._tooltip;
      il2cpp_runtime_helper_022b4080();
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5 + 8.0,
                          -10.0,0.0,0.0,(MethodInfo *)0x0);
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
      if (method_00 != (MethodInfo *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,pGVar2,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"setting");
    il2cpp_runtime_helper_023445d0(&"-label");
    il2cpp_runtime_helper_023445d0(&"settingLabel");
    g_data_057ae7a6 = '\x01';
  }
  pSVar4 = (__this->fields)._id;
  text = (__this->fields)._label;
  SVar8 = "-label";
  id = System_String__Concat_3ae5ba0(pSVar4,(System_String_o *)"-label",(MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,text,"settingLabel",id,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    SVar8._stringLength = 0;
    SVar8._firstChar = 0;
    SVar8._6_2_ = 0;
    puVar7 = (undefined1 *)0x0;
    pSVar4 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search);
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
      Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._searchTitle;
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      puVar7 = &g_data_00000018;
      lVar6 = 0x30;
      if ((char)bVar1 != '\0') {
        lVar6 = 0x18;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        (__this_00->fields).title = *(System_String_o **)((long)&__this->klass + lVar6);
        il2cpp_runtime_helper_022b4080(&__this_00->fields);
        (__this_00->fields).keywords = (__this->fields)._searchKeywords;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).keywords);
        (__this_00->fields).icon = (__this->fields)._icon;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).icon);
        (__this_00->fields).kind = "setting";
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).kind);
        (pGVar2->fields).popover = (System_String_o *)__this_00;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).popover,__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingDescriptor);
    g_data_057ae7a7 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar4,(MethodInfo *)0x0);
  pSVar4->fields = SVar8;
  il2cpp_runtime_helper_022b4080(&pSVar4->fields,SVar8);
  pSVar4[1].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(pSVar4 + 1,extraout_RDX);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingDescriptor,0);
  }
  pSVar4[1].monitor = puVar7;
  il2cpp_runtime_helper_022b4080(&pSVar4[1].monitor,puVar7);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<Build>b__11_2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__11_2 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* shell, const MethodInfo* method);
// 0x4463730

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___Build_b__11_2
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *shell,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  System_String_o *text;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  long lVar6;
  undefined1 *in_RCX;
  System_String_c *extraout_RDX;
  System_String_Fields SVar7;
  
  pSVar1 = (__this->fields)._buildControl;
  if (pSVar1 != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,shell,(pSVar1->fields).method);
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
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._tooltip,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).type = "Image";
      il2cpp_runtime_helper_022b4080(&pGVar3->fields);
      pSVar4 = System_String__Concat_3ae5ba0((__this->fields)._id,"-info",(MethodInfo *)0x0);
      (pGVar3->fields).id = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar4);
      (pGVar3->fields).sprite = "Icons/kenney-icons/information";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).sprite);
      (pGVar3->fields).style = "settingInfoIcon";
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style);
      (pGVar3->fields).choiceOptionRenderer = (__this->fields)._tooltip;
      il2cpp_runtime_helper_022b4080();
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          ((__this->fields)._controlWidth + (__this->fields)._controlVisualWidth) * 0.5 + 8.0,
                          -10.0,0.0,0.0,(MethodInfo *)0x0);
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar5);
      if (shell != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(shell,pGVar3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"setting");
    il2cpp_runtime_helper_023445d0(&"-label");
    il2cpp_runtime_helper_023445d0(&"settingLabel");
    g_data_057ae7a6 = '\x01';
  }
  pSVar4 = (__this->fields)._id;
  text = (__this->fields)._label;
  SVar7 = "-label";
  id = System_String__Concat_3ae5ba0(pSVar4,(System_String_o *)"-label",(MethodInfo *)0x0);
  if (shell != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (shell,text,"settingLabel",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    SVar7._stringLength = 0;
    SVar7._firstChar = 0;
    SVar7._6_2_ = 0;
    in_RCX = (undefined1 *)0x0;
    pSVar4 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
      Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._searchTitle;
      SVar7._stringLength = 0;
      SVar7._firstChar = 0;
      SVar7._6_2_ = 0;
      bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      in_RCX = &g_data_00000018;
      lVar6 = 0x30;
      if ((char)bVar2 != '\0') {
        lVar6 = 0x18;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        (__this_00->fields).title = *(System_String_o **)((long)&__this->klass + lVar6);
        il2cpp_runtime_helper_022b4080(&__this_00->fields);
        (__this_00->fields).keywords = (__this->fields)._searchKeywords;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).keywords);
        (__this_00->fields).icon = (__this->fields)._icon;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).icon);
        (__this_00->fields).kind = "setting";
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).kind);
        (pGVar3->fields).popover = (System_String_o *)__this_00;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).popover,__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingDescriptor);
    g_data_057ae7a7 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar4,(MethodInfo *)0x0);
  pSVar4->fields = SVar7;
  il2cpp_runtime_helper_022b4080(&pSVar4->fields,SVar7);
  pSVar4[1].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(pSVar4 + 1,extraout_RDX);
  if (in_RCX == (undefined1 *)0x0) {
    in_RCX = (undefined1 *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingDescriptor,0);
  }
  pSVar4[1].monitor = in_RCX;
  il2cpp_runtime_helper_022b4080(&pSVar4[1].monitor,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame$$<BuildLabel>b__12_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildLabel_b__12_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x4463770

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___BuildLabel_b__12_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  System_String_o *text;
  bool_conflict bVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  long lVar4;
  undefined1 *in_RCX;
  System_String_c *extraout_RDX;
  System_String_Fields SVar5;
  System_String_o *str0;
  
  if (g_data_057ae7a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"setting");
    il2cpp_runtime_helper_023445d0(&"-label");
    il2cpp_runtime_helper_023445d0(&"settingLabel");
    g_data_057ae7a6 = '\x01';
  }
  str0 = (__this->fields)._id;
  text = (__this->fields)._label;
  SVar5 = "-label";
  id = System_String__Concat_3ae5ba0(str0,(System_String_o *)"-label",(MethodInfo *)0x0);
  if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (label,text,"settingLabel",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    SVar5._stringLength = 0;
    SVar5._firstChar = 0;
    SVar5._6_2_ = 0;
    in_RCX = (undefined1 *)0x0;
    str0 = "Column";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search);
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
      Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
      str0 = (__this->fields)._searchTitle;
      SVar5._stringLength = 0;
      SVar5._firstChar = 0;
      SVar5._6_2_ = 0;
      bVar1 = System_String__IsNullOrEmpty(str0,(MethodInfo *)0x0);
      in_RCX = &g_data_00000018;
      lVar4 = 0x30;
      if ((char)bVar1 != '\0') {
        lVar4 = 0x18;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        (__this_00->fields).title = *(System_String_o **)((long)&__this->klass + lVar4);
        il2cpp_runtime_helper_022b4080(&__this_00->fields);
        (__this_00->fields).keywords = (__this->fields)._searchKeywords;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).keywords);
        (__this_00->fields).icon = (__this->fields)._icon;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).icon);
        (__this_00->fields).kind = "setting";
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).kind);
        (pGVar2->fields).popover = (System_String_o *)__this_00;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).popover,__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingDescriptor);
    g_data_057ae7a7 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)str0,(MethodInfo *)0x0);
  str0->fields = SVar5;
  il2cpp_runtime_helper_022b4080(&str0->fields,SVar5);
  str0[1].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(str0 + 1,extraout_RDX);
  if (in_RCX == (undefined1 *)0x0) {
    in_RCX = (undefined1 *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingDescriptor,0);
  }
  str0[1].monitor = in_RCX;
  il2cpp_runtime_helper_022b4080(&str0[1].monitor,in_RCX);
  return;
}


