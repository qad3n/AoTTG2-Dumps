// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchScrollFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$Reveal
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal (UnityEngine_GameObject_o* focused, float margin, const MethodInfo* method);
// 0x3b8ccb0

void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal
               (UnityEngine_GameObject_o *focused,float margin,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  long lVar3;
  undefined4 uVar4;
  bool_conflict bVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_ScrollRect_o *scroll;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_05;
  int32_t index;
  UnityEngine_UI_ScrollRect_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  UnityEngine_Rect_o UVar14;
  UnityEngine_Rect_o UVar15;
  undefined1 local_38 [16];
  float fStack_28;
  
  if (g_data_057a9eff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eff = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  index = 0;
  __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)focused;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_03b8d0ab;
    pUVar6 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(focused,MethodInfo_RectTransform_GetComponent_RectTransform)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  index = 0;
  __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)focused;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar7 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_03b8d0ab;
    scroll = (UnityEngine_UI_ScrollRect_o *)
             UnityEngine_GameObject__GetComponentInParent_object__255a6c0(focused,0,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    pMVar7 = extraout_RDX_00;
  }
  pUVar8 = scroll;
  bVar5 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar6,scroll,pMVar7);
  index = (int32_t)pUVar8;
  if ((char)bVar5 == '\0') {
    return;
  }
  __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar2 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
    if (g_data_057a9f02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057a9f02 = '\x01';
    }
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)local_38;
    pUVar9 = pUVar2;
    UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
              ((UnityEngine_Bounds_o *)__this,(UnityEngine_Transform_o *)pUVar2,
               (UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
    fVar11 = fStack_28;
    uVar4 = local_38._4_4_;
    index = (int32_t)pUVar9;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      index = 0;
      UVar14 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      fVar10 = UVar14.fields.m_YMin;
      fVar13 = ((float)uVar4 - fVar11) - margin;
      if (fVar10 <= fVar13) {
        fVar13 = UVar14.fields.m_Height + fVar10;
        fVar11 = fVar11 + (float)uVar4 + margin;
        fVar10 = 0.0;
        if (fVar13 < fVar11) {
          fVar10 = fVar13 - fVar11;
        }
      }
      else {
        fVar10 = fVar10 - fVar13;
      }
      if (ABS(fVar10) < 0.01) {
        return;
      }
      pUVar2 = (scroll->fields).m_Content;
      __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        index = 0;
        UVar14 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pUVar2 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
        __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar15 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar13 = UVar14.fields.m_Height - UVar15.fields.m_Height;
          fVar11 = 0.0;
          if (0.0 <= fVar13) {
            fVar11 = fVar13;
          }
          (*(scroll->klass->vtable)._41_StopMovement.methodPtr)(scroll);
          fVar13 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
          fVar13 = fVar13 - fVar10 / fVar11;
          fVar11 = 1.0;
          if (fVar13 <= 1.0) {
            fVar11 = fVar13;
          }
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                    (scroll,(float)(-(uint)(0.0 <= fVar13) & (uint)fVar11),(MethodInfo *)0x0);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar2 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
          if (g_data_057a9f02 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9f02 = '\x01';
          }
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)local_38;
          pUVar9 = pUVar2;
          UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                    ((UnityEngine_Bounds_o *)__this,(UnityEngine_Transform_o *)pUVar2,
                     (UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0);
          index = (int32_t)pUVar9;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            index = 0;
            UVar14 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            fVar11 = UVar14.fields.m_YMin;
            fVar10 = ((float)local_38._4_4_ - fStack_28) - margin;
            if (fVar11 <= fVar10) {
              fVar10 = UVar14.fields.m_Height + fVar11;
              fVar13 = fStack_28 + (float)local_38._4_4_ + margin;
              fVar11 = 0.0;
              if (fVar10 < fVar13) {
                fVar11 = fVar10 - fVar13;
              }
            }
            else {
              fVar11 = fVar11 - fVar10;
            }
            if (ABS(fVar11) < 0.01) {
              return;
            }
            pUVar6 = (scroll->fields).m_Content;
            __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
            if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
              index = 0;
              UVar14 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
              pUVar6 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
              __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                UVar15 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
                fVar13 = UVar14.fields.m_Height - UVar15.fields.m_Height;
                fVar10 = 0.0;
                if (0.0 <= fVar13) {
                  fVar10 = fVar13;
                }
                (*(scroll->klass->vtable)._41_StopMovement.methodPtr)(scroll);
                fVar13 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
                fVar13 = fVar13 - fVar11 / fVar10;
                fVar11 = 1.0;
                if (fVar13 <= 1.0) {
                  fVar11 = fVar13;
                }
                UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                          (scroll,(float)(-(uint)(0.0 <= fVar13) & (uint)fVar11),(MethodInfo *)0x0);
                UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_03b8d0ab:
  uVar12 = il2cpp_runtime_helper_022b2c90();
  if ((char)(__this->fields)._pointerSelectionLocked != '\0') {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar11 = (float)uVar12 - UVar1.x;
    fVar10 = (float)((ulong)uVar12 >> 0x20) - UVar1.y;
    if (fVar10 * fVar10 + fVar11 * fVar11 < 4.0) {
      return;
    }
    *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 0;
  }
  pMVar7 = extraout_RDX_01;
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    pMVar7 = extraout_RDX_02;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    pMVar7 = extraout_RDX_03;
  }
  lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar3 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      lVar3 = *(long *)(lVar3 + 0x10);
      pMVar7 = extraout_RDX_05;
    }
    else {
      *(undefined4 *)(lVar3 + 0x18) = 0;
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      pMVar7 = extraout_RDX_04;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this,index,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$IsVisible
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible (UnityEngine_GameObject_o* focused, const MethodInfo* method);
// 0x3b96640

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(UnityEngine_GameObject_o *focused,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  UnityEngine_Vector2_o size_01;
  UnityEngine_Vector2_o size_02;
  UnityEngine_Vector2_o size_03;
  UnityEngine_Vector2_o size_04;
  UnityEngine_Vector2_o size_05;
  UnityEngine_Vector2_o size_06;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *target;
  UnityEngine_UI_ScrollRect_o *scroll;
  System_Delegate_o *pSVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Delegate_o *b;
  undefined8 uVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  System_Delegate_o *a;
  char cVar14;
  UnityEngine_UI_ScrollRect_o *pUVar15;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this;
  bool bVar16;
  undefined8 extraout_XMM0_Qa;
  UnityEngine_Vector2_o value;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Bounds_o local_38;
  
  if (g_data_057a9f00 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057a9f00 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  target = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0;
  cVar14 = '\0';
  __this = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)focused;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_03b966d7:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
    cVar14 = '\0';
    __this = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)focused;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((char)bVar3 != '\0') {
      if (focused == (UnityEngine_GameObject_o *)0x0) goto label_03b967d1;
      scroll = (UnityEngine_UI_ScrollRect_o *)
               UnityEngine_GameObject__GetComponentInParent_object__255a6c0(focused,0,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
      method_00 = extraout_RDX_00;
    }
    pUVar15 = scroll;
    __this = target;
    bVar3 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
                      ((UnityEngine_RectTransform_o *)target,scroll,method_00);
    cVar14 = (char)pUVar15;
    if ((char)bVar3 == '\0') {
      return 0x557bb01;
    }
    if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar9 = *(UnityEngine_Transform_o **)&(scroll->fields).m_ScrollSensitivity;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                (&local_38,pUVar9,(UnityEngine_Transform_o *)target,(MethodInfo *)0x0);
      cVar14 = (char)pUVar9;
      pUVar10 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
      __this = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0;
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UVar17 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
        if (local_38.fields.m_Center.fields.y + local_38.fields.m_Extents.fields.y <= UVar17.fields.m_YMin) {
          return 0;
        }
        return (uint)(local_38.fields.m_Center.fields.y - local_38.fields.m_Extents.fields.y <
                     UVar17.fields.m_Height + UVar17.fields.m_YMin);
      }
    }
  }
  else if (focused != (UnityEngine_GameObject_o *)0x0) {
    target = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)
             UnityEngine_GameObject__GetComponent_object_(focused,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b966d7;
  }
