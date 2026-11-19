// Type: Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSpriteButtonFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x53a9d20

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x53a9d80

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) ||
     (__this_00 = (pGVar3->fields)._rect, __this_00 == (UnityEngine_RectTransform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).start.fields;
  UVar2 = (__this->fields).press.fields;
  fVar4 = UVar1.x;
  fVar5 = UVar1.y;
  value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
  value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x53a9dc0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) ||
     (__this_00 = (pGVar3->fields)._rect, __this_00 == (UnityEngine_RectTransform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).press.fields;
  UVar2 = (__this->fields).target.fields;
  fVar4 = UVar1.x;
  fVar5 = UVar1.y;
  value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
  value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x53a9d30

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$<MoveTo>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, float value, const MethodInfo* method);
// 0x53a9e00

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) ||
     (__this_00 = (pGVar3->fields)._rect, __this_00 == (UnityEngine_RectTransform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).start.fields;
  UVar2 = (__this->fields).target.fields;
  fVar4 = UVar1.x;
  fVar5 = UVar1.y;
  value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
  value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x53a9220

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_00;
  UnityEngine_RectTransform_o *target;
  
  if (Il2CppMethodInitialized_07542bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07542bff = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  target = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = pUVar1->klass;
    target = (UnityEngine_RectTransform_o *)0x0;
    if (method_00 == TypeInfo_UnityEngine_RectTransform) {
      target = pUVar1;
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup(__this,target,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x53a9290

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector2_Fields UVar2;
  
  if (Il2CppMethodInitialized_07542c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c00 = '\x01';
  }
  (__this->fields)._rect = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (target == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar2 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(target,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  }
  (__this->fields)._origin.fields = UVar2;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a9350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a93b9: movaps xmm0, xmmword ptr [rsp]

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o target;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  (__this->fields)._hovered = true;
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
    UVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      fVar2 = 0.0;
      goto label_053a93c5;
    }
  }
  else {
    UVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  }
  fVar2 = 10.0;
label_053a93c5:
  target.fields.y = UVar1.y + fVar2 * UVar3.y;
  target.fields.x = UVar1.x + fVar2 * UVar3.x;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a9690

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o target;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  (__this->fields)._hovered = false;
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
    UVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
    if ((__this->fields)._hovered == false) goto label_053a96c2;
  }
  else {
    UVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
label_053a96c2:
    if ((__this->fields)._selected == false) {
      fVar2 = 0.0;
      goto label_053a9708;
    }
  }
  fVar2 = 10.0;
label_053a9708:
  target.fields.y = UVar1.y + fVar2 * UVar3.y;
  target.fields.x = UVar1.x + fVar2 * UVar3.x;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a9730

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  (__this->fields)._selected = true;
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + UVar2.y * fVar3;
  target.fields.x = UVar1.x + UVar2.x * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a97c0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  (__this->fields)._selected = false;
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + UVar2.y * fVar3;
  target.fields.x = UVar1.x + UVar2.x * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a9850

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o target;
  
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  target.fields.y = UVar1.y + UVar2.y * -5.0;
  target.fields.x = UVar1.x + UVar2.x * -5.0;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.06,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a98c0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + UVar2.y * fVar3;
  target.fields.x = UVar1.x + UVar2.x * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.1,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a9940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a9c91: jmp 0x53a9cb5

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  DG_Tweening_Tween_o *pDVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Vector2_c *pUVar7;
  bool bVar8;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this_00;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_TweenCallback_float__o *pDVar10;
  DG_Tweening_Tweener_o *pDVar11;
  DG_Tweening_Tween_o **targetAddress;
  float fVar12;
  
  if (Il2CppMethodInitialized_07542c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0);
    Il2CppMethodInitialized_07542c01 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *)0x0)
  goto label_053a9d11;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pUVar2 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pDVar3 = (__this->fields)._tween;
  if (pDVar3 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar3,false,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar2 = (__this->fields)._rect;
  if (bVar8) {
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      (__this_00->fields).start.fields = UVar5;
      UVar5 = (__this->fields)._origin.fields;
      if (Il2CppMethodInitialized_0754205f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0754205f = '\x01';
      }
      pUVar7 = TypeInfo_UnityEngine_Vector2;
      UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
      UVar6.y = UVar5.y + UVar1.y * -5.0;
      UVar6.x = UVar5.x + UVar1.x * -5.0;
      (__this_00->fields).press.fields = UVar6;
      UVar5 = (__this->fields)._origin.fields;
      UVar1 = (pUVar7->static_fields->upVector).fields;
      if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = 10.0;
      }
      targetAddress = &(__this->fields)._tween;
      UVar4.y = UVar5.y + UVar1.y * fVar12;
      UVar4.x = UVar5.x + UVar1.x * fVar12;
      (__this_00->fields).target.fields = UVar4;
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (pDVar10,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__0
                 ,(MethodInfo_4293C90 *)0x0);
      pDVar11 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.05,pDVar10,(MethodInfo *)0x0);
      pDVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                          ((Il2CppObject *)pDVar11,9,
                           (MethodInfo_36B0160 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
      pDVar9 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar9,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
      pDVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (pDVar10,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__1
                 ,(MethodInfo_4293C90 *)0x0);
      pDVar11 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,pDVar10,(MethodInfo *)0x0);
      pDVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                          ((Il2CppObject *)pDVar11,9,
                           (MethodInfo_36B0160 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
      pDVar9 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar9,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
      pDVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar9,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      *targetAddress = (DG_Tweening_Tween_o *)pDVar9;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pDVar3 = *targetAddress;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar3,false,(MethodInfo *)0x0);
      return;
    }
    goto label_053a9d11;
  }
  UVar5 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
    if ((__this->fields)._hovered == false) goto label_053a9cb5;
