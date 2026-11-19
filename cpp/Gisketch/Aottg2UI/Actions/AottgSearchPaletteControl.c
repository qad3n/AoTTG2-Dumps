// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchPaletteControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x539a400

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_0$$<WireResults>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___WireResults_b__1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x539ad80

bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___WireResults_b__1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  
  pGVar2 = (__this->fields).__4__this;
  UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pGVar2->fields)._pointerSelectionLocked != false) {
    UVar1 = (pGVar2->fields)._pointerLockPosition.fields;
    fVar3 = UVar5.fields.x - UVar1.x;
    fVar4 = UVar5.fields.y - UVar1.y;
    if (fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
      return false;
    }
    (pGVar2->fields)._pointerSelectionLocked = false;
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x539a4e0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_1$$<WireResults>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___WireResults_b__0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x539add0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___WireResults_b__0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *__this,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(__this->fields).CS___8__locals1;
  if ((method_00 == (MethodInfo *)0x0) ||
     ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)method_00->invoker_method ==
      (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)method_00->invoker_method,
             (__this->fields).result,(Gisketch_Aottg2UI_GisketchUIRoot_o *)method_00->name,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x539ac50

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539ae00

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 2) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07542b73 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07542b73 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (Il2CppObject *)(__this->fields).__7__wrap1;
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_0539ae9f;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0539ae9f:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__MoveNext (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539aeb0
// eh: try 0x539af46..0x539b2af -> pad 0x539b2b3 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x539b2df..0x539b2e4 -> pad 0x539b309 cleanup
// eh: try 0x539b30c..0x539b316 -> pad 0x539b31e catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539afc1: jmp 0x539afe5
// asm:   0x539b03c: nop dword ptr [rax]
// asm:   0x539b2af: jmp 0x539b2c7
// asm:   0x539b2b1: jmp 0x539b2c7
// asm:   0x539b2b3: jmp 0x539b2c7
// asm:   0x539b2b5: jmp 0x539b2c7
// asm:   0x539b2b7: jmp 0x539b2c7
// asm:   0x539b2b9: jmp 0x539b2c7
// asm:   0x539b2bb: jmp 0x539b2c7
// asm:   0x539b2bd: jmp 0x539b2c7
// asm:   0x539b2bf: jmp 0x539b2c7
// asm:   0x539b2c1: jmp 0x539b2c7
// asm:   0x539b2c3: jmp 0x539b2c7
// asm:   0x539b2c5: jmp 0x539b2c7
// asm:   0x539b2c7: mov rbx, rax
// asm:   0x539b2ca: cmp edx, 1
// asm:   0x539b2cd: jne 0x539b30c
// asm:   0x539b2cf: mov rdi, rbx
// asm:   0x539b2d2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x539b2d7: mov rbx, qword ptr [rax]
// asm:   0x539b2da: mov qword ptr [rsp + 8], rbx
// asm:   0x539b2df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x539b2e4: test rbx, rbx
// asm:   0x539b2e7: jne 0x539b2f8
// asm:   0x539b2f8: mov rdi, qword ptr [rsp]
// asm:   0x539b2fc: call 0x2d4bdd0  ; il2cpp_runtime_helper_02d4bdd0()
// asm:   0x539b301: mov rdi, rbx
// asm:   0x539b304: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x539b309: mov rbx, rax
// asm:   0x539b30c: lea rdi, [rsp + 8]
// asm:   0x539b311: call 0x2d4bdb0  ; il2cpp_runtime_helper_02d4bdb0()
// asm:   0x539b316: mov rdi, rbx
// asm:   0x539b319: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x539b31e: mov rdi, rax
// asm:   0x539b321: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__MoveNext
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *pGVar6;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o **ppGVar7;
  bool bVar8;
  Il2CppClass *pIVar9;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  System_String_o *value;
  ulong uVar12;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_Fields *pGVar13;
  System_String_array *obj;
  int32_t iVar14;
  long lVar15;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *pGStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  pGStack_38 = __this;
  if (Il2CppMethodInitialized_07542b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07542b72 = '\x01';
  }
  puStack_28 = (undefined1 *)&pGStack_38;
  uStack_30 = 0;
  pGVar13 = &__this->fields;
  iVar1 = (__this->fields).__1__state;
  ppGVar7 = &pGStack_38;
  if (iVar1 != 2) {
    pGVar3 = (__this->fields).__4__this;
    if (iVar1 == 1) {
      pGVar13->__1__state = -1;
      ppGVar7 = &pGStack_38;
      if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      pGVar13->__1__state = -1;
      if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
        puStack_28 = (undefined1 *)&pGStack_38;
        ThrowNullReferenceException();
      }
      puStack_28 = (undefined1 *)&pGStack_38;
      bVar8 = System_String__IsNullOrEmpty((pGVar3->fields)._scopeScreenId,(MethodInfo *)0x0);
      ppGVar7 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o **)puStack_28;
      if (!bVar8) {
        (pGStack_38->fields).__2__current = (pGVar3->fields)._scopeScreenId;
        iVar14 = 1;
        Il2CppCodeGenWriteBarrier(&(pGStack_38->fields).__2__current);
        goto label_0539b1da;
      }
    }
    puStack_28 = (undefined1 *)ppGVar7;
    pGVar6 = pGStack_38;
    pMVar5 = MethodInfo_System_Linq_Enumerable_Empty_string;
    obj = (pGVar3->fields)._extraScopeScreenIds;
    if (obj == (System_String_array *)0x0) {
      if ((MethodInfo_System_Linq_Enumerable_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
        il2cpp_codegen_rgctx_method_init(MethodInfo_System_Linq_Enumerable_Empty_string);
        pIVar9 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
        if (((pIVar9->_2).bitflags1 & 1) == 0) goto label_0539afb0;
label_0539afdc:
        uVar2 = (pIVar9->_2).cctor_finished_or_no_cctor;
      }
      else {
        pIVar9 = *(Il2CppClass **)
                  ((long)(MethodInfo_System_Linq_Enumerable_Empty_string->field7_0x38).methodMetadataHandle +
                  0x10);
        if (((pIVar9->_2).bitflags1 & 1) != 0) goto label_0539afdc;
label_0539afb0:
        pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
        uVar2 = (pIVar9->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init(pIVar9);
      }
      pIVar9 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      if (((pIVar9->_2).bitflags1 & 1) == 0) {
        pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
      }
      obj = *(System_String_array **)pIVar9->static_fields;
      if (obj == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
    }
    pIVar9 = (obj->obj).klass;
    uVar12 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pIVar9->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar4->interfaceType + lVar15) ==
            TypeInfo_System_Collections_Generic_IEnumerable_string) {
          pVVar10 = pIVar9->vtable + *(int *)((long)&pIVar4->offset + lVar15);
          goto label_0539b071;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar12 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (&obj->obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_0539b071:
    pIVar11 = (*pVVar10->methodPtr)(&obj->obj,pVVar10->method);
    if (pGVar6 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar6->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_string__o *)pIVar11;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).__7__wrap1);
    pGVar13 = &pGStack_38->fields;
    ppGVar7 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o **)puStack_28;
  }
  puStack_28 = (undefined1 *)ppGVar7;
  pGVar13->__1__state = -3;
  do {
    pIVar11 = (Il2CppObject *)(pGStack_38->fields).__7__wrap1;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = pIVar11->klass;
    uVar12 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pIVar9->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar15) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = pIVar9->vtable + *(int *)((long)&pIVar4->offset + lVar15);
          goto label_0539b123;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar12 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0539b123:
    bVar8 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
    pGVar6 = pGStack_38;
    if (!bVar8) {
      if (Il2CppMethodInitialized_07542b73 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_07542b73 = '\x01';
      }
      (pGVar6->fields).__1__state = -1;
      pIVar11 = (Il2CppObject *)(pGVar6->fields).__7__wrap1;
      if (pIVar11 == (Il2CppObject *)0x0) goto label_0539b276;
      pIVar9 = pIVar11->klass;
      uVar12 = (ulong)(pIVar9->_2).interface_offsets_count;
      if (uVar12 == 0) goto label_0539b24f;
      pIVar4 = (pIVar9->_1).interfaceOffsets;
      lVar15 = 0;
      goto label_0539b240;
    }
    pIVar11 = (Il2CppObject *)(pGStack_38->fields).__7__wrap1;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = pIVar11->klass;
    uVar12 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar4 = (pIVar9->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar4->interfaceType + lVar15) ==
            TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar10 = pIVar9->vtable + *(int *)((long)&pIVar4->offset + lVar15);
          goto label_0539b1a3;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar12 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_0539b1a3:
    value = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
    bVar8 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  } while (bVar8);
  (pGStack_38->fields).__2__current = value;
  iVar14 = 2;
  Il2CppCodeGenWriteBarrier(&(pGStack_38->fields).__2__current);
