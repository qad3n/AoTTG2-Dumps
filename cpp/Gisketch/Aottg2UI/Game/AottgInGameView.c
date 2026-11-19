// Type: Gisketch.Aottg2UI.Game.AottgInGameView
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgInGameView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgInGameView.Actions$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView_Actions__HandleAction (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o* __this, System_String_o* id, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58b2640

void Gisketch_Aottg2UI_Game_AottgInGameView_Actions__HandleAction
               (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameUiActions__HandleInGameAction(id,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.Actions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView_Actions___ctor (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o* __this, const MethodInfo* method);
// 0x58b1a80

void Gisketch_Aottg2UI_Game_AottgInGameView_Actions___ctor
               (Gisketch_Aottg2UI_Game_AottgInGameView_Actions_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView___c___cctor (const MethodInfo* method);
// 0x58b2650

void Gisketch_Aottg2UI_Game_AottgInGameView___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754533b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c);
    Il2CppMethodInitialized_0754533b = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgInGameView___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView___c___ctor (Gisketch_Aottg2UI_Game_AottgInGameView___c_o* __this, const MethodInfo* method);
// 0x58b26c0

void Gisketch_Aottg2UI_Game_AottgInGameView___c___ctor
               (Gisketch_Aottg2UI_Game_AottgInGameView___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$<.cctor>b__2_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_0 (Gisketch_Aottg2UI_Game_AottgInGameView___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x58b26d0

bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_0
               (Gisketch_Aottg2UI_Game_AottgInGameView___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754533c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    Il2CppMethodInitialized_0754533c = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
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
// 0x58b2730

bool Gisketch_Aottg2UI_Game_AottgInGameView___c____cctor_b__2_1
               (Gisketch_Aottg2UI_Game_AottgInGameView___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_01;
  PatreonEffects_EffectText_o *__this_02;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_Color_o UVar1;
  
  if (Il2CppMethodInitialized_0754533d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EffectText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754533d = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    if (__this_01 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_EffectText);
      if (__this_02 != (PatreonEffects_EffectText_o *)0x0) {
        PatreonEffects_EffectText__set_fontSize(__this_02,22.0,(MethodInfo *)0x0);
        if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
           (__this_00 = (context->fields).Theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
           )) {
          UVar1.fields.b = 1.0;
          UVar1.fields.a = 1.0;
          UVar1.fields.r = 1.0;
          UVar1.fields.g = 1.0;
          UVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (__this_00,"text",UVar1,(MethodInfo *)0x0);
          PatreonEffects_EffectText__set_color(__this_02,UVar1,(MethodInfo *)0x0);
          value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                            ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
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
// 0x58b1900

void Gisketch_Aottg2UI_Game_AottgInGameView___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar3;
  
  if (Il2CppMethodInitialized_07545328 == '\0') {
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
    Il2CppMethodInitialized_07545328 = '\x01';
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
// 0x58af980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58afbbe: jmp 0x58afe09

void Gisketch_Aottg2UI_Game_AottgInGameView___ctor
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_Fields *targetAddress;
  byte bVar1;
  uint uVar2;
  Settings_UISettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  System_Nullable_Color__o *pSVar6;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  System_String_o **ppSVar10;
  UnityEngine_Object_o *x;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *__this_00;
  Il2CppClass *pIVar12;
  ulong uVar13;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar14;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_Fields *targetAddress_00;
  ulong uVar16;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *pGVar17;
  UnityEngine_Color_o UVar18;
  System_Nullable_Color__Fields local_58;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *local_38;
  
  if (Il2CppMethodInitialized_07545329 == '\0') {
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
    Il2CppMethodInitialized_07545329 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar3 == (Settings_UISettings_o *)0x0) {
label_058afad0:
    ppSVar10 = &"UI/Themes/Aottg2Dark";
  }
  else {
    pSVar4 = (pSVar3->fields).UITheme;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_058afe09;
    bVar9 = System_String__op_Equality((pSVar4->fields)._value,"Light",(MethodInfo *)0x0);
    if (!bVar9) goto label_058afad0;
    ppSVar10 = &"UI/Themes/Aottg2Light";
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (*ppSVar10,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_058afe09;
    pSVar11 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    __this_00 = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar11,(MethodInfo *)0x0);
  }
  else {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
    Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  }
  pMVar8 = MethodInfo_System_Array_Empty_GisketchStyleDefinition;
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) goto label_058afe09;
  pGVar17 = (__this_00->fields).styles;
  if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) {
    if ((MethodInfo_System_Array_Empty_GisketchStyleDefinition->field7_0x38).methodMetadataHandle ==
        (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_GisketchStyleDefinition);
      pIVar12 = *(Il2CppClass **)((long)(pMVar8->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar12->_2).bitflags1 & 1) == 0) goto label_058afb88;
label_058afbdc:
      if ((pIVar12->_2).cctor_finished_or_no_cctor == 0) goto label_058afb99;
label_058afbe5:
      pIVar12 = (pMVar8->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar12->_2).bitflags1;
    }
    else {
      pIVar12 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_GisketchStyleDefinition->field7_0x38).
                        methodMetadataHandle + 0x10);
      if (((pIVar12->_2).bitflags1 & 1) != 0) goto label_058afbdc;
label_058afb88:
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
      if ((pIVar12->_2).cctor_finished_or_no_cctor != 0) goto label_058afbe5;
label_058afb99:
      il2cpp_codegen_runtime_class_init(pIVar12);
      pIVar12 = (pMVar8->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar12->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
      pGVar17 = *(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array **)pIVar12->static_fields;
    }
    else {
      pGVar17 = *(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array **)pIVar12->static_fields;
    }
    if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) goto label_058afe09;
  }
  if (0 < (int)pGVar17->max_length) {
    uVar13 = pGVar17->max_length & 0xffffffff;
    uVar16 = 0;
    do {
      if (uVar13 <= uVar16) {
        ThrowIndexOutOfRangeException();
      }
      pGVar5 = pGVar17->m_Items[uVar16];
      if (((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
          (pSVar11 = (pGVar5->fields).name, pSVar11 != (System_String_o *)0x0)) &&
         (bVar9 = System_String__StartsWith_53002b0(pSVar11,"inGame.",4,(MethodInfo *)0x0), bVar9)
         ) {
        if ("inGame." == (System_String_o *)0x0) goto label_058afe09;
        targetAddress_00 = &pGVar5->fields;
        if (targetAddress_00->name == (System_String_o *)0x0) goto label_058afe09;
        pSVar11 = System_String__Substring
                            (targetAddress_00->name,("inGame."->fields)._stringLength,
                             (MethodInfo *)0x0);
        targetAddress_00->name = pSVar11;
        Il2CppCodeGenWriteBarrier(&targetAddress_00->name);
      }
      uVar16 = uVar16 + 1;
      uVar2 = (uint)pGVar17->max_length;
      uVar13 = (ulong)uVar2;
    } while ((long)uVar16 < (long)(int)uVar2);
  }
  local_38 = __this;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar14 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(__this_00,(MethodInfo *)0x0);
  localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
            ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,(MethodInfo *)0x0);
  __this_01 = (Il2CppObject *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView_Actions);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(__this_02,(MethodInfo *)0x0);
  pGVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext)
  ;
  Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
            (pGVar15,(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0,pGVar14,localizer,
             (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this_01,__this_02,
             (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,
             (System_Func_string__GisketchOverlayDefinition__o *)0x0,(MethodInfo *)0x0);
  pGVar7 = local_38;
  targetAddress = &local_38->fields;
  (local_38->fields)._context = pGVar15;
  Il2CppCodeGenWriteBarrier(&targetAddress->_context);
  bVar9 = System_String__op_Equality((__this_00->fields).mode,"light",(MethodInfo *)0x0);
  if (bVar9) {
    pGVar15 = targetAddress->_context;
    if ((pGVar15 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (pGVar14 = (pGVar15->fields).Theme, pGVar14 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
label_058afe09:
      ThrowNullReferenceException();
    }
    UVar18.fields.b = 1.0;
    UVar18.fields.a = 1.0;
    UVar18.fields.r = 1.0;
    UVar18.fields.g = 1.0;
    UVar18 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (pGVar14,"inputBg",UVar18,(MethodInfo *)0x0);
    local_58.hasValue = false;
    local_58._1_3_ = 0;
    local_58.value.fields.r = 0.0;
    local_58.value.fields.g = 0.0;
    local_58.value.fields.b = 0.0;
    local_58.value.fields.a = 0.0;
    System_Nullable_Color____ctor
              ((System_Nullable_Color__o *)&local_58,UVar18,
               (MethodInfo_3CD1300 *)MethodInfo_System_Nullable_Color_ctor);
    (pGVar7->fields)._lightBackground.fields.value.fields.a = local_58.value.fields.a;
    (pGVar7->fields)._lightBackground.fields.hasValue = local_58.hasValue;
    *(undefined3 *)&(pGVar7->fields)._lightBackground.fields.field_0x1 = local_58._1_3_;
    (pGVar7->fields)._lightBackground.fields.value.fields.r = local_58.value.fields.r;
    pSVar6 = &(pGVar7->fields)._lightBackground;
    (pSVar6->fields).value.fields.g = local_58.value.fields.g;
    (pSVar6->fields).value.fields.b = local_58.value.fields.b;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$ThemeColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgInGameView__ThemeColor (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, System_String_o* token, const MethodInfo* method);
// 0x58b1a90

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgInGameView__ThemeColor
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,System_String_o *token,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_Color_Fields UVar2;
  UnityEngine_Color_o fallback;
  
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Theme, __this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fallback.fields.b = 1.0;
  fallback.fields.a = 1.0;
  fallback.fields.r = 1.0;
  fallback.fields.g = 1.0;
  UVar2 = (UnityEngine_Color_Fields)
          Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(__this_00,token,fallback,(MethodInfo *)0x0);
  return (UnityEngine_Color_o)UVar2;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Readable
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgInGameView__Readable (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, System_String_o* richText, const MethodInfo* method);
// 0x58b1ac0

System_String_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Readable
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,System_String_o *richText,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o background;
  
  if (Il2CppMethodInitialized_0754532a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    Il2CppMethodInitialized_0754532a = '\x01';
  }
  if ((__this->fields)._lightBackground.fields.hasValue == false) {
    return richText;
  }
  if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
  }
  pSVar1 = PatreonEffects_EffectText__WithPresetColors(richText,(MethodInfo *)0x0);
  background = System_Nullable_Color___get_Value
                         (&(__this->fields)._lightBackground,
                          (MethodInfo_3CD1320 *)MethodInfo_System_Nullable_Color_get_Value);
  if ((TypeInfo_Utility_ReadableColors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ReadableColors);
  }
  pSVar1 = Utility_ReadableColors__Darken(pSVar1,background,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$RawImage
// il2cpp: UnityEngine_UI_RawImage_o* Gisketch_Aottg2UI_Game_AottgInGameView__RawImage (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, float height, const MethodInfo* method);
// 0x58b15e0

UnityEngine_UI_RawImage_o *
Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
          float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754532b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameTexture");
    Il2CppMethodInitialized_0754532b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "InGameTexture";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,method_00);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      return pUVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$PlayerName
// il2cpp: PatreonEffects_EffectText_o* Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, const MethodInfo* method);
// 0x58b1ba0

PatreonEffects_EffectText_o *
Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  UnityEngine_GameObject_o *__this_01;
  PatreonEffects_EffectText_o *pPVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754532c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InGamePlayerName");
    Il2CppMethodInitialized_0754532c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "InGamePlayerName";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,method_00);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pPVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_EffectText);
      return pPVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Build
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgInGameView__Build (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x58b0790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58b0893: jmp 0x58b08b7

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Build
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754532d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_0754532d = '\x01';
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
    __this_02 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_02->klass != TypeInfo_UnityEngine_RectTransform)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_02);
    }
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar1 = (node->fields).layout;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar2 = (pGVar1->fields).width;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          pGVar2 = (pGVar1->fields).height;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            return __this_01;
          }
          if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_058b08c6;
        }
        else {
          if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_058b08c6;
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                    (__this_02,0,(pGVar2->fields).value,(MethodInfo *)0x0);
          pGVar1 = (node->fields).layout;
          if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            return __this_01;
          }
          pGVar2 = (pGVar1->fields).height;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            return __this_01;
          }
        }
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                  (__this_02,1,(pGVar2->fields).value,(MethodInfo *)0x0);
      }
      return __this_01;
    }
  }
