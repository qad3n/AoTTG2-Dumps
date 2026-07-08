// Type: Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSpriteButtonFeedback.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x3b2f720

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_<>c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x3b2f780

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_<>c__DisplayClass15_0__<OnSubmit>b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o
                *__this,float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) &&
     (__this_00 = (pGVar3->fields)._rect, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).press.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
    value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x3b2f7c0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_<>c__DisplayClass15_0__<OnSubmit>b__1
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o
                *__this,float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) &&
     (__this_00 = (pGVar3->fields)._rect, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar1 = (__this->fields).press.fields;
    UVar2 = (__this->fields).target.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
    value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x3b2f730

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_<>c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$<MoveTo>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, float value, const MethodInfo* method);
// 0x3b2f800

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_<>c__DisplayClass17_0__<MoveTo>b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o
                *__this,float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar4;
  float fVar5;
  
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) &&
     (__this_00 = (pGVar3->fields)._rect, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
    value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b2ec40

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_00;
  UnityEngine_RectTransform_o *target;
  
  if (DAT_057015ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057015ea = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  method_00 = extraout_RDX;
  target = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = pUVar1->klass;
    target = (UnityEngine_RectTransform_o *)0x0;
    if (method_00 == TypeInfo_RectTransform) {
      target = pUVar1;
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
            (__this,target,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x3b2eca0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector2_Fields UVar2;
  
  if (DAT_057015eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015eb = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._rect = target;
  il2cpp_runtime_glue(&(__this->fields)._rect,target,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UVar2 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    if (target == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar2 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(target,(MethodInfo *)0x0);
  }
  (__this->fields)._origin.fields = UVar2;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2ed60

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o target;
  float fVar2;
  undefined8 uVar3;
  
  *(undefined1 *)&(__this->fields)._hovered = 1;
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    if (((char)(__this->fields)._hovered == '\0') &&
       (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
      fVar2 = 0.0;
      goto LAB_03b2edd5;
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  }
  fVar2 = 10.0;
LAB_03b2edd5:
  target.fields.y = UVar1.y + fVar2 * (float)((ulong)uVar3 >> 0x20);
  target.fields.x = UVar1.x + fVar2 * (float)uVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
            (__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2f0a0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o target;
  float fVar2;
  undefined8 uVar3;
  
  *(undefined1 *)&(__this->fields)._hovered = 0;
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    if ((char)(__this->fields)._hovered == '\0') goto LAB_03b2f0d2;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
LAB_03b2f0d2:
    if (*(char *)((long)&(__this->fields)._hovered + 1) == '\0') {
      fVar2 = 0.0;
      goto LAB_03b2f118;
    }
  }
  fVar2 = 10.0;
LAB_03b2f118:
  target.fields.y = UVar1.y + fVar2 * (float)((ulong)uVar3 >> 0x20);
  target.fields.x = UVar1.x + fVar2 * (float)uVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
            (__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2f140

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar3;
  target.fields.x = UVar1.x + (float)uVar2 * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
            (__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2f1d0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar3;
  target.fields.x = UVar1.x + (float)uVar2 * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
            (__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2f260

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * -5.0;
  target.fields.x = UVar1.x + (float)uVar2 * -5.0;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
            (__this,target,0.06,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2f2d0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar3;
  target.fields.x = UVar1.x + (float)uVar2 * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
            (__this,target,0.1,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2f350

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  long lVar5;
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *pDVar8;
  DG_Tweening_Tweener_o *pDVar9;
  DG_Tweening_Tween_o *pDVar10;
  DG_Tweening_Tween_o **ppDVar11;
  float fVar12;
  
  if (DAT_057015ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnSubmit_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnSubmit_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    DAT_057015ec = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1);
    pUVar3 = (__this->fields)._rect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar6 != '\0') {
      return;
    }
    pDVar10 = (__this->fields)._tween;
    if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._rect;
    if ((char)bVar6 == '\0') {
      UVar1 = (__this->fields)._origin.fields;
      if (DAT_0570048d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_0570048d = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      if (((char)(__this->fields)._hovered == '\0') &&
         (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = 10.0;
      }
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar4.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar12;
        UVar4.fields.x = UVar1.x + (float)uVar2 * fVar12;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar4,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      __this_00[1].monitor = (void *)UVar4.fields;
      UVar1 = (__this->fields)._origin.fields;
      if (DAT_0570048d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_0570048d = '\x01';
      }
      lVar5 = TypeInfo_Vector2;
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      __this_00[2].klass =
           (Il2CppClass *)
           CONCAT44(UVar1.y + (float)((ulong)uVar2 >> 0x20) * -5.0,UVar1.x + (float)uVar2 * -5.0);
      UVar1 = (__this->fields)._origin.fields;
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (((char)(__this->fields)._hovered == '\0') &&
         (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = 10.0;
      }
      ppDVar11 = &(__this->fields)._tween;
      __this_00[2].monitor =
           (void *)CONCAT44(UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar12,
                            UVar1.x + (float)uVar2 * fVar12);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.05,pDVar8,(MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase<object>
                          ((Il2CppObject *)pDVar9,9,MethodInfo_Tweener_SetEase_Tweener);
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Append(pDVar7,pDVar10,(MethodInfo *)0x0);
      pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,pDVar8,(MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase<object>
                          ((Il2CppObject *)pDVar9,9,MethodInfo_Tweener_SetEase_Tweener);
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Append(pDVar7,pDVar10,(MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                          ((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence);
      *ppDVar11 = pDVar10;
      il2cpp_runtime_glue(ppDVar11);
      pDVar10 = *ppDVar11;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar10,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$TargetPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b2ee00

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition
          (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  
  UVar1 = (__this->fields)._origin.fields;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 10.0;
  }
  UVar3.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar4;
  UVar3.fields.x = UVar1.x + (float)uVar2 * fVar4;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$MoveTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_Vector2_o target, float duration, const MethodInfo* method);
// 0x3b2ee70

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_Vector2_o target,float duration,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar5;
  DG_Tweening_Tween_o **ppDVar6;
  float local_28;
  float fStack_24;
  
  if (DAT_057015ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__MoveTo_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    DAT_057015ed = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar4 + 1);
    local_28 = target.fields.x;
    fStack_24 = target.fields.y;
    *(float *)&pIVar4[2].klass = local_28;
    *(float *)((long)&pIVar4[2].klass + 4) = fStack_24;
    pUVar1 = (__this->fields)._rect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    pDVar5 = (__this->fields)._tween;
    if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar1 = (__this->fields)._rect;
    if ((char)bVar3 == '\0') {
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar1,(UnityEngine_Vector2_o)pIVar4[2].klass,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      ppDVar6 = &(__this->fields)._tween;
      UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
      pIVar4[1].monitor = (void *)UVar2.fields;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
      pIVar4 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar4,1,MethodInfo_Tweener_SetUpdate_Tweener);
      *ppDVar6 = pDVar5;
      il2cpp_runtime_glue(ppDVar6);
      pDVar5 = *ppDVar6;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b2f740

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b2f770

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


