// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Virtualization/GisketchVirtualContentRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime.Slot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5320260

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *__this,
               UnityEngine_GameObject_o *root,MethodInfo *method)

{
  (__this->fields).ItemIndex = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Root);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$get_IsVirtualized
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_IsVirtualized (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531e7d0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_IsVirtualized
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_40;
  
  if (Il2CppMethodInitialized_075427ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_075427ca = '\x01';
  }
  pIVar1 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar1 == (Il2CppObject *)0x0) {
    bVar4 = false;
  }
  else {
    pIVar2 = pIVar1->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar6 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
          goto label_0531e86b;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_0531e86b:
    (*pVVar6->methodPtr)(&local_40,pIVar1,pVVar6->method);
    pIVar1 = (Il2CppObject *)(__this->fields)._source;
    if (pIVar1 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar1->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_0531e8e1;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,0);
label_0531e8e1:
    iVar5 = (*pVVar6->methodPtr)(pIVar1,pVVar6->method);
    bVar4 = local_40.fields.VirtualizationThreshold <= iVar5;
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$get_LiveSlotCount
// il2cpp: int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_LiveSlotCount (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531e900

int32_t Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_LiveSlotCount
                  (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method
                  )

{
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar1;
  
  if (Il2CppMethodInitialized_075427cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    Il2CppMethodInitialized_075427cb = '\x01';
  }
  pSVar1 = (__this->fields)._slots;
  if (pSVar1 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._size;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Setup (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o* source, const MethodInfo* method);
// 0x531e940

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Setup
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *source,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o **targetAddress;
  UnityEngine_Events_UnityAction_Vector2__o **targetAddress_00;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar2;
  bool bVar3;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_Events_UnityAction_Vector2__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075427cc == '\0') {
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
    Il2CppMethodInitialized_075427cc = '\x01';
  }
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source);
  pUVar4 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._scroll;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) &&
     (call = (UnityEngine_Events_UnityAction_T0__o *)(__this->fields)._scrollChanged,
     call != (UnityEngine_Events_UnityAction_T0__o *)0x0)) {
    if ((*targetAddress == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)((*targetAddress)->fields).m_OnValueChanged,
       pUVar2 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0)) goto label_0531eb60;
    UnityEngine_Events_UnityEvent_Vector2___RemoveListener
              (pUVar2,call,
               (MethodInfo_4319B00 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
  }
  (__this->fields)._scroll = pUVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar5,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_0531eb60;
      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar5,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    }
    (__this->fields)._layout = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._layout);
    Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh(__this,true,method_00);
    pUVar1 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    targetAddress_00 = &(__this->fields)._scrollChanged;
    if ((__this->fields)._scrollChanged == (UnityEngine_Events_UnityAction_Vector2__o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
      UnityEngine_Events_UnityAction_Vector2____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Setup_b__10_0,
                 (MethodInfo_4311CC0 *)0x0);
      (__this->fields)._scrollChanged = __this_00;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
    }
    if ((*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)((*targetAddress)->fields).m_OnValueChanged,
       pUVar2 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0)) {
      UnityEngine_Events_UnityEvent_Vector2___AddListener
                (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)*targetAddress_00,
                 (MethodInfo_4319A50 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
      return;
    }
  }