label_0539b1da:
  (pGStack_38->fields).__1__state = iVar14;
  return true;
  while (lVar15 = lVar15 + 0x10, uVar12 * 0x10 != lVar15) {
label_0539b240:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar9->vtable + *(int *)((long)&pIVar4->offset + lVar15);
      goto label_0539b26d;
    }
  }
label_0539b24f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0539b26d:
  (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
label_0539b276:
  (pGStack_38->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_string__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pGStack_38->fields).__7__wrap1);
  return false;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39____m__Finally1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539b330

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39____m__Finally1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07542b73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07542b73 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap1;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0539b3bf;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0539b3bf:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539b3d0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerator_System_String__get_Current
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539b3e0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39_System_Collections_IEnum
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539b420

Il2CppObject *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
          MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539b430

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
          MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_07542b74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
    Il2CppMethodInitialized_07542b74 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x539b4d0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, TMPro_TMP_InputField_o* input, UnityEngine_UI_Button_o* submit, System_String_o* scopeScreenId, bool showFullPath, System_String_array* extraScopeScreenIds, const MethodInfo* method);
// 0x5398660

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,TMPro_TMP_InputField_o *input,
               UnityEngine_UI_Button_o *submit,System_String_o *scopeScreenId,bool showFullPath,
               System_String_array *extraScopeScreenIds,MethodInfo *method)

{
  TMPro_TMP_InputField_o **targetAddress;
  UnityEngine_UI_Button_o **targetAddress_00;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  UnityEngine_UI_Button_o *x_00;
  UnityEngine_Events_UnityEvent_o *__this_02;
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_03;
  
  if (Il2CppMethodInitialized_07542b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ActivateSelected);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_07542b61 = '\x01';
  }
  targetAddress = &(__this->fields)._input;
  (__this->fields)._input = input;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._submit;
  (__this->fields)._submit = submit;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  (__this->fields)._scopeScreenId = scopeScreenId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scopeScreenId);
  (__this->fields)._extraScopeScreenIds = extraScopeScreenIds;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._extraScopeScreenIds);
  (__this->fields)._showFullPath = showFullPath;
  x = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_053988a6;
    __this_00 = ((*targetAddress)->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_0,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 == (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) goto label_053988a6;
    UnityEngine_Events_UnityEvent_object___AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar2,
               (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    if (*targetAddress == (TMPro_TMP_InputField_o *)0x0) goto label_053988a6;
    __this_01 = ((*targetAddress)->fields).m_OnSubmit;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_1,
               (MethodInfo_4311A10 *)0x0);
    if (__this_01 == (TMPro_TMP_InputField_SubmitEvent_o *)0x0) goto label_053988a6;
    UnityEngine_Events_UnityEvent_object___AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar2,
               (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  }
  x_00 = *targetAddress_00;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*targetAddress_00 != (UnityEngine_UI_Button_o *)0x0) {
    __this_02 = (UnityEngine_Events_UnityEvent_o *)((*targetAddress_00)->fields).m_OnClick;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_03,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ActivateSelected,
               (MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_02,__this_03,(MethodInfo *)0x0);
      return;
    }
  }
