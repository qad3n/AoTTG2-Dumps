// Type: Settings.PresetDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/PresetDefinition.cs
// Prior real C# source: none
// --------------------------------

// Settings.PresetDefinition.<>c$$.cctor
// il2cpp: void Settings_PresetDefinition___c___cctor (const MethodInfo* method);
// 0x5b3bcb0

void Settings_PresetDefinition___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547250 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition_c);
    Il2CppMethodInitialized_07547250 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_PresetDefinition_c->static_fields->__9 = (Settings_PresetDefinition___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetDefinition_c->static_fields->__9);
  return;
}


// Settings.PresetDefinition.<>c$$.ctor
// il2cpp: void Settings_PresetDefinition___c___ctor (Settings_PresetDefinition___c_o* __this, const MethodInfo* method);
// 0x5b3bd20

void Settings_PresetDefinition___c___ctor(Settings_PresetDefinition___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.PresetDefinition.<>c$$<get_DefaultVariant>b__8_0
// il2cpp: bool Settings_PresetDefinition___c___get_DefaultVariant_b__8_0 (Settings_PresetDefinition___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b3bd30

bool Settings_PresetDefinition___c___get_DefaultVariant_b__8_0
               (Settings_PresetDefinition___c_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07547251 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(name,"Default",5,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.PresetDefinition$$get_DefaultVariant
// il2cpp: System_String_o* Settings_PresetDefinition__get_DefaultVariant (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x5b39200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b392aa: jmp 0x5b392c5

System_String_o *
Settings_PresetDefinition__get_DefaultVariant(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  Settings_PresetDefinition___c_StaticFields *pSVar3;
  System_Func_string__bool__o *__this_00;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754724a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition_c);
    Il2CppMethodInitialized_0754724a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variants;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (pSVar1,(MethodInfo_4AAD0F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    if ((TypeInfo_Settings_PresetDefinition_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
      pSVar3 = TypeInfo_Settings_PresetDefinition_c->static_fields;
      __this_00 = pSVar3->__9__8_0;
    }
    else {
      pSVar3 = TypeInfo_Settings_PresetDefinition_c->static_fields;
      __this_00 = pSVar3->__9__8_0;
    }
    if (__this_00 == (System_Func_string__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
        pSVar3 = TypeInfo_Settings_PresetDefinition_c->static_fields;
      }
      object = (Il2CppObject *)pSVar3->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,object,
                 (intptr_t)MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__8_0,
                 (MethodInfo_4F19300 *)0x0);
      pSVar3 = TypeInfo_Settings_PresetDefinition_c->static_fields;
      pSVar3->__9__8_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pSVar3->__9__8_0);
    }
    pSVar4 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (System_Func_TSource__bool__o *)__this_00,
                        (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548)
    ;
    if (pSVar4 != (System_String_o *)0x0) {
      return pSVar4;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variants;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (pSVar1,(MethodInfo_4AAD0F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    pSVar4 = System_Linq_Enumerable__FirstOrDefault_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (MethodInfo_34ECD10 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string);
    if (pSVar4 != (System_String_o *)0x0) {
      return pSVar4;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Settings.PresetDefinition$$FromJson
// il2cpp: Settings_PresetDefinition_o* Settings_PresetDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x5b393a0

Settings_PresetDefinition_o * Settings_PresetDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Settings_PresetDefinition_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *experience;
  System_Collections_Generic_Dictionary_string__List_string___o *pSVar2;
  Il2CppClass *klass;
  System_IO_InvalidDataException_o *__this;
  System_String_o *message;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_0754724b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_PresetDefinition);
    Il2CppMethodInitialized_0754724b = '\x01';
  }
  pSVar1 = UnityEngine_JsonUtility__FromJson_object_
                     (json,(MethodInfo_356DE00 *)MethodInfo_UnityEngine_JsonUtility_FromJson_PresetDefinition)
  ;
  if (pSVar1 == (Settings_PresetDefinition_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
    __this = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Experience resource is invalid.");
    System_IO_InvalidDataException___ctor_628b0d0(__this,message,(MethodInfo *)0x0);
    pMVar3 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_FromJson);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,pMVar3);
  }
  pMVar3 = (MethodInfo *)0x0;
  experience = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pSVar2 = Settings_PresetDefinition__ReadVariants(experience,pMVar3);
  (pSVar1->fields).Variants = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pSVar1->fields).Variants);
  return pSVar1;
}


// Settings.PresetDefinition$$ReadVariants
// il2cpp: System_Collections_Generic_Dictionary_string__List_string___o* Settings_PresetDefinition__ReadVariants (SimpleJSONFixed_JSONNode_o* experience, const MethodInfo* method);
// 0x5b39460
// eh: try 0x5b397aa..0x5b399bc -> pad 0x5b3a325 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b399e1..0x5b39b85 -> pad 0x5b39fd5 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b39bdf..0x5b39c06 -> pad 0x5b3a36e catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b39c2f..0x5b39de7 -> pad 0x5b3a31c (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_FormatException]
// eh: try 0x5b39e06..0x5b39f65 -> pad 0x5b39fdb (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b39f72..0x5b39fc8 -> pad 0x5b39fa6 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_FormatException]
// eh: try 0x5b39ffb..0x5b3a000 -> pad 0x5b3a2fd catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5b3a094..0x5b3a09e -> pad 0x5b3a5d0 catch (...) [compiler noexcept guard]
// eh: try 0x5b3a0ab..0x5b3a0f2 -> pad 0x5b3a58f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b3a0f2..0x5b3a0ff -> pad 0x5b3a33d (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_FormatException]
// eh: try 0x5b3a0ff..0x5b3a212 -> pad 0x5b3a31e (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b3a2e6..0x5b3a2f0 -> pad 0x5b3a5d0 catch (...) [compiler noexcept guard]
// eh: try 0x5b3a3a4..0x5b3a55a -> pad 0x5b3a578 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b3a57e..0x5b3a583 -> pad 0x5b3a5d0 catch (...) [compiler noexcept guard]
// eh: try 0x5b3a5ac..0x5b3a5b1 -> pad 0x5b3a5bb cleanup
// eh: try 0x5b3a5be..0x5b3a5c8 -> pad 0x5b3a5d0 catch (...) [compiler noexcept guard]
// asm: 269 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b397ef: nop 
// asm:   0x5b39a0a: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5b39a0f: test rbp, rbp
// asm:   0x5b39a12: je 0x5b399e1
// asm:   0x5b39c49: jmp 0x5b39c6b
// asm:   0x5b39cfd: nop dword ptr [rax]
// asm:   0x5b39dcc: mov ebx, 0x16
// asm:   0x5b39dd1: xor ebp, ebp
// asm:   0x5b39dd3: lea rax, [rip + 0x1754f8e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x5b39dda: mov rsi, qword ptr [rax]
// asm:   0x5b39ddd: lea rdi, [rsp + 0x40]
// asm:   0x5b39de2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b39de7: test rbp, rbp
// asm:   0x5b39dea: jne 0x5b3a0f2
// asm:   0x5b39df0: test ebx, ebx
// asm:   0x5b39df2: je 0x5b397a0
// asm:   0x5b39df8: cmp ebx, 0x16
// asm:   0x5b39dfb: je 0x5b397a0
// asm:   0x5b39e01: jmp 0x5b3a005
// asm:   0x5b39f86: jmp 0x5b39f9a
// asm:   0x5b39f88: jmp 0x5b39f9a
// asm:   0x5b39f8a: jmp 0x5b39f9a
// asm:   0x5b39f8c: jmp 0x5b39f9a
// asm:   0x5b39f8e: jmp 0x5b39f9a
// asm:   0x5b39f90: jmp 0x5b39f9a
// asm:   0x5b39f92: jmp 0x5b39fa8
// asm:   0x5b39f94: jmp 0x5b39fa8
// asm:   0x5b39f96: jmp 0x5b39f9a
// asm:   0x5b39f98: jmp 0x5b39fa8
// asm:   0x5b39f9a: mov rbp, rax
// asm:   0x5b39f9d: mov r13, r15
// asm:   0x5b39fa0: jmp 0x5b39fe0
// asm:   0x5b39fa2: jmp 0x5b39fa8
// asm:   0x5b39fa4: jmp 0x5b39fa8
// asm:   0x5b39fa6: jmp 0x5b39fa8
// asm:   0x5b39fa8: cmp edx, 1
// asm:   0x5b39fab: jne 0x5b3a2e0
// asm:   0x5b39fb1: mov rdi, rax
// asm:   0x5b39fb4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b39fb9: mov rbp, qword ptr [rax]
// asm:   0x5b39fbc: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5b39fc1: xor ebx, ebx
// asm:   0x5b39fc3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b39fc8: jmp 0x5b39dd3
// asm:   0x5b39fcd: jmp 0x5b39fdd
// asm:   0x5b39fcf: jmp 0x5b39fdd
// asm:   0x5b39fd1: jmp 0x5b39fdd
// asm:   0x5b39fd3: jmp 0x5b39fdd
// asm:   0x5b39fd5: jmp 0x5b39fdd
// asm:   0x5b39fd7: jmp 0x5b39fdd
// asm:   0x5b39fd9: jmp 0x5b39fdd
// asm:   0x5b39fdb: jmp 0x5b39fdd
// asm:   0x5b39fdd: mov rbp, rax
// asm:   0x5b39fe0: cmp edx, 1
// asm:   0x5b39fe3: jne 0x5b3a091
// asm:   0x5b39fe9: mov rdi, rbp
// asm:   0x5b39fec: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b39ff1: mov rbp, qword ptr [rax]
// asm:   0x5b39ff4: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5b39ff9: xor ebx, ebx
// asm:   0x5b39ffb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3a000: jmp 0x5b39b97
// asm:   0x5b3a005: mov r14, qword ptr [rsp + 8]
// asm:   0x5b3a03c: nop dword ptr [rax]
// asm:   0x5b3a091: mov rbx, rdx
// asm:   0x5b3a094: lea rdi, [rsp + 0x28]
// asm:   0x5b3a099: call 0x2fd6a50  ; il2cpp_runtime_helper_02fd6a50()
// asm:   0x5b3a09e: mov rdi, rbp
// asm:   0x5b3a0a1: mov r14, qword ptr [rsp + 8]
// asm:   0x5b3a0a6: jmp 0x5b3a59a
// asm:   0x5b3a0ea: mov rdi, rbp
// asm:   0x5b3a0ed: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3a0f2: mov rdi, rbp
// asm:   0x5b3a0f5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3a2ce: mov rdi, rbp
// asm:   0x5b3a2d1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3a2d6: jmp 0x5b3a58f
// asm:   0x5b3a2db: jmp 0x5b3a58f
// asm:   0x5b3a2e0: mov rbx, rdx
// asm:   0x5b3a2e3: mov rbp, rax
// asm:   0x5b3a2e6: lea rdi, [rsp + 0x28]
// asm:   0x5b3a2eb: call 0x2fd6ae0  ; il2cpp_runtime_helper_02fd6ae0()
// asm:   0x5b3a2f0: mov rax, rbp
// asm:   0x5b3a2f3: jmp 0x5b3a390
// asm:   0x5b3a2f8: jmp 0x5b3a58f
// asm:   0x5b3a2fd: mov rbx, rdx
// asm:   0x5b3a300: mov rbp, rax
// asm:   0x5b3a303: jmp 0x5b3a094
// asm:   0x5b3a308: jmp 0x5b3a58f
// asm:   0x5b3a30d: jmp 0x5b3a58f
// asm:   0x5b3a312: jmp 0x5b3a58f
// asm:   0x5b3a317: jmp 0x5b3a58f
// asm:   0x5b3a31c: jmp 0x5b3a38d
// asm:   0x5b3a31e: jmp 0x5b3a58f
// asm:   0x5b3a323: jmp 0x5b3a38d
// asm:   0x5b3a325: mov rbx, rdx
// asm:   0x5b3a328: mov rdi, rax
// asm:   0x5b3a32b: mov r14, qword ptr [rsp + 8]
// asm:   0x5b3a330: jmp 0x5b3a59a
// asm:   0x5b3a335: jmp 0x5b3a38d
// asm:   0x5b3a337: jmp 0x5b3a38d
// asm:   0x5b3a339: jmp 0x5b3a38d
// asm:   0x5b3a33b: jmp 0x5b3a38d
// asm:   0x5b3a33d: jmp 0x5b3a38d
// asm:   0x5b3a33f: jmp 0x5b3a36e
// asm:   0x5b3a341: jmp 0x5b3a58f
// asm:   0x5b3a346: jmp 0x5b3a58f
// asm:   0x5b3a34b: jmp 0x5b3a58f
// asm:   0x5b3a350: jmp 0x5b3a58f
// asm:   0x5b3a355: jmp 0x5b3a58f
// asm:   0x5b3a35a: jmp 0x5b3a58f
// asm:   0x5b3a35f: jmp 0x5b3a58f
// asm:   0x5b3a364: jmp 0x5b3a58f
// asm:   0x5b3a369: jmp 0x5b3a58f
// asm:   0x5b3a36e: mov rbx, rdx
// asm:   0x5b3a371: mov rdi, rax
// asm:   0x5b3a374: mov r14, qword ptr [rsp + 8]
// asm:   0x5b3a379: jmp 0x5b3a59a
// asm:   0x5b3a37e: jmp 0x5b3a58f
// asm:   0x5b3a383: jmp 0x5b3a58f
// asm:   0x5b3a388: jmp 0x5b3a58f
// asm:   0x5b3a38d: mov rbx, rdx
// asm:   0x5b3a390: cmp ebx, 1
// asm:   0x5b3a393: jne 0x5b3a592
// asm:   0x5b3a399: mov rdi, rax
// asm:   0x5b3a39c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3a3a1: mov rbp, rax
// asm:   0x5b3a3a4: lea rdi, [rip + 0x173e135]  ; TypeInfo_System_FormatException
// asm:   0x5b3a3ab: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a3b0: mov rcx, qword ptr [rbp]
// asm:   0x5b3a3b4: mov rsi, qword ptr [rcx]
// asm:   0x5b3a3b7: mov rdi, rax
// asm:   0x5b3a3ba: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3a3bf: test al, al
// asm:   0x5b3a3c1: je 0x5b3a3f2
// asm:   0x5b3a3c3: mov rbp, qword ptr [rbp]
// asm:   0x5b3a3c7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3a3cc: lea rdi, [rip + 0x173a565]  ; TypeInfo_string_array
// asm:   0x5b3a3d3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a3d8: mov rdi, rax
// asm:   0x5b3a3db: mov esi, 6
// asm:   0x5b3a3e0: call 0x30d6180  ; SZArrayNew()
// asm:   0x5b3a3e5: mov r14, rax
// asm:   0x5b3a3e8: test rax, rax
// asm:   0x5b3a3eb: jne 0x5b3a414
// asm:   0x5b3a3ed: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b3a3f2: mov edi, 8
// asm:   0x5b3a3f7: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3a3fc: mov rcx, qword ptr [rbp]
// asm:   0x5b3a400: mov qword ptr [rax], rcx
// asm:   0x5b3a403: lea rsi, [rip + 0x12f30f6]
// asm:   0x5b3a40a: mov rdi, rax
// asm:   0x5b3a40d: xor edx, edx
// asm:   0x5b3a40f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3a414: lea rdi, [rip + 0x17a57dd]  ; "Invalid variant "
// asm:   0x5b3a41b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a420: mov rdi, r14
// asm:   0x5b3a423: xor esi, esi
// asm:   0x5b3a425: mov rdx, rax
// asm:   0x5b3a428: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b3a42d: lea rdi, [rip + 0x1757cf4]  ; MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key
// asm:   0x5b3a434: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a439: mov esi, 1
// asm:   0x5b3a43e: mov rdi, r14
// asm:   0x5b3a441: mov rdx, qword ptr [rsp + 0x60]
// asm:   0x5b3a446: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b3a44b: lea rdi, [rip + 0x17944be]  ; " in experience "
// asm:   0x5b3a452: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a457: mov esi, 2
// asm:   0x5b3a45c: mov rdi, r14
// asm:   0x5b3a45f: mov rdx, rax
// asm:   0x5b3a462: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b3a467: lea rdi, [rip + 0x17a89f2]  ; "Name"
// asm:   0x5b3a46e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a473: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x5b3a478: mov rcx, qword ptr [rdi]
// asm:   0x5b3a47b: mov rdx, qword ptr [rcx + 0x1b0]
// asm:   0x5b3a482: mov rsi, rax
// asm:   0x5b3a485: call qword ptr [rcx + 0x1a8]  ; vtable slot 7
// asm:   0x5b3a48b: mov rbx, rax
// asm:   0x5b3a48e: lea rdi, [rip + 0x173fbeb]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5b3a495: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a49a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5b3a4a1: jne 0x5b3a4ab
// asm:   0x5b3a4a3: mov rdi, rax
// asm:   0x5b3a4a6: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5b3a4ab: mov rdi, rbx
// asm:   0x5b3a4ae: xor esi, esi
// asm:   0x5b3a4b0: call 0x5863740  ; SimpleJSONFixed_JSONNode__op_Implicit()
// asm:   0x5b3a4b5: mov esi, 3
// asm:   0x5b3a4ba: mov rdi, r14
// asm:   0x5b3a4bd: mov rdx, rax
// asm:   0x5b3a4c0: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b3a4c5: lea rdi, [rip + 0x1797ab4]  ; ": "
// asm:   0x5b3a4cc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a4d1: mov esi, 4
// asm:   0x5b3a4d6: mov rdi, r14
// asm:   0x5b3a4d9: mov rdx, rax
// asm:   0x5b3a4dc: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b3a4e1: test rbp, rbp
// asm:   0x5b3a4e4: jne 0x5b3a4eb
// asm:   0x5b3a4e6: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b3a4eb: mov rax, qword ptr [rbp]
// asm:   0x5b3a4ef: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b3a4f6: mov rdi, rbp
// asm:   0x5b3a4f9: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b3a4ff: mov esi, 5
// asm:   0x5b3a504: mov rdi, r14
// asm:   0x5b3a507: mov rdx, rax
// asm:   0x5b3a50a: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b3a50f: mov rdi, r14
// asm:   0x5b3a512: xor esi, esi
// asm:   0x5b3a514: call 0x5402910  ; System_String__Concat()
// asm:   0x5b3a519: mov r14, rax
// asm:   0x5b3a51c: lea rdi, [rip + 0x173fa2d]  ; TypeInfo_System_IO_InvalidDataException
// asm:   0x5b3a523: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a528: mov rdi, rax
// asm:   0x5b3a52b: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b3a530: mov rbx, rax
// asm:   0x5b3a533: mov rdi, rax
// asm:   0x5b3a536: mov rsi, r14
// asm:   0x5b3a539: mov rdx, rbp
// asm:   0x5b3a53c: xor ecx, ecx
// asm:   0x5b3a53e: call 0x638b0f0  ; System_IO_InvalidDataException___ctor()
// asm:   0x5b3a543: lea rdi, [rip + 0x1775c06]  ; MethodInfo_Settings_PresetDefinition_ReadVariants
// asm:   0x5b3a54a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3a54f: mov rdi, rbx
// asm:   0x5b3a552: mov rsi, rax
// asm:   0x5b3a555: call 0x30d6220  ; il2cpp_codegen_raise_exception()
// asm:   0x5b3a55a: jmp 0x5b3a58f
// asm:   0x5b3a55c: jmp 0x5b3a58f
// asm:   0x5b3a55e: jmp 0x5b3a58f
// asm:   0x5b3a560: jmp 0x5b3a58f
// asm:   0x5b3a562: jmp 0x5b3a58f
// asm:   0x5b3a564: jmp 0x5b3a58f
// asm:   0x5b3a566: jmp 0x5b3a58f
// asm:   0x5b3a568: jmp 0x5b3a58f
// asm:   0x5b3a56a: jmp 0x5b3a58f
// asm:   0x5b3a56c: jmp 0x5b3a58f
// asm:   0x5b3a56e: jmp 0x5b3a58f
// asm:   0x5b3a570: mov rbx, rdx
// asm:   0x5b3a573: mov rbp, rax
// asm:   0x5b3a576: jmp 0x5b3a583
// asm:   0x5b3a578: mov rbx, rdx
// asm:   0x5b3a57b: mov rbp, rax
// asm:   0x5b3a57e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3a583: mov r14, qword ptr [rsp + 8]
// asm:   0x5b3a588: mov rdi, rbp
// asm:   0x5b3a58b: jmp 0x5b3a59a
// asm:   0x5b3a58d: jmp 0x5b3a58f
// asm:   0x5b3a58f: mov rbx, rdx
// asm:   0x5b3a592: mov r14, qword ptr [rsp + 8]
// asm:   0x5b3a597: mov rdi, rax
// asm:   0x5b3a59a: cmp ebx, 1
// asm:   0x5b3a59d: jne 0x5b3a5b6
// asm:   0x5b3a59f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3a5a4: mov rbp, qword ptr [rax]
// asm:   0x5b3a5a7: mov qword ptr [rsp + 0x68], rbp
// asm:   0x5b3a5ac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3a5b1: jmp 0x5b3a00c
// asm:   0x5b3a5b6: mov rbx, rdi
// asm:   0x5b3a5b9: jmp 0x5b3a5be
// asm:   0x5b3a5bb: mov rbx, rax
// asm:   0x5b3a5be: lea rdi, [rsp + 0x68]
// asm:   0x5b3a5c3: call 0x2fd6b10  ; il2cpp_runtime_helper_02fd6b10()
// asm:   0x5b3a5c8: mov rdi, rbx
// asm:   0x5b3a5cb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3a5d0: mov rdi, rax
// asm:   0x5b3a5d3: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__List_string___o *
Settings_PresetDefinition__ReadVariants(SimpleJSONFixed_JSONNode_o *experience,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  char cVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Collections_Generic_Dictionary_string__List_string___o *__this;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar10;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_Collections_Generic_List_UIRule__o *__this_02;
  System_FormatException_o *__this_03;
  Il2CppClass *pIVar11;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  System_IO_InvalidDataException_o *pSVar14;
  MethodInfo *pMVar15;
  System_String_o *str2;
  ulong uVar16;
  long *plVar17;
  MethodInfo *method_00;
  System_Func_string__UIRuleValueType__o *typeResolver;
  long lVar18;
  undefined1 auVar19 [16];
  Il2CppObject *local_98;
  Il2CppObject *local_90;
  SimpleJSONFixed_JSONNode_o *local_88;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  Il2CppObject **ppIStack_60;
  Il2CppObject *local_58;
  System_String_o *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754724c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor_718b100);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"Variants");
    Il2CppMethodInitialized_0754724c = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  local_98 = (Il2CppObject *)0x0;
  local_68 = (undefined1  [8])0x0;
  ppIStack_60 = (Il2CppObject **)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (experience == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b3a212;
  bVar5 = (*(experience->klass->vtable)._28_HasKey.methodPtr)
                    (experience,"Variants",(experience->klass->vtable)._28_HasKey.method);
  if (!bVar5) {
    return (System_Collections_Generic_Dictionary_string__List_string___o *)0x0;
  }
  pSVar7 = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                     (experience,"Variants",(experience->klass->vtable)._7_get_Item.method);
  if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b3a212;
  bVar5 = (*(pSVar7->klass->vtable)._17_get_IsObject.methodPtr)
                    (pSVar7,(pSVar7->klass->vtable)._17_get_IsObject.method);
  if (!bVar5) {
    NullCheck(experience);
    pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Name");
    pSVar7 = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                       (experience,pSVar13,(experience->klass->vtable)._7_get_Item.method);
    pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_runtime_class_init_inline(pIVar11);
    pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar7,(MethodInfo *)0x0);
    pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Variants must be an object in experience ");
    str2 = il2cpp_codegen_get_runtime_metadata(&".");
    pSVar13 = System_String__Concat_5301f10(pSVar10,pSVar13,str2,(MethodInfo *)0x0);
    pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
    pSVar14 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
    System_IO_InvalidDataException___ctor_628b0d0(pSVar14,pSVar13,(MethodInfo *)0x0);
    pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05b3965e;
label_05b39728:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05b39728;
label_05b3965e:
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor_718b100);
  if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pIVar8 = (Il2CppObject *)SimpleJSONFixed_JSONNode__get_Linq(pSVar7,(MethodInfo *)0x0),
     pIVar8 != (Il2CppObject *)0x0)) {
    pIVar11 = pIVar8->klass;
    uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
    local_88 = experience;
    if (uVar16 != 0) {
      pIVar4 = (pIVar11->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___c **)
             ((long)&pIVar4->interfaceType + lVar18) ==
            TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_JSONNode) {
          pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
          goto label_05b3976d;
        }
        lVar18 = lVar18 + 0x10;
      } while (uVar16 * 0x10 != lVar18);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_JSONNode,0)
    ;
