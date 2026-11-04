// Type: Gilzoide.FlexUi.FlexLayout
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FlexLayout.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$MoveNext
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, const MethodInfo* method);
// 0x18187d9e0
// eh: try 0x18187da58..0x18187db2c -> pad 0x183331660 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18187db2c..0x18187dc86 -> pad 0x1833190b0 catch Il2CppExceptionWrapper
// eh: try 0x18187dc86..0x18187dcea -> pad 0x183331660 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18187dcea..0x18187dd70 -> pad 0x1833190b0 catch Il2CppExceptionWrapper
// eh: try 0x18187dde9..0x18187ddfa -> pad 0x183331660 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18187ddfa..0x18187de0a -> pad 0x1833190b0 catch Il2CppExceptionWrapper
// eh: try 0x18187de0a..0x18187de1f -> pad 0x183331660 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187da6b: nop dword ptr [rax + rax]
// asm:   0x18187db63: jmp 0x18187dd50
// asm:   0x18187dc85: nop 
// asm:   0x18187dca9: jmp 0x18187dd48
// asm:   0x18187dd15: cmp dword ptr [rsp + 0x20], 0
// asm:   0x18187dd1a: jge 0x18187dd38
// asm:   0x18187dd1c: mov rax, qword ptr [rsp + 0x90]
// asm:   0x18187dd24: mov rcx, qword ptr [rax + 0x30]
// asm:   0x18187dd28: test rcx, rcx
// asm:   0x18187dd2b: je 0x18187de19
// asm:   0x18187dd31: mov byte ptr [rcx + 0x111], 0
// asm:   0x18187dd38: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18187dd3d: test rcx, rcx
// asm:   0x18187dd40: jne 0x18187de0f
// asm:   0x18187dd46: xor esi, esi
// asm:   0x18187dd90: mov rax, qword ptr [rsp + 0x90]
// asm:   0x18187dd98: mov dword ptr [rax], 0xfffffffe
// asm:   0x18187dd9e: xor esi, esi
// asm:   0x18187dda0: mov rax, qword ptr [rsp + 0x90]
// asm:   0x18187dda8: mov qword ptr [rax + 0x30], rsi
// asm:   0x18187ddac: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x18187ddb4: add rcx, 0x30
// asm:   0x18187ddb8: xor edx, edx
// asm:   0x18187ddba: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18187ddbf: mov eax, dword ptr [rsp + 0x48]
// asm:   0x18187ddc3: dec eax
// asm:   0x18187ddc5: movsxd rdx, eax
// asm:   0x18187ddc8: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x18187ddd0: add rcx, 8
// asm:   0x18187ddd4: xor r8d, r8d
// asm:   0x18187ddd7: mov rdx, qword ptr [rsp + rdx*8 + 0x40]
// asm:   0x18187dddc: call 0x181a28c50  ; System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetException()
// asm:   0x18187dde1: add rsp, 0x70
// asm:   0x18187dde5: pop rdi
// asm:   0x18187dde6: pop rsi
// asm:   0x18187dde7: pop rbx
// asm:   0x18187dde8: ret 
// asm:   0x18187de0f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18187de19: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833190b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833190b5: push rbp
// asm:   0x1833190b6: sub rsp, 0x20
// asm:   0x1833190ba: mov rbp, rdx
// asm:   0x1833190bd: mov rax, qword ptr [rbp + 0x30]
// asm:   0x1833190c1: mov rcx, qword ptr [rax]
// asm:   0x1833190c4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x1833190c8: movabs rax, 0
// asm:   0x1833190d2: add rsp, 0x20
// asm:   0x1833190d6: pop rbp
// asm:   0x1833190d7: ret 
// asm:   0x183331660: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331665: push rbx
// asm:   0x183331666: push rbp
// asm:   0x183331667: push rdi
// asm:   0x183331668: sub rsp, 0x20
// asm:   0x18333166c: mov rbp, rdx
// asm:   0x18333166f: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x183331673: mov rax, qword ptr [rdi]
// asm:   0x183331676: mov rbx, qword ptr [rax]
// asm:   0x183331679: lea rcx, [rip + 0xd478d8]  ; TypeInfo_System_Exception
// asm:   0x183331680: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331685: mov rcx, rax
// asm:   0x183331688: mov rdx, rbx
// asm:   0x18333168b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331690: test al, al
// asm:   0x183331692: mov rax, qword ptr [rdi]
// asm:   0x183331695: je 0x1833316af
// asm:   0x183331697: movsxd rcx, dword ptr [rbp + 0x48]
// asm:   0x18333169b: mov qword ptr [rbp + rcx*8 + 0x40], rax
// asm:   0x1833316a0: inc dword ptr [rbp + 0x48]
// asm:   0x1833316a3: movabs rax, 0
// asm:   0x1833316ad: jmp 0x1833316c4
// asm:   0x1833316af: mov qword ptr [rbp + 0x28], rax
// asm:   0x1833316b3: lea rdx, [rip + 0xcaa8ce]
// asm:   0x1833316ba: lea rcx, [rbp + 0x28]
// asm:   0x1833316be: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833316c4: add rsp, 0x20
// asm:   0x1833316c8: pop rdi
// asm:   0x1833316c9: pop rbp
// asm:   0x1833316ca: pop rbx
// asm:   0x1833316cb: ret 

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  int32_t newLength;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  int32_t in_R8D;
  MethodInfo *in_R9;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *local_res8 [2];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o local_res18;
  int local_68 [10];
  undefined4 local_40;
  undefined8 local_38;
  int *local_30;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o **local_28;
  
  newLength = (int32_t)method;
  local_res8[0] = __this;
  if (Il2CppMethodInitialized_184341c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_YieldAwaitable_Yie
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter);
    Il2CppMethodInitialized_184341c77 = '\x01';
  }
  local_res18.fields.m_BitIndex._0_1_ = (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o)0x0;
  local_res18.fields.bitMask._0_1_ = 0;
  local_40 = 0;
  local_68[0] = (local_res8[0]->fields).__1__state;
  pGVar2 = (local_res8[0]->fields).__4__this;
  if (local_68[0] != 0) {
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    while( true ) {
      if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (Il2CppMethodInitialized_184341c65 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184341c65 = '\x01';
      }
      x = (pGVar2->fields)._parentNode;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      in_R8D = 0;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) break;
      pGVar2 = (pGVar2->fields)._parentNode;
    }
    (local_res8[0]->fields)._root_5__2 = pGVar2;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields)._root_5__2,pGVar2);
    newLength = (int32_t)pGVar2;
    pGVar2 = (local_res8[0]->fields)._root_5__2;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pGVar2->fields)._isRefreshScheduled != false) goto label_18187dd50;
    (pGVar2->fields)._isRefreshScheduled = true;
  }
  local_38 = 0;
  local_30 = local_68;
  local_28 = local_res8;
  if (local_68[0] == 0) {
    local_res18.fields.m_BitIndex._0_1_ =
         (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o)(local_res8[0]->fields)._tail[0];
    (local_res8[0]->fields)._tail[0] = '\0';
    local_68[0] = -1;
    (local_res8[0]->fields).__1__state = -1;
  }
  else {
    if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
    }
    local_res18.fields.bitMask._0_1_ =
         System_IO_Compression_BrotliStream__get_CanSeek
                   ((Unity_Collections_NativeText_ReadOnly_o *)0x0,newLength,in_R8D,in_R9);
    local_res18.fields.m_BitIndex._0_1_ =
         (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o)
         System_IO_Compression_BrotliStream__get_CanSeek
                   ((Unity_Collections_NativeText_ReadOnly_o *)&local_res18.fields.bitMask,0,in_R8D,in_R9);
    if ((TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter);
    }
    bVar1 = System_IO_Compression_BrotliStream__get_CanSeek
                      ((Unity_Collections_NativeText_ReadOnly_o *)&local_res18,0,in_R8D,in_R9);
    if (!bVar1) {
      local_68[0] = 0;
      (local_res8[0]->fields).__1__state = 0;
      (local_res8[0]->fields)._tail[0] = (uint8_t)local_res18.fields.m_BitIndex._0_1_;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter__FlexLayout__RefreshRootLayout_d__155_
                (&(local_res8[0]->fields).__t__builder,
                 (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o *)&local_res18,local_res8[0],
                 (MethodInfo_621350 *)
                 MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_YieldAwaitable_Yie
                );
      if (-1 < local_68[0]) {
        return;
      }
      pGVar2 = (local_res8[0]->fields)._root_5__2;
      if (pGVar2 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        (pGVar2->fields)._isRefreshScheduled = false;
        return;
      }
      ThrowNullReferenceException();
    }
  }
  if ((TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor(&local_res18,(MethodInfo *)0x0);
  pGVar2 = (local_res8[0]->fields)._root_5__2;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pGVar2 = (local_res8[0]->fields)._root_5__2;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(pGVar2->klass->vtable)._9_IsActive.methodPtr)
                      (pGVar2,(pGVar2->klass->vtable)._9_IsActive.method);
    if (bVar1) {
      pGVar2 = (local_res8[0]->fields)._root_5__2;
      if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode(pGVar2,(MethodInfo *)0x0);
      if (bVar1) {
        pGVar2 = (local_res8[0]->fields)._root_5__2;
        if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          ThrowNullReferenceException();
        }
        Gilzoide_FlexUi_FlexLayout__RefreshLayout(pGVar2,(MethodInfo *)0x0);
      }
    }
  }
  if (local_68[0] < 0) {
    pGVar2 = (local_res8[0]->fields)._root_5__2;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar2->fields)._isRefreshScheduled = false;
  }