label_0531eb60:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__OnDestroy (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531ef20

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__OnDestroy
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075427cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    Il2CppMethodInitialized_075427cd = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) &&
     (call = (UnityEngine_Events_UnityAction_T0__o *)(__this->fields)._scrollChanged,
     call != (UnityEngine_Events_UnityAction_T0__o *)0x0)) {
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (__this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar1->fields).m_OnValueChanged,
       __this_00 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0)) {
      ThrowNullReferenceException();
    }
    UnityEngine_Events_UnityEvent_Vector2___RemoveListener
              (__this_00,call,
               (MethodInfo_4319B00 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, bool force, const MethodInfo* method);
// 0x531eb70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531ec72: jmp 0x531ef17
// asm:   0x531ed88: jmp 0x531ef17

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,bool force,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  undefined8 uVar5;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  uint itemCount;
  VirtualInvokeData *pVVar9;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields range;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar11;
  ulong uVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  int iVar13;
  MethodInfo *pMVar14;
  long lVar15;
  float fVar16;
  float viewportHeight;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_Fields local_78;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_Fields local_50;
  
  if (Il2CppMethodInitialized_075427ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_075427ce = '\x01';
  }
  pIVar1 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar1 == (Il2CppObject *)0x0) {
    return;
  }
  pIVar2 = pIVar1->klass;
  uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar12 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
           ((long)&pIVar3->interfaceType + lVar15) ==
          TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
        pVVar9 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar15) + 1);
        goto label_0531ec14;
      }
      lVar15 = lVar15 + 0x10;
    } while (uVar12 * 0x10 != lVar15);
  }
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar1,(Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_0531ec14:
  (*pVVar9->methodPtr)
            ((Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *)&local_50,pIVar1,
             pVVar9->method);
  local_78.Gap = local_50.Gap;
  local_78.ViewportHeight = local_50.ViewportHeight;
  local_78.VirtualizationThreshold = local_50.VirtualizationThreshold;
  local_78.OverscanRows = local_50.OverscanRows;
  local_78.Mode = local_50.Mode;
  local_78.Columns = local_50.Columns;
  uVar5 = local_78._0_8_;
  local_78.ItemWidth = local_50.ItemWidth;
  local_78.ItemHeight = local_50.ItemHeight;
  pUVar4 = (__this->fields)._layout;
  local_78.Mode = local_50.Mode;
  if (local_78.Mode == 0) {
    fVar16 = -1.0;
  }
  else {
    local_78.Columns = local_50.Columns;
    iVar8 = 0;
    if (0 < local_78.Columns + -1) {
      iVar8 = local_78.Columns + -1;
    }
    fVar16 = (float)iVar8 * local_78.Gap + (float)local_78.Columns * local_78.ItemWidth;
  }
  local_78._0_8_ = uVar5;
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar16,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    pIVar1 = (Il2CppObject *)(__this->fields)._source;
    if (pIVar1 != (Il2CppObject *)0x0) {
      pUVar4 = (__this->fields)._layout;
      pIVar2 = pIVar1->klass;
      uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
               ((long)&pIVar3->interfaceType + lVar15) ==
              TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
            pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
            goto label_0531ed01;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar12 * 0x10 != lVar15);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar1,(Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,0);
label_0531ed01:
      iVar7 = (*pVVar9->methodPtr)(pIVar1,pVVar9->method);
      if (iVar7 < 1) {
        iVar8 = 0;
      }
      else {
        fVar16 = (float)local_78.Columns;
        if (Il2CppMethodInitialized_0753e7f9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7f9 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar16 = ceilf((float)iVar7 / fVar16);
        iVar8 = (int)fVar16;
      }
      if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        iVar13 = 0;
        if (0 < iVar8 + -1) {
          iVar13 = iVar8 + -1;
        }
        pMVar10 = (pUVar4->klass->vtable)._38_set_preferredHeight.method;
        (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar4,(float)iVar13 * local_78.Gap + (float)iVar8 * local_78.ItemHeight,pMVar10);
        bVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__get_IsVirtualized
                          (__this,pMVar10);
        if (bVar6) {
          pIVar1 = (Il2CppObject *)(__this->fields)._source;
          if (pIVar1 == (Il2CppObject *)0x0) goto label_0531ef17;
          pIVar2 = pIVar1->klass;
          uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar12 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
                   ((long)&pIVar3->interfaceType + lVar15) ==
                  TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
                pMVar10 = (MethodInfo *)(pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15));
                goto label_0531ee5e;
              }
              lVar15 = lVar15 + 0x10;
            } while (uVar12 * 0x10 != lVar15);
          }
          pMVar10 = (MethodInfo *)
                    GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar1,(Il2CppClass *)
                                      TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,
                               0);
