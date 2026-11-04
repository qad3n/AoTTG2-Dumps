// Type: Gisketch.Aottg2UI.Tweening.GisketchButtonRelief
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchButtonRelief.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$<AnimateStep>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x1818a2df0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,float value,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *pGVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector2_o value_00;
  bool bVar7;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_184341eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341eca = '\x01';
  }
  pGVar3 = (__this->fields).__4__this;
  fVar1 = (__this->fields).reliefStart;
  fVar2 = (__this->fields).reliefEnd;
  if (pGVar3 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_1818a304e;
  if (Il2CppMethodInitialized_184341ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec1 = '\x01';
  }
  pUVar4 = (pGVar3->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    if ((pGVar3->fields)._ownsMaterial == false) {
      pUVar5 = (pGVar3->fields)._image;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar4 = (pGVar3->fields)._material;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor_2ee55e0(__this_00,pUVar4,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_1818a304e;
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_00,0x34,(MethodInfo *)0x0);
        (pGVar3->fields)._material = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._material,__this_00);
        pUVar5 = (pGVar3->fields)._image;
        if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto label_1818a304e;
        (*(pUVar5->klass->vtable)._33_set_material.methodPtr)
                  (pUVar5,(pGVar3->fields)._material,(pUVar5->klass->vtable)._33_set_material.method);
        (pGVar3->fields)._ownsMaterial = true;
      }
    }
    pUVar4 = (pGVar3->fields)._material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_1818a304e;
    UnityEngine_Material__SetFloat_2ee3980
              (pUVar4,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
               (fVar2 - fVar1) * value + fVar1,(MethodInfo *)0x0);
  }
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
    pUVar6 = (pGVar3->fields)._face;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      fVar1 = (__this->fields).offsetStart.fields.x;
      fVar2 = (__this->fields).offsetStart.fields.y;
      pUVar6 = (pGVar3->fields)._face;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        value_00.fields.y = ((__this->fields).offsetEnd.fields.y - fVar2) * value + fVar2;
        value_00.fields.x = ((__this->fields).offsetEnd.fields.x - fVar1) * value + fVar1;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar6,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1818a304e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Setup
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_RectTransform_o* face, float relief, UnityEngine_UI_RectMask2D_o* pressMask, System_Nullable_float__o pressDepth, const MethodInfo* method);
// 0x1818846f0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,UnityEngine_UI_Image_o *image,
               UnityEngine_RectTransform_o *face,float relief,UnityEngine_UI_RectMask2D_o *pressMask,
               System_Nullable_float__o pressDepth,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *value;
  UnityEngine_UI_Selectable_o *value_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_184341ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ebc = '\x01';
  }
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image,image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = (*(image->klass->vtable)._32_get_material.methodPtr)
                      (image,(image->klass->vtable)._32_get_material.method);
  }
  else {
    value = (UnityEngine_Material_o *)0x0;
  }
  (__this->fields)._material = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._material,value);
  (__this->fields)._face = face;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._face,face);
  (__this->fields)._pressMask = pressMask;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressMask,pressMask);
  value_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Selectable);
  (__this->fields)._selectable = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectable,value_00);
  (__this->fields)._baseRelief = relief;
  fVar2 = System_Nullable_float___GetValueOrDefault_adc4c0
                    (&pressDepth,0.1,
                     (MethodInfo_ADC4C0 *)MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
  (__this->fields)._pressDepth = fVar2;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181883bf0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_Vector2_o offsetTarget;
  
  bVar2 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract(__this,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._hovered = true, (__this->fields)._pressed == false)) {
    fVar1 = (__this->fields)._baseRelief;
    offsetTarget = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
              (__this,fVar1 * 1.35,offsetTarget,0.08,9,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181883c60

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float reliefTarget;
  
  (__this->fields)._hovered = false;
  if ((__this->fields)._pressed == false) {
    reliefTarget = (__this->fields)._baseRelief;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
              (__this,reliefTarget,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,0.08,9,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181883b70

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector2_o offsetTarget;
  float reliefTarget;
  
  bVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract(__this,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields)._pressed = true;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,true,(MethodInfo *)0x0);
    reliefTarget = (__this->fields)._baseRelief;
    if ((__this->fields)._hovered != false) {
      reliefTarget = reliefTarget * 1.35;
    }
    offsetTarget = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
              (__this,reliefTarget,offsetTarget,0.045,9,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181883ce0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  bool bVar2;
  UnityEngine_Vector2_o offsetTarget;
  float reliefTarget;
  float fStackX_c;
  
  bVar2 = Il2CppMethodInitialized_184341ec4 == '\0';
  (__this->fields)._pressed = false;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    Il2CppMethodInitialized_184341ec4 = '\x01';
  }
  reliefTarget = (__this->fields)._baseRelief;
  if ((__this->fields)._hovered == false) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UVar1.y = 0.0;
    UVar1.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fStackX_c = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  else {
    UVar1 = (UnityEngine_Vector2_Fields)
            Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset(__this,(MethodInfo *)0x0);
    reliefTarget = reliefTarget * 1.35;
    fStackX_c = UVar1.y;
  }
  offsetTarget.fields.x = UVar1.x;
  offsetTarget.fields.y = fStackX_c;
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
                (__this,reliefTarget,offsetTarget,0.09,0x1b,(MethodInfo *)0x0);
  if (t == (DG_Tweening_Tween_o *)0x0) {
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
    return;
  }
  action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0,
             (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
            ((Il2CppObject *)t,action,
             (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x181883e30

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o offsetTarget;
  float reliefTarget;
  float fStackX_24;
  
  bVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract(__this,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields)._pressed == false)) {
    reliefTarget = (__this->fields)._baseRelief;
    if ((__this->fields)._hovered == false) {
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UVar2.y = 0.0;
      UVar2.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
      fStackX_24 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
    }
    else {
      UVar2 = (UnityEngine_Vector2_Fields)
              Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset(__this,(MethodInfo *)0x0);
      reliefTarget = reliefTarget * 1.35;
      fStackX_24 = UVar2.y;
    }
    offsetTarget.fields.x = UVar2.x;
    offsetTarget.fields.y = fStackX_24;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
              (__this,reliefTarget,offsetTarget,0.08,9,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818838f0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float reliefTarget;
  
  if ((__this->fields)._pressed == false) {
    reliefTarget = (__this->fields)._baseRelief;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
              (__this,reliefTarget,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,0.08,9,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x181883f00

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Press
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188430c: mov rbx, qword ptr [rsp + 0x80]

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  DG_Tweening_Tween_o *pDVar5;
  UnityEngine_Vector2_Fields UVar6;
  DG_Tweening_TweenCallback_o *action;
  float fVar7;
  float reliefEnd;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_184341ebd == '\0') {
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
    Il2CppMethodInitialized_184341ebd = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract(__this,(MethodInfo *)0x0);
  if (bVar1) {
    x = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields)._pressed = true;
        Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,true,(MethodInfo *)0x0);
        pDVar5 = (__this->fields)._tween;
        if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar5,false,(MethodInfo *)0x0);
        }
        reliefEnd = (__this->fields)._baseRelief;
        if ((__this->fields)._hovered != false) {
          reliefEnd = reliefEnd * 1.35;
        }
        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        fVar7 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,(MethodInfo *)0x0);
        UVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,(MethodInfo *)0x0);
        UVar4 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset(__this,(MethodInfo *)0x0);
        pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                           (__this,fVar7,reliefEnd,UVar3,UVar4,0.045,9,(MethodInfo *)0x0);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__Append(pDVar2,pDVar5,(MethodInfo *)0x0);
        fVar7 = (__this->fields)._baseRelief;
        if ((__this->fields)._hovered != false) {
          fVar7 = fVar7 * 1.35;
        }
        UVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset(__this,(MethodInfo *)0x0);
        if ((__this->fields)._hovered == false) {
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UVar6.y = 0.0;
          UVar6.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
          fStackX_1c = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
        }
        else {
          UVar6 = (UnityEngine_Vector2_Fields)
                  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset(__this,(MethodInfo *)0x0);
          fStackX_1c = UVar6.y;
        }
        UVar4.fields.x = UVar6.x;
        UVar4.fields.y = fStackX_1c;
        pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                           (__this,reliefEnd,fVar7,UVar3,UVar4,0.09,0x1b,(MethodInfo *)0x0);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__Append(pDVar2,pDVar5,(MethodInfo *)0x0);
        action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Press_b__20_0,
                   (MethodInfo *)0x0);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar2,action,
                            (MethodInfo_7C92E0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar2,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
        (__this->fields)._tween = (DG_Tweening_Tween_o *)pDVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar2);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, const MethodInfo* method);
// 0x1818834a0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
                     (__this,reliefTarget,offsetTarget,duration,9,(MethodInfo *)0x0);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, int32_t ease, const MethodInfo* method);
