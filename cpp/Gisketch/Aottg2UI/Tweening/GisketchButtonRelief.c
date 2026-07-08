// Type: Gisketch.Aottg2UI.Tweening.GisketchButtonRelief
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchButtonRelief.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x3ac5d90

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_<>c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$<AnimateStep>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x3ac6360

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_<>c__DisplayClass23_0__<AnimateStep>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *pGVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_o value_00;
  bool_conflict bVar5;
  float fVar6;
  float fVar7;
  
  if (DAT_05701304 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701304 = '\x01';
  }
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
    fVar6 = (__this->fields).reliefStart;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
              (pGVar3,((__this->fields).reliefEnd - fVar6) * value + fVar6,method);
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      pUVar4 = (pGVar3->fields)._face;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Setup
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_RectTransform_o* face, float relief, UnityEngine_UI_RectMask2D_o* pressMask, System_Nullable_float__o pressDepth, const MethodInfo* method);
// 0x3ac47e0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_UI_Image_o *image,UnityEngine_RectTransform_o *face,float relief,
               UnityEngine_UI_RectMask2D_o *pressMask,System_Nullable_float__o pressDepth,
               MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o **ppUVar1;
  UnityEngine_UI_RectMask2D_o *x;
  bool_conflict bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_UI_Selectable_o *pUVar4;
  float fVar5;
  System_Nullable_float__Fields local_38;
  
  local_38 = pressDepth.fields;
  if (DAT_057012f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_init_method_metadata(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012f6 = '\x01';
  }
  (__this->fields)._image = image;
  il2cpp_runtime_glue(&(__this->fields)._image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_Material_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto LAB_03ac4977;
    pUVar3 = (UnityEngine_Material_o *)
             (*(image->klass->vtable)._32_get_material.methodPtr)
                       (image,(image->klass->vtable)._32_get_material.method);
  }
  (__this->fields)._material = pUVar3;
  il2cpp_runtime_glue(&(__this->fields)._material,pUVar3);
  (__this->fields)._face = face;
  il2cpp_runtime_glue(&(__this->fields)._face,face);
  ppUVar1 = &(__this->fields)._pressMask;
  (__this->fields)._pressMask = pressMask;
  il2cpp_runtime_glue(ppUVar1,pressMask);
  pUVar4 = (UnityEngine_UI_Selectable_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
  (__this->fields)._selectable = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._selectable,pUVar4);
  (__this->fields)._baseRelief = relief;
  fVar5 = System_Nullable<float>__GetValueOrDefault
                    ((System_Nullable_float__o)&local_38,0.1,MethodInfo_Single_GetValueOrDefault);
  (__this->fields)._pressDepth = fVar5;
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  x = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_RectMask2D_o *)0x0) {
LAB_03ac4977:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ac4a00

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_UI_Selectable_c *pUVar4;
  UnityEngine_Vector2_o offsetTarget;
  char cVar5;
  bool_conflict bVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar7;
  float fStack_28;
  float fStack_24;
  
  if (DAT_05701301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701301 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = pUVar3->klass;
    method_01 = (pUVar4->vtable)._24_IsInteractable.method;
    cVar5 = (*(pUVar4->vtable)._24_IsInteractable.methodPtr)();
    if (cVar5 == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 1) = 1;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  fVar1 = (__this->fields)._baseRelief;
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar7 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
  fStack_28 = (float)uVar2;
  fStack_24 = (float)((ulong)uVar2 >> 0x20);
  offsetTarget.fields.y = fStack_24 * fVar7 * 0.5;
  offsetTarget.fields.x = fStack_28 * fVar7 * 0.5;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
            (__this,fVar1 * 1.35,offsetTarget,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ac4c20

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float reliefTarget;
  MethodInfo *extraout_RDX;
  
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 1) = 0;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
            (__this,reliefTarget,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),0.08,9,
             method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ac4ca0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_UI_RectMask2D_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector2_o offsetTarget;
  char cVar6;
  bool_conflict bVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  float local_3c;
  float local_38;
  float fStack_34;
  
  if (DAT_05701301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701301 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03ac4eb4;
    cVar6 = (*(pUVar3->klass->vtable)._24_IsInteractable.methodPtr)();
    if (cVar6 == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 1;
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar4 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar4 = (__this->fields)._pressMask;
    if (pUVar4 == (UnityEngine_UI_RectMask2D_o *)0x0) goto LAB_03ac4eb4;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,1,(MethodInfo *)0x0);
  }
  local_3c = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    if (DAT_057012fd == '\0') goto LAB_03ac4e79;
LAB_03ac4d9c:
    pUVar5 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    local_3c = local_3c * 1.35;
    if (DAT_057012fd != '\0') goto LAB_03ac4d9c;
LAB_03ac4e79:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fd = '\x01';
    pUVar5 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar9 = 0.0;
  if ((char)bVar7 != '\0') {
    pUVar5 = (__this->fields)._face;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
LAB_03ac4eb4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_01 = (MethodInfo *)0x0;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    fVar9 = UVar10.fields.m_Height;
  }
  if (DAT_05701370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701370 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  fVar8 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
  fVar9 = fVar9 * (__this->fields)._pressDepth;
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  local_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  offsetTarget.fields.y = fStack_34 * fVar8;
  offsetTarget.fields.x = local_38 * fVar8;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
            (__this,local_3c,offsetTarget,0.045,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3ac5110

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  bool_conflict bVar3;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float reliefTarget;
  UnityEngine_Vector2_Fields offsetTarget;
  float fStack_28;
  float fStack_24;
  
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 0;
  if (DAT_057012fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Release_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    DAT_057012fe = '\x01';
    bVar5 = *(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0';
    reliefTarget = (__this->fields)._baseRelief;
    method = extraout_RDX_00;
    bVar4 = bVar5;
    if (!bVar5) goto LAB_03ac51eb;
LAB_03ac5146:
    if (bVar4) {
LAB_03ac51f9:
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
        method = extraout_RDX_01;
      }
      offsetTarget = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      goto LAB_03ac5236;
    }
  }
  else {
    reliefTarget = (__this->fields)._baseRelief;
    bVar5 = false;
    bVar4 = true;
    if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') goto LAB_03ac5146;
LAB_03ac51eb:
    reliefTarget = reliefTarget * 1.35;
    if (bVar5) goto LAB_03ac51f9;
  }
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                    (__this,(MethodInfo *)eventData);
  fStack_28 = (float)uVar1;
  fStack_24 = (float)((ulong)uVar1 >> 0x20);
  offsetTarget.x = fVar6 * fStack_28 * 0.5;
  offsetTarget.y = fVar6 * fStack_24 * 0.5;
  method = extraout_RDX;
LAB_03ac5236:
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
                (__this,reliefTarget,(UnityEngine_Vector2_o)offsetTarget,0.09,0x1b,method);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
    return;
  }
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar2 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (__this->fields)._pressMask;
    if (pUVar2 != (UnityEngine_UI_RectMask2D_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3ac5310

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_Selectable_o *pUVar2;
  UnityEngine_UI_Selectable_c *pUVar3;
  char cVar4;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float reliefTarget;
  float fVar6;
  UnityEngine_Vector2_Fields offsetTarget;
  float fStack_28;
  float fStack_24;
  
  if (DAT_05701301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701301 = '\x01';
  }
  pUVar2 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar5 == '\0') {
    pUVar2 = (__this->fields)._selectable;
    if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = pUVar2->klass;
    method_01 = (pUVar3->vtable)._24_IsInteractable.method;
    cVar4 = (*(pUVar3->vtable)._24_IsInteractable.methodPtr)();
    method_00 = extraout_RDX_00;
    if (cVar4 == '\0') {
      return;
    }
  }
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
      method_00 = extraout_RDX_02;
    }
    offsetTarget = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    reliefTarget = reliefTarget * 1.35;
    if (DAT_0570048d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570048d = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
    fStack_28 = (float)uVar1;
    fStack_24 = (float)((ulong)uVar1 >> 0x20);
    offsetTarget.x = fVar6 * fStack_28 * 0.5;
    offsetTarget.y = fVar6 * fStack_24 * 0.5;
    method_00 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
            (__this,reliefTarget,(UnityEngine_Vector2_o)offsetTarget,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3ac5510

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float reliefTarget;
  MethodInfo *extraout_RDX;
  
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
            (__this,reliefTarget,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),0.08,9,
             method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3ac5580

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press(__this,method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Press
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5590

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_Object_o *x;
  UnityEngine_UI_RectMask2D_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  char cVar7;
  bool_conflict bVar8;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_Tween_o *pDVar10;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *pIVar11;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar12;
  float reliefEnd;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_o offsetEnd;
  UnityEngine_Vector2_Fields offsetEnd_00;
  UnityEngine_Rect_o UVar16;
  float local_60;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (DAT_057012f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Void__Press_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_057012f7 = '\x01';
  }
  if (DAT_05701301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701301 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03ac5afb;
    cVar7 = (*(pUVar3->klass->vtable)._24_IsInteractable.methodPtr)();
    if (cVar7 == '\0') {
      return;
    }
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
    bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 == '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 1;
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar4 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar4 = (__this->fields)._pressMask;
    if (pUVar4 == (UnityEngine_UI_RectMask2D_o *)0x0) goto LAB_03ac5afb;
    pMVar12 = (MethodInfo *)0x1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,1,(MethodInfo *)0x0);
  }
  pDVar10 = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  reliefEnd = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) != '\0') {
    reliefEnd = reliefEnd * 1.35;
  }
  if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  fVar13 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,pMVar12);
  UVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,pMVar12);
  if (DAT_057012fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fd = '\x01';
  }
  pUVar5 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar15 = 0.0;
  if ((char)bVar8 != '\0') {
    pUVar5 = (__this->fields)._face;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03ac5afb;
    pMVar12 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    fVar15 = UVar16.fields.m_Height;
  }
  if (DAT_05701370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701370 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  fVar14 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar12);
  fVar15 = fVar15 * (__this->fields)._pressDepth;
  if (fVar14 <= fVar15) {
    fVar14 = fVar15;
  }
  local_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  offsetEnd.fields.x = local_38 * fVar14;
  offsetEnd.fields.y = fStack_34 * fVar14;
  pDVar10 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                      (__this,fVar13,reliefEnd,UVar6,offsetEnd,0.045,9,method_00);
  pDVar9 = DG_Tweening_TweenSettingsExtensions__Append(pDVar9,pDVar10,(MethodInfo *)0x0);
  local_60 = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    if (DAT_057012fd != '\0') goto LAB_03ac58ad;
LAB_03ac59f1:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fd = '\x01';
    pUVar5 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    local_60 = local_60 * 1.35;
    if (DAT_057012fd == '\0') goto LAB_03ac59f1;
LAB_03ac58ad:
    pUVar5 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar13 = 0.0;
  if ((char)bVar8 != '\0') {
    pUVar5 = (__this->fields)._face;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
LAB_03ac5afb:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar12 = (MethodInfo *)0x0;
    UVar16 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    fVar13 = UVar16.fields.m_Height;
  }
  if (DAT_05701370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701370 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  fVar15 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar12);
  fVar13 = fVar13 * (__this->fields)._pressDepth;
  if (fVar15 <= fVar13) {
    fVar15 = fVar13;
  }
  local_48 = (float)uVar1;
  fStack_44 = (float)((ulong)uVar1 >> 0x20);
  fVar13 = fVar15 * local_48;
  fVar15 = fVar15 * fStack_44;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    pMVar12 = extraout_RDX;
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
      pMVar12 = extraout_RDX_01;
    }
    offsetEnd_00 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    if (DAT_0570048d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570048d = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar14 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar12);
    local_48 = (float)uVar1;
    fStack_44 = (float)((ulong)uVar1 >> 0x20);
    offsetEnd_00.x = fVar14 * local_48 * 0.5;
    offsetEnd_00.y = fVar14 * fStack_44 * 0.5;
    pMVar12 = extraout_RDX_00;
  }
  UVar6.fields.y = fVar15;
  UVar6.fields.x = fVar13;
  pDVar10 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                      (__this,reliefEnd,local_60,UVar6,(UnityEngine_Vector2_o)offsetEnd_00,0.09,0x1b
                       ,pMVar12);
  pDVar9 = DG_Tweening_TweenSettingsExtensions__Append(pDVar9,pDVar10,(MethodInfo *)0x0);
  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
  DG_Tweening_TweenCallback___ctor();
  pIVar11 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                      ((Il2CppObject *)pDVar9,action,MethodInfo_Sequence_OnComplete_Sequence);
  pIVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar11,1,MethodInfo_Sequence_SetUpdate_Sequence);
  *(Il2CppObject **)&(__this->fields)._pressed = pIVar11;
  il2cpp_runtime_glue(&(__this->fields)._pressed,pIVar11);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, const MethodInfo* method);
