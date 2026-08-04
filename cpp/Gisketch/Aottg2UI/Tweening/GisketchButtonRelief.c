// Type: Gisketch.Aottg2UI.Tweening.GisketchButtonRelief
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchButtonRelief.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x3b2ef90

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$<AnimateStep>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x3b2f560

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0___AnimateStep_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___c__DisplayClass23_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  int iVar3;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *pGVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  MethodInfo *method_00;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_01;
  float fVar6;
  float fVar7;
  
  if (g_data_057a9c1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c1c = '\x01';
  }
  __this_01 = (__this->fields).__4__this;
  if (__this_01 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
    fVar6 = (__this->fields).reliefStart;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
              (__this_01,((__this->fields).reliefEnd - fVar6) * value + fVar6,method);
    pGVar4 = (__this->fields).__4__this;
    if (pGVar4 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)(pGVar4->fields)._face;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      pGVar4 = (__this->fields).__4__this;
      if (pGVar4 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
        __this_00 = (pGVar4->fields)._face;
        __this_01 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          UVar1 = (__this->fields).offsetStart.fields;
          UVar2 = (__this->fields).offsetEnd.fields;
          fVar6 = UVar1.x;
          fVar7 = UVar1.y;
          value_00.fields.y = value * (UVar2.y - fVar7) + fVar7;
          value_00.fields.x = value * (UVar2.x - fVar6) + fVar6;
          UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057a9c1d = '\x01';
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    method_00 = extraout_RDX_00;
  }
  else {
    iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    method_00 = extraout_RDX;
  }
  if (iVar3 != 0) {
    Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
              ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_01,1,method_00);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
            ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_01,1,method_01);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Setup
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_UI_Image_o* image, UnityEngine_RectTransform_o* face, float relief, UnityEngine_UI_RectMask2D_o* pressMask, System_Nullable_float__o pressDepth, const MethodInfo* method);
// 0x3b2d9e0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,UnityEngine_UI_Image_o *image,
               UnityEngine_RectTransform_o *face,float relief,UnityEngine_UI_RectMask2D_o *pressMask,
               System_Nullable_float__o pressDepth,MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o **ppUVar1;
  undefined8 uVar2;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Selectable_o *x_01;
  UnityEngine_Vector2_o offsetTarget;
  char cVar3;
  bool_conflict bVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  MethodInfo *method_00;
  uint uVar7;
  MethodInfo *pMVar8;
  UnityEngine_UI_Image_o *pUVar9;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_00;
  float fVar10;
  float fVar11;
  float local_88;
  float fStack_84;
  System_Nullable_float__Fields local_38;
  
  local_38 = pressDepth.fields;
  if (g_data_057a9c0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c0e = '\x01';
  }
  (__this->fields)._image = image;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Material_o *)0x0;
  uVar7 = 0;
  pUVar9 = image;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b2db77;
    pUVar5 = (UnityEngine_Material_o *)
             (*(image->klass->vtable)._32_get_material.methodPtr)
                       (image,(image->klass->vtable)._32_get_material.method);
  }
  (__this->fields)._material = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._material,pUVar5);
  (__this->fields)._face = face;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._face,face);
  ppUVar1 = &(__this->fields)._pressMask;
  (__this->fields)._pressMask = pressMask;
  il2cpp_runtime_helper_022b4080(ppUVar1,pressMask);
  pUVar6 = (UnityEngine_UI_Selectable_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
  (__this->fields)._selectable = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._selectable,pUVar6);
  (__this->fields)._baseRelief = relief;
  fVar10 = System_Nullable_float___GetValueOrDefault_37ebc40
                     ((System_Nullable_float__o)&local_38,0.1,MethodInfo_Single_GetValueOrDefault);
  (__this->fields)._pressDepth = fVar10;
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  x = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar7 = 0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar9 = (UnityEngine_UI_Image_o *)0x0;
  if (*ppUVar1 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
    return;
  }