label_05b3976d:
    local_90 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    local_40 = 0;
    local_38 = &local_90;
    do {
      pIVar8 = local_90;
      if (local_90 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar11 = local_90->klass;
      uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar4 = (pIVar11->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar18) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
            goto label_05b39823;
          }
          lVar18 = lVar18 + 0x10;
        } while (uVar16 * 0x10 != lVar18);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b39823:
      bVar5 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      pIVar8 = local_90;
      if (!bVar5) {
        if (local_90 == (Il2CppObject *)0x0) {
          return __this;
        }
        pIVar11 = local_90->klass;
        uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
        if (uVar16 == 0) goto label_05b3a04f;
        pIVar4 = (pIVar11->_1).interfaceOffsets;
        lVar18 = 0;
        goto label_05b3a040;
      }
      if (local_90 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar11 = local_90->klass;
      uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar4 = (pIVar11->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__JSONNode___c **)
               ((long)&pIVar4->interfaceType + lVar18) ==
              TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_JSONNode) {
            pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
            goto label_05b398a3;
          }
          lVar18 = lVar18 + 0x10;
        } while (uVar16 * 0x10 != lVar18);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_90,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_JSONNode
                          ,0);
label_05b398a3:
      auVar19 = (*pVVar9->methodPtr)(pIVar8);
      plVar17 = auVar19._8_8_;
      pSVar13 = auVar19._0_8_;
      bVar5 = System_String__IsNullOrWhiteSpace(pSVar13,(MethodInfo *)0x0);
      if (bVar5) {
label_05b3a0ab:
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        pSVar12 = (System_String_array *)SZArrayNew(pIVar11,5);
        if (pSVar12 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Invalid variant ");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,0,pIVar8);
        il2cpp_codegen_get_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,1,(Il2CppObject *)pSVar13);
        pIVar8 = il2cpp_codegen_get_runtime_metadata(&" in experience ");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,2,pIVar8);
        pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Name");
        pSVar7 = (*(local_88->klass->vtable)._7_get_Item.methodPtr)
                           (local_88,pSVar13,(local_88->klass->vtable)._7_get_Item.method);
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        if ((pIVar11->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar11);
        }
        pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar7,(MethodInfo *)0x0);
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,3,(Il2CppObject *)pSVar13);
        pIVar8 = il2cpp_codegen_get_runtime_metadata(&".");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,4,pIVar8);
        pSVar13 = System_String__Concat_5302910(pSVar12,(MethodInfo *)0x0);
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
        pSVar14 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
        System_IO_InvalidDataException___ctor_628b0d0(pSVar14,pSVar13,(MethodInfo *)0x0);
        pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
      }
      if (__this == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                         (Il2CppObject *)pSVar13,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
      if (bVar5) goto label_05b3a0ab;
      if (plVar17 == (long *)0x0) {
        ThrowNullReferenceException();
      }
      cVar6 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
      if (cVar6 == '\0') goto label_05b3a0ab;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pIVar8 = (Il2CppObject *)(**(code **)(*plVar17 + 0x2e8))(plVar17,*(undefined8 *)(*plVar17 + 0x2f0));
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar11 = pIVar8->klass;
      uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar4 = (pIVar11->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar4->interfaceType + lVar18)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
            goto label_05b399b3;
          }
          lVar18 = lVar18 + 0x10;
        } while (uVar16 * 0x10 != lVar18);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05b399b3:
      pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_80._8_8_ = &local_98;
      local_48 = pSVar13;
