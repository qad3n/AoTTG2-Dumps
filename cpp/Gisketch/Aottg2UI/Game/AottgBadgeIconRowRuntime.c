// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRowRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58d84c0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d8510

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_075454ba == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_075454ba = '\x01';
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
            goto label_058d85af;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058d85af:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__MoveNext (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d85c0
// eh: try 0x58d8652..0x58d8975 -> pad 0x58d8975 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58d89a7..0x58d89ac -> pad 0x58d89c7 cleanup
// eh: try 0x58d89ca..0x58d89d4 -> pad 0x58d89dc catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d873c: nop dword ptr [rax]
// asm:   0x58d8975: jmp 0x58d898f
// asm:   0x58d8977: jmp 0x58d898f
// asm:   0x58d8979: jmp 0x58d898f
// asm:   0x58d897b: jmp 0x58d898f
// asm:   0x58d897d: jmp 0x58d898f
// asm:   0x58d897f: jmp 0x58d898f
// asm:   0x58d8981: jmp 0x58d898f
// asm:   0x58d8983: jmp 0x58d898f
// asm:   0x58d8985: jmp 0x58d898f
// asm:   0x58d8987: jmp 0x58d898f
// asm:   0x58d8989: jmp 0x58d898f
// asm:   0x58d898b: jmp 0x58d898f
// asm:   0x58d898d: jmp 0x58d898f
// asm:   0x58d898f: mov rbx, rax
// asm:   0x58d8992: cmp edx, 1
// asm:   0x58d8995: jne 0x58d89ca
// asm:   0x58d8997: mov rdi, rbx
// asm:   0x58d899a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d899f: mov rbx, qword ptr [rax]
// asm:   0x58d89a2: mov qword ptr [rsp + 0x10], rbx
// asm:   0x58d89a7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d89ac: test rbx, rbx
// asm:   0x58d89af: je 0x58d8667
// asm:   0x58d89b5: mov rdi, qword ptr [rsp + 8]
// asm:   0x58d89ba: call 0x2fd0790  ; il2cpp_runtime_helper_02fd0790()
// asm:   0x58d89bf: mov rdi, rbx
// asm:   0x58d89c2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58d89c7: mov rbx, rax
// asm:   0x58d89ca: lea rdi, [rsp + 0x10]
// asm:   0x58d89cf: call 0x2fd05f0  ; il2cpp_runtime_helper_02fd05f0()
// asm:   0x58d89d4: mov rdi, rbx
// asm:   0x58d89d7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58d89dc: mov rdi, rax
// asm:   0x58d89df: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__MoveNext
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *pGVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  ulong uVar10;
  long lVar11;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *local_30;
  undefined8 local_28;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o **local_20;
  
  local_30 = __this;
  if (Il2CppMethodInitialized_075454b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454b9 = '\x01';
  }
  local_28 = 0;
  local_20 = &local_30;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
label_058d8724:
    (__this->fields).__1__state = -3;
    do {
      pIVar7 = (Il2CppObject *)(local_30->fields).__7__wrap1;
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar7->klass;
      uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar11) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
            goto label_058d87b3;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058d87b3:
      bVar6 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      pGVar5 = local_30;
      if (!bVar6) {
        if (Il2CppMethodInitialized_075454ba == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
          Il2CppMethodInitialized_075454ba = '\x01';
        }
        (pGVar5->fields).__1__state = -1;
        pIVar7 = (Il2CppObject *)(pGVar5->fields).__7__wrap1;
        if (pIVar7 == (Il2CppObject *)0x0) goto label_058d8936;
        pIVar3 = pIVar7->klass;
        uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar10 == 0) goto label_058d890f;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        goto label_058d8900;
      }
      pIVar7 = (Il2CppObject *)(local_30->fields).__7__wrap1;
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar7->klass;
      uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar4->interfaceType + lVar11)
              == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
            goto label_058d8833;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_058d8833:
      pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = (System_String_o *)(*pIVar7->klass->vtable[9].methodPtr)(pIVar7);
      bVar6 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
    } while (bVar6);
    pSVar9 = (System_String_o *)(*pIVar7->klass->vtable[9].methodPtr)(pIVar7,pIVar7->klass->vtable[9].method);
    (local_30->fields).__2__current = pSVar9;
    Il2CppCodeGenWriteBarrier(&(local_30->fields).__2__current);
    (local_30->fields).__1__state = 1;
    bVar6 = true;
  }
  else {
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      pSVar2 = (__this->fields).badges;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        pSVar2 = (local_30->fields).badges;
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar7 = (Il2CppObject *)
                 (*(pSVar2->klass->vtable)._27_get_Children.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._27_get_Children.method);
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar7->klass;
        uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)
                 ((long)&pIVar4->interfaceType + lVar11) ==
                TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
              pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
              goto label_058d8701;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058d8701:
        pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        (local_30->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)pIVar7;
        Il2CppCodeGenWriteBarrier(&(local_30->fields).__7__wrap1);
        __this = local_30;
        goto label_058d8724;
      }
    }
    bVar6 = false;
  }
  return bVar6;
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
label_058d8900:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
      goto label_058d892d;
    }
  }