label_03b2db77:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  x_00 = *(UnityEngine_Object_o **)&(pUVar9->fields).m_SkipLayoutUpdate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  __this_00 = *(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o **)&(pUVar9->fields).m_SkipLayoutUpdate;
  if (__this_00 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,uVar7 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar6 = (__this_00->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar6 = (__this_00->fields)._selectable;
    if (pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c19 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c19 = '\x01';
      }
      x_01 = (pUVar6->fields).m_Navigation.fields.m_SelectOnLeft;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar8 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pUVar6 = (pUVar6->fields).m_Navigation.fields.m_SelectOnLeft;
        if (pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a8dd2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a8dd2 = '\x01';
          }
          Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                    ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar6,pMVar8);
          return;
        }
        (*(pUVar6->klass->vtable)._24_IsInteractable.methodPtr)
                  (pUVar6,(pUVar6->klass->vtable)._24_IsInteractable.method);
        return;
      }
      return;
    }
    pMVar8 = (pUVar6->klass->vtable)._24_IsInteractable.method;
    cVar3 = (*(pUVar6->klass->vtable)._24_IsInteractable.methodPtr)();
    if (cVar3 == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)&(__this_00->fields)._ownsMaterial + 1) = 1;
  if (*(char *)((long)&(__this_00->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  fVar10 = (__this_00->fields)._baseRelief;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar11 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this_00,pMVar8);
  local_88 = (float)uVar2;
  fStack_84 = (float)((ulong)uVar2 >> 0x20);
  offsetTarget.fields.y = fStack_84 * fVar11 * 0.5;
  offsetTarget.fields.x = local_88 * fVar11 * 0.5;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            (__this_00,fVar10 * 1.35,offsetTarget,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2dc00

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerEnter
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_UI_Selectable_o *x;
  UnityEngine_Vector2_o offsetTarget;
  char cVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  float fVar7;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar6 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar6 = (__this->fields)._selectable;
    if (pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c19 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c19 = '\x01';
      }
      x = (pUVar6->fields).m_Navigation.fields.m_SelectOnLeft;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar5 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pUVar6 = (pUVar6->fields).m_Navigation.fields.m_SelectOnLeft;
        if (pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a8dd2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a8dd2 = '\x01';
          }
          Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                    ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar6,pMVar5);
          return;
        }
        (*(pUVar6->klass->vtable)._24_IsInteractable.methodPtr)
                  (pUVar6,(pUVar6->klass->vtable)._24_IsInteractable.method);
        return;
      }
      return;
    }
    pMVar5 = (pUVar6->klass->vtable)._24_IsInteractable.method;
    cVar3 = (*(pUVar6->klass->vtable)._24_IsInteractable.methodPtr)();
    if (cVar3 == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 1) = 1;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  fVar1 = (__this->fields)._baseRelief;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar7 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar5);
  fStack_28 = (float)uVar2;
  fStack_24 = (float)((ulong)uVar2 >> 0x20);
  offsetTarget.fields.y = fStack_24 * fVar7 * 0.5;
  offsetTarget.fields.x = fStack_28 * fVar7 * 0.5;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            (__this,fVar1 * 1.35,offsetTarget,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerExit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2de20

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
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            (__this,reliefTarget,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
             ,0.08,9,method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerDown (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2dea0

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
  
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b2e0b4;
    cVar6 = (*(pUVar3->klass->vtable)._24_IsInteractable.methodPtr)();
    if (cVar6 == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 1;
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar4 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar4 = (__this->fields)._pressMask;
    if (pUVar4 == (UnityEngine_UI_RectMask2D_o *)0x0) goto label_03b2e0b4;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,1,(MethodInfo *)0x0);
  }
  local_3c = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    if (g_data_057a9c15 == '\0') goto label_03b2e079;
label_03b2df9c:
    pUVar5 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    local_3c = local_3c * 1.35;
    if (g_data_057a9c15 != '\0') goto label_03b2df9c;
label_03b2e079:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c15 = '\x01';
    pUVar5 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar9 = 0.0;
  if ((char)bVar7 != '\0') {
    pUVar5 = (__this->fields)._face;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
label_03b2e0b4:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    method_01 = (MethodInfo *)0x0;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    fVar9 = UVar10.fields.m_Height;
  }
  if (g_data_057a9c89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c89 = '\x01';
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
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            (__this,local_3c,offsetTarget,0.045,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2e310

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnPointerUp
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  char cVar2;
  bool_conflict bVar3;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_RectMask2D_o *pUVar4;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_00;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields offsetTarget;
  UnityEngine_Vector2_Fields offsetTarget_00;
  float fStack_60;
  float fStack_5c;
  float fStack_28;
  float fStack_24;
  
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 0;
  if (g_data_057a9c16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Release_b__31_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    g_data_057a9c16 = '\x01';
    cVar2 = *(char *)((long)&(__this->fields)._ownsMaterial + 1);
    fVar6 = (__this->fields)._baseRelief;
    method = extraout_RDX_00;
  }
  else {
    cVar2 = *(char *)((long)&(__this->fields)._ownsMaterial + 1);
    fVar6 = (__this->fields)._baseRelief;
  }
  if (cVar2 == '\0') {
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
      method = extraout_RDX_01;
    }
    offsetTarget = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    fVar6 = fVar6 * 1.35;
    if (g_data_057a8dd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a8dd2 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,(MethodInfo *)eventData);
    fStack_28 = (float)uVar1;
    fStack_24 = (float)((ulong)uVar1 >> 0x20);
    offsetTarget.x = fVar5 * fStack_28 * 0.5;
    offsetTarget.y = fVar5 * fStack_24 * 0.5;
    method = extraout_RDX;
  }
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
                (__this,fVar6,(UnityEngine_Vector2_o)offsetTarget,0.09,0x1b,method);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
    return;
  }
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar4 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar4 = (__this->fields)._pressMask;
  if (pUVar4 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pUVar4->fields).m_ShouldRecalculateClipRects;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX_02;
  if ((char)bVar3 == '\0') {
    __this_00 = *(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o **)
                 &(pUVar4->fields).m_ShouldRecalculateClipRects;
    if (__this_00 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (*(char *)((long)&(__this_00->fields)._ownsMaterial + 1) == '\0') {
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return;
      }
      if (g_data_057a8dd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a8dd2 = '\x01';
      }
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this_00,method_01);
      return;
    }
    method_01 = *(MethodInfo **)&__this_00->klass[1]._2.initializationExceptionGCHandle;
    cVar2 = (*__this_00->klass[1]._2.unity_user_data)();
    method_00 = extraout_RDX_03;
    if (cVar2 == '\0') {
      return;
    }
  }
  if (*(char *)((long)&(pUVar4->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 2) == '\0') {
    fVar6 = *(float *)&(pUVar4->fields).m_Clippers;
    if (*(char *)((long)&(pUVar4->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 1) == '\0') {
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
        method_00 = extraout_RDX_05;
      }
      offsetTarget_00 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
    }
    else {
      fVar6 = fVar6 * 1.35;
      if (g_data_057a8dd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a8dd2 = '\x01';
      }
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                        ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar4,method_01);
      fStack_60 = (float)uVar1;
      fStack_5c = (float)((ulong)uVar1 >> 0x20);
      offsetTarget_00.x = fVar5 * fStack_60 * 0.5;
      offsetTarget_00.y = fVar5 * fStack_5c * 0.5;
      method_00 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
              ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar4,fVar6,
               (UnityEngine_Vector2_o)offsetTarget_00,0.08,9,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2e510

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSelect
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Selectable_o *pUVar4;
  float reliefTarget;
  float fVar5;
  UnityEngine_Vector2_Fields offsetTarget;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar4 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar3 == '\0') {
    pUVar4 = (__this->fields)._selectable;
    if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (*(char *)((long)&(pUVar4->fields).m_Transition + 1) != '\0') {
        if (g_data_057a8dd2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a8dd2 = '\x01';
        }
        Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                  ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar4,method_01);
        return;
      }
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      return;
    }
    method_01 = (pUVar4->klass->vtable)._24_IsInteractable.method;
    cVar2 = (*(pUVar4->klass->vtable)._24_IsInteractable.methodPtr)();
    method_00 = extraout_RDX_00;
    if (cVar2 == '\0') {
      return;
    }
  }
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 2) != '\0') {
    return;
  }
  reliefTarget = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
      method_00 = extraout_RDX_02;
    }
    offsetTarget = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    reliefTarget = reliefTarget * 1.35;
    if (g_data_057a8dd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a8dd2 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
    fStack_28 = (float)uVar1;
    fStack_24 = (float)((ulong)uVar1 >> 0x20);
    offsetTarget.x = fVar5 * fStack_28 * 0.5;
    offsetTarget.y = fVar5 * fStack_24 * 0.5;
    method_00 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            (__this,reliefTarget,(UnityEngine_Vector2_o)offsetTarget,0.08,9,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDeselect (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2e710

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
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            (__this,reliefTarget,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
             ,0.08,9,method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2e780

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnSubmit
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press(__this,method);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Press
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2e790

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Press
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_UI_RectMask2D_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o offsetEnd;
  UnityEngine_Vector2_o offsetEnd_00;
  char cVar8;
  bool_conflict bVar9;
  DG_Tweening_Sequence_o *pDVar10;
  DG_Tweening_Tween_o *pDVar11;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *pIVar12;
  Il2CppObject *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  int32_t ease;
  MethodInfo *pMVar13;
  long lVar14;
  Il2CppClass *__this_02;
  float reliefEnd;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 in_XMM1_Da;
  float fVar18;
  float in_XMM2_Da;
  float in_XMM2_Db;
  float in_XMM3_Da;
  float fVar19;
  float in_XMM3_Db;
  float in_XMM4_Da;
  UnityEngine_Rect_o UVar20;
  float local_60;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (g_data_057a9c0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Press_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9c0f = '\x01';
  }
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b2ecfb;
    cVar8 = (*(pUVar3->klass->vtable)._24_IsInteractable.methodPtr)();
    if (cVar8 == '\0') {
      return;
    }
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar8 = (char)bVar9;
  }
  else {
    bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar8 = (char)bVar9;
  }
  if (cVar8 == '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 1;
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar5 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar5 = (__this->fields)._pressMask;
    if (pUVar5 == (UnityEngine_UI_RectMask2D_o *)0x0) goto label_03b2ecfb;
    pMVar13 = (MethodInfo *)0x1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,1,(MethodInfo *)0x0);
  }
  pDVar11 = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  if (pDVar11 != (DG_Tweening_Tween_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    DG_Tweening_TweenExtensions__Kill(pDVar11,0,(MethodInfo *)0x0);
  }
  reliefEnd = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) != '\0') {
    reliefEnd = reliefEnd * 1.35;
  }
  if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  fVar15 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this,pMVar13);
  UVar7 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this,pMVar13);
  if (g_data_057a9c15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c15 = '\x01';
  }
  pUVar6 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_XMM1_Da = 0;
  fVar18 = 0.0;
  if ((char)bVar9 != '\0') {
    pUVar6 = (__this->fields)._face;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_03b2ecfb;
    pMVar13 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
    fVar18 = UVar20.fields.m_Height;
  }
  if (g_data_057a9c89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c89 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  in_XMM3_Db = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar13);
  fVar18 = fVar18 * (__this->fields)._pressDepth;
  if (in_XMM3_Db <= fVar18) {
    in_XMM3_Db = fVar18;
  }
  local_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  in_XMM3_Da = local_38 * in_XMM3_Db;
  in_XMM3_Db = fStack_34 * in_XMM3_Db;
  in_XMM4_Da = 0.045;
  in_XMM2_Da = UVar7.fields.x;
  in_XMM2_Db = UVar7.fields.y;
  offsetEnd.fields.y = in_XMM3_Db;
  offsetEnd.fields.x = in_XMM3_Da;
  pDVar11 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                      (__this,fVar15,reliefEnd,UVar7,offsetEnd,0.045,9,method_00);
  pDVar10 = DG_Tweening_TweenSettingsExtensions__Append(pDVar10,pDVar11,(MethodInfo *)0x0);
  local_60 = (__this->fields)._baseRelief;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    if (g_data_057a9c15 != '\0') goto label_03b2eaad;