label_053988a6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x53988b0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$FocusInput
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x53988c0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Action_o *pSVar2;
  bool bVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar5;
  UnityEngine_GameObject_o *selected;
  
  if (Il2CppMethodInitialized_07542b62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b62 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (Il2CppMethodInitialized_07542bac == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_07542bac = '\x01';
      }
      if (Il2CppMethodInitialized_07542884 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_07542884 = '\x01';
      }
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      if (pGVar5->_Mode_k__BackingField != 0) {
        if (Il2CppMethodInitialized_07542bea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
          Il2CppMethodInitialized_07542bea = '\x01';
          pGVar5 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
        }
        pGVar5->_Mode_k__BackingField = 0;
        pSVar2 = pGVar5->Changed;
        if (pSVar2 != (System_Action_o *)0x0) {
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code);
        }
      }
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      pTVar1 = (__this->fields)._input;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        selected = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                    (pUVar4,selected,(MethodInfo *)0x0);
          pTVar1 = (__this->fields)._input;
          if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
            (*(pTVar1->klass->vtable)._38_Select.methodPtr)(pTVar1,(pTVar1->klass->vtable)._38_Select.method);
            pTVar1 = (__this->fields)._input;
            if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
              TMPro_TMP_InputField__ActivateInputField(pTVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x5398a80

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar3;
  bool bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  UnityEngine_Object_o *y;
  int iVar6;
  int iVar7;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b63 = '\x01';
  }
  pTVar2 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar5 == (UnityEngine_EventSystems_EventSystem_o *)0x0) ||
         (pTVar2 = (__this->fields)._input, pTVar2 == (TMPro_TMP_InputField_o *)0x0)) {
label_05398c5e:
        ThrowNullReferenceException();
      }
      x = (UnityEngine_Object_o *)(pUVar5->fields).m_CurrentSelected;
      y = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
      if (!bVar4) {
        method_00 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
        if (bVar4) {
          iVar7 = (__this->fields)._selectedIndex;
          if (Il2CppMethodInitialized_07542b6a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
            Il2CppMethodInitialized_07542b6a = '\x01';
          }
          pSVar3 = (__this->fields)._results;
          if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_05398c5e;
          iVar1 = (pSVar3->fields)._size;
          iVar6 = 8;
          if (iVar1 < 8) {
            iVar6 = iVar1;
          }
          if (iVar6 != 0) {
            iVar7 = iVar7 + 1;
label_05398c35:
            (__this->fields)._selectedIndex = (iVar7 % iVar6 + iVar6) % iVar6;
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,method_00);
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult(__this,method_00);
            return;
          }
        }
        else {
          method_00 = (MethodInfo *)0x0;
          bVar4 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
          if (bVar4) {
            iVar7 = (__this->fields)._selectedIndex;
            if (Il2CppMethodInitialized_07542b6a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
              Il2CppMethodInitialized_07542b6a = '\x01';
            }
            pSVar3 = (__this->fields)._results;
            if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_05398c5e;
            iVar1 = (pSVar3->fields)._size;
            iVar6 = 8;
            if (iVar1 < 8) {
              iVar6 = iVar1;
            }
            if (iVar6 != 0) {
              iVar7 = iVar7 + -1;
              goto label_05398c35;
            }
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x5398ce0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  (__this->fields)._selectedIndex = 0;
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (__this->fields)._pointerSelectionLocked = true;
  (__this->fields)._pointerLockPosition.fields = UVar1.fields._0_8_;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x5398d20

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o **targetAddress;
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o **ppSVar5;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  MethodInfo *pMVar7;
  UnityEngine_GameObject_o *pUVar8;
  int iVar9;
  int iVar10;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07542b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"search-palette-results");
    Il2CppMethodInitialized_07542b64 = '\x01';
  }
  root = UnityEngine_Component__GetComponentInParent_object__34b0d00
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot
                   );
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05398f95;
    if (((root->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && ((root->fields)._Overlays_k__BackingField !=
           (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      pTVar2 = (__this->fields)._input;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar2 = (__this->fields)._input;
        if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_05398f95;
        ppSVar5 = &(pTVar2->fields).m_Text;
      }
      else {
        ppSVar5 = *(System_String_o ***)(g_data_07556758 + 0xb8);
      }
      value = *ppSVar5;
      bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar4) {
label_05398f72:
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,false,in_RCX);
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput(__this,(MethodInfo *)root);
        return;
      }
      pSVar6 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries(__this,root,method_00);
      pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__Query
                         ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar6,value,
                          (MethodInfo *)0x0);
      targetAddress = &(__this->fields)._results;
      (__this->fields)._results = pSVar6;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar6 = (__this->fields)._results;
      if (pSVar6 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
        if ((pSVar6->fields)._size == 0) goto label_05398f72;
        iVar1 = (__this->fields)._selectedIndex;
        pMVar7 = extraout_RDX;
        if (Il2CppMethodInitialized_07542b6a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
          Il2CppMethodInitialized_07542b6a = '\x01';
          pSVar6 = *targetAddress;
          pMVar7 = extraout_RDX_00;
          if (pSVar6 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_05398f95;
        }
        iVar10 = (pSVar6->fields)._size;
        iVar9 = 8;
        if (iVar10 < 8) {
          iVar9 = iVar10;
        }
        iVar10 = iVar9 + -1;
        if (iVar1 < iVar9 + -1) {
          iVar10 = iVar1;
        }
        iVar9 = 0;
        if (-1 < iVar1) {
          iVar9 = iVar10;
        }
        (__this->fields)._selectedIndex = iVar9;
        bVar4 = (__this->fields)._hasAnimatedResults;
        (__this->fields)._hasAnimatedResults = true;
        pGVar3 = (root->fields)._Screens_k__BackingField;
        if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          __this_00 = (root->fields)._Overlays_k__BackingField;
          root_00 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
                              (__this,(pGVar3->fields)._activeId,pMVar7);
          pMVar7 = (MethodInfo *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            pUVar8 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                               (__this_00,"search-palette-results",root_00,(UnityEngine_GameObject_o *)pMVar7,
                                false,true,0.0,bVar4 == false,0,(MethodInfo *)0x0);
            (__this->fields)._popoverContent = pUVar8;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._popoverContent);
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
                      (__this,(__this->fields)._popoverContent,root,pMVar7);
            return;
          }
        }
      }