label_058d890f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058d892d:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
label_058d8936:
  (local_30->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(local_30->fields).__7__wrap1);
  return false;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27____m__Finally1 (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d89f0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27____m__Finally1
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075454ba = '\x01';
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
        goto label_058d8a7f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058d8a7f:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d8a90

System_String_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerator_System_String__get_Current
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d8aa0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27_System_Collections_IEnumerator_Re
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d8ae0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d8af0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_075454bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_075454bb = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_058d8b63;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_058d8b63:
  (__this_00->fields).badges = (__this->fields).__3__badges;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).badges);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x58d8b80

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$get_HasBadges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7560

bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  return (__this->fields)._HasBadges_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$set_HasBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool value, const MethodInfo* method);
// 0x58d7570

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._HasBadges_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, float size, float gap, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, bool controlsActive, const MethodInfo* method);
// 0x58d72f0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,float size,float gap,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,bool controlsActive,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_075454ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    Il2CppMethodInitialized_075454ac = '\x01';
  }
  fVar3 = 1.0;
  if (1.0 <= size) {
    fVar3 = size;
  }
  (__this->fields)._size = fVar3;
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey);
  (__this->fields)._controlsActive = controlsActive;
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_058d7551;
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar1,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_058d7551;
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar1,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_058d7551;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,gap,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_058d7551;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar1,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
  if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_058d7551;
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar1,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_058d7551;
  }
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
label_058d751b:
      method_00 = (pUVar2->klass->vtable)._38_set_preferredHeight.method;
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)(pUVar2,(__this->fields)._size,method_00);
      (__this->fields)._setupComplete = true;
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe(__this,method_00);
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,method_00);
      return;
    }
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) goto label_058d751b;
    }
  }
label_058d7551:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x58d76e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,
               System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  System_String_array *first;
  bool bVar1;
  System_String_array *ids_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075454ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_SequenceEqual_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454ad = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  ids_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds(ids,(MethodInfo *)0x0);
  first = (__this->fields)._last;
  if (first != (System_String_array *)0x0) {
    bVar1 = System_Linq_Enumerable__SequenceEqual_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ids_00,
                       (MethodInfo_34F75D0 *)MethodInfo_System_Linq_Enumerable_SequenceEqual_string);
    if (bVar1) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive
                (__this,(__this->fields)._HasBadges_k__BackingField,method_00);
      return;
    }
  }
  (__this->fields)._last = ids_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._last);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild(__this,ids_00,method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x58d79b0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,SimpleJSONFixed_JSONNode_o *info,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075454ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_075454ae = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058d7aa5;
    pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"badges",(info->klass->vtable)._7_get_Item.method);
  }
  if (Il2CppMethodInitialized_075454b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_075454b8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__3__badges = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__3__badges);
  if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (__this,(System_Collections_Generic_IEnumerable_string__o *)__this_00,method_00);
    return;
  }