label_03b2ebf1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c15 = '\x01';
    pUVar6 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    local_60 = local_60 * 1.35;
    if (g_data_057a9c15 == '\0') goto label_03b2ebf1;
label_03b2eaad:
    pUVar6 = (__this->fields)._face;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  in_XMM1_Da = 0;
  fVar15 = 0.0;
  if ((char)bVar9 != '\0') {
    pUVar6 = (__this->fields)._face;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
label_03b2ecfb:
      lVar14 = 0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c12 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c12 = '\x01';
      }
      pUVar4 = *(UnityEngine_Object_o **)(lVar14 + 0x20);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_00 = *(UnityEngine_Material_o **)(lVar14 + 0x20);
      lVar14 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__GetFloat_4dcdb00
                  (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c14 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c14 = '\x01';
      }
      pUVar4 = *(UnityEngine_Object_o **)(lVar14 + 0x30);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ease = 0;
      bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return;
      }
      __this_02 = *(Il2CppClass **)(lVar14 + 0x30);
      if (__this_02 != (Il2CppClass *)0x0) {
        UnityEngine_RectTransform__get_anchoredPosition
                  ((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
      uVar17 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c11 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateStep_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
        g_data_057a9c11 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
      pIVar12 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[1].klass = __this_02;
        il2cpp_runtime_helper_022b4080(__this_01 + 1,__this_02);
        *(undefined4 *)&__this_01[1].monitor = uVar17;
        *(undefined4 *)((long)&__this_01[1].monitor + 4) = in_XMM1_Da;
        *(float *)&__this_01[2].klass = in_XMM2_Da;
        *(float *)((long)&__this_01[2].klass + 4) = in_XMM2_Db;
        *(float *)&__this_01[2].monitor = in_XMM3_Da;
        *(float *)((long)&__this_01[2].monitor + 4) = in_XMM3_Db;
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor();
        t = DG_Tweening_DOVirtual__Float(0.0,1.0,in_XMM4_Da,onVirtualUpdate,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar12,(MethodInfo *)0x0);
      return;
    }
    pMVar13 = (MethodInfo *)0x0;
    UVar20 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
    fVar15 = UVar20.fields.m_Height;
  }
  if (g_data_057a9c89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c89 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  fVar18 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar13);
  fVar15 = fVar15 * (__this->fields)._pressDepth;
  if (fVar18 <= fVar15) {
    fVar18 = fVar15;
  }
  local_48 = (float)uVar1;
  fStack_44 = (float)((ulong)uVar1 >> 0x20);
  fVar15 = fVar18 * local_48;
  fVar18 = fVar18 * fStack_44;
  if (*(char *)((long)&(__this->fields)._ownsMaterial + 1) == '\0') {
    pMVar13 = extraout_RDX;
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
      pMVar13 = extraout_RDX_01;
    }
    fVar19 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    fVar16 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
  }
  else {
    if (g_data_057a8dd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a8dd2 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar16 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,pMVar13);
    local_48 = (float)uVar1;
    fStack_44 = (float)((ulong)uVar1 >> 0x20);
    fVar19 = fVar16 * local_48 * 0.5;
    fVar16 = fVar16 * fStack_44 * 0.5;
    pMVar13 = extraout_RDX_00;
  }
  UVar7.fields.y = fVar18;
  UVar7.fields.x = fVar15;
  offsetEnd_00.fields.y = fVar16;
  offsetEnd_00.fields.x = fVar19;
  pDVar11 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                      (__this,reliefEnd,local_60,UVar7,offsetEnd_00,0.09,0x1b,pMVar13);
  pDVar10 = DG_Tweening_TweenSettingsExtensions__Append(pDVar10,pDVar11,(MethodInfo *)0x0);
  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
  DG_Tweening_TweenCallback___ctor();
  pIVar12 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                      ((Il2CppObject *)pDVar10,action,MethodInfo_Sequence_OnComplete_Sequence);
  pIVar12 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar12,1,MethodInfo_Sequence_SetUpdate_Sequence);
  *(Il2CppObject **)&(__this->fields)._pressed = pIVar12;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pressed,pIVar12);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, const MethodInfo* method);
// 0x3b2de10

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefTarget,
          UnityEngine_Vector2_o offsetTarget,float duration,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *in_RDX;
  
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
                     (__this,reliefTarget,offsetTarget,duration,9,in_RDX);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefTarget, UnityEngine_Vector2_o offsetTarget, float duration, int32_t ease, const MethodInfo* method);