label_0531ee5e:
          pMVar14 = (MethodInfo *)pMVar10->virtualMethodPointer;
          itemCount = (*pMVar10->methodPointer)(pIVar1,pMVar14);
          fVar16 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ScrollOffset
                             (__this,pMVar14);
          viewportHeight =
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ViewportHeight(__this,pMVar14);
          pMVar14 = (MethodInfo *)(ulong)itemCount;
          range = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)
                  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics__RangeFor
                            ((Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o *)&local_78,
                             itemCount,fVar16,viewportHeight,method_00);
          iVar8 = range.End;
          iVar13 = range.Start;
          if ((iVar8 < iVar13) || ((iVar8 - iVar13) + 1 < 1)) {
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__UnbindAll(__this,pMVar14);
          }
          else {
            pMVar14 = (MethodInfo *)(ulong)(uint)range.Start;
            if (((!force) && ((__this->fields)._range.fields.Start == iVar13)) &&
               ((__this->fields)._range.fields.End == iVar8)) {
              return;
            }
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RecycleOutside
                      (__this,(Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o)range,method_01);
            method_02 = extraout_RDX;
            do {
              iVar13 = (int)pMVar14;
              pGVar11 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                                  (__this,iVar13,method_02);
              method_02 = extraout_RDX_00;
              if (pGVar11 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
                pGVar11 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
                                    (__this,pMVar14);
                Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                          (__this,pGVar11,iVar13,pMVar10);
                method_02 = extraout_RDX_01;
              }
              pMVar14 = (MethodInfo *)(ulong)(iVar13 + 1U);
            } while ((int)(iVar13 + 1U) <= iVar8);
          }
          (__this->fields)._range.fields = range;
        }
        else {
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RefreshStatic(__this,pMVar10);
        }
        return;
      }
    }
  }
label_0531ef17:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$MaterializeItem
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__MaterializeItem (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x531fcc0

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__MaterializeItem
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar4;
  ulong uVar5;
  MethodInfo *method_01;
  bool bVar6;
  MethodInfo *method_02;
  long lVar7;
  
  if (Il2CppMethodInitialized_075427cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    Il2CppMethodInitialized_075427cf = '\x01';
  }
  bVar6 = false;
  if ((-1 < itemIndex) && (obj = (Il2CppObject *)(__this->fields)._source, obj != (Il2CppObject *)0x0)) {
    pIVar1 = obj->klass;
    uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar2->interfaceType + lVar7) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          method_00 = (MethodInfo *)(pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7));
          goto label_0531fd61;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar5 * 0x10 != lVar7);
    }
    method_00 = (MethodInfo *)
                GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,0);
label_0531fd61:
    iVar3 = (*method_00->methodPointer)(obj,(MethodInfo *)method_00->virtualMethodPointer);
    if (itemIndex < iVar3) {
      method_02 = (MethodInfo *)(ulong)(uint)itemIndex;
      pGVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                         (__this,itemIndex,method_01);
      bVar6 = true;
      if (pGVar4 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
        pGVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot(__this,method_02);
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                  (__this,pGVar4,itemIndex,method_00);
      }
    }
    else {
      bVar6 = false;
    }
  }
  return bVar6;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$TryMaterializeSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__TryMaterializeSearchTarget (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, System_String_o* targetId, UnityEngine_GameObject_o** target, const MethodInfo* method);