label_058d7aa5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfoJson
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* json, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x58d7b20

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *json,
               System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *requested;
  SimpleJSONFixed_JSONArray_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)json;
  if (Il2CppMethodInitialized_075454af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_075454af = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(json,method_01);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    requested = (*(a->klass->vtable)._7_get_Item.methodPtr)
                          (a,"badges",(a->klass->vtable)._7_get_Item.method);
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_5800680
                     (requested,roles,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075454b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_075454b8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__3__badges = (SimpleJSONFixed_JSONNode_o *)pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__3__badges);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
            (__this,(System_Collections_Generic_IEnumerable_string__o *)__this_00,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7630

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  System_String_o *json;
  SimpleJSONFixed_JSONNode_o *info;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075454b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454b0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar1) && ((__this->fields)._setupComplete != false)) &&
     ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._stateKey,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = (__this->fields)._state;
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_01 = (MethodInfo *)(__this->fields)._stateKey;
      json = Gisketch_Aottg2UI_State_GisketchUIState__Get
                       (__this_00,(System_String_o *)method_01,
                        (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      info = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(json,method_01);
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(__this,info,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7ce0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe(__this,method);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7d00

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075454b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
    Il2CppMethodInitialized_075454b7 = '\x01';
  }
  if (((__this->fields)._subscribed != false) &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
    (__this->fields)._subscribed = false;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7e00

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075454b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
    Il2CppMethodInitialized_075454b7 = '\x01';
  }
  if (((__this->fields)._subscribed != false) &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
    (__this->fields)._subscribed = false;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x58d7e80

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075454b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454b1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) || ((__this->fields)._setupComplete == false)) {
    if (Il2CppMethodInitialized_075454b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
      Il2CppMethodInitialized_075454b7 = '\x01';
    }
    if (((__this->fields)._subscribed != false) &&
       (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
                 (MethodInfo_4A81BE0 *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
      (__this->fields)._subscribed = false;
    }
  }
  else {
    method_00 = (MethodInfo *)(__this->fields)._stateKey;
    bVar1 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
    if (bVar1) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_array* ids, const MethodInfo* method);
// 0x58d7840

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_array *ids,
               MethodInfo *method)

{
  uint uVar1;
  System_String_o *id;
  bool bVar2;
  ulong uVar3;
  System_String_o *resourcePath;
  UnityEngine_Object_o *x;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  int iVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_075454b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454b2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear(__this,pMVar4);
  if (ids == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)ids->max_length < 1) {
    iVar5 = 0;
    pMVar4 = extraout_RDX;
  }
  else {
    uVar3 = ids->max_length & 0xffffffff;
    uVar6 = 0;
    iVar5 = 0;
    do {
      if (uVar3 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      id = ids->m_Items[uVar6];
      resourcePath = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon(id,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar4 = extraout_RDX_00;
      if (!bVar2) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon(__this,id,(UnityEngine_Sprite_o *)x,in_RCX);
        iVar5 = iVar5 + 1;
        pMVar4 = extraout_RDX_01;
      }
      uVar6 = uVar6 + 1;
      uVar1 = (uint)ids->max_length;
      uVar3 = (ulong)uVar1;
      in_RCX = (MethodInfo *)(long)(int)uVar1;
    } while ((long)uVar6 < (long)in_RCX);
  }
  (__this->fields)._HasBadges_k__BackingField = 0 < iVar5;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive(__this,0 < iVar5,pMVar4);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool active, const MethodInfo* method);
// 0x58d77b0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool active,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_075454b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454b3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields)._controlsActive != false)) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$AddIcon
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* id, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x58d80d0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *id,
               UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_String_o *pSVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_03;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_075454b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Badge ");
    Il2CppMethodInitialized_075454b4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar2 = System_String__Concat_52f0320("AoTTG Badge ",id,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_058d849a:
    ThrowNullReferenceException();
  }
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_058d84a4;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_058d84a4;
    }
    if ((components->max_length & 0xfffffffe) == 0) goto label_058d849f;
    components->m_Items[1] = pSVar3;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_058d84a4;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar3;
      Il2CppCodeGenWriteBarrier(components->m_Items + 2);
      pSVar3 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar3 != (System_Type_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar4 == (Il2CppObject *)0x0) {
label_058d84a4:
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if ((components->max_length & 0xfffffffc) != 0) {
        components->m_Items[3] = pSVar3;
        Il2CppCodeGenWriteBarrier(components->m_Items + 3);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,pSVar2,components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_00,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
            ;
            if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_sprite(__this_02,sprite,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_preserveAspect(__this_02,true,(MethodInfo *)0x0);
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,true,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              UVar6.fields.b = 1.0;
              UVar6.fields.a = 1.0;
              UVar6.fields.r = 1.0;
              UVar6.fields.g = 1.0;
              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                        (__this_02,UVar6,(__this_02->klass->vtable)._23_set_color.method);
              __this_03 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
              pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel(id,(MethodInfo *)0x0)
              ;
              if (__this_03 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                          (__this_03,pSVar2,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_00,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                            (pUVar5,(__this->fields)._size,
                             (pUVar5->klass->vtable)._36_set_preferredWidth.method);
                  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar5,(__this->fields)._size,
                             (pUVar5->klass->vtable)._38_set_preferredHeight.method);
                  return;
                }
              }
            }
          }
        }
        goto label_058d849a;
      }
    }
  }
