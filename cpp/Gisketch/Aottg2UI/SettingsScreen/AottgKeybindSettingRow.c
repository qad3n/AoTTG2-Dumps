// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass17_0$$<BuildSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0___BuildSlot_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182320010

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0___BuildSlot_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  int32_t slot;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *pGVar1;
  Settings_KeybindSetting_o *setting;
  bool bVar2;
  System_String_o *label;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *)0x0) {
    slot = (__this->fields).slot;
    setting = (pGVar1->fields)._setting;
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).LabelKey,(MethodInfo *)0x0);
    if (bVar2) {
      label = (pGVar1->fields)._label;
    }
    else {
      label = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                        ((pGVar1->fields).LabelKey,(pGVar1->fields)._label,(MethodInfo *)0x0);
    }
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *)0x0) {
      local_48.fields.ElementId = (context->fields).ElementId;
      local_48.fields.GameObject = (context->fields).GameObject;
      local_48.fields.Node = (context->fields).Node;
      local_48.fields.InputSource = (context->fields).InputSource;
      local_48.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open
                (&local_48,setting,slot,label,(pGVar1->fields)._id,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, System_String_o* id, System_String_o* label, Settings_KeybindSetting_o* setting, System_String_o* tooltip, const MethodInfo* method);
// 0x182308d90

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___ctor_2308d90(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, System_String_o* id, System_String_o* label, Settings_KeybindSetting_o* setting, System_String_o* tooltip, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = dataSource;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,dataSource);
  (__this->fields)._label = displayMember;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,displayMember);
  (__this->fields)._setting = valueMember;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,valueMember);
  (__this->fields)._tooltip = lookupMember;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,lookupMember);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x182308480

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
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  bool bVar7;
  System_String_o *value;
  System_String_o *pSVar8;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_01;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_98 [2];
  
  if (Il2CppMethodInitialized_1843476ec == '\0') {
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
    Il2CppMethodInitialized_1843476ec = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty((__this->fields).LabelKey,(MethodInfo *)0x0);
  if (bVar7) {
    value = (__this->fields)._label;
  }
  else {
    value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                      ((__this->fields).LabelKey,(__this->fields)._label,(MethodInfo *)0x0);
  }
  if ((__this->fields).WarnOnConflict != false) {
    pSVar1 = (__this->fields)._id;
    pSVar2 = (__this->fields).ConflictScopeId;
    pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
                       (&(__this->fields)._searchContext,value,(MethodInfo *)0x0);
    setting = (__this->fields)._setting;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__Register
              (pSVar1,pSVar2,pSVar8,setting,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields)._id;
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots,
             (MethodInfo *)0x0);
  pSVar8 = (__this->fields)._tooltip;
  pSVar3 = (__this->fields)._searchContext.fields.ScreenTitle;
  pSVar4 = (__this->fields)._searchContext.fields.CategoryId;
  labelKey = (__this->fields).LabelKey;
  pSVar5 = (__this->fields)._searchContext.fields.CategoryTitle;
  pSVar6 = (__this->fields)._searchContext.fields.GroupId;
  tooltipKey = (__this->fields).TooltipKey;
  pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
  __this_01 = (DG_Tweening_Core_DOGetter_Vector2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_DirtyValue,
             (MethodInfo_1387740 *)0x0);
  if ((__this->fields).WarnOnConflict == false) {
    pSVar9 = (System_String_o *)0x0;
  }
  else {
    pSVar9 = (__this->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    pSVar9 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictRow(pSVar9,(MethodInfo *)0x0);
  }
  if ((__this->fields).WarnOnConflict == false) {
    pSVar10 = (System_String_o *)0x0;
  }
  else {
    pSVar10 = (__this->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    }
    pSVar10 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__KeybindConflictTooltip(pSVar10,(MethodInfo *)0x0)
    ;
  }
  layoutMode = (__this->fields)._layoutMode;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  local_98[0].fields.ScreenTitle = pSVar3;
  local_98[0].fields.CategoryId = pSVar4;
  local_98[0].fields.CategoryTitle = pSVar5;
  local_98[0].fields.GroupId = pSVar6;
  local_98[0].fields.GroupTitle = pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_02,pSVar2,value,300.0,(System_Action_AottgUi__o *)__this_00,pSVar8,value,
             (System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,labelKey,tooltipKey,
             (System_String_o *)0x0,local_98,(System_Func_string__o *)__this_01,pSVar9,pSVar10,layoutMode,
             (MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821ea430

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplySearchContext(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, MethodInfo* method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar1 = (context->fields).CategoryId;
  pSVar2 = (context->fields).CategoryTitle;
  pSVar3 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182308ad0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync
            (root,(__this->fields)._id,(__this->fields)._setting,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x181adfeb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode = value;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlots
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlots (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x1823082b0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlots
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_1843476ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-keybind-slots");
    Il2CppMethodInitialized_1843476ed = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
            ((__this->fields)._setting,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots_b__16_0,
             (MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-keybind-slots",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, int32_t slot, const MethodInfo* method);
// 0x182307ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182308038: mov rbp, qword ptr [rip + 0x1d8a041]  ; "Unbound"

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,int32_t slot,MethodInfo *method)

{
  Settings_KeybindSetting_o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0_o *object;
  Settings_InputKey_o *__this_01;
  System_String_o *pSVar3;
  DG_Tweening_Core_DOSetter_Color2__o *__this_02;
  System_String_o *str2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_1843476ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass17_0_BuildSlot_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-key-");
    il2cpp_codegen_initialize_runtime_metadata(&"keybindButton");
    Il2CppMethodInitialized_1843476ee = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass17_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___c__DisplayClass17_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).slot = slot;
    pSVar1 = (__this->fields)._setting;
    if ((pSVar1 != (Settings_KeybindSetting_o *)0x0) &&
       (__this_00 = (pSVar1->fields).InputKeys,
       __this_00 != (System_Collections_Generic_List_InputKey__o *)0x0)) {
      __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,slot,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item
                            );
      if (Il2CppMethodInitialized_1843476ef == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Unbound");
        Il2CppMethodInitialized_1843476ef = '\x01';
      }
      pSVar3 = "Unbound";
      if ((__this_01 != (Settings_InputKey_o *)0x0) &&
         (bVar2 = Settings_InputKey__IsNone(__this_01,(MethodInfo *)0x0), pSVar3 = "Unbound",
         !bVar2)) {
        pSVar3 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      }
      __this_02 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_02,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass17_0_BuildSlot_b__0
                 ,(MethodInfo_1387DC0 *)0x0);
      pSVar4 = (__this->fields)._id;
      str2 = System_Int32__ToString(&(object->fields).slot,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969b70(pSVar4,"-key-",str2,(MethodInfo *)0x0);
      if ((row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                             (row,5,pSVar3,(System_Action_GisketchActionContext__o *)__this_02,pSVar4,
                              (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (System_String_o *)0x0,(MethodInfo *)0x0),
         pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar5->fields).style = "keybindButton";
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style,"keybindButton");
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_03,(MethodInfo *)0x0);
        local_28[0] = (object->fields).slot;
        pSVar3 = (__this->fields)._id;
        if (Il2CppMethodInitialized_1843476f2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".text");
          il2cpp_codegen_initialize_runtime_metadata(&".key.");
          Il2CppMethodInitialized_1843476f2 = '\x01';
        }
        pSVar4 = System_Int32__ToString(local_28,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969590
                           (pSVar3,".key.",pSVar4,".text",(MethodInfo *)0x0);
        if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this_03->fields).text = pSVar3;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).text,pSVar3);
          (pGVar5->fields).bind = __this_03;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,__this_03);
          (pGVar5->fields).clip = true;
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
          minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
          maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(146.0,(MethodInfo *)0x0);
          value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar5->fields).layout = value;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Text (Settings_InputKey_o* key, const MethodInfo* method);
// 0x182308ce0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Text(Settings_InputKey_o *key,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843476ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Unbound");
    Il2CppMethodInitialized_1843476ef = '\x01';
  }
  if (key != (Settings_InputKey_o *)0x0) {
    bVar1 = Settings_InputKey__IsNone(key,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (*(key->klass->vtable)._3_ToString.methodPtr)(key,(key->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
  return "Unbound";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$LabelText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__LabelText (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, const MethodInfo* method);
// 0x182308a20

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__LabelText
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).LabelKey,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._label;
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                     ((__this->fields).LabelKey,(__this->fields)._label,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Sync
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* rowId, Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x182308af0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182308c4c: mov rax, qword ptr [rip + 0x1d8942d]  ; "Unbound"
// asm:   0x182308cb6: mov rdi, qword ptr [rsp + 0x50]
// asm:   0x182308cbb: mov rbp, qword ptr [rsp + 0x48]
// asm:   0x182308cc0: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x182308cc5: mov r15, qword ptr [rsp + 0x58]

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *rowId,
               Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  Settings_InputKey_o *__this_01;
  System_String_o *key;
  System_String_o *value;
  int index;
  
  if (Il2CppMethodInitialized_1843476f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476f0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_182308cd4:
      ThrowNullReferenceException();
    }
    if (((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
       (bVar1 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0), !bVar1)) {
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots(setting,(MethodInfo *)0x0);
      index = 0;
      do {
        if (setting == (Settings_KeybindSetting_o *)0x0) {
label_182308bef:
          __this_01 = (Settings_InputKey_o *)0x0;
        }
        else {
          __this = (setting->fields).InputKeys;
          if (__this == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_182308cd4;
          if ((__this->fields)._size <= index) goto label_182308bef;
          __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
        }
        __this_00 = (root->fields)._State_k__BackingField;
        key = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SlotTextKey
                        (rowId,index,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_1843476ef == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Unbound");
          Il2CppMethodInitialized_1843476ef = '\x01';
        }
        value = "Unbound";
        if ((__this_01 != (Settings_InputKey_o *)0x0) &&
           (bVar1 = Settings_InputKey__IsNone(__this_01,(MethodInfo *)0x0), value = "Unbound",
           !bVar1)) {
          value = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                            (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        }
        if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_182308cd4;
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,key,value,(MethodInfo *)0x0);
        index = index + 1;
      } while (index < 2);
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,rowId,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry__SyncAll(root,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$DirtyValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__DirtyValue (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, const MethodInfo* method);
// 0x182308780
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182308835: mov rdi, qword ptr [rip + 0x1d89844]  ; "Unbound"
// asm:   0x1823088ae: mov rax, qword ptr [rip + 0x1d897cb]  ; "Unbound"

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__DirtyValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  bool bVar3;
  Settings_InputKey_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_1843476f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_1843476f1 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
            ((__this->fields)._setting,(MethodInfo *)0x0);
  if ((__this->fields)._setting == (Settings_KeybindSetting_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar1 = (((__this->fields)._setting)->fields).InputKeys;
  if (pSVar1 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    if (Il2CppMethodInitialized_1843476ef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Unbound");
      Il2CppMethodInitialized_1843476ef = '\x01';
    }
    pSVar5 = "Unbound";
    if ((pSVar4 != (Settings_InputKey_o *)0x0) &&
       (bVar3 = Settings_InputKey__IsNone(pSVar4,(MethodInfo *)0x0), pSVar5 = "Unbound", !bVar3))
    {
      pSVar5 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
    }
    pSVar2 = (__this->fields)._setting;
    if ((pSVar2 != (Settings_KeybindSetting_o *)0x0) &&
       (pSVar1 = (pSVar2->fields).InputKeys, pSVar1 != (System_Collections_Generic_List_InputKey__o *)0x0)) {
      pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (Il2CppMethodInitialized_1843476ef == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Unbound");
        Il2CppMethodInitialized_1843476ef = '\x01';
      }
      str2 = "Unbound";
      if ((pSVar4 != (Settings_InputKey_o *)0x0) &&
         (bVar3 = Settings_InputKey__IsNone(pSVar4,(MethodInfo *)0x0), str2 = "Unbound", !bVar3))
      {
        str2 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      }
      pSVar5 = System_String__Concat_1969b70(pSVar5,"|",str2,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$SlotTextKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SlotTextKey (System_String_o* rowId, int32_t slot, const MethodInfo* method);
// 0x182308a60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__SlotTextKey
          (System_String_o *rowId,int32_t slot,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = slot;
  if (Il2CppMethodInitialized_1843476f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".text");
    il2cpp_codegen_initialize_runtime_metadata(&".key.");
    Il2CppMethodInitialized_1843476f2 = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969590
                     (rowId,".key.",pSVar1,".text",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$EnsureSlots
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x182308900
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182308952: mov qword ptr [rsp + 0x30], rbx
// asm:   0x182308957: mov qword ptr [rsp + 0x38], rdi
// asm:   0x18230895c: nop dword ptr [rax]
// asm:   0x1823089f8: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1823089fd: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots
               (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *__this;
  Settings_InputKey_array *pSVar3;
  MethodInfo *pMVar4;
  Settings_InputKey_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_1843476f3 = '\x01';
  }
  if (setting == (Settings_KeybindSetting_o *)0x0) {
    return;
  }
  while (__this = (setting->fields).InputKeys, __this != (System_Collections_Generic_List_InputKey__o *)0x0) {
    if (1 < (__this->fields)._size) {
      return;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
    Settings_InputKey___ctor_1f1d700(__this_00,"None",(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_InputKey_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (Settings_InputKey_array *)0x0) break;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[(int)uVar2] = __this_00;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$<BuildSlots>b__16_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___BuildSlots_b__16_0 (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x182308d40

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow___BuildSlots_b__16_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int slot;
  
  slot = 0;
  do {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__BuildSlot(__this,row,slot,(MethodInfo *)0x0);
    slot = slot + 1;
  } while (slot < 2);
  return;
}


