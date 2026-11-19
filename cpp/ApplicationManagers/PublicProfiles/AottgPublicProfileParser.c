// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (System_String_o* json, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x5e1ff50
// eh: try 0x5e1ffda..0x5e1fff2 -> pad 0x5e20004 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e20028..0x5e2006b -> pad 0x5e2006b (+1 call sites) cleanup
// eh: try 0x5e2006e..0x5e20073 -> pad 0x5e2007b catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e20002: jmp 0x5e20004
// asm:   0x5e20004: mov rbx, rax
// asm:   0x5e20007: cmp edx, 1
// asm:   0x5e2000a: jne 0x5e20073
// asm:   0x5e2000c: mov rdi, rbx
// asm:   0x5e2000f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e20014: mov rbx, rax
// asm:   0x5e20017: lea rax, [rip + 0x17366aa]
// asm:   0x5e2001e: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e20022: mov rax, qword ptr [rbx]
// asm:   0x5e20025: mov rsi, qword ptr [rax]
// asm:   0x5e20028: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e2002d: test al, al
// asm:   0x5e2002f: je 0x5e2004a
// asm:   0x5e20031: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e20036: lea rdi, [rip + 0x14d2d73]  ; "bad_json"
// asm:   0x5e2003d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e20042: mov r12, rax
// asm:   0x5e20045: jmp 0x5e1ffb7
// asm:   0x5e2004a: mov edi, 8
// asm:   0x5e2004f: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e20054: mov rcx, qword ptr [rbx]
// asm:   0x5e20057: mov qword ptr [rax], rcx
// asm:   0x5e2005a: lea rsi, [rip + 0x100d49f]
// asm:   0x5e20061: mov rdi, rax
// asm:   0x5e20064: xor edx, edx
// asm:   0x5e20066: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e2006b: mov rbx, rax
// asm:   0x5e2006e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e20073: mov rdi, rbx
// asm:   0x5e20076: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2007b: mov rdi, rax
// asm:   0x5e2007e: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
               (System_String_o *json,ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,
               System_String_o **error,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *node;
  
  if (Il2CppMethodInitialized_075484a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"empty_response");
    Il2CppMethodInitialized_075484a8 = '\x01';
  }
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(profile);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  bVar2 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  pSVar1 = "empty_response";
  if (bVar2) {
    *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
    bVar2 = false;
    Il2CppCodeGenWriteBarrier(profile);
    *error = pSVar1;
    Il2CppCodeGenWriteBarrier(error);
  }
  else {
    node = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar2 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse_5d200c0
                      (node,profile,error,method);
  }
  return bVar2;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x5e200c0
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2050d: lea rdi, [rsp + 0x60]
// asm:   0x5e20512: xor esi, esi
// asm:   0x5e20514: call 0x559c8e0  ; System_DateTimeOffset__ToUniversalTime()
// asm:   0x5e20519: mov rbp, rax
// asm:   0x5e2051c: mov ebx, edx
// asm:   0x5e2051e: lea rax, [rip + 0x1455183]  ; TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfile
// asm:   0x5e20525: mov rdi, qword ptr [rax]
// asm:   0x5e20528: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5e2052d: mov r12, rax
// asm:   0x5e20530: mov qword ptr [rsp + 0x70], rbp
// asm:   0x5e20535: mov word ptr [rsp + 0x78], bx
// asm:   0x5e2053a: movups xmm0, xmmword ptr [rsp + 0x70]
// asm:   0x5e2053f: movups xmmword ptr [rsp + 0x18], xmm0
// asm:   0x5e20544: mov qword ptr [rsp + 0x10], r13
// asm:   0x5e20549: mov rax, qword ptr [rsp + 0x30]
// asm:   0x5e2054e: mov qword ptr [rsp + 8], rax
// asm:   0x5e20553: mov rax, qword ptr [rsp + 0x38]
// asm:   0x5e20558: mov qword ptr [rsp], rax
// asm:   0x5e2055c: mov rdi, r12
// asm:   0x5e2055f: mov rsi, r15
// asm:   0x5e20562: mov rdx, qword ptr [rsp + 0x58]
// asm:   0x5e20567: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x5e2056c: mov r8, qword ptr [rsp + 0x48]
// asm:   0x5e20571: mov r9, qword ptr [rsp + 0x40]
// asm:   0x5e20576: call 0x5e1fb40  ; ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor()
// asm:   0x5e2057b: mov qword ptr [r14], r12
// asm:   0x5e2057e: mov rdi, r14
// asm:   0x5e20581: mov rsi, r12
// asm:   0x5e20584: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5e20589: mov bpl, 1
// asm:   0x5e2058c: jmp 0x5e202d3

bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse_5d200c0
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error,
               MethodInfo *method)

{
  System_DateTimeOffset_o createdAt;
  bool bVar1;
  System_String_o **ppSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  System_String_o *pSVar5;
  System_Globalization_CultureInfo_o *formatProvider;
  System_String_o *characterInfoJson;
  System_String_array *roles;
  System_String_o *description;
  System_String_o *avatarKey;
  System_String_o *bannerKey;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this;
  MethodInfo *pMVar6;
  System_DateTimeOffset_o SVar7;
  MethodInfo *in_stack_ffffffffffffff60;
  System_DateTimeOffset_o local_68;
  System_DateTime_o local_58;
  int16_t iStack_50;
  undefined6 uStack_4e;
  System_Guid_Fields local_48;
  
  if (Il2CppMethodInitialized_075484a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_display_name");
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_account_id");
    il2cpp_codegen_initialize_runtime_metadata(&"displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"createdAt");
    il2cpp_codegen_initialize_runtime_metadata(&"characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"avatarKey");
    il2cpp_codegen_initialize_runtime_metadata(&"description");
    il2cpp_codegen_initialize_runtime_metadata(&"roles");
    il2cpp_codegen_initialize_runtime_metadata(&"bannerKey");
    Il2CppMethodInitialized_075484a9 = '\x01';
  }
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = 0;
  local_48._e = 0;
  local_48._f = 0;
  local_48._g = 0;
  local_48._h = 0;
  local_48._i = 0;
  local_48._j = 0;
  local_48._k = 0;
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(profile);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"bad_response";
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e20591:
      ThrowNullReferenceException();
    }
    pMVar6 = (MethodInfo *)"accountId";
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"accountId",(node->klass->vtable)._7_get_Item.method);
    pSVar4 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar3,pMVar6);
    bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((bVar1) ||
       (bVar1 = System_Guid__TryParse(pSVar4,(System_Guid_o *)&local_48,(MethodInfo *)0x0), !bVar1)) {
      ppSVar2 = &"bad_account_id";
    }
    else {
      pMVar6 = (MethodInfo *)"displayName";
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"displayName",(node->klass->vtable)._7_get_Item.method);
      value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar3,pMVar6);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar1) {
        local_68.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
        local_68.fields._offsetMinutes = 0;
        local_68.fields._10_6_ = 0;
        pMVar6 = (MethodInfo *)"createdAt";
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"createdAt",(node->klass->vtable)._7_get_Item.method);
        pSVar5 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar3,pMVar6);
        bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
          }
          System_DateTimeOffset__TryParse
                    (pSVar5,(System_IFormatProvider_o *)formatProvider,0x80,&local_68,(MethodInfo *)0x0);
        }
        pMVar6 = (MethodInfo *)"characterName";
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"characterName",(node->klass->vtable)._7_get_Item.method);
        pSVar5 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed(pSVar3,pMVar6);
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
        if (Il2CppMethodInitialized_075484aa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
          Il2CppMethodInitialized_075484aa = '\x01';
        }
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        characterInfoJson = (System_String_o *)0x0;
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e20591;
          bVar1 = (*(pSVar3->klass->vtable)._15_get_IsNull.methodPtr)
                            (pSVar3,(pSVar3->klass->vtable)._15_get_IsNull.method);
          if (bVar1) {
            characterInfoJson = (System_String_o *)0x0;
          }
          else {
            characterInfoJson =
                 (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          }
        }
        pMVar6 = (MethodInfo *)"roles";
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"roles",(node->klass->vtable)._7_get_Item.method);
        roles = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray(pSVar3,pMVar6);
        pMVar6 = (MethodInfo *)"description";
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"description",(node->klass->vtable)._7_get_Item.method);
        description = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                                (pSVar3,pMVar6);
        pMVar6 = (MethodInfo *)"avatarKey";
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"avatarKey",(node->klass->vtable)._7_get_Item.method);
        avatarKey = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                              (pSVar3,pMVar6);
        pMVar6 = (MethodInfo *)"bannerKey";
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"bannerKey",(node->klass->vtable)._7_get_Item.method);
        bannerKey = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                              (pSVar3,pMVar6);
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        SVar7 = System_DateTimeOffset__ToUniversalTime(&local_68,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfile);
        iStack_50 = SVar7.fields._offsetMinutes;
        createdAt.fields._10_6_ = uStack_4e;
        createdAt.fields._offsetMinutes = iStack_50;
        createdAt.fields._dateTime.fields._dateData = SVar7.fields._dateTime.fields._dateData.fields;
        local_58.fields._dateData = SVar7.fields._dateTime.fields._dateData.fields;
        ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor
                  (__this,pSVar4,value,pSVar5,characterInfoJson,roles,description,avatarKey,bannerKey,
                   createdAt,in_stack_ffffffffffffff60);
        *profile = __this;
        Il2CppCodeGenWriteBarrier(profile);
        return true;
      }
      ppSVar2 = &"bad_display_name";
    }
  }
  pSVar4 = *ppSVar2;
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(profile);
  *error = pSVar4;
  Il2CppCodeGenWriteBarrier(error);
  return false;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$RawJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e20710

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075484aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484aa = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (!bVar1) {
      pSVar2 = (*(node->klass->vtable)._3_ToString.methodPtr)(node,(node->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$StringArray
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e207a0
// eh: try 0x5e20a2f..0x5e20c43 -> pad 0x5e20c50 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e20c78..0x5e20c7d -> pad 0x5e20c82 cleanup
// eh: try 0x5e20c85..0x5e20c8f -> pad 0x5e20c97 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e209c0: jmp 0x5e20967
// asm:   0x5e209ff: lea r12, [rip + 0x14589f2]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5e20a06: xor r14d, r14d
// asm:   0x5e20a09: lea r13, [rip + 0x14505c0]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x5e20a10: lea rbp, [rip + 0x1475f41]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5e20a17: jmp 0x5e20a47
// asm:   0x5e20a3a: mov rbx, qword ptr [rsp]
// asm:   0x5e20a3e: test rbx, rbx
// asm:   0x5e20a41: je 0x5e20c34
// asm:   0x5e20bc9: nop dword ptr [rax]
// asm:   0x5e20c1d: lea rax, [rip + 0x1475dcc]  ; MethodInfo_System_Collections_Generic_List_string_ToArray
// asm:   0x5e20c24: mov rsi, qword ptr [rax]
// asm:   0x5e20c27: mov rdi, r15
// asm:   0x5e20c2a: call 0x3a5f5a0  ; System_Collections_Generic_List_object___ToArray()
// asm:   0x5e20c2f: jmp 0x5e20971
// asm:   0x5e20c48: mov rdi, r14
// asm:   0x5e20c4b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e20c50: jmp 0x5e20c5e
// asm:   0x5e20c52: jmp 0x5e20c5e
// asm:   0x5e20c54: jmp 0x5e20c5e
// asm:   0x5e20c56: jmp 0x5e20c5e
// asm:   0x5e20c58: jmp 0x5e20c5e
// asm:   0x5e20c5a: jmp 0x5e20c5e
// asm:   0x5e20c5c: jmp 0x5e20c5e
// asm:   0x5e20c5e: mov rbx, rax
// asm:   0x5e20c61: cmp edx, 1
// asm:   0x5e20c64: jne 0x5e20c85
// asm:   0x5e20c66: mov rdi, rbx
// asm:   0x5e20c69: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e20c6e: mov r14, qword ptr [rax]
// asm:   0x5e20c71: mov qword ptr [rsp + 8], r14
// asm:   0x5e20c76: xor ebp, ebp
// asm:   0x5e20c78: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e20c7d: jmp 0x5e20b9a
// asm:   0x5e20c82: mov rbx, rax
// asm:   0x5e20c85: lea rdi, [rsp + 8]
// asm:   0x5e20c8a: call 0x2fe05f0  ; il2cpp_runtime_helper_02fe05f0()
// asm:   0x5e20c8f: mov rdi, rbx
// asm:   0x5e20c92: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e20c97: mov rdi, rax
// asm:   0x5e20c9a: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  char cVar7;
  System_Collections_Generic_List_string__o *__this;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  Il2CppClass *pIVar10;
  System_String_o *value;
  System_String_array *pSVar11;
  ulong uVar12;
  MethodInfo *pMVar13;
  long lVar14;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075484ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075484ab = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_05e20925:
    pMVar13 = MethodInfo_System_Array_Empty_string;
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar10 = *(Il2CppClass **)((long)(pMVar13->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar10);
      pIVar10 = (pMVar13->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = (pMVar13->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    return *(System_String_array **)pIVar10->static_fields;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar6 = (*(node->klass->vtable)._16_get_IsArray.methodPtr)
                      (node,(node->klass->vtable)._16_get_IsArray.method);
    if (!bVar6) goto label_05e20925;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pIVar8 = (Il2CppObject *)
             (*(node->klass->vtable)._27_get_Children.methodPtr)
                       (node,(node->klass->vtable)._27_get_Children.method);
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar8->klass;
      uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar5 = (pIVar10->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar5->interfaceType + lVar14)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar9 = (VirtualInvokeData *)&pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar14)].methodPtr
            ;
            goto label_05e209d5;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar12 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05e209d5:
      pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
joined_r0x05e209f9:
      do {
        local_48 = pIVar8;
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar10 = pIVar8->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar5 = (pIVar10->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar14) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar9 = (VirtualInvokeData *)
                       &pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar14)].methodPtr;
              goto label_05e20aa3;
            }
            lVar14 = lVar14 + 0x10;
          } while (uVar12 * 0x10 != lVar14);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e20aa3:
        cVar7 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        pIVar8 = local_48;
        if (cVar7 == '\0') {
          if (local_48 == (Il2CppObject *)0x0) goto label_05e20c06;
          pIVar10 = local_48->klass;
          uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
          if (uVar12 == 0) goto label_05e20bdf;
          pIVar5 = (pIVar10->_1).interfaceOffsets;
          lVar14 = 0;
          goto label_05e20bd0;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar10 = local_48->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar5 = (pIVar10->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar5->interfaceType + lVar14) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar9 = (VirtualInvokeData *)
                       &pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar14)].methodPtr;
              goto label_05e20b23;
            }
            lVar14 = lVar14 + 0x10;
          } while (uVar12 * 0x10 != lVar14);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_05e20b23:
        pMVar13 = pVVar9->method;
        pIVar8 = (*pVVar9->methodPtr)(pIVar8,pMVar13);
        value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                          ((SimpleJSONFixed_JSONNode_o *)pIVar8,pMVar13);
        bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
        pIVar8 = local_48;
      } while (bVar6);
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar11 = (__this->fields)._items;
        if (pSVar11 != (System_String_array *)0x0) {
          uVar4 = (__this->fields)._size;
          if (uVar4 < (uint)pSVar11->max_length) {
            (__this->fields)._size = uVar4 + 1;
            pSVar11->m_Items[(int)uVar4] = value;
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar4);
            pIVar8 = local_48;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)value,
                       (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
            pIVar8 = local_48;
          }
          goto joined_r0x05e209f9;
        }
      }
      ThrowNullReferenceException();
    }
  }
  goto label_05e20c43;
  while (lVar14 = lVar14 + 0x10, uVar12 * 0x10 != lVar14) {
label_05e20bd0:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar9 = (VirtualInvokeData *)&pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar14)].methodPtr;
      goto label_05e20bfd;
    }
  }
