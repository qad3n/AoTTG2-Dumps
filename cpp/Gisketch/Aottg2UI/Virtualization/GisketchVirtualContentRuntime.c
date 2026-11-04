// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualContentRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime.Slot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a2510

void
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot___ctor(Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* __this, UnityEngine_GameObject_o* root, MethodInfo* method)

{
  (__this->fields).ItemIndex = -1;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Root = outer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Root,outer);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$get_IsVirtualized
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_IsVirtualized (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189e1b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189e20f: nop 

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_IsVirtualized
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *pGVar7;
  void *pvVar8;
  ushort uVar9;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_28;
  
  if (Il2CppMethodInitialized_184341e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_184341e89 = '\x01';
  }
  if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) {
    return false;
  }
  pIVar3 = (Il2CppObject *)(__this->fields)._source;
  pIVar4 = pIVar3->klass;
  uVar1 = (pIVar4->_2).interface_offsets_count;
  if (uVar1 != 0) {
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    uVar9 = 0;
    do {
      if (pIVar5[uVar9].interfaceType ==
          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
        pVVar6 = pIVar4->vtable + (pIVar5[uVar9].offset + 1);
        goto label_18189e235;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar3,(Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_18189e235:
  pGVar7 = (*pVVar6->methodPtr)(&local_28,pIVar3,pVVar6->method);
  pIVar3 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar3 != (Il2CppObject *)0x0) {
    iVar2 = (pGVar7->fields).VirtualizationThreshold;
    pvVar8 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pIVar3);
    return iVar2 <= (int)pvVar8;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$get_LiveSlotCount
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_LiveSlotCount (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189e2a0

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_LiveSlotCount
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method
                  )

{
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar1;
  
  if (Il2CppMethodInitialized_184341e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    Il2CppMethodInitialized_184341e8a = '\x01';
  }
  pSVar1 = (__this->fields)._slots;
  if (pSVar1 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Setup (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o* source, const MethodInfo* method);
// 0x18189d6d0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Setup
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *source,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  bool bVar2;
  UnityEngine_UI_ScrollRect_o *value;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *value_00;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_02;
  
  if (Il2CppMethodInitialized_184341e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Setup_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    Il2CppMethodInitialized_184341e8b = '\x01';
  }
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source,source);
  value = UnityEngine_Component__GetComponentInParent_object__664f20
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._scrollChanged != (UnityEngine_Events_UnityAction_Vector2__o *)0x0)) {
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (__this_00 = (pUVar1->fields).m_OnValueChanged,
       __this_00 == (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0)) goto label_18189d8df;
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
               (UnityEngine_Events_UnityAction_T0__T1__T2__o *)(__this->fields)._scrollChanged,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
  }
  (__this->fields)._scroll = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,value);
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    value_00 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (value_00 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_18189d8df;
      value_00 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar3,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    }
    (__this->fields)._layout = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._layout,value_00);
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh(__this,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((__this->fields)._scrollChanged == (UnityEngine_Events_UnityAction_Vector2__o *)0x0) {
        __this_02 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
        UnityEngine_Events_UnityAction_Vector2____ctor
                  (__this_02,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Setup_b__10_0,
                   (MethodInfo_E5A7E0 *)0x0);
        (__this->fields)._scrollChanged = (UnityEngine_Events_UnityAction_Vector2__o *)__this_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollChanged,__this_02);
      }
      pUVar1 = (__this->fields)._scroll;
      if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (__this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar1->fields).m_OnValueChanged,
         __this_01 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0)) goto label_18189d8df;
      UnityEngine_Events_UnityEvent_Vector2___AddListener
                (__this_01,(UnityEngine_Events_UnityAction_T0__o *)(__this->fields)._scrollChanged,
                 (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
    }
    return;
  }