// 0x531fe60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531ff0f: nop 

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__TryMaterializeSearchTarget
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               System_String_o *targetId,UnityEngine_GameObject_o **target,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *pGVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  char cVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar7;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar9;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_075427d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427d0 = '\x01';
  }
  iStack_34 = 0;
  *target = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(target);
  if (((__this->fields)._source != (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0) &&
     (bVar4 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0), !bVar4)) {
    obj = (Il2CppObject *)(__this->fields)._source;
    if (obj == (Il2CppObject *)0x0) {
label_0531ffea:
      ThrowNullReferenceException();
    }
    pIVar1 = obj->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar6 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar9) + 7);
          goto label_0531ff4a;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,7);
label_0531ff4a:
    bVar4 = (*pVVar6->methodPtr)(obj,targetId,&iStack_34,pVVar6->method);
    if (((bVar4) &&
        (bVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__MaterializeItem
                           (__this,iStack_34,method_00), bVar4)) &&
       (pGVar7 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                           (__this,iStack_34,method_01),
       pGVar7 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0)) {
      pGVar3 = (__this->fields)._source;
      if (pGVar3 == (Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_o *)0x0)
      goto label_0531ffea;
      cVar5 = il2cpp_runtime_helper_02d49f70(8,TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,pGVar3,
                           targetId,iStack_34,(pGVar7->fields).Root,target);
      if (cVar5 != '\0') {
        x = (UnityEngine_Object_o *)*target;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar4;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$RefreshStatic
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RefreshStatic (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531efc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531f14f: nop 

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RefreshStatic
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_GameObject_o *slot;
  bool bVar4;
  uint uVar5;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar6;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  uint itemIndex;
  int index;
  MethodInfo *method_03;
  long lVar9;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *__this_00;
  
  if (Il2CppMethodInitialized_075427d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427d1 = '\x01';
  }
  pIVar1 = (Il2CppObject *)(__this->fields)._source;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          method_00 = (MethodInfo *)(pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9));
          goto label_0531f071;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    method_00 = (MethodInfo *)
                GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar1,(Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,0);
label_0531f071:
    uVar5 = (*method_00->methodPointer)(pIVar1,(MethodInfo *)method_00->virtualMethodPointer);
    if (0 < (int)uVar5) {
      itemIndex = 0;
      method_01 = extraout_RDX;
      do {
        method_03 = (MethodInfo *)(ulong)itemIndex;
        pGVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
                           (__this,itemIndex,method_01);
        method_01 = extraout_RDX_00;
        if (pGVar6 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
          pGVar6 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot(__this,method_03);
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
                    (__this,pGVar6,itemIndex,method_00);
          method_01 = extraout_RDX_01;
        }
        itemIndex = itemIndex + 1;
      } while (uVar5 != itemIndex);
    }
    __this_00 = (__this->fields)._slots;
    if (__this_00 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
      index = 0;
      do {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        pGVar6 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           );
        if (pGVar6 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) break;
        if ((int)uVar5 <= (pGVar6->fields).ItemIndex) {
          pIVar1 = (Il2CppObject *)(__this->fields)._source;
          if (pIVar1 == (Il2CppObject *)0x0) break;
          slot = (pGVar6->fields).Root;
          pIVar2 = pIVar1->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
                   ((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
                pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 6);
                goto label_0531f189;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar1,(Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,6
                             );
label_0531f189:
          bVar4 = (*pVVar7->methodPtr)(pIVar1,slot,pVVar7->method);
          if (bVar4) {
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind(__this,pGVar6,method_02);
          }
        }
        index = index + 1;
        __this_00 = (__this->fields)._slots;
      } while (__this_00 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$RecycleOutside
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RecycleOutside (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range, const MethodInfo* method);
// 0x531f6f0

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__RecycleOutside
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_o range,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  MethodInfo *method_00;
  int index;
  MethodInfo *method_01;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *__this_00;
  long lVar7;
  int local_38;
  
  if (Il2CppMethodInitialized_075427d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427d2 = '\x01';
  }
  __this_00 = (__this->fields)._slots;
  if (__this_00 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      slot = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                       );
      if (slot == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) break;
      iVar1 = (slot->fields).ItemIndex;
      if ((-1 < iVar1) && ((iVar1 < range.fields.Start || (local_38 = range.fields.End, local_38 < iVar1)))) {
        obj = (Il2CppObject *)(__this->fields)._source;
        if (obj == (Il2CppObject *)0x0) break;
        method_01 = (MethodInfo *)(slot->fields).Root;
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
                 ((long)&pIVar3->interfaceType + lVar7) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 6);
              goto label_0531f829;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,6);
label_0531f829:
        bVar4 = (*pVVar5->methodPtr)(obj,(UnityEngine_GameObject_o *)method_01,pVVar5->method);
        if (bVar4) {
          bVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild
                            ((slot->fields).Root,method_01);
          if (!bVar4) {
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind(__this,slot,method_00);
          }
        }
      }
      index = index + 1;
      __this_00 = (__this->fields)._slots;
    } while (__this_00 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$FreeSlot
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531f890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531f95d: jmp 0x531fb55

Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__FreeSlot
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_array *pGVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Transform_o *parent;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar10;
  UnityEngine_Object_o *x;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  ulong uVar12;
  int32_t iVar13;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar14;
  long lVar15;
  
  if (Il2CppMethodInitialized_075427d3 == '\0') {
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
    Il2CppMethodInitialized_075427d3 = '\x01';
  }
  pSVar14 = (__this->fields)._slots;
  if (pSVar14 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    iVar13 = 0;
    do {
      if ((pSVar14->fields)._size <= iVar13) {
        pIVar8 = (Il2CppObject *)(__this->fields)._source;
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pSVar14 = (__this->fields)._slots;
        if ((pSVar14 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) &&
           (pIVar8 != (Il2CppObject *)0x0)) {
          iVar13 = (pSVar14->fields)._size;
          pIVar3 = pIVar8->klass;
          uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar12 == 0) goto label_0531f9cf;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar15 = 0;
          goto label_0531f9c0;
        }
        break;
      }
      pIVar8 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                         );
      if (pIVar8 == (Il2CppObject *)0x0) break;
      if (*(int *)&pIVar8[1].monitor < 0) {
        pSVar14 = (__this->fields)._slots;
        if (pSVar14 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
          pGVar10 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                              );
          return pGVar10;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      pSVar14 = (__this->fields)._slots;
    } while (pSVar14 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0);
  }
  goto label_0531fb55;
  while (lVar15 = lVar15 + 0x10, uVar12 * 0x10 != lVar15) {
label_0531f9c0:
    if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
         ((long)&pIVar4->interfaceType + lVar15) ==
        TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
      pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar15) + 3);
      goto label_0531fa1f;
    }
  }
