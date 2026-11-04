// Type: Gisketch.Aottg2UI.Game.AottgGameCreateScreen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___cctor (const MethodInfo* method);
// 0x1823ff3a0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this;
  
  if (Il2CppMethodInitialized_184347e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    Il2CppMethodInitialized_184347e4a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<.cctor>b__5_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c____cctor_b__5_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823f7c00

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c____cctor_b__5_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  if (Il2CppMethodInitialized_184347e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateDescriptionScrollLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    Il2CppMethodInitialized_184347e4b = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar1,true,(pUVar1->klass->vtable)._28_set_ignoreLayout.method);
      UnityEngine_GameObject__AddComponent_object_
                (go,(MethodInfo_6F4D60 *)
                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateDescriptionScrollLayout);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<RefreshImmediately>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___RefreshImmediately_b__13_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823f7ba0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___RefreshImmediately_b__13_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *component;
  
  if (Il2CppMethodInitialized_184347e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e4c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  component = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildContent>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x1823f49e0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-body");
    Il2CppMethodInitialized_184347e4d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__14_1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__14_1 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__14_1,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,"Wrap",28.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,(System_Action_AottgUi__o *)__this_00,"game-create-body",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildContent>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823f4c30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildMain);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-main");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347e4e = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildMain,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,"clear",(System_Action_AottgUi__o *)__this_00,"game-create-main",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandbox>b__38_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x1823f6be0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *source;
  Il2CppObject *object;
  System_String_o *id;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0_o *object_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o *object_01;
  System_Func_StringSetting__bool__o *__this_00;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *tooltip;
  
  if (Il2CppMethodInitialized_184347e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass38_0_BuildSandbox_b__2)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass38_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-preset-name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.ShowVariableNames.Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.preset.load");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-preset-favorite");
    il2cpp_codegen_initialize_runtime_metadata(&"Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.ShowVariableNames");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-save-preset");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.preset.save");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-variable-names");
    il2cpp_codegen_initialize_runtime_metadata(&"Show variable names");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"Save Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-load-preset");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"Display experience rule setting IDs instead of localized labels.");
    Il2CppMethodInitialized_184347e4f = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass38_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f13 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (object_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0_o *)0x0)
  goto label_1823f7456;
  pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _SelectedPresetName_k__BackingField;
  (object_00->fields).presetName = pSVar5;
  Il2CppCodeGenWriteBarrier(&(object_00->fields).presetName,pSVar5);
  bVar3 = System_String__IsNullOrEmpty((object_00->fields).presetName,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Presets","Presets",(MethodInfo *)0x0);
    if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823f7456;
  }
  else {
    if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823f7456;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (actions,(object_00->fields).presetName,"text","game-create-sandbox-preset-name",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar5 = (object_00->fields).presetName;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347ee6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0_IsFavoritePreset_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0);
      Il2CppMethodInitialized_184347ee6 = '\x01';
    }
    object_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object_01,(MethodInfo *)0x0);
    if (object_01 == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o *)0x0)
    goto label_1823f7456;
    (object_01->fields).name = pSVar5;
    Il2CppCodeGenWriteBarrier(&(object_01->fields).name,pSVar5);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).FavoriteSandboxPresets,
       pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0)) goto label_1823f7456;
    source = (pSVar2->fields)._value;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object_01,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0_IsFavoritePreset_b__0
               ,(MethodInfo_B61EB0 *)0x0);
    bVar3 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)__this_00,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    pDVar4 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar4,(Il2CppObject *)object_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass38_0_BuildSandbox_b__2,
               (MethodInfo_1387DC0 *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton
              (actions,"game-create-sandbox-preset-favorite",bVar3,(System_Action_GisketchActionContext__o *)pDVar4,
               (MethodInfo *)0x0);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Presets","Presets",(MethodInfo *)0x0);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (actions,1,pSVar5,"gameCreate.preset.load","game-create-sandbox-load-preset",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",
                      (MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).layout = pGVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout,pGVar8);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Presets.Save","Save Preset",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (actions,1,pSVar5,"gameCreate.preset.save","game-create-sandbox-save-preset",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"save",
                        (MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).layout = pGVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout,pGVar8);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Sandbox.ShowVariableNames","Show variable names",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347df0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347df0 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      id = "game-create-sandbox-variable-names";
      pDVar4 = (DG_Tweening_Core_DOSetter_Color2__o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_3;
      if (pDVar4 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
        pDVar4 = (DG_Tweening_Core_DOSetter_Color2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pDVar4,object,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_3,
                   (MethodInfo_1387DC0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_3 =
             (System_Action_GisketchActionContext__o *)pDVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_3,pDVar4);
      }
      tooltip = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                          ("GameCreate.Sandbox.ShowVariableNames.Tooltip","Display experience rule setting IDs instead of localized labels.",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                         (actions,id,pSVar5,bVar3,(System_Action_GisketchActionContext__o *)pDVar4,
                          (System_String_o *)0x0,tooltip,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).layout = pGVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout,pGVar8);
        return;
      }
    }
  }
label_1823f7456:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandbox>b__38_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823f76f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347e50 = '\x01';
  }
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = System_String__op_Equality
                      ((((context->fields).Node)->fields).value,"true",(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ecf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames = bVar1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandbox>b__38_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* tabId, const MethodInfo* method);
// 0x1823f7460

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *tabId,
               MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar3;
  Settings_IntSetting_o *__this_00;
  uint uVar4;
  bool bVar5;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *a;
  longlong lVar6;
  uint local_res18 [4];
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184347e51 = '\x01';
  }
  local_res18[0] = 0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar5 = System_Int32__TryParse_1b29d60
                    (tabId,7,(System_IFormatProvider_o *)provider,(int32_t *)local_res18,(MethodInfo *)0x0);
  uVar4 = local_res18[0];
  if (bVar5) {
    lVar6 = (longlong)(int)local_res18[0];
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347ece == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
      il2cpp_codegen_initialize_runtime_metadata(&"Weather");
      Il2CppMethodInitialized_184347ece = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if ((bVar5) && (-1 < (int)uVar4)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
      if (pSVar1 != (System_String_array *)0x0) {
        if ((int)pSVar1->max_length <= (int)uVar4) {
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 SandboxSectionsInternal;
        if (pSVar1 != (System_String_array *)0x0) {
          if ((uint)pSVar1->max_length <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          il2cpp_runtime_helper_1823d5ad0(pSVar1->m_Items[lVar6],0);
          a = (System_String_o *)il2cpp_runtime_helper_1823d57c0(0);
          bVar5 = System_String__op_Equality(a,"Weather",(MethodInfo *)0x0);
          if (!bVar5) {
label_1823f7682:
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            local_28.fields.ElementId = (context->fields).ElementId;
            local_28.fields.GameObject = (context->fields).GameObject;
            local_28.fields.Node = (context->fields).Node;
            local_28.fields.InputSource = (context->fields).InputSource;
            local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
            return;
          }
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
          if ((pSVar2 != (Settings_WeatherSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).WeatherSets,
             pSVar3 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
            __this_00 = (pSVar3->fields).SelectedSetIndex;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            lVar6 = il2cpp_runtime_helper_181dd5530(0);
            if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x70) != 0)) &&
               (__this_00 != (Settings_IntSetting_o *)0x0)) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)__this_00,
                         *(int32_t *)(*(longlong *)(lVar6 + 0x70) + 0x1c),
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              goto label_1823f7682;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxGeneral>b__40_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxGeneral_b__40_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* values, const MethodInfo* method);
// 0x1823f59c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxGeneral_b__40_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *values,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_184347e52 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById
            (values,"general.Difficulty",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById
            (values,"general.Weather",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__43_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823f5a40

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-preset-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Spawn distribution");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawn*");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-controls");
    Il2CppMethodInitialized_184347e53 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347df0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = "Spawn distribution";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames !=
      false) {
    pSVar1 = "titan.TitanSpawn*";
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (row,pSVar1,"text","game-create-titans-spawn-preset-label",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    pSVar1 = "clear";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_2;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_2,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_2 =
           (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_2,__this_00)
      ;
    }
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,(System_Action_AottgUi__o *)__this_00,"game-create-titans-spawn-controls",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__43_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* controls, const MethodInfo* method);
// 0x1823f5fe0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *controls,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *value;
  System_String_array *options;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  
  if (Il2CppMethodInitialized_184347e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_OpenTitanSpawn);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Spawns.Config");
    il2cpp_codegen_initialize_runtime_metadata(&"All Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Variety");
    il2cpp_codegen_initialize_runtime_metadata(&"All Abnormals");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Config");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-preset");
    Il2CppMethodInitialized_184347e54 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnPreset((MethodInfo *)0x0);
  options = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar4 = "Default";
  if (options != (System_String_array *)0x0) {
    if ((int)options->max_length != 0) {
      options->m_Items[0] = "Default";
      Il2CppCodeGenWriteBarrier(options->m_Items,pSVar4);
      pSVar4 = "All Normal";
      if (1 < (uint)options->max_length) {
        options->m_Items[1] = "All Normal";
        Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar4);
        pSVar4 = "Variety";
        if (2 < (uint)options->max_length) {
          options->m_Items[2] = "Variety";
          Il2CppCodeGenWriteBarrier(options->m_Items + 2,pSVar4);
          pSVar4 = "All Abnormals";
          if (3 < (uint)options->max_length) {
            options->m_Items[3] = "All Abnormals";
            Il2CppCodeGenWriteBarrier(options->m_Items + 3,pSVar4);
            pSVar4 = "Custom";
            if (4 < (uint)options->max_length) {
              options->m_Items[4] = "Custom";
              Il2CppCodeGenWriteBarrier(options->m_Items + 4,pSVar4);
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
              }
              pSVar4 = "game-create-titans-spawn-preset";
              pDVar1 = (DG_Tweening_Core_DOSetter_Color2__o *)
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_3;
              if (pDVar1 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
                }
                object = (Il2CppObject *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
                pDVar1 = (DG_Tweening_Core_DOSetter_Color2__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor
                          (pDVar1,object,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_3
                           ,(MethodInfo_1387DC0 *)0x0);
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_3 =
                     (System_Action_GisketchActionContext__o *)pDVar1;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_3,
                           pDVar1);
              }
              if (controls != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_18c7b80
                                   (controls,pSVar4,value,options,
                                    (System_Action_GisketchActionContext__o *)pDVar1,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,
                                    (MethodInfo *)0x0);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
                if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar2->fields).layout = pGVar3;
                  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar3);
                  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                     ("GameCreate.Sandbox.Titans.Spawns.Config","Config",(MethodInfo *)0x0);
                  pDVar1 = (DG_Tweening_Core_DOSetter_Color2__o *)
                           il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                  System_Action_GisketchActionContext____ctor
                            (pDVar1,(Il2CppObject *)0x0,
                             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_OpenTitanSpawn,
                             (MethodInfo_1387DC0 *)0x0);
                  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                                     (controls,1,pSVar4,(System_Action_GisketchActionContext__o *)pDVar1,
                                      "game-create-titans-spawn-custom",(System_String_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                      "gear",(MethodInfo *)0x0);
                  width = Gisketch_Aottg2UI_Code_AottgUi__Points(120.0,(MethodInfo *)0x0);
                  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    (pGVar2->fields).layout = pGVar3;
                    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar3);
                    return;
                  }
                }
              }
              goto label_1823f644f;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1823f644f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__43_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823f6460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f64ca: mov rdi, qword ptr [rip + 0x1cb167f]  ; "Default"

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  bool bVar1;
  System_String_o *preset;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184347e55 = '\x01';
  }
  preset = "Default";
  if ((context->fields).Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    preset = (((context->fields).Node)->fields).value;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset(preset,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(preset,"Custom",(MethodInfo *)0x0);
  if (bVar1) {
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown
              (&local_28,"game-create-titans-spawn-custom",(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__43_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x1823f5d60

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-armor");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health");
    Il2CppMethodInitialized_184347e56 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar2 = "clear";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_4;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_4,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_4 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_4,pUVar3);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar2,(System_Action_AottgUi__o *)pUVar3,"game-create-titans-armor",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    pSVar2 = "clear";
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_5;
    if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,pIVar1,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_5,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_5 =
           (System_Action_AottgUi__o *)pUVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_5,pUVar3);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar2,(System_Action_AottgUi__o *)pUVar3,"game-create-titans-health",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__43_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_4 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* armor, const MethodInfo* method);
// 0x1823f6570

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_4
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *armor,MethodInfo *method)

{
  bool bVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  
  if (Il2CppMethodInitialized_184347e57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorCrawlerEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanChanceWarded");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmor");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-armor-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-warded-fields");
    Il2CppMethodInitialized_184347e57 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanArmorEnabled(armor,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanArmorEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    bVar1 = (pSVar4->fields)._value;
    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    pSVar5 = "titan.TitanArmorCrawlerEnabled";
    if (pSVar6 != (System_String_array *)0x0) {
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = "titan.TitanArmorCrawlerEnabled";
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar5);
        pSVar5 = "titan.TitanArmor";
        if (1 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[1] = "titan.TitanArmor";
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar5);
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                    (armor,"game-create-titans-armor-fields",bVar1,pSVar6,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanWardedEnabled(armor,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
              (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
             (pSVar4 = (pSVar3->fields).TitanWardedEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
            bVar1 = (pSVar4->fields)._value;
            pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
            pSVar5 = "titan.TitanChanceWarded";
            if (pSVar6 != (System_String_array *)0x0) {
              if ((int)pSVar6->max_length != 0) {
                pSVar6->m_Items[0] = "titan.TitanChanceWarded";
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar5);
                Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                          (armor,"game-create-titans-warded-fields",bVar1,pSVar6,(MethodInfo *)0x0);
                return;
              }
              goto label_1823f67ee;
            }
          }
          goto label_1823f67e8;
        }
      }
label_1823f67ee:
      ThrowIndexOutOfRangeException();
    }
  }
label_1823f67e8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__43_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_5 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* health, const MethodInfo* method);
// 0x1823f6800

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__43_5
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *health,MethodInfo *method)

