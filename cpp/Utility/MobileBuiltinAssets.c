// Type: Utility.MobileBuiltinAssets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Utility/MobileBuiltinAssets.cs
// Prior real C# source: none
// --------------------------------

// Utility.MobileBuiltinAssets.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Utility_MobileBuiltinAssets___c__DisplayClass10_0___ctor (Utility_MobileBuiltinAssets___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x5ddfc00

void Utility_MobileBuiltinAssets___c__DisplayClass10_0___ctor
               (Utility_MobileBuiltinAssets___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.MobileBuiltinAssets.<>c__DisplayClass10_0$$<ExtractDirectory>b__0
// il2cpp: System_IO_Stream_o* Utility_MobileBuiltinAssets___c__DisplayClass10_0___ExtractDirectory_b__0 (Utility_MobileBuiltinAssets___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x5ddfc10

System_IO_Stream_o *
Utility_MobileBuiltinAssets___c__DisplayClass10_0___ExtractDirectory_b__0
          (Utility_MobileBuiltinAssets___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_IO_FileStream_o *pSVar1;
  
  pSVar1 = System_IO_File__OpenRead((__this->fields).file,(MethodInfo *)0x0);
  return (System_IO_Stream_o *)pSVar1;
}


// Utility.MobileBuiltinAssets$$get_CacheRoot
// il2cpp: System_String_o* Utility_MobileBuiltinAssets__get_CacheRoot (const MethodInfo* method);
// 0x5dde9e0

System_String_o * Utility_MobileBuiltinAssets__get_CacheRoot(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754826d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_0754826d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  pSVar1 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,"Builtin",(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.MobileBuiltinAssets$$get_CachePath
// il2cpp: System_String_o* Utility_MobileBuiltinAssets__get_CachePath (const MethodInfo* method);
// 0x5ddea70

System_String_o * Utility_MobileBuiltinAssets__get_CachePath(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *path2;
  System_IO_Path_c **ppSVar2;
  
  if (Il2CppMethodInitialized_0754826e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    ppSVar2 = &TypeInfo_System_IO_Path;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_0754826e = '\x01';
    method = (MethodInfo *)ppSVar2;
  }
  pSVar1 = Utility_MobileBuiltinAssets__get_CacheRoot(method);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  path2 = UnityEngine_Application__get_buildGUID((MethodInfo *)0x0);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,path2,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.MobileBuiltinAssets$$Prepare
// il2cpp: void Utility_MobileBuiltinAssets__Prepare (const MethodInfo* method);
// 0x5ddeb00

void Utility_MobileBuiltinAssets__Prepare(MethodInfo *method)

{
  System_String_o *source;
  System_String_o *targetRoot;
  MethodInfo *method_00;
  UnityEngine_Application_c **ppUVar1;
  MethodInfo *method_01;
  
  if (g_data_0754826f == '\0') {
    ppUVar1 = &TypeInfo_UnityEngine_Application;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    g_data_0754826f = '\x01';
    method = (MethodInfo *)ppUVar1;
  }
  Utility_MobileBuiltinAssets__DeleteStaleCaches(method);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  method_01 = (MethodInfo *)0x0;
  source = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  targetRoot = Utility_MobileBuiltinAssets__get_CachePath(method_01);
  Utility_MobileBuiltinAssets__Extract(source,targetRoot,method_00);
  return;
}


// Utility.MobileBuiltinAssets$$DeleteStaleCaches
// il2cpp: void Utility_MobileBuiltinAssets__DeleteStaleCaches (const MethodInfo* method);
// 0x5ddeb60
// eh: try 0x5ddec5b..0x5ddec6a -> pad 0x5ddec6c catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5ddec83..0x5dded60 -> pad 0x5dded62 (+1 call sites) cleanup
// eh: try 0x5dded65..0x5dded6a -> pad 0x5dded72 catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ddebe6: mov rdi, rbp
// asm:   0x5ddebe9: xor esi, esi
// asm:   0x5ddebeb: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5ddec6c: mov r14, rax
// asm:   0x5ddec6f: cmp edx, 1
// asm:   0x5ddec72: jne 0x5dded6a
// asm:   0x5ddec78: mov rdi, r14
// asm:   0x5ddec7b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddec80: mov r14, rax
// asm:   0x5ddec83: lea rdi, [rip + 0x1499436]  ; TypeInfo_System_Exception
// asm:   0x5ddec8a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddec8f: mov rcx, qword ptr [r14]
// asm:   0x5ddec92: mov rsi, qword ptr [rcx]
// asm:   0x5ddec95: mov rdi, rax
// asm:   0x5ddec98: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5ddec9d: test al, al
// asm:   0x5ddec9f: je 0x5dded3f
// asm:   0x5ddeca5: mov r14, qword ptr [r14]
// asm:   0x5ddeca8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddecad: test r14, r14
// asm:   0x5ddecb0: je 0x5dded3a
// asm:   0x5ddecb6: mov rax, qword ptr [r14]
// asm:   0x5ddecb9: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5ddecc0: mov rdi, r14
// asm:   0x5ddecc3: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5ddecc9: mov qword ptr [rsp], rax
// asm:   0x5ddeccd: lea rdi, [rip + 0x14fce84]  ; "Failed to delete stale built-in assets "
// asm:   0x5ddecd4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddecd9: mov r14, rax
// asm:   0x5ddecdc: lea rdi, [rip + 0x14f329d]  ; ": "
// asm:   0x5ddece3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddece8: mov rdi, r14
// asm:   0x5ddeceb: mov rsi, rbp
// asm:   0x5ddecee: mov rdx, rax
// asm:   0x5ddecf1: mov rcx, qword ptr [rsp]
// asm:   0x5ddecf5: xor r8d, r8d
// asm:   0x5ddecf8: call 0x5402810  ; System_String__Concat()
// asm:   0x5ddecfd: mov rbp, rax
// asm:   0x5dded00: lea rdi, [rip + 0x1498941]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5dded07: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dded0c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dded13: jne 0x5ddebe6
// asm:   0x5dded19: mov rdi, rax
// asm:   0x5dded1c: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dded21: jmp 0x5ddebe6
// asm:   0x5dded3f: mov edi, 8
// asm:   0x5dded44: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dded49: mov rcx, qword ptr [r14]
// asm:   0x5dded4c: mov qword ptr [rax], rcx
// asm:   0x5dded4f: lea rsi, [rip + 0x104e7aa]
// asm:   0x5dded56: mov rdi, rax
// asm:   0x5dded59: xor edx, edx
// asm:   0x5dded5b: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dded60: jmp 0x5dded62
// asm:   0x5dded62: mov r14, rax
// asm:   0x5dded65: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dded6a: mov rdi, r14
// asm:   0x5dded6d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dded72: mov rdi, rax
// asm:   0x5dded75: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_MobileBuiltinAssets__DeleteStaleCaches(MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  ulong uVar5;
  System_String_o *a;
  System_String_o *b;
  System_IO_Path_c **ppSVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_07548270 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    ppSVar6 = &TypeInfo_System_IO_Path;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_07548270 = '\x01';
    method = (MethodInfo *)ppSVar6;
  }
  method_00 = (MethodInfo *)Utility_MobileBuiltinAssets__get_CacheRoot(method);
  bVar2 = System_IO_Directory__Exists((System_String_o *)method_00,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = Utility_MobileBuiltinAssets__get_CacheRoot(method_00);
    pSVar4 = System_IO_Directory__GetDirectories(pSVar3,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar7 = 0;
      do {
        if (uVar5 <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3 = pSVar4->m_Items[uVar7];
        if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
        }
        a = System_IO_Path__GetFileName(pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        b = UnityEngine_Application__get_buildGUID((MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
        if (!bVar2) {
          System_IO_Directory__Delete(pSVar3,true,(MethodInfo *)0x0);
        }
        uVar7 = uVar7 + 1;
        uVar1 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
  }
  return;
}


// Utility.MobileBuiltinAssets$$Extract
// il2cpp: void Utility_MobileBuiltinAssets__Extract (System_String_o* source, System_String_o* targetRoot, const MethodInfo* method);
// 0x5dded80

void Utility_MobileBuiltinAssets__Extract
               (System_String_o *source,System_String_o *targetRoot,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Uri_o *__this;
  System_String_o *pSVar4;
  System_String_o **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  System_Uri_o *local_38;
  
  if (Il2CppMethodInitialized_07548271 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"!/");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"jar:");
    Il2CppMethodInitialized_07548271 = '\x01';
  }
  local_38 = (System_Uri_o *)0x0;
  if (source != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf_53072b0(source,"!/",4,(MethodInfo *)0x0);
    bVar1 = System_String__StartsWith_53002b0(source,"jar:",4,(MethodInfo *)0x0);
    if ((!bVar1) || (iVar2 < 0)) {
      if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
      }
      bVar1 = System_Uri__TryCreate(source,1,&local_38,(MethodInfo *)0x0);
      method_01 = extraout_RDX;
      if (bVar1) {
        if (local_38 == (System_Uri_o *)0x0) goto label_05ddef49;
        bVar1 = System_Uri__get_IsFile(local_38,(MethodInfo *)0x0);
        method_01 = extraout_RDX_00;
        if (bVar1) {
          if (local_38 == (System_Uri_o *)0x0) goto label_05ddef49;
          source = System_Uri__get_LocalPath(local_38,(MethodInfo *)0x0);
          method_01 = extraout_RDX_01;
        }
      }
      Utility_MobileBuiltinAssets__ExtractDirectory(source,targetRoot,method_01);
      return;
    }
    pSVar3 = System_String__Substring_53042f0(source,4,iVar2 + -4,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Uri);
    System_Uri___ctor(__this,pSVar3,(MethodInfo *)0x0);
    if (__this != (System_Uri_o *)0x0) {
      pSVar3 = System_Uri__get_LocalPath(__this,(MethodInfo *)0x0);
      if ("!/" != (System_String_o *)0x0) {
        pSVar4 = System_String__Substring
                           (source,iVar2 + ("!/"->fields)._stringLength,(MethodInfo *)0x0);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__TrimEnd_53071b0(pSVar4,0x2f,(MethodInfo *)0x0);
          method_00 = &"/";
          pSVar4 = System_String__Concat_52f0320(pSVar4,"/",(MethodInfo *)0x0);
          Utility_MobileBuiltinAssets__ExtractPackage(pSVar3,pSVar4,targetRoot,(MethodInfo *)method_00);
          return;
        }
      }
    }
  }
label_05ddef49:
  ThrowNullReferenceException();
}


// Utility.MobileBuiltinAssets$$ExtractPackage
// il2cpp: void Utility_MobileBuiltinAssets__ExtractPackage (System_String_o* package, System_String_o* prefix, System_String_o* targetRoot, const MethodInfo* method);
// 0x5ddef50
// eh: try 0x5ddf026..0x5ddf4bb -> pad 0x5ddf46a (+24 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ddf4c6..0x5ddf4d0 -> pad 0x5ddf533 catch (...) [compiler noexcept guard]
// eh: try 0x5ddf4e5..0x5ddf4ea -> pad 0x5ddf4ef catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ddf4f5..0x5ddf4ff -> pad 0x5ddf533 catch (...) [compiler noexcept guard]
// eh: try 0x5ddf514..0x5ddf519 -> pad 0x5ddf51e cleanup
// eh: try 0x5ddf521..0x5ddf52b -> pad 0x5ddf533 catch (...) [compiler noexcept guard]
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ddf0a7: lea r15, [rip + 0x149a34a]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5ddf0ae: lea r14, [rip + 0x1492043]  ; TypeInfo_System_Collections_Generic_IEnumerator_ZipArchiveEntry
// asm:   0x5ddf0b5: jmp 0x5ddf0ce
// asm:   0x5ddf0c0: mov rbx, qword ptr [rsp + 8]
// asm:   0x5ddf0c5: test rbx, rbx
// asm:   0x5ddf0c8: je 0x5ddf41a
// asm:   0x5ddf0ed: nop dword ptr [rax]
// asm:   0x5ddf2cf: nop 
// asm:   0x5ddf442: mov rdi, r14
// asm:   0x5ddf445: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ddf454: mov rdi, r14
// asm:   0x5ddf457: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ddf45c: mov rdi, rbp
// asm:   0x5ddf45f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ddf464: jmp 0x5ddf46c
// asm:   0x5ddf466: jmp 0x5ddf46c
// asm:   0x5ddf468: jmp 0x5ddf46c
// asm:   0x5ddf46a: jmp 0x5ddf474
// asm:   0x5ddf46c: mov rbx, rdx
// asm:   0x5ddf46f: mov r14, rax
// asm:   0x5ddf472: jmp 0x5ddf4d0
// asm:   0x5ddf474: mov rbx, rdx
// asm:   0x5ddf477: mov r14, rax
// asm:   0x5ddf47a: jmp 0x5ddf4ff
// asm:   0x5ddf47f: jmp 0x5ddf49b
// asm:   0x5ddf481: jmp 0x5ddf49b
// asm:   0x5ddf483: jmp 0x5ddf49b
// asm:   0x5ddf485: jmp 0x5ddf49b
// asm:   0x5ddf487: jmp 0x5ddf49b
// asm:   0x5ddf489: jmp 0x5ddf49b
// asm:   0x5ddf48b: jmp 0x5ddf49b
// asm:   0x5ddf48d: jmp 0x5ddf49b
// asm:   0x5ddf48f: jmp 0x5ddf49b
// asm:   0x5ddf491: jmp 0x5ddf49b
// asm:   0x5ddf493: jmp 0x5ddf49b
// asm:   0x5ddf495: jmp 0x5ddf49b
// asm:   0x5ddf497: jmp 0x5ddf49b
// asm:   0x5ddf499: jmp 0x5ddf49b
// asm:   0x5ddf49b: mov rbx, rdx
// asm:   0x5ddf49e: mov r14, rax
// asm:   0x5ddf4a1: cmp ebx, 1
// asm:   0x5ddf4a4: jne 0x5ddf4c6
// asm:   0x5ddf4a6: mov rdi, r14
// asm:   0x5ddf4a9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddf4ae: mov rbp, qword ptr [rax]
// asm:   0x5ddf4b1: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5ddf4b6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddf4bb: jmp 0x5ddf29f
// asm:   0x5ddf4c0: mov rbx, rdx
// asm:   0x5ddf4c3: mov r14, rax
// asm:   0x5ddf4c6: lea rdi, [rsp + 0x28]
// asm:   0x5ddf4cb: call 0x2fdea30  ; il2cpp_runtime_helper_02fdea30()
// asm:   0x5ddf4d0: cmp ebx, 1
// asm:   0x5ddf4d3: jne 0x5ddf4f5
// asm:   0x5ddf4d5: mov rdi, r14
// asm:   0x5ddf4d8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddf4dd: mov r14, qword ptr [rax]
// asm:   0x5ddf4e0: mov qword ptr [rsp + 0x38], r14
// asm:   0x5ddf4e5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddf4ea: jmp 0x5ddf312
// asm:   0x5ddf4ef: mov rbx, rdx
// asm:   0x5ddf4f2: mov r14, rax
// asm:   0x5ddf4f5: lea rdi, [rsp + 0x38]
// asm:   0x5ddf4fa: call 0x2fdeac0  ; il2cpp_runtime_helper_02fdeac0()
// asm:   0x5ddf4ff: cmp ebx, 1
// asm:   0x5ddf502: jne 0x5ddf521
// asm:   0x5ddf504: mov rdi, r14
// asm:   0x5ddf507: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddf50c: mov r14, qword ptr [rax]
// asm:   0x5ddf50f: mov qword ptr [rsp + 0x48], r14
// asm:   0x5ddf514: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddf519: jmp 0x5ddf392
// asm:   0x5ddf51e: mov r14, rax
// asm:   0x5ddf521: lea rdi, [rsp + 0x48]
// asm:   0x5ddf526: call 0x2fdeb50  ; il2cpp_runtime_helper_02fdeb50()
// asm:   0x5ddf52b: mov rdi, r14
// asm:   0x5ddf52e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ddf533: mov rdi, rax
// asm:   0x5ddf536: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_MobileBuiltinAssets__ExtractPackage
               (System_String_o *package,System_String_o *prefix,System_String_o *targetRoot,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_Compression_ZipArchive_c *pSVar3;
  System_IO_FileStream_c *pSVar4;
  char cVar5;
  bool bVar6;
  System_IO_FileStream_o *pSVar7;
  System_IO_Compression_ZipArchive_o *pSVar8;
  System_Collections_ObjectModel_ReadOnlyCollection_ZipArchiveEntry__o *__this;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  Il2CppObject *object;
  System_String_o *__this_00;
  System_Func_Stream__o *__this_01;
  ulong uVar11;
  MethodInfo *method_00;
  long lVar12;
  Il2CppObject *pIStack_80;
  System_IO_Compression_ZipArchive_o *pSStack_78;
  System_IO_FileStream_o *pSStack_70;
  System_String_o *pSStack_68;
  undefined8 uStack_60;
  Il2CppObject **ppIStack_58;
  undefined8 uStack_50;
  System_IO_Compression_ZipArchive_o **ppSStack_48;
  undefined8 uStack_40;
  System_IO_FileStream_o **ppSStack_38;
  
  pSStack_68 = targetRoot;
  if (Il2CppMethodInitialized_07548272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Stream);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_ZipArchiveEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_ObjectModel_ReadOnlyCollection_ZipArchiveEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_IO_Compression_ZipArchiveEntry_Open);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Compression_ZipArchive);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"bin/");
    Il2CppMethodInitialized_07548272 = '\x01';
  }
  pSStack_78 = (System_IO_Compression_ZipArchive_o *)0x0;
  pIStack_80 = (Il2CppObject *)0x0;
  pSVar7 = System_IO_File__OpenRead(package,(MethodInfo *)0x0);
  uStack_40 = 0;
  ppSStack_38 = &pSStack_70;
  pSStack_70 = pSVar7;
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_Compression_ZipArchive);
  System_IO_Compression_ZipArchive___ctor(pSVar8,(System_IO_Stream_o *)pSVar7,0,(MethodInfo *)0x0);
  uStack_50 = 0;
  ppSStack_48 = &pSStack_78;
  pSStack_78 = pSVar8;
  if (pSVar8 == (System_IO_Compression_ZipArchive_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = System_IO_Compression_ZipArchive__get_Entries(pSVar8,(MethodInfo *)0x0);
  if (__this == (System_Collections_ObjectModel_ReadOnlyCollection_ZipArchiveEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar9 = (Il2CppObject *)
           System_Collections_ObjectModel_ReadOnlyCollection_object___GetEnumerator
                     ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this,
                      (MethodInfo_3F29BC0 *)
                      MethodInfo_System_Collections_ObjectModel_ReadOnlyCollection_ZipArchiveEntry_GetEnumerator
                     );
  uStack_60 = 0;
  ppIStack_58 = &pIStack_80;
  do {
    pIStack_80 = pIVar9;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = pIVar9->klass;
    uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar12) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
          goto label_05ddf123;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ddf123:
    cVar5 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    pIVar9 = pIStack_80;
    if (cVar5 == '\0') {
      if (pIStack_80 == (Il2CppObject *)0x0) goto label_05ddf306;
      pIVar1 = pIStack_80->klass;
      uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar11 == 0) goto label_05ddf2df;
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      break;
    }
    if (pIStack_80 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = pIStack_80->klass;
    uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_ZipArchiveEntry__c **)
             ((long)&pIVar2->interfaceType + lVar12) ==
            TypeInfo_System_Collections_Generic_IEnumerator_ZipArchiveEntry) {
          pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
          goto label_05ddf1a3;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIStack_80,
                         (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_ZipArchiveEntry,0);
label_05ddf1a3:
    object = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    if (object == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (object[9].monitor == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_String__StartsWith_53002b0(object[9].monitor,prefix,4,(MethodInfo *)0x0);
    pIVar9 = pIStack_80;
    if (bVar6) {
      if (object[9].monitor == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_String__EndsWith_52ff780(object[9].monitor,"/",4,(MethodInfo *)0x0);
      pIVar9 = pIStack_80;
      if (!bVar6) {
        if (prefix == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (object[9].monitor == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = System_String__Substring
                              (object[9].monitor,(prefix->fields)._stringLength,(MethodInfo *)0x0);
        if (__this_00 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_String__StartsWith_53002b0(__this_00,"bin/",4,(MethodInfo *)0x0);
        pIVar9 = pIStack_80;
        if (!bVar6) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Stream);
          method_00 = (MethodInfo *)0x0;
          System_Func_object____ctor
                    ((System_Func_object__o *)__this_01,object,
                     (intptr_t)MethodInfo_System_IO_Compression_ZipArchiveEntry_Open,(MethodInfo_4F0C6A0 *)0x0
                    );
          Utility_MobileBuiltinAssets__CopyIfMissing(__this_00,pSStack_68,__this_01,method_00);
          pIVar9 = pIStack_80;
        }
      }
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
      goto label_05ddf2fd;
    }
  }
label_05ddf2df:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_80,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ddf2fd:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
label_05ddf306:
  pSVar8 = pSStack_78;
  if (pSStack_78 != (System_IO_Compression_ZipArchive_o *)0x0) {
    pSVar3 = pSStack_78->klass;
    uVar11 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar12) == TypeInfo_System_IDisposable)
        {
          pVVar10 = (VirtualInvokeData *)
                    (&(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar12));
          goto label_05ddf37d;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)pSStack_78,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ddf37d:
    (*pVVar10->methodPtr)((Il2CppObject *)pSVar8,pVVar10->method);
  }
  pSVar7 = pSStack_70;
  if (pSStack_70 != (System_IO_FileStream_o *)0x0) {
    pSVar4 = pSStack_70->klass;
    uVar11 = (ulong)(pSVar4->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pSVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar12) == TypeInfo_System_IDisposable)
        {
          pVVar10 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar12);
          goto label_05ddf3fd;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)pSStack_70,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ddf3fd:
    (*pVVar10->methodPtr)((Il2CppObject *)pSVar7,pVVar10->method);
  }
  return;
}