label_05398f95:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ActivateSelected
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x5399f00

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  uint index;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  
  if (Il2CppMethodInitialized_07542b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    Il2CppMethodInitialized_07542b65 = '\x01';
  }
  __this_00 = (__this->fields)._results;
  if (__this_00 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_05399fb4:
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._size == 0) {
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
    __this_00 = (__this->fields)._results;
    if (__this_00 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_05399fb4;
  }
  iVar1 = (__this_00->fields)._size;
  if (iVar1 < 1) {
    return;
  }
  uVar2 = (__this->fields)._selectedIndex;
  method_00 = (MethodInfo *)(ulong)uVar2;
  uVar3 = iVar1 - 1;
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  index = 0;
  if (-1 < (int)uVar2) {
    index = uVar3;
  }
  result = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,index,
                      (MethodInfo_395CF20 *)
                      MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
  root = UnityEngine_Component__GetComponentInParent_object__34b0d00
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot
                   );
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate(__this,result,root,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultsNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x5399250
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539926a: cmp byte ptr [rip + 0x21a98f9], 0
// asm:   0x5399271: je 0x53992fe
// asm:   0x5399285: jmp 0x53994ae

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *in_RCX;
  uint32_t length;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **targetAddress;
  
  if (Il2CppMethodInitialized_07542b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"search-palette-results");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_07542b66 = '\x01';
  }
  if (Il2CppMethodInitialized_07542b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_07542b6a = '\x01';
    pSVar2 = (__this->fields)._results;
  }
  else {
    pSVar2 = (__this->fields)._results;
  }
  if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    uVar1 = (pSVar2->fields)._size;
    length = 8;
    if ((int)uVar1 < 8) {
      length = uVar1;
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,length);
    if (0 < (int)uVar1) {
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode(__this,0,activeScreenId,in_RCX);
        ThrowNullReferenceException();
      }
      targetAddress = pGVar3->m_Items;
      pMVar6 = (MethodInfo *)0x1;
      if (1 < (int)length) {
        pMVar6 = (MethodInfo *)(ulong)length;
      }
      pMVar5 = (MethodInfo *)0x0;
      do {
        pGVar4 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                           (__this,(int32_t)pMVar5,activeScreenId,in_RCX);
        in_RCX = (MethodInfo *)(ulong)(uint)pGVar3->max_length;
        if (in_RCX <= pMVar5) {
          ThrowIndexOutOfRangeException();
        }
        *targetAddress = pGVar4;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pMVar5 = (MethodInfo *)((long)&pMVar5->methodPointer + 1);
        targetAddress = targetAddress + 1;
      } while (pMVar6 != pMVar5);
    }
    pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
      (pGVar4->fields).id = "search-palette-results";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
      (pGVar4->fields).style = "popover";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_00->fields).direction = "Column";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).direction);
        (__this_00->fields).alignItems = "Stretch";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).alignItems);
        (__this_00->fields).gap = 0.0;
        (pGVar4->fields).layout = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
        (pGVar4->fields).children = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children);
        return pGVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, System_String_o* activeScreenId, const MethodInfo* method);
// 0x539a070

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
          System_String_o *activeScreenId,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_05;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_06;
  int32_t local_2c;
  
  local_2c = index;
  if (Il2CppMethodInitialized_07542b67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"slideDown");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"search-results");
    il2cpp_codegen_initialize_runtime_metadata(&"searchResultItem");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"search-result-");
    Il2CppMethodInitialized_07542b67 = '\x01';
  }
  __this_00 = (__this->fields)._results;
  if (__this_00 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    __this_01 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).type = "Button";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).type);
      pSVar1 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_52f0320("search-result-",pSVar1,(MethodInfo *)0x0);
      (__this_02->fields).id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).id);
      if (__this_01 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        (__this_02->fields).text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).text);
        ThrowNullReferenceException();
      }
      if ((__this->fields)._showFullPath == false) {
        pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                           (__this_01,activeScreenId,(MethodInfo *)0x0);
      }
      else {
        pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle(__this_01,(MethodInfo *)0x0);
      }
      (__this_02->fields).text = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).text);
      (__this_02->fields).icon = (__this_01->fields)._Icon_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).icon);
      (__this_02->fields).hasIcon = true;
      (__this_02->fields).style = "searchResultItem";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).style);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
        (__this_03->fields).preset = "slideDown";
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).preset);
        (__this_03->fields).group = "search-results";
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).group);
        (__this_03->fields).duration = 0.12;
        (__this_03->fields).stagger = 0.025;
        (__this_03->fields).order = local_2c;
        (__this_02->fields).enter = __this_03;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).enter);
        __this_04 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_05,(MethodInfo *)0x0);
        if (__this_05 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (__this_05->fields).value = 100.0;
          (__this_05->fields).unit = "percent";
          Il2CppCodeGenWriteBarrier(&(__this_05->fields).unit);
          if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (__this_04->fields).width = __this_05;
            Il2CppCodeGenWriteBarrier(&(__this_04->fields).width);
            (__this_02->fields).layout = __this_04;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout);
            __this_06 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
            Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_06,(MethodInfo *)0x0);
            if (__this_06 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
              (__this_06->fields).hidden = true;
              (__this_02->fields).search = __this_06;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).search);
              return __this_02;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WireResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_GameObject_o* content, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x53994d0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5399757: movaps xmm1, xmm0
