// Type: Map.OrderedTransferReceiver
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/OrderedTransferReceiver.cs
// Prior real C# source: none
// --------------------------------

// Map.OrderedTransferReceiver$$.ctor
// il2cpp: void Map_OrderedTransferReceiver___ctor (Map_OrderedTransferReceiver_o* __this, int64_t maxTransferBytes, const MethodInfo* method);
// 0x181e93eb0

void Map_OrderedTransferReceiver___ctor
               (Map_OrderedTransferReceiver_o *__this,int64_t maxTransferBytes,MethodInfo *method)

{
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  int64_t iVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184344ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array);
    Il2CppMethodInitialized_184344ffc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array);
  System_Collections_Generic_SortedDictionary_int__object____ctor
            ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_C9CFF0 *)
             MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ctor);
  (__this->fields)._pending = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (maxTransferBytes - 1U < 0x80000000) {
    (__this->fields)._maxTransferBytes = maxTransferBytes;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar1 = System_Math__Min_1b2c330(0x7fffffff,maxTransferBytes / 10000 + 2,(MethodInfo *)0x0);
    (__this->fields)._maxTransferMessages = (int32_t)iVar1;
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  paramName = il2cpp_codegen_get_runtime_metadata(&"maxTransferBytes");
  System_ArgumentOutOfRangeException___ctor_1a78320(__this_01,paramName,(MethodInfo *)0x0);
  lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_OrderedTransferReceiver_ctor);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// Map.OrderedTransferReceiver$$TryReceive
// il2cpp: bool Map_OrderedTransferReceiver__TryReceive (Map_OrderedTransferReceiver_o* __this, System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, System_Func_byte______int__int__bool__o* validator, System_Action_byte______int__o* processor, System_Action_o* resetState, const MethodInfo* method);
// 0x181e93c80
// eh: try 0x181e93cc2..0x181e93ea5 -> pad 0x183336110 (+3 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e93e66: xor r8d, r8d
// asm:   0x181e93e69: mov rdx, qword ptr [rsp + 0xa0]
// asm:   0x181e93e71: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x181e93e76: call 0x181e93b00  ; Map_OrderedTransferReceiver__Fail()
// asm:   0x183336110: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183336115: push rbx
// asm:   0x183336116: push rbp
// asm:   0x183336117: push rdi
// asm:   0x183336118: sub rsp, 0x30
// asm:   0x18333611c: mov rbp, rdx
// asm:   0x18333611f: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x183336123: mov rax, qword ptr [rdi]
// asm:   0x183336126: mov rbx, qword ptr [rax]
// asm:   0x183336129: lea rcx, [rip + 0xd42e28]  ; TypeInfo_System_Exception
// asm:   0x183336130: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183336135: mov rcx, rax
// asm:   0x183336138: mov rdx, rbx
// asm:   0x18333613b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183336140: test al, al
// asm:   0x183336142: je 0x183336150
// asm:   0x183336144: movabs rax, 0
// asm:   0x18333614e: jmp 0x183336168
// asm:   0x183336150: mov rax, qword ptr [rdi]
// asm:   0x183336153: mov qword ptr [rbp + 0x30], rax
// asm:   0x183336157: lea rdx, [rip + 0xca5e2a]
// asm:   0x18333615e: lea rcx, [rbp + 0x30]
// asm:   0x183336162: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183336168: add rsp, 0x30
// asm:   0x18333616c: pop rdi
// asm:   0x18333616d: pop rbp
// asm:   0x18333616e: pop rbx
// asm:   0x18333616f: ret 

bool Map_OrderedTransferReceiver__TryReceive
               (Map_OrderedTransferReceiver_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               int32_t messageTotal,System_Func_byte______int__int__bool__o *validator,
               System_Action_byte______int__o *processor,System_Action_o *resetState,MethodInfo *method)