// 0x3b2e1b0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
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
  
  if (g_data_057a9c10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_SetUpdate_Tween);
    g_data_057a9c10 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    x_00 = (__this->fields)._face;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
                       (__this,reliefStart,reliefTarget,offsetStart,offsetTarget,duration,ease,method_00);
    pIVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar2,1,MethodInfo_Tween_SetUpdate_Tween);
    *(Il2CppObject **)&(__this->fields)._pressed = pIVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pressed,pIVar3);
    pDVar2 = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  }
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$AnimateStep
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float reliefStart, float reliefEnd, UnityEngine_Vector2_o offsetStart, UnityEngine_Vector2_o offsetEnd, float duration, int32_t ease, const MethodInfo* method);
// 0x3b2ee60

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float reliefStart,float reliefEnd,
          UnityEngine_Vector2_o offsetStart,UnityEngine_Vector2_o offsetEnd,float duration,int32_t ease,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar1;
  DG_Tweening_Tween_o *extraout_RAX;
  Il2CppObject *__this_01;
  float local_38;
  float fStack_34;
  
  if (g_data_057a9c11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateStep_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9c11 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    *(float *)&__this_00[1].monitor = reliefStart;
    *(float *)((long)&__this_00[1].monitor + 4) = reliefEnd;
    local_38 = offsetStart.fields.x;
    fStack_34 = offsetStart.fields.y;
    *(float *)&__this_00[2].klass = local_38;
    *(float *)((long)&__this_00[2].klass + 4) = fStack_34;
    *(float *)&__this_00[2].monitor = offsetEnd.fields.x;
    *(float *)((long)&__this_00[2].monitor + 4) = offsetEnd.fields.y;
    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
    DG_Tweening_TweenCallback_float____ctor();
    t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
    pDVar1 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
    return pDVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CurrentRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2ed00

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  int32_t ease;
  long lVar4;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  float fVar5;
  undefined4 uVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  undefined8 in_XMM3_Qa;
  float in_XMM4_Da;
  
  if (g_data_057a9c12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c12 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0.0;
  }
  __this_00 = (__this->fields)._material;
  lVar4 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    fVar5 = UnityEngine_Material__GetFloat_4dcdb00
                      (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),(MethodInfo *)0x0);
    return fVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c14 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)(lVar4 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ease = 0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this_02 = *(Il2CppClass **)(lVar4 + 0x30);
    if (__this_02 != (Il2CppClass *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_anchoredPosition
                        ((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
      return UVar2.fields.x;
    }
    uVar6 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9c11 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateStep_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
      g_data_057a9c11 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
    __this_03 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[1].klass = __this_02;
      il2cpp_runtime_helper_022b4080(__this_01 + 1,__this_02);
      *(undefined4 *)&__this_01[1].monitor = uVar6;
      *(undefined4 *)((long)&__this_01[1].monitor + 4) = in_XMM1_Da;
      *(undefined4 *)&__this_01[2].klass = in_XMM2_Da;
      *(undefined4 *)((long)&__this_01[2].klass + 4) = in_XMM2_Db;
      *(int *)&__this_01[2].monitor = (int)in_XMM3_Qa;
      *(int *)((long)&__this_01[2].monitor + 4) = (int)((ulong)in_XMM3_Qa >> 0x20);
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,in_XMM4_Da,onVirtualUpdate,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
      return extraout_XMM0_Da;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  return (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetRelief
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, float value, const MethodInfo* method);
// 0x3b2efa0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value_00;
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  DG_Tweening_Tween_o *t;
  UnityEngine_Behaviour_o *__this_01;
  undefined4 in_EAX;
  bool_conflict bVar3;
  undefined8 uVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Object_o **x;
  undefined8 *puVar6;
  UnityEngine_Object_o *pUVar7;
  long *plVar8;
  UnityEngine_Object_o **ppUVar9;
  long *__this_02;
  undefined8 uStack_40;
  UnityEngine_Material_o *pUStack_38;
  UnityEngine_Material_o **ppUStack_30;
  undefined4 uStack_28;
  float local_24;
  
  _uStack_28 = CONCAT44(value,in_EAX);
  if (g_data_057a9c13 == '\0') {
    ppUStack_30 = (UnityEngine_Material_o **)0x3b2efc6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    ppUStack_30 = (UnityEngine_Material_o **)0x3b2efd2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    ppUStack_30 = (UnityEngine_Material_o **)0x3b2efde;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c13 = '\x01';
  }
  pUVar7 = (UnityEngine_Object_o *)(__this->fields)._material;
  __this_02 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppUStack_30 = (UnityEngine_Material_o **)0x3b2f002;
    il2cpp_runtime_helper_02337ed0();
  }
  ppUStack_30 = (UnityEngine_Material_o **)0x3b2f00e;
  bVar3 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  ppUVar9 = (UnityEngine_Object_o **)&(__this->fields)._material;
  if ((char)(__this->fields)._ownsMaterial == '\0') {
    pUVar1 = (__this->fields)._image;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppUStack_30 = (UnityEngine_Material_o **)0x3b2f045;
      il2cpp_runtime_helper_02337ed0();
    }
    ppUStack_30 = (UnityEngine_Material_o **)0x3b2f051;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar5 = (UnityEngine_Material_o *)*ppUVar9;
      ppUStack_30 = (UnityEngine_Material_o **)0x3b2f067;
      __this_02 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      ppUStack_30 = (UnityEngine_Material_o **)0x3b2f077;
      pUVar7 = (UnityEngine_Object_o *)__this_02;
      UnityEngine_Material___ctor_4dc9e70((UnityEngine_Material_o *)__this_02,pUVar5,(MethodInfo *)0x0);
      if ((UnityEngine_Object_o *)__this_02 == (UnityEngine_Object_o *)0x0) goto label_03b2f10c;
      ppUStack_30 = (UnityEngine_Material_o **)0x3b2f08f;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_02,0x34,(MethodInfo *)0x0);
      (__this->fields)._material = (UnityEngine_Material_o *)__this_02;
      ppUStack_30 = (UnityEngine_Material_o **)0x3b2f09f;
      il2cpp_runtime_helper_022b4080(ppUVar9);
      pUVar1 = (__this->fields)._image;
      pUVar7 = (UnityEngine_Object_o *)0x0;
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_03b2f10c;
      ppUStack_30 = (UnityEngine_Material_o **)0x3b2f0be;
      (*(pUVar1->klass->vtable)._33_set_material.methodPtr)
                (pUVar1,(__this->fields)._material,(pUVar1->klass->vtable)._33_set_material.method);
      *(undefined1 *)&(__this->fields)._ownsMaterial = 1;
    }
  }
  __this_00 = (UnityEngine_Material_o *)*ppUVar9;
  ppUVar9 = &TypeInfo_GisketchSurfaceMaterial;
  pUVar7 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
    ppUStack_30 = (UnityEngine_Material_o **)0x3b2f0df;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Material_o *)0x0;
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (__this_00,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x28),local_24,(MethodInfo *)0x0);
    return;
  }