// 0x1818834c0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,int32_t ease,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  UnityEngine_RectTransform_o *x_00;
  bool bVar1;
  UnityEngine_Vector2_o offsetStart;
  DG_Tweening_Tween_o *pDVar2;
  float reliefStart;
  
  if (Il2CppMethodInitialized_184341ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tween);
    Il2CppMethodInitialized_184341ebe = '\x01';
  }
  x = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x_00 = (__this->fields)._face;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (!bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pDVar2 = (__this->fields)._tween;
  if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar2,false,(MethodInfo *)0x0);
  }
  reliefStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,(MethodInfo *)0x0);
  offsetStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,(MethodInfo *)0x0);
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                     (__this,reliefStart,reliefTarget,offsetStart,offsetTarget,duration,ease,(MethodInfo *)0x0
                     );
  pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar2,true,
                      (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tween);
  (__this->fields)._tween = pDVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,pDVar2);
  return (__this->fields)._tween;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$AnimateStep
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefStart, float reliefEnd, UnityEngine_Vector2_o offsetStart, UnityEngine_Vector2_o offsetEnd, float duration, int32_t ease, const MethodInfo* method);
// 0x181883340

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefStart,float reliefEnd,
          UnityEngine_Vector2_o offsetStart,UnityEngine_Vector2_o offsetEnd,float duration,int32_t ease,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *object;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar1;
  float fStack_44;
  
  if (Il2CppMethodInitialized_184341ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0_AnimateStep_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0);
    Il2CppMethodInitialized_184341ebf = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    fStack_44 = offsetStart.fields.y;
    (object->fields).offsetStart.fields.y = fStack_44;
    (object->fields).offsetEnd.fields.x = offsetEnd.fields.x;
    (object->fields).offsetEnd.fields.y = offsetEnd.fields.y;
    (object->fields).reliefStart = reliefStart;
    (object->fields).reliefEnd = reliefEnd;
    (object->fields).offsetStart.fields.x = offsetStart.fields.x;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
    DG_Tweening_TweenCallback_float____ctor
              ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0_AnimateStep_b__0
               ,(MethodInfo_E5A750 *)0x0);
    pDVar1 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar1,ease,
                        (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    return (DG_Tweening_Tween_o *)pDVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CurrentRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x1818836f0

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184341ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec0 = '\x01';
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
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      fVar3 = UnityEngine_Material__GetFloat_2ee2100
                        (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                ReliefId,(MethodInfo *)0x0);
      return fVar3;
    }
    ThrowNullReferenceException();
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetRelief
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float value, const MethodInfo* method);
// 0x181884570

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_184341ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec1 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((__this->fields)._ownsMaterial == false) {
      pUVar2 = (__this->fields)._image;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar1 = (__this->fields)._material;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor_2ee55e0(__this_00,pUVar1,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_1818846df;
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_00,0x34,(MethodInfo *)0x0);
        (__this->fields)._material = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._material,__this_00);
        pUVar2 = (__this->fields)._image;
        if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_1818846df;
        (*(pUVar2->klass->vtable)._33_set_material.methodPtr)
                  (pUVar2,(__this->fields)._material,(pUVar2->klass->vtable)._33_set_material.method);
        (__this->fields)._ownsMaterial = true;
      }
    }
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar1 == (UnityEngine_Material_o *)0x0) {
label_1818846df:
      ThrowNullReferenceException();
    }
    UnityEngine_Material__SetFloat_2ee3980
              (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
               value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$FaceOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x1818837b0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (Il2CppMethodInitialized_184341ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec2 = '\x01';
  }
  pUVar1 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._face;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector2_o)UVar3.fields;
    }
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  return (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$HoverOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181883860

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.x;
  fVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields.y;
  fVar4 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,(MethodInfo *)0x0);
  UVar3.y = fVar2 * fVar4 * 0.5;
  UVar3.x = fVar1 * fVar4 * 0.5;
  return (UnityEngine_Vector2_o)UVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$PressOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181883f10

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_Fields UVar3;
  bool bVar4;
  UnityEngine_Rect_o *pUVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184341ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341ec3 = '\x01';
  }
  pUVar2 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._face;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_RectTransform__get_rect(local_38,pUVar2,(MethodInfo *)0x0);
    fVar7 = (pUVar5->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else {
    fVar7 = 0.0;
  }
  if (Il2CppMethodInitialized_184341f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f38 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->downVector).fields;
  fVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,(MethodInfo *)0x0);
  fVar7 = fVar7 * (__this->fields)._pressDepth;
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  UVar3.y = UVar1.y * fVar6;
  UVar3.x = UVar1.x * fVar6;
  return (UnityEngine_Vector2_o)UVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884370

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
// 0x181884320

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if ((__this->fields)._hovered != false) {
    UVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset(__this,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  return (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Release
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884390

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Vector2_o offsetTarget;
  float reliefTarget;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184341ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    Il2CppMethodInitialized_184341ec4 = '\x01';
  }
  reliefTarget = (__this->fields)._baseRelief;
  if ((__this->fields)._hovered == false) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UVar1.y = 0.0;
    UVar1.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fStackX_c = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  else {
    UVar1 = (UnityEngine_Vector2_Fields)
            Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset(__this,(MethodInfo *)0x0);
    reliefTarget = reliefTarget * 1.35;
    fStackX_c = UVar1.y;
  }
  offsetTarget.fields.x = UVar1.x;
  offsetTarget.fields.y = fStackX_c;
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_18834c0
                (__this,reliefTarget,offsetTarget,0.09,0x1b,(MethodInfo *)0x0);
  if (t == (DG_Tweening_Tween_o *)0x0) {
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
    return;
  }
  action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0,
             (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
            ((Il2CppObject *)t,action,
             (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ShadowSize
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884840

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184341ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec5 = '\x01';
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
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      fVar3 = UnityEngine_Material__GetFloat_2ee2100
                        (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                ReliefShadowSizeId,(MethodInfo *)0x0);
      fVar4 = 1.0;
      if (1.0 <= fVar3) {
        fVar4 = fVar3;
      }
      return fVar4;
    }
    ThrowNullReferenceException();
  }
  return 4.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetPressMask
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, bool enabled, const MethodInfo* method);
// 0x1818844e0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec6 = '\x01';
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
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CanInteract
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181883660

bool Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec7 = '\x01';
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
  if (pUVar1 != (UnityEngine_UI_Selectable_o *)0x0) {
    bVar2 = (*(pUVar1->klass->vtable)._24_IsInteractable.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._24_IsInteractable.method);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ResetPressVisual
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181883a10

void
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, MethodInfo* method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184341ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec8 = '\x01';
  }
  t = (__this->fields)._tween;
  (__this->fields)._hovered = false;
  (__this->fields)._pressed = false;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,(void *)0x0);
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._face;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_181883b6a;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar1,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  if ((__this->fields)._ownsMaterial != false) {
    pUVar2 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._material;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar2 == (UnityEngine_Material_o *)0x0) {
label_181883b6a:
        ThrowNullReferenceException();
      }
      UnityEngine_Material__SetFloat_2ee3980
                (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
                 (__this->fields)._baseRelief,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181883a10

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184341ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec8 = '\x01';
  }
  t = (__this->fields)._tween;
  (__this->fields)._hovered = false;
  (__this->fields)._pressed = false;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,(void *)0x0);
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._face;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._face;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_181883b6a;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar1,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  if ((__this->fields)._ownsMaterial != false) {
    pUVar2 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._material;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar2 == (UnityEngine_Material_o *)0x0) {
label_181883b6a:
        ThrowNullReferenceException();
      }
      UnityEngine_Material__SetFloat_2ee3980
                (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
                 (__this->fields)._baseRelief,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181883970

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ec9 = '\x01';
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
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884930

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  (__this->fields)._pressDepth = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Press>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884910

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  (__this->fields)._pressed = false;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Release>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x181884920

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask(__this,false,(MethodInfo *)0x0);
  return;
}