// asm:   0x539981b: movaps xmm3, xmm2
// asm:   0x539981e: movaps xmm0, xmmword ptr [rsp + 0x40]
// asm:   0x5399bcc: jmp 0x5399ecb
// asm:   0x5399bf3: jmp 0x5399ecb
// asm:   0x5399dd7: jmp 0x5399e0a

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_GameObject_o *content,Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o **targetAddress;
  int length;
  uint uVar2;
  uint32_t uVar3;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar4;
  TMPro_TMP_InputField_o *pTVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar7;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar9;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_array *pGVar10;
  System_String_o *query;
  bool bVar11;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *pGVar12;
  System_String_o **ppSVar13;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *pGVar14;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar15;
  UnityEngine_Transform_o *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_Func_bool__o *__this_02;
  System_String_o *pSVar18;
  MethodInfo *pMVar19;
  UnityEngine_GameObject_o *__this_03;
  Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *pGVar20;
  Gisketch_Aottg2UI_GisketchUIRoot_o **targetAddress_00;
  UnityEngine_UI_Button_o *x;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_Fields *targetAddress_01;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_04;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_00;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  UnityEngine_Color_o UVar28;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o UStack_c0;
  UnityEngine_Object_o *pUStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *pGStack_38;
  
  pUStack_b0 = (UnityEngine_Object_o *)content;
  if (Il2CppMethodInitialized_07542b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSearchResultSelection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0_WireResults_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1_WireResults_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"search-result-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"negativeText");
    Il2CppMethodInitialized_07542b68 = '\x01';
  }
  pGVar12 = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0);
  System_Object___ctor((Il2CppObject *)pGVar12,(MethodInfo *)0x0);
  if (pGVar12 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0)
  goto label_05399ecb;
  (pGVar12->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(pGVar12->fields).__4__this);
  targetAddress_00 = &(pGVar12->fields).root;
  (pGVar12->fields).root = root;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Equality(pUStack_b0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar11) {
    return;
  }
  pSVar4 = (__this->fields)._feedback;
  if (pSVar4 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) goto label_05399ecb;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pTVar5 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar17 = "text";
  if (bVar11) {
    pTVar5 = (__this->fields)._input;
    if (pTVar5 == (TMPro_TMP_InputField_o *)0x0) goto label_05399ecb;
    ppSVar13 = &(pTVar5->fields).m_Text;
  }
  else {
    ppSVar13 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  pSStack_40 = *ppSVar13;
  pGVar6 = *targetAddress_00;
  if (Il2CppMethodInitialized_07542b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b69 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar21 = 1.0;
  UVar28.fields.g = 1.0;
  uVar22 = 0;
  uVar23 = 0;
  fVar24 = fVar21;
  fVar25 = UVar28.fields.g;
  uVar26 = uVar22;
  uVar27 = uVar23;
  if (bVar11) {
    if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05399ecb;
    pGVar7 = (pGVar6->fields)._Theme_k__BackingField;
    if (pGVar7 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      uVar26 = g_data_01005870._8_4_;
      uVar27 = g_data_01005870._12_4_;
      UVar28.fields.b = (float)(int)g_data_01005870;
      UVar28.fields.a = (float)g_data_01005870._4_4_;
      UVar28.fields.r = (float)(int)g_data_01005870;
      UVar28.fields.g = (float)g_data_01005870._4_4_;
      UVar28 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(pGVar7,pSVar17,UVar28,(MethodInfo *)0x0);
      fVar21 = UVar28.fields.r;
      UVar28.fields.g = UVar28.fields.g;
      uVar22 = extraout_XMM0_Dc;
      uVar23 = extraout_XMM0_Dd;
      fVar24 = UVar28.fields.b;
      fVar25 = UVar28.fields.a;
    }
  }
  pSVar17 = "negativeText";
  pGVar6 = *targetAddress_00;
  if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05399ecb;
  pGVar7 = (pGVar6->fields)._Theme_k__BackingField;
  uStack_98 = (UnityEngine_Transform_o *)CONCAT44(UVar28.fields.g,fVar21);
  fStack_a8 = fVar24;
  fStack_a4 = fVar25;
  fStack_a0 = (float)uVar26;
  fStack_9c = (float)uVar27;
  uStack_90 = uVar22;
  uStack_8c = uVar23;
  if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
label_05399793:
    if (Il2CppMethodInitialized_07542b69 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07542b69 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar21 = 1.0;
    UVar28.fields.g = 1.0;
    uVar22 = 0;
    uVar23 = 0;
    fStack_78 = fVar21;
    fStack_74 = UVar28.fields.g;
    uStack_70 = uVar22;
    uStack_6c = uVar23;
    if (bVar11) {
      pGVar7 = (pGVar6->fields)._Theme_k__BackingField;
      UStack_c0.fields.r = (float)uStack_98;
      UStack_c0.fields.g = uStack_98._4_4_;
      if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05399828;
      uVar26 = g_data_01005870._8_4_;
      uVar27 = g_data_01005870._12_4_;
      fallback.fields.b = (float)(int)g_data_01005870;
      fallback.fields.a = (float)g_data_01005870._4_4_;
      fallback.fields.r = (float)(int)g_data_01005870;
      fallback.fields.g = (float)g_data_01005870._4_4_;
      UVar28 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(pGVar7,pSVar17,fallback,(MethodInfo *)0x0);
      fVar21 = UVar28.fields.r;
      UVar28.fields.g = UVar28.fields.g;
      uVar22 = extraout_XMM0_Dc_00;
      uVar23 = extraout_XMM0_Dd_00;
      fStack_78 = UVar28.fields.b;
      fStack_74 = UVar28.fields.a;
      uStack_70 = uVar26;
      uStack_6c = uVar27;
    }
    UStack_c0.fields.r = (float)uStack_98;
    UStack_c0.fields.g = uStack_98._4_4_;
  }
  else {
    UStack_c0.fields.r = fVar21;
    UStack_c0.fields.g = UVar28.fields.g;
    fStack_78 = fVar24;
    fStack_74 = fVar25;
    uStack_70 = uVar26;
    uStack_6c = uVar27;
    if ((pGVar7->fields)._IsDarkMode_k__BackingField == false) goto label_05399793;
  }
label_05399828:
  UStack_c0.fields.b = fStack_a8;
  UStack_c0.fields.a = fStack_a4;
  fStack_88 = fVar21;
  fStack_84 = UVar28.fields.g;
  uStack_80 = uVar22;
  uStack_7c = uVar23;
  pSStack_48 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_c0,(MethodInfo *)0x0);
  fVar21 = fStack_a4 * 0.75;
  UStack_c0.fields.a = 1.0;
  if (fVar21 <= 1.0) {
    UStack_c0.fields.a = fVar21;
  }
  UStack_c0.fields.a = (float)(-(uint)(0.0 <= fVar21) & (uint)UStack_c0.fields.a);
  UStack_c0.fields.r = (float)uStack_98;
  UStack_c0.fields.g = uStack_98._4_4_;
  UStack_c0.fields.b = fStack_a8;
  pSStack_50 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_c0,(MethodInfo *)0x0);
  fStack_a8 = fStack_88;
  fStack_a4 = fStack_84;
  fStack_a0 = fStack_78;
  fStack_9c = fStack_74;
  UStack_c0.fields.r = fStack_88;
  UStack_c0.fields.g = fStack_84;
  UStack_c0.fields.b = fStack_78;
  UStack_c0.fields.a = fStack_74;
  pSStack_58 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_c0,(MethodInfo *)0x0);
  fVar21 = fStack_74 * 0.75;
  UStack_c0.fields.a = 1.0;
  if (fVar21 <= 1.0) {
    UStack_c0.fields.a = fVar21;
  }
  UStack_c0.fields.a = (float)(-(uint)(0.0 <= fVar21) & (uint)UStack_c0.fields.a);
  UStack_c0.fields.r = fStack_88;
  UStack_c0.fields.g = fStack_84;
  UStack_c0.fields.b = fStack_78;
  pSStack_60 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_c0,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_07542b6a = '\x01';
  }
  pSVar8 = (__this->fields)._results;
  if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_05399ecb:
    ThrowNullReferenceException();
  }
  fVar21 = (float)(pSVar8->fields)._size;
  fStack_78 = 1.12104e-44;
  if ((int)fVar21 < 8) {
    fStack_78 = fVar21;
  }
  UStack_c0.fields.r = 0.0;
  if (0 < (int)fVar21) {
    if (pUStack_b0 == (UnityEngine_Object_o *)0x0) {
      pGVar14 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1);
      System_Object___ctor((Il2CppObject *)pGVar14,(MethodInfo *)0x0);
      if (pGVar14 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *)0x0) {
        (pGVar14->fields).CS___8__locals1 = pGVar12;
        Il2CppCodeGenWriteBarrier(&(pGVar14->fields).CS___8__locals1);
        pSVar8 = (__this->fields)._results;
        if (pSVar8 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          pGVar15 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar8,(int32_t)UStack_c0.fields.r
                               ,(MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
          (pGVar14->fields).result = pGVar15;
          Il2CppCodeGenWriteBarrier(&(pGVar14->fields).result);
          ThrowNullReferenceException();
        }
      }
      goto label_05399ecb;
    }
    pGStack_38 = pGVar12;
    do {
      pGVar12 = pGStack_38;
      pGVar14 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1);
      System_Object___ctor((Il2CppObject *)pGVar14,(MethodInfo *)0x0);
      if (pGVar14 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *)0x0)
      goto label_05399ecb;
      targetAddress = &(pGVar14->fields).CS___8__locals1;
      (pGVar14->fields).CS___8__locals1 = pGVar12;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar8 = (__this->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_05399ecb;
      fStack_88 = UStack_c0.fields.r;
      pGVar15 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar8,(int32_t)UStack_c0.fields.r,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
      targetAddress_01 = &pGVar14->fields;
      (pGVar14->fields).result = pGVar15;
      Il2CppCodeGenWriteBarrier(&targetAddress_01->result);
      pUVar16 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)pUStack_b0,(MethodInfo *)0x0);
      pSVar17 = System_Int32__ToString((int32_t *)&UStack_c0,(MethodInfo *)0x0);
      pSVar17 = System_String__Concat_52f0320("search-result-",pSVar17,(MethodInfo *)0x0);
      pUVar16 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar16,pSVar17,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      x = (UnityEngine_UI_Button_o *)0x0;
      if (bVar11) {
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05399ecb;
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar16,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        if (x == (UnityEngine_UI_Button_o *)0x0) goto label_05399ecb;
        __this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).m_OnClick;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_01,(Il2CppObject *)pGVar14,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1_WireResults_b__0
                   ,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05399ecb;
        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_04 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
      if (bVar11) {
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05399ecb;
        __this_04 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar16,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_GisketchDropdownItemFeedback);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar19 = (MethodInfo *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        if (*targetAddress ==
            (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0)
        goto label_05399ecb;
        pGVar6 = ((*targetAddress)->fields).root;
        if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05399ecb;
        pGVar9 = (pGVar6->fields)._Screens_k__BackingField;
        if (pGVar9 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_05399ecb;
        pGVar15 = targetAddress_01->result;
        if (pGVar15 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          pSVar17 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else if ((__this->fields)._showFullPath == false) {
          pMVar19 = (MethodInfo *)(pGVar9->fields)._activeId;
          pSVar17 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              (pGVar15,(System_String_o *)pMVar19,(MethodInfo *)0x0);
        }
        else {
          pMVar19 = (MethodInfo *)0x0;
          pSVar17 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle(pGVar15,(MethodInfo *)0x0);
        }
        uStack_98 = pUVar16;
        if (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) goto label_05399ecb;
        (__this_04->fields)._hoverText.fields.r = fStack_a8;
        (__this_04->fields)._hoverText.fields.g = fStack_a4;
        (__this_04->fields)._hoverText.fields.b = fStack_a0;
        (__this_04->fields)._hoverText.fields.a = fStack_9c;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_04,pMVar19);
        pGVar12 = *targetAddress;
        if (pGVar12 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0)
        goto label_05399ecb;
        __this_02 = (pGVar12->fields).__9__1;
        if (__this_02 == (System_Func_bool__o *)0x0) {
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_bool);
          System_Func_bool____ctor
                    (__this_02,(Il2CppObject *)pGVar12,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0_WireResults_b__1
                     ,(MethodInfo_4F0BCE0 *)0x0);
          (pGVar12->fields).__9__1 = __this_02;
          Il2CppCodeGenWriteBarrier(&(pGVar12->fields).__9__1);
        }
        (__this_04->fields)._pointerHoverAllowed = __this_02;
        Il2CppCodeGenWriteBarrier(&(__this_04->fields)._pointerHoverAllowed);
        query = pSStack_40;
        pSVar18 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_524ca70
                            (targetAddress_01->result,pSStack_40,false,pSStack_48,pSVar17,pSStack_50,
                             (MethodInfo *)0x0);
        pMVar19 = (MethodInfo *)
                  Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_524ca70
                            (targetAddress_01->result,query,true,pSStack_58,pSVar17,pSStack_60,
                             (MethodInfo *)0x0);
        if (pSVar18 == (System_String_o *)0x0) {
          pSVar18 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        ppSVar13 = &(__this_04->fields)._normalLabelText;
        (__this_04->fields)._normalLabelText = pSVar18;
        Il2CppCodeGenWriteBarrier(ppSVar13);
        pUVar16 = uStack_98;
        if (pMVar19 == (MethodInfo *)0x0) {
          pMVar19 = (MethodInfo *)*ppSVar13;
        }
        (__this_04->fields)._activeLabelText = (System_String_o *)pMVar19;
        Il2CppCodeGenWriteBarrier(&(__this_04->fields)._activeLabelText);
        (__this_04->fields)._normalLabelOwnsColor = true;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_04,pMVar19);
        (__this_04->fields)._forced = fStack_88 == (float)(__this->fields)._selectedIndex;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_04,pMVar19);
      }
      pMVar19 = MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Add;
      pSVar4 = (__this->fields)._feedback;
      if (pSVar4 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) goto label_05399ecb;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar10 = (pSVar4->fields)._items;
      if (pGVar10 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_array *)0x0) goto label_05399ecb;
      uVar2 = (pSVar4->fields)._size;
      if (uVar2 < (uint)pGVar10->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
        pGVar10->m_Items[(int)uVar2] = __this_04;
        Il2CppCodeGenWriteBarrier(pGVar10->m_Items + (int)uVar2);
        uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_04,
                   (MethodInfo_395D230 *)pMVar19->klass->rgctx_data[0xe].method);
        uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_05399ecb;
        __this_03 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_05399ecb;
        pGVar20 = UnityEngine_GameObject__AddComponent_object_
                            (__this_03,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgSearchResultSelection);
        if (pGVar20 == (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)0x0) goto label_05399ecb;
        (pGVar20->fields)._owner = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar20->fields)._owner);
        (pGVar20->fields)._index = (int32_t)fStack_88;
      }
      UStack_c0.fields.r = (float)((int)UStack_c0.fields.r + 1);
    } while ((int)UStack_c0.fields.r < (int)fStack_78);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x5398c70

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,MethodInfo *method
               )

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  int iVar3;
  int32_t iVar4;
  undefined4 in_register_00000034;
  
  iVar4 = index;
  if (Il2CppMethodInitialized_07542b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_07542b6a = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._size;
  iVar3 = 8;
  if (iVar1 < 8) {
    iVar3 = iVar1;
  }
  if (iVar3 == 0) {
    return;
  }
  (__this->fields)._selectedIndex = (index % iVar3 + iVar3) % iVar3;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar4));
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar4));
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x539a760

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,MethodInfo *method
               )