label_03b2f10c:
  ppUStack_30 = (UnityEngine_Material_o **)0x3b2f111;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pUStack_38 = pUVar5;
  ppUStack_30 = (UnityEngine_Material_o **)ppUVar9;
  if (g_data_057a9c17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c17 = '\x01';
  }
  pUVar2 = pUVar7[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar5 = pUVar7[1].monitor;
  ppUVar9 = &TypeInfo_GisketchSurfaceMaterial;
  plVar8 = (long *)TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar5 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__GetFloat_4dcdb00
              (pUVar5,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x34),(MethodInfo *)0x0);
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  x = (UnityEngine_Object_o **)0x0;
  puVar6 = &uStack_40;
  do {
    pUVar7 = (UnityEngine_Object_o *)plVar8;
    *(long **)((long)puVar6 + -8) = __this_02;
    *(UnityEngine_Object_o ***)((long)puVar6 + -0x10) = ppUVar9;
    *(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o **)((long)puVar6 + -0x18) = __this;
    *(UnityEngine_Object_o ***)((long)puVar6 + -0x20) = x;
    *(undefined8 *)((long)puVar6 + -0x28) = uVar4;
    if (g_data_057a9c1a == '\0') {
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f200;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f20c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c1a = '\x01';
    }
    *(undefined2 *)((long)&pUVar7[3].monitor + 1) = 0;
    t = (DG_Tweening_Tween_o *)pUVar7[3].fields.m_CachedPtr;
    if (t != (DG_Tweening_Tween_o *)0x0) {
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f230;
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    }
    pUVar7[3].fields.m_CachedPtr = 0;
    *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f241;
    il2cpp_runtime_helper_022b4080(&pUVar7[3].fields);
    if (g_data_057a9c18 == '\0') {
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f256;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c18 = '\x01';
    }
    x = pUVar7[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f27a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f286;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
label_03b2f2a0:
      x = (UnityEngine_Object_o **)pUVar7[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f2b6;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f2c2;
      plVar8 = (long *)x;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        ppUVar9 = (UnityEngine_Object_o **)pUVar7[2].klass;
        if (g_data_057a694c == '\0') {
          plVar8 = &TypeInfo_Vector2;
          *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f2df;
          il2cpp_runtime_helper_023445d0();
          g_data_057a694c = '\x01';
        }
        if ((UnityEngine_Object_c *)ppUVar9 == (UnityEngine_Object_c *)0x0) goto label_03b2f390;
        value_00 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f30e;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)ppUVar9,(UnityEngine_Vector2_o)value_00,(MethodInfo *)0x0);
      }
      if (*(char *)&pUVar7[3].monitor == '\0') {
        return;
      }
      pUVar2 = pUVar7[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f32b;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f337;
      bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      ppUVar9 = pUVar7[1].monitor;
      x = &TypeInfo_GisketchSurfaceMaterial;
      plVar8 = (long *)TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
        *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f357;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((UnityEngine_Object_c *)ppUVar9 != (UnityEngine_Object_c *)0x0) {
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)ppUVar9,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x28),
                   *(float *)&pUVar7[3].klass,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_01 = pUVar7[2].monitor;
      plVar8 = (long *)0x0;
      if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
        *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f2a0;
        UnityEngine_Behaviour__set_enabled(__this_01,0,(MethodInfo *)0x0);
        goto label_03b2f2a0;
      }
    }