// 0x3ac4c10

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *in_RDX;
  
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
                     (__this,reliefTarget,offsetTarget,duration,9,in_RDX);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, int32_t ease, const MethodInfo* method);
// 0x3ac4fb0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,int32_t ease,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *x_00;
  bool_conflict bVar1;
  DG_Tweening_Tween_o *pDVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float reliefStart;
  UnityEngine_Vector2_o offsetStart;
  
  if (DAT_057012f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Tween_SetUpdate_Tween);
    DAT_057012f8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    x_00 = (__this->fields)._face;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pDVar2 = (DG_Tweening_Tween_o *)0x0;
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pDVar2 = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
    if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      DG_Tweening_TweenExtensions__Kill(pDVar2,0,(MethodInfo *)0x0);
    }
    reliefStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,method_01);
    offsetStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,method_01);
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                       (__this,reliefStart,reliefTarget,offsetStart,offsetTarget,duration,ease,
                        method_00);
    pIVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                       ((Il2CppObject *)pDVar2,1,MethodInfo_Tween_SetUpdate_Tween);
    *(Il2CppObject **)&(__this->fields)._pressed = pIVar3;
    il2cpp_runtime_glue(&(__this->fields)._pressed,pIVar3);
    pDVar2 = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  }
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$AnimateStep
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefStart, float reliefEnd, UnityEngine_Vector2_o offsetStart, UnityEngine_Vector2_o offsetEnd, float duration, int32_t ease, const MethodInfo* method);
// 0x3ac5c60

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefStart,
          float reliefEnd,UnityEngine_Vector2_o offsetStart,UnityEngine_Vector2_o offsetEnd,
          float duration,int32_t ease,MethodInfo *method)