{
  UnityEngine_Vector2_Fields UVar1;
  int iVar2;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar3;
  int iVar4;
  int32_t iVar5;
  undefined4 in_register_00000034;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  iVar5 = index;
  UVar8 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if ((__this->fields)._pointerSelectionLocked != false) {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar6 = UVar8.fields.x - UVar1.x;
    fVar7 = UVar8.fields.y - UVar1.y;
    if (fVar7 * fVar7 + fVar6 * fVar6 < 4.0) {
      return;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  if (Il2CppMethodInitialized_07542b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_07542b6a = '\x01';
  }
  pSVar3 = (__this->fields)._results;
  if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (pSVar3->fields)._size;
  iVar4 = 8;
  if (iVar2 < 8) {
    iVar4 = iVar2;
  }
  if (iVar4 == 0) {
    return;
  }
  (__this->fields)._selectedIndex = (index % iVar4 + iVar4) % iVar4;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar5));
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar5));
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x539a810

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer_529a810
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  int iVar2;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar3;
  int iVar4;
  int32_t iVar5;
  undefined4 in_register_00000034;
  float fVar6;
  float fVar7;
  
  if ((__this->fields)._pointerSelectionLocked != false) {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar6 = pointerPosition.fields.x - UVar1.x;
    fVar7 = pointerPosition.fields.y - UVar1.y;
    if (fVar7 * fVar7 + fVar6 * fVar6 < 4.0) {
      return;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  iVar5 = index;
  if (Il2CppMethodInitialized_07542b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_07542b6a = '\x01';
  }
  pSVar3 = (__this->fields)._results;
  if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (pSVar3->fields)._size;
  iVar4 = 8;
  if (iVar2 < 8) {
    iVar4 = iVar2;
  }
  if (iVar4 == 0) {
    return;
  }
  (__this->fields)._selectedIndex = (index % iVar4 + iVar4) % iVar4;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar5));
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar5));
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CanUsePointerSelection
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x539a8b0

bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  if ((__this->fields)._pointerSelectionLocked != false) {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar2 = pointerPosition.fields.x - UVar1.x;
    fVar3 = pointerPosition.fields.y - UVar1.y;
    if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
      return false;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$LockPointerSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x5398d10

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  (__this->fields)._pointerSelectionLocked = true;
  (__this->fields)._pointerLockPosition.fields = pointerPosition.fields;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ThemeColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* token, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x539a410

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *token,UnityEngine_Color_o fallback,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool bVar1;
  float fVar2;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07542b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b69 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    UVar3.fields.b = fallback.fields.b;
    UVar3.fields.a = fallback.fields.a;
    fVar2 = fallback.fields.r;
    UVar3.fields.g = fallback.fields.g;
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = (root->fields)._Theme_k__BackingField;
    if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      UVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(__this,token,fallback,(MethodInfo *)0x0);
      UVar3.fields.b = UVar3.fields.b;
      UVar3.fields.a = UVar3.fields.a;
      fVar2 = UVar3.fields.r;
      UVar3.fields.g = UVar3.fields.g;
    }
    UVar3.fields.g = UVar3.fields.g;
    UVar3.fields.r = fVar2;
    UVar3.fields.a = UVar3.fields.a;
    UVar3.fields.b = UVar3.fields.b;
    return (UnityEngine_Color_o)UVar3.fields;
  }
  return (UnityEngine_Color_o)fallback.fields;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WithAlpha
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha (UnityEngine_Color_o color, float alpha, const MethodInfo* method);
// 0x539a4b0

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha
          (UnityEngine_Color_o color,float alpha,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Color_o UVar2;
  
  UVar2.fields._0_8_ = color.fields._0_8_;
  fVar1 = 1.0;
  if (alpha <= 1.0) {
    fVar1 = alpha;
  }
  UVar2.fields.a = (float)((uint)fVar1 & -(uint)(0.0 <= alpha));
  UVar2.fields.b = color.fields.b;
  return (UnityEngine_Color_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$VisibleResultCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x5399210

int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount
                  (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_07542b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_07542b6a = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._size;
  iVar3 = 8;
  if (iVar1 < 8) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RefreshSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x539a5b0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar2;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar3;
  
  if (Il2CppMethodInitialized_07542b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b6b = '\x01';
  }
  pSVar3 = (__this->fields)._feedback;
  if (pSVar3 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
    index = 0;
    do {
      if ((pSVar3->fields)._size <= (int)index) {
        return;
      }
      pGVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (__this->fields)._feedback;
        if (pSVar3 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
        method_00 = (MethodInfo *)(ulong)index;
        pGVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
        if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
        (pGVar2->fields)._forced = index == (__this->fields)._selectedIndex;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar2,method_00);
      }
      index = index + 1;
      pSVar3 = (__this->fields)._feedback;
    } while (pSVar3 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RevealSelectedResult
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x539a690

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar3;
  UnityEngine_GameObject_o *focused;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b6c = '\x01';
  }
  index = (__this->fields)._selectedIndex;
  if (-1 < index) {
    pSVar1 = (__this->fields)._feedback;
    if (pSVar1 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
label_0539a759:
      ThrowNullReferenceException();
    }
    if (index < (pSVar1->fields)._size) {
      pGVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (__this->fields)._feedback;
        if (pSVar1 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
          pGVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,
                              (__this->fields)._selectedIndex,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                             );
          if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            focused = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar3,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,method_00);
            return;
          }
        }
        goto label_0539a759;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* result, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5399fc0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result,Gisketch_Aottg2UI_GisketchUIRoot_o *root
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b6d = '\x01';
  }
  if (result != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Overlays_k__BackingField ==
            (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          return;
        }
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,false,method);
        __this_00 = (root->fields)._Overlays_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,false,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(result,root,method_00);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CloseResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, bool restoreFocus, const MethodInfo* method);