label_05e20bdf:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e20bfd:
  (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
label_05e20c06:
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar11 = (System_String_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return pSVar11;
  }
label_05e20c43:
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$NullableTrimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e20670

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075484ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ac = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  value = (System_String_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (node->klass->vtable)._15_get_IsNull.method;
    bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)(node,method_00);
    if (bVar1) {
      value = (System_String_o *)0x0;
    }
    else {
      value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(node,method_00);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar1) {
        value = (System_String_o *)0x0;
      }
    }
  }
  return value;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e205a0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075484ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ad = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                        (node,(node->klass->vtable)._15_get_IsNull.method);
      if (bVar1) goto label_05e20604;
      pSVar2 = (*(node->klass->vtable)._9_get_Value.methodPtr)(node,(node->klass->vtable)._9_get_Value.method)
      ;
      if ((pSVar2 != (System_String_o *)0x0) ||
         (pSVar2 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar2 != (System_String_o *)0x0)) {
        pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    ThrowNullReferenceException();
  }
label_05e20604:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Fail
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail (ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, System_String_o* value, const MethodInfo* method);
// 0x5e20090

bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error,
               System_String_o *value,MethodInfo *method)

{
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(profile);
  *error = value;
  Il2CppCodeGenWriteBarrier(error);
  return false;
}


