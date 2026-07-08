// Type: Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollbarVisibility.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x3b1ae40

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
               UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  (__this->fields)._scroll = scroll;
  il2cpp_runtime_glue(&(__this->fields)._scroll);
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
            (__this,(MethodInfo *)scroll);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b1b110

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility(__this,method);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b1ae60

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o **ppUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  undefined3 uVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  UnityEngine_UI_ScrollRect_o *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  bool bVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Rect_o UVar10;
  float fStack_44;
  
  if (DAT_05701554 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701554 = '\x01';
  }
  pUVar7 = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._scroll;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (UnityEngine_UI_ScrollRect_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_ScrollRect_GetComponent_ScrollRect);
    (__this->fields)._scroll = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar7 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return 0;
  }
  if (*ppUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    x = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ScrollSensitivity;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return 0;
    }
    if (*ppUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar2 = ((*ppUVar1)->fields).m_Content;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return 0;
      }
      if (*ppUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar3 = ((*ppUVar1)->fields).m_HorizontalScrollbar;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        method_00 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return 0;
        }
        bVar5 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
                          (__this,method_00);
        pUVar7 = (__this->fields)._scroll;
        if ((pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar7->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          if ((*ppUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar2 = *(UnityEngine_RectTransform_o **)&((*ppUVar1)->fields).m_ScrollSensitivity,
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar10 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            if ((*ppUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (pUVar3 = ((*ppUVar1)->fields).m_HorizontalScrollbar,
               pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
              fStack_44 = UVar9.fields.m_Height;
              fStack_44 = fStack_44 - UVar10.fields.m_Height;
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
              uVar4 = (undefined3)((uint)bVar5 >> 8);
              if (*(char *)((long)&(__this->fields)._autoHeight.fields.hasValue + 2) != '\0') {
                bVar8 = -2.0 < fStack_44;
                if (*(char *)((long)&(__this->fields)._autoHeight.fields.hasValue + 3) == '\0') {
                  bVar8 = 2.0 < fStack_44;
                }
                bVar6 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
                                  (__this,__this_00,(uint)bVar8,(MethodInfo *)(ulong)bVar8);
                return CONCAT31(uVar4,(byte)bVar5 | (byte)bVar6);
              }
              *(bool *)((long)&(__this->fields)._autoHeight.fields.hasValue + 3) = 0.5 < fStack_44;
              *(undefined1 *)((long)&(__this->fields)._autoHeight.fields.hasValue + 2) = 1;
              *(undefined2 *)&(__this->fields)._autoHeight.fields.value = 0;
              (__this->fields)._hasVisibleState = 0;
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                bVar6 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                bVar8 = (byte)((byte)bVar6 ^ 0.5 < fStack_44) == 1;
                if (bVar8) {
                  UnityEngine_GameObject__SetActive
                            (__this_00,(uint)(0.5 < fStack_44),(MethodInfo *)0x0);
                }
                return CONCAT31(uVar4,(byte)bVar5 | bVar8);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$FitAutoHeightToContent
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b1b120

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **ppGVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar3;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar4;
  bool_conflict bVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGVar6;
  ulong uVar7;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  undefined2 local_3a;
  float local_38;
  float fStack_34;
  
  if (DAT_05701555 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_05701555 = '\x01';
  }
  pGVar6 = (__this->fields)._flex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppGVar1 = &(__this->fields)._flex;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar6;
    il2cpp_runtime_glue(ppGVar1);
  }
  pGVar6 = *ppGVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return 0;
  }
  if ((char)(__this->fields)._autoHeight.fields.hasValue == '\0') {
    if (*ppGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b1b377;
    uVar7 = (ulong)((*ppGVar1)->fields)._height.fields >> 0x20;
    local_3a = 0;
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)&local_3a,(uint)(uVar7 == 0 || uVar7 == 3),MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)&(__this->fields)._autoHeight.fields.hasValue = local_3a;
  }
  bVar5 = System_Nullable<bool>__get_Value
                    ((System_Nullable_bool__o)&(__this->fields)._autoHeight,MethodInfo_Boolean_get_Value);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  pUVar2 = (__this->fields)._scroll;
  if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (__this_00 = (pUVar2->fields).m_Content, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar11 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar10 = UVar11.fields.m_Height;
    if (fVar10 <= 0.0) {
      return 0;
    }
    pGVar6 = *ppGVar1;
    if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      GVar3 = (pGVar6->fields)._height.fields;
      GVar4 = (pGVar6->fields)._paddingTop.fields;
      fVar9 = 0.0;
      if ((ulong)GVar4 >> 0x20 == 1) {
        fVar8 = GVar4.Value;
      }
      else {
        fVar8 = 0.0;
      }
      GVar4 = (pGVar6->fields)._paddingBottom.fields;
      if ((ulong)GVar4 >> 0x20 == 1) {
        fVar9 = GVar4.Value;
      }
      fVar9 = fVar10 + fVar8 + fVar9;
      if (((ulong)GVar3 >> 0x20 == 1) && (ABS(GVar3.Value - fVar9) <= 0.5)) {
        return 0;
      }
      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
        local_38 = fVar9;
        fStack_34 = fVar10;
        il2cpp_init_class();
        fVar9 = local_38;
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar9,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_Height(pGVar6,value,(MethodInfo *)0x0);
      return 1;
    }
  }
LAB_03b1b377:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateStableVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_GameObject_o* scrollbar, bool desired, const MethodInfo* method);
// 0x3b1b3c0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
          UnityEngine_GameObject_o *scrollbar,bool_conflict desired,MethodInfo *method)

{
  ushort uVar1;
  bool_conflict bVar2;
  int iVar3;
  bool_conflict bVar4;
  ulong in_RAX;
  uint value;
  byte bVar5;
  undefined8 unaff_R15;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05701556 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05701556 = '\x01';
  }
  bVar5 = *(byte *)((long)&(__this->fields)._autoHeight.fields.hasValue + 3);
  value = desired & 0xff;
  if (value == bVar5) {
    *(undefined2 *)&(__this->fields)._autoHeight.fields.value = 0;
    (__this->fields)._hasVisibleState = 0;
    if (scrollbar == (UnityEngine_GameObject_o *)0x0) {
LAB_03b1b500:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    unaff_R15 = 0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    if ((byte)((byte)bVar2 ^ bVar5 != 0) != 1) {
      return 0;
    }
    UnityEngine_GameObject__SetActive(scrollbar,(uint)(bVar5 != 0),(MethodInfo *)0x0);
  }
  else {
    uVar1 = (ushort)(__this->fields)._autoHeight.fields.value;
    if (((char)uVar1 != '\0') && (bVar5 = (byte)desired, uVar1 < 0x100 != (bool)bVar5)) {
      iVar3 = (__this->fields)._hasVisibleState + 1;
      (__this->fields)._hasVisibleState = iVar3;
      bVar2 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
      if (iVar3 < 2) {
        return bVar2;
      }
      *(byte *)((long)&(__this->fields)._autoHeight.fields.hasValue + 3) = bVar5;
      *(undefined2 *)&(__this->fields)._autoHeight.fields.value = 0;
      (__this->fields)._hasVisibleState = 0;
      if (scrollbar != (UnityEngine_GameObject_o *)0x0) {
        bVar4 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
        if ((byte)((byte)bVar4 ^ bVar5) != 1) {
          return bVar2;
        }
        UnityEngine_GameObject__SetActive(scrollbar,value,(MethodInfo *)0x0);
        return bVar2;
      }
      goto LAB_03b1b500;
    }
    uStack_38 = uStack_38 & 0xffffffffffff;
    System_Nullable<bool>___ctor((System_Nullable_bool__o)((long)&uStack_38 + 6),value,MethodInfo_Nullable_1_Boolean)
    ;
    *(undefined2 *)&(__this->fields)._autoHeight.fields.value = uStack_38._6_2_;
    (__this->fields)._hasVisibleState = 1;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$ApplyVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility (UnityEngine_GameObject_o* scrollbar, bool visible, const MethodInfo* method);
// 0x3b1b380

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility
          (UnityEngine_GameObject_o *scrollbar,bool_conflict visible,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  
  if (scrollbar != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    bVar2 = (byte)((byte)bVar1 ^ (byte)visible) == 1;
    if (bVar2) {
      UnityEngine_GameObject__SetActive(scrollbar,visible & 0xff,(MethodInfo *)0x0);
    }
    return (uint)bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Point
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point (Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1b510

float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point
                (Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  if ((ulong)value.fields >> 0x20 != 1) {
    return 0.0;
  }
  return value.fields.Value;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b1b530

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