// 0x5398fa0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,bool restoreFocus,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o **targetAddress;
  
  if (Il2CppMethodInitialized_07542b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b6e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._popoverContent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Overlays_k__BackingField ==
            (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          return;
        }
        targetAddress = &(__this->fields)._popoverContent;
        *targetAddress = (UnityEngine_GameObject_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
        __this_00 = (root->fields)._Overlays_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    (__this_00,restoreFocus,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$TitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__TitleFor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* result, System_String_o* activeScreenId, const MethodInfo* method);
// 0x539a3c0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__TitleFor
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result,System_String_o *activeScreenId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (result == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((__this->fields)._showFullPath == false) {
    pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                       (result,activeScreenId,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle(result,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Entries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5399070

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
          Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  System_String_array *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  System_String_o *activeScreenId;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  bool bVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar6;
  System_Collections_Generic_List_GisketchSearchEntry__o *live;
  
  if (Il2CppMethodInitialized_07542b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b6f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
label_0539918d:
    pSVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar6,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    return pSVar6;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
    goto label_0539918d;
    bVar4 = System_String__IsNullOrEmpty((__this->fields)._scopeScreenId,(MethodInfo *)0x0);
    if ((!bVar4) ||
       ((pSVar1 = (__this->fields)._extraScopeScreenIds, pSVar1 != (System_String_array *)0x0 &&
        (pSVar1->max_length != 0)))) {
      manifest = (root->fields)._Manifest_k__BackingField;
      if (Il2CppMethodInitialized_07542b70 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
        Il2CppMethodInitialized_07542b70 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39)
      ;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = -2;
      iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      (__this_00->fields).__l__initialThreadId = iVar5;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens
                         (manifest,(System_Collections_Generic_IEnumerable_string__o *)__this_00,false,
                          (MethodInfo *)0x0);
      return pSVar6;
    }
    pGVar2 = (root->fields)._Screens_k__BackingField;
    if (pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      activeScreenId = (pGVar2->fields)._activeId;
      pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                         ((root->fields)._Manifest_k__BackingField,activeScreenId,(MethodInfo *)0x0);
      pGVar2 = (root->fields)._Screens_k__BackingField;
      if (pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        pGVar3 = (pGVar2->fields)._active;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          live = (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0;
        }
        else {
          live = (pGVar3->fields)._SearchEntries_k__BackingField;
        }
        pSVar6 = Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
                           ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar6,
                            (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)live,
                            activeScreenId,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ScopedScreens
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x539abe0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_07542b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
    Il2CppMethodInitialized_07542b70 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x539ac80

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_01;
  
  if (Il2CppMethodInitialized_07542b71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    Il2CppMethodInitialized_07542b71 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  (__this->fields)._results = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._results);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_ctor);
  (__this->fields)._feedback = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._feedback);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x539ad40

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  (__this->fields)._selectedIndex = 0;
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (__this->fields)._pointerSelectionLocked = true;
  (__this->fields)._pointerLockPosition.fields = UVar1.fields._0_8_;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x539ad70

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected(__this,__,method);
  return;
}


