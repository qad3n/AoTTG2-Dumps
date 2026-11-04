// Type: ApplicationManagers.PastebinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/PastebinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PastebinLoader.cs
// --------------------------------

// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$.ctor
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7___ctor (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7___ctor(ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_IDisposable_Dispose (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, const MethodInfo* method);
// 0x18235b320
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235b38b: jmp 0x18235b3a1
// asm:   0x18235b38d: lea rcx, [rsp + 0x30]
// asm:   0x18235b392: call 0x182344040  ; il2cpp_runtime_helper_182344040()
// asm:   0x18235b397: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18235b39c: test rcx, rcx
// asm:   0x18235b39f: jne 0x18235b3a7
// asm:   0x18235b3a7: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_IDisposable_Dispose
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_1843479b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_1843479b4 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__5 != (UnityEngine_WWW_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__5);
    }
  }
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$MoveNext
// il2cpp: bool ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__MoveNext (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, const MethodInfo* method);
// 0x18235ac10
// eh: try 0x18235aca2..0x18235aeec -> pad 0x183318f20 catch Il2CppExceptionWrapper
// eh: try 0x18235aeec..0x18235af63 -> pad 0x183340770 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18235af63..0x18235b288 -> pad 0x183318f20 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x18235b288..0x18235b2a7 -> pad 0x183340770 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18235b2a7..0x18235b2c6 -> pad 0x183318f20 catch Il2CppExceptionWrapper
// asm: 87 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235adb9: nop dword ptr [rax]
// asm:   0x18235aedf: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x18235aee7: jmp 0x18235b13b
// asm:   0x18235af68: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18235af6d: test rcx, rcx
// asm:   0x18235af70: je 0x18235b2bb
// asm:   0x18235af76: mov rax, qword ptr [rcx]
// asm:   0x18235af79: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235af80: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235af86: mov rbx, rax
// asm:   0x18235af89: lea rcx, [rip + 0x1d74ca0]  ; "Error parsing pastebin JSON: "
// asm:   0x18235af90: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235af95: xor r8d, r8d
// asm:   0x18235af98: mov rdx, rbx
// asm:   0x18235af9b: mov rcx, rax
// asm:   0x18235af9e: call 0x181969e50  ; System_String__Concat()
// asm:   0x18235afa3: mov rbx, rax
// asm:   0x18235afa6: lea rcx, [rip + 0x1da0723]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x18235afad: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235afb2: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18235afb9: jne 0x18235afc3
// asm:   0x18235afbb: mov rcx, rax
// asm:   0x18235afbe: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235afc3: cmp byte ptr [rip + 0x1fec980], 0
// asm:   0x18235afca: jne 0x18235afeb
// asm:   0x18235afcc: lea rcx, [rip + 0x1d837fd]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x18235afd3: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x18235afd8: lea rcx, [rip + 0x1da0459]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235afdf: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x18235afe4: mov byte ptr [rip + 0x1fec95f], 1
// asm:   0x18235afeb: mov rcx, qword ptr [rip + 0x1da0446]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235aff2: cmp dword ptr [rcx + 0xe4], 0
// asm:   0x18235aff9: jne 0x18235b000
// asm:   0x18235affb: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235b000: xor edx, edx
// asm:   0x18235b002: mov rcx, rbx
// asm:   0x18235b005: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18235b00a: xor edi, edi
// asm:   0x18235b237: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x18235b23c: test rbx, rbx
// asm:   0x18235b23f: jne 0x18235b2c6
// asm:   0x18235b245: movzx eax, byte ptr [rsp + 0x90]
// asm:   0x18235b2bb: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x18235b2c6: lea rcx, [rsp + 0x40]
// asm:   0x18235b2cb: call 0x182344100  ; il2cpp_runtime_helper_182344100()
// asm:   0x18235b2d0: mov rcx, rbx
// asm:   0x18235b2d3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 
// asm:   0x183340770: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340775: push rbx
// asm:   0x183340776: push rbp
// asm:   0x183340777: push rdi
// asm:   0x183340778: sub rsp, 0x20
// asm:   0x18334077c: mov rbp, rdx
// asm:   0x18334077f: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183340783: mov rax, qword ptr [rbx]
// asm:   0x183340786: mov rdi, qword ptr [rax]
// asm:   0x183340789: lea rcx, [rip + 0xd387c8]  ; TypeInfo_System_Exception
// asm:   0x183340790: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340795: mov rdx, rdi
// asm:   0x183340798: mov rcx, rax
// asm:   0x18334079b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833407a0: test al, al
// asm:   0x1833407a2: mov rax, qword ptr [rbx]
// asm:   0x1833407a5: je 0x1833407b7
// asm:   0x1833407a7: mov qword ptr [rbp + 0x48], rax
// asm:   0x1833407ab: movabs rax, 0
// asm:   0x1833407b5: jmp 0x1833407cc
// asm:   0x1833407b7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833407bb: lea rdx, [rip + 0xc9b7c6]
// asm:   0x1833407c2: lea rcx, [rbp + 0x20]
// asm:   0x1833407c6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833407cc: add rsp, 0x20
// asm:   0x1833407d0: pop rdi
// asm:   0x1833407d1: pop rbp
// asm:   0x1833407d2: pop rbx
// asm:   0x1833407d3: ret 

