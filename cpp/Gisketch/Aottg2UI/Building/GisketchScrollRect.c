// Type: Gisketch.Aottg2UI.Building.GisketchScrollRect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollRect.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollRect$$SetContentAnchoredPosition
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetContentAnchoredPosition (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x5390d90

void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetContentAnchoredPosition
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,UnityEngine_Vector2_o position,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_UI_ScrollRect__SetContentAnchoredPosition
            ((UnityEngine_UI_ScrollRect_o *)__this,position,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$SetNormalizedPosition
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetNormalizedPosition (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, float value, int32_t axis, const MethodInfo* method);
// 0x5390f00

void Gisketch_Aottg2UI_Building_GisketchScrollRect__SetNormalizedPosition
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,float value,int32_t axis,
               MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  UnityEngine_UI_ScrollRect__SetNormalizedPosition
            ((UnityEngine_UI_ScrollRect_o *)__this,value,axis,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,axis));
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, const MethodInfo* method);
// 0x5390f20

void Gisketch_Aottg2UI_Building_GisketchScrollRect__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$OnScroll
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__OnScroll (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* data, const MethodInfo* method);
// 0x5390f40
// eh: try 0x53910e8..0x53910f5 -> pad 0x539115d catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5391175..0x539117a -> pad 0x53911a8 cleanup
// eh: try 0x53911ab..0x53911b5 -> pad 0x53911bd catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5391040: cmp byte ptr [rip + 0x21b1ba2], 0
// asm:   0x5391047: je 0x539112d
// asm:   0x539115d: mov rbx, rax
// asm:   0x5391160: cmp edx, 1
// asm:   0x5391163: jne 0x53911ab
// asm:   0x5391165: mov rdi, rbx
// asm:   0x5391168: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x539116d: mov rbx, qword ptr [rax]
// asm:   0x5391170: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5391175: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x539117a: mov rax, qword ptr [rsp + 0x10]
// asm:   0x539117f: test rax, rax
// asm:   0x5391182: je 0x53911a3
// asm:   0x5391184: movsd xmm0, qword ptr [rsp + 8]
// asm:   0x539118a: movsd qword ptr [rax + 0x17c], xmm0
// asm:   0x5391192: test rbx, rbx
// asm:   0x5391195: je 0x5391111
// asm:   0x539119b: mov rdi, rbx
// asm:   0x539119e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53911a8: mov rbx, rax
// asm:   0x53911ab: lea rdi, [rsp + 0x18]
// asm:   0x53911b0: call 0x2d4bbc0  ; il2cpp_runtime_helper_02d4bbc0()
// asm:   0x53911b5: mov rdi, rbx
// asm:   0x53911b8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53911bd: mov rdi, rax
// asm:   0x53911c0: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Building_GisketchScrollRect__OnScroll
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *data,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *root;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  UnityEngine_Vector2_Fields local_40;
  UnityEngine_EventSystems_PointerEventData_o *local_38;
  undefined8 local_30;
  UnityEngine_EventSystems_PointerEventData_o **local_28;
  UnityEngine_Vector2_Fields *local_20;
  
  method_00 = data;
  local_38 = data;
  if (Il2CppMethodInitialized_07542b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy_IScrollHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b30 = '\x01';
  }
  if (data == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto label_053911a3;
  bVar2 = Gisketch_Aottg2UI_Building_GisketchScrollRect__CanScroll
                    (__this,(UnityEngine_Vector2_o)(data->fields)._scrollDelta_k__BackingField.fields,
                     (MethodInfo *)method_00);
  if (!bVar2) {
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_053911a3;
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_EventSystems_ExecuteEvents->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
        }
        if (Il2CppMethodInitialized_07542be9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
          Il2CppMethodInitialized_07542be9 = '\x01';
          uVar1 = (TypeInfo_UnityEngine_EventSystems_ExecuteEvents->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_ExecuteEvents)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_ExecuteEvents);
        }
        UnityEngine_EventSystems_ExecuteEvents__ExecuteHierarchy_object_
                  (root,(UnityEngine_EventSystems_BaseEventData_o *)data,
                   (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)
                   TypeInfo_UnityEngine_EventSystems_ExecuteEvents->static_fields->s_ScrollHandler,
                   (MethodInfo_350F6F0 *)
                   MethodInfo_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy_IScrollHandler);
        return;
      }
      goto label_053911a3;
    }
  }
  if (((__this->fields).m_Horizontal == false) || ((__this->fields).m_Vertical != false)) {
    UnityEngine_UI_ScrollRect__OnScroll((UnityEngine_UI_ScrollRect_o *)__this,data,(MethodInfo *)0x0);
    return;
  }
  local_40 = (data->fields)._scrollDelta_k__BackingField.fields;
  (data->fields)._scrollDelta_k__BackingField.fields.y = -local_40.y;
  local_30 = 0;
  local_28 = &local_38;
  local_20 = &local_40;
  UnityEngine_UI_ScrollRect__OnScroll((UnityEngine_UI_ScrollRect_o *)__this,data,(MethodInfo *)0x0);
  if (local_38 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (local_38->fields)._scrollDelta_k__BackingField.fields = local_40;
    return;
  }
label_053911a3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$CanScroll
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollRect__CanScroll (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method);
// 0x53911d0

bool Gisketch_Aottg2UI_Building_GisketchScrollRect__CanScroll
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,UnityEngine_Vector2_o delta,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07542b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b31 = '\x01';
  }
  pUVar2 = (__this->fields).m_Content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pUVar2 = UnityEngine_UI_ScrollRect__get_viewRect((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
label_05391345:
    ThrowNullReferenceException();
  }
  UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).m_Content;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05391345;
  UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  if ((__this->fields).m_Vertical == false) {
label_053912ef:
    if ((__this->fields).m_Horizontal == false) {
      return false;
    }
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar4 = UVar6.fields.m_Width;
    local_28 = UVar5.fields.m_Width;
    local_28 = local_28 + 0.5;
  }
  else {
    fStack_34 = delta.fields.y;
    if ((fStack_34 == 0.0) && (!NAN(fStack_34))) goto label_053912ef;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fStack_24 = UVar5.fields.m_Height;
    if (UVar6.fields.m_Height <= fStack_24 + 0.5) goto label_053912ef;
    local_28 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                         ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    if (fStack_34 <= 0.0) {
      bVar1 = local_28 == 0.001;
      bVar3 = local_28 < 0.001;
      goto label_05391326;
    }
    fVar4 = 0.999;
  }
  bVar1 = fVar4 == local_28;
  bVar3 = fVar4 < local_28;
label_05391326:
  return !bVar3 && !bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$SyncContentLayout
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, const MethodInfo* method);
// 0x5390db0

void Gisketch_Aottg2UI_Building_GisketchScrollRect__SyncContentLayout
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o **targetAddress;
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *x;
  Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *pGVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchScrollContentLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b32 = '\x01';
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
  targetAddress = &(__this->fields)._contentLayout;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_05390e86:
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_05390ef2;
    pGVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchScrollContentLayout);
    *targetAddress = pGVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  else {
    if (*targetAddress == (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *)0x0) goto label_05390ef2;
    x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    if (bVar2) goto label_05390e86;
  }
  pGVar3 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (*targetAddress != (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchScrollContentLayout__SyncScrollOffset(*targetAddress,method_00);
    return;
  }
label_05390ef2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScrollRect$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollRect___ctor (Gisketch_Aottg2UI_Building_GisketchScrollRect_o* __this, const MethodInfo* method);
// 0x5391350

void Gisketch_Aottg2UI_Building_GisketchScrollRect___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


