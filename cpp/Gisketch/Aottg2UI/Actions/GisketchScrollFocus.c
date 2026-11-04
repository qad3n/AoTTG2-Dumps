// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchScrollFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$Reveal
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal (UnityEngine_GameObject_o* focused, float margin, const MethodInfo* method);
// 0x181904370
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1819044c9: nop dword ptr [rax]
// asm:   0x1819044db: movdqa xmm14, xmmword ptr [rip + 0x1a5476c]
// asm:   0x1819044e4: xorps xmm12, xmm12
// asm:   0x1819044e8: movss xmm15, dword ptr [rip + 0x1a5511f]
// asm:   0x1819044f1: movss xmm13, dword ptr [rip + 0x1a5470e]
// asm:   0x1819044fa: nop word ptr [rax + rax]

void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal
               (UnityEngine_GameObject_o *focused,float margin,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_ScrollRect_o *scroll;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Bounds_o *pUVar6;
  UnityEngine_Rect_o *pUVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o local_d8;
  UnityEngine_Bounds_o local_c8 [8];
  
  if (Il2CppMethodInitialized_184342250 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342250 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_18190477a;
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (focused,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_18190477a;
    scroll = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (focused,false,
                        (MethodInfo_6F5300 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect
                       );
  }
  else {
    scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  }
  bVar3 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar4,scroll,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  iVar8 = 0;
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    do {
      pUVar2 = (scroll->fields).m_Content;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_18190477a;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar5,2,(MethodInfo *)0x0);
      pUVar2 = (scroll->fields).m_Viewport;
      if (Il2CppMethodInitialized_184342254 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
        Il2CppMethodInitialized_184342254 = '\x01';
      }
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      pUVar6 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                         (local_c8,(UnityEngine_Transform_o *)pUVar2,(UnityEngine_Transform_o *)pUVar4,
                          (MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_18190477a;
      fVar9 = (pUVar6->fields).m_Center.fields.y;
      fVar10 = (pUVar6->fields).m_Extents.fields.y;
      pUVar7 = UnityEngine_RectTransform__get_rect(&local_d8,pUVar2,(MethodInfo *)0x0);
      fVar11 = (pUVar7->fields).m_YMin;
      fVar1 = (pUVar7->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((fVar9 - fVar10) - margin < fVar11) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar9 = (fVar9 - fVar10) - margin;
label_18190465c:
        fVar11 = fVar11 - fVar9;
      }
      else {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fVar11 + fVar1 < fVar9 + fVar10 + margin) {
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          fVar11 = fVar11 + fVar1;
          fVar9 = fVar9 + fVar10 + margin;
          goto label_18190465c;
        }
        fVar11 = 0.0;
      }
      if (ABS(fVar11) < 0.01) {
        return;
      }
      fVar9 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY(scroll,(MethodInfo *)0x0);
      (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
                (scroll,(scroll->klass->vtable)._41_StopMovement.method);
      fVar10 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
      fVar10 = fVar10 - fVar11 / fVar9;
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      else if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(scroll,fVar10,(MethodInfo *)0x0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    pUVar4 = (scroll->fields).m_Content;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar5,2,(MethodInfo *)0x0);
      return;
    }
  }
label_18190477a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$RevealAtCenter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter (UnityEngine_GameObject_o* focused, const MethodInfo* method);
// 0x181904040

void Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter
               (UnityEngine_GameObject_o *focused,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_RectTransform_o *pUVar4;
  bool bVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_ScrollRect_o *scroll;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Bounds_o *pUVar8;
  UnityEngine_Rect_o *pUVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Bounds_o local_78 [4];
  
  if (Il2CppMethodInitialized_184342251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342251 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_18190435b;
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (focused,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_18190435b;
    scroll = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (focused,false,
                        (MethodInfo_6F5300 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect
                       );
  }
  else {
    scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  }
  bVar5 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar6,scroll,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if ((scroll != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar4 = (scroll->fields).m_Content, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar7,2,(MethodInfo *)0x0);
    pUVar4 = (scroll->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    pUVar8 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                       (local_78,(UnityEngine_Transform_o *)pUVar4,(UnityEngine_Transform_o *)pUVar6,
                        (MethodInfo *)0x0);
    pUVar6 = (scroll->fields).m_Viewport;
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      fVar1 = (pUVar8->fields).m_Center.fields.y;
      pUVar9 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_78,pUVar6,(MethodInfo *)0x0);
      fVar2 = (pUVar9->fields).m_YMin;
      fVar3 = (pUVar9->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (Il2CppMethodInitialized_184342255 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
        Il2CppMethodInitialized_184342255 = '\x01';
      }
      pUVar6 = (scroll->fields).m_Content;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar9 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_78,pUVar6,(MethodInfo *)0x0);
        fVar11 = (pUVar9->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar6 = (scroll->fields).m_Viewport;
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar9 = UnityEngine_RectTransform__get_rect
                             ((UnityEngine_Rect_o *)local_78,pUVar6,(MethodInfo *)0x0);
          fVar11 = fVar11 - (pUVar9->fields).m_Height;
          fVar10 = 0.0;
          if (0.0 <= fVar11) {
            fVar10 = fVar11;
          }
          fVar11 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
          fVar11 = fVar11 - ((fVar3 * 0.5 + fVar2) - fVar1) / fVar10;
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          else if (1.0 < fVar11) {
            fVar11 = 1.0;
          }
          (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
                    (scroll,(scroll->klass->vtable)._41_StopMovement.method);
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(scroll,fVar11,(MethodInfo *)0x0);
          pUVar6 = (scroll->fields).m_Content;
          if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar7,2,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
  }
label_18190435b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$IsVisible
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible (UnityEngine_GameObject_o* focused, const MethodInfo* method);
// 0x181903d70

bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
               (UnityEngine_GameObject_o *focused,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_RectTransform_o *root;
  bool bVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_ScrollRect_o *scroll;
  UnityEngine_Bounds_o *pUVar7;
  UnityEngine_Rect_o *pUVar8;
  UnityEngine_Bounds_o local_78 [4];
  
  if (Il2CppMethodInitialized_184342252 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342252 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_181903f96;
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (focused,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)focused,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (focused == (UnityEngine_GameObject_o *)0x0) goto label_181903f96;
    scroll = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (focused,false,
                        (MethodInfo_6F5300 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect
                       );
  }
  else {
    scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  }
  bVar5 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar6,scroll,(MethodInfo *)0x0);
  if (!bVar5) {
    return true;
  }
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    root = (scroll->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    pUVar7 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                       (local_78,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)pUVar6,
                        (MethodInfo *)0x0);
    pUVar6 = (scroll->fields).m_Viewport;
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      fVar1 = (pUVar7->fields).m_Center.fields.y;
      fVar2 = (pUVar7->fields).m_Extents.fields.y;
      pUVar8 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_78,pUVar6,(MethodInfo *)0x0);
      fVar3 = (pUVar8->fields).m_YMin;
      fVar4 = (pUVar8->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar3 < fVar2 + fVar1) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        bVar5 = fVar1 - fVar2 < fVar3 + fVar4;
      }
      else {
        bVar5 = false;
      }
      return bVar5;
    }
  }
label_181903f96:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$CanScroll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll (UnityEngine_RectTransform_o* target, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x181903c60

bool Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
               (UnityEngine_RectTransform_o *target,UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184342253 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342253 = '\x01';
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
          fVar3 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY(scroll,(MethodInfo *)0x0);
          return 0.01 < fVar3;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$VisibilityOffset
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset (UnityEngine_RectTransform_o* target, UnityEngine_RectTransform_o* viewport, float margin, const MethodInfo* method);
// 0x181904780

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__VisibilityOffset
                (UnityEngine_RectTransform_o *target,UnityEngine_RectTransform_o *viewport,float margin,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Bounds_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Bounds_o local_88 [5];
  
  if (Il2CppMethodInitialized_184342254 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342254 = '\x01';
  }
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  pUVar3 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                     (local_88,(UnityEngine_Transform_o *)viewport,(UnityEngine_Transform_o *)target,
                      (MethodInfo *)0x0);
  if (viewport != (UnityEngine_RectTransform_o *)0x0) {
    fVar5 = (pUVar3->fields).m_Center.fields.y;
    fVar1 = (pUVar3->fields).m_Extents.fields.y;
    pUVar4 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_88,viewport,(MethodInfo *)0x0);
    fVar6 = (pUVar4->fields).m_YMin;
    fVar2 = (pUVar4->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if ((fVar5 - fVar1) - margin < fVar6) {
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar5 = (fVar5 - fVar1) - margin;
    }
    else {
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar5 + fVar1 + margin <= fVar6 + fVar2) {
        return 0.0;
      }
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar6 = fVar6 + fVar2;
      fVar5 = fVar5 + fVar1 + margin;
    }
    return fVar6 - fVar5;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x181903fa0

float Gisketch_Aottg2UI_Actions_GisketchScrollFocus__MaxScrollY
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Rect_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_184342255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342255 = '\x01';
  }
  if ((scroll != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar1 = (scroll->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar2 = UnityEngine_RectTransform__get_rect(local_28,pUVar1,(MethodInfo *)0x0);
    fVar4 = (pUVar2->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (scroll->fields).m_Viewport;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar2 = UnityEngine_RectTransform__get_rect(local_28,pUVar1,(MethodInfo *)0x0);
      fVar4 = fVar4 - (pUVar2->fields).m_Height;
      fVar3 = 0.0;
      if (0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      return fVar3;
    }
  }
  ThrowNullReferenceException();
}


