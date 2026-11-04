// Type: Gisketch.Aottg2UI.Game.AottgInGameView
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgInGameView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgInGameView.Actions$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView_Actions__HandleAction (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o* __this, System_String_o* id, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181dd5610

void Gisketch_Aottg2UI_Game_AottgInGameView_Actions__HandleAction
               (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184344a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions);
    Il2CppMethodInitialized_184344a92 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgGameUiActions__HandleInGameAction(id,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.Actions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView_Actions___ctor (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgInGameView_Actions___ctor(Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView___c___cctor (const MethodInfo* method);
// 0x181defe60

void Gisketch_Aottg2UI_Game_AottgInGameView___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView___c_o *__this;
  
  if (Il2CppMethodInitialized_184344a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c);
    Il2CppMethodInitialized_184344a93 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView___c___ctor (Gisketch_Aottg2UI_Game_AottgInGameView___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgInGameView___c___ctor(Gisketch_Aottg2UI_Game_AottgInGameView___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$<.cctor>b__2_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_0 (Gisketch_Aottg2UI_Game_AottgInGameView___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181decdd0

bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_0
               (Gisketch_Aottg2UI_Game_AottgInGameView___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    Il2CppMethodInitialized_184344a94 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
      (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar1,false,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$<.cctor>b__2_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_1 (Gisketch_Aottg2UI_Game_AottgInGameView___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181dece40

bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_1
               (Gisketch_Aottg2UI_Game_AottgInGameView___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_01;
  PatreonEffects_EffectText_o *__this_02;
  UnityEngine_Color_o *pUVar1;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184344a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EffectText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184344a95 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    if (__this_01 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_EffectText
                            );
      if (__this_02 != (PatreonEffects_EffectText_o *)0x0) {
        PatreonEffects_EffectText__set_fontSize(__this_02,22.0,(MethodInfo *)0x0);
        if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
           (__this_00 = (context->fields).Theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
           )) {
          local_28.r = 1.0;
          local_28.g = 1.0;
          local_28.b = 1.0;
          local_28.a = 1.0;
          pUVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                             (&local_18,__this_00,"text",(UnityEngine_Color_o *)&local_28,
                              (MethodInfo *)0x0);
          local_28.r = (pUVar1->fields).r;
          local_28.g = (pUVar1->fields).g;
          local_28.b = (pUVar1->fields).b;
          local_28.a = (pUVar1->fields).a;
          PatreonEffects_EffectText__set_color(__this_02,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
          }
          value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                            ("text",400,(System_String_o *)0x0,false,(MethodInfo *)0x0);
          PatreonEffects_EffectText__set_font(__this_02,value,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView___cctor (const MethodInfo* method);
// 0x181ddf1f0

void Gisketch_Aottg2UI_Game_AottgInGameView___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c_cctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c_cctor_b__2_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c);
    il2cpp_codegen_initialize_runtime_metadata(&"InGameTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"InGamePlayerName");
    Il2CppMethodInitialized_184344a7f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c);
  }
  pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->static_fields->__9;
  pGVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (pGVar3,pIVar2,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c_cctor_b__2_0,
             (MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (pGVar1,"InGameTexture",pGVar3,(MethodInfo *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->static_fields->__9;
    pGVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (pGVar3,pIVar2,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c_cctor_b__2_1,
               (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                (pGVar1,"InGamePlayerName",pGVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView___ctor (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, const MethodInfo* method);
// 0x181ddf370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddf5de: nop 

void Gisketch_Aottg2UI_Game_AottgInGameView___ctor
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  System_Nullable_Color__o *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_Object_o *x;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Il2CppClass *pIVar8;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar9;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar10;
  UnityEngine_Color_o *pUVar11;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array **ppGVar12;
  uint uVar13;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_o local_58;
  System_Nullable_Vector4__Fields local_48;
  
  if (Il2CppMethodInitialized_184344a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_Actions);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"inGame.");
    il2cpp_codegen_initialize_runtime_metadata(&"light");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"inputBg");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_184344a80 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0) {
label_181ddf4de:
    pSVar7 = "UI/Themes/Aottg2Dark";
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UITheme;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_181ddf805;
    bVar6 = System_String__op_Equality((pSVar1->fields)._value,"Light",(MethodInfo *)0x0);
    pSVar7 = "UI/Themes/Aottg2Light";
    if (!bVar6) goto label_181ddf4de;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (pSVar7,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_181ddf805;
    pSVar7 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar7,(MethodInfo *)0x0);
  }
  else {
    definition = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
    Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)definition,(MethodInfo *)0x0);
  }
  pMVar5 = MethodInfo_System_Array_Empty_GisketchStyleDefinition;
  if (definition != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    ppGVar12 = &(definition->fields).styles;
    if ((definition->fields).styles == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) {
      if ((MethodInfo_System_Array_Empty_GisketchStyleDefinition->field7_0x38).rgctx_data ==
          (Il2CppRGCTXData *)0x0) {
        il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_GisketchStyleDefinition);
      }
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      if (((pIVar8->_2).bitflags1 & 1) == 0) {
        pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
      }
      if ((pIVar8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar8);
      }
      pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      if (((pIVar8->_2).bitflags1 & 1) == 0) {
        pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
      }
      ppGVar12 = pIVar8->static_fields;
    }
    pGVar2 = *ppGVar12;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) {
      uVar13 = 0;
      do {
        if ((int)pGVar2->max_length <= (int)uVar13) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)
            ;
          }
          pGVar9 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,(MethodInfo *)0x0);
          localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
          Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)localizer,(MethodInfo *)0x0);
          actions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_Actions);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)actions,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
          Gisketch_Aottg2UI_State_GisketchUIState___ctor(__this_00,(MethodInfo *)0x0);
          pGVar10 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
          Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
                    (pGVar10,(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0,pGVar9,localizer,
                     actions,__this_00,(Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,
                     (System_Func_string__GisketchOverlayDefinition__o *)0x0,(MethodInfo *)0x0);
          (__this->fields)._context = pGVar10;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._context,pGVar10);
          bVar6 = System_String__op_Equality
                            ((definition->fields).mode,"light",(MethodInfo *)0x0);
          if (bVar6) {
            pGVar10 = (__this->fields)._context;
            if ((pGVar10 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
               (pGVar9 = (pGVar10->fields).Theme, pGVar9 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
            {
              ThrowNullReferenceException();
            }
            local_68.r = 1.0;
            local_68.g = 1.0;
            local_68.b = 1.0;
            local_68.a = 1.0;
            pUVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (&local_58,pGVar9,"inputBg",(UnityEngine_Color_o *)&local_68,
                                 (MethodInfo *)0x0);
            local_68.r = (pUVar11->fields).r;
            local_68.g = (pUVar11->fields).g;
            local_68.b = (pUVar11->fields).b;
            local_68.a = (pUVar11->fields).a;
            local_48.hasValue = false;
            local_48._1_3_ = 0;
            local_48.value.fields.x = 0.0;
            local_48.value.fields.y = 0.0;
            local_48.value.fields.z = 0.0;
            local_48.value.fields.w = 0.0;
            System_Nullable_Vector4____ctor
                      ((System_Nullable_Vector4__o *)&local_48,(UnityEngine_Vector4_o *)&local_68,
                       (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Color_ctor);
            (__this->fields)._lightBackground.fields.hasValue = local_48.hasValue;
            *(undefined3 *)&(__this->fields)._lightBackground.fields.field_0x1 = local_48._1_3_;
            (__this->fields)._lightBackground.fields.value.fields.r = local_48.value.fields.x;
            pSVar4 = &(__this->fields)._lightBackground;
            (pSVar4->fields).value.fields.g = local_48.value.fields.y;
            (pSVar4->fields).value.fields.b = local_48.value.fields.z;
            (__this->fields)._lightBackground.fields.value.fields.a = local_48.value.fields.w;
          }
          return;
        }
        if ((uint)pGVar2->max_length <= uVar13) {
          ThrowIndexOutOfRangeException();
        }
        pGVar3 = pGVar2->m_Items[(int)uVar13];
        if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
           ((pGVar3->fields).name != (System_String_o *)0x0)) {
          bVar6 = System_String__StartsWith_19722c0
                            ((pGVar3->fields).name,"inGame.",4,(MethodInfo *)0x0);
          if (bVar6) {
            if (("inGame." == (System_String_o *)0x0) ||
               (pSVar7 = (pGVar3->fields).name, pSVar7 == (System_String_o *)0x0)) break;
            pSVar7 = System_String__Substring
                               (pSVar7,("inGame."->fields)._stringLength,(MethodInfo *)0x0);
            (pGVar3->fields).name = pSVar7;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name,pSVar7);
          }
        }
        uVar13 = uVar13 + 1;
      } while( true );
    }
  }
label_181ddf805:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$ThemeColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgInGameView__ThemeColor (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, System_String_o* token, const MethodInfo* method);
// 0x181ddf190

UnityEngine_Color_o *
Gisketch_Aottg2UI_Game_AottgInGameView__ThemeColor
          (UnityEngine_Color_o *__return_storage_ptr__,Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,
          System_String_o *token,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    local_28.r = 1.0;
    local_28.g = 1.0;
    local_28.b = 1.0;
    local_28.a = 1.0;
    pUVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (&local_18,__this_00,token,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    fVar2 = (pUVar5->fields).g;
    fVar3 = (pUVar5->fields).b;
    fVar4 = (pUVar5->fields).a;
    (__return_storage_ptr__->fields).r = (pUVar5->fields).r;
    (__return_storage_ptr__->fields).g = fVar2;
    (__return_storage_ptr__->fields).b = fVar3;
    (__return_storage_ptr__->fields).a = fVar4;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Readable
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgInGameView__Readable (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, System_String_o* richText, const MethodInfo* method);
// 0x181dde900

System_String_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Readable
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,System_String_o *richText,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    Il2CppMethodInitialized_184344a81 = '\x01';
  }
  if ((__this->fields)._lightBackground.fields.hasValue != false) {
    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
    }
    pSVar1 = PatreonEffects_EffectText__WithPresetColors(richText,(MethodInfo *)0x0);
    System_Nullable_Vector4___get_Value
              ((UnityEngine_Vector4_o *)local_28,
               (System_Nullable_Vector4__o *)&(__this->fields)._lightBackground,
               (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Color_get_Value);
    if ((TypeInfo_Utility_ReadableColors->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ReadableColors);
    }
    pSVar1 = Utility_ReadableColors__Darken(pSVar1,local_28,(MethodInfo *)0x0);
    return pSVar1;
  }
  return richText;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$RawImage
// il2cpp: UnityEngine_UI_RawImage_o* Gisketch_Aottg2UI_Game_AottgInGameView__RawImage (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, float height, const MethodInfo* method);
// 0x181dde700

UnityEngine_UI_RawImage_o *
Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
          float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameTexture");
    Il2CppMethodInitialized_184344a82 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "InGameTexture";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"InGameTexture");
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"clear");
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      return pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$PlayerName
// il2cpp: PatreonEffects_EffectText_o* Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, const MethodInfo* method);
// 0x181dde020

PatreonEffects_EffectText_o *
Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_01;
  PatreonEffects_EffectText_o *pPVar1;
  
  if (Il2CppMethodInitialized_184344a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InGamePlayerName");
    Il2CppMethodInitialized_184344a83 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "InGamePlayerName";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"InGamePlayerName");
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"clear");
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pPVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_EffectText);
      return pPVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Build
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgInGameView__Build (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181ddd2f0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Build
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_02;
  
  if (Il2CppMethodInitialized_184344a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184344a84 = '\x01';
  }
  context = (__this->fields)._context;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  __this_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                        (node,parent,context,__this_00,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0)
    ;
    __this_02 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
        __this_02 = pUVar2;
      }
      if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
    }
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar1 = (node->fields).layout;
      if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
         ((pGVar1->fields).width != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0)) {
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_181ddd422;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                  (__this_02,0,(((pGVar1->fields).width)->fields).value,(MethodInfo *)0x0);
      }
      pGVar1 = (node->fields).layout;
      if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
         ((pGVar1->fields).height != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0)) {
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_181ddd422;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                  (__this_02,1,(((pGVar1->fields).height)->fields).value,(MethodInfo *)0x0);
      }
      return __this_01;
    }
  }