{
  int iVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool enabled;
  System_String_o *pSVar5;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_array *fieldIds;
  
  if (Il2CppMethodInitialized_184347e58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMax");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMin");
    Il2CppMethodInitialized_184347e58 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Health enabled");
    Il2CppMethodInitialized_184347e19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanHealthMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar4->fields)._value;
    __this_00 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
              (health,"Health enabled","game-create-titans-health-enabled",iVar1 != 0,
               (System_Action_bool__o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).TitanHealthMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      enabled = (pSVar4->fields)._value != 0;
      if (Il2CppMethodInitialized_184347e18 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0_BuildTitanHealthMode_b__0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0);
        il2cpp_codegen_initialize_runtime_metadata(&"clear");
        il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode-row");
        Il2CppMethodInitialized_184347e18 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o *)0x0) {
        (object->fields).enabled = enabled;
        __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_01,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0_BuildTitanHealthMode_b__0
                   ,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
        if (health != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (health,"clear",(System_Action_AottgUi__o *)__this_01,"game-create-titans-health-mode-row",
                     layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          fieldIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          pSVar5 = "titan.TitanHealthMin";
          if (fieldIds != (System_String_array *)0x0) {
            if ((int)fieldIds->max_length != 0) {
              fieldIds->m_Items[0] = "titan.TitanHealthMin";
              Il2CppCodeGenWriteBarrier(fieldIds->m_Items,pSVar5);
              pSVar5 = "titan.TitanHealthMax";
              if (1 < (uint)fieldIds->max_length) {
                fieldIds->m_Items[1] = "titan.TitanHealthMax";
                Il2CppCodeGenWriteBarrier(fieldIds->m_Items + 1,pSVar5);
                Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                          (health,"game-create-titans-health-fields",enabled,fieldIds,(MethodInfo *)0x0);
                return;
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanHealthMode>b__45_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanHealthMode_b__45_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823f78d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanHealthMode_b__45_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_IntSetting_o *__this_00;
  bool bVar3;
  int32_t value;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Scaled");
    Il2CppMethodInitialized_184347e59 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) goto label_1823f7a10;
  __this_00 = (pSVar2->fields).TitanHealthMode;
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_1823f79ba:
    value = 1;
  }
  else {
    bVar3 = System_String__op_Equality
                      ((((context->fields).Node)->fields).value,"Scaled",(MethodInfo *)0x0);
    value = 2;
    if (!bVar3) goto label_1823f79ba;
  }
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
    return;
  }
label_1823f7a10:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanArmorEnabled>b__47_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanArmorEnabled_b__47_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, bool enabled, const MethodInfo* method);
// 0x1823f7810

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanArmorEnabled_b__47_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,bool enabled,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184347e5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347e5a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).TitanArmorEnabled, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,enabled,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanWardedEnabled>b__48_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanWardedEnabled_b__48_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, bool enabled, const MethodInfo* method);
// 0x1823f7a20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanWardedEnabled_b__48_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,bool enabled,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184347e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347e5b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).TitanWardedEnabled, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,enabled,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildMultiplayerRoom>b__59_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildMultiplayerRoom_b__59_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x1823f52b0

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildMultiplayerRoom_b__59_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347e5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    Il2CppMethodInitialized_184347e5c = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    bVar1 = System_String__op_Inequality
                      ((field->fields)._Id_k__BackingField,"misc.VoiceChat",(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__62_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__62_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* managers, const MethodInfo* method);
// 0x1823f5300

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__62_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *managers,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar3;
  
  if (Il2CppMethodInitialized_184347e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Maps.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"Import, edit, or delete custom logic.");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-custom-addons");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"menuGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-custom-maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"wrench");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-custom-logic");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Logic.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"Import, edit, or delete custom maps.");
    il2cpp_codegen_initialize_runtime_metadata(&"Import, edit, or delete custom addons.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Addons.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openAddonsManager");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openMapsManager");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openLogicManager");
    Il2CppMethodInitialized_184347e5d = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Custom.Maps","Maps",(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Custom.Maps.Description","Import, edit, or delete custom maps.",(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)
  ;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
            (pGVar3,"game-create-root-custom-maps",pSVar1,pSVar2,"gameCreate.custom.openMapsManager","menuGrid",0,
             (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
  if (managers != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (managers,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar3,(MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.Logic","Logic",(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.Logic.Description","Import, edit, or delete custom logic.",(MethodInfo *)0x0);
    pGVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
              (pGVar3,"game-create-root-custom-logic",pSVar1,pSVar2,"gameCreate.custom.openLogicManager","wrench",1,
               (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (managers,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar3,(MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.Addons","Addons",(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.Addons.Description","Import, edit, or delete custom addons.",(MethodInfo *)0x0);
    pGVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
              (pGVar3,"game-create-root-custom-addons",pSVar1,pSVar2,"gameCreate.custom.openAddonsManager","plus",2,
               (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (managers,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar3,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__62_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__62_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x1823f5600

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__62_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347e5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.export");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-import");
    il2cpp_codegen_initialize_runtime_metadata(&"export");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Export");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-export");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Import");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.import");
    Il2CppMethodInitialized_184347e5e = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("Common.Import","Import",(MethodInfo *)0x0);
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (actions,1,pSVar1,"gameCreate.import","game-create-sandbox-import",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"import",
               (MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("Common.Export","Export",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (actions,1,pSVar1,"gameCreate.export","game-create-sandbox-export",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"export",
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__62_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__62_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x1823f5760

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__62_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347e5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Open Custom Maps Folder");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenLogicFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"Open Custom Addons Folder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openLogsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenAddonsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"Open Custom Logic Folder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openAddonsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-addons-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openLogicFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenLogsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenMapsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-logic-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"Open Game Logs");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-logs-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openMapsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-maps-folder");
    Il2CppMethodInitialized_184347e5f = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Custom.OpenLogicFolder","Open Custom Logic Folder",(MethodInfo *)0x0);
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (actions,1,pSVar1,"gameCreate.custom.openLogicFolder","game-create-sandbox-open-logic-folder",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",
               (MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.OpenMapsFolder","Open Custom Maps Folder",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (actions,1,pSVar1,"gameCreate.custom.openMapsFolder","game-create-sandbox-open-maps-folder",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",
               (MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.OpenAddonsFolder","Open Custom Addons Folder",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (actions,1,pSVar1,"gameCreate.custom.openAddonsFolder","game-create-sandbox-open-addons-folder",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",
               (MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Sandbox.Custom.OpenLogsFolder","Open Game Logs",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (actions,1,pSVar1,"gameCreate.custom.openLogsFolder","game-create-sandbox-open-logs-folder",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildFooter>b__63_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildFooter_b__63_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x1823f4de0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f4f1c: mov r8, qword ptr [rip + 0x1cbcbe5]  ; "Start"
// asm:   0x1823f4f23: mov r9, qword ptr [rip + 0x1cf92ce]  ; "gameCreate.start"

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildFooter_b__63_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  int iVar1;
  Settings_ExperienceRuleResult_o *result;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *pSVar4;
  System_String_o *actionId;
  System_Nullable_bool__Fields local_res20 [4];
  
  if (Il2CppMethodInitialized_184347e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Start");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-start");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.restart");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Restart");
    il2cpp_codegen_initialize_runtime_metadata(&"Start");
    il2cpp_codegen_initialize_runtime_metadata(&"Restart");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelFooterPrimaryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.start");
    Il2CppMethodInitialized_184347e60 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347c45 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347c45 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    iVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _LaunchContext_k__BackingField;
    pSVar4 = "Start";
    actionId = "gameCreate.start";
    if (iVar1 == 2) {
      pSVar4 = "Restart";
      actionId = "gameCreate.restart";
    }
    if (footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (footer,0,pSVar4,actionId,"game-create-start",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    pSVar4 = "Common.Start";
    if (iVar1 == 2) {
      pSVar4 = "Common.Restart";
    }
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar3->fields).textKey = pSVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey,pSVar4);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347eb2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
      Il2CppMethodInitialized_184347eb2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured((MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = true;
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347f11 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347f11 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        result = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _RuleResult_k__BackingField;
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar2 = Settings_ExperienceRuleEngine__Validate(result,(MethodInfo *)0x0);
      }
    }
    else {
      bVar2 = false;
    }
    local_res20[0].hasValue = false;
    local_res20[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res20,bVar2,MethodInfo_System_Nullable_bool_ctor);
    (pGVar3->fields).enabled.fields = local_res20[0];
    (pGVar3->fields).style = "brushSidePanelFooterPrimaryButton";
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style,"brushSidePanelFooterPrimaryButton");
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (pGVar3->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildLockedFields>b__66_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildLockedFields_b__66_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823f51b0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildLockedFields_b__66_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347e61 = '\x01';
  }
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = System_String__op_Equality
                      ((((context->fields).Node)->fields).value,"true",(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f14 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings = bVar1;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildVariantSelector>b__73_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildVariantSelector_b__73_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823f7ae0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildVariantSelector_b__73_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *variant;
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e62 = '\x01';
  }
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar1 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    ppSVar1 = &(((context->fields).Node)->fields).value;
  }
  variant = *ppSVar1;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectVariant(variant,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* browser, const MethodInfo* method);
// 0x1823f7c80

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *browser,MethodInfo *method)

{
  System_String_array *pSVar1;
  il2cpp_array_size_t iVar2;
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this_01;
  
  if (Il2CppMethodInitialized_184347e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-grid");
    Il2CppMethodInitialized_184347e63 = '\x01';
  }
  id = "game-create-category-grid";
  pSVar1 = (__this->fields).categories;
  if (pSVar1 != (System_String_array *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
    iVar2 = pSVar1->max_length;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__1
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
    Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
              (__this_01,id,(int)iVar2 + 1,360.0,14.0,(System_Action_AottgUi__o *)__this_00,false,0.0,
               (MethodInfo *)0x0);
    if (browser != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (browser,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* choices, const MethodInfo* method);
// 0x1823f7dc0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f7ecb: nop dword ptr [rax + rax]
// asm:   0x1823f8019: mov rbx, qword ptr [rip + 0x1ca3de8]  ; "Data/ExperiencePreview/CasualPreview"
// asm:   0x1823f8020: jmp 0x1823f8064
// asm:   0x1823f8038: mov rbx, qword ptr [rip + 0x1ca3ea9]  ; "Data/ExperiencePreview/CompetitivePreview"
// asm:   0x1823f803f: jmp 0x1823f8064
// asm:   0x1823f80e5: jmp 0x1823f7ed0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *choices,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *a;
  uint index;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar5;
  System_String_o *pSVar6;
  System_String_o *previewSprite;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a favorite experience or Sandbox preset.");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.category");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"Browse {0} experiences.");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Browse");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites");
    Il2CppMethodInitialized_184347e64 = '\x01';
  }
  pSVar1 = (__this->fields).categories;
  local_res8[0] = 0;
  do {
    if (pSVar1 == (System_String_array *)0x0) {
label_1823f81bf:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= (int)local_res8[0]) {
      pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Favorites","Favorites",(MethodInfo *)0x0);
      pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Favorites.Description","Choose a favorite experience or Sandbox preset.",(MethodInfo *)0x0);
      pSVar1 = (__this->fields).categories;
      if (pSVar1 != (System_String_array *)0x0) {
        pGVar5 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                  (pGVar5,"game-create-root-favorites",pSVar3,pSVar6,"gameCreate.open.favorites","star",
                   (int32_t)pSVar1->max_length,(System_String_o *)0x0,
                   (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
        if (choices != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (choices,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1823f81bf;
    }
    pSVar3 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("game-create-category-",pSVar3,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).categories;
    if (pSVar1 == (System_String_array *)0x0) goto label_1823f81bf;
    if ((uint)pSVar1->max_length <= local_res8[0]) {
label_1823f81c5:
      ThrowIndexOutOfRangeException();
    }
    pSVar6 = pSVar1->m_Items[(int)local_res8[0]];
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Categories.Browse","Browse {0} experiences.",(MethodInfo *)0x0);
    pSVar1 = (__this->fields).categories;
    if (pSVar1 == (System_String_array *)0x0) goto label_1823f81bf;
    if ((uint)pSVar1->max_length <= local_res8[0]) goto label_1823f81c5;
    pSVar4 = System_String__Format
                       (pSVar4,(Il2CppObject *)pSVar1->m_Items[(int)local_res8[0]],(MethodInfo *)0x0);
    index = local_res8[0];
    pSVar1 = (__this->fields).categories;
    if (pSVar1 == (System_String_array *)0x0) goto label_1823f81bf;
    if ((uint)pSVar1->max_length <= local_res8[0]) goto label_1823f81c5;
    a = pSVar1->m_Items[(int)local_res8[0]];
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    if (Il2CppMethodInitialized_184347dfc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Casual");
      il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/PVPPreview");
      il2cpp_codegen_initialize_runtime_metadata(&"PVP");
      il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/CompetitivePreview");
      il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
      il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/GeneralPreview");
      il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/CasualPreview");
      Il2CppMethodInitialized_184347dfc = '\x01';
    }
    bVar2 = System_String__op_Equality(a,"Casual",(MethodInfo *)0x0);
    previewSprite = "Data/ExperiencePreview/CasualPreview";
    if (((!bVar2) &&
        (bVar2 = System_String__op_Equality(a,"Competitive",(MethodInfo *)0x0),
        previewSprite = "Data/ExperiencePreview/CompetitivePreview", !bVar2)) &&
       (bVar2 = System_String__op_Equality(a,"PVP",(MethodInfo *)0x0),
       previewSprite = "Data/ExperiencePreview/GeneralPreview", bVar2)) {
      previewSprite = "Data/ExperiencePreview/PVPPreview";
    }
    pGVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
              (pGVar5,pSVar3,pSVar6,pSVar4,"gameCreate.select.category","menuList",index,previewSprite,
               (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (choices == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823f81bf;
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (choices,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar5,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).categories;
    local_res8[0] = local_res8[0] + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass18_0$$<BuildSubcategories>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___BuildSubcategories_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x1823f81d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f83f0: jmp 0x1823f8283

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___BuildSubcategories_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  System_String_array *pSVar1;
  uint index;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this_00;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Subcategories.Browse");
    il2cpp_codegen_initialize_runtime_metadata(&"Browse {0} modes.");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.subcategory");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    Il2CppMethodInitialized_184347e65 = '\x01';
  }
  pSVar1 = (__this->fields).subcategories;
  local_res8[0] = 0;
  while (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length <= (int)local_res8[0]) {
      return;
    }
    pSVar2 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("game-create-subcategory-",pSVar2,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).subcategories;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((uint)pSVar1->max_length <= local_res8[0]) {
label_1823f842a:
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = pSVar1->m_Items[(int)local_res8[0]];
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryLabel(pSVar3,(MethodInfo *)0x0);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Subcategories.Browse","Browse {0} modes.",(MethodInfo *)0x0);
    pSVar1 = (__this->fields).subcategories;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((uint)pSVar1->max_length <= local_res8[0]) goto label_1823f842a;
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryLabel
                       (pSVar1->m_Items[(int)local_res8[0]],(MethodInfo *)0x0);
    pSVar4 = System_String__Format(pSVar4,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    index = local_res8[0];
    pSVar1 = (__this->fields).subcategories;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((uint)pSVar1->max_length <= local_res8[0]) goto label_1823f842a;
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryPreview
                       (pSVar1->m_Items[(int)local_res8[0]],(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
              (__this_00,pSVar2,pSVar3,pSVar4,"gameCreate.select.subcategory","open",index,pSVar5,
               (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (grid == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (grid,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    local_res8[0] = local_res8[0] + 1;
    pSVar1 = (__this->fields).subcategories;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass20_0$$<BuildExperiences>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___BuildExperiences_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x1823f8430
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f84bd: nop dword ptr [rax]
// asm:   0x1823f85a2: jmp 0x1823f84c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___BuildExperiences_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  Map_Experience_array *pMVar1;
  Map_Experience_o *pMVar2;
  System_String_o *title;
  System_String_o *description;
  System_String_o *previewSprite;
  uint index;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this_00;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.experience");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonStart");
    Il2CppMethodInitialized_184347e66 = '\x01';
  }
  pMVar1 = (__this->fields).experiences;
  local_res8[0] = 0;
  while (pMVar1 != (Map_Experience_array *)0x0) {
    if ((int)pMVar1->max_length <= (int)local_res8[0]) {
      return;
    }
    pMVar1 = (__this->fields).experiences;
    if (pMVar1 == (Map_Experience_array *)0x0) break;
    if ((uint)pMVar1->max_length <= local_res8[0]) {
      ThrowIndexOutOfRangeException();
    }
    pMVar2 = pMVar1->m_Items[(int)local_res8[0]];
    pSVar3 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("game-create-experience-",pSVar3,(MethodInfo *)0x0);
    index = local_res8[0];
    if (pMVar2 == (Map_Experience_o *)0x0) break;
    title = (pMVar2->fields).Name;
    description = (pMVar2->fields).Description;
    previewSprite = (pMVar2->fields).Preview;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
              (__this_00,pSVar3,title,description,"gameCreate.select.experience","buttonStart",index,
               previewSprite,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (grid == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (grid,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    local_res8[0] = local_res8[0] + 1;
    pMVar1 = (__this->fields).experiences;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_0$$<BuildFavoriteChoices>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___BuildFavoriteChoices_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x1823f85f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f86df: nop 
// asm:   0x1823f8877: jmp 0x1823f86e0
// asm:   0x1823f8a3d: jmp 0x1823f8a73

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___BuildFavoriteChoices_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  bool bVar1;
  Map_Experience_array *pMVar2;
  Map_Experience_o *pMVar3;
  System_String_array *pSVar4;
  System_String_o *a;
  il2cpp_array_size_t iVar5;
  uint uVar6;
  bool bVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *object;
  System_String_o *pSVar8;
  System_Action_o *pSVar9;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *object_00;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *b;
  uint local_res20 [2];
  uint local_58 [2];
  Map_Experience_o *local_50;
  System_String_o *local_48;
  
  if (Il2CppMethodInitialized_184347e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1_BuildFavoriteChoices_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2_BuildFavoriteChoices_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorite-experience-");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox preset");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.SandboxPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorite-preset-");
    Il2CppMethodInitialized_184347e67 = '\x01';
  }
  pMVar2 = (__this->fields).experiences;
  local_res20[0] = 0;
  local_58[0] = 0;
  while (pMVar2 != (Map_Experience_array *)0x0) {
    if ((int)pMVar2->max_length <= (int)local_58[0]) {
      pSVar4 = (__this->fields).presets;
      local_res20[0] = 0;
      goto joined_r0x0001823f888c;
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).experiences;
    if (pMVar2 == (Map_Experience_array *)0x0) break;
    if ((uint)pMVar2->max_length <= local_58[0]) goto label_1823f8a79;
    if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *)0x0) break;
    pMVar3 = pMVar2->m_Items[(int)local_58[0]];
    (object->fields).experience = pMVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).experience,pMVar3);
    pSVar8 = System_Int32__ToString((int32_t *)local_58,(MethodInfo *)0x0);
    local_48 = System_String__Concat_1969e50("game-create-favorite-experience-",pSVar8,(MethodInfo *)0x0);
    uVar6 = local_58[0];
    pMVar3 = (object->fields).experience;
    if (pMVar3 == (Map_Experience_o *)0x0) break;
    pSVar8 = (pMVar3->fields).Name;
    pSVar10 = (pMVar3->fields).Description;
    pSVar11 = (pMVar3->fields).Preview;
    bVar1 = (__this->fields).compact;
    local_50 = pMVar3;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0e = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pMVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _Experience_k__BackingField;
    pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar9,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1_BuildFavoriteChoices_b__1
               ,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice
              (grid,local_48,pSVar8,pSVar10,pSVar11,uVar6,bVar1,local_50 == pMVar3,pSVar9,(MethodInfo *)0x0);
    local_58[0] = local_58[0] + 1;
    pMVar2 = (__this->fields).experiences;
  }
label_1823f8a73:
  ThrowNullReferenceException();
joined_r0x0001823f888c:
  if (pSVar4 == (System_String_array *)0x0) goto label_1823f8a73;
  if ((int)pSVar4->max_length <= (int)local_res20[0]) {
    return;
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).presets;
  if (pSVar4 == (System_String_array *)0x0) goto label_1823f8a73;
  if ((uint)pSVar4->max_length <= local_res20[0]) {
label_1823f8a79:
    ThrowIndexOutOfRangeException();
  }
  if (object_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *)0x0)
  goto label_1823f8a73;
  pSVar8 = pSVar4->m_Items[(int)local_res20[0]];
  (object_00->fields).preset = pSVar8;
  Il2CppCodeGenWriteBarrier(&(object_00->fields).preset,pSVar8);
  pSVar8 = System_Int32__ToString((int32_t *)local_res20,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50("game-create-favorite-preset-",pSVar8,(MethodInfo *)0x0);
  pSVar8 = (object_00->fields).preset;
  pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                      ("GameCreate.Favorites.SandboxPreset","Sandbox preset",(MethodInfo *)0x0);
  uVar6 = local_res20[0];
  pMVar2 = (__this->fields).experiences;
  if (pMVar2 == (Map_Experience_array *)0x0) goto label_1823f8a73;
  bVar1 = (__this->fields).compact;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  iVar5 = pMVar2->max_length;
  if (bVar7) {
    a = (object_00->fields).preset;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    b = (System_String_o *)il2cpp_runtime_helper_1823d5810(0);
    bVar7 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  }
  else {
    bVar7 = false;
  }
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar9,(Il2CppObject *)object_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2_BuildFavoriteChoices_b__2
             ,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice
            (grid,pSVar10,pSVar8,pSVar11,(System_String_o *)0x0,(int)iVar5 + uVar6,bVar1,bVar7,pSVar9,
             (MethodInfo *)0x0);
  pSVar4 = (__this->fields).presets;
  local_res20[0] = local_res20[0] + 1;
  goto joined_r0x0001823f888c;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_1$$<BuildFavoriteChoices>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___BuildFavoriteChoices_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x1823f8a80

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___BuildFavoriteChoices_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *__this,
               MethodInfo *method)

{
  Map_Experience_o *experience;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e68 = '\x01';
  }
  experience = (__this->fields).experience;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eca = '\x01';
  }
  if (experience != (Map_Experience_o *)0x0) {
    pSVar1 = (experience->fields).Category;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f16 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Category_k__BackingField,pSVar1);
    pSVar1 = (experience->fields).SubCategory;
    if (Il2CppMethodInitialized_184347f17 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f17 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
         pSVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Subcategory_k__BackingField,pSVar1);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
              (experience,(Settings_InGameSet_o *)0x0,(System_String_o *)0x0,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_2$$<BuildFavoriteChoices>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___BuildFavoriteChoices_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o* __this, const MethodInfo* method);
// 0x1823f8bf0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___BuildFavoriteChoices_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"Unable to load favorite game preset: ");
    Il2CppMethodInitialized_184347e69 = '\x01';
  }
  pSVar2 = (__this->fields).preset;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = System_String__Concat_1969e50("Unable to load favorite game preset: ",(__this->fields).preset,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass25_0$$<BuildFavoriteChoice>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___BuildFavoriteChoice_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823f8ca0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___BuildFavoriteChoice_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_Action_o *pSVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e6a = '\x01';
  }
  pSVar1 = (__this->fields).select;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass26_0$$<BuildCategorySelector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___BuildCategorySelector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* selector, const MethodInfo* method);
// 0x1823f8d30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f8dfb: mov r13d, 5
// asm:   0x1823f8f6c: jmp 0x1823f8e01

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___BuildCategorySelector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *selector,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *icon;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int32_t variant;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.category");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites");
    Il2CppMethodInitialized_184347e6b = '\x01';
  }
  pSVar1 = (__this->fields).categories;
  local_res8[0] = 0;
  do {
    if (pSVar1 == (System_String_array *)0x0) {
label_1823f90cb:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= (int)local_res8[0]) {
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Favorites","Favorites",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f0d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f0d = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _ShowFavorites_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      icon = "star";
      pSVar3 = "gameCreate.open.favorites";
      pSVar4 = "game-create-root-favorites";
      if (Il2CppMethodInitialized_184347e0c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        Il2CppMethodInitialized_184347e0c = '\x01';
      }
      variant = 0;
      if (bVar2 == false) {
        variant = 5;
      }
      if ((selector != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (selector,variant,pSVar5,pSVar3,pSVar4,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0)
         , pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar6->fields).clip = true;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)0x0);
        (pGVar6->fields).layout = value;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout,value);
        return;
      }
      goto label_1823f90cb;
    }
    pSVar1 = (__this->fields).categories;
    if (pSVar1 == (System_String_array *)0x0) goto label_1823f90cb;
    if ((uint)pSVar1->max_length <= local_res8[0]) {
label_1823f90d1:
      ThrowIndexOutOfRangeException();
    }
    pSVar5 = pSVar1->m_Items[(int)local_res8[0]];
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0d = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField
        == false) {
      pSVar1 = (__this->fields).categories;
      if (pSVar1 == (System_String_array *)0x0) goto label_1823f90cb;
      if ((uint)pSVar1->max_length <= local_res8[0]) goto label_1823f90d1;
      pSVar4 = pSVar1->m_Items[(int)local_res8[0]];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar3 = (System_String_o *)il2cpp_runtime_helper_181dd54e0(0);
      bVar2 = System_String__Equals_196c550(pSVar4,pSVar3,5,(MethodInfo *)0x0);
    }
    else {
      bVar2 = false;
    }
    pSVar4 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50("game-create-category-",pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice
              (selector,pSVar5,bVar2,"gameCreate.select.category",pSVar4,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).categories;
    local_res8[0] = local_res8[0] + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$<BuildExperienceSelector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___BuildExperienceSelector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823f90e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f916f: nop 
// asm:   0x1823f931a: jmp 0x1823f9170

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___BuildExperienceSelector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *text;
  Map_Experience_o *pMVar1;
  Map_Experience_o *pMVar2;
  System_String_o *actionId;
  Map_Experience_array *pMVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  int32_t variant;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.experience");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-");
    Il2CppMethodInitialized_184347e6c = '\x01';
  }
  pMVar3 = (__this->fields).experiences;
  local_res8[0] = 0;
  if (pMVar3 != (Map_Experience_array *)0x0) {
    while( true ) {
      if ((int)pMVar3->max_length <= (int)local_res8[0]) {
        return;
      }
      pMVar3 = (__this->fields).experiences;
      if (pMVar3 == (Map_Experience_array *)0x0) break;
      if ((uint)pMVar3->max_length <= local_res8[0]) {
        ThrowIndexOutOfRangeException();
      }
      if (pMVar3->m_Items[(int)local_res8[0]] == (Map_Experience_o *)0x0) break;
      text = (pMVar3->m_Items[(int)local_res8[0]]->fields).Name;
      pMVar1 = pMVar3->m_Items[(int)local_res8[0]];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f0e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f0e = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pMVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Experience_k__BackingField;
      pSVar4 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50("game-create-experience-",pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      actionId = "gameCreate.select.experience";
      if (Il2CppMethodInitialized_184347e0c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        Il2CppMethodInitialized_184347e0c = '\x01';
      }
      variant = 2;
      if (pMVar1 != pMVar2) {
        variant = 5;
      }
      if ((row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
         (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (row,variant,text,actionId,pSVar4,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0),
         pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) break;
      (pGVar5->fields).clip = true;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)0x0);
      (pGVar5->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar6);
      pGVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout((MethodInfo *)0x0);
      (pGVar5->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar6);
      pMVar3 = (__this->fields).experiences;
      local_res8[0] = local_res8[0] + 1;
      if (pMVar3 == (Map_Experience_array *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass30_0$$<BuildCompactRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0___BuildCompactRow_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823f9360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f93ca: nop word ptr [rax + rax]
// asm:   0x1823f953f: jmp 0x1823f93d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0___BuildCompactRow_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *text;
  System_String_o *actionId;
  bool bVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_array *pSVar6;
  int32_t variant;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e6d = '\x01';
  }
  pSVar6 = (__this->fields).values;
  local_res8[0] = 0;
  if (pSVar6 != (System_String_array *)0x0) {
    while( true ) {
      if ((int)pSVar6->max_length <= (int)local_res8[0]) {
        return;
      }
      pSVar6 = (__this->fields).values;
      if (pSVar6 == (System_String_array *)0x0) break;
      if ((uint)pSVar6->max_length <= local_res8[0]) {
        ThrowIndexOutOfRangeException();
      }
      text = pSVar6->m_Items[(int)local_res8[0]];
      bVar2 = System_String__Equals_196c550
                        (pSVar6->m_Items[(int)local_res8[0]],(__this->fields).selected,5,(MethodInfo *)0x0);
      actionId = (__this->fields).actionId;
      pSVar3 = (__this->fields).itemPrefix;
      str1 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50(pSVar3,str1,(MethodInfo *)0x0);
      iVar1 = (__this->fields).selectedVariant;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_184347e0c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        Il2CppMethodInitialized_184347e0c = '\x01';
      }
      variant = 5;
      if (bVar2) {
        variant = iVar1;
      }
      if ((row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
         (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (row,variant,text,actionId,pSVar3,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0),
         pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) break;
      (pGVar4->fields).clip = true;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)0x0);
      (pGVar4->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar5);
      if ((__this->fields).carousel != false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pGVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout((MethodInfo *)0x0);
        (pGVar4->fields).layout = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar5);
      }
      pSVar6 = (__this->fields).values;
      local_res8[0] = local_res8[0] + 1;
      if (pSVar6 == (System_String_array *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass30_0$$<BuildCompactRow>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0___BuildCompactRow_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823f9580

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0___BuildCompactRow_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o *__this,
               System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550(value,(__this->fields).selected,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* context, const MethodInfo* method);
// 0x1823f95a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f981f: mov rcx, r15

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *context,MethodInfo *method)

{
  Map_Experience_o *pMVar1;
  System_String_o *pSVar2;
  System_String_o *style;
  System_String_o *value;
  bool bVar3;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184347e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-description");
    il2cpp_codegen_initialize_runtime_metadata(&"OFFICIAL EXPERIENCE");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-eyebrow");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-heading");
    Il2CppMethodInitialized_184347e6e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  value = "GameCreate.Configuration.Title";
  style = "subtext";
  pSVar2 = "game-create-configuration-eyebrow";
  text = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                   ("GameCreate.Configuration.Title","OFFICIAL EXPERIENCE",(MethodInfo *)0x0);
  if (context != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    value_00 = (System_String_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (context,text,style,pSVar2,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).textKey = value;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,value);
      pSVar2 = "clear";
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
      if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__1
                   ,(MethodInfo *)0x0);
        (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
      }
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (context,pSVar2,(System_Action_AottgUi__o *)__this_00,"game-create-configuration-heading",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((__this->fields).experience != (Map_Experience_o *)0x0) {
        value_00 = (((__this->fields).experience)->fields).Description;
      }
      bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if (!bVar3) {
        pMVar1 = (__this->fields).experience;
        if (pMVar1 == (Map_Experience_o *)0x0) goto label_1823f987f;
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (context,(pMVar1->fields).Description,"text","game-create-configuration-description",
                   (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823f987f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* heading, const MethodInfo* method);
// 0x1823f9890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f991f: mov rdx, qword ptr [rip + 0x1ce20c2]  ; "Experience settings"

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *heading,MethodInfo *method)

{
  Map_Experience_o *value;
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *source;
  bool favorite;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o *object;
  System_Func_StringSetting__bool__o *__this_00;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-favorite");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Experience settings");
    Il2CppMethodInitialized_184347e6f = '\x01';
  }
  pSVar3 = "Experience settings";
  if ((__this->fields).experience != (Map_Experience_o *)0x0) {
    pSVar3 = (((__this->fields).experience)->fields).Name;
  }
  if (heading != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (heading,pSVar3,"header","game-create-configuration-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((__this->fields).experience == (Map_Experience_o *)0x0) {
      return;
    }
    value = (__this->fields).experience;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347ee5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0_IsFavorite_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0);
      Il2CppMethodInitialized_184347ee5 = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
    if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o *)0x0) {
      (object->fields).experience = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).experience,value);
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).FavoriteExperiences,
         pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) {
        source = (pSVar2->fields)._value;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0_IsFavorite_b__0
                   ,(MethodInfo_B61EB0 *)0x0);
        favorite = System_Linq_Enumerable__Any_object__6b6920
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              (System_Func_TSource__bool__o *)__this_00,
                              (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
        pSVar3 = "game-create-configuration-favorite";
        __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__2;
        if (__this_01 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
          __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__2
                     ,(MethodInfo_1387DC0 *)0x0);
          (__this->fields).__9__2 = (System_Action_GisketchActionContext__o *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,__this_01);
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton
                  (heading,pSVar3,favorite,(System_Action_GisketchActionContext__o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x1823f9b20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *actionContext,MethodInfo *method)

{
  Map_Experience_o *pMVar1;
  Settings_UISettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *favorites;
  Il2CppClass *pIVar3;
  Il2CppObject *source;
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e70 = '\x01';
  }
  pMVar1 = (__this->fields).experience;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347ee9 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar2 != (Settings_UISettings_o *)0x0) {
    favorites = (pSVar2->fields).FavoriteExperiences;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347ee4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Uri_EscapeDataString);
      il2cpp_codegen_initialize_runtime_metadata(&"|");
      Il2CppMethodInitialized_184347ee4 = '\x01';
    }
    source = SZArrayNew(TypeInfo_string_array,3);
    if ((pMVar1 != (Map_Experience_o *)0x0) && (source != (Il2CppObject *)0x0)) {
      if (*(int *)&source[1].monitor != 0) {
        pIVar3 = (Il2CppClass *)(pMVar1->fields).Category;
        source[2].klass = pIVar3;
        Il2CppCodeGenWriteBarrier(&source[2].klass,pIVar3);
        if (1 < *(uint *)&source[1].monitor) {
          pSVar4 = (pMVar1->fields).SubCategory;
          source[2].monitor = pSVar4;
          Il2CppCodeGenWriteBarrier(&source[2].monitor,pSVar4);
          if (2 < *(uint *)&source[1].monitor) {
            pIVar3 = (Il2CppClass *)(pMVar1->fields).Name;
            source[3].klass = pIVar3;
            Il2CppCodeGenWriteBarrier(&source[3].klass,pIVar3);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,
                       (Il2CppObject *)0x0,(intptr_t)MethodInfo_System_Uri_EscapeDataString,
                       (MethodInfo_16E67D0 *)0x0);
            values = System_Linq_Enumerable__Select_Vector3__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                (System_Func_TSource__TResult__o *)__this_00,
                                (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
            pSVar4 = System_String__Join_196ecd0
                               ("|",
                                (System_Collections_Generic_IEnumerable_string__o *)values,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_23f2460
                      (favorites,pSVar4,5,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            local_28.fields.ElementId = (actionContext->fields).ElementId;
            local_28.fields.GameObject = (actionContext->fields).GameObject;
            local_28.fields.Node = (actionContext->fields).Node;
            local_28.fields.InputSource = (actionContext->fields).InputSource;
            local_28.fields._28_4_ = *(undefined4 *)&(actionContext->fields).field_0x1c;
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$<BuildField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___BuildField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823f9d50
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fa1b0: mov rdx, qword ptr [rip + 0x1cb2899]  ; TypeInfo_Settings_IntSetting
// asm:   0x1823fa2a3: mov rdx, qword ptr [rip + 0x1cb27a6]  ; TypeInfo_Settings_IntSetting
// asm:   0x1823fa2ec: mov r9d, r15d
// asm:   0x1823fa2ef: jmp 0x1823fa326
// asm:   0x1823fa3fb: mov esi, r15d
// asm:   0x1823fa3fe: jmp 0x1823fa415
// asm:   0x1823fa43f: mov r9, qword ptr [rip + 0x1cf2ff2]  ; "gameCreate.open.modeSelector"
// asm:   0x1823fa446: mov rcx, qword ptr [rip + 0x1c968fb]  ; "zoom"
// asm:   0x1823fa44d: jmp 0x1823fa463
// asm:   0x1823fa4d7: mov r14d, r15d
// asm:   0x1823fa4da: jmp 0x1823fa508

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___BuildField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  Settings_ExperienceRuleField_o *pSVar2;
  Settings_BaseSetting_o *pSVar3;
  Settings_InspectorSettingMetadata_o *pSVar4;
  Settings_BaseSetting_c *pSVar5;
  System_String_array *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *pSVar11;
  bool value_00;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res10 [4];
  int32_t type;
  
  if (Il2CppMethodInitialized_184347e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.change.field");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347e71 = '\x01';
  }
  pSVar2 = (__this->fields).field;
  if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fa5d6;
  pSVar8 = (pSVar2->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(pSVar8,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_1969e50((__this->fields).id,"-label",(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823fa5d6;
  pSVar11 = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (row,pSVar8,"text",pSVar9,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).field;
  if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fa5d6;
  bVar7 = System_String__op_Equality((pSVar2->fields).Id,"general.GameMode",(MethodInfo *)0x0);
  pSVar2 = (__this->fields).field;
  if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fa5d6;
  value_00 = false;
  type = 0;
  if (bVar7) {
    if ((pSVar2->fields).Editable != false) {
      pSVar6 = (__this->fields).allowed;
      if (pSVar6 == (System_String_array *)0x0) goto label_1823fa5d6;
      value_00 = 1 < (int)pSVar6->max_length;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    text = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar2,(MethodInfo *)0x0);
    pSVar8 = "zoom";
    pSVar9 = "gameCreate.open.modeSelector";
    if (value_00 == false) {
      pSVar8 = pSVar11;
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        (row,1,text,pSVar9,(__this->fields).id,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar8,(MethodInfo *)0x0);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,value_00,MethodInfo_System_Nullable_bool_ctor);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar10->fields).enabled.fields = local_res8[0];
  }
  else {
    bVar7 = System_String__op_Equality((pSVar2->fields).Id,"general.Difficulty",(MethodInfo *)0x0);
    if (bVar7) {
      if ((__this->fields).allowed != (System_String_array *)0x0) {
        if (((__this->fields).allowed)->max_length != 0) {
          pSVar8 = (__this->fields).id;
          pSVar2 = (__this->fields).field;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar2,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown
                              (row,pSVar8,pSVar9,(__this->fields).allowed,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
          if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fa5d6;
          (pGVar10->fields).action = "gameCreate.change.field";
          Il2CppCodeGenWriteBarrier(&(pGVar10->fields).action,"gameCreate.change.field");
          goto label_1823fa4c4;
        }
        goto label_1823f9fc3;
      }
label_1823fa04e:
      pSVar2 = (__this->fields).field;
      if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fa5d6;
      pSVar3 = (pSVar2->fields).Setting;
      if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar3->klass->_2).typeHierarchyDepth) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                              (row,(__this->fields).id,
                               (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                               *(bool *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 1),
                               (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(MethodInfo *)0x0);
          goto label_1823fa022;
        }
        pSVar3 = (((__this->fields).field)->fields).Setting;
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar3->klass->_2).typeHierarchyDepth) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          pSVar4 = (((((__this->fields).field)->fields).Setting)->fields).InspectorMetadata;
          if (pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1823fa5d6;
          if ((pSVar4->fields).HasSlider != false) {
            pSVar8 = (((__this->fields).field)->fields).Id;
            if (pSVar8 == (System_String_o *)0x0) goto label_1823fa5d6;
            bVar7 = System_String__StartsWith_19722c0(pSVar8,"titan.",5,(MethodInfo *)0x0);
            if (!bVar7) {
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                                  (row,(__this->fields).id,(float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4),
                                   true,"gameCreate.change.field","slider",
                                   (float)*(int *)&(*(uint64_t *)((char *)pSVar3 + 0x20)),
                                   (float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x20)) + 4),
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
              ;
              goto label_1823fa4c4;
            }
          }
        }
      }
      pSVar2 = (__this->fields).field;
      if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fa5d6;
      pSVar3 = (pSVar2->fields).Setting;
      if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar3->klass->_2).typeHierarchyDepth) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          pSVar4 = (((((__this->fields).field)->fields).Setting)->fields).InspectorMetadata;
          if (pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1823fa5d6;
          if ((pSVar4->fields).HasSlider != false) {
            pSVar8 = (((__this->fields).field)->fields).Id;
            if (pSVar8 == (System_String_o *)0x0) goto label_1823fa5d6;
            bVar7 = System_String__StartsWith_19722c0(pSVar8,"titan.",5,(MethodInfo *)0x0);
            if (!bVar7) {
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                                  (row,(__this->fields).id,*(float *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4),true,
                                   "gameCreate.change.field","slider",*(float *)&(*(uint64_t *)((char *)pSVar3 + 0x20)),
                                   *(float *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x20)) + 4),
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
              ;
              goto label_1823fa4c4;
            }
          }
        }
      }
      pSVar2 = (__this->fields).field;
      if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fa5d6;
      pSVar3 = (pSVar2->fields).Setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) {
label_1823fa320:
        type = 2;
      }
      else {
        pSVar5 = pSVar3->klass;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pSVar5->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting
           )) {
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          pSVar5 = ((((__this->fields).field)->fields).Setting)->klass;
          if (((pSVar5->_2).typeHierarchyDepth < bVar1) ||
             (type = 1,
             (pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
          goto label_1823fa320;
        }
      }
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                          (row,(__this->fields).id,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           type,"inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0
                           ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                           (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).field;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar2,(MethodInfo *)0x0);
      if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fa5d6;
      (pGVar10->fields).value = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).value,pSVar8);
      (pGVar10->fields).action = "gameCreate.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).action,"gameCreate.change.field");
      (pGVar10->fields).commitAction = "gameCreate.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).commitAction,"gameCreate.change.field");
    }
    else {
label_1823f9fc3:
      if (((__this->fields).allowed == (System_String_array *)0x0) ||
         (((__this->fields).allowed)->max_length == 0)) goto label_1823fa04e;
      pSVar8 = (__this->fields).id;
      pSVar2 = (__this->fields).field;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar2,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown
                          (row,pSVar8,pSVar9,(__this->fields).allowed,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
label_1823fa022:
      if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fa5d6;
      (pGVar10->fields).action = "gameCreate.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).action,"gameCreate.change.field");
    }
  }
label_1823fa4c4:
  pSVar2 = (__this->fields).field;
  if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) {
label_1823fa5d6:
    ThrowNullReferenceException();
  }
  if (((pSVar2->fields).Editable != false) &&
     (bVar7 = System_String__op_Inequality((pSVar2->fields).Id,"general.GameMode",(MethodInfo *)0x0),
     pSVar11 = (System_String_o *)0x1, !bVar7)) {
    pSVar6 = (__this->fields).allowed;
    if (pSVar6 == (System_String_array *)0x0) goto label_1823fa5d6;
    pSVar11 = (System_String_o *)(ulonglong)(1 < (int)pSVar6->max_length);
  }
  local_res10[0].hasValue = false;
  local_res10[0].value = false;
  System_Nullable_bool____ctor
            ((System_Data_SqlTypes_SqlByte_o *)local_res10,(uint8_t)pSVar11,
             MethodInfo_System_Nullable_bool_ctor);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).enabled.fields = local_res10[0];
    pSVar2 = (__this->fields).field;
    if (pSVar2 != (Settings_ExperienceRuleField_o *)0x0) {
      pSVar8 = (pSVar2->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(pSVar8,(MethodInfo *)0x0);
      (pGVar10->fields).formLabel = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).formLabel,pSVar8);
      pSVar8 = (__this->fields).tooltip;
      (pGVar10->fields).tooltip = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).tooltip,pSVar8);
      value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
      (pGVar10->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass38_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass38_0$$<BuildSandbox>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0___BuildSandbox_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823fa5f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0___BuildSandbox_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass38_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *id;
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *favorites;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e72 = '\x01';
  }
  id = (__this->fields).presetName;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347eea = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 != (Settings_UISettings_o *)0x0) {
    favorites = (pSVar1->fields).FavoriteSandboxPresets;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_23f2460(favorites,id,4,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass39_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass39_0$$<BuildSandboxField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___BuildSandboxField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fa700
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fae67: mov r9, qword ptr [rip + 0x1cf25ca]  ; "gameCreate.open.modeSelector"
// asm:   0x1823fae6e: mov rdx, qword ptr [rip + 0x1c95ed3]  ; "zoom"
// asm:   0x1823fae75: jmp 0x1823fae8b

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___BuildSandboxField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar3;
  System_String_array *pSVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_InspectorSettingMetadata_o *pSVar6;
  Settings_BaseSetting_c *pSVar7;
  bool bVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *pSVar11;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int32_t type;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res10 [4];
  
  if (Il2CppMethodInitialized_184347e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.sandbox.change.field");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347e73 = '\x01';
  }
  pGVar3 = (__this->fields).field;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e24 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347df0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames ==
      false) {
    pSVar11 = (pGVar3->fields)._Label_k__BackingField;
  }
  else {
    pSVar11 = (pGVar3->fields)._Id_k__BackingField;
  }
  pSVar9 = System_String__Concat_1969e50((__this->fields).id,"-label",(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823fb043;
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (row,pSVar11,"text",pSVar9,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar3 = (__this->fields).field;
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
  bVar8 = System_String__op_Equality
                    ((pGVar3->fields)._Id_k__BackingField,"general.GameMode",(MethodInfo *)0x0);
  pGVar3 = (__this->fields).field;
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
  type = 0;
  if (bVar8) {
    pSVar4 = (pGVar3->fields)._Options_k__BackingField;
    if (pSVar4 == (System_String_array *)0x0) goto label_1823fb043;
    iVar2 = (int)pSVar4->max_length;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    text = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar3,(MethodInfo *)0x0);
    pSVar11 = "zoom";
    pSVar9 = "gameCreate.open.modeSelector";
    if (iVar2 < 2) {
      pSVar11 = (System_String_o *)0x0;
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        (row,1,text,pSVar9,(__this->fields).id,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar11,(MethodInfo *)0x0);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,(__this->fields).enabled & 1 < iVar2,
               MethodInfo_System_Nullable_bool_ctor);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar10->fields).enabled.fields = local_res8[0];
  }
  else {
    bVar8 = System_String__op_Equality
                      ((pGVar3->fields)._Id_k__BackingField,"general.Difficulty",(MethodInfo *)0x0);
    if (bVar8) {
      pGVar3 = (__this->fields).field;
      if ((pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) ||
         (pSVar4 = (pGVar3->fields)._Options_k__BackingField, pSVar4 == (System_String_array *)0x0))
      goto label_1823fb043;
      if (pSVar4->max_length != 0) {
        pSVar11 = (__this->fields).id;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar3,(MethodInfo *)0x0);
        pGVar3 = (__this->fields).field;
        if ((pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) ||
           (pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown
                                (row,pSVar11,pSVar9,(pGVar3->fields)._Options_k__BackingField,
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0)
           , pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_1823fb043;
        (pGVar10->fields).action = "gameCreate.sandbox.change.field";
        Il2CppCodeGenWriteBarrier(&(pGVar10->fields).action,"gameCreate.sandbox.change.field");
        goto label_1823faef6;
      }
    }
    pGVar3 = (__this->fields).field;
    if ((pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) ||
       (pSVar4 = (pGVar3->fields)._Options_k__BackingField, pSVar4 == (System_String_array *)0x0))
    goto label_1823fb043;
    if (pSVar4->max_length == 0) {
      pSVar5 = (pGVar3->fields)._Setting_k__BackingField;
      if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar5->klass->_2).typeHierarchyDepth) &&
           ((pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                              (row,(__this->fields).id,
                               (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                               *(bool *)((longlong)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 1),
                               (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(MethodInfo *)0x0);
          goto label_1823fadf5;
        }
        pSVar5 = (((__this->fields).field)->fields)._Setting_k__BackingField;
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar5->klass->_2).typeHierarchyDepth) &&
           ((pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          pSVar6 = (((((__this->fields).field)->fields)._Setting_k__BackingField)->fields).InspectorMetadata;
          if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1823fb043;
          if ((pSVar6->fields).HasSlider != false) {
            pSVar11 = (((__this->fields).field)->fields)._Id_k__BackingField;
            if (pSVar11 == (System_String_o *)0x0) goto label_1823fb043;
            bVar8 = System_String__StartsWith_19722c0(pSVar11,"titan.",5,(MethodInfo *)0x0);
            if (!bVar8) {
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                                  (row,(__this->fields).id,(float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4),
                                   true,"gameCreate.sandbox.change.field","slider",
                                   (float)*(int *)&(*(uint64_t *)((char *)pSVar5 + 0x20)),
                                   (float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4),
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
              ;
              goto label_1823faef6;
            }
          }
        }
      }
      pGVar3 = (__this->fields).field;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
      pSVar5 = (pGVar3->fields)._Setting_k__BackingField;
      if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar5->klass->_2).typeHierarchyDepth) &&
           ((pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          pSVar6 = (((((__this->fields).field)->fields)._Setting_k__BackingField)->fields).InspectorMetadata;
          if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1823fb043;
          if ((pSVar6->fields).HasSlider != false) {
            pSVar11 = (((__this->fields).field)->fields)._Id_k__BackingField;
            if (pSVar11 == (System_String_o *)0x0) goto label_1823fb043;
            bVar8 = System_String__StartsWith_19722c0(pSVar11,"titan.",5,(MethodInfo *)0x0);
            if (!bVar8) {
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                                  (row,(__this->fields).id,*(float *)((longlong)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4),true,
                                   "gameCreate.sandbox.change.field","slider",*(float *)&(*(uint64_t *)((char *)pSVar5 + 0x20)),
                                   *(float *)((longlong)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4),
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
              ;
              goto label_1823faef6;
            }
          }
        }
      }
      pGVar3 = (__this->fields).field;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
      bVar8 = System_String__op_Equality
                        ((pGVar3->fields)._Id_k__BackingField,"general.Password",(MethodInfo *)0x0);
      if (bVar8) {
        type = 3;
      }
      else {
        pGVar3 = (__this->fields).field;
        if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
        pSVar5 = (pGVar3->fields)._Setting_k__BackingField;
        if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
          pSVar7 = pSVar5->klass;
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if ((bVar1 <= (pSVar7->_2).typeHierarchyDepth) &&
             ((pSVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_1823faccf;
        }
        type = 2;
      }
label_1823faccf:
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                          (row,(__this->fields).id,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           type,"inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0
                           ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                           (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      pGVar3 = (__this->fields).field;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar3,(MethodInfo *)0x0);
      if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fb043;
      (pGVar10->fields).value = pSVar11;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).value,pSVar11);
      (pGVar10->fields).action = "gameCreate.sandbox.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).action,"gameCreate.sandbox.change.field");
      (pGVar10->fields).commitAction = "gameCreate.sandbox.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).commitAction,"gameCreate.sandbox.change.field");
    }
    else {
      pSVar11 = (__this->fields).id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar3,(MethodInfo *)0x0);
      pGVar3 = (__this->fields).field;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fb043;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown
                          (row,pSVar11,pSVar9,(pGVar3->fields)._Options_k__BackingField,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
label_1823fadf5:
      if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fb043;
      (pGVar10->fields).action = "gameCreate.sandbox.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).action,"gameCreate.sandbox.change.field");
    }
  }
label_1823faef6:
  pGVar3 = (__this->fields).field;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e24 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347df0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames ==
        false) {
      pSVar11 = (pGVar3->fields)._Label_k__BackingField;
    }
    else {
      pSVar11 = (pGVar3->fields)._Id_k__BackingField;
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).formLabel = pSVar11;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).formLabel,pSVar11);
      pSVar11 = (__this->fields).tooltip;
      (pGVar10->fields).tooltip = pSVar11;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).tooltip,pSVar11);
      if ((__this->fields).enabled == false) {
        local_res10[0].hasValue = false;
        local_res10[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Data_SqlTypes_SqlByte_o *)local_res10,'\0',MethodInfo_System_Nullable_bool_ctor);
        (pGVar10->fields).enabled.fields = local_res10[0];
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
      (pGVar10->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).layout,value);
      return;
    }
  }
label_1823fb043:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$<BuildSandboxGeneral>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___BuildSandboxGeneral_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* core, const MethodInfo* method);
// 0x1823fb050

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___BuildSandboxGeneral_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *core,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  
  if (Il2CppMethodInitialized_184347e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxGeneral_b__40_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxGeneral_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-core-selectors");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-core-values");
    Il2CppMethodInitialized_184347e74 = '\x01';
  }
  pSVar1 = "clear";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxGeneral_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (core != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (core,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-sandbox-core-selectors",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    pSVar1 = "clear";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__40_2;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxGeneral_b__40_2,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__40_2 =
           (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__40_2,pUVar2);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(390.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,6.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (core,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-sandbox-core-values",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$<BuildSandboxGeneral>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___BuildSandboxGeneral_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* selectors, const MethodInfo* method);
// 0x1823fb410

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___BuildSandboxGeneral_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *selectors,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184347e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e75 = '\x01';
  }
  if ((__this->fields).map != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    pGVar1 = (__this->fields).map;
    pSVar2 = (pGVar1->fields)._Id_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    iVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(pSVar2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
              (selectors,pGVar1,iVar3,true,(MethodInfo *)0x0);
  }
  if ((__this->fields).mode != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    pGVar1 = (__this->fields).mode;
    pSVar2 = (pGVar1->fields)._Id_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    iVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(pSVar2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxModeField
              (selectors,pGVar1,iVar3,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass45_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass45_0$$<BuildTitanHealthMode>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0___BuildTitanHealthMode_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fb4f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0___BuildTitanHealthMode_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Il2CppObject *object;
  System_String_o *pSVar4;
  System_String_array *options;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *value_00;
  System_Nullable_bool__Fields local_res10 [4];
  
  if (Il2CppMethodInitialized_184347e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanHealthMode_b__45_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Health mode");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Scaled");
    Il2CppMethodInitialized_184347e76 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (row,"Health mode","text","game-create-titans-health-mode-label",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).TitanHealthMode, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      value_00 = "Fixed";
      if ((pSVar3->fields)._value == 2) {
        value_00 = "Scaled";
      }
      options = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      pSVar4 = "Fixed";
      if (options != (System_String_array *)0x0) {
        if ((int)options->max_length != 0) {
          options->m_Items[0] = "Fixed";
          Il2CppCodeGenWriteBarrier(options->m_Items,pSVar4);
          pSVar4 = "Scaled";
          if (1 < (uint)options->max_length) {
            options->m_Items[1] = "Scaled";
            Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar4);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
            }
            pSVar4 = "game-create-titans-health-mode";
            __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__45_1;
            if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
              }
              object = (Il2CppObject *)
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
              __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
              System_Action_GisketchActionContext____ctor
                        (__this_00,object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanHealthMode_b__45_1
                         ,(MethodInfo_1387DC0 *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__45_1 =
                   (System_Action_GisketchActionContext__o *)__this_00;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__45_1,
                         __this_00);
            }
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_18c7b80
                               (row,pSVar4,value_00,options,
                                (System_Action_GisketchActionContext__o *)__this_00,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
            local_res10[0].hasValue = false;
            local_res10[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Data_SqlTypes_SqlByte_o *)local_res10,(__this->fields).enabled,
                       MethodInfo_System_Nullable_bool_ctor);
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar5->fields).enabled.fields = local_res10[0];
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
              (pGVar5->fields).layout = value;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value);
              return;
            }
            ThrowNullReferenceException();
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass49_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass49_0$$<BuildTitanToggle>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0___BuildTitanToggle_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fb870

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0___BuildTitanToggle_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool value;
  System_String_o *pSVar1;
  System_String_o *id;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  
  if (Il2CppMethodInitialized_184347e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass49_0_BuildTitanToggle_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347e77 = '\x01';
  }
  pSVar1 = (__this->fields).label;
  id = System_String__Concat_1969e50((__this->fields).id,"-label",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (row,pSVar1,"text",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__1;
    pSVar1 = (__this->fields).id;
    value = (__this->fields).enabled;
    if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass49_0_BuildTitanToggle_b__1
                 ,(MethodInfo_1387DC0 *)0x0);
      (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                       (row,pSVar1,value,(System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0
                       );
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = value_00;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass49_0$$<BuildTitanToggle>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0___BuildTitanToggle_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823fba80

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0___BuildTitanToggle_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347e78 = '\x01';
  }
  pSVar1 = (__this->fields).setEnabled;
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = System_String__op_Equality
                      ((((context->fields).Node)->fields).value,"true",(MethodInfo *)0x0);
  }
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,bVar2,(pSVar1->fields).method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass51_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass51_0$$<BuildSandboxSwitchById>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0___BuildSandboxSwitchById_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fbb40

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0___BuildSandboxSwitchById_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool value;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  System_String_o *id;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184347e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass51_0_BuildSandboxSwitchById_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347e79 = '\x01';
  }
  pGVar1 = (__this->fields).field;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e24 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347df0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames ==
        false) {
      pSVar4 = (pGVar1->fields)._Label_k__BackingField;
    }
    else {
      pSVar4 = (pGVar1->fields)._Id_k__BackingField;
    }
    id = System_String__Concat_1969e50((__this->fields).id,"-label",(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (row,pSVar4,"text",id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).boolSetting;
      if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__1;
        pSVar4 = (__this->fields).id;
        value = (pSVar2->fields)._value;
        if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
          __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (__this_00,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass51_0_BuildSandboxSwitchById_b__1
                     ,(MethodInfo_1387DC0 *)0x0);
          (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)__this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                           (row,pSVar4,value,(System_Action_GisketchActionContext__o *)__this_00,
                            (MethodInfo *)0x0);
        pGVar1 = (__this->fields).field;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        if (Il2CppMethodInitialized_184347e24 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347e24 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347df0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347df0 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
          if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames
              == false) {
            pSVar4 = (pGVar1->fields)._Label_k__BackingField;
          }
          else {
            pSVar4 = (pGVar1->fields)._Id_k__BackingField;
          }
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).formLabel = pSVar4;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).formLabel,pSVar4);
            pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_23e1e00
                               ((__this->fields).field,(MethodInfo *)0x0);
            (pGVar3->fields).tooltip = pSVar4;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltip,pSVar4);
            local_res8[0].hasValue = false;
            local_res8[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Data_SqlTypes_SqlByte_o *)local_res8,(__this->fields).enabled,
                       MethodInfo_System_Nullable_bool_ctor);
            (pGVar3->fields).enabled.fields = local_res8[0];
            width = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar3->fields).layout = value_00;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value_00);
            return;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass51_0$$<BuildSandboxSwitchById>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0___BuildSandboxSwitchById_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823fbf30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0___BuildSandboxSwitchById_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  int32_t index;
  bool bVar1;
  System_String_o *value;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347e7a = '\x01';
  }
  index = (__this->fields).index;
  if ((context->fields).Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((((context->fields).Node)->fields).value,"true",(MethodInfo *)0x0);
    value = "true";
    if (bVar1) goto label_1823fbfb8;
  }
  value = "false";