joined_r0x05b399df:
      local_98 = pIVar8;
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar11 = pIVar8->klass;
      uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar4 = (pIVar11->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar18) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
            goto label_05b39a73;
          }
          lVar18 = lVar18 + 0x10;
        } while (uVar16 * 0x10 != lVar18);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b39a73:
      cVar6 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      pIVar8 = local_98;
      if (cVar6 != '\0') {
        if (local_98 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar11 = local_98->klass;
        uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar4 = (pIVar11->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar4->interfaceType + lVar18) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
              goto label_05b39af3;
            }
            lVar18 = lVar18 + 0x10;
          } while (uVar16 * 0x10 != lVar18);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_98,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_05b39af3:
        pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        cVar6 = (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        if (cVar6 == '\0') {
          pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
          pSVar12 = (System_String_array *)SZArrayNew(pIVar11,5);
          if (pSVar12 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Variant ");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,0,pIVar8);
          il2cpp_codegen_get_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,1,(Il2CppObject *)pSVar13);
          pIVar8 = il2cpp_codegen_get_runtime_metadata(&" must contain rule strings in experience ");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,2,pIVar8);
          pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Name");
          pSVar7 = (*(local_88->klass->vtable)._7_get_Item.methodPtr)
                             (local_88,pSVar13,(local_88->klass->vtable)._7_get_Item.method);
          pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
          if ((pIVar11->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar11);
          }
          pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar7,(MethodInfo *)0x0);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,3,(Il2CppObject *)pSVar13);
          pIVar8 = il2cpp_codegen_get_runtime_metadata(&".");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,4,pIVar8);
          pSVar13 = System_String__Concat_5302910(pSVar12,(MethodInfo *)0x0);
          pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
          pSVar14 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
          System_IO_InvalidDataException___ctor_628b0d0(pSVar14,pSVar13,(MethodInfo *)0x0);
          pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
        }
        pSVar10 = (System_String_o *)
                  (*pIVar8->klass->vtable[9].methodPtr)(pIVar8,pIVar8->klass->vtable[9].method);
        pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_05b39e06:
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (__this_00->fields)._items;
        if (pSVar12 == (System_String_array *)0x0) goto label_05b39e06;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar12->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar12->m_Items[(int)uVar3] = pSVar10;
          Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3);
          pIVar8 = local_98;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar10,
                     (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
          pIVar8 = local_98;
        }
        goto joined_r0x05b399df;
      }
      if (local_98 != (Il2CppObject *)0x0) {
        pIVar11 = local_98->klass;
        uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar4 = (pIVar11->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar18) ==
                TypeInfo_System_IDisposable) {
              pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
              goto label_05b39bfd;
            }
            lVar18 = lVar18 + 0x10;
          } while (uVar16 * 0x10 != lVar18);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_98,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b39bfd:
        (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      if (Il2CppMethodInitialized_07542886 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_07542886 = '\x01';
        uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      typeResolver = (System_Func_string__UIRuleValueType__o *)
                     TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string)
      ;
      System_Collections_Generic_HashSet_object____ctor_4fb2f30
                ((System_Collections_Generic_HashSet_object__o *)__this_01,
                 (System_Collections_Generic_IEqualityComparer_T__o *)typeResolver,
                 (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
      __this_02 = Settings_RuleParser__Parse
                            ((System_Collections_Generic_IEnumerable_string__o *)__this_00,typeResolver,
                             method_00);
      if (__this_02 == (System_Collections_Generic_List_UIRule__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                 (System_Collections_Generic_List_object__o *)__this_02,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
      local_58 = local_70;
      local_68 = (undefined1  [8])local_80._0_8_;
      ppIStack_60 = (Il2CppObject **)local_80._8_8_;
      local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_80._8_8_ = local_68;
      if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
        if (bVar5) {
          if (local_58 != (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
label_05b39f72:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
              pIVar8 = local_58, bVar5) {
          if (local_58 == (Il2CppObject *)0x0) goto label_05b39f72;
          bVar5 = System_Collections_Generic_HashSet_object___Add
                            ((System_Collections_Generic_HashSet_object__o *)__this_01,local_58[1].monitor,
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          if (!bVar5) {
            pSVar13 = pIVar8[1].monitor;
            pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Duplicate variant rule: ");
            pSVar13 = System_String__Concat_52f0320(pSVar10,pSVar13,(MethodInfo *)0x0);
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
            __this_03 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar11);
            System_FormatException___ctor_549ecd0(__this_03,pSVar13,(MethodInfo *)0x0);
            pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar15);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)local_48,
                 (Il2CppObject *)__this_00,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add
                );
    } while( true );
  }
label_05b3a212:
  ThrowNullReferenceException();
  while (lVar18 = lVar18 + 0x10, uVar16 * 0x10 != lVar18) {
label_05b3a040:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar18) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar18);
      goto label_05b3a06d;
    }
  }
label_05b3a04f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b3a06d:
  (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
  return __this;
}


// Settings.PresetDefinition$$get_UIRulesObject
// il2cpp: System_Collections_Generic_List_UIRule__o* Settings_PresetDefinition__get_UIRulesObject (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x5b3b780

System_Collections_Generic_List_UIRule__o *
Settings_PresetDefinition__get_UIRulesObject(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIRule__o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = (__this->fields)._uiRules;
  if (pSVar1 == (System_Collections_Generic_List_UIRule__o *)0x0) {
    pSVar1 = Settings_RuleParser__Parse
                       ((System_Collections_Generic_IEnumerable_string__o *)(__this->fields).UIRules,
                        (System_Func_string__UIRuleValueType__o *)method,in_RDX);
    (__this->fields)._uiRules = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules);
    return (__this->fields)._uiRules;
  }
  return pSVar1;
}