label_18187dd50:
  (local_res8[0]->fields).__1__state = -2;
  (local_res8[0]->fields)._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields)._root_5__2,(void *)0x0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult
            (&(local_res8[0]->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$SetStateMachine
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x18187de20

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_IsRootLayoutNode
// il2cpp: bool Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187ba70

bool Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c65 = '\x01';
  }
  x = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gilzoide.FlexUi.FlexLayout$$get_RootLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bda0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187be12: jmp 0x18187bdb5

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  
  for (; __this != (Gilzoide_FlexUi_FlexLayout_o *)0x0; __this = (__this->fields)._parentNode) {
    if (Il2CppMethodInitialized_184341c65 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341c65 = '\x01';
    }
    x = (__this->fields)._parentNode;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return __this;
    }
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) break;
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$get_ParentLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc70

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._parentNode;
}


// Gilzoide.FlexUi.FlexLayout$$get_RectTransform
// il2cpp: UnityEngine_RectTransform_o* Gilzoide_FlexUi_FlexLayout__get_RectTransform (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bcc0

UnityEngine_RectTransform_o *
Gilzoide_FlexUi_FlexLayout__get_RectTransform(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (Il2CppMethodInitialized_184341c66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184341c66 = '\x01';
  }
  pUVar4 = (__this->fields)._rectTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._rectTransform = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar3 = pUVar4;
      if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_RectTransform);
      }
      (__this->fields)._rectTransform = pUVar3;
      if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_RectTransform);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rectTransform,pUVar4);
  }
  return (__this->fields)._rectTransform;
}


// Gilzoide.FlexUi.FlexLayout$$get_Configuration
// il2cpp: Gilzoide_FlexUi_FlexLayoutConfig_o* Gilzoide_FlexUi_FlexLayout__get_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x1805852b0

Gilzoide_FlexUi_FlexLayoutConfig_o*
Gilzoide_FlexUi_FlexLayout__get_Configuration(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._configuration;
}


// Gilzoide.FlexUi.FlexLayout$$set_Configuration
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayoutConfig_o* value, const MethodInfo* method);
// 0x18187c0f0

void Gilzoide_FlexUi_FlexLayout__set_Configuration
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayoutConfig_o *value,
               MethodInfo *method)

{
  bool bVar1;
  Gilzoide_FlexUi_Yoga_YGConfig_Fields config;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  if (Il2CppMethodInitialized_184341c67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c67 = '\x01';
  }
  (__this->fields)._configuration = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._configuration,value);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)value,(MethodInfo *)0x0);
  if (bVar1) {
    local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    if (value == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      ThrowNullReferenceException();
    }
    config._configPtr = (intptr_t)Gilzoide_FlexUi_FlexLayoutConfig__get_Config(value,(MethodInfo *)0x0);
  }
  else {
    local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    config._configPtr = Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault((MethodInfo *)0x0);
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,(Gilzoide_FlexUi_Yoga_YGConfig_o)config._configPtr,
             (MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionType
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180585030

int32_t
Gilzoide_FlexUi_FlexLayout__get_PositionType(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._positionType;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionType
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187d730

void Gilzoide_FlexUi_FlexLayout__set_PositionType
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._positionType = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d70 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1f;
    local_28 = "FlexUi_NodeStyleSetPositionType";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d70 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d70)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc90

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d640

void Gilzoide_FlexUi_FlexLayout__set_PositionLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._positionLeft.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,0,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bcb0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d6e0

void Gilzoide_FlexUi_FlexLayout__set_PositionTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._positionTop.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,1,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bca0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d690

void Gilzoide_FlexUi_FlexLayout__set_PositionRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._positionRight.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,2,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc80

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d5f0

void Gilzoide_FlexUi_FlexLayout__set_PositionBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._positionBottom.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,3,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Direction
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a610

int32_t
Gilzoide_FlexUi_FlexLayout__get_Direction(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields).m_RolloverSize;
}


// Gilzoide.FlexUi.FlexLayout$$set_Direction
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187c1b0

void Gilzoide_FlexUi_FlexLayout__set_Direction
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._direction = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d40 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1c;
    local_28 = "FlexUi_NodeStyleSetDirection";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d40 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d40)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexDirection
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a540

int32_t
Gilzoide_FlexUi_FlexLayout__get_FlexDirection(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._flexGrow;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexDirection
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187c460

void Gilzoide_FlexUi_FlexLayout__set_FlexDirection
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._flexDirection = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d48 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x20;
    local_28 = "FlexUi_NodeStyleSetFlexDirection";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d48 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d48)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexWrap
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180b57820

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexWrap;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexWrap
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187c670

void Gilzoide_FlexUi_FlexLayout__set_FlexWrap
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._flexWrap = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d78 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1b;
    local_28 = "FlexUi_NodeStyleSetFlexWrap";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d78 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d78)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexBasis
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a570

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_FlexBasis(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexBasis
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187c260
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187c36a: movss xmm1, dword ptr [rbp + 0x18]
// asm:   0x18187c36f: jmp 0x18187c439
// asm:   0x18187c3cf: movss xmm1, dword ptr [rbp + 0x18]
// asm:   0x18187c3d4: jmp 0x18187c439

void Gilzoide_FlexUi_FlexLayout__set_FlexBasis
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._flexBasis.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341d90 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x1c;
      local_28 = "FlexUi_NodeStyleSetFlexBasis";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0xc;
      local_c = 0;
      g_data_184341d90 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341d90;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341d90;
      if (g_data_184341d90 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x1c;
        local_28 = "FlexUi_NodeStyleSetFlexBasis";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0xc;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341d90 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341da0 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x20;
            local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 8;
            local_c = 0;
            g_data_184341da0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341da0)(GVar1.fields._nodePtr);
        }
        goto label_18187c43e;
      }
      pcVar2 = g_data_184341d98;
      if (g_data_184341d98 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x23;
        local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0xc;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341d98 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,local_res10);
label_18187c43e:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexGrow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a700

float
Gilzoide_FlexUi_FlexLayout__get_FlexGrow(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._flexGrow;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexGrow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x18187c510

void Gilzoide_FlexUi_FlexLayout__set_FlexGrow
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  (__this->fields)._flexGrow = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d80 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1b;
    local_38 = "FlexUi_NodeStyleSetFlexGrow";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341d80 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341d80)(GVar1.fields._nodePtr,value);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexShrink
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180cde8a0

float Gilzoide_FlexUi_FlexLayout__get_FlexShrink(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexShrink;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexShrink
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x18187c5c0

void Gilzoide_FlexUi_FlexLayout__set_FlexShrink
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  (__this->fields)._flexShrink = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d88 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1d;
    local_38 = "FlexUi_NodeStyleSetFlexShrink";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341d88 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341d88)(GVar1.fields._nodePtr,value);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_JustifyContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180a4d530

int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._justifyContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_JustifyContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187ca90

void Gilzoide_FlexUi_FlexLayout__set_JustifyContent
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._justifyContent = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d50 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x21;
    local_28 = "FlexUi_NodeStyleSetJustifyContent";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d50 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d50)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignItems
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180acb500

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignItems;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignItems
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187bee0

void Gilzoide_FlexUi_FlexLayout__set_AlignItems
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._alignItems = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d60 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1d;
    local_28 = "FlexUi_NodeStyleSetAlignItems";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d60 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d60)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignSelf
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a560

int32_t
Gilzoide_FlexUi_FlexLayout__get_AlignSelf(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._alignSelf;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignSelf
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187bf90

void Gilzoide_FlexUi_FlexLayout__set_AlignSelf
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._alignSelf = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d68 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1c;
    local_28 = "FlexUi_NodeStyleSetAlignSelf";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d68 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d68)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187ba40

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x18187be30

