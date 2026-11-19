// Type: Gisketch.Aottg2UI.Tweening.GisketchButtonRelief
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchButtonRelief.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x5325ca0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$<AnimateStep>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x5326270

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *pGVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_o value_00;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_0754280b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754280b = '\x01';
  }
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
    fVar6 = (__this->fields).reliefStart;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
              (pGVar3,((__this->fields).reliefEnd - fVar6) * value + fVar6,method);
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      pUVar4 = (pGVar3->fields)._face;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pGVar3 = (__this->fields).__4__this;
      if ((pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) &&
         (pUVar4 = (pGVar3->fields)._face, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar1 = (__this->fields).offsetStart.fields;
        UVar2 = (__this->fields).offsetEnd.fields;
        fVar6 = UVar1.x;
        fVar7 = UVar1.y;
        value_00.fields.y = value * (UVar2.y - fVar7) + fVar7;
        value_00.fields.x = value * (UVar2.x - fVar6) + fVar6;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Setup
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_RectTransform_o* face, float relief, UnityEngine_UI_RectMask2D_o* pressMask, System_Nullable_float__o pressDepth, const MethodInfo* method);
// 0x5324940

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,UnityEngine_UI_Image_o *image,
               UnityEngine_RectTransform_o *face,float relief,UnityEngine_UI_RectMask2D_o *pressMask,
               System_Nullable_float__o pressDepth,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o **targetAddress;
  UnityEngine_UI_RectMask2D_o *x;
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  float fVar4;
  System_Nullable_float__o local_38;
  
  local_38.fields = pressDepth.fields;
  if (Il2CppMethodInitialized_075427fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427fd = '\x01';
  }
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Material_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_05324ad7;
    pUVar2 = (*(image->klass->vtable)._32_get_material.methodPtr)
                       (image,(image->klass->vtable)._32_get_material.method);
  }
  (__this->fields)._material = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._material);
  (__this->fields)._face = face;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._face);
  targetAddress = &(__this->fields)._pressMask;
  (__this->fields)._pressMask = pressMask;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Selectable);
  (__this->fields)._selectable = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectable);
  (__this->fields)._baseRelief = relief;
  fVar4 = System_Nullable_float___GetValueOrDefault_3cda300
                    (&local_38,0.1,
                     (MethodInfo_3CDA300 *)MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
  (__this->fields)._pressDepth = fVar4;
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  x = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*targetAddress == (UnityEngine_UI_RectMask2D_o *)0x0) {
label_05324ad7:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*targetAddress,false,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5324b60

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_Vector2_o offsetTarget;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar5;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07542808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542808 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_01 = (pUVar3->klass->vtable)._24_IsInteractable.method;
    bVar4 = (*(pUVar3->klass->vtable)._24_IsInteractable.methodPtr)(pUVar3,method_01);
    if (!bVar4) {
      return;
    }
  }
  (__this->fields)._hovered = true;
  if ((__this->fields)._pressed != false) {
    return;
  }
  fVar1 = (__this->fields)._baseRelief;
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
  fStack_28 = UVar2.x;
  fStack_24 = UVar2.y;
  offsetTarget.fields.y = fStack_24 * fVar5 * 0.5;
  offsetTarget.fields.x = fStack_28 * fVar5 * 0.5;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
            (__this,fVar1 * 1.35,offsetTarget,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5324d80

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float reliefTarget;
  MethodInfo *extraout_RDX;
  
  (__this->fields)._hovered = false;
  if ((__this->fields)._pressed != false) {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
            (__this,reliefTarget,
             (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,0.08,9,
             method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5324e00

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float reliefTarget;
  UnityEngine_Vector2_o offsetTarget;
  
  if (Il2CppMethodInitialized_07542808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542808 = '\x01';
  }
  pUVar1 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar1 = (__this->fields)._selectable;
    if (pUVar1 == (UnityEngine_UI_Selectable_o *)0x0) goto label_05324f28;
    bVar3 = (*(pUVar1->klass->vtable)._24_IsInteractable.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._24_IsInteractable.method);
    if (!bVar3) {
      return;
    }
  }
  (__this->fields)._pressed = true;
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  pUVar2 = (__this->fields)._pressMask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._pressMask;
    if (pUVar2 == (UnityEngine_UI_RectMask2D_o *)0x0) {
label_05324f28:
      ThrowNullReferenceException();
    }
    method_01 = (MethodInfo *)0x1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,true,(MethodInfo *)0x0);
  }
  reliefTarget = (__this->fields)._baseRelief;
  if ((__this->fields)._hovered != false) {
    reliefTarget = reliefTarget * 1.35;
  }
  offsetTarget = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset(__this,method_01);
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
            (__this,reliefTarget,offsetTarget,0.045,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53251b0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._pressed = false;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53253b0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float reliefTarget;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07542808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542808 = '\x01';
  }
  pUVar1 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (!bVar2) {
    pUVar1 = (__this->fields)._selectable;
    if (pUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_01 = (pUVar1->klass->vtable)._24_IsInteractable.method;
    bVar2 = (*(pUVar1->klass->vtable)._24_IsInteractable.methodPtr)(pUVar1,method_01);
    method_00 = extraout_RDX_00;
    if (!bVar2) {
      return;
    }
  }
  if ((__this->fields)._pressed != false) {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if ((__this->fields)._hovered == false) {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
      method_00 = extraout_RDX_02;
    }
    UVar4 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  }
  else {
    reliefTarget = reliefTarget * 1.35;
    if (Il2CppMethodInitialized_0754205f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0754205f = '\x01';
    }
    UVar4 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
    fVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
    fStack_28 = UVar4.x;
    fStack_24 = UVar4.y;
    UVar4.x = fVar3 * fStack_28 * 0.5;
    UVar4.y = fVar3 * fStack_24 * 0.5;
    method_00 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
            (__this,reliefTarget,(UnityEngine_Vector2_o)UVar4,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53255b0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float reliefTarget;
  MethodInfo *extraout_RDX;
  
  if ((__this->fields)._pressed != false) {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
            (__this,reliefTarget,
             (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,0.08,9,
             method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5325620

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Press
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5325630

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  UnityEngine_Material_o *x;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o offsetEnd;
  bool bVar4;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_Tween_o *pDVar6;
  DG_Tweening_TweenCallback_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar7;
  float reliefEnd;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_Fields UVar10;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075427fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Press_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_075427fe = '\x01';
  }
  if (Il2CppMethodInitialized_07542808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542808 = '\x01';
  }
  pUVar1 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    pUVar1 = (__this->fields)._selectable;
    if (pUVar1 == (UnityEngine_UI_Selectable_o *)0x0) goto label_05325a00;
    bVar4 = (*(pUVar1->klass->vtable)._24_IsInteractable.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._24_IsInteractable.method);
    if (!bVar4) {
      return;
    }
  }
  x = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    else {
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    if (bVar4) {
      (__this->fields)._pressed = true;
      if (Il2CppMethodInitialized_07542807 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07542807 = '\x01';
      }
      pUVar2 = (__this->fields)._pressMask;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar7 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar2 = (__this->fields)._pressMask;
        if (pUVar2 == (UnityEngine_UI_RectMask2D_o *)0x0) {
label_05325a00:
          ThrowNullReferenceException();
        }
        pMVar7 = (MethodInfo *)0x1;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,true,(MethodInfo *)0x0);
      }
      pDVar6 = (__this->fields)._tween;
      if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
        pMVar7 = (MethodInfo *)0x0;
        DG_Tweening_TweenExtensions__Kill(pDVar6,false,(MethodInfo *)0x0);
      }
      reliefEnd = (__this->fields)._baseRelief;
      if ((__this->fields)._hovered != false) {
        reliefEnd = reliefEnd * 1.35;
      }
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      fVar8 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,pMVar7);
      UVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,pMVar7);
      offsetEnd = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset(__this,pMVar7);
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                         (__this,fVar8,reliefEnd,UVar3,offsetEnd,0.045,9,method_00);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__Append(pDVar5,pDVar6,(MethodInfo *)0x0);
      fVar8 = (__this->fields)._baseRelief;
      if ((__this->fields)._hovered != false) {
        fVar8 = fVar8 * 1.35;
      }
      UVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset(__this,(MethodInfo *)pDVar6);
      if ((__this->fields)._hovered == false) {
        pMVar7 = extraout_RDX;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
          pMVar7 = extraout_RDX_01;
        }
        UVar10 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      }
      else {
        if (Il2CppMethodInitialized_0754205f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0754205f = '\x01';
        }
        UVar10 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
        fVar9 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,(MethodInfo *)pDVar6);
        fStack_38 = UVar10.x;
        fStack_34 = UVar10.y;
        UVar10.x = fVar9 * fStack_38 * 0.5;
        UVar10.y = fVar9 * fStack_34 * 0.5;
        pMVar7 = extraout_RDX_00;
      }
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                         (__this,reliefEnd,fVar8,UVar3,(UnityEngine_Vector2_o)UVar10,0.09,0x1b,pMVar7);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__Append(pDVar5,pDVar6,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
      DG_Tweening_TweenCallback___ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Press_b__20_0,
                 (MethodInfo *)0x0);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                         ((Il2CppObject *)pDVar5,__this_00,
                          (MethodInfo_36AF8A0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
      pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar5,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tween);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, const MethodInfo* method);