label_1823fbfb8:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeSandboxField(index,value,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$<BuildSandboxFieldsByIds>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___BuildSandboxFieldsByIds_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x1823fc020

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___BuildSandboxFieldsByIds_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_BuildSandboxFieldsByIds_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_BuildSandboxFieldsByIds_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-right");
    il2cpp_codegen_initialize_runtime_metadata(&"-left");
    Il2CppMethodInitialized_184347e7b = '\x01';
  }
  pSVar1 = "clear";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_BuildSandboxFieldsByIds_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar2);
  }
  pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-left",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,pSVar3,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "clear";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_BuildSandboxFieldsByIds_b__2
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar2);
    }
    pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-right",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,pSVar3,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$<BuildSandboxFieldsByIds>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___BuildSandboxFieldsByIds_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fc200
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fc24c: mov qword ptr [rsp + 0x50], rbp
// asm:   0x1823fc251: mov qword ptr [rsp + 0x58], rsi
// asm:   0x1823fc256: nop word ptr [rax + rax]
// asm:   0x1823fc2dc: mov rbp, qword ptr [rsp + 0x50]
// asm:   0x1823fc2e1: mov rsi, qword ptr [rsp + 0x58]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___BuildSandboxFieldsByIds_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  System_Collections_Generic_List_AottgSandboxField__o *pSVar1;
  System_String_o *id;
  int32_t index;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar2;
  int32_t index_00;
  
  if (Il2CppMethodInitialized_184347e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
    Il2CppMethodInitialized_184347e7c = '\x01';
  }
  index_00 = 0;
  if (0 < (__this->fields).split) {
    do {
      pSVar1 = (__this->fields).fields;
      if (pSVar1 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
label_1823fc2f5:
        ThrowNullReferenceException();
      }
      field = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
      pSVar1 = (__this->fields).fields;
      if ((pSVar1 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) ||
         (pGVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item),
         pGVar2 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0)) goto label_1823fc2f5;
      id = (pGVar2->fields)._Id_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      index = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
                (column,field,index,(__this->fields).enabled,(MethodInfo *)0x0);
      index_00 = index_00 + 1;
    } while (index_00 < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$<BuildSandboxFieldsByIds>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___BuildSandboxFieldsByIds_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fc300
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fc362: xor r15d, r15d
// asm:   0x1823fc3ee: jmp 0x1823fc365

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___BuildSandboxFieldsByIds_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  System_String_o *id;
  int32_t index;
  System_Collections_Generic_List_AottgSandboxField__o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar2;
  int32_t index_00;
  
  if (Il2CppMethodInitialized_184347e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
    Il2CppMethodInitialized_184347e7d = '\x01';
  }
  pSVar1 = (__this->fields).fields;
  index_00 = (__this->fields).split;
  if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    while( true ) {
      if ((pSVar1->fields)._size <= index_00) {
        return;
      }
      pSVar1 = (__this->fields).fields;
      if (pSVar1 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) break;
      field = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
      pSVar1 = (__this->fields).fields;
      if ((pSVar1 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) ||
         (pGVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item),
         pGVar2 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0)) break;
      id = (pGVar2->fields)._Id_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      index = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
                (column,field,index,(__this->fields).enabled,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).fields;
      index_00 = index_00 + 1;
      if (pSVar1 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass59_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass59_0$$<BuildMultiplayerRoom>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___BuildMultiplayerRoom_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x1823fc420

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___BuildMultiplayerRoom_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184347e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0_BuildMultiplayerRoom_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0_BuildMultiplayerRoom_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-right");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-left");
    Il2CppMethodInitialized_184347e7e = '\x01';
  }
  pSVar1 = "clear";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0_BuildMultiplayerRoom_b__2
               ,(MethodInfo *)0x0);
    (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar2);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-room-left",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "clear";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__3;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0_BuildMultiplayerRoom_b__3
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__3 = (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3,pUVar2);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-room-right",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass59_0$$<BuildMultiplayerRoom>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___BuildMultiplayerRoom_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fc5e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fc628: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1823fc62d: nop dword ptr [rax]
// asm:   0x1823fc65d: nop dword ptr [rax]
// asm:   0x1823fc6c1: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___BuildMultiplayerRoom_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  int index;
  
  if (Il2CppMethodInitialized_184347e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_184347e7f = '\x01';
  }
  index = 0;
  if (0 < (__this->fields).split) {
    do {
      obj = (Il2CppObject *)(__this->fields).fields;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar4 = 0;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar4].offset;
            goto label_1823fc682;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_1823fc682:
      field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar5->methodPtr)(obj,index,pVVar5->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField(column,field,index,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass59_0$$<BuildMultiplayerRoom>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___BuildMultiplayerRoom_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fc700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fc845: jmp 0x1823fc753

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0___BuildMultiplayerRoom_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  ushort uVar7;
  int index;
  
  if (Il2CppMethodInitialized_184347e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_184347e80 = '\x01';
  }
  index = (__this->fields).split;
  pIVar2 = (Il2CppObject *)(__this->fields).fields;
  while (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      uVar7 = 0;
      do {
        if (pIVar4[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
          pVVar6 = pIVar3->vtable + pIVar4[uVar7].offset;
          goto label_1823fc7a6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_1823fc7a6:
    iVar5 = (*pVVar6->methodPtr)(pIVar2,pVVar6->method);
    if (iVar5 <= index) {
      return;
    }
    pIVar2 = (Il2CppObject *)(__this->fields).fields;
    if (pIVar2 == (Il2CppObject *)0x0) break;
    pIVar3 = pIVar2->klass;
    uVar7 = 0;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
          pVVar6 = pIVar3->vtable + pIVar4[uVar7].offset;
          goto label_1823fc806;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_1823fc806:
    field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar6->methodPtr)(pIVar2,index,pVVar6->method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField(column,field,index,(MethodInfo *)0x0);
    index = index + 1;
    pIVar2 = (Il2CppObject *)(__this->fields).fields;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass61_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass61_0$$<BuildRoomField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0___BuildRoomField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fc890
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fc9ee: mov rcx, r8
// asm:   0x1823fc9f1: jmp 0x1823fca7b
// asm:   0x1823fcade: mov r9d, ebp
// asm:   0x1823fcae1: jmp 0x1823fcb22

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0___BuildRoomField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  Settings_BaseSetting_c *pSVar3;
  bool bVar4;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar7;
  System_String_o **targetAddress;
  int32_t type;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184347e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.room.change.field");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    Il2CppMethodInitialized_184347e81 = '\x01';
  }
  pGVar7 = (__this->fields).field;
  if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fcd19;
  pSVar6 = (pGVar7->fields)._Label_k__BackingField;
  id = System_String__Concat_1969e50((__this->fields).id,"-label",(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823fcd19;
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (row,pSVar6,"text",id,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar7 = (__this->fields).field;
  if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fcd19;
  bVar4 = System_String__op_Equality
                    ((pGVar7->fields)._Id_k__BackingField,"misc.VoiceChat",(MethodInfo *)0x0);
  pGVar7 = (__this->fields).field;
  if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fcd19;
  type = 0;
  if (bVar4) {
    pSVar2 = (pGVar7->fields)._Setting_k__BackingField;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) goto label_1823fcd19;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                       (row,(__this->fields).id,*(int *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4) != 2,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fcd19;
    targetAddress = &(pGVar5->fields).action;
    (pGVar5->fields).action = "gameCreate.room.change.field";
  }
  else {
    pSVar2 = (pGVar7->fields)._Setting_k__BackingField;
    if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar2->klass->_2).typeHierarchyDepth) &&
         ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                           (row,(__this->fields).id,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                            ,*(bool *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 1),
                            (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(MethodInfo *)0x0);
        if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fcd19;
        (pGVar5->fields).action = "gameCreate.room.change.field";
        targetAddress = &(pGVar5->fields).action;
        goto label_1823fcc79;
      }
      pGVar7 = (__this->fields).field;
    }
    bVar4 = System_String__op_Equality
                      ((pGVar7->fields)._Id_k__BackingField,"general.Password",(MethodInfo *)0x0);
    if (bVar4) {
      type = 3;
      goto label_1823fcb22;
    }
    pGVar7 = (__this->fields).field;
    if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_1823fcd19;
    pSVar2 = (pGVar7->fields)._Setting_k__BackingField;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) {
label_1823fcb1c:
      type = 2;
    }
    else {
      pSVar3 = pSVar2->klass;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
      {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        pSVar3 = ((((__this->fields).field)->fields)._Setting_k__BackingField)->klass;
        if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
           (type = 1,
           (pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
        goto label_1823fcb1c;
      }
    }
label_1823fcb22:
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (row,(__this->fields).id,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                        type,"inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\0',MethodInfo_System_Nullable_bool_ctor);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar5->fields).richText.fields = local_res8[0];
    pGVar7 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar7,(MethodInfo *)0x0);
    (pGVar5->fields).value = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value,pSVar6);
    (pGVar5->fields).action = "gameCreate.room.change.field";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).action,"gameCreate.room.change.field");
    targetAddress = &(pGVar5->fields).commitAction;
    (pGVar5->fields).commitAction = "gameCreate.room.change.field";
  }
label_1823fcc79:
  Il2CppCodeGenWriteBarrier(targetAddress,"gameCreate.room.change.field");
  pGVar7 = (__this->fields).field;
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    pSVar6 = (pGVar7->fields)._Label_k__BackingField;
    (pGVar5->fields).formLabel = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).formLabel,pSVar6);
    pGVar7 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_23e1e00(pGVar7,(MethodInfo *)0x0);
    (pGVar5->fields).tooltip = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).tooltip,pSVar6);
    value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
    (pGVar5->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value);
    return;
  }
label_1823fcd19:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass67_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass67_0$$<BuildLockedFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___BuildLockedFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x1823fcd30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___BuildLockedFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184347e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields-left");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields-right");
    Il2CppMethodInitialized_184347e82 = '\x01';
  }
  pSVar1 = "clear";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar2);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-locked-fields-left",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "clear";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__2
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar2);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-locked-fields-right",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass67_0$$<BuildLockedFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___BuildLockedFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fcef0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fcf38: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1823fcf3d: nop dword ptr [rax]
// asm:   0x1823fcf6d: nop dword ptr [rax]
// asm:   0x1823fcfd1: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___BuildLockedFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar5;
  Settings_ExperienceRuleField_o *field;
  int index;
  
  if (Il2CppMethodInitialized_184347e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_184347e83 = '\x01';
  }
  index = 0;
  if (0 < (__this->fields).split) {
    do {
      obj = (Il2CppObject *)(__this->fields).fields;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar4 = 0;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar4].offset;
            goto label_1823fcf92;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_1823fcf92:
      field = (Settings_ExperienceRuleField_o *)(*pVVar5->methodPtr)(obj,index,pVVar5->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField(column,field,index,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass67_0$$<BuildLockedFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___BuildLockedFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fd010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fd155: jmp 0x1823fd063

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0___BuildLockedFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  Settings_ExperienceRuleField_o *field;
  ushort uVar7;
  int index;
  
  if (Il2CppMethodInitialized_184347e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_184347e84 = '\x01';
  }
  index = (__this->fields).split;
  pIVar2 = (Il2CppObject *)(__this->fields).fields;
  while (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      uVar7 = 0;
      do {
        if (pIVar4[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
          pVVar6 = pIVar3->vtable + pIVar4[uVar7].offset;
          goto label_1823fd0b6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0);
label_1823fd0b6:
    iVar5 = (*pVVar6->methodPtr)(pIVar2,pVVar6->method);
    if (iVar5 <= index) {
      return;
    }
    pIVar2 = (Il2CppObject *)(__this->fields).fields;
    if (pIVar2 == (Il2CppObject *)0x0) break;
    pIVar3 = pIVar2->klass;
    uVar7 = 0;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
          pVVar6 = pIVar3->vtable + pIVar4[uVar7].offset;
          goto label_1823fd116;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_1823fd116:
    field = (Settings_ExperienceRuleField_o *)(*pVVar6->methodPtr)(pIVar2,index,pVVar6->method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField(column,field,index,(MethodInfo *)0x0);
    index = index + 1;
    pIVar2 = (Il2CppObject *)(__this->fields).fields;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass68_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass68_0$$<BuildLockedField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0___BuildLockedField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fd1a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fd34e: mov r9d, ebp
// asm:   0x1823fd351: jmp 0x1823fd38d
// asm:   0x1823fd540: mov rax, qword ptr [rip + 0x1cf03c9]  ; "Locked by this experience."
// asm:   0x1823fd547: jmp 0x1823fd55b

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0___BuildLockedField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  Settings_ExperienceRuleField_o *pSVar2;
  Settings_BaseSetting_o *pSVar3;
  Settings_BaseSetting_c *pSVar4;
  bool bVar5;
  int iVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Settings_BaseSetting_o *pSVar10;
  int32_t type;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184347e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    Il2CppMethodInitialized_184347e85 = '\x01';
  }
  pSVar2 = (__this->fields).field;
  if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fd5a9;
  pSVar7 = (pSVar2->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(pSVar7,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_1969e50((__this->fields).id,"-label",(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823fd5a9;
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (row,pSVar7,"subtext",pSVar8,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).field;
  if (pSVar2 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823fd5a9;
  pSVar3 = (pSVar2->fields).Setting;
  type = 0;
  if (pSVar3 == (Settings_BaseSetting_o *)0x0) {
    pSVar7 = (__this->fields).id;
label_1823fd387:
    type = 2;
label_1823fd38d:
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (row,pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),type,
                        "inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar2,(MethodInfo *)0x0);
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_1823fd5a9:
      ThrowNullReferenceException();
    }
    (pGVar9->fields).value = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).value,pSVar7);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\0',MethodInfo_System_Nullable_bool_ctor);
  }
  else {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       (iVar6 = 1,
       (pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting
       )) {
      iVar6 = type;
    }
    pSVar10 = (Settings_BaseSetting_o *)0x0;
    if (iVar6 != 0) {
      pSVar10 = pSVar3;
    }
    pSVar7 = (__this->fields).id;
    if (pSVar10 == (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      pSVar4 = ((((__this->fields).field)->fields).Setting)->klass;
      if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
      {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        pSVar4 = ((((__this->fields).field)->fields).Setting)->klass;
        if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
           (type = 1,
           (pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
        goto label_1823fd387;
      }
      goto label_1823fd38d;
    }
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                       (row,pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                        *(bool *)((longlong)&(*(uint64_t *)((char *)pSVar10 + 0x18)) + 1),
                        (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\0',MethodInfo_System_Nullable_bool_ctor);
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823fd5af;
  }
  (pGVar9->fields).enabled.fields = local_res8[0];
  pSVar2 = (__this->fields).field;
  if (pSVar2 != (Settings_ExperienceRuleField_o *)0x0) {
    pSVar7 = (pSVar2->fields).Id;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(pSVar7,(MethodInfo *)0x0);
    (pGVar9->fields).formLabel = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).formLabel,pSVar7);
    pSVar2 = (__this->fields).field;
    if (Il2CppMethodInitialized_184347e2f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      il2cpp_codegen_initialize_runtime_metadata(&"Locked by this experience.");
      il2cpp_codegen_initialize_runtime_metadata(&"\nLocked by this experience.");
      Il2CppMethodInitialized_184347e2f = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(pSVar2,(MethodInfo *)0x0);
    bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    pSVar7 = "Locked by this experience.";
    if (!bVar5) {
      pSVar7 = System_String__Concat_1969e50(pSVar8,"\nLocked by this experience.",(MethodInfo *)0x0);
    }
    (pGVar9->fields).tooltip = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).tooltip,pSVar7);
    value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
    (pGVar9->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).layout,value);
    return;
  }
label_1823fd5af:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass70_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass70_0$$<BuildExperienceFields>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0___BuildExperienceFields_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* corePanel, const MethodInfo* method);
// 0x1823fd5c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0___BuildExperienceFields_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *corePanel,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceRuleField__o *fields;
  Settings_SandboxGameCreateConfiguration_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o *object;
  Settings_ExperienceRuleField_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  
  if (Il2CppMethodInitialized_184347e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1_BuildExperienceFields_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1_BuildExperienceFields_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1_BuildExperienceFields_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-descriptions");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-map");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-controls");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347e86 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o *)0x0) {
    (object->fields).CS___8__locals1 = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
    fields = (__this->fields).core;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField
                       ((System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)fields,
                        "general.MapName",(MethodInfo *)0x0);
    (object->fields).map = pSVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).map,pSVar2);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField
                       ((System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)
                        (__this->fields).core,"general.GameMode",(MethodInfo *)0x0);
    (object->fields).mode = pSVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).mode,pSVar2);
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1_BuildExperienceFields_b__1
               ,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (corePanel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (corePanel,"clear",(System_Action_AottgUi__o *)pUVar3,"game-create-core-map",
                 pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347ead == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347ead = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
      if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
        pSVar6 = (pSVar1->fields)._MapDescription_k__BackingField;
        (object->fields).mapDescription = pSVar6;
        Il2CppCodeGenWriteBarrier(&(object->fields).mapDescription,pSVar6);
        if (Il2CppMethodInitialized_184347eae == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347eae = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
        if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
          pSVar6 = Settings_SandboxGameCreateConfiguration__get_ModeDescription(pSVar1,(MethodInfo *)0x0);
          (object->fields).modeDescription = pSVar6;
          Il2CppCodeGenWriteBarrier(&(object->fields).modeDescription,pSVar6);
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1_BuildExperienceFields_b__2
                     ,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
          minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
          maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,"Stretch",
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,height,minWidth,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,1.0,1.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          contentLayout =
               Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                    (corePanel,"default",(System_Action_AottgUi__o *)pUVar3,"game-create-core-descriptions",
                     pGVar5,contentLayout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_1_BuildExperienceFields_b__3
                     ,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,"Stretch",
                              (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (corePanel,"clear",(System_Action_AottgUi__o *)pUVar3,"game-create-core-controls",
                     pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass70_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass70_1$$<BuildExperienceFields>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___BuildExperienceFields_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* mapColumn, const MethodInfo* method);
// 0x1823fdc80

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___BuildExperienceFields_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *mapColumn,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *pGVar1;
  System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields;
  Settings_ExperienceRuleField_o *field;
  int32_t index;
  
  if (Il2CppMethodInitialized_184347e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e87 = '\x01';
  }
  if ((__this->fields).map != (Settings_ExperienceRuleField_o *)0x0) {
    pGVar1 = (__this->fields).CS___8__locals1;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    fields = (pGVar1->fields).fields;
    field = (__this->fields).map;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    index = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex(fields,field,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField(mapColumn,field,index,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass70_1$$<BuildExperienceFields>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___BuildExperienceFields_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* descriptions, const MethodInfo* method);
// 0x1823fdd20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___BuildExperienceFields_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *descriptions,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_184347e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-description-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode Description:");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-description-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Map Description:");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Map.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-description-scroll-layout");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateDescriptionScrollLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Mode.Description");
    Il2CppMethodInitialized_184347e88 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar3 = "GameCreate.Map.Description";
  pSVar2 = "text";
  pSVar1 = "game-create-map-description-label";
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Map.Description","Map Description:",(MethodInfo *)0x0);
  if (descriptions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (descriptions,pSVar4,pSVar2,pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).textKey,pSVar3);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (descriptions,(__this->fields).mapDescription,"text",
                          "game-create-map-description",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar7);
        pSVar3 = "GameCreate.Mode.Description";
        pSVar2 = "text";
        pSVar1 = "game-create-mode-description-label";
        pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Mode.Description","Mode Description:",(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (descriptions,pSVar4,pSVar2,pSVar1,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).textKey = pSVar3;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).textKey,pSVar3);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (descriptions,(__this->fields).modeDescription,"text",
                              "game-create-mode-description",(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).layout = pGVar7;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar7);
            pGVar5 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
            Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar5->fields).type = "GameCreateDescriptionScrollLayout";
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).type,"GameCreateDescriptionScrollLayout");
              (pGVar5->fields).id = "game-create-description-scroll-layout";
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).id,"game-create-description-scroll-layout");
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
              height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,height,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              (pGVar5->fields).layout = pGVar7;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar7);
              Gisketch_Aottg2UI_Code_AottgUi__Add(descriptions,pGVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass70_1$$<BuildExperienceFields>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___BuildExperienceFields_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* controls, const MethodInfo* method);
// 0x1823fe240
// eh: try 0x1823fe390..0x1823fe437 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fe38e: nop 
// asm:   0x1823fe40a: mov rdx, qword ptr [rip + 0x1c80937]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose
// asm:   0x1823fe411: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823fe416: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823fe41b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823fe420: test rcx, rcx
// asm:   0x1823fe423: jne 0x1823fe437
// asm:   0x1823fe437: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1___BuildExperienceFields_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *controls,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *pGVar1;
  Settings_ExperienceRuleField_o *field;
  System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *pSVar2;
  System_Collections_Generic_List_ExperienceRuleField__o *__this_00;
  Il2CppObject *field_00;
  bool bVar3;
  int32_t iVar4;
  undefined1 local_60 [16];
  Settings_ExperienceRuleField_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184347e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    Il2CppMethodInitialized_184347e89 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceScore(controls,(MethodInfo *)0x0);
  if ((__this->fields).mode != (Settings_ExperienceRuleField_o *)0x0) {
    pGVar1 = (__this->fields).CS___8__locals1;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *)0x0)
    goto label_1823fe43d;
    field = (__this->fields).mode;
    pSVar2 = (pGVar1->fields).fields;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    iVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex(pSVar2,field,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceModeField
              (controls,field,iVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildVariantSelector(controls,(MethodInfo *)0x0);
  pGVar1 = (__this->fields).CS___8__locals1;
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *)0x0) &&
     (__this_00 = (pGVar1->fields).core,
     __this_00 != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext)
        ;
        field_00 = local_48.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
          return;
        }
      } while (((Settings_ExperienceRuleField_o *)local_48.fields._current == (__this->fields).map) ||
              ((Settings_ExperienceRuleField_o *)local_48.fields._current == (__this->fields).mode));
      pGVar1 = (__this->fields).CS___8__locals1;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *)0x0) break;
      pSVar2 = (pGVar1->fields).fields;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      iVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex
                        (pSVar2,(Settings_ExperienceRuleField_o *)field_00,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField
                (controls,(Settings_ExperienceRuleField_o *)field_00,iVar4,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
label_1823fe43d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass73_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass73_0$$<BuildVariantSelector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0___BuildVariantSelector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823fe450

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0___BuildVariantSelector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *options;
  Il2CppObject *object;
  System_String_o *pSVar2;
  System_String_o *value;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  
  if (Il2CppMethodInitialized_184347e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildVariantSelector_b__73_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-variants-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Override the experience settings with a mode variant.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Variants");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Variants");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-variants");
    Il2CppMethodInitialized_184347e8a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  value = "GameCreate.Configuration.Variants";
  pSVar2 = "text";
  pSVar1 = "game-create-variants-label";
  text = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                   ("GameCreate.Configuration.Variants","Variants",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,text,pSVar2,pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).textKey = value;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey,value);
      pSVar1 = (__this->fields).selected;
      options = (__this->fields).variants;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      pSVar2 = "game-create-variants";
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__73_1;
      if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_00,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildVariantSelector_b__73_1,
                   (MethodInfo_1387DC0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__73_1 =
             (System_Action_GisketchActionContext__o *)__this_00;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__73_1,
                   __this_00);
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_18c7b80
                         (row,pSVar2,pSVar1,options,(System_Action_GisketchActionContext__o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).formLabel = "Variants";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).formLabel,"Variants");
        (pGVar3->fields).tooltip = "Override the experience settings with a mode variant.";
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltip,"Override the experience settings with a mode variant.");
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        value_00 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout((MethodInfo *)0x0);
        (pGVar3->fields).layout = value_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass75_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass75_0$$<BuildExperienceSections>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0___BuildExperienceSections_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823fe700

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0___BuildExperienceSections_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184347e8b = '\x01';
  }
  if ((field != (Settings_ExperienceRuleField_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).assigned,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)(field->fields).Id,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    return !bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass75_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass75_1$$<BuildExperienceSections>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1___BuildExperienceSections_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823fe760

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1___BuildExperienceSections_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  Settings_ExperienceUISection_o *pSVar1;
  System_Collections_Generic_List_string__o *source;
  System_String_o *value;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184347e8c = '\x01';
  }
  pSVar1 = (__this->fields).section;
  if ((pSVar1 != (Settings_ExperienceUISection_o *)0x0) && (field != (Settings_ExperienceRuleField_o *)0x0)) {
    source = (pSVar1->fields).Settings;
    value = (field->fields).Id;
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    if (Il2CppMethodInitialized_184341f37 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_184341f37 = '\x01';
    }
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    bVar2 = System_Linq_Enumerable__Contains_object__6ba340
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,(Il2CppObject *)value,
                       (System_Collections_Generic_IEqualityComparer_TSource__o *)
                       TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                       (MethodInfo_6BA340 *)MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass77_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass77_0$$<BuildFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___BuildFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x1823fe830

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___BuildFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-right");
    il2cpp_codegen_initialize_runtime_metadata(&"-left");
    Il2CppMethodInitialized_184347e8d = '\x01';
  }
  pSVar1 = "clear";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar2);
  }
  pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-left",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,pSVar3,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "clear";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__2
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar2);
    }
    pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-right",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,pSVar3,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass77_0$$<BuildFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___BuildFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fea10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fea59: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1823fea5e: mov qword ptr [rsp + 0x38], rsi
