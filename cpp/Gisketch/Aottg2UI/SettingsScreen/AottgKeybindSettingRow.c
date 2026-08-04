// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x445edc0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass8_0$$<BuildSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0___BuildSlot_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445ee60

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0___BuildSlot_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass8_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *pGVar1;
  Il2CppObject *pIVar2;
  MethodInfo *in_RCX;
  UnityEngine_GameObject_o *in_stack_ffffffffffffffc8;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open
              (context,(pGVar1->fields)._setting,(__this->fields).slot,(pGVar1->fields)._label,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae770 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-playlist-add-song");
    g_data_057ae770 = '\x01';
  }
  if (in_stack_ffffffffffffffc8 != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponentInParent_object_(in_stack_ffffffffffffffc8,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar2[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (pIVar2[8].monitor,"setting-playlist-add-song",1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, System_String_o* id, System_String_o* label, Settings_KeybindSetting_o* setting, System_String_o* tooltip, const MethodInfo* method);
// 0x445e800

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,System_String_o *id,
               System_String_o *label,Settings_KeybindSetting_o *setting,System_String_o *tooltip,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
  (__this->fields)._tooltip = tooltip;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltip,tooltip);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x445e870

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *str0;
  bool_conflict bVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  Settings_InputKey_o *__this_03;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  int32_t index;
  MethodInfo *__this_04;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_05;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *pGVar10;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_06;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057ae76b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlots);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    g_data_057ae76b = '\x01';
  }
  __this_04 = (MethodInfo *)(__this->fields)._id;
  pSVar4 = (__this->fields)._label;
  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar8 = (__this->fields)._tooltip;
  __this_01 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
  pGVar10 = __this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_01,(System_String_o *)__this_04,pSVar4,300.0,pSVar3,pSVar8,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,
             in_stack_ffffffffffffffc0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = __this_04;
  if (g_data_057ae76c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlots_b__7_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"-keybind-slots");
    g_data_057ae76c = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
            (*(Settings_KeybindSetting_o **)&(pGVar10->fields)._controlWidth,method_00);
  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar4 = System_String__Concat_3ae5ba0((pGVar10->fields)._id,"-keybind-slots",(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_05 = "Center";
  pSVar11 = "Row";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)"Center",
                      (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar5
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_04 != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,"clear",pSVar3,pSVar4,pGVar7,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae76d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlot_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-key-");
    il2cpp_runtime_helper_023445d0(&"keybindButton");
    g_data_057ae76d = '\x01';
  }
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  __this_06 = __this_02;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_06 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&__this_02->fields;
    (__this_02->fields)._children = pSVar11;
    il2cpp_runtime_helper_022b4080();
    *(int32_t *)&(__this_02->fields)._actions = index;
    pIVar1 = (pSVar11->fields)._syncRoot;
    if (pIVar1 != (Il2CppObject *)0x0) {
      __this_00 = pIVar1[1].klass;
      __this_06 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      if (__this_00 != (Il2CppClass *)0x0) {
        __this_03 = (Settings_InputKey_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_InputKey_get_Item);
        if (g_data_057ae76e == '\0') {
          il2cpp_runtime_helper_023445d0(&"Unbound");
          g_data_057ae76e = '\x01';
        }
        pSVar4 = "Unbound";
        if ((__this_03 != (Settings_InputKey_o *)0x0) &&
           (bVar2 = Settings_InputKey__IsNone(__this_03,(MethodInfo *)0x0), pSVar4 = "Unbound",
           (char)bVar2 == '\0')) {
          pSVar4 = (System_String_o *)
                   (*(__this_03->klass->vtable)._3_ToString.methodPtr)
                             (__this_03,(__this_03->klass->vtable)._3_ToString.method);
        }
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor();
        str0 = (pSVar11->fields)._items;
        pSVar8 = System_Int32__ToString((int)__this_02 + 0x18,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3af7150((System_String_o *)str0,"-key-",pSVar8,(MethodInfo *)0x0);
        __this_06 = __this_05;
        if ((__this_05 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
           (pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               (__this_05,4,pSVar4,action,pSVar8,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0), __this_06 = __this_05,
           pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          (pGVar9->fields).style = "keybindButton";
          il2cpp_runtime_helper_022b4080();
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
          il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar7);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlots
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlots (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x445e960

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlots
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *str0;
  bool_conflict bVar2;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Settings_InputKey_o *__this_02;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  int32_t index;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_04;
  
  method_00 = (MethodInfo *)control;
  if (g_data_057ae76c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlots_b__7_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"-keybind-slots");
    g_data_057ae76c = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots((__this->fields)._setting,method_00);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar3 = System_String__Concat_3ae5ba0((__this->fields)._id,"-keybind-slots",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_03 = "Center";
  pSVar9 = "Row";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)"Center",
                      (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",build,pSVar3,pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae76d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlot_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-key-");
    il2cpp_runtime_helper_023445d0(&"keybindButton");
    g_data_057ae76d = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  __this_04 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_04 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&__this_01->fields;
    (__this_01->fields)._children = pSVar9;
    il2cpp_runtime_helper_022b4080();
    *(int32_t *)&(__this_01->fields)._actions = index;
    pIVar1 = (pSVar9->fields)._syncRoot;
    if (pIVar1 != (Il2CppObject *)0x0) {
      __this_00 = pIVar1[1].klass;
      __this_04 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      if (__this_00 != (Il2CppClass *)0x0) {
        __this_02 = (Settings_InputKey_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_InputKey_get_Item);
        if (g_data_057ae76e == '\0') {
          il2cpp_runtime_helper_023445d0(&"Unbound");
          g_data_057ae76e = '\x01';
        }
        pSVar3 = "Unbound";
        if ((__this_02 != (Settings_InputKey_o *)0x0) &&
           (bVar2 = Settings_InputKey__IsNone(__this_02,(MethodInfo *)0x0), pSVar3 = "Unbound",
           (char)bVar2 == '\0')) {
          pSVar3 = (System_String_o *)
                   (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                             (__this_02,(__this_02->klass->vtable)._3_ToString.method);
        }
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor();
        str0 = (pSVar9->fields)._items;
        pSVar7 = System_Int32__ToString((int)__this_01 + 0x18,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_3af7150((System_String_o *)str0,"-key-",pSVar7,(MethodInfo *)0x0);
        __this_04 = __this_03;
        if ((__this_03 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
           (pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               (__this_03,4,pSVar3,action,pSVar7,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0), __this_04 = __this_03,
           pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          (pGVar8->fields).style = "keybindButton";
          il2cpp_runtime_helper_022b4080();
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
          il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar6);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, int32_t slot, const MethodInfo* method);
// 0x445eb00

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,int32_t slot,MethodInfo *method)

{
  Settings_KeybindSetting_o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Settings_InputKey_o *__this_02;
  System_String_o *text;
  System_Action_GisketchActionContext__o *action;
  System_String_o *str2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  
  if (g_data_057ae76d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSlot_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-key-");
    il2cpp_runtime_helper_023445d0(&"keybindButton");
    g_data_057ae76d = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  __this_03 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&__this_01->fields;
    (__this_01->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)__this;
    il2cpp_runtime_helper_022b4080();
    *(int32_t *)&(__this_01->fields)._actions = slot;
    pSVar1 = (__this->fields)._setting;
    if (pSVar1 != (Settings_KeybindSetting_o *)0x0) {
      __this_00 = (pSVar1->fields).InputKeys;
      __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
        __this_02 = (Settings_InputKey_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,slot,MethodInfo_InputKey_get_Item);
        if (g_data_057ae76e == '\0') {
          il2cpp_runtime_helper_023445d0(&"Unbound");
          g_data_057ae76e = '\x01';
        }
        text = "Unbound";
        if ((__this_02 != (Settings_InputKey_o *)0x0) &&
           (bVar2 = Settings_InputKey__IsNone(__this_02,(MethodInfo *)0x0), text = "Unbound",
           (char)bVar2 == '\0')) {
          text = (System_String_o *)
                 (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                           (__this_02,(__this_02->klass->vtable)._3_ToString.method);
        }
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor();
        pSVar3 = (__this->fields)._id;
        str2 = System_Int32__ToString((int)__this_01 + 0x18,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_3af7150(pSVar3,"-key-",str2,(MethodInfo *)0x0);
        __this_03 = row;
        if ((row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
           (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                               (row,4,text,action,pSVar3,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0), __this_03 = row,
           pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          (pGVar4->fields).style = "keybindButton";
          il2cpp_runtime_helper_022b4080();
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
          maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,pGVar5);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Text (Settings_InputKey_o* key, const MethodInfo* method);
// 0x445edd0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Text(Settings_InputKey_o *key,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined8 extraout_RDX;
  
  if (g_data_057ae76e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Unbound");
    g_data_057ae76e = '\x01';
  }
  if (key != (Settings_InputKey_o *)0x0) {
    bVar1 = Settings_InputKey__IsNone(key,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      vtableDispatch = (key->klass->vtable)._3_ToString.methodPtr;
      pSVar2 = (System_String_o *)
               (*vtableDispatch)
                         (key,(key->klass->vtable)._3_ToString.method,extraout_RDX,vtableDispatch);
      return pSVar2;
    }
  }
  return "Unbound";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$EnsureSlots
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x445dd40

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
               (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_InputKey__o *__this;
  Settings_InputKey_array *pSVar4;
  long lVar5;
  Settings_InputKey_o *__this_00;
  
  if (g_data_057ae76f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae76f = '\x01';
  }
  if (setting != (Settings_KeybindSetting_o *)0x0) {
    __this = (setting->fields).InputKeys;
    if (__this == (System_Collections_Generic_List_InputKey__o *)0x0) {
label_0445de51:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      iVar2 = (__this->fields)._size;
      while (iVar2 < 2) {
        __this_00 = (Settings_InputKey_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InputKey);
        Settings_InputKey___ctor_40ffd90(__this_00,"None",(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (Settings_InputKey_array *)0x0) goto label_0445de51;
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = __this_00;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,__this_00);
          __this = (setting->fields).InputKeys;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          __this = (setting->fields).InputKeys;
        }
        if (__this == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_0445de51;
        iVar2 = (__this->fields)._size;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$<BuildSlots>b__7_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___BuildSlots_b__7_0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x445ee30

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___BuildSlots_b__7_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot(__this,row,0,in_RCX);
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot(__this,row,1,in_RCX);
  return;
}