// 0x5324d70

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *in_RDX;
  
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
                     (__this,reliefTarget,offsetTarget,duration,9,in_RDX);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, int32_t ease, const MethodInfo* method);
// 0x5325050

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,int32_t ease,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  UnityEngine_RectTransform_o *x_00;
  bool bVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float reliefStart;
  UnityEngine_Vector2_o offsetStart;
  
  if (Il2CppMethodInitialized_075427ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tween);
    Il2CppMethodInitialized_075427ff = '\x01';
  }
  x = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x_00 = (__this->fields)._face;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  pDVar2 = (DG_Tweening_Tween_o *)0x0;
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    pDVar2 = (__this->fields)._tween;
    if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      DG_Tweening_TweenExtensions__Kill(pDVar2,false,(MethodInfo *)0x0);
    }
    reliefStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,method_01);
    offsetStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,method_01);
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                       (__this,reliefStart,reliefTarget,offsetStart,offsetTarget,duration,ease,method_00);
    pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar2,true,
                        (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tween);
    (__this->fields)._tween = pDVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tween);
    pDVar2 = (__this->fields)._tween;
  }
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$AnimateStep
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefStart, float reliefEnd, UnityEngine_Vector2_o offsetStart, UnityEngine_Vector2_o offsetEnd, float duration, int32_t ease, const MethodInfo* method);
// 0x5325b70

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefStart,float reliefEnd,
          UnityEngine_Vector2_o offsetStart,UnityEngine_Vector2_o offsetEnd,float duration,int32_t ease,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar1;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0_AnimateStep_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0);
    Il2CppMethodInitialized_07542800 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).reliefStart = reliefStart;
  (__this_00->fields).reliefEnd = reliefEnd;
  local_38 = offsetStart.fields.x;
  fStack_34 = offsetStart.fields.y;
  (__this_00->fields).offsetStart.fields.x = local_38;
  (__this_00->fields).offsetStart.fields.y = fStack_34;
  (__this_00->fields).offsetEnd.fields.x = offsetEnd.fields.x;
  (__this_00->fields).offsetEnd.fields.y = offsetEnd.fields.y;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
  DG_Tweening_TweenCallback_float____ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0_AnimateStep_b__0,
             (MethodInfo_4293C90 *)0x0);
  pDVar1 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_01,(MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                     ((Il2CppObject *)pDVar1,ease,
                      (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
  return (DG_Tweening_Tween_o *)pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CurrentRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5325a10

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07542801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542801 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar1 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_Material__GetFloat_68e0ed0
                      (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                              ReliefId,(MethodInfo *)0x0);
    return fVar3;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetRelief
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float value, const MethodInfo* method);
// 0x5325cb0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Material_o **targetAddress;
  UnityEngine_Material_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_07542802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542802 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  targetAddress = &(__this->fields)._material;
  if ((__this->fields)._ownsMaterial == false) {
    pUVar2 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = *targetAddress;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor_68dcfd0(__this_00,pUVar1,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_05325e1c;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_00,0x34,(MethodInfo *)0x0);
      (__this->fields)._material = __this_00;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar2 = (__this->fields)._image;
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05325e1c;
      (*(pUVar2->klass->vtable)._33_set_material.methodPtr)
                (pUVar2,(__this->fields)._material,(pUVar2->klass->vtable)._33_set_material.method);
      (__this->fields)._ownsMaterial = true;
    }
  }
  pUVar1 = *targetAddress;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_68e0ad0
              (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
               value,(MethodInfo *)0x0);
    return;
  }
