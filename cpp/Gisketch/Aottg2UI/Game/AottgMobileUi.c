// Type: Gisketch.Aottg2UI.Game.AottgMobileUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMobileUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMobileUi.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUi___c___cctor (const MethodInfo* method);
// 0x58c5270

void Gisketch_Aottg2UI_Game_AottgMobileUi___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c);
    Il2CppMethodInitialized_07545405 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgMobileUi___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileUi.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUi___c___ctor (Gisketch_Aottg2UI_Game_AottgMobileUi___c_o* __this, const MethodInfo* method);
// 0x58c52e0

void Gisketch_Aottg2UI_Game_AottgMobileUi___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMobileUi___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileUi.<>c$$<.cctor>b__1_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMobileUi___c____cctor_b__1_0 (Gisketch_Aottg2UI_Game_AottgMobileUi___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x58c52f0

bool Gisketch_Aottg2UI_Game_AottgMobileUi___c____cctor_b__1_0
               (Gisketch_Aottg2UI_Game_AottgMobileUi___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  return true;
}


// Gisketch.Aottg2UI.Game.AottgMobileUi$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUi___cctor (const MethodInfo* method);
// 0x58c4ea0

void Gisketch_Aottg2UI_Game_AottgMobileUi___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07545401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c_cctor_b__1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileRect");
    Il2CppMethodInitialized_07545401 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c);
  }
  object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c->static_fields->__9;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,object,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c_cctor_b__1_0,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"MobileRect",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileUi$$get_View
// il2cpp: Gisketch_Aottg2UI_Game_AottgInGameView_o* Gisketch_Aottg2UI_Game_AottgMobileUi__get_View (const MethodInfo* method);
// 0x58c4f90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c4fc3: jmp 0x58c500e

Gisketch_Aottg2UI_Game_AottgInGameView_o * Gisketch_Aottg2UI_Game_AottgMobileUi__get_View(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this;
  
  if (Il2CppMethodInitialized_07545402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    Il2CppMethodInitialized_07545402 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->static_fields->_view;
  }
  else {
    __this = *(Gisketch_Aottg2UI_Game_AottgInGameView_o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi)->static_fields;
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->static_fields->_view = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->static_fields->_view);
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgMobileUi$$CreateRect
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgMobileUi__CreateRect (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x58c4d50

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgMobileUi__CreateRect
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgMobileUi_c *method_00;
  
  if (Il2CppMethodInitialized_07545403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG ");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileRect");
    Il2CppMethodInitialized_07545403 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
  }
  __this = Gisketch_Aottg2UI_Game_AottgMobileUi__get_View((MethodInfo *)method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "MobileRect";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    pSVar1 = System_String__Concat_52f0320("AoTTG ",name,(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    if (__this != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(__this,parent,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_01,
                               (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout
                              );
        if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,false,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMobileUi$$AddText
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgMobileUi__AddText (UnityEngine_Transform_o* parent, System_String_o* value, const MethodInfo* method);
// 0x58c5070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c50a5: jmp 0x58c5242

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgMobileUi__AddText
          (UnityEngine_Transform_o *parent,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value_00;
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this;
  TMPro_TMP_Text_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    Il2CppMethodInitialized_07545404 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi = (Gisketch_Aottg2UI_Game_AottgMobileUi_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    __this = Gisketch_Aottg2UI_Game_AottgMobileUi__get_View((MethodInfo *)klass);
  }
  else {
    __this = Gisketch_Aottg2UI_Game_AottgMobileUi__get_View((MethodInfo *)klass);
  }
  if (((__this != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) &&
      (__this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                             (__this,parent,value,0.0,40.0,"inGameText",(MethodInfo *)0x0),
      __this_00 != (TMPro_TMP_Text_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout),
     __this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
    __this_02 = TMPro_TMP_Text__get_rectTransform(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (__this_02,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (__this_02,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      value_00 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      UnityEngine_RectTransform__set_offsetMax(__this_02,(UnityEngine_Vector2_o)value_00,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_offsetMin(__this_02,(UnityEngine_Vector2_o)value_00,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._25_set_raycastTarget.methodPtr)
                (__this_00,false,(__this_00->klass->vtable)._25_set_raycastTarget.method);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMobileUi$$CreateControls
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUi__CreateControls (UnityEngine_Transform_o* parent, UI_InGameMenu_o* menu, const MethodInfo* method);
// 0x58c5250

void Gisketch_Aottg2UI_Game_AottgMobileUi__CreateControls
               (UnityEngine_Transform_o *parent,UI_InGameMenu_o *menu,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgMobileUi$$CreateControls
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMobileUi__CreateControls (UnityEngine_Transform_o* parent, UI_MapEditorMenu_o* menu, const MethodInfo* method);
// 0x58c5260

void Gisketch_Aottg2UI_Game_AottgMobileUi__CreateControls_57c5260
               (UnityEngine_Transform_o *parent,UI_MapEditorMenu_o *menu,MethodInfo *method)

{
  return;
}