{
  Il2CppObject *__this_00;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar1;
  float local_38;
  float fStack_34;
  
  if (DAT_057012f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__AnimateStep_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass23_0);
    DAT_057012f9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass23_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    *(float *)&__this_00[1].monitor = reliefStart;
    *(float *)((long)&__this_00[1].monitor + 4) = reliefEnd;
    local_38 = offsetStart.fields.x;
    fStack_34 = offsetStart.fields.y;
    *(float *)&__this_00[2].klass = local_38;
    *(float *)((long)&__this_00[2].klass + 4) = fStack_34;
    *(float *)&__this_00[2].monitor = offsetEnd.fields.x;
    *(float *)((long)&__this_00[2].monitor + 4) = offsetEnd.fields.y;
    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
    DG_Tweening_TweenCallback<float>___ctor();
    t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
    pDVar1 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase<object>
                       ((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CurrentRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5b00

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar1;
  float fVar2;
  
  if (DAT_057012fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fa = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._material;
    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      fVar2 = UnityEngine_Material__GetFloat
                        (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),
                         (MethodInfo *)0x0);
      return fVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetRelief
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float value, const MethodInfo* method);
// 0x3ac5da0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_Object_o *pUVar5;
  
  if (DAT_057012fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fb = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  ppUVar1 = &(__this->fields)._material;
  if ((char)(__this->fields)._ownsMaterial == '\0') {
    pUVar2 = (__this->fields)._image;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar3 = *ppUVar1;
      pUVar5 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar5,pUVar3,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Object_o *)0x0) goto LAB_03ac5f0c;
      UnityEngine_Object__set_hideFlags(pUVar5,0x34,(MethodInfo *)0x0);
      (__this->fields)._material = (UnityEngine_Material_o *)pUVar5;
      il2cpp_runtime_glue(ppUVar1,pUVar5);
      pUVar2 = (__this->fields)._image;
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03ac5f0c;
      (*(pUVar2->klass->vtable)._33_set_material.methodPtr)
                (pUVar2,(__this->fields)._material,(pUVar2->klass->vtable)._33_set_material.method);
      *(undefined1 *)&(__this->fields)._ownsMaterial = 1;
    }
  }
  pUVar3 = *ppUVar1;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (pUVar3,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),value,(MethodInfo *)0x0);
    return;
  }