label_0531f9cf:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar8,(Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,3);
label_0531fa1f:
  x = (UnityEngine_Object_o *)(*pVVar9->methodPtr)(pIVar8,parent,iVar13,pVVar9->method);
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
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                           ), pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0 ||
      (pUVar11 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                           ), pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0)))) {
    (*(pUVar11->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar11,true,(pUVar11->klass->vtable)._28_set_ignoreLayout.method);
    pGVar10 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot);
    (pGVar10->fields).ItemIndex = -1;
    System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
    (pGVar10->fields).Root = (UnityEngine_GameObject_o *)x;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).Root);
    pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_Add;
    pSVar14 = (__this->fields)._slots;
    if (pSVar14 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
      piVar1 = &(pSVar14->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (pSVar14->fields)._items;
      if (pGVar5 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_array *)0x0) {
        uVar2 = (pSVar14->fields)._size;
        if (uVar2 < (uint)pGVar5->max_length) {
          (pSVar14->fields)._size = uVar2 + 1;
          pGVar5->m_Items[(int)uVar2] = pGVar10;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar2);
          return pGVar10;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pGVar10,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        return pGVar10;
      }
    }
  }
label_0531fb55:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Bind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* slot, int32_t itemIndex, const MethodInfo* method);
// 0x531fb60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531fc5e: nop 

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Bind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot,int32_t itemIndex,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *rect;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  MethodInfo *method_00;
  long lVar7;
  
  if (Il2CppMethodInitialized_075427d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427d4 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      (slot->fields).ItemIndex = itemIndex;
      pUVar1 = (slot->fields).Root;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        rect = UnityEngine_GameObject__GetComponent_object_
                         (pUVar1,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Position(__this,rect,itemIndex,method)
        ;
        pUVar1 = (slot->fields).Root;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          obj = (Il2CppObject *)(__this->fields)._source;
          if (obj != (Il2CppObject *)0x0) {
            pUVar1 = (slot->fields).Root;
            pIVar2 = obj->klass;
            uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar6 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar7 = 0;
              do {
                if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
                     ((long)&pIVar3->interfaceType + lVar7) ==
                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
                  pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 4);
                  goto label_0531fc95;
                }
                lVar7 = lVar7 + 0x10;
              } while (uVar6 * 0x10 != lVar7);
            }
            pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                               (obj,(Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,4)
            ;
label_0531fc95:
            (*pVVar5->methodPtr)(obj,pUVar1,itemIndex,pVVar5->method);
            Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__PrepareBoundSlot
                      (__this,(slot->fields).Root,method_00);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Unbind
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* slot, const MethodInfo* method);
// 0x531fff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532009c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppObject *obj;
  UnityEngine_GameObject_o *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_075427d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427d5 = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0) {
    x = (UnityEngine_Object_o *)(slot->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      obj = (Il2CppObject *)(__this->fields)._source;
      if (obj != (Il2CppObject *)0x0) {
        pUVar1 = (slot->fields).Root;
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
                 ((long)&pIVar3->interfaceType + lVar7) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 5);
              goto label_053200d5;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,5);
label_053200d5:
        (*pVVar5->methodPtr)(obj,pUVar1,pVVar5->method);
        (slot->fields).ItemIndex = -1;
        pUVar1 = (slot->fields).Root;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
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
// 0x531f560

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__UnbindAll
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  Il2CppClass *slot;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *slot_00;
  ulong uVar7;
  MethodInfo *method_00;
  int32_t index;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_075427d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427d6 = '\x01';
  }
  pSVar8 = (__this->fields)._slots;
  if (pSVar8 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((pSVar8->fields)._size <= index) {
        return;
      }
      pIVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar8,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                         );
      if (pIVar4 == (Il2CppObject *)0x0) break;
      if (-1 < *(int *)&pIVar4[1].monitor) {
        pSVar8 = (__this->fields)._slots;
        if (pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) break;
        pIVar4 = (Il2CppObject *)(__this->fields)._source;
        pIVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar8,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                           );
        if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) break;
        slot = pIVar5[1].klass;
        pIVar1 = pIVar4->klass;
        uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
                 ((long)&pIVar2->interfaceType + lVar9) ==
                TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
              pVVar6 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar9) + 6);
              goto label_0531f699;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar7 * 0x10 != lVar9);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar4,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,6);