{
  int64_t *piVar1;
  int32_t *piVar2;
  uint uVar3;
  System_Collections_Generic_SortedDictionary_int__byte______o *pSVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  if (Il2CppMethodInitialized_184344ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ContainsKey);
    Il2CppMethodInitialized_184344ffd = '\x01';
  }
  if ((((message != (System_Byte_array_array *)0x0) && (1 < messageTotal)) &&
      (messageTotal <= (__this->fields)._maxTransferMessages)) &&
     ((-1 < messageIndex && (messageIndex < messageTotal)))) {
    if (validator == (System_Func_byte______int__int__bool__o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar5 = (*(code *)(validator->fields).invoke_impl)
                      ((validator->fields).method_code,message,messageIndex,messageTotal,
                       (validator->fields).method);
    if (cVar5 != '\0') {
      if ((__this->fields)._active == false) {
        (__this->fields)._active = true;
        (__this->fields)._messageTotal = messageTotal;
      }
      else if ((__this->fields)._messageTotal != messageTotal) {
        bVar6 = Map_OrderedTransferReceiver__Fail(__this,resetState,(MethodInfo *)0x0);
        return bVar6;
      }
      Map_OrderedTransferReceiver__Drain(__this,processor,(MethodInfo *)0x0);
      if ((__this->fields)._expectedIndex <= messageIndex) {
        pSVar4 = (__this->fields)._pending;
        if (pSVar4 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_Collections_Generic_SortedDictionary_int__object___ContainsKey
                          ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar4,messageIndex,
                           (MethodInfo_C99B50 *)
                           MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ContainsKey
                          );
        if (!bVar6) {
          lVar8 = 0;
          uVar7 = 0;
          while( true ) {
            uVar3 = (uint)message->max_length;
            if ((int)uVar3 <= (int)uVar7) {
              if ((__this->fields)._maxTransferBytes - (__this->fields)._receivedBytes < lVar8) {
                bVar6 = Map_OrderedTransferReceiver__Fail(__this,resetState,(MethodInfo *)0x0);
                return bVar6;
              }
              piVar1 = &(__this->fields)._receivedBytes;
              *piVar1 = *piVar1 + lVar8;
              if (messageIndex == (__this->fields)._expectedIndex) {
                if (processor == (System_Action_byte______int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                (*(code *)(processor->fields).invoke_impl)
                          ((processor->fields).method_code,message,messageIndex,(processor->fields).method);
                piVar2 = &(__this->fields)._expectedIndex;
                *piVar2 = *piVar2 + 1;
                Map_OrderedTransferReceiver__Drain(__this,processor,(MethodInfo *)0x0);
              }
              else {
                pSVar4 = (__this->fields)._pending;
                if (pSVar4 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_SortedDictionary_int__object___Add
                          ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar4,messageIndex,
                           &message->obj,
                           (MethodInfo_C997A0 *)
                           MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Add);
              }
              if ((__this->fields)._expectedIndex == (__this->fields)._messageTotal) {
                Map_OrderedTransferReceiver__Reset(__this,(MethodInfo *)0x0);
              }
              return true;
            }
            if (uVar3 <= uVar7) {
              ThrowIndexOutOfRangeException();
            }
            if (message->m_Items[(int)uVar7] == (System_Byte_array *)0x0) break;
            lVar8 = lVar8 + (int)message->m_Items[(int)uVar7]->max_length;
            uVar7 = uVar7 + 1;
          }
          ThrowNullReferenceException();
        }
      }
      return true;
    }
  }
  bVar6 = Map_OrderedTransferReceiver__Fail(__this,resetState,(MethodInfo *)0x0);
  return bVar6;
}


// Map.OrderedTransferReceiver$$Reset
// il2cpp: void Map_OrderedTransferReceiver__Reset (Map_OrderedTransferReceiver_o* __this, const MethodInfo* method);
// 0x181e93c20

void Map_OrderedTransferReceiver__Reset(Map_OrderedTransferReceiver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  
  if (Il2CppMethodInitialized_184344ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
    Il2CppMethodInitialized_184344ffe = '\x01';
  }
  __this_00 = (__this->fields)._pending;
  if (__this_00 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
    System_Collections_Generic_SortedDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
              ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_C99820 *)
               MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
    (__this->fields)._expectedIndex = 0;
    (__this->fields)._messageTotal = 0;
    (__this->fields)._receivedBytes = 0;
    (__this->fields)._active = false;
    return;
  }
  ThrowNullReferenceException();
}


// Map.OrderedTransferReceiver$$IsValidEnvelope
// il2cpp: bool Map_OrderedTransferReceiver__IsValidEnvelope (Map_OrderedTransferReceiver_o* __this, System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x181e93bd0

bool Map_OrderedTransferReceiver__IsValidEnvelope
               (Map_OrderedTransferReceiver_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               int32_t messageTotal,MethodInfo *method)

{
  if ((((message != (System_Byte_array_array *)0x0) && (1 < messageTotal)) &&
      (messageTotal <= (__this->fields)._maxTransferMessages)) && (-1 < messageIndex)) {
    return messageIndex < messageTotal;
  }
  return false;
}


// Map.OrderedTransferReceiver$$Drain
// il2cpp: void Map_OrderedTransferReceiver__Drain (Map_OrderedTransferReceiver_o* __this, System_Action_byte______int__o* processor, const MethodInfo* method);
// 0x181e93a40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e93a8d: nop dword ptr [rax]
// asm:   0x181e93aec: jmp 0x181e93a90

void Map_OrderedTransferReceiver__Drain
               (Map_OrderedTransferReceiver_o *__this,System_Action_byte______int__o *processor,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_SortedDictionary_int__byte______o *pSVar2;
  int32_t key;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184344fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_TryGetValue);
    Il2CppMethodInitialized_184344fff = '\x01';
  }
  pSVar2 = (__this->fields)._pending;
  local_res8 = (Il2CppObject *)0x0;
  if (pSVar2 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
    key = (__this->fields)._expectedIndex;
    do {
      bVar1 = System_Collections_Generic_SortedDictionary_int__object___TryGetValue
                        ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar2,key,&local_res8
                         ,(MethodInfo_C9CA30 *)
                          MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_TryGetValue
                        );
      if (!bVar1) {
        return;
      }
      pSVar2 = (__this->fields)._pending;
      if ((pSVar2 == (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) ||
         (System_Collections_Generic_SortedDictionary_int__object___Remove
                    ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)pSVar2,
                     (__this->fields)._expectedIndex,
                     (MethodInfo_C9A2A0 *)
                     MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Remove),
         processor == (System_Action_byte______int__o *)0x0)) break;
      (*(code *)(processor->fields).invoke_impl)
                ((processor->fields).method_code,local_res8,(__this->fields)._expectedIndex,
                 (processor->fields).method);
      key = (__this->fields)._expectedIndex + 1;
      (__this->fields)._expectedIndex = key;
      pSVar2 = (__this->fields)._pending;
    } while (pSVar2 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0);
  }
  ThrowNullReferenceException();
}


