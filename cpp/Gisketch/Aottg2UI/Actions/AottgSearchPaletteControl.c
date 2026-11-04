// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchPaletteControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___ctor(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_0$$<WireResults>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___WireResults_b__1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x18190ace0

bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0___WireResults_b__1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar1;
  UnityEngine_Vector3_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o local_18;
  
  pGVar1 = (__this->fields).__4__this;
  pUVar2 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pGVar1->fields)._pointerSelectionLocked != false) {
    fVar3 = (pUVar2->fields).x - (pGVar1->fields)._pointerLockPosition.fields.x;
    fVar4 = (pUVar2->fields).y - (pGVar1->fields)._pointerLockPosition.fields.y;
    if (fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
      return false;
    }
    (pGVar1->fields)._pointerSelectionLocked = false;
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___ctor(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_1$$<WireResults>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___WireResults_b__0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x18190ad50

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1___WireResults_b__0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  bool bVar2;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if ((pGVar1 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0) ||
     (__this_00 = (pGVar1->fields).__4__this,
     __this_00 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0)) goto label_18190ae1c;
  entry = (__this->fields).result;
  root = (pGVar1->fields).root;
  if (Il2CppMethodInitialized_1843421ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ee = '\x01';
  }
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_18190ae1c:
        ThrowNullReferenceException();
      }
      if ((root->fields)._Overlays_k__BackingField !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
                  (__this_00,root,false,(MethodInfo *)0x0);
        __this_01 = (root->fields)._Overlays_k__BackingField;
        if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) goto label_18190ae1c;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_01,false,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(entry,root,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39___ctor(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x18190a740
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190a7ab: jmp 0x18190a7c1
// asm:   0x18190a7ad: lea rcx, [rsp + 0x30]
// asm:   0x18190a7b2: call 0x1818f40f0  ; il2cpp_runtime_helper_1818f40f0()
// asm:   0x18190a7b7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18190a7bc: test rcx, rcx
// asm:   0x18190a7bf: jne 0x18190a7c7
// asm:   0x18190a7c7: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 2)) {
    if (Il2CppMethodInitialized_1843421f4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_1843421f4 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_string__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__MoveNext (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x18190a310
// eh: try 0x18190a377..0x18190a64a -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190a4ec: nop dword ptr [rax]
// asm:   0x18190a610: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x18190a615: test rbx, rbx
// asm:   0x18190a618: jne 0x18190a64a
// asm:   0x18190a61a: movzx eax, byte ptr [rsp + 0x60]
// asm:   0x18190a64a: lea rcx, [rsp + 0x30]
// asm:   0x18190a64f: call 0x1818f40a0  ; il2cpp_runtime_helper_1818f40a0()
// asm:   0x18190a654: mov rcx, rbx
// asm:   0x18190a657: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__MoveNext
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar3;
  Il2CppObject *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Il2CppClass *pIVar8;
  System_Collections_Generic_IEnumerator_string__o *value;
  void *pvVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  ushort uVar12;
  System_String_array **ppSVar13;
  
  if (Il2CppMethodInitialized_1843421f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_1843421f3 = '\x01';
  }
  pGVar3 = (__this->fields).__4__this;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = System_String__IsNullOrEmpty((pGVar3->fields)._scopeScreenId,(MethodInfo *)0x0);
    if (!bVar7) {
      pSVar11 = (pGVar3->fields)._scopeScreenId;
      (__this->fields).__2__current = pSVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pSVar11);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return false;
      }
      (__this->fields).__1__state = -3;
      goto label_18190a490;
    }
    (__this->fields).__1__state = -1;
  }
  pMVar6 = MethodInfo_System_Linq_Enumerable_Empty_string;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  ppSVar13 = &(pGVar3->fields)._extraScopeScreenIds;
  if (*ppSVar13 == (System_String_array *)0x0) {
    if ((MethodInfo_System_Linq_Enumerable_Empty_string->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Linq_Enumerable_Empty_string);
    }
    pIVar8 = (pMVar6->field7_0x38).rgctx_data[2].klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    if ((pIVar8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar8);
    }
    pIVar8 = (pMVar6->field7_0x38).rgctx_data[2].klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    ppSVar13 = pIVar8->static_fields;
  }
  if (*ppSVar13 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  value = InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,&(*ppSVar13)->obj
                    );
  if (__this == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).__7__wrap1 = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,value);
  (__this->fields).__1__state = -3;
label_18190a490:
  do {
    pIVar4 = (Il2CppObject *)(__this->fields).__7__wrap1;
    if (pIVar4 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar9 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar4);
    if ((char)pvVar9 == '\0') {
      if (Il2CppMethodInitialized_1843421f4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_1843421f4 = '\x01';
      }
      (__this->fields).__1__state = -1;
      if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_string__o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
      }
      (__this->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_string__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,(void *)0x0);
      return false;
    }
    pIVar4 = (Il2CppObject *)(__this->fields).__7__wrap1;
    if (pIVar4 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = pIVar4->klass;
    uVar1 = (pIVar8->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar12 = 0;
      pIVar5 = (pIVar8->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar12].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar10 = pIVar8->vtable + pIVar5[uVar12].offset;
          goto label_18190a512;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar1);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_18190a512:
    pSVar11 = (*pVVar10->methodPtr)(pIVar4,pVVar10->method);
    bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
    if (!bVar7) {
      (__this->fields).__2__current = pSVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pSVar11);
      (__this->fields).__1__state = 2;
      return true;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39____m__Finally1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x18190a7d0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39____m__Finally1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843421f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_1843421f4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_string__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerator_System_String__get_Current(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x18190a700

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x18190a660

System_Collections_Generic_IEnumerator_string__o*
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_Generic_IEnumerable_System_String__GetEnumerator(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, MethodInfo* method)

{
  int iVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_1843421f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
    Il2CppMethodInitialized_1843421f5 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o* __this, const MethodInfo* method);
// 0x18190a660

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_1843421f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
    Il2CppMethodInitialized_1843421f5 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, TMPro_TMP_InputField_o* input, UnityEngine_UI_Button_o* submit, System_String_o* scopeScreenId, bool showFullPath, System_String_array* extraScopeScreenIds, const MethodInfo* method);
// 0x1818f8fe0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,TMPro_TMP_InputField_o *input,
               UnityEngine_UI_Button_o *submit,System_String_o *scopeScreenId,bool showFullPath,
               System_String_array *extraScopeScreenIds,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar4;
  DG_Tweening_Core_DOSetter_T__o *pDVar5;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843421e2 == '\0') {
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
    Il2CppMethodInitialized_1843421e2 = '\x01';
  }
  (__this->fields)._input = input;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._input,input);
  (__this->fields)._submit = submit;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._submit,submit);
  (__this->fields)._scopeScreenId = scopeScreenId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scopeScreenId,scopeScreenId);
  (__this->fields)._extraScopeScreenIds = extraScopeScreenIds;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._extraScopeScreenIds,extraScopeScreenIds);
  pTVar1 = (__this->fields)._input;
  (__this->fields)._showFullPath = showFullPath;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818f91f1;
    pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pTVar1->fields).m_OnValueChanged;
    pDVar5 = (DG_Tweening_Core_DOSetter_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar5,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_0,
               (MethodInfo_EB6EC0 *)0x0);
    if (pUVar2 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) goto label_1818f91f1;
    UnityEngine_Events_UnityEvent_Vector2___AddListener
              (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)pDVar5,
               (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    pTVar1 = (__this->fields)._input;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818f91f1;
    pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pTVar1->fields).m_OnSubmit;
    pDVar5 = (DG_Tweening_Core_DOSetter_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar5,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_1,
               (MethodInfo_EB6EC0 *)0x0);
    if (pUVar2 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) goto label_1818f91f1;
    UnityEngine_Events_UnityEvent_Vector2___AddListener
              (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)pDVar5,
               (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  }
  pUVar3 = (__this->fields)._submit;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pUVar3 = (__this->fields)._submit;
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ActivateSelected,
               (MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
label_1818f91f1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f9200

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$FocusInput
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f7f00

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  UnityEngine_GameObject_o *selected;
  
  if (Il2CppMethodInitialized_1843421e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421e3 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      pTVar1 = (__this->fields)._input;
      if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
         (selected = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500(pUVar3,selected,(MethodInfo *)0x0)
        ;
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
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f9310

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  UnityEngine_Object_o *y;
  int32_t index;
  
  if (Il2CppMethodInitialized_1843421e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421e4 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) ||
         (pTVar1 = (__this->fields)._input, pTVar1 == (TMPro_TMP_InputField_o *)0x0)) {
        ThrowNullReferenceException();
      }
      x = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
      y = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
        if (bVar2) {
          index = (__this->fields)._selectedIndex + 1;
        }
        else {
          bVar2 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
          if (!bVar2) {
            return;
          }
          index = (__this->fields)._selectedIndex + -1;
        }
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
                  (__this,index,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f8040

void
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_o local_18;
  
  (__this->fields)._selectedIndex = 0;
  pUVar2 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
  fVar1 = (pUVar2->fields).y;
  (__this->fields)._pointerLockPosition.fields.x = (pUVar2->fields).x;
  (__this->fields)._pointerLockPosition.fields.y = fVar1;
  (__this->fields)._pointerSelectionLocked = true;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f8190

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int iVar1;
  TMPro_TMP_InputField_o *pTVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  System_String_o *activeScreenId;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o **ppSVar6;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar7;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *screenIds;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  UnityEngine_GameObject_o *pUVar8;
  int iVar9;
  int iVar10;
  System_Collections_Generic_List_GisketchSearchEntry__o *live;
  
  if (Il2CppMethodInitialized_1843421e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"search-palette-results");
    Il2CppMethodInitialized_1843421e5 = '\x01';
  }
  root = UnityEngine_Component__GetComponentInParent_object__664f20
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot)
  ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1818f858f;
    if ((root->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      return;
    }
    if ((root->fields)._Overlays_k__BackingField == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0
       ) {
      return;
    }
    pTVar2 = (__this->fields)._input;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pTVar2 = (__this->fields)._input;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_1818f858f;
      ppSVar6 = &(pTVar2->fields).m_Text;
    }
    else {
      ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    value = *ppSVar6;
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar4) {
      if (Il2CppMethodInitialized_1843421f0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843421f0 = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar4) ||
         ((root->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0))
      {
        pSVar7 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
      }
      else {
        bVar4 = System_String__IsNullOrEmpty((__this->fields)._scopeScreenId,(MethodInfo *)0x0);
        if ((bVar4) &&
           (((__this->fields)._extraScopeScreenIds == (System_String_array *)0x0 ||
            (((__this->fields)._extraScopeScreenIds)->max_length == 0)))) {
          pGVar3 = (root->fields)._Screens_k__BackingField;
          if (pGVar3 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_1818f858f;
          activeScreenId = (pGVar3->fields)._activeId;
          pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                             ((root->fields)._Manifest_k__BackingField,activeScreenId,(MethodInfo *)0x0);
          pGVar3 = (root->fields)._Screens_k__BackingField;
          if (pGVar3 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_1818f858f;
          if ((pGVar3->fields)._active == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            live = (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0;
          }
          else {
            live = (((pGVar3->fields)._active)->fields)._SearchEntries_k__BackingField;
          }
          pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
                             ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar7,
                              (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)live,
                              activeScreenId,(MethodInfo *)0x0);
        }
        else {
          manifest = (root->fields)._Manifest_k__BackingField;
          if (Il2CppMethodInitialized_1843421f1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
            Il2CppMethodInitialized_1843421f1 = '\x01';
          }
          screenIds = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39
                                );
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)screenIds,(MethodInfo *)0x0
                    );
          (screenIds->fields).__1__state = -2;
          iVar5 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
          (screenIds->fields).__l__initialThreadId = iVar5;
          (screenIds->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(screenIds->fields).__4__this,__this);
          pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens
                             (manifest,(System_Collections_Generic_IEnumerable_string__o *)screenIds,false,
                              (MethodInfo *)0x0);
        }
      }
      pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__Query
                         ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar7,value,
                          (MethodInfo *)0x0);
      (__this->fields)._results = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._results,pSVar7);
      pSVar7 = (__this->fields)._results;
      if (pSVar7 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_1818f858f:
        ThrowNullReferenceException();
      }
      if ((pSVar7->fields)._size != 0) {
        iVar1 = (__this->fields)._selectedIndex;
        if (Il2CppMethodInitialized_1843421eb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
          Il2CppMethodInitialized_1843421eb = '\x01';
        }
        pSVar7 = (__this->fields)._results;
        if (pSVar7 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          iVar10 = (pSVar7->fields)._size;
          iVar9 = 8;
          if (iVar10 < 8) {
            iVar9 = iVar10;
          }
          if (((iVar1 < 0) || (iVar10 = iVar9 + -1, iVar1 <= iVar9 + -1)) && (iVar10 = iVar1, iVar1 < 0)) {
            iVar10 = 0;
          }
          bVar4 = (__this->fields)._hasAnimatedResults;
          (__this->fields)._hasAnimatedResults = true;
          (__this->fields)._selectedIndex = iVar10;
          pGVar3 = (root->fields)._Screens_k__BackingField;
          if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
            __this_00 = (root->fields)._Overlays_k__BackingField;
            root_00 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
                                (__this,(pGVar3->fields)._activeId,(MethodInfo *)0x0);
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              pUVar8 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                                 (__this_00,"search-palette-results",root_00,pUVar8,false,true,0.0,bVar4 == false
                                  ,0,(MethodInfo *)0x0);
              (__this->fields)._popoverContent = pUVar8;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._popoverContent,pUVar8);
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
                        (__this,(__this->fields)._popoverContent,root,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_1818f858f;
      }
    }
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,false,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ActivateSelected
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f79e0