label_03b967d1:
  pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ef5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Refresh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Focus Ring");
    il2cpp_runtime_helper_023445d0(&"Top Left");
    il2cpp_runtime_helper_023445d0(&"Bottom Left");
    il2cpp_runtime_helper_023445d0(&"Top Right");
    pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_023445d0(&"Bottom Right");
    g_data_057a9ef5 = '\x01';
  }
  if (cVar14 == '\0') {
label_03b96e47:
    return (bool_conflict)pSVar5;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = (System_Delegate_o *)(ulong)uVar4;
  if ((char)uVar4 != '\0') goto label_03b96e47;
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b96e54:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar6 != (System_Type_o *)0x0) &&
       (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6,(((components->obj).klass)->_1).element_class), lVar7 == 0))
    goto label_03b96e5e;
    if ((int)components->max_length != 0) {
      ppUVar1 = &(__this->fields)._ring;
      components->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar6);
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar8,"AoTTG Focus Ring",components,(MethodInfo *)0x0);
      *ppUVar1 = pUVar8;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar9,parent,0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar10 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar10,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                         ,(MethodInfo *)0x0);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar10,(UnityEngine_Vector2_o)
                                 *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                         (MethodInfo *)0x0);
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar10,(UnityEngine_Vector2_o)(CONCAT44(in_XMM3_Da,in_XMM3_Da) ^ 0x8000000080000000)
                         ,(MethodInfo *)0x0);
              value.fields.y = in_XMM3_Da;
              value.fields.x = in_XMM3_Da;
              UnityEngine_RectTransform__set_offsetMax(pUVar10,value,(MethodInfo *)0x0);
              pSVar12 = "Top Left";
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color.fields.a = (float)in_XMM1_Db;
              color.fields.b = (float)in_XMM1_Da;
              color.fields.r = (float)(int)extraout_XMM0_Qa;
              color.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              size.fields.y = in_XMM2_Da;
              size.fields.x = in_XMM4_Da;
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar11,color,(UnityEngine_Vector2_o)0x3f80000000000000,
                         (UnityEngine_Vector2_o)0x3f80000000000000,size,method_01);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_00.fields.a = (float)in_XMM1_Db;
              color_00.fields.b = (float)in_XMM1_Da;
              color_00.fields.r = (float)(int)extraout_XMM0_Qa;
              color_00.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              size_00.fields.y = in_XMM4_Da;
              size_00.fields.x = in_XMM2_Da;
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar12,color_00,(UnityEngine_Vector2_o)0x3f80000000000000,
                         (UnityEngine_Vector2_o)0x3f80000000000000,size_00,method_02);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              pSVar12 = "Top Right";
              UVar2 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color_01.fields.a = (float)in_XMM1_Db;
              color_01.fields.b = (float)in_XMM1_Da;
              size_01.fields.y = in_XMM2_Da;
              size_01.fields.x = in_XMM4_Da;
              color_01.fields.r = (float)(int)extraout_XMM0_Qa;
              color_01.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar11,color_01,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_01,method_03);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_02.fields.a = (float)in_XMM1_Db;
              color_02.fields.b = (float)in_XMM1_Da;
              size_04.fields.y = in_XMM4_Da;
              size_04.fields.x = in_XMM2_Da;
              color_02.fields.r = (float)(int)extraout_XMM0_Qa;
              color_02.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar12,color_02,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_04,method_04);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              pSVar12 = "Bottom Left";
              UVar2 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color_03.fields.a = (float)in_XMM1_Db;
              color_03.fields.b = (float)in_XMM1_Da;
              size_02.fields.y = in_XMM2_Da;
              size_02.fields.x = in_XMM4_Da;
              color_03.fields.r = (float)(int)extraout_XMM0_Qa;
              color_03.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar11,color_03,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_02,method_05);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_04.fields.a = (float)in_XMM1_Db;
              color_04.fields.b = (float)in_XMM1_Da;
              size_05.fields.y = in_XMM4_Da;
              size_05.fields.x = in_XMM2_Da;
              color_04.fields.r = (float)(int)extraout_XMM0_Qa;
              color_04.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar12,color_04,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_05,method_06);
              pSVar12 = "Bottom Right";
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color_05.fields.a = (float)in_XMM1_Db;
              color_05.fields.b = (float)in_XMM1_Da;
              size_03.fields.y = in_XMM2_Da;
              size_03.fields.x = in_XMM4_Da;
              color_05.fields.r = (float)(int)extraout_XMM0_Qa;
              color_05.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar11,color_05,(UnityEngine_Vector2_o)0x3f800000,
                         (UnityEngine_Vector2_o)0x3f800000,size_03,method_07);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_06.fields.a = (float)in_XMM1_Db;
              color_06.fields.b = (float)in_XMM1_Da;
              size_06.fields.y = in_XMM4_Da;
              size_06.fields.x = in_XMM2_Da;
              color_06.fields.r = (float)(int)extraout_XMM0_Qa;
              color_06.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this,pSVar12,color_06,(UnityEngine_Vector2_o)0x3f800000,
                         (UnityEngine_Vector2_o)0x3f800000,size_06,method_08);
              pUVar8 = (__this->fields)._ring;
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
                b = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                if (g_data_057a9ee9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
                  g_data_057a9ee9 = '\x01';
                }
                a = *(System_Delegate_o **)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10);
                do {
                  pSVar5 = System_Delegate__Combine(a,b,(MethodInfo *)0x0);
                  if ((pSVar5 != (System_Delegate_o *)0x0) && (pSVar5->klass != TypeInfo_Action)) {
                    pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_022b2fd0(pSVar5);
                    break;
                  }
                  pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10,pSVar5,a);
                  bVar16 = a != pSVar5;
                  a = pSVar5;
                } while (bVar16);
                goto label_03b96e47;
              }
            }
          }
        }
      }
      goto label_03b96e54;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b96e5e:
  uVar13 = il2cpp_runtime_helper_0231b270();
  bVar3 = il2cpp_runtime_helper_022b2b10(uVar13,0);
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$CanScroll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll (UnityEngine_RectTransform_o* target, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x3b979b0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
          (UnityEngine_RectTransform_o *target,UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *child;
  UnityEngine_Bounds_o *__return_storage_ptr__;
  Il2CppObject *__this;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Bounds_o local_60;
  UnityEngine_RectTransform_o *pUStack_48;
  UnityEngine_UI_ScrollRect_o *pUStack_40;
  float local_38;
  float fStack_34;
  
  if (g_data_057a9f01 == '\0') {
    pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b979d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f01 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b979f6;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a05;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a1f;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a2e;
    child = scroll;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_03b97ae6:
        pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97aeb;
        fVar4 = (float)il2cpp_runtime_helper_022b2c90();
        pUStack_48 = target;
        pUStack_40 = scroll;
        if (g_data_057a9f02 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057a9f02 = '\x01';
        }
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __return_storage_ptr__ = &local_60;
        UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                  (__return_storage_ptr__,(UnityEngine_Transform_o *)pUVar3,(UnityEngine_Transform_o *)child,
                   (MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
          fVar4 = (float)il2cpp_runtime_helper_022b2c90();
          if ((__return_storage_ptr__ != (UnityEngine_Bounds_o *)0x0) &&
             (pUVar3 = *(UnityEngine_RectTransform_o **)&__return_storage_ptr__[1].fields.m_Center.fields.z,
             pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar5 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
            fVar4 = UVar5.fields.m_XMin;
            pUVar3 = *(UnityEngine_RectTransform_o **)&__return_storage_ptr__[2].fields.m_Extents.fields.y;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
              return extraout_EAX_00;
            }
          }
          __this = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b2c90(fVar4);
          System_Object___ctor(__this,(MethodInfo *)0x0);
          return extraout_EAX_01;
        }
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        if (UVar5.fields.m_YMin <=
            (local_60.fields.m_Center.fields.y - local_60.fields.m_Extents.fields.y) - fVar4) {
          return extraout_EAX;
        }
        return extraout_EAX;
      }
      x = *(UnityEngine_Object_o **)&(scroll->fields).m_ScrollSensitivity;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a55;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a64;
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        target = (scroll->fields).m_Content;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a7e;
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
        pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97a8d;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar1 = (scroll->fields).m_Content;
          child = (UnityEngine_UI_ScrollRect_o *)0x0;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
            pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97aa1;
            UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            local_38 = UVar5.fields.m_Height;
            pUVar1 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
            child = (UnityEngine_UI_ScrollRect_o *)0x0;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              pUStack_40 = (UnityEngine_UI_ScrollRect_o *)0x3b97ab9;
              fStack_34 = local_38;
              UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
              local_38 = local_38 - UVar5.fields.m_Height;
              fVar4 = 0.0;
              if (0.0 <= local_38) {
                fVar4 = local_38;
              }
              return (uint)(0.01 < fVar4);
            }
          }
          goto label_03b97ae6;
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$VisibilityOffset
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset (UnityEngine_RectTransform_o* target, UnityEngine_RectTransform_o* viewport, float margin, const MethodInfo* method);
// 0x3b97af0

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset
                (UnityEngine_RectTransform_o *target,UnityEngine_RectTransform_o *viewport,float margin,
                MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Bounds_o *__return_storage_ptr__;
  Il2CppObject *__this;
  float extraout_XMM0_Da;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Bounds_o UStack_28;
  
  if (g_data_057a9f02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057a9f02 = '\x01';
  }
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __return_storage_ptr__ = &UStack_28;
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (__return_storage_ptr__,(UnityEngine_Transform_o *)viewport,(UnityEngine_Transform_o *)target,
             (MethodInfo *)0x0);
  if (viewport != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(viewport,(MethodInfo *)0x0);
    fVar2 = UVar5.fields.m_YMin;
    fVar3 = (UStack_28.fields.m_Center.fields.y - UStack_28.fields.m_Extents.fields.y) - margin;
    if (fVar3 < fVar2) {
      return fVar2 - fVar3;
    }
    fVar2 = UVar5.fields.m_Height + fVar2;
    fVar4 = UStack_28.fields.m_Extents.fields.y + UStack_28.fields.m_Center.fields.y + margin;
    fVar3 = 0.0;
    if (fVar2 < fVar4) {
      fVar3 = fVar2 - fVar4;
    }
    return fVar3;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  if ((__return_storage_ptr__ != (UnityEngine_Bounds_o *)0x0) &&
     (pUVar1 = *(UnityEngine_RectTransform_o **)&__return_storage_ptr__[1].fields.m_Center.fields.z,
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    fVar2 = UVar5.fields.m_XMin;
    pUVar1 = *(UnityEngine_RectTransform_o **)&__return_storage_ptr__[2].fields.m_Extents.fields.y;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar3 = UVar5.fields.m_Height - UVar6.fields.m_Height;
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar3;
      }
      return fVar2;
    }
  }
  __this = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90(fVar2);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x3b97be0

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  Il2CppObject *__this;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((scroll != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar1 = (scroll->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar3 = UVar4.fields.m_Height - UVar5.fields.m_Height;
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar3;
      }
      return fVar2;
    }
  }
  __this = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