void Gilzoide_FlexUi_FlexLayout__set_AlignContent
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._alignContent = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341d58 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1f;
    local_28 = "FlexUi_NodeStyleSetAlignContent";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d58 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d58)(GVar1.fields._nodePtr);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Width
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Width (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180cdb5a0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Width(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._width.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Width
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Width (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d7e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187d8ea: movss xmm1, dword ptr [rbp + 0x18]
// asm:   0x18187d8ef: jmp 0x18187d9b9
// asm:   0x18187d94f: movss xmm1, dword ptr [rbp + 0x18]
// asm:   0x18187d954: jmp 0x18187d9b9

void Gilzoide_FlexUi_FlexLayout__set_Width
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._width.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341de8 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x18;
      local_28 = "FlexUi_NodeStyleSetWidth";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0xc;
      local_c = 0;
      g_data_184341de8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341de8;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341de8;
      if (g_data_184341de8 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x18;
        local_28 = "FlexUi_NodeStyleSetWidth";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0xc;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341de8 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341df8 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x1c;
            local_28 = "FlexUi_NodeStyleSetWidthAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 8;
            local_c = 0;
            g_data_184341df8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341df8)(GVar1.fields._nodePtr);
        }
        goto label_18187d9be;
      }
      pcVar2 = g_data_184341df0;
      if (g_data_184341df0 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x1f;
        local_28 = "FlexUi_NodeStyleSetWidthPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0xc;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341df0 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,local_res10);
label_18187d9be:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Height
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Height (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a5d0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Height(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._height;
}


// Gilzoide.FlexUi.FlexLayout$$set_Height
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Height (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187c890
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187c99d: movss xmm1, dword ptr [rbp + 0x18]
// asm:   0x18187c9a2: jmp 0x18187ca6c
// asm:   0x18187ca02: movss xmm1, dword ptr [rbp + 0x18]
// asm:   0x18187ca07: jmp 0x18187ca6c

void Gilzoide_FlexUi_FlexLayout__set_Height
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._height.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341e00 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x19;
      local_28 = "FlexUi_NodeStyleSetHeight";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0xc;
      local_c = 0;
      g_data_184341e00 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341e00;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341e00;
      if (g_data_184341e00 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x19;
        local_28 = "FlexUi_NodeStyleSetHeight";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0xc;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341e00 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341e10 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x1d;
            local_28 = "FlexUi_NodeStyleSetHeightAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 8;
            local_c = 0;
            g_data_184341e10 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341e10)(GVar1.fields._nodePtr);
        }
        goto label_18187ca71;
      }
      pcVar2 = g_data_184341e08;
      if (g_data_184341e08 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x20;
        local_28 = "FlexUi_NodeStyleSetHeightPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0xc;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341e08 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,local_res10);
label_18187ca71:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180b5b9c0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d460

void Gilzoide_FlexUi_FlexLayout__set_MinWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._minWidth.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180a4d3d0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d410

void Gilzoide_FlexUi_FlexLayout__set_MinHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._minHeight.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a580

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxWidth(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._aspectRatio;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d3c0

void Gilzoide_FlexUi_FlexLayout__set_MaxWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._maxWidth.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc20

UnityEngine_UIElements_Binding_o *
Gilzoide_FlexUi_FlexLayout__get_MaxHeight(UnityEngine_UIElements_BindingInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._binding_k__BackingField;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d370

void Gilzoide_FlexUi_FlexLayout__set_MaxHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._maxHeight.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AspectRatio
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18058a890

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_AspectRatio(Gilzoide_FlexUi_FlexLayout_o* __this, MethodInfo* method)

{
  return (__this->fields)._aspectRatio;
}


// Gilzoide.FlexUi.FlexLayout$$set_AspectRatio
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187c040

void Gilzoide_FlexUi_FlexLayout__set_AspectRatio
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  float local_res10;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._aspectRatio.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341e58 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1e;
    local_28 = "FlexUi_NodeStyleSetAspectRatio";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341e58 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  local_res10 = value.fields.Value;
  (*g_data_184341e58)(GVar1.fields._nodePtr,local_res10);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181537220

Unity_Properties_IProperty_TContainer__o *
Gilzoide_FlexUi_FlexLayout__get_MarginLeft
          (Unity_Properties_PropertyCollection_Enumerator_TContainer__o *__this,MethodInfo_1537220 *method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[2].fields.m_Properties.fields._list;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187cd50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187ce5f: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187ce64: jmp 0x18187cf2e
// asm:   0x18187cec4: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187cec9: jmp 0x18187cf2e

void Gilzoide_FlexUi_FlexLayout__set_MarginLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._marginLeft.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x19;
      local_28 = "FlexUi_NodeStyleSetMargin";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341db8;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x19;
        local_28 = "FlexUi_NodeStyleSetMargin";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341db8 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341dc8 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x1d;
            local_28 = "FlexUi_NodeStyleSetMarginAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 0xc;
            local_c = 0;
            g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341dc8)(GVar1.fields._nodePtr);
        }
        goto label_18187cf35;
      }
      pcVar2 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x20;
        local_28 = "FlexUi_NodeStyleSetMarginPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341dc0 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,0,local_res10);
label_18187cf35:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc10

UnityEngine_Camera_o *
Gilzoide_FlexUi_FlexLayout__get_MarginTop
          (UnityEngine_Rendering_RendererUtils_RendererListDesc_o *__this,MethodInfo *method)

{
  return (__this->fields)._camera_k__BackingField;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d160
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187d272: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187d277: jmp 0x18187d341
// asm:   0x18187d2d7: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187d2dc: jmp 0x18187d341

void Gilzoide_FlexUi_FlexLayout__set_MarginTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._marginTop.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x19;
      local_28 = "FlexUi_NodeStyleSetMargin";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341db8;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x19;
        local_28 = "FlexUi_NodeStyleSetMargin";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341db8 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341dc8 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x1d;
            local_28 = "FlexUi_NodeStyleSetMarginAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 0xc;
            local_c = 0;
            g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341dc8)(GVar1.fields._nodePtr);
        }
        goto label_18187d34b;
      }
      pcVar2 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x20;
        local_28 = "FlexUi_NodeStyleSetMarginPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341dc0 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,1,local_res10);
label_18187d34b:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x180c8ff80

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187cf50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187d062: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187d067: jmp 0x18187d131
// asm:   0x18187d0c7: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187d0cc: jmp 0x18187d131

void Gilzoide_FlexUi_FlexLayout__set_MarginRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._marginRight.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x19;
      local_28 = "FlexUi_NodeStyleSetMargin";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341db8;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x19;
        local_28 = "FlexUi_NodeStyleSetMargin";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341db8 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341dc8 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x1d;
            local_28 = "FlexUi_NodeStyleSetMarginAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 0xc;
            local_c = 0;
            g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341dc8)(GVar1.fields._nodePtr);
        }
        goto label_18187d13b;
      }
      pcVar2 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x20;
        local_28 = "FlexUi_NodeStyleSetMarginPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341dc0 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,2,local_res10);
label_18187d13b:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc00

UnityEngine_Rendering_ShaderTagId_array *
Gilzoide_FlexUi_FlexLayout__get_MarginBottom
          (UnityEngine_Rendering_RendererUtils_RendererListDesc_o *__this,MethodInfo *method)

{
  return (__this->fields)._passNames_k__BackingField;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187cb40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187cc52: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187cc57: jmp 0x18187cd21
// asm:   0x18187ccb7: movss xmm2, dword ptr [rbp + 0x18]
// asm:   0x18187ccbc: jmp 0x18187cd21

void Gilzoide_FlexUi_FlexLayout__set_MarginBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  code *pcVar2;
  float local_res10;
  int iStackX_14;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._marginBottom.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  iStackX_14 = value.fields.Unit;
  if (iStackX_14 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x19;
      local_28 = "FlexUi_NodeStyleSetMargin";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    local_res10 = NAN;
    pcVar2 = g_data_184341db8;
  }
  else {
    local_res10 = value.fields.Value;
    if (iStackX_14 == 1) {
      pcVar2 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x19;
        local_28 = "FlexUi_NodeStyleSetMargin";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341db8 = pcVar2;
      }
    }
    else {
      if (iStackX_14 != 2) {
        if (iStackX_14 == 3) {
          if (g_data_184341dc8 == (code *)0x0) {
            local_30 = 7;
            local_38 = L"flex-ui";
            local_20 = 0x1d;
            local_28 = "FlexUi_NodeStyleSetMarginAuto";
            local_18 = 0;
            local_14 = 2;
            local_10 = 0xc;
            local_c = 0;
            g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
          }
          (*g_data_184341dc8)(GVar1.fields._nodePtr);
        }
        goto label_18187cd2b;
      }
      pcVar2 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_30 = 7;
        local_38 = L"flex-ui";
        local_20 = 0x20;
        local_28 = "FlexUi_NodeStyleSetMarginPercent";
        local_18 = 0;
        local_14 = 2;
        local_10 = 0x10;
        local_c = 0;
        pcVar2 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        g_data_184341dc0 = pcVar2;
      }
    }
  }
  (*pcVar2)(GVar1.fields._nodePtr,3,local_res10);
label_18187cd2b:
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc40

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d500

void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._paddingLeft.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,0,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc60

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d5a0

void Gilzoide_FlexUi_FlexLayout__set_PaddingTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._paddingTop.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,1,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc50

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d550

void Gilzoide_FlexUi_FlexLayout__set_PaddingRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._paddingRight.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,2,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bc30

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187d4b0

void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  
  (__this->fields)._paddingBottom.fields = value.fields;
  local_res8._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,3,value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapColumn
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187ba50

float Gilzoide_FlexUi_FlexLayout__get_GapColumn(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapColumn;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapColumn
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x18187c720

void Gilzoide_FlexUi_FlexLayout__set_GapColumn
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  (__this->fields)._gapColumn = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341de0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x16;
    local_38 = "FlexUi_NodeStyleSetGap";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341de0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341de0)(GVar1.fields._nodePtr,0,value);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapRow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187ba60