// Settings.PresetDefinition$$set_UIRulesObject
// il2cpp: void Settings_PresetDefinition__set_UIRulesObject (Settings_PresetDefinition_o* __this, System_Collections_Generic_List_UIRule__o* value, const MethodInfo* method);
// 0x5b3b7c0

void Settings_PresetDefinition__set_UIRulesObject
               (Settings_PresetDefinition_o *__this,System_Collections_Generic_List_UIRule__o *value,
               MethodInfo *method)

{
  (__this->fields)._uiRules = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules);
  return;
}


// Settings.PresetDefinition$$get_MapRule
// il2cpp: Settings_UIRule_o* Settings_PresetDefinition__get_MapRule (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x5b3b7d0
// eh: try 0x5b3b8b4..0x5b3b915 -> pad 0x5b3b920 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3b938..0x5b3b93d -> pad 0x5b3b95c cleanup
// eh: try 0x5b3b95f..0x5b3b969 -> pad 0x5b3b971 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3b91a: jmp 0x5b3b920
// asm:   0x5b3b91c: jmp 0x5b3b920
// asm:   0x5b3b91e: jmp 0x5b3b920
// asm:   0x5b3b920: mov rbx, rax
// asm:   0x5b3b923: cmp edx, 1
// asm:   0x5b3b926: jne 0x5b3b95f
// asm:   0x5b3b928: mov rdi, rbx
// asm:   0x5b3b92b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3b930: mov rbx, qword ptr [rax]
// asm:   0x5b3b933: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b3b938: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3b93d: lea rax, [rip + 0x1753424]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x5b3b944: mov rsi, qword ptr [rax]
// asm:   0x5b3b947: mov rdi, rsp
// asm:   0x5b3b94a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3b94f: test rbx, rbx
// asm:   0x5b3b952: je 0x5b3b8ff
// asm:   0x5b3b954: mov rdi, rbx
// asm:   0x5b3b957: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3b95c: mov rbx, rax
// asm:   0x5b3b95f: lea rdi, [rsp + 0x20]
// asm:   0x5b3b964: call 0x2fd6ba0  ; il2cpp_runtime_helper_02fd6ba0()
// asm:   0x5b3b969: mov rdi, rbx
// asm:   0x5b3b96c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3b971: mov rdi, rax
// asm:   0x5b3b974: call 0x2ab61e0  ; __clang_call_terminate()