// asm:   0x1823fec14: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x1823fec19: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___BuildFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  VirtualInvokeData *pVVar6;
  Settings_ExperienceRuleField_o *field;
  Settings_ExperienceRuleField_o *pSVar7;
  Settings_ExperienceRuleField_array *pSVar8;
  ushort uVar9;
  int iVar10;
  uint index;
  
  if (Il2CppMethodInitialized_184347e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_184347e8e = '\x01';
  }
  iVar10 = 0;
  if (0 < (__this->fields).split) {
    do {
      pIVar3 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar3 == (Il2CppObject *)0x0) {
label_1823fec2f:
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar3->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      if (uVar2 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        uVar9 = 0;
        do {
          if (pIVar5[uVar9].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar6 = pIVar4->vtable + pIVar5[uVar9].offset;
            goto label_1823feac6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_1823feac6:
      field = (Settings_ExperienceRuleField_o *)(*pVVar6->methodPtr)(pIVar3,iVar10,pVVar6->method);
      pIVar3 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar3 == (Il2CppObject *)0x0) goto label_1823fec2f;
      pIVar4 = pIVar3->klass;
      uVar9 = 0;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      if (uVar2 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        do {
          if (pIVar5[uVar9].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar6 = pIVar4->vtable + pIVar5[uVar9].offset;
            goto label_1823feb36;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_1823feb36:
      pSVar7 = (Settings_ExperienceRuleField_o *)(*pVVar6->methodPtr)(pIVar3,iVar10,pVVar6->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_184347e39 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347e39 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)0x0);
      index = 0;
      if (pSVar8 == (Settings_ExperienceRuleField_array *)0x0) goto label_1823fec2f;
      for (; uVar1 = (uint)pSVar8->max_length, (int)index < (int)uVar1; index = index + 1) {
        if (uVar1 <= index) {
          ThrowIndexOutOfRangeException();
        }
        if (pSVar8->m_Items[(int)index] == pSVar7) goto label_1823febfb;
      }
      index = 0xffffffff;
label_1823febfb:
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField(column,field,index,(MethodInfo *)0x0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass77_0$$<BuildFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___BuildFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823fec40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823fec99: nop dword ptr [rax]
// asm:   0x1823feed1: jmp 0x1823feca0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0___BuildFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  int iVar6;
  VirtualInvokeData *pVVar7;
  Settings_ExperienceRuleField_o *field;
  Settings_ExperienceRuleField_o *pSVar8;
  Settings_ExperienceRuleField_array *pSVar9;
  ushort uVar10;
  int iVar11;
  uint index;
  
  if (Il2CppMethodInitialized_184347e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_184347e8f = '\x01';
  }
  iVar11 = (__this->fields).split;
  pIVar3 = (Il2CppObject *)(__this->fields).fields;
  while (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar3->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      uVar10 = 0;
      do {
        if (pIVar5[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
          pVVar7 = pIVar4->vtable + pIVar5[uVar10].offset;
          goto label_1823fecf6;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar3,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0);
label_1823fecf6:
    iVar6 = (*pVVar7->methodPtr)(pIVar3,pVVar7->method);
    if (iVar6 <= iVar11) {
      return;
    }
    pIVar3 = (Il2CppObject *)(__this->fields).fields;
    if (pIVar3 == (Il2CppObject *)0x0) break;
    pIVar4 = pIVar3->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      uVar10 = 0;
      do {
        if (pIVar5[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
          pVVar7 = pIVar4->vtable + pIVar5[uVar10].offset;
          goto label_1823fed66;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar3,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_1823fed66:
    field = (Settings_ExperienceRuleField_o *)(*pVVar7->methodPtr)(pIVar3,iVar11,pVVar7->method);
    pIVar3 = (Il2CppObject *)(__this->fields).fields;
    if (pIVar3 == (Il2CppObject *)0x0) break;
    pIVar4 = pIVar3->klass;
    uVar10 = 0;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
          pVVar7 = pIVar4->vtable + pIVar5[uVar10].offset;
          goto label_1823fedd6;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar3,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_1823fedd6:
    pSVar8 = (Settings_ExperienceRuleField_o *)(*pVVar7->methodPtr)(pIVar3,iVar11,pVVar7->method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    if (Il2CppMethodInitialized_184347e39 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347e39 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)0x0);
    index = 0;
    if (pSVar9 == (Settings_ExperienceRuleField_array *)0x0) break;
    for (; uVar1 = (uint)pSVar9->max_length, (int)index < (int)uVar1; index = index + 1) {
      if (uVar1 <= index) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar9->m_Items[(int)index] == pSVar8) goto label_1823feeb8;
    }
    index = 0xffffffff;
label_1823feeb8:
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField(column,field,index,(MethodInfo *)0x0);
    iVar11 = iVar11 + 1;
    pIVar3 = (Il2CppObject *)(__this->fields).fields;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass80_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass80_0$$<BuildSandboxFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___BuildSandboxFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x1823fef00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___BuildSandboxFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184347e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields-left");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields-right");
    Il2CppMethodInitialized_184347e90 = '\x01';
  }
  pSVar1 = "clear";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar2);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-sandbox-fields-left",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "clear";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__2
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar2);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar1,(System_Action_AottgUi__o *)pUVar2,"game-create-sandbox-fields-right",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass80_0$$<BuildSandboxFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___BuildSandboxFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823ff0c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ff108: mov qword ptr [rsp + 0x60], rbx
// asm:   0x1823ff10d: nop dword ptr [rax]
// asm:   0x1823ff13f: nop 
// asm:   0x1823ff1a6: mov rbx, qword ptr [rsp + 0x60]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___BuildSandboxFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  int index;
  ulonglong uVar7;
  ulonglong uVar5;
  
  if (Il2CppMethodInitialized_184347e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_184347e91 = '\x01';
  }
  uVar7 = 0;
  if (0 < (__this->fields).split) {
    do {
      obj = (Il2CppObject *)(__this->fields).fields;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar5 = 0;
        do {
          if (pIVar3[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar6 = pIVar2->vtable + pIVar3[uVar5].offset;
            goto label_1823ff162;
          }
          uVar4 = (short)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_1823ff162:
      index = (int)uVar7;
      field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar6->methodPtr)(obj,index,pVVar6->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
                (column,field,index,true,(MethodInfo *)0x0);
      uVar7 = (ulonglong)(index + 1U);
    } while ((int)(index + 1U) < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass80_0$$<BuildSandboxFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___BuildSandboxFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x1823ff1e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ff346: jmp 0x1823ff240

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0___BuildSandboxFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  ulonglong uVar6;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  ushort uVar7;
  Il2CppObject *pIVar8;
  int32_t index;
  
  if (Il2CppMethodInitialized_184347e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_184347e92 = '\x01';
  }
  pIVar8 = (Il2CppObject *)(__this->fields).fields;
  index = (__this->fields).split;
  if (pIVar8 != (Il2CppObject *)0x0) {
    do {
      pIVar2 = pIVar8->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar6 = 0;
        do {
          if (pIVar3[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar6].offset;
            goto label_1823ff296;
          }
          uVar7 = (short)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_1823ff296:
      iVar4 = (*pVVar5->methodPtr)(pIVar8,pVVar5->method);
      if (iVar4 <= index) {
        return;
      }
      pIVar8 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar8 == (Il2CppObject *)0x0) break;
      pIVar2 = pIVar8->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        uVar6 = 0;
        do {
          if (pIVar3[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar6].offset;
            goto label_1823ff302;
          }
          uVar7 = (short)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_1823ff302:
      field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar5->methodPtr)(pIVar8,index,pVVar5->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
                (column,field,index,true,(MethodInfo *)0x0);
      pIVar8 = (Il2CppObject *)(__this->fields).fields;
      index = index + 1;
    } while (pIVar8 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___cctor (const MethodInfo* method);
// 0x1823e46d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Il2CppObject *object;
  System_String_o *pSVar1;
  System_String_array *value;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_cctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateDescriptionScrollLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347df2 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "general.MapName";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "general.MapName";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "general.GameMode";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "general.GameMode";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "general.Difficulty";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "general.Difficulty";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "general.WeatherIndex";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "general.WeatherIndex";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->CoreFieldIds = value;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->CoreFieldIds,
                       value);
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
            }
            __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
            }
            object = (Il2CppObject *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory
                                  );
            Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
                      (__this_00,object,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_cctor_b__5_0,
                       (MethodInfo *)0x0);
            if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
              Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                        (__this,"GameCreateDescriptionScrollLayout",__this_00,(MethodInfo *)0x0);
              return;
            }
            goto label_1823e48d3;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1823e48d3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, const MethodInfo* method);
// 0x1823e4a00

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_184347df3 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, const MethodInfo* method);
// 0x1823e48e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347df4 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","Stretch",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Build (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e1250

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *sidePanel;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_02;
  
  if (Il2CppMethodInitialized_184347df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    Il2CppMethodInitialized_184347df5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  sidePanel = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel((MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent,(MethodInfo *)0x0)
  ;
  __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
            (__this_02,sidePanel,(System_Action_AottgUi__o *)__this_00,(System_Action_AottgUi__o *)__this_01,
             (MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823e3510

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347df6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (((root->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && ((((root->fields)._Screens_k__BackingField)->fields)._active !=
           (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately(root,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshTitanHeadBounds
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshTitanHeadBounds (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823e31b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e34c9: movzx eax, r15b
// asm:   0x1823e34cd: jmp 0x1823e34d1

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshTitanHeadBounds
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  Il2CppClass *id;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Selectable_o *__this_00;
  uint uVar8;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMin");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot update titan head bounds: missing input for ");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMax");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_184347df7 = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      return false;
    }
    if ((((root->fields)._Screens_k__BackingField)->fields)._active ==
        (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return false;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    lVar5 = il2cpp_runtime_helper_181dd5530(0);
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x60) != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x98), lVar5 != 0)) {
      iVar1 = *(int *)(lVar5 + 0x1c);
      pIVar6 = SZArrayNew(TypeInfo_string_array,2);
      pSVar7 = "titan.TitanHeadRandomMin";
      if (pIVar6 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar6[1].monitor != 0) {
          pIVar6[2].klass = (Il2CppClass *)"titan.TitanHeadRandomMin";
          Il2CppCodeGenWriteBarrier(&pIVar6[2].klass,pSVar7);
          pSVar7 = "titan.TitanHeadRandomMax";
          if (1 < *(uint *)&pIVar6[1].monitor) {
            pIVar6[2].monitor = "titan.TitanHeadRandomMax";
            Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor,pSVar7);
            uVar8 = 0;
            bVar3 = true;
            while( true ) {
              if (*(int *)&pIVar6[1].monitor <= (int)uVar8) {
                return bVar3;
              }
              if (*(uint *)&pIVar6[1].monitor <= uVar8) break;
              pGVar2 = (root->fields)._Screens_k__BackingField;
              if (pGVar2 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_1823e34fc;
              __this = (pGVar2->fields)._active;
              id = (&pIVar6[2].klass)[(int)uVar8];
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              local_res8[0] =
                   Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex
                             ((System_String_o *)id,(MethodInfo *)0x0);
              pSVar7 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
              pSVar7 = System_String__Concat_1969e50("game-create-sandbox-field-",pSVar7,(MethodInfo *)0x0);
              if (__this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_1823e34fc;
              x = (UnityEngine_Object_o *)
                  Gisketch_Aottg2UI_Building_GisketchView__Find(__this,pSVar7,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar4) {
                if (x == (UnityEngine_Object_o *)0x0) goto label_1823e34fc;
                __this_00 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)x,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
              }
              else {
                __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar4) {
                pSVar7 = System_String__Concat_1969e50
                                   ("Cannot update titan head bounds: missing input for ",(System_String_o *)id,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                bVar3 = false;
                uVar8 = uVar8 + 1;
              }
              else {
                if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0) goto label_1823e34fc;
                UnityEngine_UI_Selectable__set_interactable(__this_00,iVar1 == 1,(MethodInfo *)0x0);
                uVar8 = uVar8 + 1;
              }
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1823e34fc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshImmediately
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823e2cb0

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *ownerId;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar8;
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *pGVar9;
  
  if (Il2CppMethodInitialized_184347df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_RefreshImmediately_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-content");
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-button-room-button");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-runtime");
    Il2CppMethodInitialized_184347df8 = '\x01';
  }
  if (((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
      (pGVar1 = (root->fields)._Screens_k__BackingField,
      pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) &&
     (__this = (pGVar1->fields)._active, __this != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    bVar4 = true;
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Building_GisketchView__Find(__this,"brush-side-panel-button-room-button",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (bVar3 != TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      ownerId = "brush-side-panel";
      pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__13_0;
      if (pUVar7 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
        pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar7,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_RefreshImmediately_b__13_0,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__13_0 =
             (System_Action_AottgUi__o *)pUVar7;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__13_0,pUVar7);
      }
      pGVar8 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (root,ownerId,(System_Action_AottgUi__o *)pUVar7,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1823e31aa;
      if (((int)pGVar8->max_length == 1) &&
         (pGVar8->m_Items[0] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar2 = pGVar8->m_Items[0];
        pGVar9 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
        Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(pGVar9,(MethodInfo *)0x0);
        if (pGVar9 == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_1823e31aa;
        (pGVar9->fields).PreserveScroll = true;
        (pGVar9->fields).PreserveFocus = false;
        (pGVar9->fields).SettleLayout = true;
        bVar4 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                          (root,"brush-side-panel",pGVar2,pGVar9,(MethodInfo *)0x0);
      }
      else {
        bVar4 = false;
      }
    }
    pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar7,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter,(MethodInfo *)0x0
              );
    pGVar8 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                       (root,"game-create-footer",(System_Action_AottgUi__o *)pUVar7,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if (((int)pGVar8->max_length == 1) &&
         (pGVar8->m_Items[0] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar2 = pGVar8->m_Items[0];
        pGVar9 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
        Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(pGVar9,(MethodInfo *)0x0);
        if (pGVar9 == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_1823e31aa;
        (pGVar9->fields).PreserveScroll = true;
        (pGVar9->fields).PreserveFocus = false;
        (pGVar9->fields).SettleLayout = true;
        bVar3 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                          (root,"game-create-footer",pGVar2,pGVar9,(MethodInfo *)0x0);
      }
      else {
        bVar3 = false;
      }
      pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar7,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent,
                 (MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (root,"game-create-content",(System_Action_AottgUi__o *)pUVar7,"game-create-runtime",
                          (MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if (((int)pGVar8->max_length == 1) &&
           (pGVar8->m_Items[0] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          pGVar2 = pGVar8->m_Items[0];
          pGVar9 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
          Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(pGVar9,(MethodInfo *)0x0);
          if (pGVar9 == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_1823e31aa;
          (pGVar9->fields).PreserveScroll = true;
          (pGVar9->fields).PreserveFocus = true;
          (pGVar9->fields).SettleLayout = true;
          bVar5 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                            (root,"game-create-content",pGVar2,pGVar9,(MethodInfo *)0x0);
          if (bVar5) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
            if (bVar6) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              if (Il2CppMethodInitialized_184347f0b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184347f0b = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              bVar6 = System_String__op_Equality
                                (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                 _SandboxSection_k__BackingField,"Weather",(MethodInfo *)0x0);
              if (bVar6) {
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SyncState(root,(MethodInfo *)0x0);
              }
            }
          }
        }
        else {
          bVar5 = false;
        }
        return (bool)(bVar5 & bVar3 & bVar4);
      }
    }
  }
label_1823e31aa:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildContent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildContent (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d7550

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildContent
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347df9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__14_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__14_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__14_0,__this);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,24.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this,"game-create-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildMain
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMain (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823dada0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823db3c4: lea rcx, [rax + 0x28]
// asm:   0x1823db3c8: mov qword ptr [rax + 0x28], r14
// asm:   0x1823db3cc: mov rdx, r14
// asm:   0x1823db3cf: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823db3d4: xor r8d, r8d
// asm:   0x1823db3d7: xor edx, edx
// asm:   0x1823db3d9: mov rcx, rsi
// asm:   0x1823db3dc: call 0x1823db470  ; Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom()
// asm:   0x1823db3e1: jmp 0x1823db100

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMain
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  bool bVar3;
  longlong lVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184347dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-not-loaded");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose Create Game to load experiences.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.NotLoaded");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347dfa = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar2 = "GameCreate.NotLoaded";
    pSVar1 = "text";
    pSVar7 = "game-create-not-loaded";
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.NotLoaded","Choose Create Game to load experiences.",(MethodInfo *)0x0);
    if ((ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
       (pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (ui,pSVar5,pSVar1,pSVar7,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
       pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_1823db463;
    (pGVar6->fields).textKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0c = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
        _ShowRoomSettings_k__BackingField != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_184347e27 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
        il2cpp_codegen_initialize_runtime_metadata(&"Room Settings");
        il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-description");
        il2cpp_codegen_initialize_runtime_metadata(&"header");
        il2cpp_codegen_initialize_runtime_metadata(&"Configure who can join and how players communicate.");
        il2cpp_codegen_initialize_runtime_metadata(&"text");
        il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-page-title");
        il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Description");
        Il2CppMethodInitialized_184347e27 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar2 = "GameCreate.Room.Title";
      pSVar1 = "header";
      pSVar7 = "game-create-room-page-title";
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Room.Title","Room Settings",(MethodInfo *)0x0);
      if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (ui,pSVar5,pSVar1,pSVar7,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
         pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar6->fields).textKey = pSVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
        pSVar2 = "GameCreate.Room.Description";
        pSVar1 = "text";
        pSVar7 = "game-create-room-description";
        pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Room.Description","Configure who can join and how players communicate.",(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (ui,pSVar5,pSVar1,pSVar7,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).textKey = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom(ui,false,(MethodInfo *)0x0);
          return;
        }
      }
label_1823db463:
      ThrowNullReferenceException();
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0d = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField
        != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      lVar4 = il2cpp_runtime_helper_1823d56d0(0);
      if (lVar4 == 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
        if (!bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          if (Il2CppMethodInitialized_184347e02 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)
            ;
            il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
            il2cpp_codegen_initialize_runtime_metadata(&"Choose a favorite experience or Sandbox preset.");
            il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
            il2cpp_codegen_initialize_runtime_metadata(&"Favorites");
            il2cpp_codegen_initialize_runtime_metadata(&"header");
            il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Description");
            il2cpp_codegen_initialize_runtime_metadata(&"text");
            il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
            Il2CppMethodInitialized_184347e02 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          pSVar2 = "GameCreate.Favorites";
          pSVar1 = "header";
          pSVar7 = "game-create-browser-title";
          pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                             ("GameCreate.Favorites","Favorites",(MethodInfo *)0x0);
          if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
             (pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                 (ui,pSVar5,pSVar1,pSVar7,(System_String_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
             pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
            (pGVar6->fields).textKey = pSVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
            pSVar2 = "GameCreate.Favorites.Description";
            pSVar1 = "text";
            pSVar7 = "game-create-browser-description";
            pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                               ("GameCreate.Favorites.Description","Choose a favorite experience or Sandbox preset.",(MethodInfo *)0x0);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                               (ui,pSVar5,pSVar1,pSVar7,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar6->fields).textKey = pSVar2;
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,false,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_1823db463;
        }
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandbox(ui,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      lVar4 = il2cpp_runtime_helper_1823d56d0(0);
      if (lVar4 == 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_1823d58c0(0);
        bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_181dd54e0(0);
          bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
          if (bVar3) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategories(ui,(MethodInfo *)0x0);
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategories(ui,(MethodInfo *)0x0);
          }
        }
        else {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperiences(ui,(MethodInfo *)0x0);
        }
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildConfiguration(ui,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCategories
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategories (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d62d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategories
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *object;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_array *pSVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"No official experiences are available. Sandbox remains available.");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-load-error");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-browser");
    il2cpp_codegen_initialize_runtime_metadata(&"Well established community gamemodes/configurations");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a category");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_184347dfb = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar3 = "GameCreate.Categories.Title";
  pSVar2 = "header";
  pSVar1 = "game-create-browser-title";
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Categories.Title","Choose a category",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar5,pSVar2,pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).textKey = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar3);
      pSVar3 = "GameCreate.Categories.Description";
      pSVar2 = "text";
      pSVar1 = "game-create-browser-description";
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Categories.Description","Well established community gamemodes/configurations",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar5,pSVar2,pSVar1,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar3);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories((MethodInfo *)0x0);
        if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *)0x0) {
          (object->fields).categories = pSVar7;
          Il2CppCodeGenWriteBarrier(&(object->fields).categories,pSVar7);
          __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (__this,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__0
                     ,(MethodInfo *)0x0);
          width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,"Stretch",
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,24.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-choice-browser",layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184347f10 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347f10 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          bVar4 = System_String__IsNullOrEmpty
                            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                             _LoadError_k__BackingField,(MethodInfo *)0x0);
          if (bVar4) {
            pSVar7 = (object->fields).categories;
            if (pSVar7 == (System_String_array *)0x0) goto label_1823d67ad;
            if (pSVar7->max_length == 0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              pSVar3 = "GameCreate.Categories.Empty";
              pSVar2 = "text";
              pSVar1 = "game-create-empty";
              pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                 ("GameCreate.Categories.Empty","No official experiences are available. Sandbox remains available.",(MethodInfo *)0x0);
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                 (ui,pSVar5,pSVar2,pSVar1,(System_String_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823d67ad;
              (pGVar6->fields).textKey = pSVar3;
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar3);
            }
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_184347f10 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347f10 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Code_AottgUi__Callout
                      (ui,3,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                            _LoadError_k__BackingField,"game-create-load-error",(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_1823d67ad:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CategoryPreview (System_String_o* category, const MethodInfo* method);
// 0x1823e1570

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CategoryPreview(System_String_o *category,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/PVPPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/CompetitivePreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/GeneralPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/CasualPreview");
    Il2CppMethodInitialized_184347dfc = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"Casual",(MethodInfo *)0x0);
  if (bVar1) {
    return "Data/ExperiencePreview/CasualPreview";
  }
  bVar1 = System_String__op_Equality(category,"Competitive",(MethodInfo *)0x0);
  if (bVar1) {
    return "Data/ExperiencePreview/CompetitivePreview";
  }
  bVar1 = System_String__op_Equality(category,"PVP",(MethodInfo *)0x0);
  pSVar2 = "Data/ExperiencePreview/GeneralPreview";
  if (bVar1) {
    pSVar2 = "Data/ExperiencePreview/PVPPreview";
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSubcategories
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategories (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823dff30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategories
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *object;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_array *pSVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0_BuildSubcategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Subcategories.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"Well established community gamemodes/configurations");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a subcategory");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_184347dfd = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar4 = "GameCreate.Subcategories.Title";
  pSVar3 = "header";
  pSVar2 = "game-create-browser-title";
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Subcategories.Title","Choose a subcategory",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).textKey = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
      pSVar4 = "GameCreate.Categories.Description";
      pSVar3 = "text";
      pSVar2 = "game-create-browser-description";
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Categories.Description","Well established community gamemodes/configurations",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)0x0);
        if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *)0x0) {
          (object->fields).subcategories = pSVar7;
          Il2CppCodeGenWriteBarrier(&(object->fields).subcategories,pSVar7);
          pSVar7 = (object->fields).subcategories;
          if (pSVar7 != (System_String_array *)0x0) {
            __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (__this,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0_BuildSubcategories_b__0
                       ,(MethodInfo *)0x0);
            pSVar2 = "game-create-subcategory-grid";
            iVar1 = pSVar7->max_length;
            if (Il2CppMethodInitialized_184347e01 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
              Il2CppMethodInitialized_184347e01 = '\x01';
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
            Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                      (__this_00,pSVar2,(int32_t)iVar1,360.0,14.0,(System_Action_AottgUi__o *)__this,18.0,-1,
                       (MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SubcategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryPreview (System_String_o* subcategory, const MethodInfo* method);
// 0x1823e4390

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryPreview
          (System_String_o *subcategory,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Map_Experience_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Object_array *experiences;
  Map_Experience_o *pMVar3;
  
  if (Il2CppMethodInitialized_184347dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Take_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Hard");
    il2cpp_codegen_initialize_runtime_metadata(&"Ranking");
    il2cpp_codegen_initialize_runtime_metadata(&"Mission");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/RankingPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
    il2cpp_codegen_initialize_runtime_metadata(&"Iri Crystal");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Basic");
    il2cpp_codegen_initialize_runtime_metadata(&"Akina");
    Il2CppMethodInitialized_184347dfe = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Category_k__BackingField,"Mission",(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3b = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar1 = System_String__op_Equality
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Category_k__BackingField,"PVP",(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3b = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar1 = System_String__op_Inequality
                        (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                         _Category_k__BackingField,"Competitive",(MethodInfo *)0x0);
      if (bVar1) {
        return (System_String_o *)0x0;
      }
      bVar1 = System_String__op_Equality(subcategory,"Ranking",(MethodInfo *)0x0);
      if (bVar1) {
        return "Data/ExperiencePreview/RankingPreview";
      }
      bVar1 = System_String__op_Equality(subcategory,"Racing Basic",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(subcategory,"Racing Hard",(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_String_o *)0x0;
        }
        pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite
                           ("Iri Crystal",(MethodInfo *)0x0);
        return pSVar2;
      }
      pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite
                         ("Akina",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
                     (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _Category_k__BackingField,subcategory,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Take_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,1,
                         (MethodInfo_6C7960 *)MethodInfo_System_Linq_Enumerable_Take_Experience);
  experiences = System_Linq_Enumerable__ToArray_object_
                          (source_00,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience
                          );
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
            ((System_Collections_Generic_IEnumerable_Experience__o *)experiences,(MethodInfo *)0x0);
  pMVar3 = System_Linq_Enumerable__FirstOrDefault_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)experiences,
                      (MethodInfo_6BD090 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience);
  if (pMVar3 == (Map_Experience_o *)0x0) {
    return (System_String_o *)0x0;
  }
  return (pMVar3->fields).Preview;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperiences
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperiences (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d9220

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperiences
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *object;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Map_Experience_array *pMVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0_BuildExperiences_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"Well established community gamemodes/configurations");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose an experience");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Experiences.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_184347dff = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar4 = "GameCreate.Experiences.Title";
  pSVar3 = "header";
  pSVar2 = "game-create-browser-title";
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Experiences.Title","Choose an experience",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).textKey = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
      pSVar4 = "GameCreate.Categories.Description";
      pSVar3 = "text";
      pSVar2 = "game-create-browser-description";
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Categories.Description","Well established community gamemodes/configurations",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector(ui,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pMVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences((MethodInfo *)0x0);
        if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *)0x0) {
          (object->fields).experiences = pMVar7;
          Il2CppCodeGenWriteBarrier(&(object->fields).experiences,pMVar7);
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
                    ((System_Collections_Generic_IEnumerable_Experience__o *)(object->fields).experiences,
                     (MethodInfo *)0x0);
          pMVar7 = (object->fields).experiences;
          if (pMVar7 != (Map_Experience_array *)0x0) {
            __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (__this,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0_BuildExperiences_b__0
                       ,(MethodInfo *)0x0);
            pSVar2 = "game-create-experience-grid";
            iVar1 = pMVar7->max_length;
            if (Il2CppMethodInitialized_184347e01 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
              Il2CppMethodInitialized_184347e01 = '\x01';
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
            Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                      (__this_00,pSVar2,(int32_t)iVar1,360.0,14.0,(System_Action_AottgUi__o *)__this,18.0,-1,
                       (MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildChoiceGrid
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceGrid (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, int32_t count, System_Action_AottgUi__o* buildChoices, const MethodInfo* method);
// 0x1823d6990

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceGrid
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,int32_t count,
               System_Action_AottgUi__o *buildChoices,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this;
  
  if (Il2CppMethodInitialized_184347e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
    Il2CppMethodInitialized_184347e00 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
            (__this,id,count,360.0,14.0,buildChoices,true,18.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildChoiceCarousel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceCarousel (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, int32_t count, System_Action_AottgUi__o* buildChoices, const MethodInfo* method);
// 0x1823d68e0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceCarousel
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,int32_t count,
               System_Action_AottgUi__o *buildChoices,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this;
  
  if (Il2CppMethodInitialized_184347e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
    Il2CppMethodInitialized_184347e01 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
            (__this,id,count,360.0,14.0,buildChoices,18.0,-1,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavorites
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavorites (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d9b10

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavorites
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  
  if (Il2CppMethodInitialized_184347e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a favorite experience or Sandbox preset.");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_184347e02 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar3 = "GameCreate.Favorites";
  pSVar2 = "header";
  pSVar1 = "game-create-browser-title";
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Favorites","Favorites",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar4,pSVar2,pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).textKey,pSVar3);
      pSVar3 = "GameCreate.Favorites.Description";
      pSVar2 = "text";
      pSVar1 = "game-create-browser-description";
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Favorites.Description","Choose a favorite experience or Sandbox preset.",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar4,pSVar2,pSVar1,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).textKey = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).textKey,pSVar3);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavoriteChoices
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices (Gisketch_Aottg2UI_Code_AottgUi_o* ui, bool compact, const MethodInfo* method);
// 0x1823d9720
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d9abe: xor r8d, r8d
// asm:   0x1823d9ac1: mov rdx, rdi
// asm:   0x1823d9ac4: mov rcx, rbp
// asm:   0x1823d9ac7: call 0x1818c79a0  ; Gisketch_Aottg2UI_Code_AottgUi__Component()
// asm:   0x1823d9acc: jmp 0x1823d9999
// asm:   0x1823d9ae6: mov rdx, qword ptr [rip + 0x1d09473]  ; "game-create-favorites-selector"
// asm:   0x1823d9aed: xor r9d, r9d
// asm:   0x1823d9af0: mov r8, rbx
// asm:   0x1823d9af3: mov rcx, rbp
// asm:   0x1823d9af6: call 0x1823d6170  ; Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow()
// asm:   0x1823d9afb: jmp 0x1823d9999

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,bool compact,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  il2cpp_array_size_t iVar1;
  il2cpp_array_size_t iVar2;
  System_String_o *pSVar3;
  System_String_o *style;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *object;
  System_Func_Experience__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Map_Experience_array *pMVar4;
  System_String_array *pSVar5;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this_01;
  
  if (Il2CppMethodInitialized_184347e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0_BuildFavoriteChoices_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorites-selector");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorites-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Click the star on an experience or Sandbox preset to add it here.");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorites-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347e03 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *)0x0) {
    (object->fields).compact = compact;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347ee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
      Il2CppMethodInitialized_184347ee7 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite,
               (MethodInfo_B61EB0 *)0x0);
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
    pMVar4 = (Map_Experience_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    (object->fields).experiences = pMVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).experiences,pMVar4);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoritePresetNames((MethodInfo *)0x0);
    (object->fields).presets = pSVar5;
    Il2CppCodeGenWriteBarrier(&(object->fields).presets,pSVar5);
    pMVar4 = (object->fields).experiences;
    if (pMVar4 != (Map_Experience_array *)0x0) {
      if (pMVar4->max_length == 0) {
        pSVar5 = (object->fields).presets;
        if (pSVar5 == (System_String_array *)0x0) goto label_1823d9b00;
        if (pSVar5->max_length == 0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          value = "GameCreate.Favorites.Empty";
          style = "text";
          pSVar3 = "game-create-favorites-empty";
          text = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Favorites.Empty","Click the star on an experience or Sandbox preset to add it here.",(MethodInfo *)0x0);
          if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
             (pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                 (ui,text,style,pSVar3,(System_String_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
             pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
            (pGVar6->fields).textKey = value;
            Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,value);
            return;
          }
          goto label_1823d9b00;
        }
      }
      if ((object->fields).compact == false) {
        pMVar4 = (object->fields).experiences;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
                  ((System_Collections_Generic_IEnumerable_Experience__o *)pMVar4,(MethodInfo *)0x0);
      }
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0_BuildFavoriteChoices_b__0
                 ,(MethodInfo *)0x0);
      if ((object->fields).compact != false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow
                  (ui,"game-create-favorites-selector",(System_Action_AottgUi__o *)__this_00,(MethodInfo *)0x0);
        return;
      }
      pMVar4 = (object->fields).experiences;
      if ((pMVar4 != (Map_Experience_array *)0x0) &&
         (pSVar5 = (object->fields).presets, pSVar5 != (System_String_array *)0x0)) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pSVar3 = "game-create-favorites-grid";
        iVar1 = pSVar5->max_length;
        iVar2 = pMVar4->max_length;
        if (Il2CppMethodInitialized_184347e00 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
          Il2CppMethodInitialized_184347e00 = '\x01';
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
        Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
                  (__this_01,pSVar3,(int)iVar1 + (int)iVar2,360.0,14.0,(System_Action_AottgUi__o *)__this_00,
                   true,18.0,(MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1823d9b00:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavoriteChoice
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* title, System_String_o* description, System_String_o* preview, int32_t index, bool compact, bool selected, System_Action_o* select, const MethodInfo* method);
// 0x1823d9520
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d96f2: lea rcx, [rbx + 0x120]
// asm:   0x1823d96f9: mov qword ptr [rbx + 0x120], rax
// asm:   0x1823d9700: mov rdx, rax
// asm:   0x1823d9703: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823d9708: jmp 0x1823d9671

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *title,
               System_String_o *description,System_String_o *preview,int32_t index,bool compact,bool selected,
               System_Action_o *select,MethodInfo *method)

{
  int32_t variant;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *object;
  DG_Tweening_Core_DOSetter_Color2__o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0_BuildFavoriteChoice_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0);
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    Il2CppMethodInitialized_184347e04 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *)0x0) {
    (object->fields).select = select;
    Il2CppCodeGenWriteBarrier(&(object->fields).select,select);
    __this = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0_BuildFavoriteChoice_b__0
               ,(MethodInfo_1387DC0 *)0x0);
    if (compact) {
      variant = 0;
      if (!selected) {
        variant = 5;
      }
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                           (ui,variant,title,(System_Action_GisketchActionContext__o *)__this,id,description,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).layout = value;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
          return;
        }
      }
    }
    else {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
      Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                (__this_00,id,title,description,(System_String_o *)0x0,"star",index,preview,
                 (System_Action_GisketchActionContext__o *)__this,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCategorySelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d67c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *object;
  System_String_array *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_184347e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0_BuildCategorySelector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-selector");
    Il2CppMethodInitialized_184347e05 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories((MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *)0x0) {
    (object->fields).categories = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).categories,value);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0_BuildCategorySelector_b__0
               ,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow
              (ui,"game-create-category-selector",(System_Action_AottgUi__o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSubcategorySelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e0220

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_SubcategoryLabel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.subcategory");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-selector");
    Il2CppMethodInitialized_184347e06 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)0x0);
  if (pSVar1 != (System_String_array *)0x0) {
    if (1 < (int)pSVar1->max_length) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_SubcategoryLabel,
                 (MethodInfo_16E67D0 *)0x0);
      source = System_Linq_Enumerable__Select_Vector3__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                          (System_Func_TSource__TResult__o *)__this,
                          (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
      pSVar1 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f0f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f0f = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Subcategory_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryLabel(pSVar2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactRow
                (ui,"game-create-subcategory-selector",pSVar1,pSVar2,"gameCreate.select.subcategory","game-create-subcategory-",1,true,
                 (MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SubcategoryLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryLabel (System_String_o* subcategory, const MethodInfo* method);
// 0x1823e42c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryLabel
          (System_String_o *subcategory,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Advanced");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Hard");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Easy");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Racing.Advanced");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Racing.Easy");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Basic");
    Il2CppMethodInitialized_184347e07 = '\x01';
  }
  bVar1 = System_String__op_Equality(subcategory,"Racing Basic",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(subcategory,"Racing Hard",(MethodInfo *)0x0);
    if (!bVar1) {
      return subcategory;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Racing.Advanced","Racing Advanced",(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Racing.Easy","Racing Easy",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d9020

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Map_Experience_array *array;
  int32_t selectedIndex;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *object;
  Map_Experience_array *pMVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Experience);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildExperienceSelector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-selector");
    Il2CppMethodInitialized_184347e08 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences((MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *)0x0) {
    (object->fields).experiences = pMVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).experiences,pMVar1);
    pMVar1 = (object->fields).experiences;
    if (pMVar1 != (Map_Experience_array *)0x0) {
      if (1 < (int)pMVar1->max_length) {
        __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildExperienceSelector_b__0
                   ,(MethodInfo *)0x0);
        array = (object->fields).experiences;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347f0e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347f0e = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        selectedIndex =
             System_Array__IndexOf_object_
                       ((System_Object_array *)array,
                        (Il2CppObject *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _Experience_k__BackingField,
                        (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Experience);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
        Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                  (__this_00,"game-create-experience-selector",(int32_t)pMVar1->max_length,46.0,10.0,
                   (System_Action_AottgUi__o *)__this,0.0,selectedIndex,(MethodInfo *)0x0);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823d9219;
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823d9219:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCompactRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_array* values, System_String_o* selected, System_String_o* actionId, System_String_o* itemPrefix, int32_t selectedVariant, bool carousel, const MethodInfo* method);
// 0x1823d6b20
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d6d41: xor r8d, r8d
// asm:   0x1823d6d44: mov rdx, rdi
// asm:   0x1823d6d47: mov rcx, rbp
// asm:   0x1823d6d4a: call 0x1818c79a0  ; Gisketch_Aottg2UI_Code_AottgUi__Component()
// asm:   0x1823d6d4f: jmp 0x1823d6c89

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_array *values,
               System_String_o *selected,System_String_o *actionId,System_String_o *itemPrefix,
               int32_t selectedVariant,bool carousel,MethodInfo *method)

{
  System_String_array *array;
  int32_t selectedIndex;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Predicate_T__o *match;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_FindIndex_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass30_0_BuildCompactRow_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass30_0_BuildCompactRow_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass30_0);
    Il2CppMethodInitialized_184347e09 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass30_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass30_0_o *)0x0) {
    (object->fields).values = values;
    Il2CppCodeGenWriteBarrier(&(object->fields).values,values);
    (object->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(object->fields).selected,selected);
    (object->fields).actionId = actionId;
    Il2CppCodeGenWriteBarrier(&(object->fields).actionId,actionId);
    (object->fields).itemPrefix = itemPrefix;
    Il2CppCodeGenWriteBarrier(&(object->fields).itemPrefix,itemPrefix);
    (object->fields).selectedVariant = selectedVariant;
    (object->fields).carousel = carousel;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass30_0_BuildCompactRow_b__0
               ,(MethodInfo *)0x0);
    if ((object->fields).carousel == false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow
                (ui,id,(System_Action_AottgUi__o *)__this,(MethodInfo *)0x0);
      return;
    }
    array = (object->fields).values;
    if (array != (System_String_array *)0x0) {
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass30_0_BuildCompactRow_b__1
                 ,(MethodInfo_B61EB0 *)0x0);
      selectedIndex =
           System_Array__FindIndex_object_
                     ((System_Object_array *)array,match,
                      (MethodInfo_75D460 *)MethodInfo_System_Array_FindIndex_string);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
      Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                (__this_00,id,(int32_t)array->max_length,46.0,10.0,(System_Action_AottgUi__o *)__this,0.0,
                 selectedIndex,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CarouselButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout (const MethodInfo* method);
// 0x1823e1480

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184347e0a = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(46.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildButtonRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_Action_AottgUi__o* buildButtons, const MethodInfo* method);
// 0x1823d6170

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,
               System_Action_AottgUi__o *buildButtons,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_184347e0b = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,"Wrap",10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",buildButtons,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCompactChoice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, bool selected, System_String_o* actionId, System_String_o* id, int32_t selectedVariant, System_String_o* icon, const MethodInfo* method);
// 0x1823d6a40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice
          (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,bool selected,System_String_o *actionId
          ,System_String_o *id,int32_t selectedVariant,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e0c = '\x01';
  }
  if (!selected) {
    selectedVariant = 5;
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,selectedVariant,label,actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).clip = true;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)0x0);
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CompactButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout (const MethodInfo* method);
// 0x1823e1650

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184347e0d = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(18.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(20.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(46.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildConfiguration
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildConfiguration (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d6d60
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d7522: mov r9, qword ptr [rip + 0x1d0f137]  ; "game-create-rule-error"
// asm:   0x1823d7529: mov edx, 3
// asm:   0x1823d752e: mov rcx, rsi
// asm:   0x1823d7531: mov qword ptr [rsp + 0x20], r12
// asm:   0x1823d7536: call 0x1818c7500  ; Gisketch_Aottg2UI_Code_AottgUi__Callout()
// asm:   0x1823d753b: jmp 0x1823d7493

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildConfiguration
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Settings_ExperienceRuleResult_o *__this;
  Map_Experience_array *array;
  Map_Experience_o *value;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *value_00;
  bool bVar1;
  int32_t selectedIndex;
  int index;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *object;
  Map_Experience_array *pMVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *object_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-validation-error-");
    il2cpp_codegen_initialize_runtime_metadata(&"The experience could not be loaded.");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-validation-error");
    il2cpp_codegen_initialize_runtime_metadata(&"One or more values are outside the experience rules.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Invalid");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-rule-error");
    Il2CppMethodInitialized_184347e0e = '\x01';
  }
  index = 0;
  local_res18[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (__this == (Settings_ExperienceRuleResult_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f10 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f10 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField
    ;
    pSVar5 = "The experience could not be loaded.";
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar5 = pSVar4;
    }
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,3,pSVar5,"game-create-rule-error",(MethodInfo *)0x0);
      return;
    }
    goto label_1823d7540;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField ==
      false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector(ui,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347e08 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Experience);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildExperienceSelector_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0);
      il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-selector");
      Il2CppMethodInitialized_184347e08 = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pMVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences((MethodInfo *)0x0);
    if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *)0x0)
    goto label_1823d7540;
    (object->fields).experiences = pMVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).experiences,pMVar2);
    pMVar2 = (object->fields).experiences;
    if (pMVar2 == (Map_Experience_array *)0x0) goto label_1823d7540;
    if (1 < (int)pMVar2->max_length) {
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildExperienceSelector_b__0
                 ,(MethodInfo *)0x0);
      array = (object->fields).experiences;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f0e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f0e = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      selectedIndex =
           System_Array__IndexOf_object_
                     ((System_Object_array *)array,
                      (Il2CppObject *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _Experience_k__BackingField,
                      (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Experience);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
      Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                (__this_01,"game-create-experience-selector",(int32_t)pMVar2->max_length,46.0,10.0,
                 (System_Action_AottgUi__o *)pUVar3,0.0,selectedIndex,(MethodInfo *)0x0);
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823d7540;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,true,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-context");
    Il2CppMethodInitialized_184347e0f = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (object_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *)0x0) {
    value = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField
    ;
    (object_00->fields).experience = value;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).experience,value);
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,(Il2CppObject *)object_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0
               ,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,4.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)pUVar3,"game-create-configuration-context",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceFields
                (ui,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)(__this->fields).Fields
                 ,(__this->fields).Experience,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFields(ui,(MethodInfo *)0x0);
      while (__this_00 = (__this->fields).Errors, local_res18[0] = index,
            __this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        if ((__this_00->fields)._size <= index) {
          bVar1 = Settings_ExperienceRuleResult__get_IsValid(__this,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
          }
          bVar1 = Settings_ExperienceRuleEngine__Validate(__this,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          value_00 = "GameCreate.Configuration.Invalid";
          pSVar5 = "text";
          pSVar4 = "game-create-validation-error";
          text = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Configuration.Invalid","One or more values are outside the experience rules.",(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (ui,text,pSVar5,pSVar4,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).textKey = value_00;
            Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,value_00);
            return;
          }
          break;
        }
        pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        pSVar5 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969e50("game-create-validation-error-",pSVar5,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,3,pSVar4,pSVar5,(MethodInfo *)0x0);
        index = local_res18[0] + 1;
      }
    }
  }
label_1823d7540:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceContext
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceContext (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d7790

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceContext
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Map_Experience_o *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-context");
    Il2CppMethodInitialized_184347e0f = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *)0x0) {
    value = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField
    ;
    (object->fields).experience = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).experience,value);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0
               ,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,4.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-configuration-context",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Settings_ExperienceRuleField_o* field, int32_t index, const MethodInfo* method);
// 0x1823d9e40
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823da15c: xor r8d, r8d
// asm:   0x1823da15f: mov rdx, r12
// asm:   0x1823da162: mov rcx, rbp
// asm:   0x1823da165: call 0x1818c79a0  ; Gisketch_Aottg2UI_Code_AottgUi__Component()
// asm:   0x1823da16a: jmp 0x1823da07c

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Settings_ExperienceRuleField_o *field,int32_t index,
               MethodInfo *method)

{
  Settings_ExperienceRuleField_o *pSVar1;
  System_String_o *tooltip;
  System_String_o *actionId;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *object;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *mapName;
  Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this_00;
  int32_t local_res18 [4];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.mapSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_184347e10 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *)0x0) {
    (object->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(object->fields).field,field);
    pSVar3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("game-create-field-",pSVar3,(MethodInfo *)0x0);
    (object->fields).id = pSVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,pSVar3);
    pSVar1 = (object->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions(pSVar1,(MethodInfo *)0x0);
    (object->fields).allowed = pSVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).allowed,pSVar4);
    pSVar1 = (object->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(pSVar1,(MethodInfo *)0x0);
    (object->fields).tooltip = pSVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).tooltip,pSVar3);
    pSVar1 = (object->fields).field;
    if (pSVar1 != (Settings_ExperienceRuleField_o *)0x0) {
      bVar2 = System_String__op_Equality((pSVar1->fields).Id,"general.MapName",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (object->fields).id;
        pSVar1 = (object->fields).field;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        mapName = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar1,(MethodInfo *)0x0);
        actionId = "gameCreate.open.mapSelector";
        pSVar1 = (object->fields).field;
        if (pSVar1 != (Settings_ExperienceRuleField_o *)0x0) {
          if ((pSVar1->fields).Editable == false) {
            pSVar4 = (object->fields).allowed;
            if (pSVar4 == (System_String_array *)0x0) goto label_1823da16f;
            bVar2 = false;
          }
          else {
            pSVar4 = (object->fields).allowed;
            if (pSVar4 == (System_String_array *)0x0) goto label_1823da16f;
            bVar2 = 1 < (int)pSVar4->max_length;
          }
          tooltip = (object->fields).tooltip;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
          Gisketch_Aottg2UI_Game_AottgGameCreateMapField___ctor
                    (__this_00,pSVar3,mapName,actionId,bVar2,(int32_t)pSVar4->max_length,tooltip,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__0
                   ,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969e50((object->fields).id,"-row",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar3,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1823da16f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandbox (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823df100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823df68d: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandbox
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_array *array;
  System_Collections_Generic_List_AottgSandboxField__o *obj;
  System_String_o *pSVar2;
  uint uVar3;
  bool bVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Globalization_CultureInfo_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *__this;
  System_Action_T1__T2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_01;
  void *pvVar12;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *object;
  uint local_res8 [2];
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"No settings are available for this section.");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-description");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox is unrestricted and the session will be labeled Sandbox.");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-sections");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Section.");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"SANDBOX");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-load-warning");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Title");
    Il2CppMethodInitialized_184347e11 = '\x01';
  }
  local_res8[0] = 0;
  local_res18[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField !=
      false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,true,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar2 = "GameCreate.Sandbox.Title";
  pSVar11 = "header";
  pSVar10 = "game-create-sandbox-title";
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Title","SANDBOX",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar5,pSVar11,pSVar10,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).textKey = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
      pSVar2 = "GameCreate.Sandbox.Description";
      pSVar11 = "text";
      pSVar10 = "game-create-sandbox-description";
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Sandbox.Description","Sandbox is unrestricted and the session will be labeled Sandbox.",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar5,pSVar11,pSVar10,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = pSVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        pSVar10 = "clear";
        pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_0;
        if (pUVar7 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9
          ;
          pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar7,pIVar1,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_0,
                     (MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_0 =
               (System_Action_AottgUi__o *)pUVar7;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_0,pUVar7
                    );
        }
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Center",
                            (System_String_o *)0x0,"Wrap",14.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,pSVar10,(System_Action_AottgUi__o *)pUVar7,"game-create-sandbox-actions",pGVar8,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347c43 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347c43 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        array = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal
        ;
        if (array != (System_String_array *)0x0) {
          tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array,(uint32_t)array->max_length);
          for (local_res8[0] = 0; uVar3 = local_res8[0], (int)local_res8[0] < (int)array->max_length;
              local_res8[0] = local_res8[0] + 1) {
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            pSVar9 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString_1b29900
                                ((int32_t *)local_res8,(System_IFormatProvider_o *)pSVar9,(MethodInfo *)0x0);
            if ((uint)array->max_length <= local_res8[0]) {
label_1823dff1b:
              ThrowIndexOutOfRangeException();
            }
            pSVar11 = System_String__Concat_1969e50
                                ("GameCreate.Sandbox.Section.",array->m_Items[(int)local_res8[0]],(MethodInfo *)0x0);
            if ((uint)array->max_length <= local_res8[0]) goto label_1823dff1b;
            pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                (pSVar11,array->m_Items[(int)local_res8[0]],(MethodInfo *)0x0);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
            Gisketch_Aottg2UI_Game_AottgSubtab___ctor(__this,pSVar10,pSVar11,(MethodInfo *)0x0);
            if (tabs == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) goto label_1823dff15;
            if ((uint)tabs->max_length <= uVar3) goto label_1823dff1b;
            tabs->m_Items[(int)uVar3] = __this;
            Il2CppCodeGenWriteBarrier(tabs->m_Items + (int)uVar3,__this);
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184347f0b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347f0b = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          local_res18[0] =
               System_Array__IndexOf_object_
                         ((System_Object_array *)array,
                          (Il2CppObject *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                          _SandboxSection_k__BackingField,
                          (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar9 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar10 = System_Int32__ToString_1b29900
                              (local_res18,(System_IFormatProvider_o *)pSVar9,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          }
          pSVar11 = "game-create-sandbox-sections";
          __this_00 = (System_Action_T1__T2__o *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_1;
          if (__this_00 == (System_Action_T1__T2__o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
            __this_00 = (System_Action_T1__T2__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
            System_Action_GisketchActionContext__object____ctor
                      (__this_00,pIVar1,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_1,
                       (MethodInfo_1467A10 *)0x0);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_1 =
                 (System_Action_GisketchActionContext__string__o *)__this_00;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__38_1,
                       __this_00);
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
          Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
                    (__this_01,pSVar11,tabs,pSVar10,
                     (System_Action_GisketchActionContext__string__o *)__this_00,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184347f10 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347f10 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          bVar4 = System_String__IsNullOrEmpty
                            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                             _LoadError_k__BackingField,(MethodInfo *)0x0);
          if (!bVar4) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_184347f10 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347f10 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Code_AottgUi__Callout
                      (ui,2,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                            _LoadError_k__BackingField,"game-create-sandbox-load-warning",(MethodInfo *)0x0);
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184347f0b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347f0b = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          bVar4 = System_String__op_Equality
                            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                             _SandboxSection_k__BackingField,"Weather",(MethodInfo *)0x0);
          if (bVar4) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Build(ui,(MethodInfo *)0x0);
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_184347f0b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347f0b = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            bVar4 = System_String__op_Equality
                              (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                               _SandboxSection_k__BackingField,"Custom",(MethodInfo *)0x0);
            if (bVar4) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxCustom(ui,(MethodInfo *)0x0);
            }
            else {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              if (Il2CppMethodInitialized_184347f0b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184347f0b = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              bVar4 = System_String__op_Equality
                                (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                 _SandboxSection_k__BackingField,"General",(MethodInfo *)0x0);
              if (bVar4) {
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxGeneral(ui,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxAddons(ui,(MethodInfo *)0x0);
              }
              else {
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                if (Il2CppMethodInitialized_184347f0b == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  Il2CppMethodInitialized_184347f0b = '\x01';
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                bVar4 = System_String__op_Equality
                                  (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                   _SandboxSection_k__BackingField,"Misc",(MethodInfo *)0x0);
                if (bVar4) {
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                  }
                  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMisc(ui,(MethodInfo *)0x0);
                }
                else {
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  if (Il2CppMethodInitialized_184347f0b == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    Il2CppMethodInitialized_184347f0b = '\x01';
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  bVar4 = System_String__op_Equality
                                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                     _SandboxSection_k__BackingField,"Titans",(MethodInfo *)0x0);
                  if (bVar4) {
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor
                        == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                    }
                    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxTitans(ui,(MethodInfo *)0x0);
                  }
                  else {
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    }
                    if (Il2CppMethodInitialized_184347c42 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                      Il2CppMethodInitialized_184347c42 = '\x01';
                    }
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    }
                    obj = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                          SandboxFieldsInternal;
                    if (obj == (System_Collections_Generic_List_AottgSandboxField__o *)0x0)
                    goto label_1823dff15;
                    pvVar12 = InterfaceInvoker0_Invoke
                                        (0,(Il2CppClass *)
                                           TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField
                                         ,(Il2CppObject *)obj);
                    if (0 < (int)pvVar12) {
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                      }
                      if (Il2CppMethodInitialized_184347e3a == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField)
                        ;
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__0
                                  );
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0)
                        ;
                        il2cpp_codegen_initialize_runtime_metadata(&"clear");
                        il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields");
                        Il2CppMethodInitialized_184347e3a = '\x01';
                      }
                      object = il2cpp_codegen_object_new
                                         ((Il2CppClass *)
                                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0
                                         );
                      System_Object___ctor
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                                 (MethodInfo *)0x0);
                      if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *)
                                    0x0) goto label_1823dff15;
                      (object->fields).fields =
                           (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)obj;
                      Il2CppCodeGenWriteBarrier(&(object->fields).fields,obj);
                      pIVar1 = (Il2CppObject *)(object->fields).fields;
                      if (pIVar1 == (Il2CppObject *)0x0) goto label_1823dff15;
                      pvVar12 = InterfaceInvoker0_Invoke
                                          (0,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField
                                           ,pIVar1);
                      (object->fields).split = ((int)pvVar12 + 1) / 2;
                      pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
                      System_Action_object____ctor
                                (pUVar7,(Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__0
                                 ,(MethodInfo *)0x0);
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                      }
                      pGVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout
                                         ((MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Code_AottgUi__Panel
                                (ui,"clear",(System_Action_AottgUi__o *)pUVar7,
                                 "game-create-sandbox-fields",pGVar8,
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                    }
                    pvVar12 = InterfaceInvoker0_Invoke
                                        (0,(Il2CppClass *)
                                           TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField
                                         ,(Il2CppObject *)obj);
                    if ((int)pvVar12 == 0) {
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                      }
                      pSVar2 = "GameCreate.Sandbox.Empty";
                      pSVar11 = "text";
                      pSVar10 = "game-create-sandbox-empty";
                      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                         ("GameCreate.Sandbox.Empty","No settings are available for this section.",(MethodInfo *)0x0);
                      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                         (ui,pSVar5,pSVar11,pSVar10,(System_String_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                      goto label_1823dff15;
                      (pGVar6->fields).textKey = pSVar2;
                      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar2);
                    }
                  }
                }
              }
            }
          }
          return;
        }
      }
    }
  }
label_1823dff15:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, int32_t index, bool enabled, const MethodInfo* method);
// 0x1823dcb90
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823dce01: xor r9d, r9d
// asm:   0x1823dce04: movzx r8d, bl
// asm:   0x1823dce08: mov rdx, rsi
// asm:   0x1823dce0b: mov rcx, rdi
// asm:   0x1823dce0e: call 0x1823de390  ; Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById()
// asm:   0x1823dce13: jmp 0x1823dcdbe
// asm:   0x1823dcf49: xor r8d, r8d
// asm:   0x1823dcf4c: mov rdx, rbp
// asm:   0x1823dcf4f: mov rcx, rdi
// asm:   0x1823dcf52: call 0x1818c79a0  ; Gisketch_Aottg2UI_Code_AottgUi__Component()
// asm:   0x1823dcf57: jmp 0x1823dcdbe

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,
               int32_t index,bool enabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar1;
  System_String_array *pSVar2;
  System_String_o *tooltip;
  System_String_o *label;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *object;
  System_String_o *pSVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *mapName;
  longlong lVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this_00;
  int32_t local_res18 [2];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0_BuildSandboxField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorCrawlerEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.mapSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_184347e12 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *)0x0) {
    (object->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(object->fields).field,field);
    (object->fields).enabled = enabled;
    pSVar4 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50("game-create-sandbox-field-",pSVar4,(MethodInfo *)0x0);
    (object->fields).id = pSVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,pSVar4);
    pGVar1 = (object->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_23e1e00(pGVar1,(MethodInfo *)0x0);
    (object->fields).tooltip = pSVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).tooltip,pSVar4);
    pGVar1 = (object->fields).field;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
      bVar3 = System_String__op_Equality
                        ((pGVar1->fields)._Id_k__BackingField,"general.MapName",(MethodInfo *)0x0);
      pGVar1 = (object->fields).field;
      if (bVar3) {
        pSVar4 = (object->fields).id;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        mapName = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar1,(MethodInfo *)0x0);
        pGVar1 = (object->fields).field;
        if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) &&
           (pSVar2 = (pGVar1->fields)._Options_k__BackingField, pSVar2 != (System_String_array *)0x0)) {
          tooltip = (object->fields).tooltip;
          if (Il2CppMethodInitialized_184347e24 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347e24 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184347df0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347df0 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar5 = 0x10;
          if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames
              == false) {
            lVar5 = 0x18;
          }
          label = *(System_String_o **)((longlong)&pGVar1->klass + lVar5);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
          Gisketch_Aottg2UI_Game_AottgGameCreateMapField___ctor
                    (__this_00,pSVar4,mapName,"gameCreate.open.mapSelector",1 < (int)pSVar2->max_length,
                     (int32_t)pSVar2->max_length,tooltip,label,(MethodInfo *)0x0);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
        bVar3 = System_String__op_Equality
                          ((pGVar1->fields)._Id_k__BackingField,"titan.TitanArmorCrawlerEnabled",(MethodInfo *)0x0);
        if (bVar3) {
          pGVar1 = (object->fields).field;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
            pSVar4 = (pGVar1->fields)._Id_k__BackingField;
            bVar3 = (object->fields).enabled;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
                      (ui,pSVar4,bVar3,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (__this,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0_BuildSandboxField_b__0
                     ,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_1969e50((object->fields).id,"-row",(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar4,layout,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxGeneral
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxGeneral (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823dd200

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxGeneral
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *object;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxGeneral_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-core-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347e13 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField("general.MapName",(MethodInfo *)0x0)
  ;
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *)0x0) {
    (object->fields).map = pGVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).map,pGVar1);
    pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField
                       ("general.GameMode",(MethodInfo *)0x0);
    (object->fields).mode = pGVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).mode,pGVar1);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxGeneral_b__0
               ,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","FlexStart",
                        (System_String_o *)0x0,"Wrap",32.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-sandbox-core-fields",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxModeField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxModeField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, int32_t index, const MethodInfo* method);
// 0x1823ddf90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823de15a: mov r9, qword ptr [rip + 0x1d0f2d7]  ; "gameCreate.open.modeSelector"
// asm:   0x1823de161: mov rdx, qword ptr [rip + 0x1cb2be0]  ; "zoom"
// asm:   0x1823de168: jmp 0x1823de17e

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxModeField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,
               int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *pSVar6;
  longlong lVar7;
  System_Nullable_bool__Fields local_res8 [4];
  int32_t local_res18 [4];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347e14 = '\x01';
  }
  pSVar3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50("game-create-sandbox-field-",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e24 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347df0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames ==
        false) {
      pSVar6 = (field->fields)._Label_k__BackingField;
    }
    else {
      pSVar6 = (field->fields)._Id_k__BackingField;
    }
    pSVar4 = System_String__Concat_1969e50(pSVar3,"-label",(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar6,"text",pSVar4,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = (field->fields)._Options_k__BackingField;
      if (pSVar2 != (System_String_array *)0x0) {
        iVar1 = (int)pSVar2->max_length;
        text = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(field,(MethodInfo *)0x0);
        pSVar6 = "zoom";
        pSVar4 = "gameCreate.open.modeSelector";
        if (iVar1 < 2) {
          pSVar6 = (System_String_o *)0x0;
          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (ui,1,text,pSVar4,pSVar3,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar6,(MethodInfo *)0x0)
        ;
        local_res8[0].hasValue = false;
        local_res8[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Data_SqlTypes_SqlByte_o *)local_res8,1 < iVar1,MethodInfo_System_Nullable_bool_ctor
                  );
        if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pGVar5->fields).enabled.fields = local_res8[0];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        if (Il2CppMethodInitialized_184347e24 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347e24 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347df0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347df0 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar7 = 0x10;
        if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames
            == false) {
          lVar7 = 0x18;
        }
        pSVar3 = *(System_String_o **)((longlong)&field->klass + lVar7);
        (pGVar5->fields).formLabel = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).formLabel,pSVar3);
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
        value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
        (pGVar5->fields).layout = value;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxMisc
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMisc (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823dd5f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMisc
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  System_String_array *pSVar9;
  
  if (Il2CppMethodInitialized_184347e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-weapons");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.EndlessRespawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"REALISM");
    il2cpp_codegen_initialize_runtime_metadata(&"Characters");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.CustomStats");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowStock");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.CustomPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.InvincibilityTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowShifterSpecials");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.EndlessRespawnEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.APGPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-pvp-title");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HookDamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowSpawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Misc.Realism");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-characters");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-pvp");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ShifterHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMaxSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-realism-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapons");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismImpactThreshold");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.DestructibleEnvironment");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Horses");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowPlayerTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-realism-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMode");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMaxReel");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Respawn / Health");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ThunderspearPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"Movement / Equipment");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ClearKDROnRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-movement");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HumanHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.GlobalMinimapDisable");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.GunsAirReload");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HorsebackCombat");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-realism-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-respawn");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowThunderspears");
    Il2CppMethodInitialized_184347e15 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar6 = "GameCreate.Sandbox.Misc.PVP";
  pSVar5 = "header";
  pSVar4 = "game-create-misc-pvp-title";
  pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Misc.PVP","PVP",(MethodInfo *)0x0);
  if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar7,pSVar5,pSVar4,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar8->fields).textKey = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar8->fields).textKey,pSVar6);
    pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    pSVar4 = "misc.PVP";
    if (pSVar9 != (System_String_array *)0x0) {
      if ((int)pSVar9->max_length != 0) {
        pSVar9->m_Items[0] = "misc.PVP";
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar4);
        pSVar4 = "misc.ThunderspearPVP";
        if (1 < (uint)pSVar9->max_length) {
          pSVar9->m_Items[1] = "misc.ThunderspearPVP";
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar4);
          pSVar4 = "misc.APGPVP";
          if (2 < (uint)pSVar9->max_length) {
            pSVar9->m_Items[2] = "misc.APGPVP";
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar4);
            pSVar4 = "game-create-misc-pvp";
            if (Il2CppMethodInitialized_184347e1f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              Il2CppMethodInitialized_184347e1f = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                      (ui,pSVar4,true,pSVar9,(MethodInfo *)0x0);
            pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
            pSVar4 = "misc.AllowBlades";
            if (pSVar9 == (System_String_array *)0x0) goto label_1823ddf7b;
            if ((int)pSVar9->max_length != 0) {
              pSVar9->m_Items[0] = "misc.AllowBlades";
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar4);
              pSVar4 = "misc.AllowAHSS";
              if (1 < (uint)pSVar9->max_length) {
                pSVar9->m_Items[1] = "misc.AllowAHSS";
                Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar4);
                pSVar4 = "misc.AllowThunderspears";
                if (2 < (uint)pSVar9->max_length) {
                  pSVar9->m_Items[2] = "misc.AllowThunderspears";
                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar4);
                  pSVar4 = "misc.AllowAPG";
                  if (3 < (uint)pSVar9->max_length) {
                    pSVar9->m_Items[3] = "misc.AllowAPG";
                    Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 3,pSVar4);
                    pSVar4 = "misc.AllowUnarmed";
                    if (4 < (uint)pSVar9->max_length) {
                      pSVar9->m_Items[4] = "misc.AllowUnarmed";
                      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 4,pSVar4);
                      pSVar4 = "misc.AllowCivilian";
                      if (5 < (uint)pSVar9->max_length) {
                        pSVar9->m_Items[5] = "misc.AllowCivilian";
                        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 5,pSVar4);
                        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
                                  (ui,"Weapons","game-create-misc-weapons",pSVar9,(MethodInfo *)0x0);
                        pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                        pSVar4 = "misc.AllowPlayerTitans";
                        if (pSVar9 == (System_String_array *)0x0) goto label_1823ddf7b;
                        if ((int)pSVar9->max_length != 0) {
                          pSVar9->m_Items[0] = "misc.AllowPlayerTitans";
                          Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar4);
                          pSVar4 = "misc.AllowShifters";
                          if (1 < (uint)pSVar9->max_length) {
                            pSVar9->m_Items[1] = "misc.AllowShifters";
                            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar4);
                            pSVar4 = "misc.AllowShifterSpecials";
                            if (2 < (uint)pSVar9->max_length) {
                              pSVar9->m_Items[2] = "misc.AllowShifterSpecials";
                              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar4);
                              pSVar4 = "misc.CustomStats";
                              if (3 < (uint)pSVar9->max_length) {
                                pSVar9->m_Items[3] = "misc.CustomStats";
                                Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 3,pSVar4);
                                pSVar4 = "misc.CustomPerks";
                                if (4 < (uint)pSVar9->max_length) {
                                  pSVar9->m_Items[4] = "misc.CustomPerks";
                                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 4,pSVar4);
                                  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
                                            (ui,"Characters","game-create-misc-characters",pSVar9,
                                             (MethodInfo *)0x0);
                                  pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
                                  pSVar4 = "misc.EndlessRespawnEnabled";
                                  if (pSVar9 == (System_String_array *)0x0) goto label_1823ddf7b;
                                  if ((int)pSVar9->max_length != 0) {
                                    pSVar9->m_Items[0] = "misc.EndlessRespawnEnabled";
                                    Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar4);
                                    pSVar4 = "misc.EndlessRespawnTime";
                                    if (1 < (uint)pSVar9->max_length) {
                                      pSVar9->m_Items[1] = "misc.EndlessRespawnTime";
                                      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar4);
                                      pSVar4 = "misc.AllowSpawnTime";
                                      if (2 < (uint)pSVar9->max_length) {
                                        pSVar9->m_Items[2] = "misc.AllowSpawnTime";
                                        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar4);
                                        pSVar4 = "misc.InvincibilityTime";
                                        if (3 < (uint)pSVar9->max_length) {
                                          pSVar9->m_Items[3] = "misc.InvincibilityTime";
                                          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 3,pSVar4);
                                          pSVar4 = "misc.HumanHealth";
                                          if (4 < (uint)pSVar9->max_length) {
                                            pSVar9->m_Items[4] = "misc.HumanHealth";
                                            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 4,pSVar4);
                                            pSVar4 = "misc.ShifterHealth";
                                            if (5 < (uint)pSVar9->max_length) {
                                              pSVar9->m_Items[5] = "misc.ShifterHealth";
                                              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 5,pSVar4);
                                              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
                                                        (ui,"Respawn / Health","game-create-misc-respawn",pSVar9
                                                         ,(MethodInfo *)0x0);
                                              pSVar9 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,7);
                                              pSVar4 = "misc.Horses";
                                              if (pSVar9 == (System_String_array *)0x0) goto label_1823ddf7b;
                                              if ((int)pSVar9->max_length != 0) {
                                                pSVar9->m_Items[0] = "misc.Horses";
                                                Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar4);
                                                pSVar4 = "misc.HorsebackCombat";
                                                if (1 < (uint)pSVar9->max_length) {
                                                  pSVar9->m_Items[1] = "misc.HorsebackCombat";
                                                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar4);
                                                  pSVar4 = "misc.DestructibleEnvironment";
                                                  if (2 < (uint)pSVar9->max_length) {
                                                    pSVar9->m_Items[2] = "misc.DestructibleEnvironment";
                                                    Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar4);
                                                    pSVar4 = "misc.GunsAirReload";
                                                    if (3 < (uint)pSVar9->max_length) {
                                                      pSVar9->m_Items[3] = "misc.GunsAirReload";
                                                      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 3,pSVar4);
                                                      pSVar4 = "misc.AllowStock";
                                                      if (4 < (uint)pSVar9->max_length) {
                                                        pSVar9->m_Items[4] = "misc.AllowStock";
                                                        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 4,pSVar4);
                                                        pSVar4 = "misc.ClearKDROnRestart";
                                                        if (5 < (uint)pSVar9->max_length) {
                                                          pSVar9->m_Items[5] = "misc.ClearKDROnRestart";
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar9->m_Items + 5,pSVar4);
                                                          pSVar4 = "misc.GlobalMinimapDisable";
                                                          if (6 < (uint)pSVar9->max_length) {
                                                            pSVar9->m_Items[6] = "misc.GlobalMinimapDisable";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar9->m_Items + 6,pSVar4);
                                                                                                                        
                                                       Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
                                                                 (ui,"Movement / Equipment",
                                                                  "game-create-misc-movement",pSVar9,
                                                                  (MethodInfo *)0x0);
                                                       Gisketch_Aottg2UI_Code_AottgUi__Separator
                                                                 (ui,"game-create-misc-realism-divider",
                                                                  (
                                                       Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
                                                       ,(MethodInfo *)0x0);
                                                       pSVar6 = "GameCreate.Sandbox.Misc.Realism";
                                                       pSVar5 = "header";
                                                       pSVar4 = "game-create-misc-realism-title";
                                                       pSVar7 = 
                                                       Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                                                 ("GameCreate.Sandbox.Misc.Realism","REALISM",
                                                                  (MethodInfo *)0x0);
                                                       pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                                                          (ui,pSVar7,pSVar5,pSVar4,
                                                                           (System_String_o *)0x0,
                                                                           (
                                                       Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
                                                       ,(MethodInfo *)0x0);
                                                       if (pGVar8 != (
                                                       Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                                                       {
                                                         (pGVar8->fields).textKey = pSVar6;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar8->fields).textKey,pSVar6);
                                                                                                                  
                                                       Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
                                                                 (ui,"misc.RealismMode",true,
                                                                  (MethodInfo *)0x0);
                                                       if ((
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
                                                       ->_2).cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
                                                       ;
                                                       }
                                                       if (Il2CppMethodInitialized_184344b3a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
                                                       ;
                                                       Il2CppMethodInitialized_184344b3a = '\x01';
                                                       }
                                                       if ((
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
                                                       ->_2).cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
                                                       ;
                                                       }
                                                       pSVar1 = 
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
                                                       ->static_fields->_Working_k__BackingField;
                                                       if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
                                                           (pSVar2 = (pSVar1->fields).Misc,
                                                           pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
                                                          (pSVar3 = (pSVar2->fields).RealismMode,
                                                          pSVar3 != (Settings_BoolSetting_o *)0x0)) {
                                                         if ((pSVar3->fields)._value == false) {
                                                           return;
                                                         }
                                                         pSVar9 = (System_String_array *)
                                                                  SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar4 = "misc.RealismImpactThreshold";
                                                         if (pSVar9 != (System_String_array *)0x0) {
                                                           if ((int)pSVar9->max_length != 0) {
                                                             pSVar9->m_Items[0] = "misc.RealismImpactThreshold";
                                                             Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar4)
                                                             ;
                                                             pSVar4 = "misc.RealismMaxReel";
                                                             if (1 < (uint)pSVar9->max_length) {
                                                               pSVar9->m_Items[1] = "misc.RealismMaxReel";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar9->m_Items + 1,pSVar4);
                                                               pSVar4 = "misc.RealismMaxSpeed";
                                                               if (2 < (uint)pSVar9->max_length) {
                                                                 pSVar9->m_Items[2] = "misc.RealismMaxSpeed";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar9->m_Items + 2,pSVar4);
                                                                 pSVar4 = "misc.HookDamageMultiplier";
                                                                 if (3 < (uint)pSVar9->max_length) {
                                                                   pSVar9->m_Items[3] = "misc.HookDamageMultiplier";
                                                                   Il2CppCodeGenWriteBarrier
                                                                             (pSVar9->m_Items + 3,pSVar4);
                                                                   if ((
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->
                                                       _2).cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                                                       }
                                                       Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                                                                 (ui,"game-create-misc-realism-fields",true,pSVar9,
                                                                  (MethodInfo *)0x0);
                                                       return;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       goto label_1823ddf81;
                                                       }
                                                       }
                                                       }
                                                       goto label_1823ddf7b;
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
label_1823ddf81:
      ThrowIndexOutOfRangeException();
    }
  }
label_1823ddf7b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxTitans
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxTitans (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823de5f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxTitans
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameTitanSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  System_String_array *pSVar15;
  
  if (Il2CppMethodInitialized_184347e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-preset-row");
    il2cpp_codegen_initialize_runtime_metadata(&"BEHAVIOR");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-decapitation-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-size-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSmartMovement");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Spawns");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawns-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-appearance-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-behavior-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-behavior-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanDecapitationMinDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-appearance-title");
    il2cpp_codegen_initialize_runtime_metadata(&"APPEARANCE");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-size-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Appearance");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-behavior-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-defense");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeMin");
    il2cpp_codegen_initialize_runtime_metadata(&"HEALTH / ARMOR");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadMode");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanDecapitationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Behavior");
    il2cpp_codegen_initialize_runtime_metadata(&"SPAWNS");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Decapitation");
    il2cpp_codegen_initialize_runtime_metadata(&"DECAPITATION");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-decapitation-title");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanStandardModels");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.HealthArmor");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-appearance-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-decapitation-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-defense-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-defense-title");
    Il2CppMethodInitialized_184347e16 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar10 = "GameCreate.Sandbox.Titans.Spawns";
  pSVar9 = "header";
  pSVar8 = "game-create-titans-spawns-title";
  pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                      ("GameCreate.Sandbox.Titans.Spawns","SPAWNS",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (ui,pSVar11,pSVar9,pSVar8,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar12->fields).textKey = pSVar10;
      Il2CppCodeGenWriteBarrier(&(pGVar12->fields).textKey,pSVar10);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      pSVar8 = "clear";
      pUVar13 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_0;
      if (pUVar13 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        pIVar3 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
        pUVar13 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar13,pIVar3,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_0,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_0 =
             (System_Action_AottgUi__o *)pUVar13;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_0,pUVar13)
        ;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar14 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,pSVar8,(System_Action_AottgUi__o *)pUVar13,"game-create-titans-spawn-preset-row",pGVar14,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Separator
                (ui,"game-create-titans-size-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
                (ui,"titan.TitanSizeEnabled",true,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).Titan, pSVar5 != (Settings_InGameTitanSettings_o *)0x0)) &&
         (pSVar6 = (pSVar5->fields).TitanSizeEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
        bVar1 = (pSVar6->fields)._value;
        pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar8 = "titan.TitanSizeMin";
        if (pSVar15 != (System_String_array *)0x0) {
          if ((int)pSVar15->max_length != 0) {
            pSVar15->m_Items[0] = "titan.TitanSizeMin";
            Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar8);
            pSVar8 = "titan.TitanSizeMax";
            if (1 < (uint)pSVar15->max_length) {
              pSVar15->m_Items[1] = "titan.TitanSizeMax";
              Il2CppCodeGenWriteBarrier(pSVar15->m_Items + 1,pSVar8);
              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                        (ui,"game-create-titans-size-fields",bVar1,pSVar15,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Separator
                        (ui,"game-create-titans-defense-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0);
              pSVar10 = "GameCreate.Sandbox.Titans.HealthArmor";
              pSVar9 = "header";
              pSVar8 = "game-create-titans-defense-title";
              pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                  ("GameCreate.Sandbox.Titans.HealthArmor","HEALTH / ARMOR",(MethodInfo *)0x0);
              pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                  (ui,pSVar11,pSVar9,pSVar8,(System_String_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
              ;
              if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar12->fields).textKey = pSVar10;
                Il2CppCodeGenWriteBarrier(&(pGVar12->fields).textKey,pSVar10);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
                }
                pSVar8 = "clear";
                pUVar13 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_1;
                if (pUVar13 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
                  }
                  pIVar3 = (Il2CppObject *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
                  pUVar13 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
                  System_Action_object____ctor
                            (pUVar13,pIVar3,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__43_1
                             ,(MethodInfo *)0x0);
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__43_1 =
                       (System_Action_AottgUi__o *)pUVar13;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->
                              __9__43_1,pUVar13);
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                pGVar14 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (ui,pSVar8,(System_Action_AottgUi__o *)pUVar13,"game-create-titans-defense",pGVar14,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Separator
                          (ui,"game-create-titans-decapitation-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
                pSVar10 = "GameCreate.Sandbox.Titans.Decapitation";
                pSVar9 = "header";
                pSVar8 = "game-create-titans-decapitation-title";
                pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                    ("GameCreate.Sandbox.Titans.Decapitation","DECAPITATION",(MethodInfo *)0x0);
                pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                    (ui,pSVar11,pSVar9,pSVar8,(System_String_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                     (MethodInfo *)0x0);
                if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar12->fields).textKey = pSVar10;
                  Il2CppCodeGenWriteBarrier(&(pGVar12->fields).textKey,pSVar10);
                  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
                            (ui,"titan.TitanDecapitationEnabled",true,(MethodInfo *)0x0);
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  if (Il2CppMethodInitialized_184344b3a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    Il2CppMethodInitialized_184344b3a = '\x01';
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                           _Working_k__BackingField;
                  if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
                      (pSVar5 = (pSVar4->fields).Titan, pSVar5 != (Settings_InGameTitanSettings_o *)0x0)) &&
                     (pSVar6 = (pSVar5->fields).TitanDecapitationEnabled,
                     pSVar6 != (Settings_BoolSetting_o *)0x0)) {
                    bVar1 = (pSVar6->fields)._value;
                    pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
                    pSVar8 = "titan.TitanDecapitationMinDamage";
                    if (pSVar15 != (System_String_array *)0x0) {
                      if ((int)pSVar15->max_length == 0) goto label_1823df0f7;
                      pSVar15->m_Items[0] = "titan.TitanDecapitationMinDamage";
                      Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar8);
                      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                                (ui,"game-create-titans-decapitation-fields",bVar1,pSVar15,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Code_AottgUi__Separator
                                (ui,"game-create-titans-appearance-divider",
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                      pSVar10 = "GameCreate.Sandbox.Titans.Appearance";
                      pSVar9 = "header";
                      pSVar8 = "game-create-titans-appearance-title";
                      pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                          ("GameCreate.Sandbox.Titans.Appearance","APPEARANCE",(MethodInfo *)0x0);
                      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                          (ui,pSVar11,pSVar9,pSVar8,(System_String_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                           (MethodInfo *)0x0);
                      if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                        (pGVar12->fields).textKey = pSVar10;
                        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).textKey,pSVar10);
                        pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                        pSVar8 = "titan.TitanStandardModels";
                        if (pSVar15 != (System_String_array *)0x0) {
                          if ((int)pSVar15->max_length != 0) {
                            pSVar15->m_Items[0] = "titan.TitanStandardModels";
                            Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar8);
                            pSVar8 = "titan.TitanHeadMode";
                            if (1 < (uint)pSVar15->max_length) {
                              pSVar15->m_Items[1] = "titan.TitanHeadMode";
                              Il2CppCodeGenWriteBarrier(pSVar15->m_Items + 1,pSVar8);
                              pSVar8 = "game-create-titans-appearance-fields";
                              if (Il2CppMethodInitialized_184347e1f == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                                Il2CppMethodInitialized_184347e1f = '\x01';
                              }
                              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                              }
                              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                                        (ui,pSVar8,true,pSVar15,(MethodInfo *)0x0);
                              if (Il2CppMethodInitialized_184347e17 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&MethodInfo_Settings_TypedSetting_int_get_Value);
                                il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMin");
                                il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMax");
                                il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-head-random-fields");
                                Il2CppMethodInitialized_184347e17 = '\x01';
                              }
                              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                              }
                              if (Il2CppMethodInitialized_184344b3a == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                                Il2CppMethodInitialized_184344b3a = '\x01';
                              }
                              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                              }
                              pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                       _Working_k__BackingField;
                              if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
                                  (pSVar5 = (pSVar4->fields).Titan,
                                  pSVar5 != (Settings_InGameTitanSettings_o *)0x0)) &&
                                 (pSVar7 = (pSVar5->fields).TitanHeadMode,
                                 pSVar7 != (Settings_IntSetting_o *)0x0)) {
                                iVar2 = (pSVar7->fields)._value;
                                pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar8 = "titan.TitanHeadRandomMin";
                                if (pSVar15 != (System_String_array *)0x0) {
                                  if ((int)pSVar15->max_length != 0) {
                                    pSVar15->m_Items[0] = "titan.TitanHeadRandomMin";
                                    Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar8);
                                    pSVar8 = "titan.TitanHeadRandomMax";
                                    if (1 < (uint)pSVar15->max_length) {
                                      pSVar15->m_Items[1] = "titan.TitanHeadRandomMax";
                                      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + 1,pSVar8);
                                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).
                                          cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                                      }
                                      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                                                (ui,"game-create-titans-head-random-fields",iVar2 == 1,pSVar15,(MethodInfo *)0x0
                                                );
                                      Gisketch_Aottg2UI_Code_AottgUi__Separator
                                                (ui,"game-create-titans-behavior-divider",
                                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                                 (MethodInfo *)0x0);
                                      pSVar10 = "GameCreate.Sandbox.Titans.Behavior";
                                      pSVar9 = "header";
                                      pSVar8 = "game-create-titans-behavior-title";
                                      pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                                          ("GameCreate.Sandbox.Titans.Behavior","BEHAVIOR",
                                                           (MethodInfo *)0x0);
                                      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                                                          (ui,pSVar11,pSVar9,pSVar8,(System_String_o *)0x0,
                                                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o
                                                            *)0x0,(MethodInfo *)0x0);
                                      if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                                        (pGVar12->fields).textKey = pSVar10;
                                        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).textKey,pSVar10);
                                        pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
                                        pSVar8 = "titan.TitanSmartMovement";
                                        if (pSVar15 != (System_String_array *)0x0) {
                                          if ((int)pSVar15->max_length != 0) {
                                            pSVar15->m_Items[0] = "titan.TitanSmartMovement";
                                            Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar8);
                                            pSVar8 = "game-create-titans-behavior-fields";
                                            if (Il2CppMethodInitialized_184347e1f == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&
                                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                                              Il2CppMethodInitialized_184347e1f = '\x01';
                                            }
                                            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)
                                                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen
                                                        );
                                            }
                                            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                                                      (ui,pSVar8,true,pSVar15,(MethodInfo *)0x0);
                                            return;
                                          }
                                          goto label_1823df0f7;
                                        }
                                      }
                                      goto label_1823df0f1;
                                    }
                                  }
                                  goto label_1823df0f7;
                                }
                              }
                              goto label_1823df0f1;
                            }
                          }
                          goto label_1823df0f7;
                        }
                      }
                    }
                  }
                }
              }
              goto label_1823df0f1;
            }
          }