label_058b08c6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Dialog
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Game_AottgInGameView__Dialog (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* id, const MethodInfo* method);
// 0x58b1d40

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Dialog
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754532e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_0754532e = '\x01';
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
// 0x58b1de0

void Gisketch_Aottg2UI_Game_AottgInGameView__SetButtonSelected
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_UI_Button_o *button,bool selected
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Image_o *pUVar7;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Color_o UVar8;
  UnityEngine_Color_o fallback;
  
  if (Il2CppMethodInitialized_0754532f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameSelectedTab");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Face");
    Il2CppMethodInitialized_0754532f = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    if (selected) {
      ppSVar4 = &"inGameSelectedTab";
    }
    else {
      ppSVar4 = &"buttonQuiet";
    }
    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar2,*ppSVar4,(MethodInfo *)0x0);
    if (button != (UnityEngine_UI_Button_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)button,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"AoTTG Button Face",(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_058b1fc2;
          pUVar7 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar6,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        }
        else {
          pUVar7 = (UnityEngine_UI_Image_o *)(button->fields).m_TargetGraphic;
        }
        pGVar1 = (__this->fields)._context;
        if (((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
            (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) &&
           (pGVar2 = (pGVar1->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
          UVar8.fields.b = 1.0;
          UVar8.fields.a = 1.0;
          UVar8.fields.r = 1.0;
          UVar8.fields.g = 1.0;
          UVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (pGVar2,(pGVar5->fields).background,UVar8,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                      (pUVar7,UVar8,(pUVar7->klass->vtable)._23_set_color.method);
            __this_00 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                                  ((UnityEngine_Component_o *)button,
                                   (MethodInfo_34B09D0 *)
                                   MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text);
            pGVar1 = (__this->fields)._context;
            if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
               (pGVar2 = (pGVar1->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
            {
              fallback.fields.b = 1.0;
              fallback.fields.a = 1.0;
              fallback.fields.r = 1.0;
              fallback.fields.g = 1.0;
              UVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (pGVar2,(pGVar5->fields).textColor,fallback,(MethodInfo *)0x0);
              if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                          (__this_00,UVar8,(__this_00->klass->vtable)._23_set_color.method);
                TMPro_TMP_Text__set_fontStyle(__this_00,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_058b1fc2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetState (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x58b1fd0

void Gisketch_Aottg2UI_Game_AottgInGameView__SetState
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (__this_00 = (pGVar1->fields).State, __this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,key,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$CreateOverlayManager
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_Game_AottgInGameView__CreateOverlayManager (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* layer, const MethodInfo* method);
// 0x58b1ff0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_Game_AottgInGameView__CreateOverlayManager
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *layer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_07545330 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    Il2CppMethodInitialized_07545330 = '\x01';
  }
  context = (__this->fields)._context;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor(__this_00,layer,context,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$ScaledPopupShell
// il2cpp: Gisketch_Aottg2UI_Game_AottgInGameView_o* Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell (UnityEngine_Transform_o* host, float width, float height, float headerHeight, float footerHeight, UnityEngine_Transform_o** header, UnityEngine_Transform_o** footer, System_String_o* headerStyle, const MethodInfo* method);
// 0x58b2050

Gisketch_Aottg2UI_Game_AottgInGameView_o *
Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
          (UnityEngine_Transform_o *host,float width,float height,float headerHeight,float footerHeight,
          UnityEngine_Transform_o **header,UnityEngine_Transform_o **footer,System_String_o *headerStyle,
          MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07545331 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ViewportScaler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07545331 = '\x01';
  }
  if (host != (UnityEngine_Transform_o *)0x0) {
    if ((UnityEngine_RectTransform_c *)host->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(host);
    }
    value.fields.y = height;
    value.fields.x = width;
    UnityEngine_RectTransform__set_sizeDelta((UnityEngine_RectTransform_o *)host,value,(MethodInfo *)0x0);
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_ViewportScaler;
      UnityEngine_GameObject__AddComponent_object_
                (__this,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_ViewportScaler);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(host,method_00);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,method_00);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell
                  (__this_00,host,width,height,headerHeight,footerHeight,header,footer,headerStyle,in_R9);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$PopupShell
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, float height, float headerHeight, float footerHeight, UnityEngine_Transform_o** header, UnityEngine_Transform_o** footer, System_String_o* headerStyle, const MethodInfo* method);
// 0x58b0160

void Gisketch_Aottg2UI_Game_AottgInGameView__PopupShell
               (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
               float height,float headerHeight,float footerHeight,UnityEngine_Transform_o **header,
               UnityEngine_Transform_o **footer,System_String_o *headerStyle,MethodInfo *method)

{
  UnityEngine_Vector2_Fields position;
  UnityEngine_Transform_o *transform;
  MethodInfo *pMVar1;
  
  if (Il2CppMethodInitialized_07545332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameSurface");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameFooter");
    Il2CppMethodInitialized_07545332 = '\x01';
  }
  pMVar1 = (MethodInfo *)parent;
  transform = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                        (__this,parent,"inGameSurface",width,height,false,(System_Nullable_float__o)0x0,
                         method);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__Position(transform,(UnityEngine_Vector2_o)position,pMVar1);
  pMVar1 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this,parent,headerStyle,width,headerHeight,true,(System_Nullable_float__o)0x0,method);
  *header = (UnityEngine_Transform_o *)pMVar1;
  Il2CppCodeGenWriteBarrier(header);
  Gisketch_Aottg2UI_Game_AottgInGameView__Position
            (*header,(UnityEngine_Vector2_o)((ulong)(uint)((height - headerHeight) * 0.5) << 0x20),pMVar1);
  pMVar1 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this,parent,"inGameFooter",width,footerHeight,true,
                      (System_Nullable_float__o)0x0,method);
  *footer = (UnityEngine_Transform_o *)pMVar1;
  Il2CppCodeGenWriteBarrier(footer);
  Gisketch_Aottg2UI_Game_AottgInGameView__Position
            (*footer,(UnityEngine_Vector2_o)((ulong)(uint)((height - footerHeight) * -0.5) << 0x20),pMVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$ProgressBar
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, float width, float height, const MethodInfo* method);
// 0x58b2190

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,float width,
          float height,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07545333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"sliderTrack");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderFill");
    Il2CppMethodInitialized_07545333 = '\x01';
  }
  parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                        (__this,parent,"sliderTrack",width,height,false,(System_Nullable_float__o)0x0,
                         in_R9);
  __this_00 = (UnityEngine_RectTransform_o *)
              Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                        (__this,parent_00,"sliderFill",width,height,false,
                         (System_Nullable_float__o)0x0,in_R9);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    if (__this_00->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    if (__this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMin
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      UnityEngine_RectTransform__set_offsetMax(__this_00,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_offsetMin(__this_00,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetProgress
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress (UnityEngine_RectTransform_o* fill, float progress, const MethodInfo* method);
// 0x58b2350

void Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress
               (UnityEngine_RectTransform_o *fill,float progress,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  float fVar1;
  
  if (fill == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = 1.0;
  if (progress <= 1.0) {
    fVar1 = progress;
  }
  value.fields.y = 1.0;
  value.fields.x = (float)(-(uint)(0.0 <= progress) & (uint)fVar1);
  UnityEngine_RectTransform__set_anchorMax(fill,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Panel
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgInGameView__Panel (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* style, float width, float height, bool row, System_Nullable_float__o gap, const MethodInfo* method);
// 0x58afe10

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Panel
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *style,float width,float height,bool row,System_Nullable_float__o gap,
          MethodInfo *method)

{
  System_String_o *direction;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_String_o *justify;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *method_00;
  float gap_00;
  
  if (Il2CppMethodInitialized_07545334 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07545334 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058b00ca;
  (__this_01->fields).type = "Panel";
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
  (__this_01->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).style);
  if (row) {
    ppSVar2 = &"Row";
  }
  else {
    ppSVar2 = &"Column";
  }
  direction = *ppSVar2;
  width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
  height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
  justify = "Center";
  if (gap.fields.hasValue == false) {
    pGVar1 = (__this->fields)._context;
    if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this_00 = (pGVar1->fields).Theme, __this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
    goto label_058b00ca;
    pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(__this_00,style,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_058b00ca;
    gap_00 = (pGVar3->fields).gap.fields.value;
  }
  else {
    gap_00 = gap.fields.value;
  }
  method_00 = (MethodInfo *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (direction,justify,justify,(System_String_o *)0x0,(System_String_o *)0x0,gap_00,width_00,
                      height_00,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  (__this_01->fields).layout = pGVar4;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
  if (__this != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_01,method_00);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (__this_02,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
      if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__AddComponent_object_
                           (__this_02,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                           );
        if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_058b00ca;
      }
      (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar5,width,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar5,height,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
      pUVar6 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      return pUVar6;
    }
  }
label_058b00ca:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Text
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgInGameView__Text (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* text, float width, float height, System_String_o* style, const MethodInfo* method);
// 0x58b0310

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgInGameView__Text
          (Gisketch_Aottg2UI_Game_AottgInGameView_o *__this,UnityEngine_Transform_o *parent,
          System_String_o *text,float width,float height,System_String_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  UnityEngine_GameObject_o *__this_01;
  TMPro_TMP_Text_o *pTVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545335 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07545335 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    (__this_00->fields).style = style;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,method_00);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pTVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
      return pTVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$FitTextHeight
// il2cpp: float Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight (TMPro_TMP_Text_o* label, float minimumHeight, const MethodInfo* method);
// 0x58b2390

float Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight
                (TMPro_TMP_Text_o *label,float minimumHeight,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  System_String_o *text;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Transform_o *target;
  MethodInfo *method_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545336 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07545336 = '\x01';
  }
  if (label != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_textWrappingMode(label,1,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode(label,0,(MethodInfo *)0x0);
    text = (*(label->klass->vtable)._65_get_text.methodPtr)(label,(label->klass->vtable)._65_get_text.method);
    __this = TMPro_TMP_Text__get_rectTransform(label,(MethodInfo *)0x0);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      UVar1 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                        (label,text,UVar3.fields.m_Width,INFINITY,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      target = TMPro_TMP_Text__get_transform(label,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      fStack_24 = UVar1.fields.y;
      fVar2 = ceilf(fStack_24);
      if (minimumHeight <= fVar2) {
        minimumHeight = fVar2;
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight(target,minimumHeight,method_00);
      return minimumHeight;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$SetHeight
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight (UnityEngine_Transform_o* target, float height, const MethodInfo* method);
// 0x58b24c0

void Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight
               (UnityEngine_Transform_o *target,float height,MethodInfo *method)

{
  bool bVar1;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07545337 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07545337 = '\x01';
  }
  if (target != (UnityEngine_Transform_o *)0x0) {
    if ((UnityEngine_RectTransform_c *)target->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(target);
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
              ((UnityEngine_RectTransform_o *)target,1,height,(MethodInfo *)0x0);
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)target,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
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
      if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_058b262a;
      Gilzoide_FlexUi_FlexLayout__set_Height(__this,value,(MethodInfo *)0x0);
    }
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)target,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
label_058b2607:
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,height,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) goto label_058b2607;
    }
  }
label_058b262a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Button
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Game_AottgInGameView__Button (Gisketch_Aottg2UI_Game_AottgInGameView_o* __this, UnityEngine_Transform_o* parent, System_String_o* text, System_String_o* action, System_String_o* value, float width, float height, int32_t variant, const MethodInfo* method);
// 0x58b04c0

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
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Button_o *__this_02;
  TMPro_TMP_Text_o *__this_03;
  MethodInfo *method_00;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07545338 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text_71a4de8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"button");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_07545338 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if (bVar1) {
      text = " ";
    }
    (__this_00->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    (__this_00->fields).action = action;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).action);
    (__this_00->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = variant;
    pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_52f0320("button",pSVar2,(MethodInfo *)0x0);
    (__this_00->fields).style = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
    height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (__this != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,method_00);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_01,
                               (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (__this_02 != (UnityEngine_UI_Button_o *)0x0) {
          __this_03 = UnityEngine_Component__GetComponentInChildren_object_
                                ((UnityEngine_Component_o *)__this_02,true,
                                 (MethodInfo_34B0B60 *)
                                 MethodInfo_UnityEngine_Component_GetComponentInChildren_TMP_Text_71a4de8);
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
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$Position
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__Position (UnityEngine_Transform_o* transform, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x58b00d0

void Gisketch_Aottg2UI_Game_AottgInGameView__Position
               (UnityEngine_Transform_o *transform,UnityEngine_Vector2_o position,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545339 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07545339 = '\x01';
  }
  if (transform == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((UnityEngine_RectTransform_c *)transform->klass != TypeInfo_UnityEngine_RectTransform) {
    il2cpp_codegen_raise_invalid_cast_exception(transform);
  }
  UnityEngine_RectTransform__set_pivot
            ((UnityEngine_RectTransform_o *)transform,(UnityEngine_Vector2_o)0x3f0000003f000000,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            ((UnityEngine_RectTransform_o *)transform,(UnityEngine_Vector2_o)0x3f0000003f000000,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMin
            ((UnityEngine_RectTransform_o *)transform,(UnityEngine_Vector2_o)0x3f0000003f000000,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition
            ((UnityEngine_RectTransform_o *)transform,position,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgInGameView$$HidePrefab
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab (UnityEngine_Transform_o* host, const MethodInfo* method);
// 0x58af6b0
// eh: try 0x58af77f..0x58af895 -> pad 0x58af8a2 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58af8c2..0x58af8c7 -> pad 0x58af95f cleanup
// eh: try 0x58af962..0x58af96c -> pad 0x58af974 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58af73e: nop 
// asm:   0x58af76c: nop dword ptr [rax]
// asm:   0x58af89a: jmp 0x58af8a6
// asm:   0x58af89c: jmp 0x58af8a6
// asm:   0x58af89e: jmp 0x58af8a6
// asm:   0x58af8a0: jmp 0x58af8a6
// asm:   0x58af8a2: jmp 0x58af8a6
// asm:   0x58af8a4: jmp 0x58af8a6
// asm:   0x58af8a6: mov rbx, rax
// asm:   0x58af8a9: cmp edx, 1
// asm:   0x58af8ac: jne 0x58af962
// asm:   0x58af8b2: mov rdi, rbx
// asm:   0x58af8b5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58af8ba: mov r14, qword ptr [rax]
// asm:   0x58af8bd: mov qword ptr [rsp + 0x10], r14
// asm:   0x58af8c2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58af957: mov rdi, r14
// asm:   0x58af95a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58af95f: mov rbx, rax
// asm:   0x58af962: lea rdi, [rsp + 0x10]
// asm:   0x58af967: call 0x2fcfde0  ; il2cpp_runtime_helper_02fcfde0()
// asm:   0x58af96c: mov rdi, rbx
// asm:   0x58af96f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58af974: mov rdi, rax
// asm:   0x58af977: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgInGameView__HidePrefab(UnityEngine_Transform_o *host,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar6;
  ulong uVar7;
  long lVar8;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  Il2CppObject **local_28;
  
  if (Il2CppMethodInitialized_0754533a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_0754533a = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  if (host == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_48 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(host,(MethodInfo *)0x0);
  local_30 = (undefined1 *)&local_48;
  local_38 = 0;
  local_28 = &local_40;
  do {
    pIVar6 = local_48;
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_48->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_058af7a3;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058af7a3:
    bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pIVar6 = local_48;
    if (!bVar4) {
      pIVar6 = il2cpp_vm_Object_IsInst(local_48,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar6 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar2 = pIVar6->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_40 = pIVar6;
      if (uVar7 == 0) goto label_058af91f;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_48->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
          goto label_058af827;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_058af827:
    __this = (UnityEngine_Component_o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    if (__this == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Transform))
    {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
    __this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  } while( true );
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_058af93d;
    }
  }
label_058af91f:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058af93d:
  (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  return;
}