LAB_03ac5f0c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$FaceOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5bb0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (DAT_057012fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fc = '\x01';
  }
  pUVar1 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._face;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector2_o)UVar3.fields;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  return (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$HoverOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac4bb0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
  local_18 = (float)uVar1;
  fStack_14 = (float)((ulong)uVar1 >> 0x20);
  UVar2.fields.y = fVar3 * fStack_14 * 0.5;
  UVar2.fields.x = fVar3 * local_18 * 0.5;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$PressOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac4ee0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  float fStack_38;
  float fStack_34;
  
  if (DAT_057012fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012fd = '\x01';
  }
  pUVar2 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar6 = 0.0;
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields)._face;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (MethodInfo *)0x0;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar6 = UVar7.fields.m_Height;
  }
  if (DAT_05701370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05701370 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_00);
  fVar6 = fVar6 * (__this->fields)._pressDepth;
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  fStack_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  UVar3.fields.y = fVar5 * fStack_34;
  UVar3.fields.x = fVar5 * fStack_38;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac4ec0

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseRelief
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) != '\0') {
    fVar1 = fVar1 * 1.35;
  }
  return fVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5470

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) != '\0') {
    if (DAT_0570048d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570048d = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
    local_18 = (float)uVar1;
    fStack_14 = (float)((ulong)uVar1 >> 0x20);
    UVar2.fields.y = fVar3 * fStack_14 * 0.5;
    UVar2.fields.x = fVar3 * local_18 * 0.5;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  return (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Release
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5120

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  bool_conflict bVar3;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float reliefTarget;
  UnityEngine_Vector2_Fields offsetTarget;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057012fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Release_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    DAT_057012fe = '\x01';
    bVar5 = *(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0';
    reliefTarget = (__this->fields)._baseRelief;
    in_RDX = extraout_RDX_00;
    bVar4 = bVar5;
    if (!bVar5) goto LAB_03ac51eb;
LAB_03ac5146:
    if (bVar4) {
LAB_03ac51f9:
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
        in_RDX = extraout_RDX_01;
      }
      offsetTarget = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      goto LAB_03ac5236;
    }
  }
  else {
    reliefTarget = (__this->fields)._baseRelief;
    bVar5 = false;
    bVar4 = true;
    if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') goto LAB_03ac5146;
LAB_03ac51eb:
    reliefTarget = reliefTarget * 1.35;
    if (bVar5) goto LAB_03ac51f9;
  }
  if (DAT_0570048d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570048d = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
  fStack_28 = (float)uVar1;
  fStack_24 = (float)((ulong)uVar1 >> 0x20);
  offsetTarget.x = fVar6 * fStack_28 * 0.5;
  offsetTarget.y = fVar6 * fStack_24 * 0.5;
  in_RDX = extraout_RDX;
LAB_03ac5236:
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
                (__this,reliefTarget,(UnityEngine_Vector2_o)offsetTarget,0.09,0x1b,in_RDX);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
    return;
  }
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar2 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (__this->fields)._pressMask;
    if (pUVar2 != (UnityEngine_UI_RectMask2D_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ShadowSize
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5f20

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_057012ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012ff = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._material;
    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      fVar2 = UnityEngine_Material__GetFloat
                        (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x34),
                         (MethodInfo *)0x0);
      fVar3 = 1.0;
      if (1.0 <= fVar2) {
        fVar3 = fVar2;
      }
      return fVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 4.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetPressMask
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, bool enabled, const MethodInfo* method);
// 0x3ac4980

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,bool_conflict enabled,
               MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 != (UnityEngine_UI_RectMask2D_o *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar1,enabled & 0xff,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CanInteract
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac4b20

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05701301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701301 = '\x01';
  }
  pUVar1 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
  }
  pUVar1 = (__this->fields)._selectable;
  if (pUVar1 != (UnityEngine_UI_Selectable_o *)0x0) {
    bVar2 = (*(pUVar1->klass->vtable)._24_IsInteractable.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._24_IsInteractable.method);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ResetPressVisual
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac5fe0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  DG_Tweening_Tween_o *t;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar4;
  
  if (DAT_05701302 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701302 = '\x01';
  }
  *(undefined2 *)((long)&(__this->fields)._ownsMaterial + 1) = 0;
  pbVar1 = &(__this->fields)._pressed;
  t = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *(undefined8 *)pbVar1 = 0;
  il2cpp_runtime_glue(pbVar1);
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar2 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields)._pressMask;
    if (pUVar2 == (UnityEngine_UI_RectMask2D_o *)0x0) goto LAB_03ac6190;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (__this->fields)._face;
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03ac6190;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar3,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
  }
  if ((char)(__this->fields)._ownsMaterial != '\0') {
    x = (UnityEngine_Object_o *)(__this->fields)._material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = (__this->fields)._material;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat
                  (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),
                   (__this->fields)._baseRelief,(MethodInfo *)0x0);
        return;
      }