Settings_UIRule_o *
Settings_PresetDefinition__get_MapRule(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_UIRule__o *pSVar3;
  Settings_UIRule_o *pSVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  Settings_UIRule_o **targetAddress;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_0754724d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    Il2CppMethodInitialized_0754724d = '\x01';
    in_RDX = extraout_RDX;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields)._mapRule;
  if (pSVar4 == (Settings_UIRule_o *)0x0) {
    pSVar3 = (__this->fields)._uiRules;
    if (pSVar3 == (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar3 = Settings_RuleParser__Parse
                         ((System_Collections_Generic_IEnumerable_string__o *)(__this->fields).UIRules,
                          (System_Func_string__UIRuleValueType__o *)0x0,in_RDX);
      (__this->fields)._uiRules = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules);
      pSVar3 = (__this->fields)._uiRules;
      if (pSVar3 == (System_Collections_Generic_List_UIRule__o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    targetAddress = &(__this->fields)._mapRule;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
      pIVar1 = local_58.fields._current;
      if (!bVar2) break;
      if ((Settings_UIRule_o *)local_58.fields._current == (Settings_UIRule_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_String__op_Equality
                        (((Settings_UIRule_Fields *)((long)local_58.fields._current + 0x10))->SettingId,
                         "general.MapName",(MethodInfo *)0x0);
      if (bVar2) {
        *targetAddress = (Settings_UIRule_o *)pIVar1;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    pSVar4 = *targetAddress;
  }
  return pSVar4;
}


// Settings.PresetDefinition$$get_ModeRule
// il2cpp: Settings_UIRule_o* Settings_PresetDefinition__get_ModeRule (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x5b3b980
// eh: try 0x5b3ba64..0x5b3bac5 -> pad 0x5b3bad0 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3bae8..0x5b3baed -> pad 0x5b3bb0c cleanup
// eh: try 0x5b3bb0f..0x5b3bb19 -> pad 0x5b3bb21 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3baca: jmp 0x5b3bad0
// asm:   0x5b3bacc: jmp 0x5b3bad0
// asm:   0x5b3bace: jmp 0x5b3bad0
// asm:   0x5b3bad0: mov rbx, rax
// asm:   0x5b3bad3: cmp edx, 1
// asm:   0x5b3bad6: jne 0x5b3bb0f
// asm:   0x5b3bad8: mov rdi, rbx
// asm:   0x5b3badb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3bae0: mov rbx, qword ptr [rax]
// asm:   0x5b3bae3: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b3bae8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3baed: lea rax, [rip + 0x1753274]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x5b3baf4: mov rsi, qword ptr [rax]
// asm:   0x5b3baf7: mov rdi, rsp
// asm:   0x5b3bafa: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3baff: test rbx, rbx
// asm:   0x5b3bb02: je 0x5b3baaf
// asm:   0x5b3bb04: mov rdi, rbx
// asm:   0x5b3bb07: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3bb0c: mov rbx, rax
// asm:   0x5b3bb0f: lea rdi, [rsp + 0x20]
// asm:   0x5b3bb14: call 0x2fd6bd0  ; il2cpp_runtime_helper_02fd6bd0()
// asm:   0x5b3bb19: mov rdi, rbx
// asm:   0x5b3bb1c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3bb21: mov rdi, rax
// asm:   0x5b3bb24: call 0x2ab61e0  ; __clang_call_terminate()

Settings_UIRule_o *
Settings_PresetDefinition__get_ModeRule(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_UIRule__o *pSVar3;
  Settings_UIRule_o *pSVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  Settings_UIRule_o **targetAddress;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_0754724e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_0754724e = '\x01';
    in_RDX = extraout_RDX;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields)._modeRule;
  if (pSVar4 == (Settings_UIRule_o *)0x0) {
    pSVar3 = (__this->fields)._uiRules;
    if (pSVar3 == (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar3 = Settings_RuleParser__Parse
                         ((System_Collections_Generic_IEnumerable_string__o *)(__this->fields).UIRules,
                          (System_Func_string__UIRuleValueType__o *)0x0,in_RDX);
      (__this->fields)._uiRules = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules);
      pSVar3 = (__this->fields)._uiRules;
      if (pSVar3 == (System_Collections_Generic_List_UIRule__o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    targetAddress = &(__this->fields)._modeRule;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
      pIVar1 = local_58.fields._current;
      if (!bVar2) break;
      if ((Settings_UIRule_o *)local_58.fields._current == (Settings_UIRule_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_String__op_Equality
                        (((Settings_UIRule_Fields *)((long)local_58.fields._current + 0x10))->SettingId,
                         "general.GameMode",(MethodInfo *)0x0);
      if (bVar2) {
        *targetAddress = (Settings_UIRule_o *)pIVar1;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    pSVar4 = *targetAddress;
  }
  return pSVar4;
}


// Settings.PresetDefinition$$GetRule
// il2cpp: Settings_UIRule_o* Settings_PresetDefinition__GetRule (Settings_PresetDefinition_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5b3bb30
// eh: try 0x5b3bbd4..0x5b3bc37 -> pad 0x5b3bc40 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3bc58..0x5b3bc5d -> pad 0x5b3bc82 cleanup
// eh: try 0x5b3bc85..0x5b3bc8f -> pad 0x5b3bc97 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3bbc9: nop dword ptr [rax]
// asm:   0x5b3bc3c: jmp 0x5b3bc40
// asm:   0x5b3bc3e: jmp 0x5b3bc40
// asm:   0x5b3bc40: mov rbx, rax
// asm:   0x5b3bc43: cmp edx, 1
// asm:   0x5b3bc46: jne 0x5b3bc85
// asm:   0x5b3bc48: mov rdi, rbx
// asm:   0x5b3bc4b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3bc50: mov rbx, qword ptr [rax]
// asm:   0x5b3bc53: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b3bc58: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3bc5d: lea rax, [rip + 0x1753104]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x5b3bc64: mov rsi, qword ptr [rax]
// asm:   0x5b3bc67: mov rdi, rsp
// asm:   0x5b3bc6a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3bc6f: test rbx, rbx
// asm:   0x5b3bc72: jne 0x5b3bc7a
// asm:   0x5b3bc74: xor ebx, ebx
// asm:   0x5b3bc76: xor ebp, ebp
// asm:   0x5b3bc78: jmp 0x5b3bc1c
// asm:   0x5b3bc7a: mov rdi, rbx
// asm:   0x5b3bc7d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3bc82: mov rbx, rax
// asm:   0x5b3bc85: lea rdi, [rsp + 0x20]
// asm:   0x5b3bc8a: call 0x2fd6c00  ; il2cpp_runtime_helper_02fd6c00()
// asm:   0x5b3bc8f: mov rdi, rbx
// asm:   0x5b3bc92: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3bc97: mov rdi, rax
// asm:   0x5b3bc9a: call 0x2ab61e0  ; __clang_call_terminate()

Settings_UIRule_o *
Settings_PresetDefinition__GetRule(Settings_PresetDefinition_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_UIRule__o *__this_00;
  bool bVar1;
  Settings_UIRule_o *pSVar2;
  Settings_UIRule_o *pSVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  
  if (Il2CppMethodInitialized_0754724f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    Il2CppMethodInitialized_0754724f = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._uiRules;
  if (__this_00 == (System_Collections_Generic_List_UIRule__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
  uStack_38 = 0;
  puStack_30 = (undefined1 *)&SStack_58;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    pSVar3 = (Settings_UIRule_o *)SStack_58.fields._current;
    if (!bVar1) {
      iVar4 = 5;
      pSVar3 = (Settings_UIRule_o *)0x0;
      goto label_05b3bc0a;
    }
    if ((Settings_UIRule_o *)SStack_58.fields._current == (Settings_UIRule_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__op_Equality
                      (((Settings_UIRule_Fields *)((long)SStack_58.fields._current + 0x10))->SettingId,id,
                       (MethodInfo *)0x0);
  } while (!bVar1);
  iVar4 = 4;
label_05b3bc0a:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
  pSVar2 = (Settings_UIRule_o *)0x0;
  if (iVar4 == 4) {
    pSVar2 = pSVar3;
  }
  return pSVar2;
}


// Settings.PresetDefinition$$.ctor
// il2cpp: void Settings_PresetDefinition___ctor (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x5b3bca0

void Settings_PresetDefinition___ctor(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