label_03b2f390:
    *(undefined8 *)((long)puVar6 + -0x30) = 0x3b2f395;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    puVar6 = (undefined8 *)((long)puVar6 + -0x28);
    __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)&TypeInfo_Object;
    __this_02 = (long *)pUVar7;
  } while( true );
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$FaceOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2edb0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_Fields UVar3;
  bool_conflict bVar4;
  Il2CppObject *__this_00;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  int32_t ease;
  Il2CppClass *__this_01;
  Il2CppObject *__this_02;
  undefined4 uVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  undefined8 in_XMM3_Qa;
  float in_XMM4_Da;
  
  if (g_data_057a9c14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c14 = '\x01';
  }
  x = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ease = 0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    return (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  __this_01 = (Il2CppClass *)(__this->fields)._face;
  if (__this_01 != (Il2CppClass *)0x0) {
    UVar3 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition
                      ((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar3;
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateStep_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9c11 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  __this_02 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_01);
    *(undefined4 *)&__this_00[1].monitor = uVar5;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = in_XMM1_Da;
    *(undefined4 *)&__this_00[2].klass = in_XMM2_Da;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = in_XMM2_Db;
    *(int *)&__this_00[2].monitor = (int)in_XMM3_Qa;
    *(int *)((long)&__this_00[2].monitor + 4) = (int)((ulong)in_XMM3_Qa >> 0x20);
    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
    DG_Tweening_TweenCallback_float____ctor();
    t = DG_Tweening_DOVirtual__Float(0.0,1.0,in_XMM4_Da,onVirtualUpdate,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
    UVar1.fields.y = extraout_XMM0_Db;
    UVar1.fields.x = extraout_XMM0_Da;
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  UVar2.fields.y = extraout_XMM0_Db_00;
  UVar2.fields.x = extraout_XMM0_Da_00;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$HoverOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2ddb0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__HoverOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
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
// 0x3b2e0e0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__PressOffset
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o offsetEnd;
  UnityEngine_Vector2_Fields UVar4;
  bool_conflict bVar5;
  DG_Tweening_Tween_o *pDVar6;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_00;
  float reliefEnd;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float reliefStart;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  UnityEngine_Vector2_Fields UVar8;
  float fVar9;
  float fVar10;
  float in_XMM2_Da;
  UnityEngine_Rect_o UVar11;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057a9c15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c15 = '\x01';
  }
  pUVar2 = (__this->fields)._face;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar9 = 0.0;
  fVar10 = 0.0;
  if ((char)bVar5 != '\0') {
    __this_00 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)(__this->fields)._face;
    if (__this_00 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      reliefEnd = (float)il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c10 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_SetUpdate_Tween);
        g_data_057a9c10 = '\x01';
      }
      x = (UnityEngine_Object_o *)(__this_00->fields)._material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_02 = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar2 = (__this_00->fields)._face;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_02 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        UVar4.y = extraout_XMM0_Db;
        UVar4.x = extraout_XMM0_Da;
        if ((char)bVar5 != '\0') {
          return (UnityEngine_Vector2_o)UVar4;
        }
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      UVar8.y = extraout_XMM0_Db_00;
      UVar8.x = extraout_XMM0_Da_00;
      if ((char)bVar5 != '\0') {
        pDVar6 = *(DG_Tweening_Tween_o **)&(__this_00->fields)._pressed;
        if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
          method_02 = (MethodInfo *)0x0;
          DG_Tweening_TweenExtensions__Kill(pDVar6,0,(MethodInfo *)0x0);
        }
        reliefStart = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CurrentRelief(__this_00,method_02);
        UVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__FaceOffset(__this_00,method_02);
        offsetEnd.fields.y = fVar10;
        offsetEnd.fields.x = fVar9;
        pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__AnimateStep
                           (__this_00,reliefStart,reliefEnd,UVar3,offsetEnd,in_XMM2_Da,(int32_t)method_01,
                            method_00);
        pIVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar6,1,MethodInfo_Tween_SetUpdate_Tween)
        ;
        *(Il2CppObject **)&(__this_00->fields)._pressed = pIVar7;
        UVar8 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pressed,pIVar7);
      }
      return (UnityEngine_Vector2_o)UVar8;
    }
    method_01 = (MethodInfo *)0x0;
    UVar11 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
    fVar10 = UVar11.fields.m_Height;
  }
  if (g_data_057a9c89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c89 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x18);
  fVar9 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method_01);
  fVar10 = fVar10 * (__this->fields)._pressDepth;
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fStack_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  UVar3.fields.y = fVar9 * fStack_34;
  UVar3.fields.x = fVar9 * fStack_38;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseRelief
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ReleaseRelief (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2e0c0

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
// 0x3b2e670

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
    if (g_data_057a8dd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a8dd2 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar3 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
    local_18 = (float)uVar1;
    fStack_14 = (float)((ulong)uVar1 >> 0x20);
    UVar2.fields.y = fVar3 * fStack_14 * 0.5;
    UVar2.fields.x = fVar3 * local_18 * 0.5;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  return (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Release
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2e320

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Release
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  char cVar2;
  bool_conflict bVar3;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_RectMask2D_o *pUVar4;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_00;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields offsetTarget;
  UnityEngine_Vector2_Fields offsetTarget_00;
  float fStack_60;
  float fStack_5c;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057a9c16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Release_b__31_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    g_data_057a9c16 = '\x01';
    cVar2 = *(char *)((long)&(__this->fields)._ownsMaterial + 1);
    fVar6 = (__this->fields)._baseRelief;
    in_RDX = extraout_RDX_00;
  }
  else {
    cVar2 = *(char *)((long)&(__this->fields)._ownsMaterial + 1);
    fVar6 = (__this->fields)._baseRelief;
  }
  if (cVar2 == '\0') {
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
      in_RDX = extraout_RDX_01;
    }
    offsetTarget = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  }
  else {
    fVar6 = fVar6 * 1.35;
    if (g_data_057a8dd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a8dd2 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this,method);
    fStack_28 = (float)uVar1;
    fStack_24 = (float)((ulong)uVar1 >> 0x20);
    offsetTarget.x = fVar5 * fStack_28 * 0.5;
    offsetTarget.y = fVar5 * fStack_24 * 0.5;
    in_RDX = extraout_RDX;
  }
  t = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
                (__this,fVar6,(UnityEngine_Vector2_o)offsetTarget,0.09,0x1b,in_RDX);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
    return;
  }
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar4 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar4 = (__this->fields)._pressMask;
  if (pUVar4 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pUVar4->fields).m_ShouldRecalculateClipRects;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX_02;
  if ((char)bVar3 == '\0') {
    __this_00 = *(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o **)
                 &(pUVar4->fields).m_ShouldRecalculateClipRects;
    if (__this_00 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (*(char *)((long)&(__this_00->fields)._ownsMaterial + 1) == '\0') {
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return;
      }
      if (g_data_057a8dd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a8dd2 = '\x01';
      }
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this_00,method_01);
      return;
    }
    method_01 = *(MethodInfo **)&__this_00->klass[1]._2.initializationExceptionGCHandle;
    cVar2 = (*__this_00->klass[1]._2.unity_user_data)();
    method_00 = extraout_RDX_03;
    if (cVar2 == '\0') {
      return;
    }
  }
  if (*(char *)((long)&(pUVar4->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 2) == '\0') {
    fVar6 = *(float *)&(pUVar4->fields).m_Clippers;
    if (*(char *)((long)&(pUVar4->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 1) == '\0') {
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
        method_00 = extraout_RDX_05;
      }
      offsetTarget_00 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
    }
    else {
      fVar6 = fVar6 * 1.35;
      if (g_data_057a8dd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a8dd2 = '\x01';
      }
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      fVar5 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                        ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar4,method_01);
      fStack_60 = (float)uVar1;
      fStack_5c = (float)((ulong)uVar1 >> 0x20);
      offsetTarget_00.x = fVar5 * fStack_60 * 0.5;
      offsetTarget_00.y = fVar5 * fStack_5c * 0.5;
      method_00 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
              ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar4,fVar6,
               (UnityEngine_Vector2_o)offsetTarget_00,0.08,9,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ShadowSize
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f120

float Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  UnityEngine_Material_o *__this_00;
  DG_Tweening_Tween_o *t;
  UnityEngine_Behaviour_o *__this_01;
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  undefined8 uVar2;
  UnityEngine_Object_c *x_00;
  undefined1 *puVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_c *pUVar5;
  undefined8 *unaff_R12;
  UnityEngine_Object_c *__this_02;
  UnityEngine_Object_o *unaff_R15;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined1 auStack_18 [8];
  
  if (g_data_057a9c17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c17 = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return 4.0;
  }
  __this_00 = (__this->fields)._material;
  __this_02 = (UnityEngine_Object_c *)&TypeInfo_GisketchSurfaceMaterial;
  pUVar5 = (UnityEngine_Object_c *)TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    fVar6 = UnityEngine_Material__GetFloat_4dcdb00
                      (__this_00,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x34),(MethodInfo *)0x0);
    fVar7 = 1.0;
    if (1.0 <= fVar6) {
      fVar7 = fVar6;
    }
    return fVar7;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  x_00 = (UnityEngine_Object_c *)0x0;
  puVar3 = auStack_18;
  do {
    pUVar4 = (UnityEngine_Object_o *)pUVar5;
    *(UnityEngine_Object_o **)(puVar3 + -8) = unaff_R15;
    *(UnityEngine_Object_c **)(puVar3 + -0x10) = __this_02;
    *(undefined8 **)(puVar3 + -0x18) = unaff_R12;
    *(UnityEngine_Object_c **)(puVar3 + -0x20) = x_00;
    *(undefined8 *)(puVar3 + -0x28) = uVar2;
    if (g_data_057a9c1a == '\0') {
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f200;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f20c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c1a = '\x01';
    }
    *(undefined2 *)((long)&pUVar4[3].monitor + 1) = 0;
    t = (DG_Tweening_Tween_o *)pUVar4[3].fields.m_CachedPtr;
    if (t != (DG_Tweening_Tween_o *)0x0) {
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f230;
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    }
    pUVar4[3].fields.m_CachedPtr = 0;
    *(undefined8 *)(puVar3 + -0x30) = 0x3b2f241;
    il2cpp_runtime_helper_022b4080(&pUVar4[3].fields);
    if (g_data_057a9c18 == '\0') {
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f256;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c18 = '\x01';
    }
    x_00 = pUVar4[2].monitor;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f27a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar3 + -0x30) = 0x3b2f286;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_03b2f2a0:
      x_00 = pUVar4[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar3 + -0x30) = 0x3b2f2b6;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f2c2;
      pUVar5 = x_00;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar7 = extraout_XMM0_Da;
      if ((char)bVar1 != '\0') {
        __this_02 = pUVar4[2].klass;
        if (g_data_057a694c == '\0') {
          pUVar5 = (UnityEngine_Object_c *)&TypeInfo_Vector2;
          *(undefined8 *)(puVar3 + -0x30) = 0x3b2f2df;
          il2cpp_runtime_helper_023445d0();
          g_data_057a694c = '\x01';
        }
        if (__this_02 == (UnityEngine_Object_c *)0x0) goto label_03b2f390;
        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        *(undefined8 *)(puVar3 + -0x30) = 0x3b2f30e;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
        fVar7 = extraout_XMM0_Da_00;
      }
      if (*(char *)&pUVar4[3].monitor == '\0') {
        return fVar7;
      }
      x = pUVar4[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar3 + -0x30) = 0x3b2f32b;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar3 + -0x30) = 0x3b2f337;
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return extraout_XMM0_Da_01;
      }
      __this_02 = pUVar4[1].monitor;
      x_00 = (UnityEngine_Object_c *)&TypeInfo_GisketchSurfaceMaterial;
      pUVar5 = (UnityEngine_Object_c *)TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[9].monitor + 4) == 0) {
        *(undefined8 *)(puVar3 + -0x30) = 0x3b2f357;
        il2cpp_runtime_helper_02337ed0();
      }
      if (__this_02 != (UnityEngine_Object_c *)0x0) {
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)__this_02,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[7].fields.m_CachedPtr + 0x28)
                   ,*(float *)&pUVar4[3].klass,(MethodInfo *)0x0);
        return extraout_XMM0_Da_02;
      }
    }
    else {
      __this_01 = pUVar4[2].monitor;
      pUVar5 = (UnityEngine_Object_c *)0x0;
      if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
        *(undefined8 *)(puVar3 + -0x30) = 0x3b2f2a0;
        UnityEngine_Behaviour__set_enabled(__this_01,0,(MethodInfo *)0x0);
        goto label_03b2f2a0;
      }
    }