label_1823df0f7:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1823df0f1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHeadBounds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHeadBounds (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e0670

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHeadBounds
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  System_String_o *pSVar5;
  System_String_array *fieldIds;
  
  if (Il2CppMethodInitialized_184347e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMin");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMax");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-head-random-fields");
    Il2CppMethodInitialized_184347e17 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanHeadMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar4->fields)._value;
    fieldIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    pSVar5 = "titan.TitanHeadRandomMin";
    if (fieldIds != (System_String_array *)0x0) {
      if ((int)fieldIds->max_length != 0) {
        fieldIds->m_Items[0] = "titan.TitanHeadRandomMin";
        Il2CppCodeGenWriteBarrier(fieldIds->m_Items,pSVar5);
        pSVar5 = "titan.TitanHeadRandomMax";
        if (1 < (uint)fieldIds->max_length) {
          fieldIds->m_Items[1] = "titan.TitanHeadRandomMax";
          Il2CppCodeGenWriteBarrier(fieldIds->m_Items + 1,pSVar5);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                    (ui,"game-create-titans-head-random-fields",iVar1 == 1,fieldIds,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHealthMode
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthMode (Gisketch_Aottg2UI_Code_AottgUi_o* ui, bool enabled, const MethodInfo* method);
// 0x1823e0980

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthMode
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,bool enabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0_BuildTitanHealthMode_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode-row");
    Il2CppMethodInitialized_184347e18 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass45_0_o *)0x0) {
    (object->fields).enabled = enabled;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass45_0_BuildTitanHealthMode_b__0
               ,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-titans-health-mode-row",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHealthEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthEnabled (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e0810

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthEnabled
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this;
  
  if (Il2CppMethodInitialized_184347e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Health enabled");
    Il2CppMethodInitialized_184347e19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanHealthMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar4->fields)._value;
    __this = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
              (ui,"Health enabled","game-create-titans-health-enabled",iVar1 != 0,(System_Action_bool__o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanArmorEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanArmorEnabled (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e0400

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanArmorEnabled
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool enabled;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Il2CppObject *object;
  System_String_o *label;
  System_String_o *pSVar4;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanArmorEnabled_b__47_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan Armor Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_184347e1a = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_res8[0] =
       Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex
                 ("titan.TitanArmorEnabled",(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969e50("game-create-sandbox-field-",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).TitanArmorEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    enabled = (pSVar3->fields)._value;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    label = "Titan Armor Enabled";
    __this = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__47_0;
    if (__this == (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
      __this = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
      System_Action_bool____ctor
                (__this,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanArmorEnabled_b__47_0,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__47_0 =
           (System_Action_bool__o *)__this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__47_0,__this);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
              (ui,label,pSVar4,enabled,(System_Action_bool__o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanWardedEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanWardedEnabled (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e0c00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanWardedEnabled
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool enabled;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Il2CppObject *object;
  System_String_o *label;
  System_String_o *pSVar4;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanWardedEnabled_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan Warded Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanWardedEnabled");
    Il2CppMethodInitialized_184347e1b = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_res8[0] =
       Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex
                 ("titan.TitanWardedEnabled",(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969e50("game-create-sandbox-field-",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).TitanWardedEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    enabled = (pSVar3->fields)._value;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    label = "Titan Warded Enabled";
    __this = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__48_0;
    if (__this == (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
      __this = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
      System_Action_bool____ctor
                (__this,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanWardedEnabled_b__48_0,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__48_0 =
           (System_Action_bool__o *)__this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__48_0,__this);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
              (ui,label,pSVar4,enabled,(System_Action_bool__o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanToggle
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* id, bool enabled, System_Action_bool__o* setEnabled, const MethodInfo* method);
// 0x1823e0aa0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *id,bool enabled,
               System_Action_bool__o *setEnabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass49_0_BuildTitanToggle_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass49_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_184347e1c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass49_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass49_0_o *)0x0) {
    (object->fields).label = label;
    Il2CppCodeGenWriteBarrier(&(object->fields).label,label);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    (object->fields).setEnabled = setEnabled;
    (object->fields).enabled = enabled;
    Il2CppCodeGenWriteBarrier(&(object->fields).setEnabled,setEnabled);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass49_0_BuildTitanToggle_b__0
               ,(MethodInfo *)0x0);
    id_00 = System_String__Concat_1969e50((object->fields).id,"-row",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxMatrix
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* title, System_String_o* id, System_String_array* fieldIds, const MethodInfo* method);
// 0x1823dd470

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *title,System_String_o *id,
               System_String_array *fieldIds,MethodInfo *method)

{
  System_String_o *style;
  System_String_o *pSVar1;
  System_String_o *key;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Misc.");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184347e1d = '\x01';
  }
  if (title != (System_String_o *)0x0) {
    pSVar1 = System_String__ToUpperInvariant(title,(MethodInfo *)0x0);
    key = System_String__Concat_1969e50("GameCreate.Sandbox.Misc.",title,(MethodInfo *)0x0);
    id_00 = System_String__Concat_1969e50(id,"-title",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    style = "header";
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       (key,pSVar1,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar1,style,id_00,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).textKey = key;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,key);
        if (Il2CppMethodInitialized_184347e1f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          Il2CppMethodInitialized_184347e1f = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
                  (ui,id,true,fieldIds,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxSwitchById
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* fieldId, bool enabled, const MethodInfo* method);
// 0x1823de390

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *fieldId,bool enabled,MethodInfo *method)

{
  byte bVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o *object;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *value;
  Settings_BoolSetting_o *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass51_0_BuildSandboxSwitchById_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass51_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_184347e1e = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass51_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass51_0_o *)0x0) {
    (object->fields).enabled = enabled;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(fieldId,(MethodInfo *)0x0);
    (object->fields).field = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).field,value);
    if ((object->fields).field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
      pSVar2 = (Settings_BoolSetting_o *)(((object->fields).field)->fields)._Setting_k__BackingField;
      if (pSVar2 == (Settings_BoolSetting_o *)0x0) {
        (object->fields).boolSetting = (Settings_BoolSetting_o *)0x0;
        pSVar5 = (Settings_BoolSetting_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar3 = true,
           (pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          bVar3 = false;
        }
        pSVar5 = (Settings_BoolSetting_o *)0x0;
        if (bVar3) {
          pSVar5 = pSVar2;
        }
        (object->fields).boolSetting = pSVar5;
        bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar3 = true,
           (pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          bVar3 = false;
        }
        pSVar5 = (Settings_BoolSetting_o *)0x0;
        if (bVar3) {
          pSVar5 = pSVar2;
        }
      }
      Il2CppCodeGenWriteBarrier(&(object->fields).boolSetting,pSVar5);
      if ((object->fields).boolSetting != (Settings_BoolSetting_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        iVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(fieldId,(MethodInfo *)0x0);
        (object->fields).index = iVar4;
        pSVar6 = System_Int32__ToString(&(object->fields).index,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969e50("game-create-sandbox-field-",pSVar6,(MethodInfo *)0x0);
        (object->fields).id = pSVar6;
        Il2CppCodeGenWriteBarrier(&(object->fields).id,pSVar6);
        __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass51_0_BuildSandboxSwitchById_b__0
                   ,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969e50((object->fields).id,"-row",(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823de5e0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar6,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_1823de5e0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldsByIds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_array* fieldIds, const MethodInfo* method);
// 0x1823dcf70

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_array *fieldIds,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e1f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
            (ui,id,true,fieldIds,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldsByIds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, bool enabled, System_String_array* fieldIds, const MethodInfo* method);
// 0x1823dcff0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_23dcff0
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,bool enabled,
               System_String_array *fieldIds,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *object;
  System_Collections_Generic_List_AottgSandboxField__o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_BuildSandboxFieldsByIds_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184347e20 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *)0x0) {
    (object->fields).enabled = enabled;
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    pSVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgSandboxField);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
    (object->fields).fields = pSVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).fields,pSVar2);
    if (fieldIds != (System_String_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)fieldIds->max_length; uVar4 = uVar4 + 1) {
        if ((uint)fieldIds->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        pSVar1 = fieldIds->m_Items[(int)uVar4];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(pSVar1,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
          pSVar2 = (object->fields).fields;
          if (pSVar2 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) goto label_1823dd1eb;
          il2cpp_runtime_helper_180012890(pSVar2,pGVar3,MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add);
        }
      }
      pSVar2 = (object->fields).fields;
      if (pSVar2 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
        (object->fields).split = ((pSVar2->fields)._size + 1) / 2;
        __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_BuildSandboxFieldsByIds_b__0
                   ,(MethodInfo *)0x0);
        pSVar1 = (object->fields).id;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar1,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1823dd1eb:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldById
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, const MethodInfo* method);
// 0x1823dc980

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  
  if (Il2CppMethodInitialized_184347e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e21 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  field = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(id,(MethodInfo *)0x0);
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    index = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField(ui,field,index,true,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxField
// il2cpp: Gisketch_Aottg2UI_Game_AottgSandboxField_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField (System_String_o* id, const MethodInfo* method);
// 0x1823e3a00

Gisketch_Aottg2UI_Game_AottgSandboxField_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_AottgSandboxField__o *pSVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar3;
  
  if (Il2CppMethodInitialized_184347e22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_184347e22 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  iVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,(MethodInfo *)0x0);
  if (-1 < iVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347c42 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347c42 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
    if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
      pGVar3 = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)
               il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,pSVar1,
                             iVar2);
      return pGVar3;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex (System_String_o* id, const MethodInfo* method);
// 0x1823e35c0

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex
                  (System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_AottgSandboxField__o *obj;
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  
  if (Il2CppMethodInitialized_184347e23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_184347e23 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347c42 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  iVar4 = 0;
  obj = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  if (obj != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    while( true ) {
      pvVar2 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,
                          (Il2CppObject *)obj);
      if ((int)pvVar2 <= iVar4) {
        return -1;
      }
      lVar3 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,obj);
      if (lVar3 == 0) break;
      bVar1 = System_String__Equals_196c550(*(System_String_o **)(lVar3 + 0x10),id,5,(MethodInfo *)0x0);
      if (bVar1) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x1823e36d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e24 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347df0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames !=
        false) {
      return (field->fields)._Id_k__BackingField;
    }
    return (field->fields)._Label_k__BackingField;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxAddons
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxAddons (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823dbb20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823dbc99: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxAddons
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o *object;
  longlong lVar7;
  System_Func_StringSetting__bool__o *__this;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar10;
  Il2CppObject *arg0;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int iVar11;
  int iVar12;
  System_Nullable_bool__Fields local_res18 [4];
  int local_res20 [2];
  
  if (Il2CppMethodInitialized_184347e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-addons-title");
    il2cpp_codegen_initialize_runtime_metadata(&"{0} selected");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-addons");
    il2cpp_codegen_initialize_runtime_metadata(&"No addons are available.");
    il2cpp_codegen_initialize_runtime_metadata(&"Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons.SelectedCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-addons-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.addonSelector");
    Il2CppMethodInitialized_184347e25 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347c44 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  iVar11 = 0;
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
  iVar12 = iVar11;
  if (pSVar2 != (System_String_array *)0x0) {
label_1823dbca0:
    do {
      if ((int)pSVar2->max_length <= iVar11) goto label_1823dbe38;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347ede == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0_IsSandboxAddonSelected_b__0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0);
        Il2CppMethodInitialized_184347ede = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0);
      Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
      if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o *)0x0) break;
      (object->fields).index = iVar11;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
      if ((bVar6) && (-1 < (object->fields).index)) {
        iVar1 = (object->fields).index;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
        if (pSVar3 == (System_String_array *)0x0) break;
        if (iVar1 < (int)pSVar3->max_length) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar7 = il2cpp_runtime_helper_181dd5530(0);
          if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x48) == 0)) ||
             (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x58), lVar7 == 0)) break;
          source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar7 + 0x20);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0_IsSandboxAddonSelected_b__0
                     ,(MethodInfo_B61EB0 *)0x0);
          bVar6 = System_Linq_Enumerable__Any_object__6b6920
                            (source,(System_Func_TSource__bool__o *)__this,
                             (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
          iVar11 = iVar11 + 1;
          iVar12 = (iVar12 + 1) - (uint)!bVar6;
          goto label_1823dbca0;
        }
      }
      iVar11 = iVar11 + 1;
    } while( true );
  }
label_1823dc137:
  ThrowNullReferenceException();
label_1823dbe38:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar5 = "GameCreate.Sandbox.Addons";
  pSVar4 = "text";
  pSVar10 = "game-create-sandbox-addons-title";
  pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Addons","Addons",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar8,pSVar4,pSVar10,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar9->fields).textKey = pSVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar9->fields).textKey,pSVar5);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_CurrentCulture((MethodInfo *)0x0);
      pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                          ("GameCreate.Sandbox.Addons.SelectedCount","{0} selected",(MethodInfo *)0x0);
      local_res20[0] = iVar12;
      arg0 = il2cpp_value_box(g_data_184354e08,local_res20);
      pSVar10 = System_String__Format_196ca50
                          ((System_IFormatProvider_o *)provider,pSVar10,arg0,(MethodInfo *)0x0);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,1,pSVar10,"gameCreate.open.addonSelector","game-create-sandbox-addons",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"zoom",
                          (MethodInfo *)0x0);
      local_res18[0].hasValue = false;
      local_res18[0].value = false;
      System_Nullable_bool____ctor
                ((System_Data_SqlTypes_SqlByte_o *)local_res18,(int)pSVar2->max_length != 0,
                 MethodInfo_System_Nullable_bool_ctor);
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar9->fields).enabled.fields = local_res18[0];
        pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                            ("GameCreate.Sandbox.Addons","Addons",(MethodInfo *)0x0);
        (pGVar9->fields).formLabel = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pGVar9->fields).formLabel,pSVar10);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
        value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
        (pGVar9->fields).layout = value;
        Il2CppCodeGenWriteBarrier(&(pGVar9->fields).layout,value);
        if (pSVar2->max_length == 0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          pSVar5 = "GameCreate.Sandbox.Addons.Empty";
          pSVar4 = "text";
          pSVar10 = "game-create-sandbox-addons-empty";
          pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                             ("GameCreate.Sandbox.Addons.Empty","No addons are available.",(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (ui,pSVar8,pSVar4,pSVar10,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823dc137;
          (pGVar9->fields).textKey = pSVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar9->fields).textKey,pSVar5);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildMultiplayerRoom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom (Gisketch_Aottg2UI_Code_AottgUi_o* ui, bool showHeader, const MethodInfo* method);
// 0x1823db470

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,bool showHeader,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *id;
  System_String_o *style;
  System_String_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o *object;
  System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *value_00;
  void *pvVar3;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Func_AottgSandboxField__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Count_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_TakeWhile_AottgSandboxField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AottgSandboxField_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildMultiplayerRoom_b__59_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0_BuildMultiplayerRoom_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"ROOM SETTINGS");
    Il2CppMethodInitialized_184347e26 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  value_00 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass59_0_o *)0x0) {
    (object->fields).fields = value_00;
    Il2CppCodeGenWriteBarrier(&(object->fields).fields,value_00);
    pIVar1 = (Il2CppObject *)(object->fields).fields;
    if (pIVar1 != (Il2CppObject *)0x0) {
      pvVar3 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,pIVar1);
      if ((int)pvVar3 != 0) {
        if (showHeader) {
          if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823db809;
          Gisketch_Aottg2UI_Code_AottgUi__Separator
                    (ui,"game-create-room-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          value = "GameCreate.Room.Title";
          style = "header";
          id = "game-create-room-title";
          text = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Room.Title","ROOM SETTINGS",(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (ui,text,style,id,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823db809;
          (pGVar4->fields).textKey = value;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,value);
        }
        pSVar5 = (System_Collections_Generic_IEnumerable_TSource__o *)(object->fields).fields;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__59_0;
        if (__this == (System_Func_AottgSandboxField__bool__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9
          ;
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AottgSandboxField_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)__this,pIVar1,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildMultiplayerRoom_b__59_0,
                     (MethodInfo_B61EB0 *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__59_0 = __this;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__59_0,__this
                    );
        }
        pSVar5 = System_Linq_Enumerable__TakeWhile_object_
                           (pSVar5,(System_Func_TSource__bool__o *)__this,
                            (MethodInfo_6C7760 *)MethodInfo_System_Linq_Enumerable_TakeWhile_AottgSandboxField
                           );
        iVar2 = System_Linq_Enumerable__Count___Il2CppFullySharedGenericType_
                          (pSVar5,(MethodInfo_6BA540 *)
                                  MethodInfo_System_Linq_Enumerable_Count_AottgSandboxField);
        (object->fields).split = iVar2;
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass59_0_BuildMultiplayerRoom_b__1
                   ,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823db809;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this_00,"game-create-room-fields",layout
                   ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823db809:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomSettings (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823db990

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomSettings
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  
  if (Il2CppMethodInitialized_184347e27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Room Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-description");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"Configure who can join and how players communicate.");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-page-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Description");
    Il2CppMethodInitialized_184347e27 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar3 = "GameCreate.Room.Title";
  pSVar2 = "header";
  pSVar1 = "game-create-room-page-title";
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Room.Title","Room Settings",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar4,pSVar2,pSVar1,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).textKey = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).textKey,pSVar3);
      pSVar3 = "GameCreate.Room.Description";
      pSVar2 = "text";
      pSVar1 = "game-create-room-description";
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Room.Description","Configure who can join and how players communicate.",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar4,pSVar2,pSVar1,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).textKey = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).textKey,pSVar3);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom(ui,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildRoomField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, int32_t index, const MethodInfo* method);
// 0x1823db810

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,
               int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0_o *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_res18 [4];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347e28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass61_0_BuildRoomField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass61_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_184347e28 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass61_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass61_0_o *)0x0) {
    (object->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(object->fields).field,field);
    pSVar1 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50("game-create-room-field-",pSVar1,(MethodInfo *)0x0);
    (object->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,pSVar1);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass61_0_BuildRoomField_b__0
               ,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50((object->fields).id,"-row",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxCustom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxCustom (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823dc150

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxCustom
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  
  if (Il2CppMethodInitialized_184347e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__62_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__62_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__62_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom content");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Content.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Content.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-folders-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-preset-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-content-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-content-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Folders.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-folder-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-managers");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"subheader");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-presets-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose what you want to manage.");
    il2cpp_codegen_initialize_runtime_metadata(&"Folders and logs");
    Il2CppMethodInitialized_184347e29 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar4 = "GameCreate.Sandbox.Custom.Content.Title";
  pSVar3 = "header";
  pSVar2 = "game-create-sandbox-custom-content-title";
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     ("GameCreate.Sandbox.Custom.Content.Title","Custom content",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).textKey = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
      pSVar4 = "GameCreate.Sandbox.Custom.Content.Description";
      pSVar3 = "text";
      pSVar2 = "game-create-sandbox-custom-content-description";
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Sandbox.Custom.Content.Description","Choose what you want to manage.",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).textKey = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        pSVar2 = "clear";
        pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_0;
        if (pUVar7 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9
          ;
          pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar7,pIVar1,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__62_0,
                     (MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_0 =
               (System_Action_AottgUi__o *)pUVar7;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_0,pUVar7
                    );
        }
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,"Wrap",14.0,pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,pSVar2,(System_Action_AottgUi__o *)pUVar7,"game-create-sandbox-custom-managers",pGVar9,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pSVar4 = "GameCreate.Sandbox.Custom.Presets";
        pSVar3 = "subheader";
        pSVar2 = "game-create-sandbox-custom-presets-title";
        pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Sandbox.Custom.Presets","Presets",(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).textKey = pSVar4;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          }
          pSVar2 = "clear";
          pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_1;
          if (pUVar7 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
            pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (pUVar7,pIVar1,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__62_1,
                       (MethodInfo *)0x0);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_1 =
                 (System_Action_AottgUi__o *)pUVar7;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_1,
                       pUVar7);
          }
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,"Wrap",12.0,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (ui,pSVar2,(System_Action_AottgUi__o *)pUVar7,"game-create-sandbox-custom-preset-actions",pGVar9,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          pSVar4 = "GameCreate.Sandbox.Custom.Folders.Title";
          pSVar3 = "subheader";
          pSVar2 = "game-create-sandbox-custom-folders-title";
          pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                             ("GameCreate.Sandbox.Custom.Folders.Title","Folders and logs",(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (ui,pSVar5,pSVar3,pSVar2,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).textKey = pSVar4;
            Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey,pSVar4);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
            }
            pSVar2 = "clear";
            pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_2;
            if (pUVar7 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
              pUVar7 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
              System_Action_object____ctor
                        (pUVar7,pIVar1,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__62_2,
                         (MethodInfo *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_2 =
                   (System_Action_AottgUi__o *)pUVar7;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__62_2,
                         pUVar7);
            }
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,"Wrap",12.0,pGVar8,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,1.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (ui,pSVar2,(System_Action_AottgUi__o *)pUVar7,"game-create-sandbox-custom-folder-actions",pGVar9,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFooter (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823da180

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFooter
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildFooter_b__63_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347e2a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__63_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildFooter_b__63_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__63_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__63_0,__this);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this,"game-create-footer",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CardGrid
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CardGrid (const MethodInfo* method);
// 0x1823e1360

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CardGrid(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_184347e2b = '\x01';
  }
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(320.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Stretch",(System_String_o *)0x0
                      ,"Wrap",20.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFields (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823da6b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823da83e: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFields
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Settings_ExperienceRuleField_o *pSVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  char cVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  Settings_ExperienceRuleField_array *pSVar7;
  System_String_o *pSVar8;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  System_String_o *text;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *object;
  void *pvVar12;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  uint uVar13;
  
  if (Il2CppMethodInitialized_184347e2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildLockedFields_b__66_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-title");
    il2cpp_codegen_initialize_runtime_metadata(&"LOCKED BY THIS EXPERIENCE");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Locked");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-show-locked");
    il2cpp_codegen_initialize_runtime_metadata(&"Show locked settings");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ShowLocked.Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Show the settings this experience changed and locked. They cannot be edited.");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ShowLocked");
    Il2CppMethodInitialized_184347e2c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LockedFields((MethodInfo *)0x0);
  if (pSVar7 != (Settings_ExperienceRuleField_array *)0x0) {
    for (uVar13 = 0; (int)uVar13 < (int)pSVar7->max_length; uVar13 = uVar13 + 1) {
      if ((uint)pSVar7->max_length <= uVar13) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = pSVar7->m_Items[(int)uVar13];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (pSVar1 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823dad94;
      iVar6 = System_Array__IndexOf_object_
                        ((System_Object_array *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->CoreFieldIds,
                         (Il2CppObject *)(pSVar1->fields).Id,
                         (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
      if (iVar6 < 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        cVar4 = il2cpp_runtime_helper_1823d5720(0);
        if (cVar4 != '\0') {
          pSVar8 = (pSVar1->fields).Id;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId(pSVar8,(MethodInfo *)0x0);
          if (bVar5) goto label_1823da8ff;
        }
        if (__this == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) goto label_1823dad94;
        il2cpp_runtime_helper_180012890(__this,pSVar1);
      }
label_1823da8ff:
    }
    if (__this != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
      if ((__this->fields)._size == 0) {
        return;
      }
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Separator
                  (ui,"game-create-locked-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Configuration.ShowLocked","Show locked settings",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347f12 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347f12 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        }
        pSVar3 = "game-create-show-locked";
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__66_0;
        if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          }
          pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9
          ;
          __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (__this_00,pIVar2,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildLockedFields_b__66_0,
                     (MethodInfo_1387DC0 *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__66_0 =
               (System_Action_GisketchActionContext__o *)__this_00;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9__66_0,
                     __this_00);
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Configuration.ShowLocked.Tooltip","Show the settings this experience changed and locked. They cannot be edited.",(MethodInfo *)0x0);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                            (ui,pSVar3,pSVar8,bVar5,(System_Action_GisketchActionContext__o *)__this_00,
                             (System_String_o *)0x0,pSVar9,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar10->fields).layout = pGVar11;
          Il2CppCodeGenWriteBarrier(&(pGVar10->fields).layout,pGVar11);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184347f12 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347f12 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings ==
              false) {
            return;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          pSVar9 = "GameCreate.Configuration.Locked";
          pSVar3 = "header";
          pSVar8 = "game-create-locked-title";
          text = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                           ("GameCreate.Configuration.Locked","LOCKED BY THIS EXPERIENCE",(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              (ui,text,pSVar3,pSVar8,(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar10->fields).textKey = pSVar9;
            Il2CppCodeGenWriteBarrier(&(pGVar10->fields).textKey,pSVar9);
            if (Il2CppMethodInitialized_184347e2d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0);
              il2cpp_codegen_initialize_runtime_metadata(&"clear");
              il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields");
              Il2CppMethodInitialized_184347e2d = '\x01';
            }
            object = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0)
            ;
            if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *)0x0) {
              (object->fields).fields =
                   (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)__this;
              Il2CppCodeGenWriteBarrier(&(object->fields).fields,__this);
              pIVar2 = (Il2CppObject *)(object->fields).fields;
              if (pIVar2 != (Il2CppObject *)0x0) {
                pvVar12 = InterfaceInvoker0_Invoke
                                    (0,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField
                                     ,pIVar2);
                (object->fields).split = ((int)pvVar12 + 1) / 2;
                __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
                System_Action_object____ctor
                          (__this_01,(Il2CppObject *)object,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__0
                           ,(MethodInfo *)0x0);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                pGVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (ui,"clear",(System_Action_AottgUi__o *)__this_01,
                           "game-create-locked-fields",pGVar11,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_1823dad94:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, const MethodInfo* method);
// 0x1823da3d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFieldColumns
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,MethodInfo *method)

{
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *object;
  void *pvVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields");
    Il2CppMethodInitialized_184347e2d = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass67_0_o *)0x0) {
    (object->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(object->fields).fields,fields);
    obj = (Il2CppObject *)(object->fields).fields;
    if (obj != (Il2CppObject *)0x0) {
      pvVar1 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,obj);
      (object->fields).split = ((int)pvVar1 + 1) / 2;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass67_0_BuildLockedFieldColumns_b__0
                 ,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-locked-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Settings_ExperienceRuleField_o* field, int32_t index, const MethodInfo* method);
// 0x1823da530

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Settings_ExperienceRuleField_o *field,int32_t index,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0_o *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_res18 [4];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347e2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass68_0_BuildLockedField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass68_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_184347e2e = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass68_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass68_0_o *)0x0) {
    (object->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(object->fields).field,field);
    pSVar1 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50("game-create-locked-field-",pSVar1,(MethodInfo *)0x0);
    (object->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,pSVar1);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass68_0_BuildLockedField_b__0
               ,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50((object->fields).id,"-row",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$LockedFieldTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LockedFieldTooltip (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823e27b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LockedFieldTooltip
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347e2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"Locked by this experience.");
    il2cpp_codegen_initialize_runtime_metadata(&"\nLocked by this experience.");
    Il2CppMethodInitialized_184347e2f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(field,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return "Locked by this experience.";
  }
  pSVar2 = System_String__Concat_1969e50(pSVar2,"\nLocked by this experience.",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceFields (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, Settings_PresetDefinition_o* experience, const MethodInfo* method);
// 0x1823d79e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d7c0d: nop dword ptr [rax]
// asm:   0x1823d7e1f: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceFields
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,
               Settings_PresetDefinition_o *experience,MethodInfo *method)

{
  ushort uVar1;
  System_String_array *array;
  System_String_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *pSVar5;
  bool bVar6;
  char cVar7;
  int32_t iVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *object;
  System_Collections_Generic_List_ExperienceRuleField__o *pSVar9;
  void *pvVar10;
  longlong lVar11;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  VirtualInvokeData *pVVar12;
  Il2CppObject *pIVar13;
  undefined8 uVar14;
  ushort uVar15;
  int iVar16;
  System_Collections_Generic_List_ExperienceUISection__o *sections;
  uint uVar17;
  
  if (Il2CppMethodInitialized_184347e30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_0_BuildExperienceFields_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-fields-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347e30 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass70_0_o *)0x0) {
    (object->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(object->fields).fields,fields);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    array = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->CoreFieldIds;
    pSVar9 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar9,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    (object->fields).core = pSVar9;
    Il2CppCodeGenWriteBarrier(&(object->fields).core,pSVar9);
    if (array != (System_String_array *)0x0) {
      for (uVar17 = 0; (int)uVar17 < (int)array->max_length; uVar17 = uVar17 + 1) {
        if ((uint)array->max_length <= uVar17) {
          ThrowIndexOutOfRangeException();
        }
        pIVar13 = (Il2CppObject *)(object->fields).fields;
        pSVar2 = array->m_Items[(int)uVar17];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        if (Il2CppMethodInitialized_184347e38 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
          Il2CppMethodInitialized_184347e38 = '\x01';
        }
        iVar16 = 0;
        if (pIVar13 == (Il2CppObject *)0x0) goto label_1823d8093;
        while( true ) {
          pvVar10 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,
                               pIVar13);
          if ((int)pvVar10 <= iVar16) break;
          lVar11 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,
                                 pIVar13);
          if (lVar11 == 0) goto label_1823d8093;
          bVar6 = System_String__Equals_196c550
                            (*(System_String_o **)(lVar11 + 0x10),pSVar2,5,(MethodInfo *)0x0);
          if (bVar6) {
            lVar11 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,
                                   pIVar13);
            if (lVar11 != 0) {
              pSVar9 = (object->fields).core;
              if (pSVar9 == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) goto label_1823d8093;
              il2cpp_runtime_helper_180012890(pSVar9,lVar11,MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
            }
            break;
          }
          iVar16 = iVar16 + 1;
        }
      }
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass70_0_BuildExperienceFields_b__0
                 ,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      iVar16 = 0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","FlexStart",
                          (System_String_o *)0x0,"Wrap",32.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-core-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar9 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar9,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
        while (pIVar13 = (Il2CppObject *)(object->fields).fields, pIVar13 != (Il2CppObject *)0x0) {
          pIVar3 = pIVar13->klass;
          uVar1 = (pIVar3->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            uVar15 = 0;
            do {
              if (pIVar4[uVar15].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField)
              {
                pVVar12 = pIVar3->vtable + pIVar4[uVar15].offset;
                goto label_1823d7e46;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar1);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar13,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField
                               ,0);
label_1823d7e46:
          iVar8 = (*pVVar12->methodPtr)(pIVar13,pVVar12->method);
          if (iVar8 <= iVar16) {
            if (pSVar9 != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
              if ((pSVar9->fields)._size != 0) {
                Gisketch_Aottg2UI_Code_AottgUi__Separator
                          (ui,"game-create-fields-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
                pSVar5 = (object->fields).fields;
                if (experience == (Settings_PresetDefinition_o *)0x0) {
                  sections = (System_Collections_Generic_List_ExperienceUISection__o *)0x0;
                }
                else {
                  sections = (experience->fields).UISections;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSections
                          (ui,pSVar5,pSVar9,sections,(MethodInfo *)0x0);
              }
              return;
            }
            break;
          }
          pIVar13 = (Il2CppObject *)(object->fields).fields;
          if (pIVar13 == (Il2CppObject *)0x0) break;
          pIVar3 = pIVar13->klass;
          uVar1 = (pIVar3->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            uVar15 = 0;
            do {
              if (pIVar4[uVar15].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
                pVVar12 = pIVar3->vtable + pIVar4[uVar15].offset;
                goto label_1823d7eb6;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar1);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar13,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0
                              );
label_1823d7eb6:
          pIVar13 = (*pVVar12->methodPtr)(pIVar13,iVar16,pVVar12->method);
          if (pIVar13 == (Il2CppObject *)0x0) break;
          if (*(char *)&pIVar13[2].monitor != '\0') {
            pSVar5 = (object->fields).fields;
            if (pSVar5 == (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)0x0) break;
            lVar11 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,
                                   pSVar5,iVar16);
            if (lVar11 == 0) break;
            iVar8 = System_Array__IndexOf_object_
                              ((System_Object_array *)array,*(Il2CppObject **)(lVar11 + 0x10),
                               (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
            if (iVar8 < 0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              cVar7 = il2cpp_runtime_helper_1823d5720(0);
              if (cVar7 != '\0') {
                pSVar5 = (object->fields).fields;
                if (pSVar5 == (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)0x0) break;
                lVar11 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField
                                       ,pSVar5,iVar16);
                if (lVar11 == 0) break;
                pSVar2 = *(System_String_o **)(lVar11 + 0x10);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId
                                  (pSVar2,(MethodInfo *)0x0);
                if (bVar6) goto label_1823d7fbd;
              }
              pSVar5 = (object->fields).fields;
              if (pSVar5 == (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)0x0) break;
              uVar14 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,
                                     pSVar5,iVar16);
              if (pSVar9 == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) break;
              il2cpp_runtime_helper_180012890(pSVar9,uVar14);
            }
          }
label_1823d7fbd:
          iVar16 = iVar16 + 1;
        }
      }
    }
  }
label_1823d8093:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceModeField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceModeField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Settings_ExperienceRuleField_o* field, int32_t index, const MethodInfo* method);
// 0x1823d80a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d8200: mov edi, r12d
// asm:   0x1823d8203: jmp 0x1823d8216
// asm:   0x1823d8245: mov rsi, qword ptr [rip + 0x1d151ec]  ; "gameCreate.open.modeSelector"
// asm:   0x1823d824c: jmp 0x1823d825f

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceModeField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Settings_ExperienceRuleField_o *field,int32_t index,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *icon;
  bool value_00;
  System_Nullable_bool__Fields local_res8 [4];
  int32_t local_res18 [2];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347e31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347e31 = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("game-create-field-",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions(field,(MethodInfo *)0x0);
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    pSVar3 = (field->fields).Id;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(pSVar3,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50(pSVar1,"-label",(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar3,"text",pSVar4,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      value_00 = false;
      if ((field->fields).Editable != false) {
        if (pSVar2 == (System_String_array *)0x0) goto label_1823d8425;
        value_00 = 1 < (int)pSVar2->max_length;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(field,(MethodInfo *)0x0);
      pSVar3 = "gameCreate.open.modeSelector";
      if (value_00 == false) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      tooltip = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(field,(MethodInfo *)0x0);
      icon = (System_String_o *)0x0;
      if (value_00 != false) {
        icon = "zoom";
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,1,pSVar4,pSVar3,pSVar1,tooltip,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
      local_res8[0].hasValue = false;
      local_res8[0].value = false;
      System_Nullable_bool____ctor
                ((System_Data_SqlTypes_SqlByte_o *)local_res8,value_00,MethodInfo_System_Nullable_bool_ctor);
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar5->fields).enabled.fields = local_res8[0];
      pSVar1 = (field->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(pSVar1,(MethodInfo *)0x0);
      (pGVar5->fields).formLabel = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).formLabel,pSVar1);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value);
      return;
    }
  }
label_1823d8425:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceScore
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceScore (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d8440
// eh: try 0x1823d864d..0x1823d8967 -> pad 0x183340d70 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 186 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d877d: mov r14, qword ptr [rip + 0x1cb61ec]  ; "Higher is better"
// asm:   0x1823d8784: mov rsi, qword ptr [rip + 0x1d2309d]  ; "GameCreate.Configuration.ScoreHigher"
// asm:   0x1823d886c: nop 
// asm:   0x1823d886d: jmp 0x1823d893b
// asm:   0x1823d8872: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1823d887a: test rdi, rdi
// asm:   0x1823d887d: je 0x1823d8950
// asm:   0x1823d8883: mov rax, qword ptr [rdi]
// asm:   0x1823d8886: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823d888d: mov rcx, rdi
// asm:   0x1823d8890: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823d8896: mov rbx, rax
// asm:   0x1823d8899: lea rcx, [rip + 0x1cb1700]  ; "Could not load experience score: "
// asm:   0x1823d88a0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823d88a5: mov rcx, rax
// asm:   0x1823d88a8: xor r8d, r8d
// asm:   0x1823d88ab: mov rdx, rbx
// asm:   0x1823d88ae: call 0x181969e50  ; System_String__Concat()
// asm:   0x1823d88b3: mov rbx, rax
// asm:   0x1823d88b6: lea rcx, [rip + 0x1d22b7b]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1823d88bd: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823d88c2: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1823d88c9: jne 0x1823d88d3
// asm:   0x1823d88cb: mov rcx, rax
// asm:   0x1823d88ce: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823d88d3: xor edx, edx
// asm:   0x1823d88d5: mov rcx, rbx
// asm:   0x1823d88d8: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x1823d88dd: mov rax, qword ptr [rdi]
// asm:   0x1823d88e0: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823d88e7: mov rcx, rdi
// asm:   0x1823d88ea: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823d88f0: mov rbx, rax
// asm:   0x1823d88f3: lea rcx, [rip + 0x1cb16a6]  ; "Could not load experience score: "
// asm:   0x1823d88fa: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823d88ff: mov rcx, rax
// asm:   0x1823d8902: xor r8d, r8d
// asm:   0x1823d8905: mov rdx, rbx
// asm:   0x1823d8908: call 0x181969e50  ; System_String__Concat()
// asm:   0x1823d890d: mov rbx, rax
// asm:   0x1823d8910: lea rcx, [rip + 0x1d0ff89]  ; "game-create-score-error"
// asm:   0x1823d8917: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823d891c: mov r9, rax
// asm:   0x1823d891f: xor edi, edi
// asm:   0x1823d8921: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1823d8926: mov r8, rbx
// asm:   0x1823d8929: mov edx, 3
// asm:   0x1823d892e: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x1823d8936: call 0x1818c7500  ; Gisketch_Aottg2UI_Code_AottgUi__Callout()
// asm:   0x183340d70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340d75: push rbx
// asm:   0x183340d76: push rbp
// asm:   0x183340d77: push rsi
// asm:   0x183340d78: push rdi
// asm:   0x183340d79: sub rsp, 0x48
// asm:   0x183340d7d: mov rbp, rdx
// asm:   0x183340d80: mov rsi, qword ptr [rbp + 0x40]
// asm:   0x183340d84: mov rdi, qword ptr [rsi]
// asm:   0x183340d87: lea rcx, [rip + 0xd381ca]  ; TypeInfo_System_Exception
// asm:   0x183340d8e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340d93: test rdi, rdi
// asm:   0x183340d96: je 0x183340f19
// asm:   0x183340d9c: mov r8, qword ptr [rdi]
// asm:   0x183340d9f: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x183340da6: cmp byte ptr [r8 + 0x130], cl
// asm:   0x183340dad: jb 0x183340dc8
// asm:   0x183340daf: movzx ecx, cl
// asm:   0x183340db2: dec ecx
// asm:   0x183340db4: movsxd rdx, ecx
// asm:   0x183340db7: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x183340dbe: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x183340dc2: jne 0x183340dc8
// asm:   0x183340dc4: mov al, 1
// asm:   0x183340dc6: jmp 0x183340dca
// asm:   0x183340dc8: xor al, al
// asm:   0x183340dca: xor ebx, ebx
// asm:   0x183340dcc: test al, al
// asm:   0x183340dce: cmovne rbx, rdi
// asm:   0x183340dd2: test rbx, rbx
// asm:   0x183340dd5: je 0x183340f19
// asm:   0x183340ddb: mov qword ptr [rbp + 0x90], rbx
// asm:   0x183340de2: lea rcx, [rip + 0xd5efc7]  ; TypeInfo_System_IO_IOException
// asm:   0x183340de9: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340dee: mov r8, qword ptr [rbx]
// asm:   0x183340df1: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x183340df8: cmp byte ptr [r8 + 0x130], cl
// asm:   0x183340dff: jb 0x183340e1a
// asm:   0x183340e01: movzx ecx, cl
// asm:   0x183340e04: dec ecx
// asm:   0x183340e06: movsxd rdx, ecx
// asm:   0x183340e09: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x183340e10: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x183340e14: jne 0x183340e1a
// asm:   0x183340e16: mov cl, 1
// asm:   0x183340e18: jmp 0x183340e1c
// asm:   0x183340e1a: xor cl, cl
// asm:   0x183340e1c: xor eax, eax
// asm:   0x183340e1e: test cl, cl
// asm:   0x183340e20: cmovne rax, rbx
// asm:   0x183340e24: test rax, rax
// asm:   0x183340e27: jne 0x183340f0b
// asm:   0x183340e2d: lea rcx, [rip + 0xd4a76c]  ; TypeInfo_System_UnauthorizedAccessException
// asm:   0x183340e34: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340e39: mov r8, qword ptr [rbx]
// asm:   0x183340e3c: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x183340e43: cmp byte ptr [r8 + 0x130], cl
// asm:   0x183340e4a: jb 0x183340e65
// asm:   0x183340e4c: movzx ecx, cl
// asm:   0x183340e4f: dec ecx
// asm:   0x183340e51: movsxd rdx, ecx
// asm:   0x183340e54: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x183340e5b: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x183340e5f: jne 0x183340e65
// asm:   0x183340e61: mov cl, 1
// asm:   0x183340e63: jmp 0x183340e67
// asm:   0x183340e65: xor cl, cl
// asm:   0x183340e67: xor eax, eax
// asm:   0x183340e69: test cl, cl
// asm:   0x183340e6b: cmovne rax, rbx
// asm:   0x183340e6f: test rax, rax
// asm:   0x183340e72: jne 0x183340f0b
// asm:   0x183340e78: lea rcx, [rip + 0xd86f31]  ; TypeInfo_System_ArgumentException
// asm:   0x183340e7f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340e84: mov r8, qword ptr [rbx]
// asm:   0x183340e87: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x183340e8e: cmp byte ptr [r8 + 0x130], cl
// asm:   0x183340e95: jb 0x183340eb0
// asm:   0x183340e97: movzx ecx, cl
// asm:   0x183340e9a: dec ecx
// asm:   0x183340e9c: movsxd rdx, ecx
// asm:   0x183340e9f: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x183340ea6: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x183340eaa: jne 0x183340eb0
// asm:   0x183340eac: mov cl, 1
// asm:   0x183340eae: jmp 0x183340eb2
// asm:   0x183340eb0: xor cl, cl
// asm:   0x183340eb2: xor eax, eax
// asm:   0x183340eb4: test cl, cl
// asm:   0x183340eb6: cmovne rax, rbx
// asm:   0x183340eba: test rax, rax
// asm:   0x183340ebd: jne 0x183340f0b
// asm:   0x183340ebf: lea rcx, [rip + 0xd6d78a]  ; TypeInfo_System_InvalidOperationException
// asm:   0x183340ec6: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340ecb: mov r8, qword ptr [rbx]
// asm:   0x183340ece: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x183340ed5: cmp byte ptr [r8 + 0x130], cl
// asm:   0x183340edc: jb 0x183340ef7
// asm:   0x183340ede: movzx ecx, cl
// asm:   0x183340ee1: dec ecx
// asm:   0x183340ee3: movsxd rdx, ecx
// asm:   0x183340ee6: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x183340eed: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x183340ef1: jne 0x183340ef7
// asm:   0x183340ef3: mov cl, 1
// asm:   0x183340ef5: jmp 0x183340ef9
// asm:   0x183340ef7: xor cl, cl
// asm:   0x183340ef9: xor eax, eax
// asm:   0x183340efb: test cl, cl
// asm:   0x183340efd: cmovne rax, rbx
// asm:   0x183340f01: xor ecx, ecx
// asm:   0x183340f03: test rax, rax
// asm:   0x183340f06: setne cl
// asm:   0x183340f09: jmp 0x183340f10
// asm:   0x183340f0b: mov ecx, 1
// asm:   0x183340f10: xor eax, eax
// asm:   0x183340f12: test ecx, ecx
// asm:   0x183340f14: setne al
// asm:   0x183340f17: jmp 0x183340f1b
// asm:   0x183340f19: xor eax, eax
// asm:   0x183340f1b: test eax, eax
// asm:   0x183340f1d: setne al
// asm:   0x183340f20: test al, al
// asm:   0x183340f22: je 0x183340f34
// asm:   0x183340f24: movabs rax, 0
// asm:   0x183340f2e: jmp 0x183340f4c
// asm:   0x183340f34: mov rax, qword ptr [rsi]
// asm:   0x183340f37: mov qword ptr [rbp + 0x48], rax
// asm:   0x183340f3b: lea rdx, [rip + 0xc9b046]
// asm:   0x183340f42: lea rcx, [rbp + 0x48]
// asm:   0x183340f46: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340f4c: add rsp, 0x48
// asm:   0x183340f50: pop rdi
// asm:   0x183340f51: pop rsi
// asm:   0x183340f52: pop rbp
// asm:   0x183340f53: pop rbx
// asm:   0x183340f54: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceScore
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Settings_ExperienceScoreStore_o *__this;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Settings_ExperienceScoreRecord_o *pSVar6;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184347e32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&"Higher is better");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Score");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-score");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ScoreLower");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-score-direction");
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ScoreHigher");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-score-label");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.NoScore");
    il2cpp_codegen_initialize_runtime_metadata(&"No saved score");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"SAVED SCORE");
    il2cpp_codegen_initialize_runtime_metadata(&"Lower is better");
    Il2CppMethodInitialized_184347e32 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Settings_ExperienceIdentity__HasScoring
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar1 = "GameCreate.Configuration.Score";
    pSVar7 = "subtext";
    pSVar5 = "game-create-score-label";
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       ("GameCreate.Configuration.Score","SAVED SCORE",(MethodInfo *)0x0);
    if ((ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
       (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (ui,pSVar3,pSVar7,pSVar5,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
       pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      ThrowNullReferenceException();
    }
    (pGVar4->fields).textKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,pSVar1);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar5 = Settings_ExperienceIdentity__GetId
                       (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _Working_k__BackingField,(MethodInfo *)0x0);
    if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
    }
    __this = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
    if (__this == (Settings_ExperienceScoreStore_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = Settings_ExperienceScoreStore__Get(__this,pSVar5,(MethodInfo *)0x0);
    if (pSVar6 == (Settings_ExperienceScoreRecord_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar1 = "GameCreate.Configuration.NoScore";
      pSVar7 = "text";
      pSVar5 = "game-create-score";
      pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         ("GameCreate.Configuration.NoScore","No saved score",(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar3,pSVar7,pSVar5,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar4->fields).textKey = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,pSVar1);
    }
    else {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar5 = System_Single__ToString_1b4a0d0
                         (&(pSVar6->fields).Score,"0.##",(System_IFormatProvider_o *)provider,
                          (MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969b70
                         (pSVar5," ",(pSVar6->fields).Unit,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar5,"header","game-create-score",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar5 = "GameCreate.Configuration.ScoreHigher";
      pSVar7 = "Higher is better";
      if ((pSVar6->fields).LowerIsBetter != false) {
        pSVar5 = "GameCreate.Configuration.ScoreLower";
        pSVar7 = "Lower is better";
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar3 = "subtext";
      pSVar1 = "game-create-score-direction";
      pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         (pSVar5,pSVar7,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (ui,pSVar7,pSVar3,pSVar1,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar4->fields).textKey = pSVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,pSVar5);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildVariantSelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildVariantSelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823e0e70

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildVariantSelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Settings_ExperienceRuleResult_o *pSVar1;
  Settings_PresetDefinition_o *pSVar2;
  System_Collections_Generic_Dictionary_string__List_string___o *__this;
  Settings_InGameSet_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0_o *object;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_String_array *pSVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_184347e33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass73_0_BuildVariantSelector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass73_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-variants-row");
    Il2CppMethodInitialized_184347e33 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass73_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184347eb9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (((pSVar1 == (Settings_ExperienceRuleResult_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Experience, pSVar2 == (Settings_PresetDefinition_o *)0x0)) ||
     ((pSVar2->fields).Variants == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) {
    pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
    if (((pSVar1 == (Settings_ExperienceRuleResult_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).Experience, pSVar2 == (Settings_PresetDefinition_o *)0x0)) ||
       (__this = (pSVar2->fields).Variants,
       __this == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) goto label_1823e1242;
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    pSVar5 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  }
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass73_0_o *)0x0) {
    (object->fields).variants = pSVar5;
    Il2CppCodeGenWriteBarrier(&(object->fields).variants,pSVar5);
    pSVar5 = (object->fields).variants;
    if (pSVar5 != (System_String_array *)0x0) {
      if (pSVar5->max_length != 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347eb8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
          Il2CppMethodInitialized_184347eb8 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
            (Settings_InGameSet_o *)0x0) {
          ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
        }
        else {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).ExperienceVariant, pSVar4 == (Settings_StringSetting_o *)0x0))
          goto label_1823e1242;
          ppSVar6 = &(pSVar4->fields)._value;
        }
        value = *ppSVar6;
        (object->fields).selected = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).selected,value);
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass73_0_BuildVariantSelector_b__0
                   ,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)0x0);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823e1242;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this_00,"game-create-variants-row",layout
                   ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823e1242:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$IsRoomSettingId
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId (System_String_o* id, const MethodInfo* method);
// 0x1823e25b0
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e2654: mov rdx, qword ptr [rip + 0x1cb6345]  ; "misc.AccountRequired"
// asm:   0x1823e265b: jmp 0x1823e26ea
// asm:   0x1823e2667: mov rdx, qword ptr [rip + 0x1d0c94a]  ; "general.RoomName"
// asm:   0x1823e268c: mov rdx, qword ptr [rip + 0x1d0c76d]  ; "general.MaxPlayers"
// asm:   0x1823e2693: jmp 0x1823e266e
// asm:   0x1823e269c: mov rdx, qword ptr [rip + 0x1d0c835]  ; "general.Password"
// asm:   0x1823e26a3: jmp 0x1823e266e
// asm:   0x1823e26ac: mov rdx, qword ptr [rip + 0x1cb7c4d]  ; "misc.ProximityMinDistance"
// asm:   0x1823e26b3: jmp 0x1823e266e
// asm:   0x1823e26c3: mov rdx, qword ptr [rip + 0x1cb8256]  ; "misc.VoiceChat"
// asm:   0x1823e26ca: jmp 0x1823e266e
// asm:   0x1823e26d3: mov rdx, qword ptr [rip + 0x1cb7b46]  ; "misc.ProximityMaxDistance"
// asm:   0x1823e26da: jmp 0x1823e266e
// asm:   0x1823e26e3: mov rdx, qword ptr [rip + 0x1cb7976]  ; "misc.Motd"

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"general.RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    Il2CppMethodInitialized_184347e34 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(id,(MethodInfo *)0x0);
  if (uVar2 < 0x9ab36970) {
    if (uVar2 < 0x33964669) {
      pSVar3 = "misc.Motd";
      if (uVar2 != 0x28266215) {
        if (uVar2 != 0x33964668) {
          return false;
        }
        bVar1 = System_String__op_Equality(id,"misc.AllowVoteKicking",(MethodInfo *)0x0);
        return bVar1;
      }
label_1823e26ea:
      bVar1 = System_String__op_Equality(id,pSVar3,(MethodInfo *)0x0);
      goto joined_r0x0001823e267b;
    }
    pSVar3 = "misc.VoiceChat";
    if ((uVar2 != 0x9963f387) && (pSVar3 = "misc.ProximityMaxDistance", uVar2 != 0x9ab3696f)) {
      return false;
    }
  }
  else if (uVar2 < 0xca5439de) {
    pSVar3 = "general.Password";
    if ((uVar2 != 0xa8663a56) && (pSVar3 = "misc.ProximityMinDistance", uVar2 != 0xca5439dd)) {
      return false;
    }
  }
  else {
    pSVar3 = "misc.AccountRequired";
    if (uVar2 == 0xd1f8e235) goto label_1823e26ea;
    pSVar3 = "general.RoomName";
    if ((uVar2 != 0xd6b630db) && (pSVar3 = "general.MaxPlayers", uVar2 != 0xeaf83b9f)) {
      return false;
    }
  }
  bVar1 = System_String__op_Equality(id,pSVar3,(MethodInfo *)0x0);
joined_r0x0001823e267b:
  if (!bVar1) {
    return false;
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSections
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSections (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* allFields, System_Collections_Generic_List_ExperienceRuleField__o* remaining, System_Collections_Generic_List_ExperienceUISection__o* sections, const MethodInfo* method);
// 0x1823d8be0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d8dae: nop 
// asm:   0x1823d8e8d: nop dword ptr [rax]
// asm:   0x1823d8eed: mov rbx, qword ptr [rip + 0x1cb8b1c]  ; "Settings"
// asm:   0x1823d8ef4: jmp 0x1823d8f07
// asm:   0x1823d8f4b: mov rbp, qword ptr [rsp + 0x70]
// asm:   0x1823d8f5b: mov rsi, qword ptr [rsp + 0x80]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSections
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *allFields,
               System_Collections_Generic_List_ExperienceRuleField__o *remaining,
               System_Collections_Generic_List_ExperienceUISection__o *sections,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0_o *object;
  System_Collections_Generic_HashSet_string__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1_o *object_00;
  Settings_ExperienceUISection_o *pSVar2;
  System_Func_ExperienceRuleField__bool__o *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *pSVar5;
  Settings_ExperienceRuleField_o *pSVar6;
  int index;
  int32_t sectionIndex;
  System_String_o *pSVar7;
  int index_00;
  
  if (Il2CppMethodInitialized_184347e35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceUISection_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceUISection_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_0_BuildExperienceSections_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_1_BuildExperienceSections_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_184347e35 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_0_o *)0x0) {
    (object->fields).assigned = __this_00;
    Il2CppCodeGenWriteBarrier(&(object->fields).assigned,__this_00);
    if (sections != (System_Collections_Generic_List_ExperienceUISection__o *)0x0) {
      index_00 = 0;
      while (index_00 < (sections->fields)._size) {
        object_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_1);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
        pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)sections,index_00,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_ExperienceUISection_get_Item);
        if (object_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass75_1_o *)0x0)
        goto label_1823d9011;
        (object_00->fields).section = pSVar2;
        Il2CppCodeGenWriteBarrier(&(object_00->fields).section,pSVar2);
        if ((((object_00->fields).section == (Settings_ExperienceUISection_o *)0x0) ||
            (pSVar2 = (object_00->fields).section,
            (pSVar2->fields).Settings == (System_Collections_Generic_List_string__o *)0x0)) ||
           ((((pSVar2->fields).Settings)->fields)._size == 0)) {
label_1823d8f50:
          index_00 = index_00 + 1;
        }
        else {
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)pSVar3,(Il2CppObject *)object_00,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_1_BuildExperienceSections_b__1
                     ,(MethodInfo_B61EB0 *)0x0);
          pSVar4 = System_Linq_Enumerable__Where_float_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)remaining,
                              (System_Func_TSource__bool__o *)pSVar3,
                              (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField
                             );
          pSVar5 = System_Linq_Enumerable__ToList_object_
                             (pSVar4,(MethodInfo_6C9C10 *)
                                     MethodInfo_System_Linq_Enumerable_ToList_ExperienceRuleField);
          if (pSVar5 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_1823d9011;
          if ((pSVar5->fields)._size == 0) goto label_1823d8f50;
          index = 0;
          if (0 < (pSVar5->fields)._size) {
            do {
              __this = (System_Collections_Generic_HashSet_object__o *)(object->fields).assigned;
              pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
              if ((pSVar6 == (Settings_ExperienceRuleField_o *)0x0) ||
                 (__this == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_1823d9011;
              System_Collections_Generic_HashSet_object___Add
                        (__this,(Il2CppObject *)(pSVar6->fields).Id,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
              index = index + 1;
            } while (index < (pSVar5->fields)._size);
          }
          pSVar2 = (object_00->fields).section;
          if (pSVar2 == (Settings_ExperienceUISection_o *)0x0) goto label_1823d9011;
          bVar1 = System_String__IsNullOrWhiteSpace((pSVar2->fields).Name,(MethodInfo *)0x0);
          pSVar7 = "Settings";
          if (!bVar1) {
            pSVar2 = (object_00->fields).section;
            if (pSVar2 == (Settings_ExperienceUISection_o *)0x0) goto label_1823d9011;
            pSVar7 = (pSVar2->fields).Name;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection
                    (ui,allFields,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)pSVar5,
                     pSVar7,index_00,(MethodInfo *)0x0);
          index_00 = index_00 + 1;
        }
      }
    }
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar3,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass75_0_BuildExperienceSections_b__0
               ,(MethodInfo_B61EB0 *)0x0);
    pSVar4 = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)remaining,
                        (System_Func_TSource__bool__o *)pSVar3,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    pSVar5 = System_Linq_Enumerable__ToList_object_
                       (pSVar4,(MethodInfo_6C9C10 *)
                               MethodInfo_System_Linq_Enumerable_ToList_ExperienceRuleField);
    pSVar7 = "Settings";
    if (pSVar5 != (System_Collections_Generic_List_TSource__o *)0x0) {
      if (0 < (pSVar5->fields)._size) {
        if (sections == (System_Collections_Generic_List_ExperienceUISection__o *)0x0) {
          sectionIndex = 0;
        }
        else {
          sectionIndex = (sections->fields)._size;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection
                  (ui,allFields,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)pSVar5,
                   pSVar7,sectionIndex,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823d9011:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* allFields, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, System_String_o* title, int32_t sectionIndex, const MethodInfo* method);
// 0x1823d8970

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *allFields,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,System_String_o *title,
               int32_t sectionIndex,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *object;
  void *pvVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-section-");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184347e36 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&sectionIndex,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70("game-create-section-",pSVar1,"-title",(MethodInfo *)0x0)
  ;
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,title,"header",pSVar1,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString(&sectionIndex,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50("game-create-section-",pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    if (Il2CppMethodInitialized_184347e37 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0);
      il2cpp_codegen_initialize_runtime_metadata(&"clear");
      il2cpp_codegen_initialize_runtime_metadata(&"-fields");
      Il2CppMethodInitialized_184347e37 = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *)0x0) {
      (object->fields).fields = fields;
      Il2CppCodeGenWriteBarrier(&(object->fields).fields,fields);
      (object->fields).allFields = allFields;
      Il2CppCodeGenWriteBarrier(&(object->fields).allFields,allFields);
      (object->fields).id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(object->fields).id,pSVar1);
      obj = (Il2CppObject *)(object->fields).fields;
      if (obj != (Il2CppObject *)0x0) {
        pvVar2 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,obj)
        ;
        (object->fields).split = ((int)pvVar2 + 1) / 2;
        __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__0
                   ,(MethodInfo *)0x0);
        pSVar1 = System_String__Concat_1969e50((object->fields).id,"-fields",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this,pSVar1,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* allFields, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, System_String_o* id, const MethodInfo* method);
// 0x1823d9cb0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *allFields,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,System_String_o *id,
               MethodInfo *method)

{
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *object;
  void *pvVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-fields");
    Il2CppMethodInitialized_184347e37 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass77_0_o *)0x0) {
    (object->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(object->fields).fields,fields);
    (object->fields).allFields = allFields;
    Il2CppCodeGenWriteBarrier(&(object->fields).allFields,allFields);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    obj = (Il2CppObject *)(object->fields).fields;
    if (obj != (Il2CppObject *)0x0) {
      pvVar1 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,obj);
      (object->fields).split = ((int)pvVar1 + 1) / 2;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass77_0_BuildFieldColumns_b__0
                 ,(MethodInfo *)0x0);
      id_00 = System_String__Concat_1969e50((object->fields).id,"-fields",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this,id_00,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FindField
// il2cpp: Settings_ExperienceRuleField_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, System_String_o* id, const MethodInfo* method);
// 0x1823e24f0

Settings_ExperienceRuleField_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField
          (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,System_String_o *id,
          MethodInfo *method)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  Settings_ExperienceRuleField_o *pSVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_184347e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_184347e38 = '\x01';
  }
  iVar5 = 0;
  if (fields != (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)0x0) {
    while( true ) {
      pvVar2 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,
                          (Il2CppObject *)fields);
      if ((int)pvVar2 <= iVar5) {
        return (Settings_ExperienceRuleField_o *)0x0;
      }
      lVar3 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,fields);
      if (lVar3 == 0) break;
      bVar1 = System_String__Equals_196c550(*(System_String_o **)(lVar3 + 0x10),id,5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = (Settings_ExperienceRuleField_o *)
                 il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,fields,
                               iVar5);
        return pSVar4;
      }
      iVar5 = iVar5 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823e1ac0

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex
                  (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,
                  Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  uint uVar1;
  Settings_ExperienceRuleField_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e39 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)0x0);
  if (pSVar2 != (Settings_ExperienceRuleField_array *)0x0) {
    uVar1 = (uint)pSVar2->max_length;
    uVar3 = 0;
    while( true ) {
      if ((int)uVar1 <= (int)uVar3) {
        return -1;
      }
      if (uVar1 <= uVar3) break;
      if (pSVar2->m_Items[(int)uVar3] == field) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* fields, const MethodInfo* method);
// 0x1823dca30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldColumns
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *fields,MethodInfo *method)

{
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *object;
  void *pvVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields");
    Il2CppMethodInitialized_184347e3a = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass80_0_o *)0x0) {
    (object->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(object->fields).fields,fields);
    obj = (Il2CppObject *)(object->fields).fields;
    if (obj != (Il2CppObject *)0x0) {
      pvVar1 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,obj);
      (object->fields).split = ((int)pvVar1 + 1) / 2;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass80_0_BuildSandboxFieldColumns_b__0
                 ,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this,"game-create-sandbox-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldColumnsLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout (const MethodInfo* method);
// 0x1823e1880

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347e3b = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,"Wrap",32.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldColumnLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout (const MethodInfo* method);
// 0x1823e1770

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347e3c = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(47.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldRowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout (const MethodInfo* method);
// 0x1823e1cd0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_184347e3d = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,"Wrap",14.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,7.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldControlLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout (const MethodInfo* method);
// 0x1823e1990

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347e3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347e3e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      minWidth,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanel
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel (const MethodInfo* method);
// 0x1823e40d0

Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_48;
  
  if (Il2CppMethodInitialized_184347e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CREATE GAME");
    Il2CppMethodInitialized_184347e3f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  options = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelOptions((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.back");
    il2cpp_codegen_initialize_runtime_metadata(&"BACK");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_184347e41 = '\x01';
  }
  footerOptions =
       (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
       SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_48.fields._id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.TextKey = (System_String_o *)0x0;
  local_48.fields.Icon = (System_String_o *)0x0;
  local_48.fields.ActionId = (System_String_o *)0x0;
  local_48.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.Searchable = false;
  local_48.fields._49_7_ = 0;
  local_48.fields.Tooltip = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
            (&local_48,"back","BACK","gameCreate.back","exitLeft"
             ,"Common.Back",false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (footerOptions != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    if ((int)footerOptions->max_length != 0) {
      footerOptions->m_Items[0].fields._id = local_48.fields._id;
      footerOptions->m_Items[0].fields.Label = local_48.fields.Label;
      footerOptions->m_Items[0].fields.TextKey = local_48.fields.TextKey;
      footerOptions->m_Items[0].fields.Icon = local_48.fields.Icon;
      footerOptions->m_Items[0].fields.ActionId = local_48.fields.ActionId;
      footerOptions->m_Items[0].fields.Action = local_48.fields.Action;
      footerOptions->m_Items[0].fields.Searchable = local_48.fields.Searchable;
      *(undefined7 *)&footerOptions->m_Items[0].fields.field_0x31 = local_48.fields._49_7_;
      footerOptions->m_Items[0].fields.Tooltip = local_48.fields.Tooltip;
      Il2CppCodeGenWriteBarrier((void **)footerOptions->m_Items,(void *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
      Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
                (__this,"CREATE GAME",options,footerOptions,"GameCreate.Title",(MethodInfo *)0x0);
      return __this;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanelOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelOptions (const MethodInfo* method);
// 0x1823e3c20

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelOptions(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *targetAddress;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_c8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_88;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_48;
  
  if (Il2CppMethodInitialized_184347e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.roomSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Experiences.Root");
    il2cpp_codegen_initialize_runtime_metadata(&"ROOM");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.experiences");
    il2cpp_codegen_initialize_runtime_metadata(&"room");
    il2cpp_codegen_initialize_runtime_metadata(&"SANDBOX");
    il2cpp_codegen_initialize_runtime_metadata(&"experiences");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"EXPERIENCES");
    Il2CppMethodInitialized_184347e40 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer == false) {
    pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,2);
    local_c8.fields._id = (System_String_o *)0x0;
    local_c8.fields.Label = (System_String_o *)0x0;
    local_c8.fields.TextKey = (System_String_o *)0x0;
    local_c8.fields.Icon = (System_String_o *)0x0;
    local_c8.fields.ActionId = (System_String_o *)0x0;
    local_c8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_c8.fields.Searchable = false;
    local_c8.fields._49_7_ = 0;
    local_c8.fields.Tooltip = (System_String_o *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
              (&local_c8,"experiences","EXPERIENCES","gameCreate.open.experiences",
               "menuList","GameCreate.Experiences.Root",false,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pGVar1->max_length != 0) {
      pGVar1->m_Items[0].fields._id = local_c8.fields._id;
      pGVar1->m_Items[0].fields.Label = local_c8.fields.Label;
      pGVar1->m_Items[0].fields.TextKey = local_c8.fields.TextKey;
      pGVar1->m_Items[0].fields.Icon = local_c8.fields.Icon;
      pGVar1->m_Items[0].fields.ActionId = local_c8.fields.ActionId;
      pGVar1->m_Items[0].fields.Action = local_c8.fields.Action;
      pGVar1->m_Items[0].fields.Searchable = local_c8.fields.Searchable;
      *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_c8.fields._49_7_;
      pGVar1->m_Items[0].fields.Tooltip = local_c8.fields.Tooltip;
      Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items,(void *)0x0);
      local_88.fields._id = (System_String_o *)0x0;
      local_88.fields.Label = (System_String_o *)0x0;
      local_88.fields.TextKey = (System_String_o *)0x0;
      local_88.fields.Icon = (System_String_o *)0x0;
      local_88.fields.ActionId = (System_String_o *)0x0;
      local_88.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
      local_88.fields.Searchable = false;
      local_88.fields._49_7_ = 0;
      local_88.fields.Tooltip = (System_String_o *)0x0;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
                (&local_88,"sandbox","SANDBOX","gameCreate.open.sandbox",
                 "gear","GameCreate.Sandbox",false,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (1 < (uint)pGVar1->max_length) {
        targetAddress = pGVar1->m_Items + 1;
        pGVar1->m_Items[1].fields._id = local_88.fields._id;
        pGVar1->m_Items[1].fields.Label = local_88.fields.Label;
        pGVar1->m_Items[1].fields.TextKey = local_88.fields.TextKey;
        pGVar1->m_Items[1].fields.Icon = local_88.fields.Icon;
        pGVar1->m_Items[1].fields.ActionId = local_88.fields.ActionId;
        pGVar1->m_Items[1].fields.Action = local_88.fields.Action;
        pGVar1->m_Items[1].fields.Searchable = local_88.fields.Searchable;
        *(undefined7 *)&pGVar1->m_Items[1].fields.field_0x31 = local_88.fields._49_7_;
        pGVar1->m_Items[1].fields.Tooltip = local_88.fields.Tooltip;
label_1823e3eba:
        Il2CppCodeGenWriteBarrier((void **)targetAddress,(void *)0x0);
        return pGVar1;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,3);
  local_88.fields._id = (System_String_o *)0x0;
  local_88.fields.Label = (System_String_o *)0x0;
  local_88.fields.TextKey = (System_String_o *)0x0;
  local_88.fields.Icon = (System_String_o *)0x0;
  local_88.fields.ActionId = (System_String_o *)0x0;
  local_88.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_88.fields.Searchable = false;
  local_88.fields._49_7_ = 0;
  local_88.fields.Tooltip = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
            (&local_88,"room","ROOM","gameCreate.open.roomSettings","multiplayer"
             ,"GameCreate.Room.Title",false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length != 0) {
    pGVar1->m_Items[0].fields._id = local_88.fields._id;
    pGVar1->m_Items[0].fields.Label = local_88.fields.Label;
    pGVar1->m_Items[0].fields.TextKey = local_88.fields.TextKey;
    pGVar1->m_Items[0].fields.Icon = local_88.fields.Icon;
    pGVar1->m_Items[0].fields.ActionId = local_88.fields.ActionId;
    pGVar1->m_Items[0].fields.Action = local_88.fields.Action;
    pGVar1->m_Items[0].fields.Searchable = local_88.fields.Searchable;
    *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_88.fields._49_7_;
    pGVar1->m_Items[0].fields.Tooltip = local_88.fields.Tooltip;
    Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items,(void *)0x0);
    local_c8.fields._id = (System_String_o *)0x0;
    local_c8.fields.Label = (System_String_o *)0x0;
    local_c8.fields.TextKey = (System_String_o *)0x0;
    local_c8.fields.Icon = (System_String_o *)0x0;
    local_c8.fields.ActionId = (System_String_o *)0x0;
    local_c8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_c8.fields.Searchable = false;
    local_c8.fields._49_7_ = 0;
    local_c8.fields.Tooltip = (System_String_o *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
              (&local_c8,"experiences","EXPERIENCES","gameCreate.open.experiences",
               "menuList","GameCreate.Experiences.Root",false,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (1 < (uint)pGVar1->max_length) {
      pGVar1->m_Items[1].fields._id = local_c8.fields._id;
      pGVar1->m_Items[1].fields.Label = local_c8.fields.Label;
      pGVar1->m_Items[1].fields.TextKey = local_c8.fields.TextKey;
      pGVar1->m_Items[1].fields.Icon = local_c8.fields.Icon;
      pGVar1->m_Items[1].fields.ActionId = local_c8.fields.ActionId;
      pGVar1->m_Items[1].fields.Action = local_c8.fields.Action;
      pGVar1->m_Items[1].fields.Searchable = local_c8.fields.Searchable;
      *(undefined7 *)&pGVar1->m_Items[1].fields.field_0x31 = local_c8.fields._49_7_;
      pGVar1->m_Items[1].fields.Tooltip = local_c8.fields.Tooltip;
      Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 1),(void *)0x0);
      local_48.fields._id = (System_String_o *)0x0;
      local_48.fields.Label = (System_String_o *)0x0;
      local_48.fields.TextKey = (System_String_o *)0x0;
      local_48.fields.Icon = (System_String_o *)0x0;
      local_48.fields.ActionId = (System_String_o *)0x0;
      local_48.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
      local_48.fields.Searchable = false;
      local_48.fields._49_7_ = 0;
      local_48.fields.Tooltip = (System_String_o *)0x0;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
                (&local_48,"sandbox","SANDBOX","gameCreate.open.sandbox",
                 "gear","GameCreate.Sandbox",false,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (2 < (uint)pGVar1->max_length) {
        targetAddress = pGVar1->m_Items + 2;
        pGVar1->m_Items[2].fields._id = local_48.fields._id;
        pGVar1->m_Items[2].fields.Label = local_48.fields.Label;
        pGVar1->m_Items[2].fields.TextKey = local_48.fields.TextKey;
        pGVar1->m_Items[2].fields.Icon = local_48.fields.Icon;
        pGVar1->m_Items[2].fields.ActionId = local_48.fields.ActionId;
        pGVar1->m_Items[2].fields.Action = local_48.fields.Action;
        pGVar1->m_Items[2].fields.Searchable = local_48.fields.Searchable;
        *(undefined7 *)&pGVar1->m_Items[2].fields.field_0x31 = local_48.fields._49_7_;
        pGVar1->m_Items[2].fields.Tooltip = local_48.fields.Tooltip;
        goto label_1823e3eba;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanelFooterOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelFooterOptions (const MethodInfo* method);
// 0x1823e3af0

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelFooterOptions(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_48;
  
  if (Il2CppMethodInitialized_184347e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.back");
    il2cpp_codegen_initialize_runtime_metadata(&"BACK");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_184347e41 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_48.fields._id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.TextKey = (System_String_o *)0x0;
  local_48.fields.Icon = (System_String_o *)0x0;
  local_48.fields.ActionId = (System_String_o *)0x0;
  local_48.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.Searchable = false;
  local_48.fields._49_7_ = 0;
  local_48.fields.Tooltip = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
            (&local_48,"back","BACK","gameCreate.back","exitLeft"
             ,"Common.Back",false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    if ((int)pGVar1->max_length != 0) {
      pGVar1->m_Items[0].fields._id = local_48.fields._id;
      pGVar1->m_Items[0].fields.Label = local_48.fields.Label;
      pGVar1->m_Items[0].fields.TextKey = local_48.fields.TextKey;
      pGVar1->m_Items[0].fields.Icon = local_48.fields.Icon;
      pGVar1->m_Items[0].fields.ActionId = local_48.fields.ActionId;
      pGVar1->m_Items[0].fields.Action = local_48.fields.Action;
      pGVar1->m_Items[0].fields.Searchable = local_48.fields.Searchable;
      *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_48.fields._49_7_;
      pGVar1->m_Items[0].fields.Tooltip = local_48.fields.Tooltip;
      Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items,(void *)0x0);
      return pGVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BreadcrumbLink
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BreadcrumbLink (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* actionId, System_String_o* id, System_String_o* icon, System_String_o* textKey, const MethodInfo* method);
// 0x1823d6000

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BreadcrumbLink
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *actionId,
               System_String_o *id,System_String_o *icon,System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184347e42 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,3,label,actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = textKey;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,textKey);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823e1ff0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Nullable_float__Fields maximum;
  System_Nullable_float__Fields minimum;
  
  if (Il2CppMethodInitialized_184347e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347e43 = '\x01';
  }
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    if ((field->fields).Rule == (Settings_UIRule_o *)0x0) {
      maximum.hasValue = false;
      maximum._1_3_ = 0;
      maximum.value = 0.0;
      minimum.hasValue = false;
      minimum._1_3_ = 0;
      minimum.value = 0.0;
    }
    else {
      maximum = (((field->fields).Rule)->fields).Max.fields;
      minimum = (((field->fields).Rule)->fields).Min.fields;
    }
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip
                       (pSVar1,(System_Nullable_float__o)minimum,(System_Nullable_float__o)maximum,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x1823e1e00
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e1ecd: mov rdi, rbx
// asm:   0x1823e1f44: mov rdi, rbx
// asm:   0x1823e1f47: jmp 0x1823e1f67
// asm:   0x1823e1f77: movaps xmm1, xmm0
// asm:   0x1823e1fd4: mov rax, rbp
// asm:   0x1823e1fd7: jmp 0x1823e1fbb

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_23e1e00
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  byte bVar1;
  System_Nullable_float__Fields SVar2;
  longlong lVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_Nullable_float__Fields maximum;
  System_Nullable_float__Fields SVar6;
  System_Nullable_float__Fields minimum;
  float value;
  System_Nullable_float__Fields local_res8;
  
  if (Il2CppMethodInitialized_184347e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_184347e44 = '\x01';
  }
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  SVar2 = (System_Nullable_float__Fields)(field->fields)._Setting_k__BackingField;
  if (SVar2 == (System_Nullable_float__Fields)0x0) {
    return (field->fields)._Tooltip_k__BackingField;
  }
  lVar3 = *(longlong *)SVar2;
  bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
     (*(Settings_IntSetting_c **)(*(longlong *)(lVar3 + 200) + -8 + (ulonglong)bVar1 * 8) !=
      TypeInfo_Settings_IntSetting)) {
    maximum.hasValue = false;
    maximum._1_3_ = 0;
    maximum.value = 0.0;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
       (bVar4 = true,
       *(Settings_FloatSetting_c **)(*(longlong *)(lVar3 + 200) + -8 + (ulonglong)bVar1 * 8) !=
       TypeInfo_Settings_FloatSetting)) {
      bVar4 = false;
    }
    pSVar5 = (field->fields)._Tooltip_k__BackingField;
    SVar6 = maximum;
    if (bVar4) {
      SVar6 = SVar2;
    }
    if (SVar6 == (System_Nullable_float__Fields)0x0) {
      return pSVar5;
    }
    minimum = maximum;
    if (*(float *)((longlong)SVar6 + 0x20) != -3.4028235e+38) {
      local_res8.hasValue = false;
      local_res8._1_3_ = 0;
      local_res8.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_res8,*(float *)((longlong)SVar6 + 0x20),
                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
      minimum = local_res8;
    }
    value = *(float *)((longlong)SVar6 + 0x24);
    if (value == 3.4028235e+38) goto label_1823e1f95;
  }
  else {
    pSVar5 = (field->fields)._Tooltip_k__BackingField;
    maximum.hasValue = false;
    maximum._1_3_ = 0;
    maximum.value = 0.0;
    minimum = maximum;
    if (*(int *)((longlong)SVar2 + 0x20) != -0x80000000) {
      local_res8.hasValue = false;
      local_res8._1_3_ = 0;
      local_res8.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_res8,(float)*(int *)((longlong)SVar2 + 0x20),
                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
      minimum = local_res8;
    }
    if (*(int *)((longlong)SVar2 + 0x24) == 0x7fffffff) goto label_1823e1f95;
    value = (float)*(int *)((longlong)SVar2 + 0x24);
  }
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_res8,value,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  maximum = local_res8;
label_1823e1f95:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip
                     (pSVar5,(System_Nullable_float__o)minimum,(System_Nullable_float__o)maximum,
                      (MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RangeTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip (System_String_o* tooltip, System_Nullable_float__o minimum, System_Nullable_float__o maximum, const MethodInfo* method);
// 0x1823e2850

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip
          (System_String_o *tooltip,System_Nullable_float__o minimum,System_Nullable_float__o maximum,
          MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_Globalization_CultureInfo_o *pSVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  System_Nullable_float__Fields local_res10;
  System_Nullable_float__Fields local_res18 [2];
  float local_18 [4];
  
  local_res10 = minimum.fields;
  local_res18[0] = maximum.fields;
  if (Il2CppMethodInitialized_184347e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum: ");
    il2cpp_codegen_initialize_runtime_metadata(&" to ");
    il2cpp_codegen_initialize_runtime_metadata(&"Maximum: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Allowed range: ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347e45 = '\x01';
  }
  local_18[0] = 0.0;
  if (local_res10.hasValue == false) {
    if (local_res18[0].hasValue == false) {
      if (tooltip == (System_String_o *)0x0) {
        tooltip = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      return tooltip;
    }
label_1823e2aba:
    local_18[0] = System_Nullable_float___get_Value
                            ((System_Nullable_float__o *)local_res18,
                             (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    str1 = System_Single__ToString_1b49fe0(local_18,(System_IFormatProvider_o *)pSVar2,(MethodInfo *)0x0);
    pSVar3 = "Maximum: ";
  }
  else {
    if (local_res18[0].hasValue != false) {
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      pSVar3 = "Allowed range: ";
      if (values == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)values->max_length == 0) {
label_1823e2b55:
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[0] = "Allowed range: ";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar3);
      local_18[0] = System_Nullable_float___get_Value
                              ((System_Nullable_float__o *)&local_res10,
                               (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_1b49fe0(local_18,(System_IFormatProvider_o *)pSVar2,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto label_1823e2b55;
      values->m_Items[1] = pSVar3;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar3);
      pSVar3 = " to ";
      if ((uint)values->max_length < 3) goto label_1823e2b55;
      values->m_Items[2] = " to ";
      Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar3);
      local_18[0] = System_Nullable_float___get_Value
                              ((System_Nullable_float__o *)local_res18,
                               (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
      pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_1b49fe0(local_18,(System_IFormatProvider_o *)pSVar2,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto label_1823e2b55;
      values->m_Items[3] = pSVar3;
      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar3);
      pSVar3 = ".";
      if ((uint)values->max_length < 5) goto label_1823e2b55;
      values->m_Items[4] = ".";
      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar3);
      pSVar3 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
      goto label_1823e2b16;
    }
    if (local_res10.hasValue == false) goto label_1823e2aba;
    local_18[0] = System_Nullable_float___get_Value
                            ((System_Nullable_float__o *)&local_res10,
                             (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    str1 = System_Single__ToString_1b49fe0(local_18,(System_IFormatProvider_o *)pSVar2,(MethodInfo *)0x0);
    pSVar3 = "Minimum: ";
  }
  pSVar3 = System_String__Concat_1969b70(pSVar3,str1,".",(MethodInfo *)0x0);
label_1823e2b16:
  bVar1 = System_String__IsNullOrEmpty(tooltip,(MethodInfo *)0x0);
  if (bVar1) {
    return pSVar3;
  }
  pSVar3 = System_String__Concat_1969b70(tooltip,"\n",pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel (System_String_o* id, const MethodInfo* method);
// 0x1823e1b50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e1c0d: nop dword ptr [rax]
// asm:   0x1823e1c97: dec edi
// asm:   0x1823e1c99: test edi, edi
// asm:   0x1823e1c9b: jg 0x1823e1c10

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldLabel(System_String_o *id,MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_184347e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184347e46 = '\x01';
  }
  bVar2 = System_String__Equals_196c550(id,"general.WeatherIndex",5,(MethodInfo *)0x0);
  if (bVar2) {
    return "Weather";
  }
  if (id == (System_String_o *)0x0) {
    id = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_1823e1bf4:
    if (id == (System_String_o *)0x0) goto label_1823e1cc1;
  }
  else {
    iVar4 = System_String__LastIndexOf(id,0x2e,(MethodInfo *)0x0);
    if (-1 < iVar4) {
      id = System_String__Substring(id,iVar4 + 1,(MethodInfo *)0x0);
      goto label_1823e1bf4;
    }
  }
  index = (id->fields)._stringLength;
  while( true ) {
    iVar1 = index;
    index = iVar1 + -1;
    if (index < 1) {
      return id;
    }
    if (id == (System_String_o *)0x0) break;
    uVar3 = System_String__get_Chars(id,index,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsUpper(uVar3,(MethodInfo *)0x0);
    if (bVar2) {
      uVar3 = System_String__get_Chars(id,iVar1 + -2,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsUpper(uVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        id = System_String__Insert(id,index," ",(MethodInfo *)0x0);
      }
    }
  }
label_1823e1cc1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823e20a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e23d9: nop dword ptr [rax]

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Settings_BaseSetting_o *pSVar3;
  Settings_BaseSetting_c *pSVar4;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_Globalization_CultureInfo_o *pSVar8;
  uint uVar9;
  bool local_res8 [16];
  int32_t local_res18 [2];
  float local_res20 [2];
  System_Enum_o local_38;
  undefined4 local_28;
  
  if (Il2CppMethodInitialized_184347e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    Il2CppMethodInitialized_184347e47 = '\x01';
  }
  local_res8[0] = false;
  local_res18[0] = 0;
  local_res20[0] = 0.0;
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    pSVar3 = (field->fields).Setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) {
label_1823e24b5:
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pSVar4 = pSVar3->klass;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar4->_2).typeHierarchyDepth) &&
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      return (*(uint64_t *)((char *)pSVar3 + 0x20));
    }
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar4->_2).typeHierarchyDepth) &&
           ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)
           ) {
          local_res20[0] = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar6 = System_Single__ToString_1b49fe0
                             (local_res20,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
          return pSVar6;
        }
        goto label_1823e24b5;
      }
      bVar5 = System_String__Equals_196c550((field->fields).Id,"general.Difficulty",5,(MethodInfo *)0x0);
      if (!bVar5) {
        bVar5 = System_String__Equals_196c550((field->fields).Id,"general.WeatherIndex",5,(MethodInfo *)0x0);
        if ((bVar5) &&
           (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings !=
            (Settings_WeatherSettings_o *)0x0)) {
          __this = (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings->fields).WeatherSets;
          if (__this == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_1823e24d6;
          pSVar7 = Settings_SetSettingsContainer_object___GetSetNames
                             ((Settings_SetSettingsContainer_T__o *)__this,
                              (MethodInfo_C8EC20 *)
                              MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
          if (-1 < *(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4)) {
            if (pSVar7 == (System_String_array *)0x0) goto label_1823e24d6;
            uVar9 = (uint)pSVar7->max_length;
            if (*(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4) < (int)uVar9) {
              uVar2 = *(uint *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
              if (uVar2 < uVar9) {
                return pSVar7->m_Items[(int)uVar2];
              }
              goto label_1823e24dc;
            }
          }
        }
        local_res18[0] = *(int32_t *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar6 = System_Int32__ToString_1b29900
                           (local_res18,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
        return pSVar6;
      }
      local_38.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
      local_28 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
      local_38.monitor = &g_data_ffffffffffffffff;
      pSVar6 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions(field,(MethodInfo *)0x0);
      if (pSVar7 != (System_String_array *)0x0) {
        uVar9 = 0;
        while( true ) {
          if ((int)pSVar7->max_length <= (int)uVar9) {
            return pSVar6;
          }
          if ((uint)pSVar7->max_length <= uVar9) goto label_1823e24dc;
          bVar5 = System_String__Equals_196c550(pSVar7->m_Items[(int)uVar9],pSVar6,5,(MethodInfo *)0x0);
          if (bVar5) break;
          uVar9 = uVar9 + 1;
        }
        if (uVar9 < (uint)pSVar7->max_length) {
          return pSVar7->m_Items[(int)uVar9];
        }
label_1823e24dc:
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      local_res8[0] = *(bool *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 1);
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      pSVar6 = System_Boolean__ToString(local_res8,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
label_1823e24d6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x1823e3770

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Settings_BaseSetting_o *pSVar3;
  Settings_BaseSetting_c *pSVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_Globalization_CultureInfo_o *pSVar7;
  bool local_res8 [16];
  int32_t local_res18 [2];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184347e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347e48 = '\x01';
  }
  local_res8[0] = false;
  local_res18[0] = 0;
  local_res20[0] = 0.0;
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    pSVar3 = (field->fields)._Setting_k__BackingField;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) {
label_1823e39dc:
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pSVar4 = pSVar3->klass;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar4->_2).typeHierarchyDepth) &&
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      return (*(uint64_t *)((char *)pSVar3 + 0x20));
    }
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar4->_2).typeHierarchyDepth) &&
           ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)
           ) {
          local_res20[0] = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar6 = System_Single__ToString_1b49fe0
                             (local_res20,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
          return pSVar6;
        }
        goto label_1823e39dc;
      }
      pSVar5 = (field->fields)._Options_k__BackingField;
      if (pSVar5 != (System_String_array *)0x0) {
        if (((pSVar5->max_length == 0) || (*(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4) < 0)) ||
           ((int)pSVar5->max_length <= *(int *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4))) {
          local_res18[0] = *(int32_t *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar6 = System_Int32__ToString_1b29900
                             (local_res18,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
          return pSVar6;
        }
        if (pSVar5 != (System_String_array *)0x0) {
          uVar2 = *(uint *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
          if (uVar2 < (uint)pSVar5->max_length) {
            return pSVar5->m_Items[(int)uVar2];
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
    else {
      local_res8[0] = *(bool *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 1);
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      pSVar6 = System_Boolean__ToString(local_res8,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshFrom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823e2b70

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184347e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347e49 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1823e2c9e;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (__this,(MethodInfo_6F53B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_184347df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347df6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_1823e2c9e:
      ThrowNullReferenceException();
    }
    if (((root->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && ((((root->fields)._Screens_k__BackingField)->fields)._active !=
           (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately(root,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$LocalizedText
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LocalizedText (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* text, System_String_o* key, System_String_o* style, System_String_o* id, const MethodInfo* method);
// 0x1823e2730

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LocalizedText
          (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *text,System_String_o *key,
          System_String_o *style,System_String_o *id,MethodInfo *method)

{
  System_String_o *text_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  text_00 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text(key,text,(MethodInfo *)0x0)
  ;
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,text_00,style,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,key);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


