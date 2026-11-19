// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5dc2eb0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass16_0$$<BuildSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0___BuildSlot_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc30e0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0___BuildSlot_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *pGVar1;
  MethodInfo *in_R8;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open
            (context,(pGVar1->fields)._setting,(__this->fields).slot,(pGVar1->fields)._label,
             (pGVar1->fields)._id,in_R8);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, System_String_o* id, System_String_o* label, Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5dc2610

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,System_String_o *id,
               System_String_o *label,Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dc2670

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t layoutMode;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Settings_KeybindSetting_o *setting;
  System_String_o *labelKey;
  System_String_o *tooltipKey;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields searchContext;
  System_String_o *pSVar3;
  System_Action_AottgUi__o *__this_00;
  System_Func_string__o *__this_01;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  MethodInfo *in_R8;
  System_String_o *pSVar5;
  MethodInfo *in_stack_ffffffffffffff70;
  
  if (Il2CppMethodInitialized_07548191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_DirtyValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_07548191 = '\x01';
  }
  if ((__this->fields).WarnOnConflict != false) {
    pSVar1 = (__this->fields)._id;
    pSVar2 = (__this->fields).ConflictScopeId;
    pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                       (&(__this->fields)._searchContext,(__this->fields)._label,(MethodInfo *)0x0);
    setting = (__this->fields)._setting;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Register
              (pSVar1,pSVar2,pSVar3,setting,in_R8);
  }
  pSVar1 = (__this->fields)._id;
  pSVar2 = (__this->fields)._label;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  pSVar4 = (System_String_o *)0x0;
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar3 = (__this->fields)._label;
  labelKey = (__this->fields).LabelKey;
  tooltipKey = (__this->fields).TooltipKey;
  searchContext = (__this->fields)._searchContext.fields;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_DirtyValue,
             (MethodInfo_4F0C6A0 *)0x0);
  pSVar5 = (System_String_o *)0x0;
  if ((__this->fields).WarnOnConflict != false) {
    pSVar4 = (__this->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    pSVar5 = (System_String_o *)0x0;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictRow(pSVar4,(MethodInfo *)0x0);
    if ((__this->fields).WarnOnConflict != false) {
      pSVar5 = (__this->fields)._id;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      pSVar5 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictTooltip(pSVar5,(MethodInfo *)0x0)
      ;
    }
  }
  layoutMode = (__this->fields)._layoutMode;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_02,pSVar1,pSVar2,300.0,__this_00,(System_String_o *)0x0,pSVar3,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_Nullable_float__o)0x0,labelKey,tooltipKey,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)searchContext,__this_01,pSVar4,
             pSVar5,layoutMode,in_stack_ffffffffffffff70);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5dc2930

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dc2960

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync
            (root,(__this->fields)._id,(__this->fields)._setting,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dc2980

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,int32_t mode,
               MethodInfo *method)

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlots
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlots (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc2990

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlots
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)control;
  if (Il2CppMethodInitialized_07548192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-keybind-slots");
    Il2CppMethodInitialized_07548192 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots((__this->fields)._setting,method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots_b__15_0,
             (MethodInfo_4A81BE0 *)0x0);
  id = System_String__Concat_52f0320((__this->fields)._id,"-keybind-slots",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (control,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, int32_t slot, const MethodInfo* method);
// 0x5dc2b30

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,int32_t slot,MethodInfo *method)

{
  Settings_KeybindSetting_o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar2;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0_o *__this_01;
  Settings_InputKey_o *__this_02;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *__this_03;
  System_String_o *str2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  int32_t *__this_05;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07548193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass16_0_BuildSlot_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-key-");
    il2cpp_codegen_initialize_runtime_metadata(&"keybindButton");
    Il2CppMethodInitialized_07548193 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass16_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass16_0_o *)0x0)
  goto label_05dc2ea5;
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  (__this_01->fields).slot = slot;
  pSVar1 = (__this->fields)._setting;
  if ((pSVar1 == (Settings_KeybindSetting_o *)0x0) ||
     (__this_00 = (pSVar1->fields).InputKeys, __this_00 == (System_Collections_Generic_List_InputKey__o *)0x0)
     ) goto label_05dc2ea5;
  __this_02 = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,slot,
                         (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
  if (Il2CppMethodInitialized_07548194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Unbound");
    Il2CppMethodInitialized_07548194 = '\x01';
  }
  __this_05 = &(__this_01->fields).slot;
  if (__this_02 == (Settings_InputKey_o *)0x0) {
label_05dc2c5f:
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Common.Unbound",(MethodInfo *)0x0);
  }
  else {
    bVar2 = Settings_InputKey__IsNone(__this_02,(MethodInfo *)0x0);
    if (bVar2) goto label_05dc2c5f;
    pSVar3 = (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._3_ToString.method);
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_03,(Il2CppObject *)__this_01,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass16_0_BuildSlot_b__0
             ,(MethodInfo_4A803E0 *)0x0);
  pSVar4 = (__this->fields)._id;
  str2 = System_Int32__ToString(__this_05,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_5301f10(pSVar4,"-key-",str2,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                       (row,5,pSVar3,__this_03,pSVar4,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).style = "keybindButton";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style);
      __this_04 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_04,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._id;
      uStack_38 = CONCAT44(*__this_05,(undefined4)uStack_38);
      if (Il2CppMethodInitialized_07548197 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".text");
        il2cpp_codegen_initialize_runtime_metadata(&".key.");
        Il2CppMethodInitialized_07548197 = '\x01';
      }
      pSVar4 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_5302810
                         (pSVar3,".key.",pSVar4,".text",(MethodInfo *)0x0);
      if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_04->fields).text = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_04->fields).text);
        (pGVar5->fields).bind = __this_04;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
        (pGVar5->fields).clip = true;
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
        minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
        maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar5->fields).layout = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
        return;
      }
    }
  }