label_03b2f390:
    *(undefined8 *)(puVar3 + -0x30) = 0x3b2f395;
    uVar2 = il2cpp_runtime_helper_022b2c90();
    puVar3 = puVar3 + -0x28;
    unaff_R15 = pUVar4;
  } while( true );
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetPressMask
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, bool enabled, const MethodInfo* method);
// 0x3b2db80

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetPressMask
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,bool_conflict enabled,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar3;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c *pGVar4;
  UnityEngine_Vector2_o offsetTarget;
  char cVar5;
  bool_conflict bVar6;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  UnityEngine_UI_RectMask2D_o *pUVar8;
  long *plVar9;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_00;
  float fVar10;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar8 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar8 = (__this->fields)._pressMask;
  if (pUVar8 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar8,enabled & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(pUVar8->fields).m_ShouldRecalculateClipRects;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    plVar9 = *(long **)&(pUVar8->fields).m_ShouldRecalculateClipRects;
    if (plVar9 == (long *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c19 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c19 = '\x01';
      }
      pUVar3 = (UnityEngine_Object_o *)plVar9[8];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar7 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        __this_00 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)plVar9[8];
        if (__this_00 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a8dd2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a8dd2 = '\x01';
          }
          Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this_00,pMVar7);
          return;
        }
        pGVar4 = __this_00->klass;
        uVar2._0_4_ = pGVar4[1]._2.initializationExceptionGCHandle;
        uVar2._4_4_ = pGVar4[1]._2.cctor_started;
        (*pGVar4[1]._2.unity_user_data)(__this_00,uVar2);
        return;
      }
      return;
    }
    pMVar7 = *(MethodInfo **)(*plVar9 + 0x2c0);
    cVar5 = (**(code **)(*plVar9 + 0x2b8))();
    if (cVar5 == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)&(pUVar8->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 1) = 1;
  if (*(char *)((long)&(pUVar8->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 2) != '\0') {
    return;
  }
  fVar1 = *(float *)&(pUVar8->fields).m_Clippers;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  fVar10 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                     ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar8,pMVar7);
  fStack_40 = (float)uVar2;
  fStack_3c = (float)((ulong)uVar2 >> 0x20);
  offsetTarget.fields.y = fStack_3c * fVar10 * 0.5;
  offsetTarget.fields.x = fStack_40 * fVar10 * 0.5;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
            ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar8,fVar1 * 1.35,offsetTarget,0.08,9,
             method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CanInteract
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2dd20

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__CanInteract
          (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  MethodInfo *method_00;
  UnityEngine_UI_Selectable_o *pUVar2;
  
  if (g_data_057a9c19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c19 = '\x01';
  }
  pUVar2 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  pUVar2 = (__this->fields)._selectable;
  if (pUVar2 != (UnityEngine_UI_Selectable_o *)0x0) {
    bVar1 = (*(pUVar2->klass->vtable)._24_IsInteractable.methodPtr)
                      (pUVar2,(pUVar2->klass->vtable)._24_IsInteractable.method);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
            ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar2,method_00);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ResetPressVisual
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f1e0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ResetPressVisual
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_HashSet_IClippable__o *__this_00;
  UnityEngine_UI_RectangularVertexClipper_o *x;
  bool_conflict bVar1;
  undefined8 in_RAX;
  UnityEngine_UI_RectMask2D_o *unaff_RBX;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  undefined8 *unaff_R12;
  System_Collections_Generic_HashSet_MaskableGraphic__o *unaff_R14;
  UnityEngine_UI_RectMask2D_o *unaff_R15;
  
  do {
    pUVar2 = (UnityEngine_UI_RectMask2D_o *)__this;
    *(UnityEngine_UI_RectMask2D_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(System_Collections_Generic_HashSet_MaskableGraphic__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(UnityEngine_UI_RectMask2D_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    if (g_data_057a9c1a == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f200;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f20c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c1a = '\x01';
    }
    *(undefined2 *)((long)&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 1) = 0;
    t = *(DG_Tweening_Tween_o **)&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Width;
    if (t != (DG_Tweening_Tween_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f230;
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    }
    (pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Width = 0.0;
    (pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Height = 0.0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f241;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Width);
    if (g_data_057a9c18 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f256;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c18 = '\x01';
    }
    unaff_RBX = (UnityEngine_UI_RectMask2D_o *)(pUVar2->fields).m_ClipTargets;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f27a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f286;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_03b2f2a0:
      unaff_RBX = (UnityEngine_UI_RectMask2D_o *)(pUVar2->fields).m_MaskableTargets;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2b6;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2c2;
      __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)unaff_RBX;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        unaff_R14 = (pUVar2->fields).m_MaskableTargets;
        if (g_data_057a694c == '\0') {
          __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)&TypeInfo_Vector2;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2df;
          il2cpp_runtime_helper_023445d0();
          g_data_057a694c = '\x01';
        }
        if (unaff_R14 == (System_Collections_Generic_HashSet_MaskableGraphic__o *)0x0) goto label_03b2f390;
        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f30e;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)unaff_R14,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
      }
      if (*(char *)&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_XMin == '\0') {
        return;
      }
      x = (pUVar2->fields).m_VertexClipper;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f32b;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f337;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return;
      }
      unaff_R14 = (System_Collections_Generic_HashSet_MaskableGraphic__o *)(pUVar2->fields).m_VertexClipper;
      unaff_RBX = (UnityEngine_UI_RectMask2D_o *)&TypeInfo_GisketchSurfaceMaterial;
      __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)TypeInfo_GisketchSurfaceMaterial;
      if (TypeInfo_GisketchSurfaceMaterial[1].fields.m_LastClipRectCanvasSpace.fields.m_YMin == 0.0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f357;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R14 != (System_Collections_Generic_HashSet_MaskableGraphic__o *)0x0) {
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_R14,
                   (int32_t)TypeInfo_GisketchSurfaceMaterial[1].fields.m_RectTransform[1].fields.m_CachedPtr,
                   *(float *)&(pUVar2->fields).m_Clippers,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = (pUVar2->fields).m_ClipTargets;
      __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_IClippable__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2a0;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
        goto label_03b2f2a0;
      }
    }