// Map.OrderedTransferReceiver$$Process
// il2cpp: void Map_OrderedTransferReceiver__Process (Map_OrderedTransferReceiver_o* __this, System_Byte_array_array* message, int32_t messageIndex, System_Action_byte______int__o* processor, const MethodInfo* method);
// 0x181e93bf0

void Map_OrderedTransferReceiver__Process
               (Map_OrderedTransferReceiver_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               System_Action_byte______int__o *processor,MethodInfo *method)

{
  int32_t *piVar1;
  
  if (processor != (System_Action_byte______int__o *)0x0) {
    (*(code *)(processor->fields).invoke_impl)
              ((processor->fields).method_code,message,messageIndex,(processor->fields).method);
    piVar1 = &(__this->fields)._expectedIndex;
    *piVar1 = *piVar1 + 1;
    return;
  }
  ThrowNullReferenceException();
}


// Map.OrderedTransferReceiver$$Fail
// il2cpp: bool Map_OrderedTransferReceiver__Fail (Map_OrderedTransferReceiver_o* __this, System_Action_o* resetState, const MethodInfo* method);
// 0x181e93b00
// eh: try 0x181e93b4e..0x181e93b5f -> pad 0x183331bd0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e93b5e: nop 
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

bool Map_OrderedTransferReceiver__Fail
               (Map_OrderedTransferReceiver_o *__this,System_Action_o *resetState,MethodInfo *method)

{
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  
  if (Il2CppMethodInitialized_184344ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
    Il2CppMethodInitialized_184344ffe = '\x01';
  }
  __this_00 = (__this->fields)._pending;
  if (__this_00 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
    System_Collections_Generic_SortedDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
              ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_C99820 *)
               MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
    (__this->fields)._expectedIndex = 0;
    (__this->fields)._messageTotal = 0;
    (__this->fields)._receivedBytes = 0;
    (__this->fields)._active = false;
    if (resetState != (System_Action_o *)0x0) {
      (*(code *)(resetState->fields).invoke_impl)
                ((resetState->fields).method_code,(resetState->fields).method);
    }
    return false;
  }
  ThrowNullReferenceException();
}


// Map.OrderedTransferReceiver$$GetMessageBytes
// il2cpp: int64_t Map_OrderedTransferReceiver__GetMessageBytes (System_Byte_array_array* message, const MethodInfo* method);
// 0x181e93b80

int64_t Map_OrderedTransferReceiver__GetMessageBytes(System_Byte_array_array *message,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  if (message != (System_Byte_array_array *)0x0) {
    uVar1 = (uint)message->max_length;
    lVar3 = 0;
    uVar2 = 0;
    while( true ) {
      if ((int)uVar1 <= (int)uVar2) {
        return lVar3;
      }
      if (uVar1 <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if (message->m_Items[(int)uVar2] == (System_Byte_array *)0x0) break;
      lVar3 = lVar3 + (int)message->m_Items[(int)uVar2]->max_length;
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


