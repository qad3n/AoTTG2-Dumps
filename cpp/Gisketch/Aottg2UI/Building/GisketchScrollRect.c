// Type: Gisketch.Aottg2UI.Building.GisketchScrollRect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollRect.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollRect$$SetContentAnchoredPosition
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetContentAnchoredPosition (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x181904f20

void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetContentAnchoredPosition
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,UnityEngine_Vector2_o position,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect__SetContentAnchoredPosition
            ((UnityEngine_UI_ScrollRect_o *)__this,position,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$SetNormalizedPosition
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetNormalizedPosition (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, float value, int32_t axis, const MethodInfo* method);
// 0x181904f40

void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetNormalizedPosition
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,float value,int32_t axis,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect__SetNormalizedPosition
            ((UnityEngine_UI_ScrollRect_o *)__this,value,axis,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, const MethodInfo* method);
// 0x181904b00

void Gisketch_Aottg2UI_Building_GisketchScrollRect__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$OnScroll
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__OnScroll (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* data, const MethodInfo* method);
// 0x181904b20
// eh: try 0x181904db6..0x181904dca -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181904e17..0x181904e27 -> pad 0x180230c50 cleanup
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181904cb8: movss xmm6, dword ptr [rip + 0x1a53f44]
// asm:   0x181904dff: lea rcx, [rsp + 0x30]
// asm:   0x181904e04: call 0x1818f40b0  ; il2cpp_runtime_helper_1818f40b0()
// asm:   0x181904e09: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181904e0e: test rcx, rcx
// asm:   0x181904e11: jne 0x181904f15
// asm:   0x181904e17: jmp 0x181904e2c
// asm:   0x181904ee1: mov rax, qword ptr [rip + 0x2774cb0]  ; TypeInfo_UnityEngine_EventSystems_ExecuteEvents
// asm:   0x181904ee8: mov r8, qword ptr [rax + 0xb8]
// asm:   0x181904eef: mov r9, qword ptr [rip + 0x2784372]  ; MethodInfo_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy_IScrollHandler
// asm:   0x181904ef6: mov r8, qword ptr [r8 + 0x58]
// asm:   0x181904efa: mov rdx, rdi
// asm:   0x181904efd: mov rcx, rbx
// asm:   0x181904f00: call 0x1806cf210  ; UnityEngine_EventSystems_ExecuteEvents__ExecuteHierarchy_object_()
// asm:   0x181904f05: jmp 0x181904e2c
// asm:   0x181904f15: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Building_GisketchScrollRect__OnScroll
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *data,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  bool bVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Rect_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *root;
  bool bVar9;
  float fVar10;
  UnityEngine_EventSystems_PointerEventData_o *local_res10 [2];
  undefined8 local_res20;
  undefined1 local_90 [16];
  undefined8 *local_80;
  
  local_res10[0] = data;
  if (Il2CppMethodInitialized_1843421b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy_IScrollHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421b1 = '\x01';
  }
  local_res20 = 0;
  if (local_res10[0] == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto label_181904f0a;
  fVar1 = (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.y;
  if (Il2CppMethodInitialized_1843421b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421b2 = '\x01';
  }
  pUVar6 = (__this->fields).m_Content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
label_181904ceb:
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_181904f0a;
    pUVar8 = UnityEngine_Transform__GetParent(pUVar8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar8 = UnityEngine_Transform__GetParent(pUVar8,(MethodInfo *)0x0),
         pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        eventData = local_res10[0];
        if ((TypeInfo_UnityEngine_EventSystems_ExecuteEvents->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
        }
        if (Il2CppMethodInitialized_18434226a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
          Il2CppMethodInitialized_18434226a = '\x01';
        }
        if ((TypeInfo_UnityEngine_EventSystems_ExecuteEvents->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
        }
        UnityEngine_EventSystems_ExecuteEvents__ExecuteHierarchy_object_
                  (root,(UnityEngine_EventSystems_BaseEventData_o *)eventData,
                   (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)
                   TypeInfo_UnityEngine_EventSystems_ExecuteEvents->static_fields->s_ScrollHandler,
                   (MethodInfo_6CF210 *)
                   MethodInfo_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy_IScrollHandler);
        return;
      }
      goto label_181904f0a;
    }
  }
  else {
    pUVar6 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_181904f0a;
    pUVar7 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_90,pUVar6,(MethodInfo *)0x0);
    pUVar6 = (__this->fields).m_Content;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_181904f0a;
    fVar10 = (pUVar7->fields).m_Width;
    fVar2 = (pUVar7->fields).m_Height;
    pUVar7 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_90,pUVar6,(MethodInfo *)0x0);
    fVar3 = (pUVar7->fields).m_Width;
    if (((__this->fields).m_Vertical == false) || (fVar1 == 0.0)) {
label_181904cc0:
      if ((__this->fields).m_Horizontal == false) goto label_181904ceb;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar10 = fVar10 + 0.5;
      bVar5 = fVar3 == fVar10;
      bVar9 = fVar3 < fVar10;
    }
    else {
      fVar4 = (pUVar7->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar4 <= fVar2 + 0.5) goto label_181904cc0;
      fVar10 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                         ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
      if (fVar1 <= 0.0) {
        bVar5 = fVar10 == 0.001;
        bVar9 = fVar10 < 0.001;
      }
      else {
        bVar5 = fVar10 == 0.999;
        bVar9 = 0.999 < fVar10;
      }
    }
    if (bVar9 || bVar5) goto label_181904ceb;
  }
  if (((__this->fields).m_Horizontal == false) || ((__this->fields).m_Vertical != false)) {
    UnityEngine_UI_ScrollRect__OnScroll
              ((UnityEngine_UI_ScrollRect_o *)__this,local_res10[0],(MethodInfo *)0x0);
  }
  else {
    if (local_res10[0] == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_181904f0a:
      ThrowNullReferenceException();
    }
    local_res20._0_4_ = (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.x;
    local_res20._4_4_ = (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.y;
    (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.x = (float)local_res20;
    (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.y = -local_res20._4_4_;
    local_90._0_4_ = 0.0;
    local_90._4_4_ = 0.0;
    local_90._8_8_ = local_res10;
    local_80 = &local_res20;
    UnityEngine_UI_ScrollRect__OnScroll
              ((UnityEngine_UI_ScrollRect_o *)__this,local_res10[0],(MethodInfo *)0x0);
    if (local_res10[0] == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.x = (float)local_res20;
    (local_res10[0]->fields)._scrollDelta_k__BackingField.fields.y = local_res20._4_4_;
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$CanScroll
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollRect__CanScroll (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method);
// 0x181904930
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181904ac5: xor al, al
// asm:   0x181904ac7: jmp 0x181904a8b

bool Gisketch_Aottg2UI_Building_GisketchScrollRect__CanScroll
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,UnityEngine_Vector2_o delta,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Rect_o *pUVar6;
  bool bVar7;
  float fVar8;
  float fStack_84;
  UnityEngine_Rect_o local_80 [7];
  
  if (Il2CppMethodInitialized_1843421b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421b2 = '\x01';
  }
  pUVar5 = (__this->fields).m_Content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return false;
  }
  pUVar5 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
label_181904af7:
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_RectTransform__get_rect(local_80,pUVar5,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).m_Content;
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto label_181904af7;
  fVar8 = (pUVar6->fields).m_Width;
  fVar1 = (pUVar6->fields).m_Height;
  pUVar6 = UnityEngine_RectTransform__get_rect(local_80,pUVar5,(MethodInfo *)0x0);
  fVar2 = (pUVar6->fields).m_Width;
  if (((__this->fields).m_Vertical != false) && (fStack_84 = delta.fields.y, fStack_84 != 0.0)) {
    fVar3 = (pUVar6->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (fVar1 + 0.5 < fVar3) {
      fVar8 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                        ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
      if (fStack_84 <= 0.0) {
        bVar4 = fVar8 == 0.001;
        bVar7 = fVar8 < 0.001;
      }
      else {
        bVar4 = fVar8 == 0.999;
        bVar7 = 0.999 < fVar8;
      }
      goto label_181904a88;
    }
  }
  if ((__this->fields).m_Horizontal == false) {
    return false;
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar8 = fVar8 + 0.5;
  bVar4 = fVar2 == fVar8;
  bVar7 = fVar2 < fVar8;
label_181904a88:
  return !bVar7 && !bVar4;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$SyncContentLayout
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, const MethodInfo* method);
// 0x181904f60

void Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *x;
  Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *pGVar3;
  
  if (Il2CppMethodInitialized_1843421b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchScrollContentLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421b3 = '\x01';
  }
  pUVar1 = (__this->fields).m_Content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pGVar3 = (__this->fields)._contentLayout;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_18190503f:
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1819050b5;
    pGVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchScrollContentLayout);
    (__this->fields)._contentLayout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._contentLayout,pGVar3);
  }
  else {
    pGVar3 = (__this->fields)._contentLayout;
    if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *)0x0) goto label_1819050b5;
    x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar3,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    if (bVar2) goto label_18190503f;
  }
  pGVar3 = (__this->fields)._contentLayout;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar3 = (__this->fields)._contentLayout;
    if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *)0x0) {
label_1819050b5:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchScrollContentLayout__SyncScrollOffset(pGVar3,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect___ctor (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, const MethodInfo* method);
// 0x1819050c0

void Gisketch_Aottg2UI_Building_GisketchScrollRect___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