label_03b2f390:
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f395;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    unaff_R15 = pUVar2;
  } while( true );
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f3a0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDisable
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_HashSet_IClippable__o *__this_00;
  UnityEngine_UI_RectangularVertexClipper_o *x;
  bool_conflict bVar1;
  undefined8 in_RAX;
  UnityEngine_UI_RectMask2D_o *unaff_RBX;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  undefined8 *unaff_R12;
  System_Collections_Generic_HashSet_MaskableGraphic__o *unaff_R14;
  UnityEngine_UI_RectMask2D_o *unaff_R15;
  
  do {
    pUVar2 = (UnityEngine_UI_RectMask2D_o *)__this;
    *(UnityEngine_UI_RectMask2D_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(System_Collections_Generic_HashSet_MaskableGraphic__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(UnityEngine_UI_RectMask2D_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    if (g_data_057a9c1a == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f200;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f20c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c1a = '\x01';
    }
    *(undefined2 *)((long)&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_XMin + 1) = 0;
    t = *(DG_Tweening_Tween_o **)&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Width;
    if (t != (DG_Tweening_Tween_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f230;
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    }
    (pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Width = 0.0;
    (pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Height = 0.0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f241;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_Width);
    if (g_data_057a9c18 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f256;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c18 = '\x01';
    }
    unaff_RBX = (UnityEngine_UI_RectMask2D_o *)(pUVar2->fields).m_ClipTargets;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f27a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f286;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
label_03b2f2a0:
      unaff_RBX = (UnityEngine_UI_RectMask2D_o *)(pUVar2->fields).m_MaskableTargets;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2b6;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2c2;
      __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)unaff_RBX;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        unaff_R14 = (pUVar2->fields).m_MaskableTargets;
        if (g_data_057a694c == '\0') {
          __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)&TypeInfo_Vector2;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2df;
          il2cpp_runtime_helper_023445d0();
          g_data_057a694c = '\x01';
        }
        if (unaff_R14 == (System_Collections_Generic_HashSet_MaskableGraphic__o *)0x0) goto label_03b2f390;
        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f30e;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)unaff_R14,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
      }
      if (*(char *)&(pUVar2->fields).m_LastClipRectCanvasSpace.fields.m_XMin == '\0') {
        return;
      }
      x = (pUVar2->fields).m_VertexClipper;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f32b;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f337;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return;
      }
      unaff_R14 = (System_Collections_Generic_HashSet_MaskableGraphic__o *)(pUVar2->fields).m_VertexClipper;
      unaff_RBX = (UnityEngine_UI_RectMask2D_o *)&TypeInfo_GisketchSurfaceMaterial;
      __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)TypeInfo_GisketchSurfaceMaterial;
      if (TypeInfo_GisketchSurfaceMaterial[1].fields.m_LastClipRectCanvasSpace.fields.m_YMin == 0.0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f357;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R14 != (System_Collections_Generic_HashSet_MaskableGraphic__o *)0x0) {
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_R14,
                   (int32_t)TypeInfo_GisketchSurfaceMaterial[1].fields.m_RectTransform[1].fields.m_CachedPtr,
                   *(float *)&(pUVar2->fields).m_Clippers,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = (pUVar2->fields).m_ClipTargets;
      __this = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_IClippable__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f2a0;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
        goto label_03b2f2a0;
      }
    }
label_03b2f390:
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b2f395;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    unaff_R15 = pUVar2;
  } while( true );
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f3b0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__OnDestroy
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057a9c1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c1b = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(__this->fields)._pressed;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  if ((char)(__this->fields)._ownsMaterial != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f450

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  (__this->fields)._pressDepth = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Press>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f460

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Press_b__20_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  int iVar5;
  System_Int32_array *pSVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  bool_conflict bVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  UnityEngine_UI_RectMask2D_o *pUVar9;
  System_Collections_Generic_HashSet_IClippable__o *pSVar10;
  System_Int32_array *__this_01;
  float fVar11;
  
  *(undefined1 *)((long)&(__this->fields)._ownsMaterial + 2) = 0;
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar9 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar9 = (__this->fields)._pressMask;
  if (pUVar9 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar9,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pSVar10 = (pUVar9->fields).m_ClipTargets;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pSVar10 = (pUVar9->fields).m_ClipTargets;
    if (pSVar10 != (System_Collections_Generic_HashSet_IClippable__o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pSVar10,0,(MethodInfo *)0x0);
      return;
    }
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9c1c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c1c = '\x01';
    }
    __this_01 = (pSVar10->fields)._buckets;
    if (__this_01 != (System_Int32_array *)0x0) {
      fVar1 = *(float *)&(pSVar10->fields)._slots;
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
                ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)__this_01,
                 (*(float *)((long)&(pSVar10->fields)._slots + 4) - fVar1) * fVar11 + fVar1,pMVar8);
      pSVar6 = (pSVar10->fields)._buckets;
      if (pSVar6 != (System_Int32_array *)0x0) {
        __this_01 = *(System_Int32_array **)(pSVar6->m_Items + 4);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        pSVar6 = (pSVar10->fields)._buckets;
        if (pSVar6 != (System_Int32_array *)0x0) {
          __this_00 = *(UnityEngine_RectTransform_o **)(pSVar6->m_Items + 4);
          __this_01 = (System_Int32_array *)0x0;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            uVar2 = (pSVar10->fields)._count;
            uVar4 = (pSVar10->fields)._lastIndex;
            uVar3 = *(undefined8 *)&(pSVar10->fields)._freeList;
            value.fields.y = fVar11 * ((float)((ulong)uVar3 >> 0x20) - (float)uVar4) + (float)uVar4;
            value.fields.x = fVar11 * ((float)uVar3 - (float)uVar2) + (float)uVar2;
            UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9c1d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      g_data_057a9c1d = '\x01';
      iVar5 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
      pMVar8 = extraout_RDX_00;
    }
    else {
      iVar5 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
      pMVar8 = extraout_RDX;
    }
    if (iVar5 != 0) {
      Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
                ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_01,1,pMVar8);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
              ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_01,1,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Release>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0 (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o* __this, const MethodInfo* method);
// 0x3b2f4e0

void Gisketch_Aottg2UI_Tweening_GisketchButtonRelief___Release_b__31_0
               (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RectangularVertexClipper_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  int iVar3;
  long lVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  UnityEngine_UI_RectMask2D_o *pUVar7;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_01;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar7 = (__this->fields)._pressMask;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (__this->fields)._pressMask;
    if (pUVar7 != (UnityEngine_UI_RectMask2D_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar7,0,(MethodInfo *)0x0);
      return;
    }
    fVar8 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9c1c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c1c = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)(pUVar7->fields).m_CachedPtr;
    if (__this_01 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      fVar9 = *(float *)&(pUVar7->fields).m_CancellationTokenSource;
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__SetRelief
                (__this_01,
                 (*(float *)((long)&(pUVar7->fields).m_CancellationTokenSource + 4) - fVar9) * fVar8 + fVar9,
                 pMVar6);
      lVar4 = (pUVar7->fields).m_CachedPtr;
      if (lVar4 != 0) {
        __this_01 = *(Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o **)(lVar4 + 0x30);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        lVar4 = (pUVar7->fields).m_CachedPtr;
        if (lVar4 != 0) {
          __this_00 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x30);
          __this_01 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar1 = (pUVar7->fields).m_VertexClipper;
            pUVar2 = (pUVar7->fields).m_RectTransform;
            fVar9 = SUB84(pUVar1,0);
            fVar10 = (float)((ulong)pUVar1 >> 0x20);
            value.fields.y = fVar8 * ((float)((ulong)pUVar2 >> 0x20) - fVar10) + fVar10;
            value.fields.x = fVar8 * (SUB84(pUVar2,0) - fVar9) + fVar9;
            UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9c1d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      g_data_057a9c1d = '\x01';
      iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
      pMVar6 = extraout_RDX_00;
    }
    else {
      iVar3 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
      pMVar6 = extraout_RDX;
    }
    if (iVar3 != 0) {
      Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
                ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_01,1,pMVar6);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
              ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_01,1,method_00);
    return;
  }
  return;
}