label_18189d8df:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__OnDestroy (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189c5b0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__OnDestroy
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    Il2CppMethodInitialized_184341e8c = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._scrollChanged != (UnityEngine_Events_UnityAction_Vector2__o *)0x0)) {
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (__this_00 = (pUVar1->fields).m_OnValueChanged,
       __this_00 == (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
               (UnityEngine_Events_UnityAction_T0__T1__T2__o *)(__this->fields)._scrollChanged,
               (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, bool force, const MethodInfo* method);
// 0x18189cca0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189d1ed: nop dword ptr [rax]
// asm:   0x18189d286: jmp 0x18189d51a
// asm:   0x18189d298: nop dword ptr [rax + rax]
// asm:   0x18189d40e: jmp 0x18189d51a
// asm:   0x18189d46a: nop word ptr [rax + rax]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,bool force,
               MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_ScrollRect_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar8;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar9;
  bool bVar10;
  char cVar11;
  VirtualInvokeData *pVVar12;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *pGVar13;
  void *pvVar14;
  UnityEngine_Rect_o *pUVar15;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields GVar16;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar17;
  Il2CppObject *pIVar18;
  ushort uVar19;
  int iVar20;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c *method_00;
  int32_t itemIndex;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_88;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_68 [2];
  
  if (Il2CppMethodInitialized_184341e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_184341e8d = '\x01';
  }
  if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) {
    return;
  }
  pIVar18 = (Il2CppObject *)(__this->fields)._source;
  pIVar3 = pIVar18->klass;
  uVar1 = (pIVar3->_2).interface_offsets_count;
  if (uVar1 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    uVar19 = 0;
    do {
      if (pIVar4[uVar19].interfaceType ==
          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
        pVVar12 = (VirtualInvokeData *)&pIVar3->vtable[pIVar4[uVar19].offset + 1].methodPtr;
        goto label_18189cd49;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar1);
  }
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar18,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_18189cd49:
  pGVar13 = (*pVVar12->methodPtr)(&local_88,pIVar18,pVVar12->method);
  pUVar5 = (__this->fields)._layout;
  local_68[0].fields.Mode = (pGVar13->fields).Mode;
  iVar20 = (pGVar13->fields).Columns;
  local_68[0].fields.ItemWidth = (pGVar13->fields).ItemWidth;
  fVar27 = (pGVar13->fields).ItemHeight;
  fVar26 = (pGVar13->fields).Gap;
  local_68[0].fields.ViewportHeight = (pGVar13->fields).ViewportHeight;
  local_68[0].fields.VirtualizationThreshold = (pGVar13->fields).VirtualizationThreshold;
  local_68[0].fields.OverscanRows = (pGVar13->fields).OverscanRows;
  if (local_68[0].fields.Mode == 0) {
    fVar25 = -1.0;
  }
  else {
    iVar21 = 0;
    if (-1 < iVar20 + -1) {
      iVar21 = iVar20 + -1;
    }
    fVar25 = (float)iVar20 * local_68[0].fields.ItemWidth + (float)iVar21 * fVar26;
  }
  local_68[0].fields.Columns = iVar20;
  local_68[0].fields.ItemHeight = fVar27;
  local_68[0].fields.Gap = fVar26;
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18189d51a;
  (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar5,fVar25,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
  pIVar18 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar18 == (Il2CppObject *)0x0) goto label_18189d51a;
  pUVar5 = (__this->fields)._layout;
  method_00 = TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource;
  pvVar14 = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pIVar18);
  if ((int)pvVar14 < 1) {
    iVar20 = 0;
  }
  else {
    if (Il2CppMethodInitialized_18433df29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df29 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar24 = il2cpp_runtime_helper_1804f45c0((double)((float)(int)pvVar14 / (float)iVar20),(MethodInfo *)method_00);
    iVar20 = (int)dVar24;
  }
  iVar21 = 0;
  if (-1 < iVar20 + -1) {
    iVar21 = iVar20 + -1;
  }
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18189d51a;
  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar5,(float)iVar20 * fVar27 + (float)iVar21 * fVar26,
             (pUVar5->klass->vtable)._38_set_preferredHeight.method);
  if (Il2CppMethodInitialized_184341e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_184341e89 = '\x01';
  }
  if ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) {
    pIVar18 = (Il2CppObject *)(__this->fields)._source;
    pIVar3 = pIVar18->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      uVar19 = 0;
      do {
        if (pIVar4[uVar19].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar12 = (VirtualInvokeData *)&pIVar3->vtable[pIVar4[uVar19].offset + 1].methodPtr;
          goto label_18189cf59;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar1);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar18,(Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_18189cf59:
    pGVar13 = (*pVVar12->methodPtr)(&local_88,pIVar18,pVVar12->method);
    pIVar18 = (Il2CppObject *)(__this->fields)._source;
    if (pIVar18 == (Il2CppObject *)0x0) goto label_18189d51a;
    iVar20 = (pGVar13->fields).VirtualizationThreshold;
    pvVar14 = InterfaceInvoker0_Invoke
                        (0,(Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pIVar18);
    if (iVar20 <= (int)pvVar14) {
      pIVar18 = (Il2CppObject *)(__this->fields)._source;
      if (pIVar18 == (Il2CppObject *)0x0) goto label_18189d51a;
      pvVar14 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pIVar18);
      if (Il2CppMethodInitialized_184341e9a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
        Il2CppMethodInitialized_184341e9a = '\x01';
      }
      pUVar6 = (__this->fields)._scroll;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar10) {
label_18189d135:
        fVar27 = 0.0;
      }
      else {
        pUVar6 = (__this->fields)._scroll;
        if (pUVar6 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_18189d51a;
        pUVar7 = (pUVar6->fields).m_Content;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) goto label_18189d135;
        pUVar6 = (__this->fields)._scroll;
        if (pUVar6 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_18189d51a;
        pUVar7 = (pUVar6->fields).m_Viewport;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) goto label_18189d135;
        pUVar6 = (__this->fields)._scroll;
        if ((pUVar6 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
           (pUVar7 = (pUVar6->fields).m_Content, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
        goto label_18189d51a;
        pUVar15 = UnityEngine_RectTransform__get_rect
                            ((UnityEngine_Rect_o *)&local_88,pUVar7,(MethodInfo *)0x0);
        fVar26 = (pUVar15->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar6 = (__this->fields)._scroll;
        if ((pUVar6 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
           (pUVar7 = (pUVar6->fields).m_Viewport, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
        goto label_18189d51a;
        pUVar15 = UnityEngine_RectTransform__get_rect
                            ((UnityEngine_Rect_o *)&local_88,pUVar7,(MethodInfo *)0x0);
        fVar26 = fVar26 - (pUVar15->fields).m_Height;
        fVar27 = 0.0;
        if (0.0 <= fVar26) {
          fVar27 = fVar26;
        }
        pUVar6 = (__this->fields)._scroll;
        if (pUVar6 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_18189d51a;
        fVar26 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar6,(MethodInfo *)0x0);
        fVar27 = (1.0 - fVar26) * fVar27;
      }
      fVar26 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ViewportHeight
                         (__this,(MethodInfo *)0x0);
      GVar16 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RangeFor
                         (local_68,(int32_t)pvVar14,fVar27,fVar26,(MethodInfo *)0x0);
      uVar22 = GVar16.Start;
      iVar20 = GVar16.End;
      if ((iVar20 < (int)uVar22) || ((int)((iVar20 - uVar22) + 1) < 1)) {
        if (Il2CppMethodInitialized_184341e95 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
          Il2CppMethodInitialized_184341e95 = '\x01';
        }
        iVar20 = 0;
        pSVar8 = (__this->fields)._slots;
        while (pSVar8 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
          if ((pSVar8->fields)._size <= iVar20) goto label_18189d2d3;
          pSVar8 = (__this->fields)._slots;
          if ((pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
             (pIVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar8,iVar20,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                                  ), pIVar18 == (Il2CppObject *)0x0)) break;
          if (-1 < *(int *)&pIVar18[1].monitor) {
            pSVar8 = (__this->fields)._slots;
            if (pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) break;
            pGVar9 = (__this->fields)._source;
            pIVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar8,iVar20,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                                );
            if ((pIVar18 == (Il2CppObject *)0x0) ||
               (pGVar9 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)) break;
            cVar11 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                                   pGVar9,pIVar18[1].klass);
            if (cVar11 != '\0') {
              pSVar8 = (__this->fields)._slots;
              if (pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0)
              break;
              pGVar17 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar8,iVar20,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                                  );
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
                        (__this,pGVar17,(MethodInfo *)0x0);
            }
          }
          iVar20 = iVar20 + 1;
          pSVar8 = (__this->fields)._slots;
        }
      }
      else {
        if (((!force) && (uVar22 == (__this->fields)._range.fields.Start)) &&
           (iVar20 == (__this->fields)._range.fields.End)) {
          return;
        }
        if (Il2CppMethodInitialized_184341e91 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
          Il2CppMethodInitialized_184341e91 = '\x01';
        }
        iVar21 = 0;
        pSVar8 = (__this->fields)._slots;
        while (pSVar8 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
          if ((pSVar8->fields)._size <= iVar21) {
            uVar23 = (ulonglong)GVar16 & 0xffffffff;
            while ((int)uVar22 <= iVar20) {
              iVar21 = (int)uVar23;
              pGVar17 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                                  (__this,iVar21,(MethodInfo *)0x0);
              if (pGVar17 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
                pGVar17 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
                                    (__this,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                          (__this,pGVar17,iVar21,(MethodInfo *)0x0);
              }
              uVar22 = iVar21 + 1;
              uVar23 = (ulonglong)uVar22;
            }
label_18189d2d3:
            (__this->fields)._range.fields = GVar16;
            return;
          }
          pSVar8 = (__this->fields)._slots;
          if ((pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
             (pGVar17 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar8,iVar21,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                                  ),
             pGVar17 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0)) break;
          if ((-1 < (pGVar17->fields).ItemIndex) &&
             ((iVar2 = (pGVar17->fields).ItemIndex, iVar2 < (int)uVar22 || (iVar20 < iVar2)))) {
            if ((__this->fields)._source ==
                (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) break;
            cVar11 = il2cpp_runtime_helper_180014780(6);
            if ((cVar11 != '\0') &&
               (bVar10 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild
                                   ((pGVar17->fields).Root,(MethodInfo *)0x0), !bVar10)) {
              Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
                        (__this,pGVar17,(MethodInfo *)0x0);
            }
          }
          iVar21 = iVar21 + 1;
          pSVar8 = (__this->fields)._slots;
        }
      }
      goto label_18189d51a;
    }
  }
  if (Il2CppMethodInitialized_184341e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341e90 = '\x01';
  }
  pIVar18 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar18 != (Il2CppObject *)0x0) {
    pvVar14 = InterfaceInvoker0_Invoke
                        (0,(Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pIVar18);
    itemIndex = 0;
    iVar20 = (int)pvVar14;
    if (0 < iVar20) {
      do {
        pGVar17 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                            (__this,itemIndex,(MethodInfo *)0x0);
        if (pGVar17 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
          pGVar17 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
                              (__this,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                    (__this,pGVar17,itemIndex,(MethodInfo *)0x0);
        }
        itemIndex = itemIndex + 1;
      } while (itemIndex < iVar20);
    }
    iVar21 = 0;
    pSVar8 = (__this->fields)._slots;
    while (pSVar8 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
      if ((pSVar8->fields)._size <= iVar21) {
        return;
      }
      pSVar8 = (__this->fields)._slots;
      if ((pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
         (pGVar17 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar8,iVar21,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                              ),
         pGVar17 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0)) break;
      if (iVar20 <= (pGVar17->fields).ItemIndex) {
        pGVar9 = (__this->fields)._source;
        if (pGVar9 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) break;
        cVar11 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                               pGVar9,(pGVar17->fields).Root);
        if (cVar11 != '\0') {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
                    (__this,pGVar17,(MethodInfo *)0x0);
        }
      }
      iVar21 = iVar21 + 1;
      pSVar8 = (__this->fields)._slots;
    }
  }
label_18189d51a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$MaterializeItem
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__MaterializeItem (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x18189c510

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__MaterializeItem
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  void *pvVar1;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184341e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_184341e8e = '\x01';
  }
  if (((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) &&
     (-1 < itemIndex)) {
    pvVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                        (Il2CppObject *)(__this->fields)._source);
    if (itemIndex < (int)pvVar1) {
      pGVar2 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                         (__this,itemIndex,(MethodInfo *)0x0);
      if (pGVar2 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
        pGVar2 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
                           (__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                  (__this,pGVar2,itemIndex,(MethodInfo *)0x0);
      }
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$TryMaterializeSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__TryMaterializeSearchTarget (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, System_String_o* targetId, UnityEngine_GameObject_o** target, const MethodInfo* method);
// 0x18189db00

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__TryMaterializeSearchTarget
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               System_String_o *targetId,UnityEngine_GameObject_o **target,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar4;
  UnityEngine_Object_o *x;
  int32_t itemIndex;
  bool bVar5;
  char cVar6;
  VirtualInvokeData *pVVar7;
  void *pvVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar9;
  ushort uVar10;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184341e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e8f = '\x01';
  }
  local_res8[0] = 0;
  *target = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(target,(void *)0x0);
  if (((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) &&
     (bVar5 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0), !bVar5)) {
    obj = (Il2CppObject *)(__this->fields)._source;
    if (obj == (Il2CppObject *)0x0) {
label_18189dd1f:
      ThrowNullReferenceException();
    }
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar10 = 0;
      do {
        if (pIVar3[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar7 = pIVar2->vtable + (pIVar3[uVar10].offset + 7);
          goto label_18189dbd9;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,7);
label_18189dbd9:
    bVar5 = (*pVVar7->methodPtr)(obj,targetId,local_res8,pVVar7->method);
    itemIndex = local_res8[0];
    if (bVar5) {
      if (Il2CppMethodInitialized_184341e8e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
        Il2CppMethodInitialized_184341e8e = '\x01';
      }
      if ((((__this->fields)._source !=
            (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) && (-1 < itemIndex)) &&
         (pvVar8 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                              (Il2CppObject *)(__this->fields)._source), itemIndex < (int)pvVar8)) {
        pGVar9 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                           (__this,itemIndex,(MethodInfo *)0x0);
        if (pGVar9 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
          pGVar9 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
                             (__this,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                    (__this,pGVar9,itemIndex,(MethodInfo *)0x0);
        }
        pGVar9 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                           (__this,local_res8[0],(MethodInfo *)0x0);
        if (pGVar9 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
          pGVar4 = (__this->fields)._source;
          if (pGVar4 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)
          goto label_18189dd1f;
          cVar6 = il2cpp_runtime_helper_18022f990(8,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                                pGVar4,targetId,local_res8[0],(pGVar9->fields).Root,target);
          if (cVar6 != '\0') {
            x = (UnityEngine_Object_o *)*target;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            return bVar5;
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$RefreshStatic
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RefreshStatic (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189cb60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189cbcf: nop 
// asm:   0x18189cc76: jmp 0x18189cc10

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RefreshStatic
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar6;
  int index;
  int32_t itemIndex;
  
  if (Il2CppMethodInitialized_184341e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341e90 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._source;
  if (obj != (Il2CppObject *)0x0) {
    pvVar5 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,obj);
    itemIndex = 0;
    iVar4 = (int)pvVar5;
    if (0 < iVar4) {
      do {
        pGVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                           (__this,itemIndex,(MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
          pGVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
                             (__this,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                    (__this,pGVar6,itemIndex,(MethodInfo *)0x0);
        }
        itemIndex = itemIndex + 1;
      } while (itemIndex < iVar4);
    }
    index = 0;
    pSVar1 = (__this->fields)._slots;
    while (pSVar1 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      pSVar1 = (__this->fields)._slots;
      if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
         (pGVar6 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                             ),
         pGVar6 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0)) break;
      if (iVar4 <= (pGVar6->fields).ItemIndex) {
        pGVar2 = (__this->fields)._source;
        if (pGVar2 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) break;
        cVar3 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar2
                              ,(pGVar6->fields).Root);
        if (cVar3 != '\0') {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
                    (__this,pGVar6,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
      pSVar1 = (__this->fields)._slots;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$RecycleOutside
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RecycleOutside (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range, const MethodInfo* method);
// 0x18189ca50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189cb40: jmp 0x18189cab6

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RecycleOutside
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar2;
  char cVar3;
  bool bVar4;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar5;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot;
  int index;
  int iStackX_14;
  
  if (Il2CppMethodInitialized_184341e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341e91 = '\x01';
  }
  pSVar5 = (__this->fields)._slots;
  index = 0;
  if (pSVar5 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    iStackX_14 = range.fields.End;
    do {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      pSVar5 = (__this->fields)._slots;
      if ((pSVar5 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
         (slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           ),
         slot == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0)) break;
      if ((-1 < (slot->fields).ItemIndex) &&
         ((iVar1 = (slot->fields).ItemIndex, iVar1 < range.fields.Start || (iStackX_14 < iVar1)))) {
        pGVar2 = (__this->fields)._source;
        if (pGVar2 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) break;
        cVar3 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar2
                              ,(slot->fields).Root);
        if ((cVar3 != '\0') &&
           (bVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild
                              ((slot->fields).Root,(MethodInfo *)0x0), !bVar4)) {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
                    (__this,slot,(MethodInfo *)0x0);
        }
      }
      pSVar5 = (__this->fields)._slots;
      index = index + 1;
    } while (pSVar5 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$FreeSlot
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189c110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189c1e3: jmp 0x18189c1a3

Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar3;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_array *pGVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  int index;
  
  if (Il2CppMethodInitialized_184341e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot);
    Il2CppMethodInitialized_184341e92 = '\x01';
  }
  pSVar3 = (__this->fields)._slots;
  index = 0;
  do {
    if (pSVar3 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
label_18189c392:
      ThrowNullReferenceException();
    }
    if ((pSVar3->fields)._size <= index) {
      pGVar4 = (__this->fields)._source;
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._slots;
      if ((pSVar3 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) &&
         (pGVar4 != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)) {
        x = (UnityEngine_Object_o *)
            il2cpp_runtime_helper_18001b260(3,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar4,
                          pUVar10,(pSVar3->fields)._size);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0;
        }
        if ((x != (UnityEngine_Object_o *)0x0) &&
           ((pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
            pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0 ||
            (pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
            pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0)))) {
          (*(pUVar11->klass->vtable)._28_set_ignoreLayout.methodPtr)
                    (pUVar11,true,(pUVar11->klass->vtable)._28_set_ignoreLayout.method);
          pGVar9 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot);
          (pGVar9->fields).ItemIndex = -1;
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar9,(MethodInfo *)0x0);
          (pGVar9->fields).Root = (UnityEngine_GameObject_o *)x;
          Il2CppCodeGenWriteBarrier(&(pGVar9->fields).Root,x);
          pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_Add;
          pSVar3 = (__this->fields)._slots;
          if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar5 = (pSVar3->fields)._items;
            if (pGVar5 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if ((uint)pGVar5->max_length <= uVar2) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pGVar9,
                           (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
                return pGVar9;
              }
              (pSVar3->fields)._size = uVar2 + 1;
              if (uVar2 < (uint)pGVar5->max_length) {
                pGVar5->m_Items[(int)uVar2] = pGVar9;
                Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2,pGVar9);
                return pGVar9;
              }
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
      goto label_18189c392;
    }
    pSVar3 = (__this->fields)._slots;
    if ((pSVar3 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
       (pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           ), pIVar8 == (Il2CppObject *)0x0)) goto label_18189c392;
    pSVar3 = (__this->fields)._slots;
    if (*(int *)&pIVar8[1].monitor < 0) {
      if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
        pGVar9 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           );
        return pGVar9;
      }
      goto label_18189c392;
    }
    index = index + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Bind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* slot, int32_t itemIndex, const MethodInfo* method);
// 0x18189be50

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot,int32_t itemIndex,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar6;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar7;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  bool bVar8;
  UnityEngine_RectTransform_o *__this_00;
  int *piVar9;
  UnityEngine_Vector2_o value_01;
  float fVar10;
  undefined1 local_88 [112];
  
  if (Il2CppMethodInitialized_184341e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e93 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      pUVar6 = (slot->fields).Root;
      (slot->fields).ItemIndex = itemIndex;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar6,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_184341e97 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184341e97 = '\x01';
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((!bVar8) &&
           ((__this->fields)._source !=
            (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)) {
          piVar9 = (int *)il2cpp_runtime_helper_18002b490(local_88,1,
                                        TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource
                                        ,(__this->fields)._source);
          if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_18189c101;
          iVar4 = *piVar9;
          iVar5 = piVar9[1];
          fVar1 = (float)piVar9[2];
          fVar2 = (float)piVar9[3];
          fVar3 = (float)piVar9[4];
          UnityEngine_RectTransform__set_anchorMin
                    (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
          if (iVar4 == 0) {
            fVar10 = 1.0;
          }
          else {
            fVar10 = 0.0;
          }
          value_01.fields.y = 1.0;
          value_01.fields.x = fVar10;
          UnityEngine_RectTransform__set_anchorMax(__this_00,value_01,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
          fVar10 = 0.0;
          if (iVar4 != 0) {
            fVar10 = fVar1;
          }
          value_00.fields.y = fVar2;
          value_00.fields.x = fVar10;
          UnityEngine_RectTransform__set_sizeDelta(__this_00,value_00,(MethodInfo *)0x0);
          value.fields.y = (float)-(itemIndex / iVar5) * (fVar2 + fVar3);
          value.fields.x = (fVar3 + fVar1) * (float)(itemIndex % iVar5);
          UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
        }
        pUVar6 = (slot->fields).Root;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
          pGVar7 = (__this->fields)._source;
          if (pGVar7 != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) {
            il2cpp_runtime_helper_18001b260(4,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar7,
                          (slot->fields).Root,itemIndex);
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__PrepareBoundSlot
                      (__this,(slot->fields).Root,(MethodInfo *)0x0);
            return;
          }
        }
      }
label_18189c101:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Unbind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* slot, const MethodInfo* method);
// 0x18189de60

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e94 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (__this->fields)._source;
      if (pGVar1 != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) {
        il2cpp_runtime_helper_180014780(5,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar1,
                      (slot->fields).Root);
        __this_00 = (slot->fields).Root;
        (slot->fields).ItemIndex = -1;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$UnbindAll
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__UnbindAll (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189dd40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189de3d: jmp 0x18189dd97

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__UnbindAll
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar1;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar2;
  char cVar3;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot;
  int index;
  
  if (Il2CppMethodInitialized_184341e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341e95 = '\x01';
  }
  index = 0;
  pSVar1 = (__this->fields)._slots;
  while (pSVar1 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    pSVar1 = (__this->fields)._slots;
    if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           ), pIVar4 == (Il2CppObject *)0x0)) break;
    if (-1 < *(int *)&pIVar4[1].monitor) {
      pSVar1 = (__this->fields)._slots;
      if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) break;
      pGVar2 = (__this->fields)._source;
      pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                         );
      if ((pIVar4 == (Il2CppObject *)0x0) ||
         (pGVar2 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)) break;
      cVar3 = il2cpp_runtime_helper_180014780(6,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar2,
                            pIVar4[1].klass);
      if (cVar3 != '\0') {
        pSVar1 = (__this->fields)._slots;
        if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) break;
        slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                         );
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind(__this,slot,(MethodInfo *)0x0);
      }
    }
    index = index + 1;
    pSVar1 = (__this->fields)._slots;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$IsBound
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__IsBound (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x18189c4f0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__IsBound
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                     (__this,itemIndex,(MethodInfo *)0x0);
  return pGVar1 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$SlotFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x18189d8f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189d939: nop dword ptr [rax]
// asm:   0x18189d973: jmp 0x18189d940

Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,int32_t itemIndex,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar3;
  int index;
  
  if (Il2CppMethodInitialized_184341e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_184341e96 = '\x01';
  }
  pSVar1 = (__this->fields)._slots;
  index = 0;
  do {
    if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
label_18189d9a9:
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._size <= index) {
      return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0;
    }
    pSVar1 = (__this->fields)._slots;
    if ((pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) ||
       (pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           ), pIVar2 == (Il2CppObject *)0x0)) goto label_18189d9a9;
    pSVar1 = (__this->fields)._slots;
    if (*(int *)&pIVar2[1].monitor == itemIndex) {
      if (pSVar1 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
        pGVar3 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           );
        return pGVar3;
      }
      goto label_18189d9a9;
    }
    index = index + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Position
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Position (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, UnityEngine_RectTransform_o* rect, int32_t itemIndex, const MethodInfo* method);
// 0x18189c650

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Position
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               UnityEngine_RectTransform_o *rect,int32_t itemIndex,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  bool bVar6;
  int *piVar7;
  UnityEngine_Vector2_o value_01;
  float fVar8;
  undefined1 local_78 [112];
  
  if (Il2CppMethodInitialized_184341e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e97 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar6) &&
     ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)) {
    piVar7 = (int *)il2cpp_runtime_helper_18002b490(local_78,1,
                                  TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                                  (__this->fields)._source);
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar4 = *piVar7;
    iVar5 = piVar7[1];
    fVar1 = (float)piVar7[2];
    fVar2 = (float)piVar7[3];
    fVar3 = (float)piVar7[4];
    UnityEngine_RectTransform__set_anchorMin(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
    ;
    if (iVar4 == 0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = 0.0;
    }
    value_01.fields.y = 1.0;
    value_01.fields.x = fVar8;
    UnityEngine_RectTransform__set_anchorMax(rect,value_01,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    fVar8 = 0.0;
    if (iVar4 != 0) {
      fVar8 = fVar1;
    }
    value_00.fields.y = fVar2;
    value_00.fields.x = fVar8;
    UnityEngine_RectTransform__set_sizeDelta(rect,value_00,(MethodInfo *)0x0);
    value.fields.y = (float)-(itemIndex / iVar5) * (fVar2 + fVar3);
    value.fields.x = (fVar3 + fVar1) * (float)(itemIndex % iVar5);
    UnityEngine_RectTransform__set_anchoredPosition(rect,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$PrepareBoundSlot
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__PrepareBoundSlot (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x18189c820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189c93b: nop dword ptr [rax + rax]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__PrepareBoundSlot
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int *piVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Vector2_o UVar4;
  int index;
  MethodInfo *pMVar5;
  float in_XMM1_Da;
  undefined1 local_28 [32];
  
  if (Il2CppMethodInitialized_184341e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e98 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar1) &&
      ((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0))
     && (piVar3 = (int *)il2cpp_runtime_helper_18002b490(local_28,1,
                                       TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource
                                       ,(__this->fields)._source), *piVar3 == 0)) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
label_18189ca40:
      ThrowNullReferenceException();
    }
    __this_00 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341e99 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341e99 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      index = 0;
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_18189ca40;
      for (; iVar2 = UnityEngine_Transform__get_childCount(__this_00,(MethodInfo *)0x0), index < iVar2;
          index = index + 1) {
        __this_01 = UnityEngine_Transform__GetChild(__this_00,index,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_18189ca40;
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pMVar5 = (MethodInfo *)0x0;
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          UVar4 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                            ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar5);
          if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_18189ca40;
          UnityEngine_RectTransform__set_anchorMin(__this_02,UVar4,(MethodInfo *)0x0);
          UVar4.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_181882d90(0);
          pMVar5 = (MethodInfo *)0x0;
          UnityEngine_RectTransform__set_anchorMax(__this_02,UVar4,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                            ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar5);
          pMVar5 = (MethodInfo *)0x0;
          UnityEngine_RectTransform__set_offsetMin(__this_02,UVar4,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                            ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar5);
          UnityEngine_RectTransform__set_offsetMax(__this_02,UVar4,(MethodInfo *)0x0);
        }
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$StretchDirectChildren
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__StretchDirectChildren (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x18189d9b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189dae4: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x18189dae9: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__StretchDirectChildren
               (UnityEngine_Transform_o *root,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  int index;
  MethodInfo *pMVar4;
  float in_XMM1_Da;
  
  if (Il2CppMethodInitialized_184341e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e99 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    index = 0;
    if (root == (UnityEngine_Transform_o *)0x0) {
label_18189daf4:
      ThrowNullReferenceException();
    }
    for (; iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0), index < iVar2;
        index = index + 1) {
      __this = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      if (__this == (UnityEngine_Transform_o *)0x0) goto label_18189daf4;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar4 = (MethodInfo *)0x0;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        UVar3 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                          ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar4);
        if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_18189daf4;
        UnityEngine_RectTransform__set_anchorMin(__this_00,UVar3,(MethodInfo *)0x0);
        UVar3.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_181882d90(0);
        pMVar4 = (MethodInfo *)0x0;
        UnityEngine_RectTransform__set_anchorMax(__this_00,UVar3,(MethodInfo *)0x0);
        UVar3 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                          ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar4);
        pMVar4 = (MethodInfo *)0x0;
        UnityEngine_RectTransform__set_offsetMin(__this_00,UVar3,(MethodInfo *)0x0);
        UVar3 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                          ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,pMVar4);
        UnityEngine_RectTransform__set_offsetMax(__this_00,UVar3,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$ScrollOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189d520

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ScrollOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_Rect_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184341e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341e9a = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return 0.0;
  }
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar2 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return 0.0;
    }
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar2 = (pUVar1->fields).m_Viewport;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return 0.0;
      }
      pUVar1 = (__this->fields)._scroll;
      if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        pUVar4 = UnityEngine_RectTransform__get_rect(local_38,pUVar2,(MethodInfo *)0x0);
        fVar7 = (pUVar4->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (__this->fields)._scroll;
        if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          pUVar4 = UnityEngine_RectTransform__get_rect(local_38,pUVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._scroll;
          if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            fVar6 = (pUVar4->fields).m_Height;
            fVar5 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
            fVar7 = fVar7 - fVar6;
            fVar6 = 0.0;
            if (0.0 <= fVar7) {
              fVar6 = fVar7;
            }
            return (1.0 - fVar5) * fVar6;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$ViewportHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ViewportHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189df20

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ViewportHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  ushort uVar2;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Il2CppObject *obj;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  bool bVar7;
  UnityEngine_Rect_o *pUVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *pGVar10;
  ushort uVar11;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_48 [2];
  
  if (Il2CppMethodInitialized_184341e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341e9b = '\x01';
  }
  pUVar3 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
label_18189e07b:
    if ((__this->fields)._source == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) {
      return 1.0;
    }
    obj = (Il2CppObject *)(__this->fields)._source;
    pIVar5 = obj->klass;
    uVar2 = (pIVar5->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      uVar11 = 0;
      do {
        if (pIVar6[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar9 = pIVar5->vtable + (pIVar6[uVar11].offset + 1);
          goto label_18189e0d5;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar2);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_18189e0d5:
    pGVar10 = (*pVVar9->methodPtr)(local_48,obj,pVVar9->method);
    return (pGVar10->fields).ViewportHeight;
  }
  pUVar3 = (__this->fields)._scroll;
  if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar4 = (pUVar3->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) goto label_18189e07b;
    pUVar3 = (__this->fields)._scroll;
    if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar4 = (pUVar3->fields).m_Viewport, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar8 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_48,pUVar4,(MethodInfo *)0x0);
      fVar1 = (pUVar8->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar1 <= 1.0) goto label_18189e07b;
      pUVar3 = (__this->fields)._scroll;
      if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar4 = (pUVar3->fields).m_Viewport, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        pUVar8 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_48,pUVar4,(MethodInfo *)0x0);
        fVar1 = (pUVar8->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor != 0) {
          return fVar1;
        }
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        return fVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$HasFocusedChild
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x18189c3a0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e9c = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_18189c4de;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  else {
    x = (UnityEngine_Object_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if (root != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if (__this != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
label_18189c4de:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x18189e120

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *__this_00;
  
  if (Il2CppMethodInitialized_184341e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot);
    Il2CppMethodInitialized_184341e9d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_ctor);
  (__this->fields)._slots = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slots,__this_00);
  (__this->fields)._range.fields =
       (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)0xffffffffffffffff;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$<Setup>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___Setup_b__10_0 (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, UnityEngine_Vector2_o __, const MethodInfo* method);
// 0x18189dd30

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___Setup_b__10_0
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               UnityEngine_Vector2_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh(__this,false,(MethodInfo *)0x0);
  return;
}


