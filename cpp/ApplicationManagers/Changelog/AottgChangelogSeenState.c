// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Changelog/AottgChangelogSeenState.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogSeenState$$get_FilePathOverride
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__get_FilePathOverride (const MethodInfo* method);
// 0x5e263e0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogSeenState__get_FilePathOverride(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075484eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_075484eb = '\x01';
  }
  return TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
         _FilePathOverride_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$set_FilePathOverride
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogSeenState__set_FilePathOverride (System_String_o* value, const MethodInfo* method);
// 0x5e26420

void ApplicationManagers_Changelog_AottgChangelogSeenState__set_FilePathOverride
               (System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075484ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_075484ec = '\x01';
  }
  TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
  _FilePathOverride_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
              _FilePathOverride_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$ShouldAutoOpen
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogSeenState__ShouldAutoOpen (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x5e26470

bool ApplicationManagers_Changelog_AottgChangelogSeenState__ShouldAutoOpen
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  bool bVar2;
  System_String_o *a;
  MethodInfo *method_00;
  
  if (latest == (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    if ((latest->fields)._HasChangelog_k__BackingField != false) {
      value = (&(latest->fields)._Version_k__BackingField)[!bVar1];
      bVar2 = false;
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar1) {
        method_00 = (MethodInfo *)(latest->fields)._Version_k__BackingField;
        bVar2 = false;
        bVar1 = System_String__IsNullOrEmpty((System_String_o *)method_00,(MethodInfo *)0x0);
        if (!bVar1) {
          a = ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity(method_00);
          bVar2 = System_String__Equals_52ffe30(a,value,4,(MethodInfo *)0x0);
          bVar2 = !bVar2;
        }
      }
    }
  }
  return bVar2;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$MarkSeen
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogSeenState__MarkSeen (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x5e26740
// eh: try 0x5e2678f..0x5e267d5 -> pad 0x5e267e5 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e267fc..0x5e268ac -> pad 0x5e268b1 (+1 call sites) cleanup
// eh: try 0x5e268b4..0x5e268b9 -> pad 0x5e268c1 catch (...) [compiler noexcept guard]
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e267dd: jmp 0x5e267e5
// asm:   0x5e267df: jmp 0x5e267e5
// asm:   0x5e267e1: jmp 0x5e267e5
// asm:   0x5e267e3: jmp 0x5e267e5
// asm:   0x5e267e5: mov rbx, rax
// asm:   0x5e267e8: cmp edx, 1
// asm:   0x5e267eb: jne 0x5e268b9
// asm:   0x5e267f1: mov rdi, rbx
// asm:   0x5e267f4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e267f9: mov rbx, rax
// asm:   0x5e267fc: lea rdi, [rip + 0x14518bd]  ; TypeInfo_System_Exception
// asm:   0x5e26803: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e26808: mov rcx, qword ptr [rbx]
// asm:   0x5e2680b: mov rsi, qword ptr [rcx]
// asm:   0x5e2680e: mov rdi, rax
// asm:   0x5e26811: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e26816: test al, al
// asm:   0x5e26818: je 0x5e2688b
// asm:   0x5e2681a: mov rbx, qword ptr [rbx]
// asm:   0x5e2681d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e26822: test rbx, rbx
// asm:   0x5e26825: je 0x5e268ac
// asm:   0x5e2682b: mov rax, qword ptr [rbx]
// asm:   0x5e2682e: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e26835: mov rdi, rbx
// asm:   0x5e26838: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e2683e: mov rbx, rax
// asm:   0x5e26841: lea rdi, [rip + 0x14ada68]  ; "AottgChangelogSeenState: failed to save seen changelog: "
// asm:   0x5e26848: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2684d: mov rdi, rax
// asm:   0x5e26850: mov rsi, rbx
// asm:   0x5e26853: xor edx, edx
// asm:   0x5e26855: call 0x53f0320  ; System_String__Concat()
// asm:   0x5e2685a: mov rbx, rax
// asm:   0x5e2685d: lea rdi, [rip + 0x1450de4]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e26864: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e26869: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e26870: jne 0x5e2687a
// asm:   0x5e26872: mov rdi, rax
// asm:   0x5e26875: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e2687a: mov rdi, rbx
// asm:   0x5e2687d: xor esi, esi
// asm:   0x5e2687f: add rsp, 8
// asm:   0x5e26883: pop rbx
// asm:   0x5e26884: pop r14
// asm:   0x5e26886: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e2688b: mov edi, 8
// asm:   0x5e26890: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e26895: mov rcx, qword ptr [rbx]
// asm:   0x5e26898: mov qword ptr [rax], rcx
// asm:   0x5e2689b: lea rsi, [rip + 0x1006c5e]
// asm:   0x5e268a2: mov rdi, rax
// asm:   0x5e268a5: xor edx, edx
// asm:   0x5e268a7: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e268ac: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e268b1: mov rbx, rax
// asm:   0x5e268b4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e268b9: mov rdi, rbx
// asm:   0x5e268bc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e268c1: mov rdi, rax
// asm:   0x5e268c4: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Changelog_AottgChangelogSeenState__MarkSeen
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  MethodInfo *value;
  
  if (Il2CppMethodInitialized_075484ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_075484ed = '\x01';
  }
  if (latest == (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    value = (MethodInfo *)0x0;
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    value = (MethodInfo *)(&(latest->fields)._Version_k__BackingField)[!bVar1];
  }
  pMVar3 = value;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(pMVar3);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pMVar3 = (MethodInfo *)System_IO_Path__GetDirectoryName(pSVar2,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory((System_String_o *)pMVar3,(MethodInfo *)0x0);
    pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(pMVar3);
    System_IO_File__WriteAllText(pSVar2,(System_String_o *)value,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$Identity
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__Identity (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x5e264f0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogSeenState__Identity
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  bool bVar1;
  
  if (latest == (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
  return (&(latest->fields)._Version_k__BackingField)[!bVar1];
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$ReadSeenIdentity
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity (const MethodInfo* method);
// 0x5e26520
// eh: try 0x5e2652d..0x5e26651 -> pad 0x5e26657 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2666e..0x5e2671e -> pad 0x5e26723 (+1 call sites) cleanup
// eh: try 0x5e26726..0x5e2672b -> pad 0x5e26733 catch (...) [compiler noexcept guard]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e26651: jmp 0x5e26657
// asm:   0x5e26653: jmp 0x5e26657
// asm:   0x5e26655: jmp 0x5e26657
// asm:   0x5e26657: mov rbx, rax
// asm:   0x5e2665a: cmp edx, 1
// asm:   0x5e2665d: jne 0x5e2672b
// asm:   0x5e26663: mov rdi, rbx
// asm:   0x5e26666: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2666b: mov rbx, rax
// asm:   0x5e2666e: lea rdi, [rip + 0x1451a4b]  ; TypeInfo_System_Exception
// asm:   0x5e26675: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2667a: mov rcx, qword ptr [rbx]
// asm:   0x5e2667d: mov rsi, qword ptr [rcx]
// asm:   0x5e26680: mov rdi, rax
// asm:   0x5e26683: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e26688: test al, al
// asm:   0x5e2668a: je 0x5e266fd
// asm:   0x5e2668c: mov rbx, qword ptr [rbx]
// asm:   0x5e2668f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e26694: test rbx, rbx
// asm:   0x5e26697: je 0x5e2671e
// asm:   0x5e2669d: mov rax, qword ptr [rbx]
// asm:   0x5e266a0: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e266a7: mov rdi, rbx
// asm:   0x5e266aa: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e266b0: mov rbx, rax
// asm:   0x5e266b3: lea rdi, [rip + 0x14adbee]  ; "AottgChangelogSeenState: failed to read seen changelog: "
// asm:   0x5e266ba: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e266bf: mov rdi, rax
// asm:   0x5e266c2: mov rsi, rbx
// asm:   0x5e266c5: xor edx, edx
// asm:   0x5e266c7: call 0x53f0320  ; System_String__Concat()
// asm:   0x5e266cc: mov r14, rax
// asm:   0x5e266cf: lea rdi, [rip + 0x1450f72]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e266d6: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e266db: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e266e2: jne 0x5e266ec
// asm:   0x5e266e4: mov rdi, rax
// asm:   0x5e266e7: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e266ec: xor ebx, ebx
// asm:   0x5e266ee: mov rdi, r14
// asm:   0x5e266f1: xor esi, esi
// asm:   0x5e266f3: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e266f8: jmp 0x5e26641
// asm:   0x5e266fd: mov edi, 8
// asm:   0x5e26702: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e26707: mov rcx, qword ptr [rbx]
// asm:   0x5e2670a: mov qword ptr [rax], rcx
// asm:   0x5e2670d: lea rsi, [rip + 0x1006dec]
// asm:   0x5e26714: mov rdi, rax
// asm:   0x5e26717: xor edx, edx
// asm:   0x5e26719: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e2671e: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e26723: mov rbx, rax
// asm:   0x5e26726: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2672b: mov rdi, rbx
// asm:   0x5e2672e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e26733: mov rdi, rax
// asm:   0x5e26736: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075484ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"ChangelogSeen.txt");
    Il2CppMethodInitialized_075484ee = '\x01';
  }
  if (Il2CppMethodInitialized_0754858f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_0754858f = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
                     _FilePathOverride_k__BackingField,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar2 = TypeInfo_Utility_FolderPaths->static_fields->Settings;
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,"ChangelogSeen.txt",(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_0754858f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
      Il2CppMethodInitialized_0754858f = '\x01';
    }
    pSVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
             _FilePathOverride_k__BackingField;
  }
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (System_String_o *)0x0;
  }
  return pSVar2;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$FilePath
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath (const MethodInfo* method);
// 0x5e268d0

System_String_o * ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075484ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"ChangelogSeen.txt");
    Il2CppMethodInitialized_075484ee = '\x01';
  }
  if (Il2CppMethodInitialized_0754858f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_0754858f = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
                     _FilePathOverride_k__BackingField,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar2 = TypeInfo_Utility_FolderPaths->static_fields->Settings;
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,"ChangelogSeen.txt",(MethodInfo *)0x0);
    return pSVar2;
  }
  if (Il2CppMethodInitialized_0754858f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_0754858f = '\x01';
  }
  return TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
         _FilePathOverride_k__BackingField;
}