label_05dc2ea5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Text (Settings_InputKey_o* key, const MethodInfo* method);
// 0x5dc2ec0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Text(Settings_InputKey_o *key,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Unbound");
    Il2CppMethodInitialized_07548194 = '\x01';
  }
  if (key != (Settings_InputKey_o *)0x0) {
    bVar1 = Settings_InputKey__IsNone(key,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (*(key->klass->vtable)._3_ToString.methodPtr)(key,(key->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Unbound",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Sync
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* rowId, Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5dbf290
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbf391: jmp 0x5dbf3cd
// asm:   0x5dbf467: jmp 0x5dbf64d
// asm:   0x5dbf62b: jmp 0x5dbf506

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *rowId,
               Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *pSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  bool bVar3;
  ulong in_RAX;
  Settings_InputKey_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07548195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548195 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05dbf64d;
  if ((root->fields)._State_k__BackingField == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots(setting,method_00);
  if (setting == (Settings_KeybindSetting_o *)0x0) {
label_05dbf393:
    pSVar4 = (Settings_InputKey_o *)0x0;
    pGVar2 = (root->fields)._State_k__BackingField;
  }
  else {
    pSVar1 = (setting->fields).InputKeys;
    if (pSVar1 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_05dbf64d;
    if ((pSVar1->fields)._size < 1) goto label_05dbf393;
    pSVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    pGVar2 = (root->fields)._State_k__BackingField;
  }
  uStack_38 = uStack_38 & 0xffffffff;
  if (Il2CppMethodInitialized_07548197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".text");
    il2cpp_codegen_initialize_runtime_metadata(&".key.");
    Il2CppMethodInitialized_07548197 = '\x01';
  }
  pSVar5 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_5302810
                     (rowId,".key.",pSVar5,".text",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07548194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Unbound");
    Il2CppMethodInitialized_07548194 = '\x01';
  }
  if ((pSVar4 == (Settings_InputKey_o *)0x0) ||
     (bVar3 = Settings_InputKey__IsNone(pSVar4,(MethodInfo *)0x0), bVar3)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Common.Unbound",(MethodInfo *)0x0);
  }
  else {
    pSVar6 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
  }
  if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dbf64d;
  pSVar4 = (Settings_InputKey_o *)0x0;
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,pSVar5,pSVar6,(MethodInfo *)0x0);
  if (setting == (Settings_KeybindSetting_o *)0x0) {
label_05dbf4cf:
    pGVar2 = (root->fields)._State_k__BackingField;
  }
  else {
    pSVar1 = (setting->fields).InputKeys;
    if (pSVar1 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_05dbf64d;
    if (1 < (pSVar1->fields)._size) {
      pSVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      goto label_05dbf4cf;
    }
    pSVar4 = (Settings_InputKey_o *)0x0;
    pGVar2 = (root->fields)._State_k__BackingField;
  }
  uStack_38 = CONCAT44(1,(undefined4)uStack_38);
  if (Il2CppMethodInitialized_07548197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".text");
    il2cpp_codegen_initialize_runtime_metadata(&".key.");
    Il2CppMethodInitialized_07548197 = '\x01';
  }
  pSVar5 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_5302810
                     (rowId,".key.",pSVar5,".text",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07548194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Unbound");
    Il2CppMethodInitialized_07548194 = '\x01';
  }
  if ((pSVar4 == (Settings_InputKey_o *)0x0) ||
     (bVar3 = Settings_InputKey__IsNone(pSVar4,(MethodInfo *)0x0), bVar3)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Common.Unbound",(MethodInfo *)0x0);
  }
  else {
    pSVar6 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
  }
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,pSVar5,pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,rowId,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__SyncAll(root,(MethodInfo *)rowId);
    return;
  }
label_05dbf64d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$DirtyValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__DirtyValue (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, const MethodInfo* method);
// 0x5dc2fb0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__DirtyValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,MethodInfo *method)

{
  Settings_KeybindSetting_o *pSVar1;
  System_Collections_Generic_List_InputKey__o *pSVar2;
  System_String_o *str1;
  Settings_InputKey_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_07548196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07548196 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots((__this->fields)._setting,method);
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_KeybindSetting_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar2 = (pSVar1->fields).InputKeys;
  if (pSVar2 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    pSVar4 = (System_String_o *)0x0;
    pSVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,0,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    if (pSVar3 != (Settings_InputKey_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    }
    pSVar1 = (__this->fields)._setting;
    if ((pSVar1 != (Settings_KeybindSetting_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).InputKeys, pSVar2 != (System_Collections_Generic_List_InputKey__o *)0x0)) {
      pSVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,1,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      str1 = "|";
      if (pSVar3 == (Settings_InputKey_o *)0x0) {
        str2 = (System_String_o *)0x0;
      }
      else {
        str2 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
      }
      pSVar4 = System_String__Concat_5301f10(pSVar4,str1,str2,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$SlotTextKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SlotTextKey (System_String_o* rowId, int32_t slot, const MethodInfo* method);
// 0x5dc2f40

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SlotTextKey
          (System_String_o *rowId,int32_t slot,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = slot;
  if (Il2CppMethodInitialized_07548197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".text");
    il2cpp_codegen_initialize_runtime_metadata(&".key.");
    Il2CppMethodInitialized_07548197 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5302810
                     (rowId,".key.",pSVar1,".text",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$EnsureSlots
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5dbe570
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbe5d4: lea r12, [rip + 0x14bb7bd]  ; TypeInfo_Settings_InputKey
// asm:   0x5dbe5db: lea r13, [rip + 0x152546e]  ; "None"
// asm:   0x5dbe5e2: lea rbp, [rip + 0x14d6a17]  ; MethodInfo_System_Collections_Generic_List_InputKey_Add
// asm:   0x5dbe5e9: jmp 0x5dbe677
// asm:   0x5dbe613: jmp 0x5dbe68c

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
               (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_InputKey_array *pSVar3;
  MethodInfo *pMVar4;
  Settings_InputKey_o *__this;
  System_Collections_Generic_List_InputKey__o *__this_00;
  
  if (Il2CppMethodInitialized_07548198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07548198 = '\x01';
  }
  if (setting == (Settings_KeybindSetting_o *)0x0) {
    return;
  }
  __this_00 = (setting->fields).InputKeys;
  while (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    while( true ) {
      if (1 < (__this_00->fields)._size) {
        return;
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
      Settings_InputKey___ctor_5a55c90(__this,"None",(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_InputKey_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (Settings_InputKey_array *)0x0) goto label_05dbe68c;
      uVar2 = (__this_00->fields)._size;
      if ((uint)pSVar3->max_length <= uVar2) break;
      (__this_00->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = __this;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      __this_00 = (setting->fields).InputKeys;
      if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_05dbe68c;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
    __this_00 = (setting->fields).InputKeys;
  }
label_05dbe68c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$<BuildSlots>b__15_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___BuildSlots_b__15_0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dc30b0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___BuildSlots_b__15_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot(__this,row,0,in_RCX);
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot(__this,row,1,in_RCX);
  return;
}