bool ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__MoveNext
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  bool bVar4;
  System_String_array *pSVar5;
  SimpleJSONFixed_JSONNode_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_WWW_o *pUVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_1843479b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WWW);
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load pastebin link: ");
    Il2CppMethodInitialized_1843479b3 = '\x01';
  }
  uVar11 = 0;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Status = 0;
    pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if (pSVar5 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar5->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar7 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->LeaderboardURL;
    pSVar5->m_Items[0] = pSVar7;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar7);
    if ((uint)pSVar5->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    pSVar7 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->PlatformURL;
    pSVar5->m_Items[1] = pSVar7;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar7);
    (__this->fields)._urls_5__2 = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._urls_5__2,pSVar5);
    pSVar5 = (__this->fields)._urls_5__2;
    if (pSVar5 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (SimpleJSONFixed_JSONNode_array *)
             SZArrayNew(TypeInfo_SimpleJSONFixed_JSONNode_array,(uint32_t)pSVar5->max_length);
    (__this->fields)._nodes_5__3 = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes_5__3,pSVar6);
    while( true ) {
      pSVar5 = (__this->fields)._urls_5__2;
      if (pSVar5 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)pSVar5->max_length <= (int)uVar11) break;
      pSVar6 = (__this->fields)._nodes_5__3;
      if (pSVar6 == (SimpleJSONFixed_JSONNode_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((uint)pSVar6->max_length <= uVar11) {
        ThrowIndexOutOfRangeException();
      }
      pSVar6->m_Items[(int)uVar11] = (SimpleJSONFixed_JSONNode_o *)0x0;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar11,(void *)0x0);
      uVar11 = uVar11 + 1;
    }
    (__this->fields)._i_5__4 = 0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    (__this->fields).__1__state = -3;
    pUVar10 = (__this->fields)._www_5__5;
    if (pUVar10 == (UnityEngine_WWW_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = UnityEngine_WWW__get_error(pUVar10,(MethodInfo *)0x0);
    if (pSVar7 != (System_String_o *)0x0) {
      pUVar10 = (__this->fields)._www_5__5;
      if (pUVar10 == (UnityEngine_WWW_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = UnityEngine_WWW__get_error(pUVar10,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969e50("Failed to load pastebin link: ",pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_1843479b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_1843479b4 = '\x01';
      }
      (__this->fields).__1__state = -1;
      if ((__this->fields)._www_5__5 != (UnityEngine_WWW_o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__5);
      }
      goto label_18235b13b;
    }
    pUVar10 = (__this->fields)._www_5__5;
    if (pUVar10 == (UnityEngine_WWW_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (__this->fields)._nodes_5__3;
    uVar11 = (__this->fields)._i_5__4;
    pSVar7 = UnityEngine_WWW__get_text(pUVar10,(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar8 != (Il2CppObject *)0x0) &&
       (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pSVar6->obj).klass)->_1).element_class),
       pIVar9 == (Il2CppObject *)0x0)) {
      pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
    }
    if ((uint)pSVar6->max_length <= uVar11) {
      ThrowIndexOutOfRangeException();
    }
    pSVar6->m_Items[(int)uVar11] = (SimpleJSONFixed_JSONNode_o *)pIVar8;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar11,pIVar8);
    if (Il2CppMethodInitialized_1843479b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_1843479b4 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._www_5__5 != (UnityEngine_WWW_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__5);
    }
    (__this->fields)._www_5__5 = (UnityEngine_WWW_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__5,(void *)0x0);
    piVar1 = &(__this->fields)._i_5__4;
    *piVar1 = *piVar1 + 1;
  }
  pSVar5 = (__this->fields)._urls_5__2;
  if (pSVar5 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._i_5__4 < (int)pSVar5->max_length) {
    pSVar5 = (__this->fields)._urls_5__2;
    uVar11 = (__this->fields)._i_5__4;
    if (uVar11 < (uint)pSVar5->max_length) {
      pSVar7 = pSVar5->m_Items[(int)uVar11];
      pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WWW);
      UnityEngine_WWW___ctor(pUVar10,pSVar7,(MethodInfo *)0x0);
      (__this->fields)._www_5__5 = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._www_5__5,pUVar10);
      (__this->fields).__1__state = -3;
      pUVar10 = (__this->fields)._www_5__5;
      (__this->fields).__2__current = (Il2CppObject *)pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar10);
      (__this->fields).__1__state = 1;
      return true;
    }
    ThrowIndexOutOfRangeException();
  }