// Utility.MobileBuiltinAssets$$ExtractDirectory
// il2cpp: void Utility_MobileBuiltinAssets__ExtractDirectory (System_String_o* source, System_String_o* targetRoot, const MethodInfo* method);
// 0x5ddf540

void Utility_MobileBuiltinAssets__ExtractDirectory
               (System_String_o *source,System_String_o *targetRoot,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_Func_Stream__o *__this;
  Utility_MobileBuiltinAssets___c__DisplayClass10_0_o *pUVar4;
  System_String_o *pSVar5;
  System_Char_array *trimChars;
  MethodInfo *method_00;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07548273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Stream);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_MobileBuiltinAssets_c__DisplayClass10_0_ExtractDirectory_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileBuiltinAssets_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&".meta");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    Il2CppMethodInitialized_07548273 = '\x01';
  }
  bVar2 = System_IO_Directory__Exists(source,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = System_IO_Directory__GetFiles_5477030(source,"*",1,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
label_05ddf751:
      ThrowNullReferenceException();
    }
    iVar1 = (int)pSVar3->max_length;
    if (source == (System_String_o *)0x0) {
      if (0 < iVar1) {
        uVar6 = 0;
        do {
          pUVar4 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Utility_MobileBuiltinAssets_c__DisplayClass10_0);
          System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
          if ((uint)pSVar3->max_length <= uVar6) goto label_05ddf7e1;
          if (pUVar4 == (Utility_MobileBuiltinAssets___c__DisplayClass10_0_o *)0x0) goto label_05ddf751;
          (pUVar4->fields).file = pSVar3->m_Items[uVar6];
          Il2CppCodeGenWriteBarrier(&(pUVar4->fields).file);
          pSVar5 = (pUVar4->fields).file;
          if (pSVar5 == (System_String_o *)0x0) goto label_05ddf751;
          bVar2 = System_String__EndsWith_52ff780(pSVar5,".meta",5,(MethodInfo *)0x0);
          if (!bVar2) goto label_05ddf751;
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)pSVar3->max_length);
      }
    }
    else if (0 < iVar1) {
      uVar6 = 0;
      do {
        pUVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Utility_MobileBuiltinAssets_c__DisplayClass10_0);
        System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
        if ((uint)pSVar3->max_length <= uVar6) {
label_05ddf7e1:
          ThrowIndexOutOfRangeException();
        }
        if (pUVar4 == (Utility_MobileBuiltinAssets___c__DisplayClass10_0_o *)0x0) goto label_05ddf751;
        (pUVar4->fields).file = pSVar3->m_Items[uVar6];
        Il2CppCodeGenWriteBarrier(&(pUVar4->fields).file);
        pSVar5 = (pUVar4->fields).file;
        if (pSVar5 == (System_String_o *)0x0) goto label_05ddf751;
        bVar2 = System_String__EndsWith_52ff780(pSVar5,".meta",5,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = (pUVar4->fields).file;
          if (pSVar5 == (System_String_o *)0x0) goto label_05ddf751;
          pSVar5 = System_String__Substring(pSVar5,(source->fields)._stringLength,(MethodInfo *)0x0);
          trimChars = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
          if (trimChars == (System_Char_array *)0x0) goto label_05ddf751;
          iVar1 = (int)trimChars->max_length;
          if ((iVar1 == 0) || (trimChars->m_Items[0] = 0x2f, iVar1 == 1)) goto label_05ddf7e1;
          trimChars->m_Items[1] = 0x5c;
          if (pSVar5 == (System_String_o *)0x0) goto label_05ddf751;
          pSVar5 = System_String__TrimStart_5307170(pSVar5,trimChars,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto label_05ddf751;
          pSVar5 = System_String__Replace(pSVar5,0x5c,0x2f,(MethodInfo *)0x0);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Stream);
          method_00 = (MethodInfo *)0x0;
          System_Func_object____ctor
                    ((System_Func_object__o *)__this,(Il2CppObject *)pUVar4,
                     (intptr_t)
                     MethodInfo_Utility_MobileBuiltinAssets_c__DisplayClass10_0_ExtractDirectory_b__0,
                     (MethodInfo_4F0C6A0 *)0x0);
          Utility_MobileBuiltinAssets__CopyIfMissing(pSVar5,targetRoot,__this,method_00);
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)pSVar3->max_length);
    }
  }
  return;
}