void
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, MethodInfo* method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar3;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  int index;
  
  if (Il2CppMethodInitialized_1843421e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    Il2CppMethodInitialized_1843421e6 = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if ((pSVar2->fields)._size == 0) {
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._results;
    if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        iVar1 = (__this->fields)._selectedIndex;
        if (((iVar1 < 0) || (index = (pSVar2->fields)._size + -1, iVar1 <= index)) &&
           (index = iVar1, iVar1 < 0)) {
          index = 0;
        }
        entry = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)(__this->fields)._results,index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
        root = UnityEngine_Component__GetComponentInParent_object__664f20
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_664F20 *)
                          MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
        if (Il2CppMethodInitialized_1843421ee == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_1843421ee = '\x01';
        }
        if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1818f7b36;
            if ((root->fields)._Overlays_k__BackingField !=
                (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
                        (__this,root,false,(MethodInfo *)0x0);
              __this_00 = (root->fields)._Overlays_k__BackingField;
              if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) goto label_1818f7b36;
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,false,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(entry,root,(MethodInfo *)0x0);
            }
          }
        }
      }
      return;
    }
  }
label_1818f7b36:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultsNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818f88f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f89d0: jmp 0x1818f89e7
// asm:   0x1818f89e9: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  uint index;
  uint32_t length;
  
  if (Il2CppMethodInitialized_1843421e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"search-palette-results");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_1843421e7 = '\x01';
  }
  if (Il2CppMethodInitialized_1843421eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_1843421eb = '\x01';
  }
  pSVar1 = (__this->fields)._results;
  if (pSVar1 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_1818f8b52;
  length = (pSVar1->fields)._size;
  if ((int)length < 8) {
    value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,length);
    if (0 < (int)length) goto label_1818f89e7;
  }
  else {
    length = 8;
    value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,8);