label_18235b13b:
  pSVar6 = (__this->fields)._nodes_5__3;
  if (pSVar6 == (SimpleJSONFixed_JSONNode_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar6->max_length != 0) {
    pSVar3 = pSVar6->m_Items[0];
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard = pSVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard,pSVar3)
    ;
    pSVar3 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
      }
      TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Status = 1;
    }
    else {
      if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
      }
      TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Status = 2;
    }
    return false;
  }
  ThrowIndexOutOfRangeException();
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$<>m__Finally1
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7____m__Finally1 (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, const MethodInfo* method);
// 0x18235b3b0

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7____m__Finally1
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843479b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_1843479b4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._www_5__5 != (UnityEngine_WWW_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._www_5__5);
    return;
  }
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_Collections_IEnumerator_Reset (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, const MethodInfo* method);
// 0x18235b2e0

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_Collections_IEnumerator_Reset
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_Collections_IEnumerator_get_Current (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7__System_Collections_IEnumerator_get_Current(ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.PastebinLoader$$Init
// il2cpp: void ApplicationManagers_PastebinLoader__Init (const MethodInfo* method);
// 0x1823551a0

void ApplicationManagers_PastebinLoader__Init(MethodInfo *method)

{
  ApplicationManagers_PastebinLoader_o *value;
  
  if (Il2CppMethodInitialized_1843479af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_PastebinLoader);
    Il2CppMethodInitialized_1843479af = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_PastebinLoader);
  TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance,value);
  return;
}


// ApplicationManagers.PastebinLoader$$LoadPastebin
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebin (const MethodInfo* method);
// 0x182355280

void ApplicationManagers_PastebinLoader__LoadPastebin(MethodInfo *method)

{
  ApplicationManagers_PastebinLoader_o *__this;
  ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *routine;
  
  if (Il2CppMethodInitialized_1843479b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    Il2CppMethodInitialized_1843479b0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
  }
  if (TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance !=
      (ApplicationManagers_PastebinLoader_o *)0x0) {
    __this = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance;
    if (Il2CppMethodInitialized_1843479b1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7);
      Il2CppMethodInitialized_1843479b1 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7
                        );
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PastebinLoader$$LoadPastebinCoroutine
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine (ApplicationManagers_PastebinLoader_o* __this, const MethodInfo* method);
// 0x182355230

System_Collections_IEnumerator_o *
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine
          (ApplicationManagers_PastebinLoader_o *__this,MethodInfo *method)

{
  ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_1843479b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7);
    Il2CppMethodInitialized_1843479b1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.PastebinLoader$$.ctor
// il2cpp: void ApplicationManagers_PastebinLoader___ctor (ApplicationManagers_PastebinLoader_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_PastebinLoader___ctor(ApplicationManagers_PastebinLoader_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PastebinLoader$$.cctor
// il2cpp: void ApplicationManagers_PastebinLoader___cctor (const MethodInfo* method);
// 0x182355340

void ApplicationManagers_PastebinLoader___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843479b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"https://aottgrc.com/Aottg2/Version.json");
    il2cpp_codegen_initialize_runtime_metadata(&"https://pastebin.com/raw/zptDi9T6");
    Il2CppMethodInitialized_1843479b2 = '\x01';
  }
  TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Status = 0;
  TypeInfo_ApplicationManagers_PastebinLoader->static_fields->LeaderboardURL = "https://pastebin.com/raw/zptDi9T6";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_PastebinLoader->static_fields->LeaderboardURL,"https://pastebin.com/raw/zptDi9T6"
            );
  TypeInfo_ApplicationManagers_PastebinLoader->static_fields->PlatformURL = "https://aottgrc.com/Aottg2/Version.json";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_PastebinLoader->static_fields->PlatformURL,"https://aottgrc.com/Aottg2/Version.json");
  return;
}


