// Type: Map.OrderedTransferReceiver
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/OrderedTransferReceiver.cs
// Prior real C# source: none
// --------------------------------

// Map.OrderedTransferReceiver$$.ctor
// il2cpp: void Map_OrderedTransferReceiver___ctor (Map_OrderedTransferReceiver_o* __this, int64_t maxTransferBytes, const MethodInfo* method);
// 0x596c470

void Map_OrderedTransferReceiver___ctor
               (Map_OrderedTransferReceiver_o *__this,int64_t maxTransferBytes,MethodInfo *method)

{
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  int64_t iVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_0754598c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array);
    Il2CppMethodInitialized_0754598c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array);
  System_Collections_Generic_SortedDictionary_int__object____ctor
            ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_40555F0 *)
             MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ctor);
  (__this->fields)._pending = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (maxTransferBytes - 1U >> 0x1f != 0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
    paramName = il2cpp_codegen_get_runtime_metadata(&"maxTransferBytes");
    System_ArgumentOutOfRangeException___ctor_5419ca0(__this_01,paramName,(MethodInfo *)0x0);
    lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_OrderedTransferReceiver_ctor);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  (__this->fields)._maxTransferBytes = maxTransferBytes;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_54baec0
                    (0x7fffffff,(ulong)((int)((maxTransferBytes & 0xffffffffU) / 10000) + 2),(MethodInfo *)0x0
                    );
  (__this->fields)._maxTransferMessages = (int32_t)iVar1;
  return;
}


