// Type: Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSpriteButtonFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x1819103d0

void
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    fVar1 = (__this->fields).start.fields.x;
    fVar2 = (__this->fields).start.fields.y;
    __this_00 = (pGVar3->fields)._rect;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.y = ((__this->fields).press.fields.y - fVar2) * value + fVar2;
      value_00.fields.x = ((__this->fields).press.fields.x - fVar1) * value + fVar1;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x181910440

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    fVar1 = (__this->fields).press.fields.x;
    fVar2 = (__this->fields).press.fields.y;
    __this_00 = (pGVar3->fields)._rect;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.y = ((__this->fields).target.fields.y - fVar2) * value + fVar2;
      value_00.fields.x = ((__this->fields).target.fields.x - fVar1) * value + fVar1;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$<MoveTo>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, float value, const MethodInfo* method);
// 0x1819103d0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *__this,
               float value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    fVar1 = (__this->fields).start.fields.x;
    fVar2 = (__this->fields).start.fields.y;
    __this_00 = (pGVar3->fields)._rect;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      value_00.fields.y = ((__this->fields).target.fields.y - fVar2) * value + fVar2;
      value_00.fields.x = ((__this->fields).target.fields.x - fVar1) * value + fVar1;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x18190e0e0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_RectTransform_o *__this_00;
  float fVar4;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184342280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184342280 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) && (pUVar2->klass == TypeInfo_UnityEngine_RectTransform))
  {
    __this_00 = pUVar2;
  }
  if (Il2CppMethodInitialized_184342281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342281 = '\x01';
  }
  (__this->fields)._rect = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,__this_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar3 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    fVar4 = UVar3.fields.x;
    fStackX_c = UVar3.fields.y;
  }
  else {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar4 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fStackX_c = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  (__this->fields)._origin.fields.x = fVar4;
  (__this->fields)._origin.fields.y = fStackX_c;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x18190ec40

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184342281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342281 = '\x01';
  }
  (__this->fields)._rect = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,target);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (target == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar2 = UnityEngine_RectTransform__get_anchoredPosition(target,(MethodInfo *)0x0);
    fVar3 = UVar2.fields.x;
    fStackX_c = UVar2.fields.y;
  }
  else {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar3 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fStackX_c = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  (__this->fields)._origin.fields.x = fVar3;
  (__this->fields)._origin.fields.y = fStackX_c;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18190e5a0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  fVar1 = (__this->fields)._origin.fields.x;
  (__this->fields)._hovered = true;
  fVar2 = (__this->fields)._origin.fields.y;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.y * fVar3 + fVar2;
  target.fields.x = fVar3 * (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.x + fVar1;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18190e650

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  fVar1 = (__this->fields)._origin.fields.x;
  (__this->fields)._hovered = false;
  fVar2 = (__this->fields)._origin.fields.y;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.y * fVar3 + fVar2;
  target.fields.x = fVar3 * (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.x + fVar1;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x18190e7b0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  fVar1 = (__this->fields)._origin.fields.x;
  (__this->fields)._selected = true;
  fVar2 = (__this->fields)._origin.fields.y;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.y * fVar3 + fVar2;
  target.fields.x = fVar3 * (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.x + fVar1;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x18190e450

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  fVar1 = (__this->fields)._origin.fields.x;
  (__this->fields)._selected = false;
  fVar2 = (__this->fields)._origin.fields.y;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.y * fVar3 + fVar2;
  target.fields.x = fVar3 * (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.x + fVar1;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18190e530

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o target;
  
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  target.fields.y = UVar2.y * -5.0 + UVar1.y;
  target.fields.x = UVar2.x * -5.0 + UVar1.x;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.06,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18190e700

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  fVar1 = (__this->fields)._origin.fields.x;
  fVar2 = (__this->fields)._origin.fields.y;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.y * fVar3 + fVar2;
  target.fields.x = fVar3 * (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.x + fVar1;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x18190e860

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_RectTransform_o *pUVar3;
  DG_Tweening_Tween_o *pDVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *object;
  UnityEngine_Vector2_o UVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *pDVar8;
  DG_Tweening_Tweener_o *pDVar9;
  float fVar10;
  UnityEngine_Vector2_Fields UVar11;
  UnityEngine_Vector2_Fields UVar12;
  float fStackX_24;
  
  if (Il2CppMethodInitialized_184342282 == '\0') {
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
    Il2CppMethodInitialized_184342282 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *)0x0)
  goto label_18190ec37;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  pUVar3 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pDVar4 = (__this->fields)._tween;
    if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(pDVar4,false,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._rect;
    if (bVar5) {
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
label_18190ec37:
        ThrowNullReferenceException();
      }
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      (object->fields).start.fields.x = UVar6.fields.x;
      fStackX_24 = UVar6.fields.y;
      (object->fields).start.fields.y = fStackX_24;
      UVar1 = (__this->fields)._origin.fields;
      if (Il2CppMethodInitialized_184341707 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341707 = '\x01';
      }
      UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
      UVar11.x = UVar2.x * -5.0 + UVar1.x;
      UVar11.y = UVar2.y * -5.0 + UVar1.y;
      (object->fields).press.fields = UVar11;
      UVar1 = (__this->fields)._origin.fields;
      if (Il2CppMethodInitialized_184341707 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341707 = '\x01';
      }
      UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
      if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = 10.0;
      }
      UVar12.x = UVar2.x * fVar10 + UVar1.x;
      UVar12.y = UVar2.y * fVar10 + UVar1.y;
      (object->fields).target.fields = UVar12;
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)pDVar8,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__0
                 ,(MethodInfo_E5A750 *)0x0);
      pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.05,pDVar8,(MethodInfo *)0x0);
      pDVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar9,9,
                          (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener)
      ;
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar7,(DG_Tweening_Tween_o *)pDVar9,(MethodInfo *)0x0);
      pDVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)pDVar8,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__1
                 ,(MethodInfo_E5A750 *)0x0);
      pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,pDVar8,(MethodInfo *)0x0);
      pDVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar9,9,
                          (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener)
      ;
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar7,(DG_Tweening_Tween_o *)pDVar9,(MethodInfo *)0x0);
      pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar7,true,
                          (MethodInfo_7CA3D0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar7);
      pDVar4 = (__this->fields)._tween;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar4,false,(MethodInfo *)0x0);
    }
    else {
      UVar1 = (__this->fields)._origin.fields;
      if (Il2CppMethodInitialized_184341707 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341707 = '\x01';
      }
      UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
      if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = 10.0;
      }
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_18190ec37;
      UVar6.fields.y = UVar2.y * fVar10 + UVar1.y;
      UVar6.fields.x = UVar2.x * fVar10 + UVar1.x;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar6,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$TargetPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x18190ed20

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition
          (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  
  UVar1 = (__this->fields)._origin.fields;
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 10.0;
  }
  UVar3.y = UVar2.y * fVar4 + UVar1.y;
  UVar3.x = UVar2.x * fVar4 + UVar1.x;
  return (UnityEngine_Vector2_o)UVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$MoveTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_Vector2_o target, float duration, const MethodInfo* method);