label_05325e1c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$FaceOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5325ac0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (Il2CppMethodInitialized_07542803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542803 = '\x01';
  }
  pUVar1 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._face;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar3.fields;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  return (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$HoverOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5324d10

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  fVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
  local_18 = UVar1.x;
  fStack_14 = UVar1.y;
  UVar2.fields.y = fVar3 * fStack_14 * 0.5;
  UVar2.fields.x = fVar3 * local_18 * 0.5;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$PressOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5324f50

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  bool bVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07542804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542804 = '\x01';
  }
  pUVar2 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar6 = 0.0;
  if (bVar4) {
    pUVar2 = (__this->fields)._face;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar6 = UVar7.fields.m_Height;
  }
  if (Il2CppMethodInitialized_07542887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542887 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->downVector).fields;
  fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_00);
  fVar6 = fVar6 * (__this->fields)._pressDepth;
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  local_28 = UVar1.x;
  fStack_24 = UVar1.y;
  UVar3.fields.y = fVar5 * fStack_24;
  UVar3.fields.x = fVar5 * local_28;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5324f30

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseRelief
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields)._baseRelief;
  if ((__this->fields)._hovered != false) {
    fVar1 = fVar1 * 1.35;
  }
  return fVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5325510

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if ((__this->fields)._hovered == false) {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    return (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  }
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  fVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
  local_18 = UVar1.x;
  fStack_14 = UVar1.y;
  UVar2.fields.y = fVar3 * fStack_14 * 0.5;
  UVar2.fields.x = fVar3 * local_18 * 0.5;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Release
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x53251c0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool bVar2;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  bool bVar3;
  float fVar4;
  float reliefTarget;
  UnityEngine_Vector2_Fields UVar5;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07542805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    Il2CppMethodInitialized_07542805 = '\x01';
    bVar2 = (__this->fields)._hovered == false;
    reliefTarget = (__this->fields)._baseRelief;
    in_RDX = extraout_RDX_00;
    bVar3 = bVar2;
    if (!bVar2) goto label_0532528b;
label_053251e6:
    if (bVar3) {
label_05325299:
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
        in_RDX = extraout_RDX_01;
      }
      UVar5 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      goto label_053252d6;
    }
  }
  else {
    reliefTarget = (__this->fields)._baseRelief;
    bVar2 = false;
    bVar3 = true;
    if ((__this->fields)._hovered == false) goto label_053251e6;
label_0532528b:
    reliefTarget = reliefTarget * 1.35;
    if (bVar2) goto label_05325299;
  }
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar5 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  fVar4 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
  fStack_28 = UVar5.x;
  fStack_24 = UVar5.y;
  UVar5.x = fVar4 * fStack_28 * 0.5;
  UVar5.y = fVar4 * fStack_24 * 0.5;
  in_RDX = extraout_RDX;