label_181ddd422:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Dialog
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Game_AottgInGameView__Dialog (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* id, const MethodInfo* method);
// 0x181ddd7b0

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Dialog
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184344a85 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_00,(MethodInfo *)0x0);
  overlay = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog(id,__this_00,(MethodInfo *)0x0);
  context = (__this->fields)._context;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                     (overlay,parent,context,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetButtonSelected
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetButtonSelected (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_UI_Button_o* button, bool selected, const MethodInfo* method);
// 0x181ddeb70

void Gisketch_Aottg2UI_Game_AottgInGameView__SetButtonSelected
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_UI_Button_o *button,bool selected
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  TMPro_TMP_Text_o *__this_00;
  System_String_o *name;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184344a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameSelectedTab");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Face");
    Il2CppMethodInitialized_184344a86 = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    pGVar2 = (pGVar1->fields).Theme;
    name = "buttonQuiet";
    if (selected) {
      name = "inGameSelectedTab";
    }
    if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar2,name,(MethodInfo *)0x0);
      if (button != (UnityEngine_UI_Button_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)button,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__Find(pUVar5,"AoTTG Button Face",(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_181ddeda1;
            pUVar6 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar5,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          }
          else {
            pUVar6 = (UnityEngine_UI_Image_o *)(button->fields).m_TargetGraphic;
          }
          pGVar1 = (__this->fields)._context;
          if (((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
              (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) &&
             (pGVar2 = (pGVar1->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
            local_28.r = 1.0;
            local_28.g = 1.0;
            local_28.b = 1.0;
            local_28.a = 1.0;
            pUVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                               (&local_18,pGVar2,(pGVar4->fields).background,(UnityEngine_Color_o *)&local_28,
                                (MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
              local_28.r = (pUVar7->fields).r;
              local_28.g = (pUVar7->fields).g;
              local_28.b = (pUVar7->fields).b;
              local_28.a = (pUVar7->fields).a;
              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                        (pUVar6,(UnityEngine_Color_o *)&local_28,(pUVar6->klass->vtable)._23_set_color.method)
              ;
              __this_00 = UnityEngine_Component__GetComponentInChildren_object__664b50
                                    ((UnityEngine_Component_o *)button,
                                     (MethodInfo_664B50 *)
                                     MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
              pGVar1 = (__this->fields)._context;
              if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
                 (pGVar2 = (pGVar1->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                 ) {
                local_28.r = 1.0;
                local_28.g = 1.0;
                local_28.b = 1.0;
                local_28.a = 1.0;
                pUVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (&local_18,pGVar2,(pGVar4->fields).textColor,
                                    (UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
                if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                  local_28.r = (pUVar7->fields).r;
                  local_28.g = (pUVar7->fields).g;
                  local_28.b = (pUVar7->fields).b;
                  local_28.a = (pUVar7->fields).a;
                  (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                            (__this_00,(UnityEngine_Color_o *)&local_28,
                             (__this_00->klass->vtable)._23_set_color.method);
                  TMPro_TMP_Text__set_fontStyle(__this_00,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_181ddeda1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetState (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x181ddef80

void Gisketch_Aottg2UI_Game_AottgInGameView__SetState
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (__this_00 = (pGVar1->fields).State, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,key,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$CreateOverlayManager
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_Game_AottgInGameView__CreateOverlayManager (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* layer, const MethodInfo* method);
// 0x181ddd740

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_Game_AottgInGameView__CreateOverlayManager
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *layer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184344a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    Il2CppMethodInitialized_184344a87 = '\x01';
  }
  context = (__this->fields)._context;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor(__this_00,layer,context,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$ScaledPopupShell
// il2cpp: Gisketch_Aottg2UI_Game_AottgInGameView_o* Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell (UnityEngine_Transform_o* host, float width, float height, float headerHeight, float footerHeight, UnityEngine_Transform_o** header, UnityEngine_Transform_o** footer, System_String_o* headerStyle, const MethodInfo* method);
// 0x181dde9e0

Gisketch_Aottg2UI_Game_AottgInGameView_o *
Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
          (UnityEngine_Transform_o *host,float width,float height,float headerHeight,float footerHeight,
          UnityEngine_Transform_o **header,UnityEngine_Transform_o **footer,System_String_o *headerStyle,
          MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_184344a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ViewportScaler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184344a88 = '\x01';
  }
  if (host != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = (UnityEngine_Transform_o *)0x0;
    if ((UnityEngine_RectTransform_c *)host->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar1 = host;
    }
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(host);
    }
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
    if ((UnityEngine_RectTransform_c *)host->klass == TypeInfo_UnityEngine_RectTransform) {
      __this_01 = (UnityEngine_RectTransform_o *)host;
    }
    value.fields.y = height;
    value.fields.x = width;
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_
                (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_ViewportScaler);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(host,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell
                  (__this_00,host,width,height,headerHeight,footerHeight,header,footer,headerStyle,
                   (MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$PopupShell
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, float height, float headerHeight, float footerHeight, UnityEngine_Transform_o** header, UnityEngine_Transform_o** footer, System_String_o* headerStyle, const MethodInfo* method);
// 0x181dde210

void Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
               float height,float headerHeight,float footerHeight,UnityEngine_Transform_o **header,
               UnityEngine_Transform_o **footer,System_String_o *headerStyle,MethodInfo *method)

{
  UnityEngine_Vector2_Fields position;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameSurface");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameFooter");
    Il2CppMethodInitialized_184344a89 = '\x01';
  }
  pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this,parent,"inGameSurface",width,height,false,(System_Nullable_float__o)0x0,
                      (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__Position(pUVar1,(UnityEngine_Vector2_o)position,(MethodInfo *)0x0);
  pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this,parent,headerStyle,width,headerHeight,true,(System_Nullable_float__o)0x0,
                      (MethodInfo *)0x0);
  *header = pUVar1;
  Il2CppCodeGenWriteBarrier(header,pUVar1);
  Gisketch_Aottg2UI_Game_AottgInGameView__Position
            (*header,(UnityEngine_Vector2_o)((ulonglong)(uint)((height - headerHeight) * 0.5) << 0x20),
             (MethodInfo *)0x0);
  pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this,parent,"inGameFooter",width,footerHeight,true,
                      (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  *footer = pUVar1;
  Il2CppCodeGenWriteBarrier(footer,pUVar1);
  Gisketch_Aottg2UI_Game_AottgInGameView__Position
            (*footer,(UnityEngine_Vector2_o)((ulonglong)(uint)(-(height - footerHeight) * 0.5) << 0x20),
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$ProgressBar
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, float height, const MethodInfo* method);
// 0x181dde500

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
          float height,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *pUVar1;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_184344a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"sliderTrack");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderFill");
    Il2CppMethodInitialized_184344a8a = '\x01';
  }
  parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                        (__this,parent,"sliderTrack",width,height,false,(System_Nullable_float__o)0x0,
                         (MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this,parent_00,"sliderFill",width,height,false,(System_Nullable_float__o)0x0,
                      (MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar1->klass == TypeInfo_UnityEngine_RectTransform) {
      __this_01 = pUVar1;
    }
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1);
    }
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_01,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMin
                (__this_01,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (__this_01,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      UnityEngine_RectTransform__set_offsetMax(__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_offsetMin(__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetProgress
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress (UnityEngine_RectTransform_o* fill, float progress, const MethodInfo* method);
// 0x181ddef40

void Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress
               (UnityEngine_RectTransform_o *fill,float progress,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  
  if (progress < 0.0) {
    progress = 0.0;
  }
  else if (1.0 < progress) {
    progress = 1.0;
  }
  if (fill != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.y = 1.0;
    value.fields.x = progress;
    UnityEngine_RectTransform__set_anchorMax(fill,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Panel
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgInGameView__Panel (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* style, float width, float height, bool row, System_Nullable_float__o gap, const MethodInfo* method);
// 0x181dddcf0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddde40: movss xmm1, dword ptr [rsp + 0x134]
// asm:   0x181ddde49: mov rdi, qword ptr [rip + 0x231ba98]  ; "Center"
// asm:   0x181ddde50: mov r14, rdi
// asm:   0x181ddde53: jmp 0x181ddde9a

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Panel
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *style,float width,float height,bool row,System_Nullable_float__o gap,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_String_o *justify;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *direction;
  
  if (Il2CppMethodInitialized_184344a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184344a8b = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"Panel");
    (__this_01->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,style);
    direction = "Column";
    if (row) {
      direction = "Row";
    }
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    justify = "Center";
    if (gap.fields.hasValue == false) {
      pGVar1 = (__this->fields)._context;
      if (((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
          (__this_00 = (pGVar1->fields).Theme, __this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
         || (pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(__this_00,style,(MethodInfo *)0x0),
            pGVar2 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) goto label_181dde012;
      gap.fields.value = (pGVar2->fields).gap.fields.value;
    }
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      (direction,justify,justify,(System_String_o *)0x0,(System_String_o *)0x0,
                       gap.fields.value,width_00,height_00,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_01->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,value);
    if (((__this != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) &&
        (__this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_01,(MethodInfo *)0x0),
        __this_02 != (UnityEngine_GameObject_o *)0x0)) &&
       ((pUVar3 = UnityEngine_GameObject__GetComponent_object_
                            (__this_02,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                            ), pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0 ||
        (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                            (__this_02,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                            ), pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)))) {
      (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar3,width,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar3,height,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
      pUVar4 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      return pUVar4;
    }
  }
label_181dde012:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Text
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgInGameView__Text (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* text, float width, float height, System_String_o* style, const MethodInfo* method);
// 0x181ddefb0

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Text
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *text,float width,float height,System_String_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_01;
  TMPro_TMP_Text_o *pTVar1;
  
  if (Il2CppMethodInitialized_184344a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344a8c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Text");
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,text);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,style);
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pTVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
      return pTVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$FitTextHeight
// il2cpp: float Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight (TMPro_TMP_Text_o* label, float minimumHeight, const MethodInfo* method);
// 0x181ddd850

float Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight
                (TMPro_TMP_Text_o *label,float minimumHeight,MethodInfo *method)

{
  bool bVar1;
  System_String_o *text;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  float fVar7;
  float fStackX_c;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184344a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184344a8d = '\x01';
  }
  if (label != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_textWrappingMode(label,1,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode(label,0,(MethodInfo *)0x0);
    text = (*(label->klass->vtable)._65_get_text.methodPtr)(label,(label->klass->vtable)._65_get_text.method);
    pUVar2 = TMPro_TMP_Text__get_rectTransform(label,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar2,(MethodInfo *)0x0);
      fVar7 = (pUVar3->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      UVar4 = TMPro_TMP_Text__GetPreferredValues_2d12740(label,text,fVar7,INFINITY,(MethodInfo *)0x0);
      fStackX_c = UVar4.fields.y;
      fVar7 = (float)il2cpp_runtime_helper_1804f4070(fStackX_c);
      pUVar2 = (UnityEngine_RectTransform_o *)TMPro_TMP_Text__get_transform(label,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      if (Il2CppMethodInitialized_184344a8e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        Il2CppMethodInitialized_184344a8e = '\x01';
      }
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar5 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar5 = pUVar2;
        }
        if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
        }
        if (minimumHeight <= fVar7) {
          minimumHeight = fVar7;
        }
        pUVar5 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar5 = pUVar2;
        }
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar5,1,minimumHeight,(MethodInfo *)0x0);
        __this = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
          }
          value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(minimumHeight,(MethodInfo *)0x0);
          if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_181dddad2;
          Gilzoide_FlexUi_FlexLayout__set_Height(__this,value,(MethodInfo *)0x0);
        }
        pUVar6 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
label_181ddda9e:
          (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar6,minimumHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
          return minimumHeight;
        }
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
          if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) goto label_181ddda9e;
        }
      }
    }
  }
label_181dddad2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetHeight
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight (UnityEngine_Transform_o* target, float height, const MethodInfo* method);
// 0x181ddedb0

void Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight
               (UnityEngine_Transform_o *target,float height,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_184344a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184344a8e = '\x01';
  }
  if (target != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
    if ((UnityEngine_RectTransform_c *)target->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar2 = target;
    }
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(target);
    }
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
    if ((UnityEngine_RectTransform_c *)target->klass == TypeInfo_UnityEngine_RectTransform) {
      __this_01 = (UnityEngine_RectTransform_o *)target;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(__this_01,1,height,(MethodInfo *)0x0);
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)target,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(height,(MethodInfo *)0x0);
      if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_181ddef23;
      Gilzoide_FlexUi_FlexLayout__set_Height(__this,value,(MethodInfo *)0x0);
    }
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)target,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
label_181ddef00:
      (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar3,height,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) goto label_181ddef00;
    }
  }
label_181ddef23:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Button
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Game_AottgInGameView__Button (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* text, System_String_o* action, System_String_o* value, float width, float height, int32_t variant, const MethodInfo* method);
// 0x181ddd440

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Button
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *text,System_String_o *action,System_String_o *value,float width,float height,
          int32_t variant,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Button_o *__this_02;
  TMPro_TMP_Text_o *__this_03;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_184344a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text_40a8ce0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"button");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_184344a8f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Button");
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if (bVar1) {
      text = " ";
    }
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,text);
    (__this_00->fields).action = action;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).action,action);
    (__this_00->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,value);
    local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant;
    local_38 = variant;
    local_48.monitor = &g_data_ffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("button",pSVar2,(MethodInfo *)0x0);
    (__this_00->fields).style = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,pSVar2);
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value_00);
    if (__this != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_01,
                               (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (__this_02 != (UnityEngine_UI_Button_o *)0x0) {
          __this_03 = UnityEngine_Component__GetComponentInChildren_object_
                                ((UnityEngine_Component_o *)__this_02,true,
                                 (MethodInfo_664AA0 *)
                                 MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text_40a8ce0);
          if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
            TMPro_TMP_Text__set_enableAutoSizing(__this_03,true,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_fontSizeMin(__this_03,14.0,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_fontSizeMax(__this_03,20.0,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_textWrappingMode(__this_03,1,(MethodInfo *)0x0);
            return __this_02;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Position
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__Position (UnityEngine_Transform_o* transform, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x181dde420

void Gisketch_Aottg2UI_Game_AottgInGameView__Position
               (UnityEngine_Transform_o *transform,UnityEngine_Vector2_o position,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  
  if (Il2CppMethodInitialized_184344a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184344a90 = '\x01';
  }
  if (transform == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  if ((UnityEngine_RectTransform_c *)transform->klass == TypeInfo_UnityEngine_RectTransform) {
    __this = (UnityEngine_RectTransform_o *)transform;
  }
  if (__this != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_pivot(__this,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMin
              (__this,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition(__this,position,(MethodInfo *)0x0);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(transform);
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$HidePrefab
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab (UnityEngine_Transform_o* host, const MethodInfo* method);
// 0x181dddae0
// eh: try 0x181dddb70..0x181dddbfe -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181dddbfe..0x181dddc56 -> pad 0x180026a30 cleanup
// eh: try 0x181dddc56..0x181dddcdf -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dddb6e: nop 
// asm:   0x181dddc1e: mov rdx, qword ptr [rip + 0x22a6c1b]  ; TypeInfo_UnityEngine_Transform
// asm:   0x181dddc25: mov r9, qword ptr [rax]
// asm:   0x181dddc28: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x181dddc2f: cmp byte ptr [r9 + 0x130], al
// asm:   0x181dddc36: jb 0x181dddccc
// asm:   0x181dddc9c: lea rcx, [rsp + 0x30]
// asm:   0x181dddca1: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181dddca6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dddcab: test rcx, rcx
// asm:   0x181dddcae: jne 0x181dddcdf
// asm:   0x181dddcdf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(UnityEngine_Transform_o *host,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  ushort uVar8;
  
  if (Il2CppMethodInitialized_184344a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_184344a91 = '\x01';
  }
  if (host == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar5 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(host,(MethodInfo *)0x0);
  do {
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar5);
    if ((char)pvVar6 == '\0') {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar5,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar5 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar5);
      }
      return;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar5->klass;
    uVar2 = (pIVar3->_2).interface_offsets_count;
    if (uVar2 != 0) {
      uVar8 = 0;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar8].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar3->vtable + (pIVar4[uVar8].offset + 1);
          goto label_181dddbe9;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181dddbe9:
    __this = (UnityEngine_Component_o *)(*pVVar7->methodPtr)(pIVar5,pVVar7->method);
    if (__this == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
    __this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  } while( true );
}