label_053a9cbc:
    fVar12 = 10.0;
  }
  else {
    if ((__this->fields)._hovered != false) goto label_053a9cbc;
label_053a9cb5:
    if ((__this->fields)._selected != false) goto label_053a9cbc;
    fVar12 = 0.0;
  }
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
    value.fields.y = UVar5.y + fVar12 * UVar1.y;
    value.fields.x = UVar5.x + fVar12 * UVar1.x;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
label_053a9d11:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$TargetPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x53a93f0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition
          (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 10.0;
  }
  UVar3.fields.x = UVar2.x * fVar4 + UVar1.x;
  UVar3.fields.y = UVar2.y * fVar4 + UVar1.y;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$MoveTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_Vector2_o target, float duration, const MethodInfo* method);
// 0x53a9460

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,UnityEngine_Vector2_o target,
               float duration,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  DG_Tweening_Tween_o *pDVar2;
  UnityEngine_Vector2_Fields UVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar5;
  DG_Tweening_Tween_o **targetAddress;
  
  if (Il2CppMethodInitialized_07542c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0_MoveTo_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0);
    Il2CppMethodInitialized_07542c02 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).target.fields = target.fields;
    pUVar1 = (__this->fields)._rect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pDVar2 = (__this->fields)._tween;
    if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(pDVar2,false,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar1 = (__this->fields)._rect;
    if (bVar4) {
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        targetAddress = &(__this->fields)._tween;
        UVar3 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
        (__this_00->fields).start.fields = UVar3;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0_MoveTo_b__0
                   ,(MethodInfo_4293C90 *)0x0);
        pDVar5 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_01,(MethodInfo *)0x0);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                           ((Il2CppObject *)pDVar5,9,
                            (MethodInfo_36B0160 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar5,true,
                            (MethodInfo_36B08F0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        *targetAddress = (DG_Tweening_Tween_o *)pDVar5;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pDVar2 = *targetAddress;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar1,(UnityEngine_Vector2_o)(__this_00->fields).target.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x53a9d40

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x53a9d70

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


