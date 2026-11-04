// Type: Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgCustomPlaylistRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, System_String_o* id, System_String_o* label, System_String_o* labelKey, System_String_o* stateKey, System_Func_string__o* dirtyValue, const MethodInfo* method);
// 0x181e19af0

void
Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, System_String_o* id, System_String_o* label, System_String_o* labelKey, System_String_o* stateKey, System_Func_string__o* dirtyValue, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,title);
  (__this->fields)._labelKey = titleIcon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey,titleIcon);
  (__this->fields)._stateKey = picker;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,picker);
  (__this->fields)._dirtyValue = saveActionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dirtyValue,saveActionId);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1821ec700

void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t layoutMode;
  System_String_o *id;
  System_String_o *label;
  System_String_o *labelKey;
  System_Func_string__o *dirtyValue;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_a8 [2];
  
  if (Il2CppMethodInitialized_184347084 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    Il2CppMethodInitialized_184347084 = '\x01';
  }
  id = (__this->fields)._id;
  label = (__this->fields)._label;
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl,
             (MethodInfo *)0x0);
  labelKey = (__this->fields)._labelKey;
  pSVar2 = (__this->fields)._searchContext.fields.ScreenTitle;
  pSVar3 = (__this->fields)._searchContext.fields.CategoryId;
  dirtyValue = (__this->fields)._dirtyValue;
  pSVar4 = (__this->fields)._searchContext.fields.CategoryTitle;
  pSVar5 = (__this->fields)._searchContext.fields.GroupId;
  pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
  layoutMode = (__this->fields)._layoutMode;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  local_a8[0].fields.ScreenTitle = pSVar2;
  local_a8[0].fields.CategoryId = pSVar3;
  local_a8[0].fields.CategoryTitle = pSVar4;
  local_a8[0].fields.GroupId = pSVar5;
  local_a8[0].fields.GroupTitle = pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_01,id,label,620.0,(System_Action_AottgUi__o *)__this_00,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
             (System_Nullable_float__o)0x0,labelKey,(System_String_o *)0x0,(System_String_o *)0x0,local_a8,
             dirtyValue,(System_String_o *)0x0,(System_String_o *)0x0,layoutMode,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821e9db0

void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

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


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x181b6a390

void
Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode.fields._overlap_0._at_rgba.rgba = (int32_t)value.fields._overlap_0;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1821ec890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ec902: mov rbp, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_184347085 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._stateKey,(MethodInfo *)0x0);
  if (((!bVar2) && (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
     (__this_00 = (root->fields)._State_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    pSVar1 = (__this->fields)._stateKey;
    value = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText((MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar1,value,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._id;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x1821ec540

void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-custom-playlist-control");
    Il2CppMethodInitialized_184347086 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl_b__14_0
             ,(MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-custom-playlist-control",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$<BuildControl>b__14_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___BuildControl_b__14_0 (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1821ec940

void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___BuildControl_b__14_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  
  if (Il2CppMethodInitialized_184347087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_OpenManagerDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Manage");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"-marquee-field");
    il2cpp_codegen_initialize_runtime_metadata(&"-manage");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.ManagePlaylist");
    Il2CppMethodInitialized_184347087 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl_b__14_1
             ,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50((__this->fields)._id,"-marquee-field",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(38.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,"inputField",(System_Action_AottgUi__o *)__this_00,pSVar1,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_OpenManagerDialog,
               (MethodInfo_1387DC0 *)0x0);
    pSVar1 = System_String__Concat_1969e50((__this->fields)._id,"-manage",(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_18c6e10
                       (row,1,"SettingsPopup.Sound.ManagePlaylist","Manage",
                        (System_Action_GisketchActionContext__o *)__this_01,pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"menuList",
                        (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(150.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(150.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar4);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$<BuildControl>b__14_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___BuildControl_b__14_1 (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x1821eccb0

void Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow___BuildControl_b__14_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  System_String_o *stateKey;
  System_String_o *id;
  System_String_o *fallback;
  Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this_00;
  
  if (Il2CppMethodInitialized_184347088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&"-marquee");
    Il2CppMethodInitialized_184347088 = '\x01';
  }
  id = System_String__Concat_1969e50((__this->fields)._id,"-marquee",(MethodInfo *)0x0);
  stateKey = (__this->fields)._stateKey;
  fallback = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CustomPlaylistText((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText);
  Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor_23b5c40(__this_00,id,stateKey,fallback,(MethodInfo *)0x0);
  if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (field,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