// Utility.MobileBuiltinAssets$$CopyIfMissing
// il2cpp: void Utility_MobileBuiltinAssets__CopyIfMissing (System_String_o* relative, System_String_o* targetRoot, System_Func_Stream__o* open, const MethodInfo* method);
// 0x5ddf7f0
// eh: try 0x5ddf893..0x5ddfaa9 -> pad 0x5ddfa76 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5ddfab4..0x5ddfabe -> pad 0x5ddfbf2 catch (...) [compiler noexcept guard]
// eh: try 0x5ddfae6..0x5ddfaeb -> pad 0x5ddfaf0 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5ddfaf6..0x5ddfb00 -> pad 0x5ddfbf2 catch (...) [compiler noexcept guard]
// eh: try 0x5ddfb15..0x5ddfbdd -> pad 0x5ddfbe2 (+1 call sites) cleanup
// eh: try 0x5ddfbe5..0x5ddfbea -> pad 0x5ddfbf2 catch (...) [compiler noexcept guard]
// asm: 105 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ddfa66: mov rdi, r13
// asm:   0x5ddfa69: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ddfa6e: mov rdi, r13
// asm:   0x5ddfa71: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ddfa76: jmp 0x5ddfac0
// asm:   0x5ddfa78: jmp 0x5ddfac0
// asm:   0x5ddfa7a: jmp 0x5ddfac8
// asm:   0x5ddfa7c: jmp 0x5ddfac0
// asm:   0x5ddfa7e: jmp 0x5ddfac0
// asm:   0x5ddfa80: jmp 0x5ddfac0
// asm:   0x5ddfa82: jmp 0x5ddfac0
// asm:   0x5ddfa84: jmp 0x5ddfac0
// asm:   0x5ddfa86: mov r13, rdx
// asm:   0x5ddfa89: mov rbx, rax
// asm:   0x5ddfa8c: cmp r13d, 1
// asm:   0x5ddfa90: jne 0x5ddfab4
// asm:   0x5ddfa92: mov rdi, rbx
// asm:   0x5ddfa95: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddfa9a: mov r13, qword ptr [rax]
// asm:   0x5ddfa9d: mov qword ptr [rsp + 0x18], r13
// asm:   0x5ddfaa2: xor ebx, ebx
// asm:   0x5ddfaa4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddfaa9: jmp 0x5ddf932
// asm:   0x5ddfaae: mov r13, rdx
// asm:   0x5ddfab1: mov rbx, rax
// asm:   0x5ddfab4: lea rdi, [rsp + 0x18]
// asm:   0x5ddfab9: call 0x2fdebe0  ; il2cpp_runtime_helper_02fdebe0()
// asm:   0x5ddfabe: jmp 0x5ddface
// asm:   0x5ddfac0: mov r13, rdx
// asm:   0x5ddfac3: mov rbx, rax
// asm:   0x5ddfac6: jmp 0x5ddfb00
// asm:   0x5ddfac8: mov r13, rdx
// asm:   0x5ddfacb: mov rbx, rax
// asm:   0x5ddface: cmp r13d, 1
// asm:   0x5ddfad2: jne 0x5ddfaf6
// asm:   0x5ddfad4: mov rdi, rbx
// asm:   0x5ddfad7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddfadc: mov r13, qword ptr [rax]
// asm:   0x5ddfadf: mov qword ptr [rsp + 0x28], r13
// asm:   0x5ddfae4: xor ebx, ebx
// asm:   0x5ddfae6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddfaeb: jmp 0x5ddf9c0
// asm:   0x5ddfaf0: mov r13, rdx
// asm:   0x5ddfaf3: mov rbx, rax
// asm:   0x5ddfaf6: lea rdi, [rsp + 0x28]
// asm:   0x5ddfafb: call 0x2fdec70  ; il2cpp_runtime_helper_02fdec70()
// asm:   0x5ddfb00: cmp r13d, 1
// asm:   0x5ddfb04: jne 0x5ddfbea
// asm:   0x5ddfb0a: mov rdi, rbx
// asm:   0x5ddfb0d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ddfb12: mov rbx, rax
// asm:   0x5ddfb15: lea rdi, [rip + 0x14985a4]  ; TypeInfo_System_Exception
// asm:   0x5ddfb1c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddfb21: mov rcx, qword ptr [rbx]
// asm:   0x5ddfb24: mov rsi, qword ptr [rcx]
// asm:   0x5ddfb27: mov rdi, rax
// asm:   0x5ddfb2a: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5ddfb2f: test al, al
// asm:   0x5ddfb31: je 0x5ddfbbc
// asm:   0x5ddfb37: mov rbx, qword ptr [rbx]
// asm:   0x5ddfb3a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddfb3f: test rbx, rbx
// asm:   0x5ddfb42: je 0x5ddfbdd
// asm:   0x5ddfb48: mov rax, qword ptr [rbx]
// asm:   0x5ddfb4b: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5ddfb52: mov rdi, rbx
// asm:   0x5ddfb55: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5ddfb5b: mov rbx, rax
// asm:   0x5ddfb5e: lea rdi, [rip + 0x14fc123]  ; "Failed to prepare built-in asset "
// asm:   0x5ddfb65: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddfb6a: mov rbp, rax
// asm:   0x5ddfb6d: lea rdi, [rip + 0x14f240c]  ; ": "
// asm:   0x5ddfb74: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddfb79: mov rdi, rbp
// asm:   0x5ddfb7c: mov rsi, r14
// asm:   0x5ddfb7f: mov rdx, rax
// asm:   0x5ddfb82: mov rcx, rbx
// asm:   0x5ddfb85: xor r8d, r8d
// asm:   0x5ddfb88: call 0x5402810  ; System_String__Concat()
// asm:   0x5ddfb8d: mov rbx, rax
// asm:   0x5ddfb90: lea rdi, [rip + 0x1497ab1]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5ddfb97: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ddfb9c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5ddfba3: jne 0x5ddfbad
// asm:   0x5ddfba5: mov rdi, rax
// asm:   0x5ddfba8: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5ddfbad: mov rdi, rbx
// asm:   0x5ddfbb0: xor esi, esi
// asm:   0x5ddfbb2: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5ddfbb7: jmp 0x5ddfa4d
// asm:   0x5ddfbbc: mov edi, 8
// asm:   0x5ddfbc1: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5ddfbc6: mov rcx, qword ptr [rbx]
// asm:   0x5ddfbc9: mov qword ptr [rax], rcx
// asm:   0x5ddfbcc: lea rsi, [rip + 0x104d92d]
// asm:   0x5ddfbd3: mov rdi, rax
// asm:   0x5ddfbd6: xor edx, edx
// asm:   0x5ddfbd8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5ddfbdd: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5ddfbe2: mov rbx, rax
// asm:   0x5ddfbe5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ddfbea: mov rdi, rbx
// asm:   0x5ddfbed: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ddfbf2: mov rdi, rax
// asm:   0x5ddfbf5: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_MobileBuiltinAssets__CopyIfMissing
               (System_String_o *relative,System_String_o *targetRoot,System_Func_Stream__o *open,
               MethodInfo *method)