label_1818f89e7:
    index = 0;
    do {
      pGVar2 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                         (__this,index,activeScreenId,(MethodInfo *)0x0);
      if (value == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1818f8b52;
      if ((uint)value->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      value->m_Items[(int)index] = pGVar2;
      Il2CppCodeGenWriteBarrier(value->m_Items + (int)index,pGVar2);
      index = index + 1;
    } while ((int)index < (int)length);
  }
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type,"Panel");
    (pGVar2->fields).id = "search-palette-results";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id,"search-palette-results");
    (pGVar2->fields).style = "popover";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style,"popover");
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_00->fields).direction = "Column";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).direction,"Column");
      (__this_00->fields).alignItems = "Stretch";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).alignItems,"Stretch");
      (__this_00->fields).gap = 0.0;
      (pGVar2->fields).layout = __this_00;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,__this_00);
      (pGVar2->fields).children = value;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).children,value);
      return pGVar2;
    }
  }
label_1818f8b52:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818f85a0

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
  int32_t local_res10 [2];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_1843421e8 == '\0') {
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
    Il2CppMethodInitialized_1843421e8 = '\x01';
  }
  __this_00 = (__this->fields)._results;
  if (__this_00 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,local_res10[0],
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).type = "Button";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"Button");
      pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_1969e50("search-result-",pSVar1,(MethodInfo *)0x0);
      (__this_02->fields).id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,pSVar1);
      if (__this_01 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        (__this_02->fields).text = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).text,pSVar1);
      }
      else {
        if ((__this->fields)._showFullPath == false) {
          pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                             (__this_01,activeScreenId,(MethodInfo *)0x0);
        }
        else {
          pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle(__this_01,(MethodInfo *)0x0);
        }
        (__this_02->fields).text = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).text,pSVar1);
        pSVar1 = (__this_01->fields)._Icon_k__BackingField;
        (__this_02->fields).icon = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).icon,pSVar1);
        (__this_02->fields).hasIcon = true;
        (__this_02->fields).style = "searchResultItem";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).style,"searchResultItem");
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
        Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_03,(MethodInfo *)0x0);
        if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
          (__this_03->fields).preset = "slideDown";
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).preset,"slideDown");
          (__this_03->fields).group = "search-results";
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).group,"search-results");
          (__this_03->fields).duration = 0.12;
          (__this_03->fields).stagger = 0.025;
          (__this_03->fields).order = local_res10[0];
          (__this_02->fields).enter = __this_03;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).enter,__this_03);
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
          __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength)
          ;
          UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_05,(MethodInfo *)0x0);
          if (__this_05 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            (__this_05->fields).value = 100.0;
            (__this_05->fields).unit = "percent";
            Il2CppCodeGenWriteBarrier(&(__this_05->fields).unit,"percent");
            if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (__this_04->fields).width = __this_05;
              Il2CppCodeGenWriteBarrier(&(__this_04->fields).width,__this_05);
              (__this_02->fields).layout = __this_04;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,__this_04);
              __this_06 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
              Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_06,(MethodInfo *)0x0);
              if (__this_06 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
                (__this_06->fields).hidden = true;
                (__this_02->fields).search = __this_06;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).search,__this_06);
                return __this_02;
              }
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
// 0x1818f94d0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f97fe: movss dword ptr [rsp + 0x44], xmm7
// asm:   0x1818f9804: movaps xmm13, xmm9
// asm:   0x1818f9808: movaps xmm14, xmm10
// asm:   0x1818f980c: movaps xmm15, xmm11
// asm:   0x1818f9810: jmp 0x1818f98c5
// asm:   0x1818f9b5d: mov rbx, r12
// asm:   0x1818f9c18: mov rsi, r12
// asm:   0x1818f9ec3: jmp 0x1818f99f6

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_GameObject_o *content,Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar2;
  TMPro_TMP_InputField_o *pTVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar6;
  System_String_o *query;
  bool bVar7;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *pGVar8;
  System_String_o **ppSVar9;
  UnityEngine_Color_o *pUVar10;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *object;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar11;
  UnityEngine_Transform_o *pUVar12;
  System_String_o *pSVar13;
  UnityEngine_UI_Button_o *x;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_Button_o *__this_02;
  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *__this_03;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_04;
  Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *pGVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_148;
  float local_144;
  int local_140;
  UnityEngine_Color_Fields local_138;
  UnityEngine_Color_o local_128;
  UnityEngine_Color_o local_118;
  UnityEngine_Color_o local_108;
  System_String_o *local_f8;
  System_String_o *local_f0;
  System_String_o *local_e8;
  System_String_o *local_e0;
  System_String_o *local_d8;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *local_d0;
  
  if (Il2CppMethodInitialized_1843421e9 == '\0') {
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
    Il2CppMethodInitialized_1843421e9 = '\x01';
  }
  local_148 = 0.0;
  pGVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0);
  local_d0 = pGVar8;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar8,(MethodInfo *)0x0);
  if (pGVar8 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0)
  goto label_1818f9ec8;
  (pGVar8->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).__4__this,__this);
  (pGVar8->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).root,root);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  pSVar2 = (__this->fields)._feedback;
  if (pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) goto label_1818f9ec8;
  length = (pSVar2->fields)._size;
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pTVar3 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar13 = "text";
  if (bVar7) {
    pTVar3 = (__this->fields)._input;
    if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) goto label_1818f9ec8;
    ppSVar9 = &(pTVar3->fields).m_Text;
  }
  else {
    ppSVar9 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  local_e8 = *ppSVar9;
  pGVar4 = (pGVar8->fields).root;
  if (Il2CppMethodInitialized_1843421ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ea = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1818f9ec8;
    if ((pGVar4->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
    goto label_1818f97c3;
    local_138.r = 1.0;
    local_138.g = 1.0;
    local_138.b = 1.0;
    local_138.a = 1.0;
    pUVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (&local_128,(pGVar4->fields)._Theme_k__BackingField,pSVar13,
                         (UnityEngine_Color_o *)&local_138,(MethodInfo *)0x0);
    fVar16 = (pUVar10->fields).r;
    fVar17 = (pUVar10->fields).g;
    fVar18 = (pUVar10->fields).b;
    fVar15 = (pUVar10->fields).a;
  }
  else {
label_1818f97c3:
    fVar16 = 1.0;
    fVar17 = 1.0;
    fVar18 = 1.0;
    fVar15 = 1.0;
  }
  pSVar13 = "negativeText";
  pGVar4 = (pGVar8->fields).root;
  if (pGVar4 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if (((pGVar4->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) ||
       (fVar19 = fVar16, fVar20 = fVar17, fVar21 = fVar18, local_144 = fVar15,
       (((pGVar4->fields)._Theme_k__BackingField)->fields)._IsDarkMode_k__BackingField == false)) {
      if (Il2CppMethodInitialized_1843421ea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843421ea = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar7) &&
         ((pGVar4->fields)._Theme_k__BackingField != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
        local_138.r = 1.0;
        local_138.g = 1.0;
        local_138.b = 1.0;
        local_138.a = 1.0;
        pUVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (&local_128,(pGVar4->fields)._Theme_k__BackingField,pSVar13,
                             (UnityEngine_Color_o *)&local_138,(MethodInfo *)0x0);
        fVar19 = (pUVar10->fields).r;
        fVar20 = (pUVar10->fields).g;
        fVar21 = (pUVar10->fields).b;
        local_144 = (pUVar10->fields).a;
      }
      else {
        local_144 = 1.0;
        fVar19 = 1.0;
        fVar20 = 1.0;
        fVar21 = 1.0;
      }
    }
    local_118.fields.r = fVar16;
    local_118.fields.g = fVar17;
    local_118.fields.b = fVar18;
    local_118.fields.a = fVar15;
    local_f0 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800(&local_118,(MethodInfo *)0x0);
    local_108.fields.a = fVar15 * 0.75;
    if (local_108.fields.a < 0.0) {
      local_108.fields.a = 0.0;
    }
    else if (1.0 < local_108.fields.a) {
      local_108.fields.a = 1.0;
    }
    local_108.fields.r = fVar16;
    local_108.fields.g = fVar17;
    local_108.fields.b = fVar18;
    local_f8 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800(&local_108,(MethodInfo *)0x0);
    fVar16 = local_144;
    local_128.fields.a = local_144;
    local_128.fields.r = fVar19;
    local_128.fields.g = fVar20;
    local_128.fields.b = fVar21;
    local_d8 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800(&local_128,(MethodInfo *)0x0);
    local_138.a = fVar16 * 0.75;
    if (local_138.a < 0.0) {
      local_138.a = 0.0;
    }
    else if (1.0 < local_138.a) {
      local_138.a = 1.0;
    }
    local_138.g = fVar20;
    local_138.r = fVar19;
    local_138.b = fVar21;
    local_e0 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                         ((UnityEngine_Color_o *)&local_138,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_1843421eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
      Il2CppMethodInitialized_1843421eb = '\x01';
    }
    pSVar5 = (__this->fields)._results;
    if (pSVar5 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    local_140 = (pSVar5->fields)._size;
    local_148 = 0.0;
    if (local_140 < 8) {
      if (local_140 < 1) {
        return;
      }
    }
    else {
      local_140 = 8;
    }
    while( true ) {
      __this_02 = (UnityEngine_UI_Button_o *)0x0;
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_1_o *)0x0) break;
      (object->fields).CS___8__locals1 = pGVar8;
      Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,pGVar8);
      fVar17 = local_148;
      pSVar5 = (__this->fields)._results;
      if (pSVar5 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      local_144 = local_148;
      pGVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar5,(int32_t)local_148,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
      (object->fields).result = pGVar11;
      Il2CppCodeGenWriteBarrier(&(object->fields).result,pGVar11);
      if (content == (UnityEngine_GameObject_o *)0x0) break;
      pUVar12 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
      pSVar13 = System_Int32__ToString((int32_t *)&local_148,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_1969e50("search-result-",pSVar13,(MethodInfo *)0x0);
      pUVar12 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar12,pSVar13,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      x = __this_02;
      if (bVar7) {
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) break;
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar12,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if (x == (UnityEngine_UI_Button_o *)0x0) break;
        __this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).m_OnClick;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1_WireResults_b__0
                   ,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
        fVar17 = local_144;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) break;
        __this_02 = (UnityEngine_UI_Button_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar12,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_GisketchDropdownItemFeedback);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pGVar8 = (object->fields).CS___8__locals1;
        if (((pGVar8 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0) ||
            (pGVar4 = (pGVar8->fields).root, pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) ||
           (pGVar6 = (pGVar4->fields)._Screens_k__BackingField,
           pGVar6 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) break;
        pGVar11 = (object->fields).result;
        if (pGVar11 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          pSVar13 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        else if ((__this->fields)._showFullPath == false) {
          pSVar13 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              (pGVar11,(pGVar6->fields)._activeId,(MethodInfo *)0x0);
        }
        else {
          pSVar13 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle(pGVar11,(MethodInfo *)0x0);
        }
        if (__this_02 == (UnityEngine_UI_Button_o *)0x0) break;
        (__this_02->fields).m_Colors.fields.m_SelectedColor.fields.b = fVar19;
        (__this_02->fields).m_Colors.fields.m_SelectedColor.fields.a = fVar20;
        (__this_02->fields).m_Colors.fields.m_DisabledColor.fields.r = fVar21;
        (__this_02->fields).m_Colors.fields.m_DisabledColor.fields.g = fVar16;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                  ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)__this_02,(MethodInfo *)0x0);
        pGVar8 = (object->fields).CS___8__locals1;
        if (pGVar8 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass24_0_o *)0x0)
        break;
        __this_03 = (Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *)
                    (pGVar8->fields).__9__1;
        if (__this_03 == (Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *)0x0) {
          pGVar8 = (object->fields).CS___8__locals1;
          __this_03 = (Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_bool);
          System_Func_bool____ctor
                    (__this_03,(Il2CppObject *)pGVar8,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0_WireResults_b__1
                     ,(MethodInfo *)0x0);
          (pGVar8->fields).__9__1 = (System_Func_bool__o *)__this_03;
          Il2CppCodeGenWriteBarrier(&(pGVar8->fields).__9__1,__this_03);
        }
        (__this_02->fields).m_SpriteState.fields.m_SelectedSprite = (UnityEngine_Sprite_o *)__this_03;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).m_SpriteState.fields.m_SelectedSprite,__this_03);
        query = local_e8;
        value = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_18b3c30
                          ((object->fields).result,local_e8,false,local_f0,pSVar13,local_f8,(MethodInfo *)0x0)
        ;
        pSVar13 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_18b3c30
                            ((object->fields).result,query,true,local_d8,pSVar13,local_e0,(MethodInfo *)0x0);
        if (value == (System_String_o *)0x0) {
          value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        *(System_String_o **)&(__this_02->fields).m_Colors.fields.m_DisabledColor.fields.a = value;
        Il2CppCodeGenWriteBarrier
                  ((void **)&(__this_02->fields).m_Colors.fields.m_DisabledColor.fields.a,value);
        if (pSVar13 == (System_String_o *)0x0) {
          pSVar13 = *(System_String_o **)&(__this_02->fields).m_Colors.fields.m_DisabledColor.fields.a;
        }
        *(System_String_o **)&(__this_02->fields).m_Colors.fields.m_FadeDuration = pSVar13;
        Il2CppCodeGenWriteBarrier((void **)&(__this_02->fields).m_Colors.fields.m_FadeDuration,pSVar13);
        *(undefined1 *)&(__this_02->fields).m_SpriteState.fields.m_HighlightedSprite = 1;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                  ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)__this_02,(MethodInfo *)0x0);
        fVar17 = local_144;
        *(bool *)((longlong)&(__this_02->fields).m_SpriteState.fields.m_DisabledSprite + 2) =
             local_144 == (float)(__this->fields)._selectedIndex;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                  ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)__this_02,(MethodInfo *)0x0);
      }
      if ((__this->fields)._feedback == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0
         ) break;
      il2cpp_runtime_helper_180012890();
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if (((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
            (__this_04 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
            __this_04 == (UnityEngine_GameObject_o *)0x0)) ||
           (pGVar14 = UnityEngine_GameObject__AddComponent_object_
                                (__this_04,
                                 (MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgSearchResultSelection),
           pGVar14 == (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *)0x0)) break;
        (pGVar14->fields)._owner = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._owner,__this);
        (pGVar14->fields)._index = (int32_t)fVar17;
      }
      local_148 = (float)((int)local_148 + 1);
      pGVar8 = local_d0;
      if (local_140 <= (int)local_148) {
        return;
      }
    }
  }
