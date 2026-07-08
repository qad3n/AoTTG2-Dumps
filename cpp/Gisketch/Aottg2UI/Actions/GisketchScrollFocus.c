// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchScrollFocus.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$Reveal
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal (UnityEngine_GameObject_o* focused, float margin, const MethodInfo* method);
// 0x3b20af0

void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal
               (UnityEngine_GameObject_o *focused,float margin,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *scroll;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Bounds_o local_38;
  
  if (DAT_057015c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto LAB_03b20eeb;
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>(focused,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar2 != '\0') {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto LAB_03b20eeb;
    scroll = (UnityEngine_UI_ScrollRect_o *)
             UnityEngine_GameObject__GetComponentInParent<object>(focused,0,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    method_00 = extraout_RDX_00;
  }
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar3,scroll,method_00);
  if ((char)bVar2 == '\0') {
    return;
  }
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar1 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
    if (DAT_057015ca == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
      DAT_057015ca = '\x01';
    }
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
              (&local_38,(UnityEngine_Transform_o *)pUVar1,(UnityEngine_Transform_o *)pUVar3,
               (MethodInfo *)0x0);
    fVar6 = local_38.fields.m_Extents.fields.y;
    fVar5 = local_38.fields.m_Center.fields.y;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar4 = UVar8.fields.m_YMin;
      fVar7 = (fVar5 - fVar6) - margin;
      if (fVar4 <= fVar7) {
        fVar7 = UVar8.fields.m_Height + fVar4;
        fVar5 = fVar6 + fVar5 + margin;
        fVar4 = 0.0;
        if (fVar7 < fVar5) {
          fVar4 = fVar7 - fVar5;
        }
      }
      else {
        fVar4 = fVar4 - fVar7;
      }
      if (ABS(fVar4) < 0.01) {
        return;
      }
      pUVar1 = (scroll->fields).m_Content;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        pUVar1 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
          fVar6 = UVar8.fields.m_Height - UVar9.fields.m_Height;
          fVar5 = 0.0;
          if (0.0 <= fVar6) {
            fVar5 = fVar6;
          }
          (*(scroll->klass->vtable)._41_StopMovement.methodPtr)(scroll);
          fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                            (scroll,(MethodInfo *)0x0);
          fVar6 = fVar6 - fVar4 / fVar5;
          fVar5 = 1.0;
          if (fVar6 <= 1.0) {
            fVar5 = fVar6;
          }
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                    (scroll,(float)(-(uint)(0.0 <= fVar6) & (uint)fVar5),(MethodInfo *)0x0);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar1 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
          if (DAT_057015ca == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
            DAT_057015ca = '\x01';
          }
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                    (&local_38,(UnityEngine_Transform_o *)pUVar1,(UnityEngine_Transform_o *)pUVar3,
                     (MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            fVar5 = UVar8.fields.m_YMin;
            fVar6 = (local_38.fields.m_Center.fields.y - local_38.fields.m_Extents.fields.y) -
                    margin;
            if (fVar5 <= fVar6) {
              fVar6 = UVar8.fields.m_Height + fVar5;
              fVar4 = local_38.fields.m_Extents.fields.y + local_38.fields.m_Center.fields.y +
                      margin;
              fVar5 = 0.0;
              if (fVar6 < fVar4) {
                fVar5 = fVar6 - fVar4;
              }
            }
            else {
              fVar5 = fVar5 - fVar6;
            }
            if (ABS(fVar5) < 0.01) {
              return;
            }
            pUVar3 = (scroll->fields).m_Content;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
              pUVar3 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                UVar9 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                fVar4 = UVar8.fields.m_Height - UVar9.fields.m_Height;
                fVar6 = 0.0;
                if (0.0 <= fVar4) {
                  fVar6 = fVar4;
                }
                (*(scroll->klass->vtable)._41_StopMovement.methodPtr)(scroll);
                fVar4 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                  (scroll,(MethodInfo *)0x0);
                fVar4 = fVar4 - fVar5 / fVar6;
                fVar5 = 1.0;
                if (fVar4 <= 1.0) {
                  fVar5 = fVar4;
                }
                UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                          (scroll,(float)(-(uint)(0.0 <= fVar4) & (uint)fVar5),(MethodInfo *)0x0);
                UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03b20eeb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$IsVisible
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible (UnityEngine_GameObject_o* focused, const MethodInfo* method);
// 0x3b29c20

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
          (UnityEngine_GameObject_o *focused,MethodInfo *method)

{
  UnityEngine_Transform_o *root;
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *scroll;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Bounds_o local_38;
  
  if (DAT_057015c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057015c8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto LAB_03b29db1;
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>(focused,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar1 != '\0') {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto LAB_03b29db1;
    scroll = (UnityEngine_UI_ScrollRect_o *)
             UnityEngine_GameObject__GetComponentInParent<object>(focused,0,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    method_00 = extraout_RDX_00;
  }
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar2,scroll,method_00);
  if ((char)bVar1 == '\0') {
    return 0x54d6d01;
  }
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    root = *(UnityEngine_Transform_o **)&(scroll->fields).m_ScrollSensitivity;
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
              (&local_38,root,(UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
    pUVar2 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      if (local_38.fields.m_Center.fields.y + local_38.fields.m_Extents.fields.y <=
          UVar3.fields.m_YMin) {
        return 0;
      }
      return (uint)(local_38.fields.m_Center.fields.y - local_38.fields.m_Extents.fields.y <
                   UVar3.fields.m_Height + UVar3.fields.m_YMin);
    }
  }
LAB_03b29db1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$CanScroll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll (UnityEngine_RectTransform_o* target, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x3b2ae80

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
          (UnityEngine_RectTransform_o *target,UnityEngine_UI_ScrollRect_o *scroll,
          MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  if (DAT_057015c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015c9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
LAB_03b2afb6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x = *(UnityEngine_Object_o **)&(scroll->fields).m_ScrollSensitivity;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar1 = (scroll->fields).m_Content;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar1 = (scroll->fields).m_Content;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            pUVar1 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
              fVar4 = UVar5.fields.m_Height - UVar6.fields.m_Height;
              fVar3 = 0.0;
              if (0.0 <= fVar4) {
                fVar3 = fVar4;
              }
              return (uint)(0.01 < fVar3);
            }
          }
          goto LAB_03b2afb6;
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$VisibilityOffset
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset (UnityEngine_RectTransform_o* target, UnityEngine_RectTransform_o* viewport, float margin, const MethodInfo* method);
// 0x3b2afc0

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset
                (UnityEngine_RectTransform_o *target,UnityEngine_RectTransform_o *viewport,
                float margin,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Bounds_o UStack_28;
  
  if (DAT_057015ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057015ca = '\x01';
  }
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (&UStack_28,(UnityEngine_Transform_o *)viewport,(UnityEngine_Transform_o *)target,
             (MethodInfo *)0x0);
  if (viewport != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_rect(viewport,(MethodInfo *)0x0);
    fVar1 = UVar4.fields.m_YMin;
    fVar2 = (UStack_28.fields.m_Center.fields.y - UStack_28.fields.m_Extents.fields.y) - margin;
    if (fVar2 < fVar1) {
      return fVar1 - fVar2;
    }
    fVar1 = UVar4.fields.m_Height + fVar1;
    fVar3 = UStack_28.fields.m_Extents.fields.y + UStack_28.fields.m_Center.fields.y + margin;
    fVar2 = 0.0;
    if (fVar1 < fVar3) {
      fVar2 = fVar1 - fVar3;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x3b2b0b0

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  float fVar2;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