label_058d849f:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7f70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d7ff6: lea r12, [rip + 0x199d833]  ; TypeInfo_UnityEngine_Application
// asm:   0x58d7ffd: jmp 0x58d8012
// asm:   0x58d807d: jmp 0x58d80bc

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  int index;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (Il2CppMethodInitialized_075454b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454b5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
label_058d80c5:
      ThrowNullReferenceException();
    }
    index = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
    while (index = index + -1, -1 < index) {
      while( true ) {
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_058d80c5;
        pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        }
        else {
          bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        }
        if (!bVar1) break;
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_058d80c5;
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar3,(MethodInfo *)0x0);
        index = index + -1;
        if (index < 0) {
          return;
        }
      }
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_058d80c5;
      pUVar3 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_6921750(pUVar3,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Subscribe
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7580

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075454b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
    Il2CppMethodInitialized_075454b6 = '\x01';
  }
  if ((((__this->fields)._setupComplete != false) && ((__this->fields)._subscribed == false)) &&
     ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._stateKey,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = (__this->fields)._state;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
                 (MethodInfo_4A81BE0 *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        ThrowNullReferenceException();
      }
      Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,__this_01,(MethodInfo *)0x0);
      (__this->fields)._subscribed = true;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Unsubscribe
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d7d80

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075454b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
    Il2CppMethodInitialized_075454b7 = '\x01';
  }
  if (((__this->fields)._subscribed != false) &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
    (__this->fields)._subscribed = false;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse (System_String_o* json, const MethodInfo* method);
// 0x58d7c40
// eh: try 0x58d7c55..0x58d7c5f -> pad 0x58d7c6d catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x58d7c91..0x58d7cc5 -> pad 0x58d7cc5 (+1 call sites) cleanup
// eh: try 0x58d7cc8..0x58d7ccd -> pad 0x58d7cd5 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d7c6d: mov rbx, rax
// asm:   0x58d7c70: cmp edx, 1
// asm:   0x58d7c73: jne 0x58d7ccd
// asm:   0x58d7c75: mov rdi, rbx
// asm:   0x58d7c78: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d7c7d: mov rbx, rax
// asm:   0x58d7c80: lea rax, [rip + 0x1c7ea41]
// asm:   0x58d7c87: mov rdi, qword ptr [rax + 0x10]
// asm:   0x58d7c8b: mov rax, qword ptr [rbx]
// asm:   0x58d7c8e: mov rsi, qword ptr [rax]
// asm:   0x58d7c91: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x58d7c96: test al, al
// asm:   0x58d7c98: je 0x58d7ca4
// asm:   0x58d7c9a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d7c9f: xor r14d, r14d
// asm:   0x58d7ca2: jmp 0x58d7c62
// asm:   0x58d7ca4: mov edi, 8
// asm:   0x58d7ca9: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x58d7cae: mov rcx, qword ptr [rbx]
// asm:   0x58d7cb1: mov qword ptr [rax], rcx
// asm:   0x58d7cb4: lea rsi, [rip + 0x1555845]
// asm:   0x58d7cbb: mov rdi, rax
// asm:   0x58d7cbe: xor edx, edx
// asm:   0x58d7cc0: call 0x6e255c0  ; __cxa_throw()
// asm:   0x58d7cc5: mov rbx, rax
// asm:   0x58d7cc8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d7ccd: mov rdi, rbx
// asm:   0x58d7cd0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58d7cd5: mov rdi, rax
// asm:   0x58d7cd8: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(System_String_o *json,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$BadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds (SimpleJSONFixed_JSONNode_o* badges, const MethodInfo* method);
// 0x58d7ab0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
          (SimpleJSONFixed_JSONNode_o *badges,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this;
  
  if (Il2CppMethodInitialized_075454b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_075454b8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__badges = badges;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__badges);
  return (System_Collections_Generic_IEnumerable_string__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x58d84f0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._size = 20.0;
  (__this->fields)._controlsActive = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