// 0x18190e200

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,UnityEngine_Vector2_o target,
               float duration,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  DG_Tweening_Tween_o *pDVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *object;
  UnityEngine_Vector2_o UVar4;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar5;
  float fStack_34;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_184342283 == '\0') {
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
    Il2CppMethodInitialized_184342283 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    fStack_34 = target.fields.y;
    (object->fields).target.fields.y = fStack_34;
    (object->fields).target.fields.x = target.fields.x;
    pUVar1 = (__this->fields)._rect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pDVar2 = (__this->fields)._tween;
      if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar2,false,(MethodInfo *)0x0);
      }
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar1 = (__this->fields)._rect;
      if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_18190e43f;
      if (bVar3) {
        UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
        fStack_2c = UVar4.fields.y;
        (object->fields).start.fields.y = fStack_2c;
        (object->fields).start.fields.x = UVar4.fields.x;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0_MoveTo_b__0
                   ,(MethodInfo_E5A750 *)0x0);
        pDVar5 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                           ((Il2CppObject *)pDVar5,9,
                            (MethodInfo_7C9BC0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar5,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar5);
        pDVar2 = (__this->fields)._tween;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar1,(UnityEngine_Vector2_o)(object->fields).target.fields,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_18190e43f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x18190e500

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x18190eda0

void
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, MethodInfo* method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


