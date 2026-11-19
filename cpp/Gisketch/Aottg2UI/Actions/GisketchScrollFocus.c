// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchScrollFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$Reveal
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal (UnityEngine_GameObject_o* focused, float margin, const MethodInfo* method);
// 0x53975c0

void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal
               (UnityEngine_GameObject_o *focused,float margin,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *scroll;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  float fStack_44;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542bcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bcf = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_0539797a;
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (focused,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (focused != (UnityEngine_GameObject_o *)0x0) {
      scroll = UnityEngine_GameObject__GetComponentInParent_object__353bc10
                         (focused,false,
                          (MethodInfo_353BC10 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
      bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar3,scroll,method_01);
      if (!bVar2) {
        return;
      }
      if ((scroll != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar1 = (scroll->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar4,2,(MethodInfo *)0x0);
        fVar5 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset
                          (pUVar3,(scroll->fields).m_Viewport,margin,method_02);
        if (ABS(fVar5) < 0.01) {
          return;
        }
        if (Il2CppMethodInitialized_07542bd4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
          Il2CppMethodInitialized_07542bd4 = '\x01';
        }
        pUVar1 = (scroll->fields).m_Content;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pUVar1 = (scroll->fields).m_Viewport;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            fStack_34 = UVar8.fields.m_Height;
            fStack_34 = fStack_34 - UVar9.fields.m_Height;
            fVar7 = 0.0;
            if (0.0 <= fStack_34) {
              fVar7 = fStack_34;
            }
            (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
                      (scroll,(scroll->klass->vtable)._41_StopMovement.method);
            fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
            fVar6 = fVar6 - fVar5 / fVar7;
            fVar5 = 1.0;
            if (fVar6 <= 1.0) {
              fVar5 = fVar6;
            }
            UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                      (scroll,(float)(-(uint)(0.0 <= fVar6) & (uint)fVar5),(MethodInfo *)0x0);
            pUVar1 = (scroll->fields).m_Content;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
                        (pUVar4,2,(MethodInfo *)0x0);
              fVar5 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset
                                (pUVar3,(scroll->fields).m_Viewport,margin,method_03);
              if (ABS(fVar5) < 0.01) {
                return;
              }
              if (Il2CppMethodInitialized_07542bd4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                Il2CppMethodInitialized_07542bd4 = '\x01';
              }
              pUVar3 = (scroll->fields).m_Content;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                pUVar3 = (scroll->fields).m_Viewport;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar9 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                  fStack_44 = UVar8.fields.m_Height;
                  fStack_44 = fStack_44 - UVar9.fields.m_Height;
                  fVar7 = 0.0;
                  if (0.0 <= fStack_44) {
                    fVar7 = fStack_44;
                  }
                  (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
                            (scroll,(scroll->klass->vtable)._41_StopMovement.method);
                  fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
                  fVar6 = fVar6 - fVar5 / fVar7;
                  fVar5 = 1.0;
                  if (fVar6 <= 1.0) {
                    fVar5 = fVar6;
                  }
                  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                            (scroll,(float)(-(uint)(0.0 <= fVar6) & (uint)fVar5),(MethodInfo *)0x0);
                  pUVar3 = (scroll->fields).m_Content;
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
                              (pUVar4,2,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
                      (pUVar3,(UnityEngine_UI_ScrollRect_o *)0x0,method_00);
    if (!bVar2) {
      return;
    }
  }
label_0539797a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$RevealAtCenter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter (UnityEngine_GameObject_o* focused, const MethodInfo* method);
// 0x53a4710
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a48d7: jmp 0x53a4a14
// asm:   0x53a48ee: jmp 0x53a4a14

void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter
               (UnityEngine_GameObject_o *focused,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *scroll;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Rect_o UVar8;
  float fStack_74;
  float fStack_64;
  float fStack_54;
  UnityEngine_Bounds_o UStack_30;
  
  if (Il2CppMethodInitialized_07542bd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bd0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_053a4a14;
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (focused,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
                      (pUVar3,(UnityEngine_UI_ScrollRect_o *)0x0,method_00);
    if (!bVar2) {
      return;
    }
    goto label_053a4a14;
  }
  if (focused == (UnityEngine_GameObject_o *)0x0) goto label_053a4a14;
  scroll = UnityEngine_GameObject__GetComponentInParent_object__353bc10
                     (focused,false,
                      (MethodInfo_353BC10 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect)
  ;
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar3,scroll,method_01);
  if (!bVar2) {
    return;
  }
  if ((scroll == (UnityEngine_UI_ScrollRect_o *)0x0) ||
     (pUVar1 = (scroll->fields).m_Content, pUVar1 == (UnityEngine_RectTransform_o *)0x0)) goto label_053a4a14;
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar4,2,(MethodInfo *)0x0);
  pUVar1 = (scroll->fields).m_Viewport;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (&UStack_30,(UnityEngine_Transform_o *)pUVar1,(UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0)
  ;
  pUVar3 = (scroll->fields).m_Viewport;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_053a4a14;
  UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    if (Il2CppMethodInitialized_07542bd4 != '\0') goto label_053a48ce;
label_053a4901:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bd4 = '\x01';
    pUVar3 = (scroll->fields).m_Content;
  }
  else {
    if (Il2CppMethodInitialized_07542bd4 == '\0') goto label_053a4901;
label_053a48ce:
    pUVar3 = (scroll->fields).m_Content;
  }
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar3 = (scroll->fields).m_Viewport;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      fStack_74 = UVar7.fields.m_Height;
      fStack_54 = UVar7.fields.m_YMin;
      UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      fStack_64 = UVar8.fields.m_Height;
      fStack_64 = fStack_64 - UVar7.fields.m_Height;
      fVar5 = 0.0;
      if (0.0 <= fStack_64) {
        fVar5 = fStack_64;
      }
      fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
      fVar6 = fVar6 - ((fStack_74 * 0.5 + fStack_54) - UStack_30.fields.m_Center.fields.y) / fVar5;
      fVar5 = 1.0;
      if (fVar6 <= 1.0) {
        fVar5 = fVar6;
      }
      (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
                (scroll,(scroll->klass->vtable)._41_StopMovement.method);
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                (scroll,(float)(-(uint)(0.0 <= fVar6) & (uint)fVar5),(MethodInfo *)0x0);
      pUVar3 = (scroll->fields).m_Content;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar4,2,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_053a4a14:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$IsVisible
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible (UnityEngine_GameObject_o* focused, const MethodInfo* method);
// 0x53a1d80
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a1f02: movaps xmm3, xmm0
// asm:   0x53a1f05: shufps xmm3, xmm0, 0x55
// asm:   0x53a1f09: ucomiss xmm4, xmm3
// asm:   0x53a1f0c: jbe 0x53a1faf
// asm:   0x53a1faf: xor eax, eax
// asm:   0x53a1fb1: jmp 0x53a1f6a

bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
               (UnityEngine_GameObject_o *focused,MethodInfo *method)

{
  UnityEngine_RectTransform_o *root;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *scroll;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Bounds_o local_30;
  
  if (Il2CppMethodInitialized_07542bd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bd1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_053a1fb3;
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (focused,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (focused != (UnityEngine_GameObject_o *)0x0) {
      scroll = UnityEngine_GameObject__GetComponentInParent_object__353bc10
                         (focused,false,
                          (MethodInfo_353BC10 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
      bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar2,scroll,method_01);
      if (!bVar1) {
        return true;
      }
      if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
        root = (scroll->fields).m_Viewport;
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                  (&local_30,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)pUVar2,
                   (MethodInfo *)0x0);
        pUVar2 = (scroll->fields).m_Viewport;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar3 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          if (UVar3.fields.m_YMin < local_30.fields.m_Center.fields.y + local_30.fields.m_Extents.fields.y) {
            if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            return local_30.fields.m_Center.fields.y - local_30.fields.m_Extents.fields.y <
                   UVar3.fields.m_Height + UVar3.fields.m_YMin;
          }
          return false;
        }
      }
    }
  }
  else {
    bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
                      (pUVar2,(UnityEngine_UI_ScrollRect_o *)0x0,method_00);
    if (!bVar1) {
      return true;
    }
  }
label_053a1fb3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$CanScroll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll (UnityEngine_RectTransform_o* target, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x53a4360

bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
               (UnityEngine_RectTransform_o *target,UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542bd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bd2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_053a44c9:
        ThrowNullReferenceException();
      }
      pUVar1 = (scroll->fields).m_Viewport;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (scroll->fields).m_Content;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (Il2CppMethodInitialized_07542bd4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
            Il2CppMethodInitialized_07542bd4 = '\x01';
          }
          pUVar1 = (scroll->fields).m_Content;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            pUVar1 = (scroll->fields).m_Viewport;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
              fStack_34 = UVar4.fields.m_Height;
              fStack_34 = fStack_34 - UVar5.fields.m_Height;
              fVar3 = 0.0;
              if (0.0 <= fStack_34) {
                fVar3 = fStack_34;
              }
              return 0.01 < fVar3;
            }
          }
          goto label_053a44c9;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$VisibilityOffset
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset (UnityEngine_RectTransform_o* target, UnityEngine_RectTransform_o* viewport, float margin, const MethodInfo* method);
// 0x53a44d0

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset
                (UnityEngine_RectTransform_o *target,UnityEngine_RectTransform_o *viewport,float margin,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_07542bd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bd3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
            (&local_28,(UnityEngine_Transform_o *)viewport,(UnityEngine_Transform_o *)target,(MethodInfo *)0x0
            );
  if (viewport == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar4 = UnityEngine_RectTransform__get_rect(viewport,(MethodInfo *)0x0);
  fVar3 = UVar4.fields.m_YMin;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar2 = (local_28.fields.m_Center.fields.y - local_28.fields.m_Extents.fields.y) - margin;
  if (fVar3 <= fVar2) {
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar2 = UVar4.fields.m_Height + fVar3;
    fVar1 = local_28.fields.m_Center.fields.y + local_28.fields.m_Extents.fields.y + margin;
    fVar3 = 0.0;
    if (fVar2 < fVar1) {
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar3 = fVar2 - fVar1;
    }
  }
  else {
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar3 = fVar3 - fVar2;
  }
  return fVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x53a4680

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Rect_o UVar4;
  float fStack_14;
  
  if (Il2CppMethodInitialized_07542bd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bd4 = '\x01';
  }
  if ((scroll != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar1 = (scroll->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (scroll->fields).m_Viewport;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fStack_14 = UVar3.fields.m_Height;
      fStack_14 = fStack_14 - UVar4.fields.m_Height;
      fVar2 = 0.0;
      if (0.0 <= fStack_14) {
        fVar2 = fStack_14;
      }
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