float Gilzoide_FlexUi_FlexLayout__get_GapRow(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapRow;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapRow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x18187c7d0

void Gilzoide_FlexUi_FlexLayout__set_GapRow
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  (__this->fields)._gapRow = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  if (g_data_184341de0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x16;
    local_38 = "FlexUi_NodeStyleSetGap";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341de0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341de0)(GVar1.fields._nodePtr,1,value);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_LayoutNode
// il2cpp: Gilzoide_FlexUi_Yoga_YGNode_o Gilzoide_FlexUi_FlexLayout__get_LayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187bad0

Gilzoide_FlexUi_Yoga_YGNode_o
Gilzoide_FlexUi_FlexLayout__get_LayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *value;
  intptr_t measureFunc;
  Il2CppObject *local_res8 [4];
  
  if ((__this->fields)._layoutNode.fields._nodePtr != 0) {
    return (Gilzoide_FlexUi_Yoga_YGNode_o)
           (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._layoutNode.fields._nodePtr;
  }
  Gilzoide_FlexUi_Yoga_YGNode__Instantiate(&(__this->fields)._layoutNode,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184341c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_ILayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_SetContext_RectTransform);
    Il2CppMethodInitialized_184341c6c = '\x01';
  }
  local_res8[0] = (Il2CppObject *)0x0;
  iVar2 = Gilzoide_FlexUi_Yoga_YGNode__GetChildCount(&(__this->fields)._layoutNode,(MethodInfo *)0x0);
  if (iVar2 == 0) {
    bVar1 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)__this,local_res8,
                       (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_ILayoutElement);
    if (bVar1) {
      value = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,(MethodInfo *)0x0);
      Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
                (&(__this->fields)._layoutNode,(Il2CppObject *)value,
                 (MethodInfo_875190 *)MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_SetContext_RectTransform);
      if ((TypeInfo_Gilzoide_FlexUi_FlexLayout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_FlexLayout);
      }
      measureFunc = TypeInfo_Gilzoide_FlexUi_FlexLayout->static_fields->RectTransformMeasureFuncPtr;
      goto label_18187bbba;
    }
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext
            (&(__this->fields)._layoutNode,(System_Runtime_InteropServices_GCHandle_o)0x0,(MethodInfo *)0x0);
  measureFunc = 0;