LAB_03ac6190:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac61a0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  DG_Tweening_Tween_o *t;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar4;
  
  if (DAT_05701302 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701302 = '\x01';
  }
  *(undefined2 *)((long)&(__this->fields)._ownsMaterial + 1) = 0;
  pbVar1 = &(__this->fields)._pressed;
  t = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *(undefined8 *)pbVar1 = 0;
  il2cpp_runtime_glue(pbVar1);
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar2 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields)._pressMask;
    if (pUVar2 == (UnityEngine_UI_RectMask2D_o *)0x0) goto LAB_03ac6190;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (__this->fields)._face;
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03ac6190;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar3,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
  }
  if ((char)(__this->fields)._ownsMaterial != '\0') {
    x = (UnityEngine_Object_o *)(__this->fields)._material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = (__this->fields)._material;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat
                  (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),
                   (__this->fields)._baseRelief,(MethodInfo *)0x0);
        return;
      }
LAB_03ac6190:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac61b0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05701303 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701303 = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  if ((char)(__this->fields)._ownsMaterial != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac6250

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  (__this->fields)._pressDepth = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Press>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac6260

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__<Press>b__20_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool_conflict bVar2;
  
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 0;
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 != (UnityEngine_UI_RectMask2D_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Release>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3ac62e0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__<Release>b__31_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05701300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701300 = '\x01';
  }
  pUVar1 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._pressMask;
    if (pUVar1 != (UnityEngine_UI_RectMask2D_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