label_053252d6:
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_5225050
                (__this,reliefTarget,(UnityEngine_Vector2_o)UVar5,0.09,0x1b,in_RDX);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
    DG_Tweening_TweenCallback___ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0,
               (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__OnComplete_object_
              ((Il2CppObject *)t,__this_00,
               (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    return;
  }
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 == (UnityEngine_UI_RectMask2D_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ShadowSize
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5325e30

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07542806 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542806 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar1 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_Material__GetFloat_68e0ed0
                      (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                              ReliefShadowSizeId,(MethodInfo *)0x0);
    fVar4 = 1.0;
    if (1.0 <= fVar3) {
      fVar4 = fVar3;
    }
    return fVar4;
  }
  return 4.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetPressMask
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, bool enabled, const MethodInfo* method);
// 0x5324ae0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 == (UnityEngine_UI_RectMask2D_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,enabled,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CanInteract
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5324c80

bool Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542808 = '\x01';
  }
  pUVar1 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  pUVar1 = (__this->fields)._selectable;
  if (pUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = (*(pUVar1->klass->vtable)._24_IsInteractable.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._24_IsInteractable.method);
  return bVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ResetPressVisual
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5325ef0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  DG_Tweening_Tween_o *t;
  UnityEngine_UI_RectMask2D_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07542809 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542809 = '\x01';
  }
  (__this->fields)._hovered = false;
  (__this->fields)._pressed = false;
  targetAddress = &(__this->fields)._tween;
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  *targetAddress = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 == (UnityEngine_UI_RectMask2D_o *)0x0) goto label_053260a0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._face;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_053260a0;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar2,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  if ((__this->fields)._ownsMaterial != false) {
    pUVar3 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields)._material;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat_68e0ad0
                  (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
                   (__this->fields)._baseRelief,(MethodInfo *)0x0);
        return;
      }
label_053260a0:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x53260b0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual(__this,method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x53260c0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754280a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754280a = '\x01';
  }
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  if ((__this->fields)._ownsMaterial != false) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._material;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5326160

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  (__this->fields)._pressDepth = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Press>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x5326170

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool bVar2;
  
  (__this->fields)._pressed = false;
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 == (UnityEngine_UI_RectMask2D_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Release>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x53261f0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542807 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 == (UnityEngine_UI_RectMask2D_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


