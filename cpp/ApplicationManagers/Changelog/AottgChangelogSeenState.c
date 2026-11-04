// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogSeenState.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogSeenState$$get_FilePathOverride
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__get_FilePathOverride (const MethodInfo* method);
// 0x1823622c0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogSeenState__get_FilePathOverride(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_184347a31 = '\x01';
  }
  return TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
         _FilePathOverride_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$set_FilePathOverride
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogSeenState__set_FilePathOverride (System_String_o* value, const MethodInfo* method);
// 0x182362300

void ApplicationManagers_Changelog_AottgChangelogSeenState__set_FilePathOverride
               (System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_184347a32 = '\x01';
  }
  TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
  _FilePathOverride_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
              _FilePathOverride_k__BackingField,value);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$ShouldAutoOpen
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogSeenState__ShouldAutoOpen (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x182362240

bool ApplicationManagers_Changelog_AottgChangelogSeenState__ShouldAutoOpen
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_String_o *a;
  
  if (latest != (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    if ((latest->fields)._HasChangelog_k__BackingField != false) {
      value = (&(latest->fields)._Version_k__BackingField)[!bVar1];
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__IsNullOrEmpty((latest->fields)._Version_k__BackingField,(MethodInfo *)0x0);
        if (!bVar1) {
          a = ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity((MethodInfo *)0x0);
          bVar1 = System_String__Equals_196c550(a,value,4,(MethodInfo *)0x0);
          return !bVar1;
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$MarkSeen
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogSeenState__MarkSeen (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x182362060
// eh: try 0x1823620b5..0x1823620fe -> pad 0x1833197a0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182362100: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182362105: test rcx, rcx
// asm:   0x182362108: je 0x18236216c
// asm:   0x18236210a: mov rax, qword ptr [rcx]
// asm:   0x18236210d: mov rdx, qword ptr [rax + 0x190]
// asm:   0x182362114: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18236211a: mov rbx, rax
// asm:   0x18236211d: lea rcx, [rip + 0x1d4074c]  ; "AottgChangelogSeenState: failed to save seen changelog: "
// asm:   0x182362124: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182362129: mov rcx, rax
// asm:   0x18236212c: xor r8d, r8d
// asm:   0x18236212f: mov rdx, rbx
// asm:   0x182362132: call 0x181969e50  ; System_String__Concat()
// asm:   0x182362137: mov rbx, rax
// asm:   0x18236213a: lea rcx, [rip + 0x1d992f7]  ; TypeInfo_UnityEngine_Debug
// asm:   0x182362141: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182362146: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18236214d: jne 0x182362157
// asm:   0x18236214f: mov rcx, rax
// asm:   0x182362152: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182362157: xor edx, edx
// asm:   0x182362159: mov rcx, rbx
// asm:   0x18236215c: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18236216c: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void ApplicationManagers_Changelog_AottgChangelogSeenState__MarkSeen
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_184347a33 = '\x01';
  }
  value = (System_String_o *)0x0;
  if (latest != (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    value = (&(latest->fields)._Version_k__BackingField)[!bVar1];
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath((MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar2 = System_IO_Path__GetDirectoryName(pSVar2,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
    pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath((MethodInfo *)0x0);
    System_IO_File__WriteAllText(pSVar2,value,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$Identity
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__Identity (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x182362020

System_String_o *
ApplicationManagers_Changelog_AottgChangelogSeenState__Identity
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  bool bVar1;
  
  if (latest != (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    return (&(latest->fields)._Version_k__BackingField)[!bVar1];
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$ReadSeenIdentity
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity (const MethodInfo* method);
// 0x182362180
// eh: try 0x182362188..0x182362233 -> pad 0x1833197a0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823621bd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823621c2: test rcx, rcx
// asm:   0x1823621c5: je 0x182362226
// asm:   0x1823621c7: mov rax, qword ptr [rcx]
// asm:   0x1823621ca: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823621d1: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823621d7: mov rbx, rax
// asm:   0x1823621da: lea rcx, [rip + 0x1d405af]  ; "AottgChangelogSeenState: failed to read seen changelog: "
// asm:   0x1823621e1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823621e6: mov rcx, rax
// asm:   0x1823621e9: xor r8d, r8d
// asm:   0x1823621ec: mov rdx, rbx
// asm:   0x1823621ef: call 0x181969e50  ; System_String__Concat()
// asm:   0x1823621f4: mov rbx, rax
// asm:   0x1823621f7: lea rcx, [rip + 0x1d9923a]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1823621fe: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182362203: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18236220a: jne 0x182362214
// asm:   0x18236220c: mov rcx, rax
// asm:   0x18236220f: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182362214: xor edx, edx
// asm:   0x182362216: mov rcx, rbx
// asm:   0x182362219: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18236221e: xor eax, eax
// asm:   0x182362226: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

System_String_o * ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath((MethodInfo *)0x0);
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
// 0x182361f20

System_String_o * ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"ChangelogSeen.txt");
    Il2CppMethodInitialized_184347a34 = '\x01';
  }
  if (Il2CppMethodInitialized_184347ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
    Il2CppMethodInitialized_184347ad6 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
                     _FilePathOverride_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_184347ad6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState);
      Il2CppMethodInitialized_184347ad6 = '\x01';
    }
    return TypeInfo_ApplicationManagers_Changelog_AottgChangelogSeenState->static_fields->
           _FilePathOverride_k__BackingField;
  }
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