label_18187bbba:
  Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc
            ((__this->fields)._layoutNode.fields._nodePtr,measureFunc,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return (Gilzoide_FlexUi_Yoga_YGNode_o)
         (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._layoutNode.fields._nodePtr;
}


// Gilzoide.FlexUi.FlexLayout$$OnEnable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnEnable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879260

void Gilzoide_FlexUi_FlexLayout__OnEnable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshChildren(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnDisable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDisable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879230

void Gilzoide_FlexUi_FlexLayout__OnDisable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__ClearParent(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnDestroy
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDestroy (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x1818791f0

void Gilzoide_FlexUi_FlexLayout__OnDestroy(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields)._layoutNode.fields._nodePtr != 0) {
    Gilzoide_FlexUi_Yoga_YGNode__Free(&(__this->fields)._layoutNode,(MethodInfo *)0x0);
    (__this->fields)._layoutNode.fields._nodePtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnTransformParentChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnTransformParentChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x1818794c0

void Gilzoide_FlexUi_FlexLayout__OnTransformParentChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (bVar1) {
    Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnTransformChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879480

void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (bVar1) {
    Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__RefreshChildren(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnRectTransformDimensionsChange
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879290
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181879466: mov rsi, qword ptr [rsp + 0x68]
// asm:   0x18187946b: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181879470: mov r15, qword ptr [rsp + 0x70]

void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  char cVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar3;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (bVar1) {
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    if (g_data_184341d08 == (code *)0x0) {
      local_38 = L"flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_NodeHasMeasureFunc";
      local_20 = 0x19;
      local_18 = 0;
      local_14 = 2;
      local_10 = 8;
      local_c = 0;
      g_data_184341d08 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    cVar2 = (*g_data_184341d08)(GVar3.fields._nodePtr);
    if (cVar2 == '\0') {
      if (Il2CppMethodInitialized_184341c65 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184341c65 = '\x01';
      }
      x = (__this->fields)._parentNode;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar1) && ((__this->fields)._isRefreshScheduled == false)) {
        Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,(MethodInfo *)0x0);
      }
    }
    else {
      GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
      if (g_data_184341d08 == (code *)0x0) {
        local_38 = L"flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeHasMeasureFunc";
        local_20 = 0x19;
        local_18 = 0;
        local_14 = 2;
        local_10 = 8;
        local_c = 0;
        g_data_184341d08 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
      }
      cVar2 = (*g_data_184341d08)(GVar3.fields._nodePtr);
      if (cVar2 != '\0') {
        if (g_data_184341d10 == (code *)0x0) {
          local_38 = L"flex-ui";
          local_28 = "FlexUi_NodeSetDirty";
          local_30 = 7;
          local_20 = 0x13;
          local_18 = 0;
          local_14 = 2;
          local_10 = 8;
          local_c = 0;
          g_data_184341d10 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
        }
        (*g_data_184341d10)(GVar3.fields._nodePtr);
      }
      Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187a0f0

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *pSVar1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_68;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_48;
  
  if (Il2CppMethodInitialized_184341c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_184341c68 = '\x01';
  }
  local_48.__1__state = 0;
  local_48._pad_8[0] = '\0';
  local_48._pad_8[1] = '\0';
  local_48._pad_8[2] = '\0';
  local_48._pad_8[3] = '\0';
  local_48.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  local_48.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_48.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_48.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_48.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_48._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_48._tail[0] = '\0';
  local_48._tail[1] = '\0';
  local_48._tail[2] = '\0';
  local_48._tail[3] = '\0';
  local_48._tail[4] = '\0';
  local_48._tail[5] = '\0';
  local_48._tail[6] = '\0';
  local_48._63_1_ = 0;
  pSVar1 = System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_68,(MethodInfo *)0x0);
  local_48.__t__builder.fields.m_synchronizationContext = (pSVar1->fields).m_synchronizationContext;
  local_48.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (pSVar1->fields).m_coreState.fields.m_stateMachine;
  local_48.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       (pSVar1->fields).m_coreState.fields.m_defaultContextAction;
  local_48.__t__builder.fields.m_task = (pSVar1->fields).m_task;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_48.__4__this,__this);
  local_48.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_48.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_48,
             (MethodInfo_621630 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayoutImmediate
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187a060
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187a0d2: jmp 0x18187a075

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  
  for (; __this != (Gilzoide_FlexUi_FlexLayout_o *)0x0; __this = (__this->fields)._parentNode) {
    if (Il2CppMethodInitialized_184341c65 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341c65 = '\x01';
    }
    x = (__this->fields)._parentNode;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) break;
    if (bVar1) {
      Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$Compare
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__Compare (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* x, Gilzoide_FlexUi_FlexLayout_o* y, const MethodInfo* method);
// 0x1818790d0

int32_t Gilzoide_FlexUi_FlexLayout__Compare
                  (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *x,
                  Gilzoide_FlexUi_FlexLayout_o *y,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184341c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c69 = '\x01';
  }
  local_res10[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
  iVar2 = -1;
  if (bVar1) {
    if (x == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1818791bd;
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(x,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1818791bd;
    local_res10[0] =
         UnityEngine_Transform__GetSiblingIndex((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
  }
  else {
    local_res10[0] = -1;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (bVar1) {
    if (y != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(y,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        iVar2 = UnityEngine_Transform__GetSiblingIndex((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
        goto label_18187919e;
      }
    }
label_1818791bd:
    ThrowNullReferenceException();
  }
label_18187919e:
  iVar2 = System_Int32__CompareTo_1b28ec0(local_res10,iVar2,(MethodInfo *)0x0);
  return iVar2;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879ac0
// eh: try 0x181879e63..0x181879edc -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181879e9c: mov rdx, qword ptr [rip + 0x2805685]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose
// asm:   0x181879ea3: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181879ea8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181879ead: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181879eb2: test rcx, rcx
// asm:   0x181879eb5: jne 0x181879edc
// asm:   0x181879edc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gilzoide_FlexUi_FlexLayout__RefreshLayout(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  bool bVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o *pUVar5;
  float fVar6;
  float fVar7;
  undefined1 local_90 [8];
  undefined8 uStack_88;
  Gilzoide_FlexUi_FlexLayout_o *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  System_Collections_Generic_List_Enumerator_object__o local_60 [2];
  
  if (Il2CppMethodInitialized_184341c6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341c6a = '\x01';
  }
  local_60[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60[0].fields._index = 0;
  local_60[0].fields._version = 0;
  local_60[0].fields._current = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_184341c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c65 = '\x01';
  }
  x = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_181879ee2;
    pUVar5 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_90,pUVar4,(MethodInfo *)0x0);
    fVar6 = (pUVar5->fields).m_Width;
    fVar7 = (pUVar5->fields).m_Height;
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    iVar1 = (__this->fields)._direction;
    if (g_data_184341cc0 == (code *)0x0) {
      local_90 = (undefined1  [8])0x183358eb0;
      uStack_88._0_4_ = 7;
      uStack_88._4_4_ = 0;
      local_80 = (Gilzoide_FlexUi_FlexLayout_o *)0x183358f80;
      local_78 = 0x1a;
      local_70 = 0;
      local_6c = 2;
      local_68 = 0x14;
      local_64 = 0;
      g_data_184341cc0 = (code *)il2cpp_runtime_helper_18046cbe0(local_90);
    }
    (*g_data_184341cc0)(GVar3.fields._nodePtr,fVar6,fVar7,iVar1);
  }
  else {
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,(MethodInfo *)0x0);
    if (g_data_184341d28 == (code *)0x0) {
      local_90 = (undefined1  [8])0x183358eb0;
      uStack_88._0_4_ = 7;
      uStack_88._4_4_ = 0;
      local_80 = (Gilzoide_FlexUi_FlexLayout_o *)0x1833590d0;
      local_78 = 0x17;
      local_70 = 0;
      local_6c = 2;
      local_68 = 8;
      local_64 = 0;
      g_data_184341d28 = (code *)il2cpp_runtime_helper_18046cbe0(local_90);
    }
    fVar6 = (float)(*g_data_184341d28)(GVar3.fields._nodePtr);
    if (g_data_184341d38 == (code *)0x0) {
      local_90 = (undefined1  [8])0x183358eb0;
      uStack_88._0_4_ = 7;
      uStack_88._4_4_ = 0;
      local_80 = (Gilzoide_FlexUi_FlexLayout_o *)0x183359108;
      local_78 = 0x1a;
      local_70 = 0;
      local_6c = 2;
      local_68 = 8;
      local_64 = 0;
      g_data_184341d38 = (code *)il2cpp_runtime_helper_18046cbe0(local_90);
    }
    fVar7 = (float)(*g_data_184341d38)(GVar3.fields._nodePtr);
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_181879ee2;
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(pUVar4,2,fVar6,fVar7,(MethodInfo *)0x0);
    if (g_data_184341d20 == (code *)0x0) {
      local_90 = (undefined1  [8])0x183358eb0;
      uStack_88._0_4_ = 7;
      uStack_88._4_4_ = 0;
      local_80 = (Gilzoide_FlexUi_FlexLayout_o *)0x1833590b0;
      local_78 = 0x18;
      local_70 = 0;
      local_6c = 2;
      local_68 = 8;
      local_64 = 0;
      g_data_184341d20 = (code *)il2cpp_runtime_helper_18046cbe0(local_90);
    }
    fVar6 = (float)(*g_data_184341d20)(GVar3.fields._nodePtr);
    if (g_data_184341d30 == (code *)0x0) {
      local_90 = (undefined1  [8])0x183358eb0;
      uStack_88._0_4_ = 7;
      uStack_88._4_4_ = 0;
      local_80 = (Gilzoide_FlexUi_FlexLayout_o *)0x1833590e8;
      local_78 = 0x19;
      local_70 = 0;
      local_6c = 2;
      local_68 = 8;
      local_64 = 0;
      g_data_184341d30 = (code *)il2cpp_runtime_helper_18046cbe0(local_90);
    }
    fVar7 = (float)(*g_data_184341d30)(GVar3.fields._nodePtr);
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(pUVar4,0,fVar6,fVar7,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._childrenNodes;
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    local_60[0].fields._list = (System_Collections_Generic_List_T__o *)local_90;
    local_60[0].fields._index = (int32_t)uStack_88;
    local_60[0].fields._version = uStack_88._4_4_;
    local_60[0].fields._current = (Il2CppObject *)local_80;
    local_90 = (undefined1  [8])0x0;
    uStack_88 = local_60;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (local_60,(MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                   MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
        return;
      }
      if ((Gilzoide_FlexUi_FlexLayout_o *)local_60[0].fields._current == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
      break;
      Gilzoide_FlexUi_FlexLayout__RefreshLayout
                ((Gilzoide_FlexUi_FlexLayout_o *)local_60[0].fields._current,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
label_181879ee2:
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeStyle
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187a4e0
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187a83e: movss xmm1, dword ptr [rbp + 0x77]
// asm:   0x18187a843: jmp 0x18187a8f4
// asm:   0x18187a899: movss xmm1, dword ptr [rbp + 0x77]
// asm:   0x18187a89e: jmp 0x18187a8f4
// asm:   0x18187abf8: movss xmm1, dword ptr [rbp + 0x77]
// asm:   0x18187abfd: jmp 0x18187acae
// asm:   0x18187ac53: movss xmm1, dword ptr [rbp + 0x77]
// asm:   0x18187ac58: jmp 0x18187acae
// asm:   0x18187ad8d: movss xmm1, dword ptr [rbp + 0x77]
// asm:   0x18187ad92: jmp 0x18187ae43
// asm:   0x18187ade8: movss xmm1, dword ptr [rbp + 0x77]
// asm:   0x18187aded: jmp 0x18187ae43
// asm:   0x18187afd8: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187afdd: jmp 0x18187b080
// asm:   0x18187b02c: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b031: jmp 0x18187b080
// asm:   0x18187b158: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b15d: jmp 0x18187b200
// asm:   0x18187b1ac: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b1b1: jmp 0x18187b200
// asm:   0x18187b2db: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b2e0: jmp 0x18187b383
// asm:   0x18187b32f: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b334: jmp 0x18187b383
// asm:   0x18187b45e: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b463: jmp 0x18187b506
// asm:   0x18187b4b2: movss xmm2, dword ptr [rbp + 0x77]
// asm:   0x18187b4b7: jmp 0x18187b506

void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  int32_t iVar2;
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGVar3;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar4;
  bool bVar5;
  int iVar6;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar7;
  Gilzoide_FlexUi_Yoga_YGConfig_Fields config;
  code *pcVar8;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res8;
  float local_res18;
  wchar_t *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  
  if (Il2CppMethodInitialized_184341c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c6b = '\x01';
  }
  GVar7 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
  pGVar3 = (__this->fields)._configuration;
  local_res8 = GVar7.fields._nodePtr;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar3,(MethodInfo *)0x0);
  if (bVar5) {
    pGVar3 = (__this->fields)._configuration;
    if (pGVar3 == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      ThrowNullReferenceException();
    }
    config._configPtr = (intptr_t)Gilzoide_FlexUi_FlexLayoutConfig__get_Config(pGVar3,(MethodInfo *)0x0);
  }
  else {
    config._configPtr = Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault((MethodInfo *)0x0);
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,(Gilzoide_FlexUi_Yoga_YGConfig_o)config._configPtr,
             (MethodInfo *)0x0);
  if (g_data_184341d70 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetPositionType";
    local_80 = 7;
    local_70 = 0x1f;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d70 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d70)(GVar7.fields._nodePtr);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,0,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,1,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,2,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,3,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields,(MethodInfo *)0x0);
  iVar2 = (__this->fields)._direction;
  if (g_data_184341d40 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetDirection";
    local_80 = 7;
    local_70 = 0x1c;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d40 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d40)(GVar7.fields._nodePtr,iVar2);
  iVar2 = (__this->fields)._flexDirection;
  if (g_data_184341d48 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetFlexDirection";
    local_80 = 7;
    local_70 = 0x20;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d48 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d48)(GVar7.fields._nodePtr,iVar2);
  iVar2 = (__this->fields)._flexWrap;
  if (g_data_184341d78 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetFlexWrap";
    local_80 = 7;
    local_70 = 0x1b;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d78 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d78)(GVar7.fields._nodePtr,iVar2);
  GVar4 = (__this->fields)._flexBasis.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341d90 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_78 = "FlexUi_NodeStyleSetFlexBasis";
      local_80 = 7;
      local_70 = 0x1c;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0xc;
      local_5c = 0;
      g_data_184341d90 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341d90;
label_18187a8f4:
    (*pcVar8)(GVar7.fields._nodePtr,local_res18);
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341d90;
      if (g_data_184341d90 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetFlexBasis";
        local_80 = 7;
        local_70 = 0x1c;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341d90 = pcVar8;
      }
      goto label_18187a8f4;
    }
    if (iVar6 == 2) {
      pcVar8 = g_data_184341d98;
      if (g_data_184341d98 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetFlexBasisPercent";
        local_80 = 7;
        local_70 = 0x23;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341d98 = pcVar8;
      }
      goto label_18187a8f4;
    }
    if (iVar6 == 3) {
      if (g_data_184341da0 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetFlexBasisAuto";
        local_80 = 7;
        local_70 = 0x20;
        local_68 = 0;
        local_64 = 2;
        local_60 = 8;
        local_5c = 0;
        g_data_184341da0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
      }
      (*g_data_184341da0)(GVar7.fields._nodePtr);
    }
  }
  fVar1 = (__this->fields)._flexGrow;
  if (g_data_184341d80 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetFlexGrow";
    local_80 = 7;
    local_70 = 0x1b;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d80 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d80)(GVar7.fields._nodePtr,fVar1);
  fVar1 = (__this->fields)._flexShrink;
  if (g_data_184341d88 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetFlexShrink";
    local_80 = 7;
    local_70 = 0x1d;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d88 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d88)(GVar7.fields._nodePtr,fVar1);
  iVar2 = (__this->fields)._justifyContent;
  if (g_data_184341d50 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetJustifyContent";
    local_80 = 7;
    local_70 = 0x21;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d50 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d50)(GVar7.fields._nodePtr,iVar2);
  iVar2 = (__this->fields)._alignItems;
  if (g_data_184341d60 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetAlignItems";
    local_80 = 7;
    local_70 = 0x1d;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d60 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d60)(GVar7.fields._nodePtr,iVar2);
  iVar2 = (__this->fields)._alignSelf;
  if (g_data_184341d68 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetAlignSelf";
    local_80 = 7;
    local_70 = 0x1c;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d68 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d68)(GVar7.fields._nodePtr,iVar2);
  iVar2 = (__this->fields)._alignContent;
  if (g_data_184341d58 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetAlignContent";
    local_80 = 7;
    local_70 = 0x1f;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341d58 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341d58)(GVar7.fields._nodePtr,iVar2);
  GVar4 = (__this->fields)._width.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341de8 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_78 = "FlexUi_NodeStyleSetWidth";
      local_80 = 7;
      local_70 = 0x18;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0xc;
      local_5c = 0;
      g_data_184341de8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341de8;
label_18187acae:
    (*pcVar8)(GVar7.fields._nodePtr,local_res18);
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341de8;
      if (g_data_184341de8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetWidth";
        local_80 = 7;
        local_70 = 0x18;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341de8 = pcVar8;
      }
      goto label_18187acae;
    }
    if (iVar6 == 2) {
      pcVar8 = g_data_184341df0;
      if (g_data_184341df0 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetWidthPercent";
        local_80 = 7;
        local_70 = 0x1f;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341df0 = pcVar8;
      }
      goto label_18187acae;
    }
    if (iVar6 == 3) {
      if (g_data_184341df8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetWidthAuto";
        local_80 = 7;
        local_70 = 0x1c;
        local_68 = 0;
        local_64 = 2;
        local_60 = 8;
        local_5c = 0;
        g_data_184341df8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
      }
      (*g_data_184341df8)(GVar7.fields._nodePtr);
    }
  }
  GVar4 = (__this->fields)._height.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341e00 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_78 = "FlexUi_NodeStyleSetHeight";
      local_80 = 7;
      local_70 = 0x19;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0xc;
      local_5c = 0;
      g_data_184341e00 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341e00;
label_18187ae43:
    (*pcVar8)(GVar7.fields._nodePtr,local_res18);
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341e00;
      if (g_data_184341e00 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetHeight";
        local_80 = 7;
        local_70 = 0x19;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341e00 = pcVar8;
      }
      goto label_18187ae43;
    }
    if (iVar6 == 2) {
      pcVar8 = g_data_184341e08;
      if (g_data_184341e08 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetHeightPercent";
        local_80 = 7;
        local_70 = 0x20;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341e08 = pcVar8;
      }
      goto label_18187ae43;
    }
    if (iVar6 == 3) {
      if (g_data_184341e10 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_78 = "FlexUi_NodeStyleSetHeightAuto";
        local_80 = 7;
        local_70 = 0x1d;
        local_68 = 0;
        local_64 = 2;
        local_60 = 8;
        local_5c = 0;
        g_data_184341e10 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
      }
      (*g_data_184341e10)(GVar7.fields._nodePtr);
    }
  }
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxWidth.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxHeight.fields,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._aspectRatio.fields.Value;
  if (g_data_184341e58 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_78 = "FlexUi_NodeStyleSetAspectRatio";
    local_80 = 7;
    local_70 = 0x1e;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0xc;
    local_5c = 0;
    g_data_184341e58 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341e58)(GVar7.fields._nodePtr,fVar1);
  GVar4 = (__this->fields)._marginLeft.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_80 = 7;
      local_78 = "FlexUi_NodeStyleSetMargin";
      local_70 = 0x19;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0x10;
      local_5c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341db8;
label_18187b080:
    (*pcVar8)(GVar7.fields._nodePtr,0,local_res18);
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMargin";
        local_70 = 0x19;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341db8 = pcVar8;
      }
      goto label_18187b080;
    }
    if (iVar6 == 2) {
      pcVar8 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginPercent";
        local_70 = 0x20;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341dc0 = pcVar8;
      }
      goto label_18187b080;
    }
    if (iVar6 == 3) {
      if (g_data_184341dc8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginAuto";
        local_70 = 0x1d;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
      }
      (*g_data_184341dc8)(GVar7.fields._nodePtr);
    }
  }
  GVar4 = (__this->fields)._marginTop.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_80 = 7;
      local_78 = "FlexUi_NodeStyleSetMargin";
      local_70 = 0x19;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0x10;
      local_5c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341db8;
label_18187b200:
    (*pcVar8)(GVar7.fields._nodePtr,1,local_res18);
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMargin";
        local_70 = 0x19;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341db8 = pcVar8;
      }
      goto label_18187b200;
    }
    if (iVar6 == 2) {
      pcVar8 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginPercent";
        local_70 = 0x20;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341dc0 = pcVar8;
      }
      goto label_18187b200;
    }
    if (iVar6 == 3) {
      if (g_data_184341dc8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginAuto";
        local_70 = 0x1d;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
      }
      (*g_data_184341dc8)(GVar7.fields._nodePtr);
    }
  }
  GVar4 = (__this->fields)._marginRight.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_80 = 7;
      local_78 = "FlexUi_NodeStyleSetMargin";
      local_70 = 0x19;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0x10;
      local_5c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341db8;
label_18187b383:
    (*pcVar8)(GVar7.fields._nodePtr,2,local_res18);
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMargin";
        local_70 = 0x19;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341db8 = pcVar8;
      }
      goto label_18187b383;
    }
    if (iVar6 == 2) {
      pcVar8 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginPercent";
        local_70 = 0x20;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341dc0 = pcVar8;
      }
      goto label_18187b383;
    }
    if (iVar6 == 3) {
      if (g_data_184341dc8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginAuto";
        local_70 = 0x1d;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0xc;
        local_5c = 0;
        g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
      }
      (*g_data_184341dc8)(GVar7.fields._nodePtr);
    }
  }
  GVar4 = (__this->fields)._marginBottom.fields;
  iVar6 = GVar4.Unit;
  if (iVar6 == 0) {
    if (g_data_184341db8 == (code *)0x0) {
      local_88 = L"flex-ui";
      local_80 = 7;
      local_78 = "FlexUi_NodeStyleSetMargin";
      local_70 = 0x19;
      local_68 = 0;
      local_64 = 2;
      local_60 = 0x10;
      local_5c = 0;
      g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
    }
    local_res18 = NAN;
    pcVar8 = g_data_184341db8;
  }
  else {
    local_res18 = GVar4.Value;
    if (iVar6 == 1) {
      pcVar8 = g_data_184341db8;
      if (g_data_184341db8 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMargin";
        local_70 = 0x19;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341db8 = pcVar8;
      }
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          if (g_data_184341dc8 == (code *)0x0) {
            local_88 = L"flex-ui";
            local_80 = 7;
            local_78 = "FlexUi_NodeStyleSetMarginAuto";
            local_70 = 0x1d;
            local_68 = 0;
            local_64 = 2;
            local_60 = 0xc;
            local_5c = 0;
            g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
          }
          (*g_data_184341dc8)(GVar7.fields._nodePtr);
        }
        goto label_18187b510;
      }
      pcVar8 = g_data_184341dc0;
      if (g_data_184341dc0 == (code *)0x0) {
        local_88 = L"flex-ui";
        local_80 = 7;
        local_78 = "FlexUi_NodeStyleSetMarginPercent";
        local_70 = 0x20;
        local_68 = 0;
        local_64 = 2;
        local_60 = 0x10;
        local_5c = 0;
        pcVar8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
        g_data_184341dc0 = pcVar8;
      }
    }
  }
  (*pcVar8)(GVar7.fields._nodePtr,3,local_res18);