label_1818f9ec8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x1818f8ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f8e29: jmp 0x1818f8d91

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,MethodInfo *method
               )

{
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar1;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar2;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar3;
  UnityEngine_GameObject_o *focused;
  int iVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_1843421eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_1843421eb = '\x01';
  }
  pSVar1 = (__this->fields)._results;
  if (pSVar1 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar4 = (pSVar1->fields)._size;
    if (iVar4 < 8) {
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      iVar4 = 8;
    }
    bVar5 = Il2CppMethodInitialized_1843421ec == '\0';
    (__this->fields)._selectedIndex = (iVar4 + index % iVar4) % iVar4;
    if (bVar5) {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843421ec = '\x01';
    }
    pSVar2 = (__this->fields)._feedback;
    iVar4 = 0;
    if (pSVar2 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
      while (iVar4 < (pSVar2->fields)._size) {
        pSVar2 = (__this->fields)._feedback;
        if (pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
        goto label_1818f8f0e;
        pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pSVar2 = (__this->fields)._feedback;
          if ((pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) ||
             (pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                                 ), pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
             ) goto label_1818f8f0e;
          (pGVar3->fields)._forced = iVar4 == (__this->fields)._selectedIndex;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar3,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields)._feedback;
        iVar4 = iVar4 + 1;
        if (pSVar2 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
        goto label_1818f8f0e;
      }
      if (Il2CppMethodInitialized_1843421ed == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843421ed = '\x01';
      }
      if ((__this->fields)._selectedIndex < 0) {
        return;
      }
      pSVar2 = (__this->fields)._feedback;
      if (pSVar2 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
        if ((pSVar2->fields)._size <= (__this->fields)._selectedIndex) {
          return;
        }
        pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)(__this->fields)._feedback,
                            (__this->fields)._selectedIndex,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          return;
        }
        pSVar2 = (__this->fields)._feedback;
        if ((pSVar2 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) &&
           (pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,
                                (__this->fields)._selectedIndex,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                               ), pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0))
        {
          focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar3,(MethodInfo *)0x0)
          ;
          Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1818f8f0e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x1818f8f20

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,MethodInfo *method
               )

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o local_18;
  
  pUVar1 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
  if ((__this->fields)._pointerSelectionLocked != false) {
    fVar2 = (pUVar1->fields).x - (__this->fields)._pointerLockPosition.fields.x;
    fVar3 = (pUVar1->fields).y - (__this->fields)._pointerLockPosition.fields.y;
    if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
      return;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation(__this,index,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x1818f8f90

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer_18f8f90
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  float fVar1;
  float fStackX_c;
  
  if ((__this->fields)._pointerSelectionLocked != false) {
    fStackX_c = pointerPosition.fields.y;
    fVar1 = pointerPosition.fields.x - (__this->fields)._pointerLockPosition.fields.x;
    fStackX_c = fStackX_c - (__this->fields)._pointerLockPosition.fields.y;
    if (fStackX_c * fStackX_c + fVar1 * fVar1 < 4.0) {
      return;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation(__this,index,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CanUsePointerSelection
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x1818f7c00

bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  float fVar1;
  float fStack_14;
  
  if ((__this->fields)._pointerSelectionLocked != false) {
    fVar1 = pointerPosition.fields.x - (__this->fields)._pointerLockPosition.fields.x;
    fStack_14 = pointerPosition.fields.y;
    fStack_14 = fStack_14 - (__this->fields)._pointerLockPosition.fields.y;
    if (fStack_14 * fStack_14 + fVar1 * fVar1 < 4.0) {
      return false;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$LockPointerSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x1818f8030

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
// 0x1818f9210

UnityEngine_Color_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor
          (UnityEngine_Color_o *__return_storage_ptr__,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
          System_String_o *token,UnityEngine_Color_o *fallback,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38;
  
  if (Il2CppMethodInitialized_1843421ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ea = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((root->fields)._Theme_k__BackingField != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      local_48.r = (fallback->fields).r;
      local_48.g = (fallback->fields).g;
      local_48.b = (fallback->fields).b;
      local_48.a = (fallback->fields).a;
      pUVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (&local_38,(root->fields)._Theme_k__BackingField,token,
                          (UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
      fVar1 = (pUVar5->fields).g;
      fVar2 = (pUVar5->fields).b;
      fVar3 = (pUVar5->fields).a;
      (__return_storage_ptr__->fields).r = (pUVar5->fields).r;
      (__return_storage_ptr__->fields).g = fVar1;
      (__return_storage_ptr__->fields).b = fVar2;
      (__return_storage_ptr__->fields).a = fVar3;
      return __return_storage_ptr__;
    }
  }
  fVar1 = (fallback->fields).g;
  fVar2 = (fallback->fields).b;
  fVar3 = (fallback->fields).a;
  (__return_storage_ptr__->fields).r = (fallback->fields).r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = fVar3;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WithAlpha
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha (UnityEngine_Color_o color, float alpha, const MethodInfo* method);
// 0x1818f9ee0

UnityEngine_Color_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha
          (UnityEngine_Color_o *__return_storage_ptr__,UnityEngine_Color_o *color,float alpha,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (alpha < 0.0) {
    alpha = 0.0;
  }
  else if (1.0 < alpha) {
    alpha = 1.0;
  }
  fVar1 = (color->fields).g;
  fVar2 = (color->fields).b;
  (__return_storage_ptr__->fields).r = (color->fields).r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = alpha;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$VisibleResultCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f9480

int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount
                  (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_1843421eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    Il2CppMethodInitialized_1843421eb = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    iVar3 = 8;
    if (iVar1 < 8) {
      iVar3 = iVar1;
    }
    return iVar3;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RefreshSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f8090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f8173: jmp 0x1818f80e7

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar3;
  int index;
  
  if (Il2CppMethodInitialized_1843421ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ec = '\x01';
  }
  index = 0;
  pSVar1 = (__this->fields)._feedback;
  while (pSVar1 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    pSVar1 = (__this->fields)._feedback;
    if (pSVar1 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
    pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = (__this->fields)._feedback;
      if ((pSVar1 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) ||
         (pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                             ), pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0))
      break;
      (pGVar3->fields)._forced = index == (__this->fields)._selectedIndex;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar3,(MethodInfo *)0x0);
    }
    index = index + 1;
    pSVar1 = (__this->fields)._feedback;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RevealSelectedResult
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f8b60

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar3;
  UnityEngine_GameObject_o *focused;
  
  if (Il2CppMethodInitialized_1843421ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ed = '\x01';
  }
  if (-1 < (__this->fields)._selectedIndex) {
    pSVar1 = (__this->fields)._feedback;
    if (pSVar1 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
label_1818f8c4b:
      ThrowNullReferenceException();
    }
    if ((__this->fields)._selectedIndex < (pSVar1->fields)._size) {
      pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)(__this->fields)._feedback,
                          (__this->fields)._selectedIndex,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (__this->fields)._feedback;
        if (pSVar1 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
          pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,
                              (__this->fields)._selectedIndex,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                             );
          if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
            focused = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar3,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_1818f8c4b;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* result, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1818f7b40

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result,Gisketch_Aottg2UI_GisketchUIRoot_o *root
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843421ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ee = '\x01';
  }
  if (result != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_1818f7bf3:
        ThrowNullReferenceException();
      }
      if ((root->fields)._Overlays_k__BackingField !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,false,(MethodInfo *)0x0)
        ;
        __this_00 = (root->fields)._Overlays_k__BackingField;
        if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) goto label_1818f7bf3;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,false,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(result,root,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CloseResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, bool restoreFocus, const MethodInfo* method);
// 0x1818f7c50

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,bool restoreFocus,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843421ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ef = '\x01';
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
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_1818f7d12:
        ThrowNullReferenceException();
      }
      if ((root->fields)._Overlays_k__BackingField !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        (__this->fields)._popoverContent = (UnityEngine_GameObject_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._popoverContent,(void *)0x0);
        __this_00 = (root->fields)._Overlays_k__BackingField;
        if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) goto label_1818f7d12;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,restoreFocus,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$TitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__TitleFor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* result, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818f92d0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__TitleFor
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result,System_String_o *activeScreenId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (result == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((__this->fields)._showFullPath != false) {
    pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle(result,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                     (result,activeScreenId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Entries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1818f7d20

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
          Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  System_String_o *activeScreenId;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar4;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *screenIds;
  
  if (Il2CppMethodInitialized_1843421f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421f0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      if ((root->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
      goto label_1818f7ec3;
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._scopeScreenId,(MethodInfo *)0x0);
      if ((!bVar2) ||
         (((__this->fields)._extraScopeScreenIds != (System_String_array *)0x0 &&
          (((__this->fields)._extraScopeScreenIds)->max_length != 0)))) {
        manifest = (root->fields)._Manifest_k__BackingField;
        if (Il2CppMethodInitialized_1843421f1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
          Il2CppMethodInitialized_1843421f1 = '\x01';
        }
        screenIds = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39
                              );
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)screenIds,(MethodInfo *)0x0);
        (screenIds->fields).__1__state = -2;
        iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
        (screenIds->fields).__l__initialThreadId = iVar3;
        (screenIds->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(screenIds->fields).__4__this,__this);
        pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesForScreens
                           (manifest,(System_Collections_Generic_IEnumerable_string__o *)screenIds,false,
                            (MethodInfo *)0x0);
        return pSVar4;
      }
      pGVar1 = (root->fields)._Screens_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        activeScreenId = (pGVar1->fields)._activeId;
        pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                           ((root->fields)._Manifest_k__BackingField,activeScreenId,(MethodInfo *)0x0);
        pGVar1 = (root->fields)._Screens_k__BackingField;
        if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          if ((pGVar1->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
                               ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar4,
                                (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
                                (((pGVar1->fields)._active)->fields)._SearchEntries_k__BackingField,
                                activeScreenId,(MethodInfo *)0x0);
            return pSVar4;
          }
          pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
                             ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar4,
                              (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0,
                              activeScreenId,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
    ThrowNullReferenceException();
  }
label_1818f7ec3:
  pSVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  return pSVar4;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ScopedScreens
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f8c60

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ScopedScreens_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_1843421f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
    Il2CppMethodInitialized_1843421f1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x1818f9f20

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_01;
  
  if (Il2CppMethodInitialized_1843421f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    Il2CppMethodInitialized_1843421f2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  (__this->fields)._results = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._results,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_ctor
            );
  (__this->fields)._feedback = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._feedback,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x1818f8040

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_o local_18;
  
  (__this->fields)._selectedIndex = 0;
  pUVar2 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
  fVar1 = (pUVar2->fields).y;
  (__this->fields)._pointerLockPosition.fields.x = (pUVar2->fields).x;
  (__this->fields)._pointerLockPosition.fields.y = fVar1;
  (__this->fields)._pointerSelectionLocked = true;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x1818f79e0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__15_1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar3;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  int index;
  
  if (Il2CppMethodInitialized_1843421e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
    Il2CppMethodInitialized_1843421e6 = '\x01';
  }
  pSVar2 = (__this->fields)._results;
  if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if ((pSVar2->fields)._size == 0) {
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._results;
    if (pSVar2 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        iVar1 = (__this->fields)._selectedIndex;
        if (((iVar1 < 0) || (index = (pSVar2->fields)._size + -1, iVar1 <= index)) &&
           (index = iVar1, iVar1 < 0)) {
          index = 0;
        }
        entry = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)(__this->fields)._results,index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Item);
        root = UnityEngine_Component__GetComponentInParent_object__664f20
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_664F20 *)
                          MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
        if (Il2CppMethodInitialized_1843421ee == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_1843421ee = '\x01';
        }
        if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1818f7b36;
            if ((root->fields)._Overlays_k__BackingField !=
                (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
                        (__this,root,false,(MethodInfo *)0x0);
              __this_00 = (root->fields)._Overlays_k__BackingField;
              if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) goto label_1818f7b36;
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,false,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(entry,root,(MethodInfo *)0x0);
            }
          }
        }
      }
      return;
    }
  }
label_1818f7b36:
  ThrowNullReferenceException();
}