label_0531f699:
        bVar3 = (*pVVar6->methodPtr)(pIVar4,(UnityEngine_GameObject_o *)slot,pVVar6->method);
        if (bVar3) {
          pSVar8 = (__this->fields)._slots;
          if (pSVar8 == (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) break;
          slot_00 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar8,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                              );
          Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Unbind(__this,slot_00,method_00);
        }
      }
      index = index + 1;
      pSVar8 = (__this->fields)._slots;
    } while (pSVar8 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$IsBound
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__IsBound (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x531f880

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__IsBound
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,int32_t itemIndex,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor(__this,itemIndex,method);
  return pGVar1 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$SlotFor
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o* Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x531fdb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531fe25: jmp 0x531fe51

Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *
Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__SlotFor
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,int32_t itemIndex,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *pGVar2;
  int32_t index;
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *pSVar3;
  
  if (Il2CppMethodInitialized_075427d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item);
    Il2CppMethodInitialized_075427d7 = '\x01';
  }
  pSVar3 = (__this->fields)._slots;
  if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
    index = 0;
    do {
      if ((pSVar3->fields)._size <= index) {
        return (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)0x0;
      }
      pIVar1 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                         );
      if (pIVar1 == (Il2CppObject *)0x0) break;
      if (*(int *)&pIVar1[1].monitor == itemIndex) {
        pSVar3 = (__this->fields)._slots;
        if (pSVar3 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0) {
          pGVar2 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Slot_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_get_Item
                             );
          return pGVar2;
        }
        break;
      }
      index = index + 1;
      pSVar3 = (__this->fields)._slots;
    } while (pSVar3 != (System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Position
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Position (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, UnityEngine_RectTransform_o* rect, int32_t itemIndex, const MethodInfo* method);
// 0x53202a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53203d8: movaps xmm1, xmmword ptr [rsp]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Position
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               UnityEngine_RectTransform_o *rect,int32_t itemIndex,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_Vector2_o value;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  UnityEngine_Vector2_Fields value_00;
  UnityEngine_Vector2_o value_01;
  float local_78;
  float fStack_74;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_68;
  float local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_075427d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427d8 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar3) && (obj = (Il2CppObject *)(__this->fields)._source, obj != (Il2CppObject *)0x0)) {
    pIVar1 = obj->klass;
    uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar6) + 1);
          goto label_05320374;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_05320374:
    (*pVVar4->methodPtr)(&local_68,obj,pVVar4->method);
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_38 = ZEXT416((uint)local_68.fields.Gap);
    UnityEngine_RectTransform__set_anchorMin(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
    ;
    if (local_68.fields.Mode == 0) {
      value_00.x = 1.0;
      value_00.y = 1.0;
      local_48 = 0.0;
      register0x00001244 = 0.0;
    }
    else {
      value_00.x = 0.0;
      value_00.y = 1.0;
      _local_48 = local_68.fields._8_8_;
    }
    uStack_40 = 0;
    UnityEngine_RectTransform__set_anchorMax(rect,(UnityEngine_Vector2_o)value_00,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(rect,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    fStack_74 = local_68.fields.ItemHeight;
    value.fields.y = fStack_74;
    value.fields.x = local_48;
    UnityEngine_RectTransform__set_sizeDelta(rect,value,(MethodInfo *)0x0);
    local_78 = local_68.fields.ItemWidth;
    value_01.fields.x = (float)(itemIndex % local_68.fields.Columns) * ((float)local_38._0_4_ + local_78);
    value_01.fields.y = (float)-(itemIndex / local_68.fields.Columns) * ((float)local_38._0_4_ + fStack_74);
    UnityEngine_RectTransform__set_anchoredPosition(rect,value_01,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$PrepareBoundSlot
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__PrepareBoundSlot (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5320460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53204fc: nop dword ptr [rax]

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__PrepareBoundSlot
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  UnityEngine_Transform_o *root_00;
  ulong uVar5;
  MethodInfo *method_00;
  long lVar6;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o GStack_30;
  
  if (Il2CppMethodInitialized_075427d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427d9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar3) && (obj = (Il2CppObject *)(__this->fields)._source, obj != (Il2CppObject *)0x0)) {
    pIVar1 = obj->klass;
    uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar6) + 1);
          goto label_05320534;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_05320534:
    (*pVVar4->methodPtr)(&GStack_30,obj,pVVar4->method);
    if (GStack_30.fields.Mode == 0) {
      if (root == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_00 = (MethodInfo *)0x0;
      root_00 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__StretchDirectChildren(root_00,method_00)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$StretchDirectChildren
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__StretchDirectChildren (UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x53205a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5320620: lea rbp, [rip + 0x1f845c9]  ; MethodInfo_UnityEngine_Component_GetComponent_RectTransform
// asm:   0x5320627: lea r15, [rip + 0x1f5de4a]  ; TypeInfo_UnityEngine_Vector2
// asm:   0x532062e: jmp 0x532065c

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__StretchDirectChildren
               (UnityEngine_Transform_o *root,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  int index;
  
  if (Il2CppMethodInitialized_075427da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427da = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_Transform_o *)0x0) {
label_0532076c:
      ThrowNullReferenceException();
    }
    index = 0;
    iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
    if (0 < iVar2) {
      do {
        __this = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Transform_o *)0x0) goto label_0532076c;
        __this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_0532076c;
          UnityEngine_RectTransform__set_anchorMin
                    (__this_00,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_00,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (__this_00,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_00,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
        }
        index = index + 1;
        iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      } while (index < iVar2);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$ScrollOffset
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ScrollOffset (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531f1d0

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ScrollOffset
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075427db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075427db = '\x01';
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
        UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (__this->fields)._scroll;
        if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._scroll;
          if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            fStack_24 = UVar6.fields.m_Height;
            fStack_24 = fStack_24 - UVar7.fields.m_Height;
            fVar5 = 0.0;
            if (0.0 <= fStack_24) {
              fVar5 = fStack_24;
            }
            fVar4 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
            return (1.0 - fVar4) * fVar5;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$ViewportHeight
// il2cpp: float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ViewportHeight (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x531f350
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531f42a: shufps xmm1, xmm1, 0x55
// asm:   0x531f42e: ucomiss xmm1, dword ptr [rip - 0x435dbd1]
// asm:   0x531f435: jbe 0x531f497

float Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__ViewportHeight
                (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  UnityEngine_Rect_o UVar9;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentMetrics_o local_38;
  
  if (Il2CppMethodInitialized_075427dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075427dc = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar2 = (pUVar1->fields).m_Viewport;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) goto label_0531f497;
      pUVar1 = (__this->fields)._scroll;
      if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (UVar9.fields.m_Height <= 1.0) goto label_0531f497;
        pUVar1 = (__this->fields)._scroll;
        if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          return UVar9.fields.m_Height;
        }
      }
    }
    ThrowNullReferenceException();
  }
label_0531f497:
  obj = (Il2CppObject *)(__this->fields)._source;
  if (obj == (Il2CppObject *)0x0) {
    local_38.fields.ViewportHeight = 1.0;
  }
  else {
    pIVar3 = obj->klass;
    uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource_c **)
             ((long)&pIVar4->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource) {
          pVVar6 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar8) + 1);
          goto label_0531f50e;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Virtualization_IGisketchVirtualContentSource,1);
label_0531f50e:
    (*pVVar6->methodPtr)(&local_38,obj,pVVar6->method);
  }
  return local_38.fields.ViewportHeight;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$HasFocusedChild
// il2cpp: bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5320120

bool Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__HasFocusedChild
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_075427dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427dd = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_05320255;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
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
label_05320255:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___ctor (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, const MethodInfo* method);
// 0x5320780

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___ctor
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot__o *__this_00;
  
  if (Il2CppMethodInitialized_075427de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot);
    Il2CppMethodInitialized_075427de = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchVirtualContentRuntime_Slot_ctor);
  (__this->fields)._slots = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slots);
  (__this->fields)._range.fields =
       (Gisketch_Aottg2UI_Virtualization_GisketchVirtualRange_Fields)0xffffffffffffffff;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$<Setup>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___Setup_b__10_0 (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o* __this, UnityEngine_Vector2_o __, const MethodInfo* method);
// 0x5320800

void Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime___Setup_b__10_0
               (Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_o *__this,
               UnityEngine_Vector2_o __,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime__Refresh(__this,false,in_RDX);
  return;
}