label_18187b510:
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,0,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,1,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,2,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res8,3,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._gapColumn;
  if (g_data_184341de0 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_80 = 7;
    local_78 = "FlexUi_NodeStyleSetGap";
    local_70 = 0x16;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0x10;
    local_5c = 0;
    g_data_184341de0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341de0)(GVar7.fields._nodePtr,0,fVar1);
  fVar1 = (__this->fields)._gapRow;
  if (g_data_184341de0 == (code *)0x0) {
    local_88 = L"flex-ui";
    local_80 = 7;
    local_78 = "FlexUi_NodeStyleSetGap";
    local_70 = 0x16;
    local_68 = 0;
    local_64 = 2;
    local_60 = 0x10;
    local_5c = 0;
    g_data_184341de0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_88);
  }
  (*g_data_184341de0)(GVar7.fields._nodePtr,1,fVar1);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeMeasure
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187a3f0

void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *value;
  intptr_t measureFunc;
  Il2CppObject *local_res8 [4];
  
  if (Il2CppMethodInitialized_184341c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_ILayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_SetContext_RectTransform);
    Il2CppMethodInitialized_184341c6c = '\x01';
  }
  local_res8[0] = (Il2CppObject *)0x0;
  iVar2 = Gilzoide_FlexUi_Yoga_YGNode__GetChildCount(&(__this->fields)._layoutNode,(MethodInfo *)0x0);
  if (iVar2 == 0) {
    bVar1 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)__this,local_res8,
                       (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_ILayoutElement);
    if (bVar1) {
      value = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,(MethodInfo *)0x0);
      Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
                (&(__this->fields)._layoutNode,(Il2CppObject *)value,
                 (MethodInfo_875190 *)MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_SetContext_RectTransform);
      if ((TypeInfo_Gilzoide_FlexUi_FlexLayout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_FlexLayout);
      }
      measureFunc = TypeInfo_Gilzoide_FlexUi_FlexLayout->static_fields->RectTransformMeasureFuncPtr;
      goto label_18187a4be;
    }
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext
            (&(__this->fields)._layoutNode,(System_Runtime_InteropServices_GCHandle_o)0x0,(MethodInfo *)0x0);
  measureFunc = 0;