// Map.OrderedTransferReceiver$$TryReceive
// il2cpp: bool Map_OrderedTransferReceiver__TryReceive (Map_OrderedTransferReceiver_o* __this, System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, System_Func_byte______int__int__bool__o* validator, System_Action_byte______int__o* processor, System_Action_o* resetState, const MethodInfo* method);
// 0x596c040
// eh: try 0x596c0b6..0x596c233 -> pad 0x596c245 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x596c261..0x596c2b5 -> pad 0x596c2b5 (+1 call sites) cleanup
// eh: try 0x596c2b8..0x596c2bd -> pad 0x596c2c5 catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596c155: nop word ptr cs:[rax + rax]
// asm:   0x596c190: mov rdi, r12
// asm:   0x596c193: mov rsi, rbp
// asm:   0x596c196: call 0x596c7b0  ; Map_OrderedTransferReceiver__Fail()
// asm:   0x596c19b: jmp 0x596c0ec
// asm:   0x596c20a: mov rdi, r12
// asm:   0x596c20d: call 0x596c3a0  ; Map_OrderedTransferReceiver__Reset()
// asm:   0x596c212: jmp 0x596c0ef
// asm:   0x596c233: jmp 0x596c24e
// asm:   0x596c235: jmp 0x596c24e
// asm:   0x596c237: jmp 0x596c24e
// asm:   0x596c239: jmp 0x596c24e
// asm:   0x596c23b: jmp 0x596c24e
// asm:   0x596c23d: jmp 0x596c24b
// asm:   0x596c23f: jmp 0x596c24e
// asm:   0x596c241: jmp 0x596c24e
// asm:   0x596c243: jmp 0x596c24e
// asm:   0x596c245: jmp 0x596c24b
// asm:   0x596c247: jmp 0x596c24e
// asm:   0x596c249: jmp 0x596c24e
// asm:   0x596c24b: mov rbp, r13
// asm:   0x596c24e: mov rbx, rax
// asm:   0x596c251: cmp edx, 1
// asm:   0x596c254: jne 0x596c2bd
// asm:   0x596c256: mov rdi, rbx
// asm:   0x596c259: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x596c25e: mov rbx, rax
// asm:   0x596c261: lea rdi, [rip + 0x190be58]  ; TypeInfo_System_Exception
// asm:   0x596c268: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x596c26d: mov rcx, qword ptr [rbx]
// asm:   0x596c270: mov rsi, qword ptr [rcx]
// asm:   0x596c273: mov rdi, rax
// asm:   0x596c276: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x596c27b: test al, al
// asm:   0x596c27d: je 0x596c294
// asm:   0x596c27f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596c284: mov rdi, r12
// asm:   0x596c287: mov rsi, rbp
// asm:   0x596c28a: call 0x596c7b0  ; Map_OrderedTransferReceiver__Fail()
// asm:   0x596c28f: jmp 0x596c0ec
// asm:   0x596c294: mov edi, 8
// asm:   0x596c299: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x596c29e: mov rcx, qword ptr [rbx]
// asm:   0x596c2a1: mov qword ptr [rax], rcx
// asm:   0x596c2a4: lea rsi, [rip + 0x14c1255]
// asm:   0x596c2ab: mov rdi, rax
// asm:   0x596c2ae: xor edx, edx
// asm:   0x596c2b0: call 0x6e255c0  ; __cxa_throw()
// asm:   0x596c2b5: mov rbx, rax
// asm:   0x596c2b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596c2bd: mov rdi, rbx
// asm:   0x596c2c0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x596c2c5: mov rdi, rax
// asm:   0x596c2c8: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_OrderedTransferReceiver__TryReceive
               (Map_OrderedTransferReceiver_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               int32_t messageTotal,System_Func_byte______int__int__bool__o *validator,
               System_Action_byte______int__o *processor,System_Action_o *resetState,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_SortedDictionary_int__byte______o *pSVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined4 in_register_00000014;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *pMVar9;
  MethodInfo *method_01;
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000014,messageIndex);
  if (Il2CppMethodInitialized_0754598d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ContainsKey);
    Il2CppMethodInitialized_0754598d = '\x01';
    pMVar9 = extraout_RDX;
  }
  if ((((message != (System_Byte_array_array *)0x0) && (1 < messageTotal)) && (messageIndex < messageTotal))
     && ((-1 < messageIndex && (messageTotal <= (__this->fields)._maxTransferMessages)))) {
    if (validator == (System_Func_byte______int__int__bool__o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar5 = (*(code *)(validator->fields).invoke_impl)
                      ((validator->fields).method_code,message,messageIndex,messageTotal,
                       (validator->fields).method);
    pMVar9 = method_00;
    if (cVar5 != '\0') {
      if ((__this->fields)._active == false) {
        (__this->fields)._active = true;
        (__this->fields)._messageTotal = messageTotal;
      }
      else if ((__this->fields)._messageTotal != messageTotal) {
        Map_OrderedTransferReceiver__Fail(__this,resetState,method_00);
        return false;
      }
      Map_OrderedTransferReceiver__Drain(__this,processor,method_00);
      if (messageIndex < (__this->fields)._expectedIndex) {
        return true;
      }
      pSVar3 = (__this->fields)._pending;
      if (pSVar3 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_SortedDictionary_int__object___ContainsKey
                        ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar3,messageIndex,
                         (MethodInfo_4055ED0 *)
                         MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ContainsKey
                        );
      if (bVar6) {
        return true;
      }
      iVar2 = (int)message->max_length;
      iVar8 = 0;
      lVar7 = 0;
      if (0 < iVar2) {
        do {
          if (message->m_Items[iVar8] == (System_Byte_array *)0x0) {
            ThrowNullReferenceException();
          }
          lVar7 = lVar7 + (int)message->m_Items[iVar8]->max_length;
          iVar8 = iVar8 + 1;
        } while (iVar2 != iVar8);
      }
      lVar4 = (__this->fields)._receivedBytes;
      pMVar9 = (MethodInfo *)((__this->fields)._maxTransferBytes - lVar4);
      if ((long)pMVar9 < lVar7) {
        Map_OrderedTransferReceiver__Fail(__this,resetState,pMVar9);
        return false;
      }
      (__this->fields)._receivedBytes = lVar4 + lVar7;
      if ((__this->fields)._expectedIndex == messageIndex) {
        if (processor == (System_Action_byte______int__o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(code *)(processor->fields).invoke_impl)
                  ((processor->fields).method_code,message,messageIndex,(processor->fields).method);
        piVar1 = &(__this->fields)._expectedIndex;
        *piVar1 = *piVar1 + 1;
        Map_OrderedTransferReceiver__Drain(__this,processor,method_01);
      }
      else {
        pSVar3 = (__this->fields)._pending;
        if (pSVar3 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
          ThrowNullReferenceException();
        }
        processor = (System_Action_byte______int__o *)(ulong)(uint)messageIndex;
        System_Collections_Generic_SortedDictionary_int__object___Add
                  ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar3,messageIndex,
                   &message->obj,
                   (MethodInfo_4055E40 *)
                   MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Add);
      }
      if ((__this->fields)._expectedIndex == (__this->fields)._messageTotal) {
        Map_OrderedTransferReceiver__Reset(__this,(MethodInfo *)processor);
        return true;
      }
      return true;
    }
  }
  Map_OrderedTransferReceiver__Fail(__this,resetState,pMVar9);
  return false;
}


// Map.OrderedTransferReceiver$$Reset
// il2cpp: void Map_OrderedTransferReceiver__Reset (Map_OrderedTransferReceiver_o* __this, const MethodInfo* method);
// 0x596c3a0

void Map_OrderedTransferReceiver__Reset(Map_OrderedTransferReceiver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  
  if (Il2CppMethodInitialized_0754598e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
    Il2CppMethodInitialized_0754598e = '\x01';
  }
  __this_00 = (__this->fields)._pending;
  if (__this_00 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_SortedDictionary_int__object___Clear
            ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4055EA0 *)
             MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
  (__this->fields)._expectedIndex = 0;
  (__this->fields)._messageTotal = 0;
  (__this->fields)._receivedBytes = 0;
  (__this->fields)._active = false;
  return;
}


// Map.OrderedTransferReceiver$$IsValidEnvelope
// il2cpp: bool Map_OrderedTransferReceiver__IsValidEnvelope (Map_OrderedTransferReceiver_o* __this, System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x596c780

bool Map_OrderedTransferReceiver__IsValidEnvelope
               (Map_OrderedTransferReceiver_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               int32_t messageTotal,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = false;
  if ((message != (System_Byte_array_array *)0x0) && (1 < messageTotal)) {
    bVar1 = (messageIndex < messageTotal && -1 < messageIndex) &&
            messageTotal <= (__this->fields)._maxTransferMessages;
  }
  return bVar1;
}


// Map.OrderedTransferReceiver$$Drain
// il2cpp: void Map_OrderedTransferReceiver__Drain (Map_OrderedTransferReceiver_o* __this, System_Action_byte______int__o* processor, const MethodInfo* method);
// 0x596c8a0

void Map_OrderedTransferReceiver__Drain
               (Map_OrderedTransferReceiver_o *__this,System_Action_byte______int__o *processor,
               MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  System_Collections_Generic_SortedDictionary_int__byte______o *pSVar2;
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_0754598f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_TryGetValue);
    Il2CppMethodInitialized_0754598f = '\x01';
  }
  local_30 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._pending;
  if (pSVar2 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
    key = (__this->fields)._expectedIndex;
    if (processor == (System_Action_byte______int__o *)0x0) {
      bVar1 = System_Collections_Generic_SortedDictionary_int__object___TryGetValue
                        ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar2,key,&local_30,
                         (MethodInfo_4056290 *)
                         MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_TryGetValue
                        );
      if (!bVar1) {
        return;
      }
      pSVar2 = (__this->fields)._pending;
      if (pSVar2 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
        System_Collections_Generic_SortedDictionary_int__object___Remove
                  ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar2,
                   (__this->fields)._expectedIndex,
                   (MethodInfo_4056220 *)
                   MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Remove);
        ThrowNullReferenceException();
      }
    }
    else {
      do {
        bVar1 = System_Collections_Generic_SortedDictionary_int__object___TryGetValue
                          ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar2,key,&local_30
                           ,(MethodInfo_4056290 *)
                            MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_TryGetValue
                          );
        if (!bVar1) {
          return;
        }
        pSVar2 = (__this->fields)._pending;
        if (pSVar2 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) break;
        System_Collections_Generic_SortedDictionary_int__object___Remove
                  ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar2,
                   (__this->fields)._expectedIndex,
                   (MethodInfo_4056220 *)
                   MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Remove);
        (*(code *)(processor->fields).invoke_impl)
                  ((processor->fields).method_code,local_30,(__this->fields)._expectedIndex,
                   (processor->fields).method);
        key = (__this->fields)._expectedIndex + 1;
        (__this->fields)._expectedIndex = key;
        pSVar2 = (__this->fields)._pending;
      } while (pSVar2 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Map.OrderedTransferReceiver$$Process
// il2cpp: void Map_OrderedTransferReceiver__Process (Map_OrderedTransferReceiver_o* __this, System_Byte_array_array* message, int32_t messageIndex, System_Action_byte______int__o* processor, const MethodInfo* method);
// 0x596ca00

void Map_OrderedTransferReceiver__Process
               (Map_OrderedTransferReceiver_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               System_Action_byte______int__o *processor,MethodInfo *method)

{
  int32_t *piVar1;
  
  if (processor == (System_Action_byte______int__o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(processor->fields).invoke_impl)
            ((processor->fields).method_code,message,messageIndex,(processor->fields).method);
  piVar1 = &(__this->fields)._expectedIndex;
  *piVar1 = *piVar1 + 1;
  return;
}


// Map.OrderedTransferReceiver$$Fail
// il2cpp: bool Map_OrderedTransferReceiver__Fail (Map_OrderedTransferReceiver_o* __this, System_Action_o* resetState, const MethodInfo* method);
// 0x596c7b0
// eh: try 0x596c80f..0x596c813 -> pad 0x596c822 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x596c835..0x596c87b -> pad 0x596c87b (+1 call sites) cleanup
// eh: try 0x596c87e..0x596c883 -> pad 0x596c88b catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596c822: mov rbx, rax
// asm:   0x596c825: cmp edx, 1
// asm:   0x596c828: jne 0x596c883
// asm:   0x596c82a: mov rdi, rbx
// asm:   0x596c82d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x596c832: mov rbx, rax
// asm:   0x596c835: lea rdi, [rip + 0x190b884]  ; TypeInfo_System_Exception
// asm:   0x596c83c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x596c841: mov rcx, qword ptr [rbx]
// asm:   0x596c844: mov rsi, qword ptr [rcx]
// asm:   0x596c847: mov rdi, rax
// asm:   0x596c84a: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x596c84f: test al, al
// asm:   0x596c851: je 0x596c85a
// asm:   0x596c853: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596c858: jmp 0x596c813
// asm:   0x596c85a: mov edi, 8
// asm:   0x596c85f: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x596c864: mov rcx, qword ptr [rbx]
// asm:   0x596c867: mov qword ptr [rax], rcx
// asm:   0x596c86a: lea rsi, [rip + 0x14c0c8f]
// asm:   0x596c871: mov rdi, rax
// asm:   0x596c874: xor edx, edx
// asm:   0x596c876: call 0x6e255c0  ; __cxa_throw()
// asm:   0x596c87b: mov rbx, rax
// asm:   0x596c87e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596c883: mov rdi, rbx
// asm:   0x596c886: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x596c88b: mov rdi, rax
// asm:   0x596c88e: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_OrderedTransferReceiver__Fail
               (Map_OrderedTransferReceiver_o *__this,System_Action_o *resetState,MethodInfo *method)

{
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  
  if (Il2CppMethodInitialized_0754598e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
    Il2CppMethodInitialized_0754598e = '\x01';
  }
  __this_00 = (__this->fields)._pending;
  if (__this_00 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_SortedDictionary_int__object___Clear
            ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4055EA0 *)
             MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
  (__this->fields)._expectedIndex = 0;
  (__this->fields)._messageTotal = 0;
  (__this->fields)._receivedBytes = 0;
  (__this->fields)._active = false;
  if (resetState != (System_Action_o *)0x0) {
    (*(code *)(resetState->fields).invoke_impl)((resetState->fields).method_code,(resetState->fields).method);
  }
  return false;
}


// Map.OrderedTransferReceiver$$GetMessageBytes
// il2cpp: int64_t Map_OrderedTransferReceiver__GetMessageBytes (System_Byte_array_array* message, const MethodInfo* method);
// 0x596c9b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596c9c1: nop word ptr cs:[rax + rax]

int64_t Map_OrderedTransferReceiver__GetMessageBytes(System_Byte_array_array *message,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (message == (System_Byte_array_array *)0x0) {
label_0596c9ec:
    ThrowNullReferenceException();
  }
  iVar1 = (int)message->max_length;
  iVar3 = 0;
  lVar2 = 0;
  if (0 < iVar1) {
    do {
      if (message->m_Items[iVar3] == (System_Byte_array *)0x0) goto label_0596c9ec;
      lVar2 = lVar2 + (int)message->m_Items[iVar3]->max_length;
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return lVar2;
}