{
  System_IO_FileStream_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_IO_Stream_c *pSVar3;
  System_IO_Stream_o *__this;
  System_IO_FileStream_o *__this_00;
  bool bVar4;
  System_String_o *path;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  System_IO_Stream_o *local_60;
  System_IO_FileStream_o *local_58;
  undefined8 local_50;
  System_IO_FileStream_o **local_48;
  undefined8 local_40;
  System_IO_Stream_o **local_38;
  
  if (Il2CppMethodInitialized_07548274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&".tmp");
    Il2CppMethodInitialized_07548274 = '\x01';
  }
  local_60 = (System_IO_Stream_o *)0x0;
  local_58 = (System_IO_FileStream_o *)0x0;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  path = System_IO_Path__Combine(targetRoot,relative,(MethodInfo *)0x0);
  bVar4 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar5 = System_IO_Path__GetDirectoryName(path,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory(pSVar5,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_52f0320(path,".tmp",(MethodInfo *)0x0);
    if (open == (System_Func_Stream__o *)0x0) {
      ThrowNullReferenceException();
    }
    local_60 = (System_IO_Stream_o *)(*(code *)(open->fields).invoke_impl)((open->fields).method_code);
    local_40 = 0;
    local_38 = &local_60;
    local_58 = System_IO_File__Create(pSVar5,(MethodInfo *)0x0);
    local_50 = 0;
    local_48 = &local_58;
    if (local_60 == (System_IO_Stream_o *)0x0) {
      ThrowNullReferenceException();
    }
    System_IO_Stream__CopyTo(local_60,(System_IO_Stream_o *)local_58,(MethodInfo *)0x0);
    __this_00 = local_58;
    if (local_58 != (System_IO_FileStream_o *)0x0) {
      pSVar1 = local_58->klass;
      uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar2 = (pSVar1->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar8) == TypeInfo_System_IDisposable)
          {
            pVVar6 = &(pSVar1->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar8);
            goto label_05ddf99d;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ddf99d:
      (*pVVar6->methodPtr)((Il2CppObject *)__this_00,pVVar6->method);
    }
    __this = local_60;
    if (local_60 != (System_IO_Stream_o *)0x0) {
      pSVar3 = local_60->klass;
      uVar7 = (ulong)(pSVar3->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar2 = (pSVar3->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar8) == TypeInfo_System_IDisposable)
          {
            pVVar6 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar8);
            goto label_05ddfa2d;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)local_60,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ddfa2d:
      (*pVVar6->methodPtr)((Il2CppObject *)__this,pVVar6->method);
    }
    System_IO_File__Move(pSVar5,path,(MethodInfo *)0x0);
  }
  return;
}