label_18187a4be:
  Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc
            ((__this->fields)._layoutNode.fields._nodePtr,measureFunc,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879ef0

void Gilzoide_FlexUi_FlexLayout__RefreshParent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *y;
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *exists;
  Gilzoide_FlexUi_FlexLayout_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184341c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c6d = '\x01';
  }
  local_res18[0] = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    exists = UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if (bVar1) {
      if (exists == (UnityEngine_Transform_o *)0x0) goto label_18187a052;
      bVar1 = UnityEngine_Component__TryGetComponent_object_
                        ((UnityEngine_Component_o *)exists,(Il2CppObject **)local_res18,
                         (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
      if (bVar1) {
        if (local_res18[0] == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_18187a052;
        bVar1 = (*(local_res18[0]->klass->vtable)._9_IsActive.methodPtr)
                          (local_res18[0],(local_res18[0]->klass->vtable)._9_IsActive.method);
        x = local_res18[0];
        if (bVar1) {
          y = (__this->fields)._parentNode;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
          if (bVar1) {
            Gilzoide_FlexUi_FlexLayout__ClearParent(__this,(MethodInfo *)0x0);
            if (local_res18[0] == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_18187a052;
            Gilzoide_FlexUi_FlexLayout__TrackChild(local_res18[0],__this,true,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
    Gilzoide_FlexUi_FlexLayout__ClearParent(__this,(MethodInfo *)0x0);
    (__this->fields)._parentNode = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._parentNode,(void *)0x0);
    return;
  }
label_18187a052:
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$ClearParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181878cd0

void Gilzoide_FlexUi_FlexLayout__ClearParent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  bool bVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar3;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar4;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (Il2CppMethodInitialized_184341c6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c6e = '\x01';
  }
  pGVar1 = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pGVar1 = (__this->fields)._parentNode;
  if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    if (Il2CppMethodInitialized_184341c71 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_FlexLayout_Remove);
      Il2CppMethodInitialized_184341c71 = '\x01';
    }
    (__this->fields)._parentNode = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._parentNode,(void *)0x0);
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(pGVar1,(MethodInfo *)0x0);
    GVar4 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    if (g_data_184341cd0 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x16;
      local_28 = "FlexUi_NodeRemoveChild";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341cd0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    (*g_data_184341cd0)(GVar3.fields._nodePtr,GVar4.fields._nodePtr);
    __this_00 = (pGVar1->fields)._childrenNodes;
    if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_FlexLayout_Remove);
      Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(pGVar1,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(pGVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$RefreshChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x1818795d0
// eh: try 0x181879680..0x18187976a -> pad 0x183318f20 catch Il2CppExceptionWrapper
// eh: try 0x18187976a..0x1818797ec -> pad 0x18022ee70 cleanup
// eh: try 0x1818797ec..0x18187996b -> pad 0x183318f20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18187967e: nop 
// asm:   0x1818797a7: mov rdx, qword ptr [rip + 0x280b092]  ; TypeInfo_UnityEngine_Transform
// asm:   0x1818797ae: mov r8, qword ptr [rax]
// asm:   0x1818797b1: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1818797b8: cmp byte ptr [r8 + 0x130], al
// asm:   0x1818797bf: jb 0x181879958
// asm:   0x1818798fd: lea rcx, [rsp + 0x40]
// asm:   0x181879902: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x181879907: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18187990c: test rcx, rcx
// asm:   0x18187990f: jne 0x18187996b
// asm:   0x181879911: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x18187996b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gilzoide_FlexUi_FlexLayout__RefreshChildren(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_List_FlexLayout__o *pSVar5;
  Il2CppObject *pIVar6;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  bool bVar7;
  uint uVar8;
  UnityEngine_RectTransform_o *__this_01;
  VirtualInvokeData *pVVar9;
  UnityEngine_Component_o *__this_02;
  Gilzoide_FlexUi_Yoga_YGNode_o child;
  ushort uVar10;
  Il2CppObject *local_res18;
  Gilzoide_FlexUi_FlexLayout_o *local_res20;
  undefined8 local_48;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_40 [2];
  undefined8 local_30;
  Il2CppObject **local_28;
  undefined8 *local_20;
  ulonglong uVar11;
  
  if (Il2CppMethodInitialized_184341c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_184341c6f = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_48 = 0;
  __this_01 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res18 = (Il2CppObject *)
                UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
  local_30 = 0;
  local_28 = &local_res18;
  local_20 = &local_48;
  do {
    pIVar6 = local_res18;
    if (local_res18 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_res18->klass;
    uVar2 = (pIVar3->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      uVar11 = 0;
      do {
        if (pIVar4[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar3->vtable + pIVar4[uVar11].offset;
          goto label_1818796e6;
        }
        uVar10 = (short)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < uVar2);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1818796e6:
    bVar7 = (*pVVar9->methodPtr)(pIVar6,pVVar9->method);
    pIVar6 = local_res18;
    if (!bVar7) {
      il2cpp_runtime_helper_1818789e0(&local_28);
      Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
      return;
    }
    if (local_res18 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_res18->klass;
    uVar2 = (pIVar3->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      uVar11 = 0;
      do {
        if (pIVar4[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar3->vtable + (pIVar4[uVar11].offset + 1);
          goto label_181879755;
        }
        uVar10 = (short)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < uVar2);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181879755:
    __this_02 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(pIVar6,pVVar9->method);
    if (__this_02 == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
    if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_02);
    }
    bVar7 = UnityEngine_Component__TryGetComponent_object_
                      (__this_02,(Il2CppObject **)&local_res20,
                       (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    if (bVar7) {
      if (local_res20 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = (*(local_res20->klass->vtable)._9_IsActive.methodPtr)
                        (local_res20,(local_res20->klass->vtable)._9_IsActive.method);
      __this_00 = local_res20;
      if (bVar7) {
        if (Il2CppMethodInitialized_184341c70 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_FlexLayout_BinarySearch);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_FlexLayout_Insert);
          Il2CppMethodInitialized_184341c70 = '\x01';
        }
        if (__this_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          ThrowNullReferenceException();
        }
        (__this_00->fields)._parentNode = __this;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._parentNode,__this);
        pSVar5 = (__this->fields)._childrenNodes;
        if (pSVar5 == (System_Collections_Generic_List_FlexLayout__o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar8 = System_Collections_Generic_List_object___BinarySearch_93ea10
                          ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                           (System_Collections_Generic_IComparer_T__o *)__this,
                           (MethodInfo_93EA10 *)
                           MethodInfo_System_Collections_Generic_List_FlexLayout_BinarySearch);
        if ((int)uVar8 < 0) {
          pSVar5 = (__this->fields)._childrenNodes;
          if (pSVar5 == (System_Collections_Generic_List_FlexLayout__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)pSVar5,~uVar8,(Il2CppObject *)__this_00,
                     (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_FlexLayout_Insert);
          local_40[0]._nodePtr =
               (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
          child = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this_00,(MethodInfo *)0x0);
          Gilzoide_FlexUi_Yoga_YGNode__InsertChild
                    ((Gilzoide_FlexUi_Yoga_YGNode_o *)local_40,child,~uVar8,(MethodInfo *)0x0);
        }
      }
    }
  } while( true );
}


// Gilzoide.FlexUi.FlexLayout$$TrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__TrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x18187a1a0

void Gilzoide_FlexUi_FlexLayout__TrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *pSVar1;
  uint uVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o child_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res10;
  
  if (Il2CppMethodInitialized_184341c70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_BinarySearch);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_Insert);
    Il2CppMethodInitialized_184341c70 = '\x01';
  }
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = __this;
    Il2CppCodeGenWriteBarrier(&(child->fields)._parentNode,__this);
    pSVar1 = (__this->fields)._childrenNodes;
    if (pSVar1 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      uVar2 = System_Collections_Generic_List_object___BinarySearch_93ea10
                        ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)child,
                         (System_Collections_Generic_IComparer_T__o *)__this,
                         (MethodInfo_93EA10 *)
                         MethodInfo_System_Collections_Generic_List_FlexLayout_BinarySearch);
      if ((int)uVar2 < 0) {
        pSVar1 = (__this->fields)._childrenNodes;
        if (pSVar1 == (System_Collections_Generic_List_FlexLayout__o *)0x0) goto label_18187a2a6;
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)pSVar1,~uVar2,(Il2CppObject *)child,
                   (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_FlexLayout_Insert);
        local_res10._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
        child_00 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,(MethodInfo *)0x0);
        Gilzoide_FlexUi_Yoga_YGNode__InsertChild
                  ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res10,child_00,~uVar2,(MethodInfo *)0x0);
      }
      if (callChildrenChanged) {
        Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this,(MethodInfo *)0x0);
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_18187a2a6:
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$UntrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UntrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x18187a2b0

void Gilzoide_FlexUi_FlexLayout__UntrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (Il2CppMethodInitialized_184341c71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_Remove);
    Il2CppMethodInitialized_184341c71 = '\x01';
  }
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(child->fields)._parentNode,(void *)0x0);
    GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)0x0);
    GVar2 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,(MethodInfo *)0x0);
    if (g_data_184341cd0 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x16;
      local_28 = "FlexUi_NodeRemoveChild";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341cd0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    (*g_data_184341cd0)(GVar1.fields._nodePtr,GVar2.fields._nodePtr);
    __this_00 = (__this->fields)._childrenNodes;
    if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_FlexLayout_Remove);
      if (callChildrenChanged) {
        Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this,(MethodInfo *)0x0);
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$RefreshDrivenRectTransformTracker
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181879980
// eh: try 0x181879a33..0x181879ab4 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181879a89: mov rdx, qword ptr [rip + 0x2805a98]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose
// asm:   0x181879a90: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181879a95: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181879a9a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181879a9f: test rcx, rcx
// asm:   0x181879aa2: jne 0x181879ab4
// asm:   0x181879ab4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  bool bVar1;
  undefined1 local_60 [16];
  Gilzoide_FlexUi_FlexLayout_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184341c72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    Il2CppMethodInitialized_184341c72 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
             &(__this->fields)._drivenRectTransformTracker,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._childrenNodes;
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
        return;
      }
      if ((Gilzoide_FlexUi_FlexLayout_o *)local_48.fields._current == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
      break;
      Gilzoide_FlexUi_FlexLayout__get_RectTransform
                ((Gilzoide_FlexUi_FlexLayout_o *)local_48.fields._current,(MethodInfo *)0x0);
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                 &(__this->fields)._drivenRectTransformTracker,(MethodInfo *)__this);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$OnChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x1818791d0

void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$ClearTrackedChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x181878e50
// eh: try 0x181878f30..0x1818790c0 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181878f29: nop dword ptr [rax]
// asm:   0x181878fcf: mov rdx, qword ptr [rip + 0x2806552]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose
// asm:   0x181878fd6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181878fdb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181878fe0: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181878fe5: test rcx, rcx
// asm:   0x181878fe8: jne 0x1818790c0
// asm:   0x181878fee: xor r15d, r15d
// asm:   0x181878ff1: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1818790c0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_FlexLayout__o *pSVar2;
  UnityEngine_Object_o *x;
  intptr_t iVar3;
  UnityEngine_Object_o *exists;
  bool bVar4;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  UnityEngine_Object_o *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  UnityEngine_Object_o *local_20;
  
  if (Il2CppMethodInitialized_184341c73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341c73 = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (UnityEngine_Object_o *)0x0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
             &(__this->fields)._drivenRectTransformTracker,(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._childrenNodes;
  if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    local_30 = local_60;
    pUStack_28 = pUStack_58;
    local_20 = local_50;
    local_60 = (undefined1  [8])0x0;
    pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_30,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
      exists = local_20;
      if (!bVar4) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (bVar4) {
        if (exists == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        x = (UnityEngine_Object_o *)(*(uint64_t *)((char *)exists + 0x100));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if (bVar4) {
          (*(uint64_t *)((char *)exists + 0x100)) = 0;
          Il2CppCodeGenWriteBarrier((void **)&exists[10].fields,(void *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
               MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    pSVar2 = (__this->fields)._childrenNodes;
    if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((__this->fields)._layoutNode.fields._nodePtr != 0) {
        iVar3 = (__this->fields)._layoutNode.fields._nodePtr;
        if (g_data_184341cd8 == (code *)0x0) {
          local_60 = (undefined1  [8])0x183358eb0;
          pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x7;
          local_50 = (UnityEngine_Object_o *)0x183358fd0;
          local_48 = 0x1c;
          local_40 = 0;
          local_3c = 2;
          local_38 = 8;
          local_34 = 0;
          g_data_184341cd8 = (code *)il2cpp_runtime_helper_18046cbe0(local_60);
        }
        (*g_data_184341cd8)(iVar3);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$RectTransformMeasureFunc
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc (intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x181879500

UnityEngine_Vector2_o
Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc
          (intptr_t nodePtr,float width,int32_t widthMode,float height,int32_t heightMode,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *rect;
  float fVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o local_res8;
  
  if (Il2CppMethodInitialized_184341c74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_GetContext_RectTransform);
    Il2CppMethodInitialized_184341c74 = '\x01';
  }
  local_res8.fields._nodePtr = (Gilzoide_FlexUi_Yoga_YGNode_Fields)(Gilzoide_FlexUi_Yoga_YGNode_Fields)nodePtr
  ;
  rect = Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_
                   (&local_res8,
                    (MethodInfo_875030 *)MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_GetContext_RectTransform);
  if (widthMode == 0) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(rect,(MethodInfo *)0x0);
label_181879579:
    width = fVar2;
  }
  else if (widthMode == 2) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(rect,(MethodInfo *)0x0);
    if (fVar2 <= width) goto label_181879579;
  }
  if (heightMode == 0) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredHeight(rect,(MethodInfo *)0x0);
  }
  else {
    if (heightMode != 2) goto label_1818795a7;
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredHeight(rect,(MethodInfo *)0x0);
    if (height < fVar2) goto label_1818795a7;
  }
  height = fVar2;
label_1818795a7:
  UVar1.y = height;
  UVar1.x = width;
  return (UnityEngine_Vector2_o)UVar1;
}


// Gilzoide.FlexUi.FlexLayout$$.ctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___ctor (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x18187b7a0

void Gilzoide_FlexUi_FlexLayout___ctor(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  
  if (Il2CppMethodInitialized_184341c75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341c75 = '\x01';
  }
  (__this->fields)._positionType = 1;
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  (__this->fields)._positionLeft.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._positionTop.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._positionRight.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._positionBottom.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._flexDirection = 2;
  (__this->fields)._flexWrap = 1;
  (__this->fields)._flexBasis.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  (__this->fields)._flexShrink = 1.0;
  (__this->fields)._alignItems = 1;
  (__this->fields)._width.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  (__this->fields)._height.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  (__this->fields)._minWidth.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields
  ;
  (__this->fields)._minHeight.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._maxWidth.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields
  ;
  (__this->fields)._maxHeight.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._aspectRatio.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._marginLeft.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._marginTop.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._marginRight.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._marginBottom.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._paddingLeft.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._paddingTop.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._paddingRight.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields;
  (__this->fields)._paddingBottom.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields
  ;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FlexLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FlexLayout_ctor);
  (__this->fields)._childrenNodes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._childrenNodes,__this_00);
  UnityEngine_EventSystems_UIBehaviour___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$.cctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___cctor (const MethodInfo* method);
// 0x18187b670

void Gilzoide_FlexUi_FlexLayout___cctor(MethodInfo *method)

{
  uint8_t uVar1;
  MethodInfo *pMVar2;
  char cVar3;
  Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *d;
  code *pcVar4;
  intptr_t iVar5;
  Il2CppObject *ex;
  
  if (Il2CppMethodInitialized_184341c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Runtime_InteropServices_Marshal);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc);
    Il2CppMethodInitialized_184341c76 = '\x01';
  }
  d = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc);
  pMVar2 = MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc;
  (d->fields).method_ptr =
       (intptr_t)MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc->virtualMethodPointer;
  (d->fields).method = (intptr_t)pMVar2;
  (d->fields).m_target = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(d->fields).m_target,(void *)0x0);
  uVar1 = pMVar2->parameters_count;
  (d->fields).method_code = (intptr_t)d;
  cVar3 = il2cpp_runtime_helper_1804161b0();
  if (cVar3 != '\0') {
    if (uVar1 == '\x05') {
      pcVar4 = il2cpp_runtime_helper_18022ef50;
    }
    else {
      (d->fields).method_code = (intptr_t)(d->fields).m_target;
      pcVar4 = (code *)(d->fields).method_ptr;
    }
    (d->fields).invoke_impl = (intptr_t)pcVar4;
    (d->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_18022eea0;
    if ((TypeInfo_System_Runtime_InteropServices_Marshal->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Runtime_InteropServices_Marshal);
    }
    iVar5 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_
                      ((Il2CppObject *)d,
                       (MethodInfo_72C3A0 *)
                       MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
                      );
    TypeInfo_Gilzoide_FlexUi_FlexLayout->static_fields->RectTransformMeasureFuncPtr = iVar5;
    return;
  }
  ex = il2cpp_codegen_get_argument_exception
                 ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
  il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
}


