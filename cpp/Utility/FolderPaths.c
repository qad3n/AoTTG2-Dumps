// Type: Utility.FolderPaths
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Utility/FolderPaths.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/FolderPaths.cs
// --------------------------------

// Utility.FolderPaths$$get_IsDocumentsWritable
// il2cpp: bool Utility_FolderPaths__get_IsDocumentsWritable (const MethodInfo* method);
// 0x5dedc60

bool Utility_FolderPaths__get_IsDocumentsWritable(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075482dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_075482dc = '\x01';
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    return TypeInfo_Utility_FolderPaths->static_fields->_IsDocumentsWritable_k__BackingField;
  }
  return (bool)*(undefined1 *)((long)((Il2CppClass *)TypeInfo_Utility_FolderPaths)->static_fields + 0x98);
}


// Utility.FolderPaths$$set_IsDocumentsWritable
// il2cpp: void Utility_FolderPaths__set_IsDocumentsWritable (bool value, const MethodInfo* method);
// 0x5dedcd0

void Utility_FolderPaths__set_IsDocumentsWritable(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075482dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_075482dd = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  TypeInfo_Utility_FolderPaths->static_fields->_IsDocumentsWritable_k__BackingField = value;
  return;
}


// Utility.FolderPaths$$CheckDocumentsWritable
// il2cpp: void Utility_FolderPaths__CheckDocumentsWritable (const MethodInfo* method);
// 0x5dedd30
// eh: try 0x5dedda2..0x5dedeb6 -> pad 0x5dede39 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5dedf0b..0x5dedf31 -> pad 0x5dedf36 (+1 call sites) cleanup
// eh: try 0x5dedf3b..0x5dedf40 -> pad 0x5dee0d0 catch (...) [compiler noexcept guard]
// eh: try 0x5dedf65..0x5dedfc7 -> pad 0x5dee086 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5dee098..0x5dee0be -> pad 0x5dee0be (+1 call sites) cleanup
// eh: try 0x5dee0c3..0x5dee0c8 -> pad 0x5dee0d0 catch (...) [compiler noexcept guard]
// asm: 161 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5deddf2: jmp 0x5dede13
// asm:   0x5dede39: jmp 0x5dedf47
// asm:   0x5dede3e: mov rbx, rax
// asm:   0x5dede41: cmp edx, 1
// asm:   0x5dede44: jne 0x5dee0c8
// asm:   0x5dede4a: mov rdi, rbx
// asm:   0x5dede4d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dede52: mov r14, rax
// asm:   0x5dede55: mov rbx, qword ptr [rax]
// asm:   0x5dede58: lea rdi, [rip + 0x148a261]  ; TypeInfo_System_Exception
// asm:   0x5dede5f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dede64: test rbx, rbx
// asm:   0x5dede67: je 0x5dedf10
// asm:   0x5dede6d: mov rcx, qword ptr [rbx]
// asm:   0x5dede70: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5dede77: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5dede7d: jb 0x5dedf10
// asm:   0x5dede83: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5dede8a: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5dede8f: jne 0x5dedf10
// asm:   0x5dede91: lea rdi, [rip + 0x1490440]  ; TypeInfo_Utility_Util
// asm:   0x5dede98: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dede9d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dedea4: jne 0x5dedeae
// asm:   0x5dedea6: mov rdi, rax
// asm:   0x5dedea9: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dedeae: mov rdi, rbx
// asm:   0x5dedeb1: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5dedeb6: test al, al
// asm:   0x5dedeb8: je 0x5dedf10
// asm:   0x5dedeba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dedebf: mov rax, qword ptr [rbx]
// asm:   0x5dedec2: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5dedec9: mov rdi, rbx
// asm:   0x5dedecc: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5deded2: mov rbx, rax
// asm:   0x5deded5: lea rdi, [rip + 0x14edc84]  ; "Failed to delete write test file: "
// asm:   0x5dededc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dedee1: mov rdi, rax
// asm:   0x5dedee4: mov rsi, rbx
// asm:   0x5dedee7: xor edx, edx
// asm:   0x5dedee9: call 0x53f0320  ; System_String__Concat()
// asm:   0x5dedeee: jmp 0x5dee055
// asm:   0x5dedef3: jmp 0x5dedef7
// asm:   0x5dedef5: jmp 0x5dedef7
// asm:   0x5dedef7: mov rbx, rax
// asm:   0x5dedefa: mov eax, 1
// asm:   0x5dedeff: cmp edx, eax
// asm:   0x5dedf01: jne 0x5dedf3b
// asm:   0x5dedf03: mov rdi, rbx
// asm:   0x5dedf06: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dedf0b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dedf10: mov edi, 8
// asm:   0x5dedf15: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dedf1a: mov rcx, qword ptr [r14]
// asm:   0x5dedf1d: mov qword ptr [rax], rcx
// asm:   0x5dedf20: lea rsi, [rip + 0x103f5d9]
// asm:   0x5dedf27: mov rdi, rax
// asm:   0x5dedf2a: xor edx, edx
// asm:   0x5dedf2c: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dedf31: jmp 0x5dee0be
// asm:   0x5dedf36: jmp 0x5dedf38
// asm:   0x5dedf38: mov rbx, rax
// asm:   0x5dedf3b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dedf40: jmp 0x5dee0c8
// asm:   0x5dedf45: jmp 0x5dedf47
// asm:   0x5dedf47: mov r14, rdx
// asm:   0x5dedf4a: mov rbx, rax
// asm:   0x5dedf4d: cmp r14d, 1
// asm:   0x5dedf51: jne 0x5dee0c8
// asm:   0x5dedf57: mov rdi, rbx
// asm:   0x5dedf5a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dedf5f: mov r15, rax
// asm:   0x5dedf62: mov rbx, qword ptr [rax]
// asm:   0x5dedf65: lea rdi, [rip + 0x148a154]  ; TypeInfo_System_Exception
// asm:   0x5dedf6c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dedf71: test rbx, rbx
// asm:   0x5dedf74: je 0x5dee09d
// asm:   0x5dedf7a: mov rcx, qword ptr [rbx]
// asm:   0x5dedf7d: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5dedf84: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5dedf8a: jb 0x5dee09d
// asm:   0x5dedf90: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5dedf97: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5dedf9c: jne 0x5dee09d
// asm:   0x5dedfa2: lea rdi, [rip + 0x149032f]  ; TypeInfo_Utility_Util
// asm:   0x5dedfa9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dedfae: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dedfb5: jne 0x5dedfbf
// asm:   0x5dedfb7: mov rdi, rax
// asm:   0x5dedfba: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dedfbf: mov rdi, rbx
// asm:   0x5dedfc2: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5dedfc7: test al, al
// asm:   0x5dedfc9: je 0x5dee09d
// asm:   0x5dedfcf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dedfd4: lea rdi, [rip + 0x148a47d]  ; TypeInfo_Utility_FolderPaths
// asm:   0x5dedfdb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dedfe0: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dedfe7: jne 0x5dedff1
// asm:   0x5dedfe9: mov rdi, rax
// asm:   0x5dedfec: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dedff1: xor edi, edi
// asm:   0x5dedff3: xor esi, esi
// asm:   0x5dedff5: call 0x5e07550  ; il2cpp_runtime_helper_05e07550()
// asm:   0x5dedffa: lea rdi, [rip + 0x148a457]  ; TypeInfo_Utility_FolderPaths
// asm:   0x5dee001: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee006: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5dee00d: mov r14, qword ptr [rax]
// asm:   0x5dee010: mov rax, qword ptr [rbx]
// asm:   0x5dee013: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5dee01a: mov rdi, rbx
// asm:   0x5dee01d: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5dee023: mov r15, rax
// asm:   0x5dee026: lea rdi, [rip + 0x14eb2e3]  ; "Data folder is not writable: "
// asm:   0x5dee02d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee032: mov rbx, rax
// asm:   0x5dee035: lea rdi, [rip + 0x14e244c]  ; ", "
// asm:   0x5dee03c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee041: mov rdi, rbx
// asm:   0x5dee044: mov rsi, r14
// asm:   0x5dee047: mov rdx, rax
// asm:   0x5dee04a: mov rcx, r15
// asm:   0x5dee04d: xor r8d, r8d
// asm:   0x5dee050: call 0x5402810  ; System_String__Concat()
// asm:   0x5dee055: mov rbx, rax
// asm:   0x5dee058: lea rdi, [rip + 0x14895e9]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5dee05f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee064: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dee06b: jne 0x5dee075
// asm:   0x5dee06d: mov rdi, rax
// asm:   0x5dee070: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dee075: mov rdi, rbx
// asm:   0x5dee078: xor esi, esi
// asm:   0x5dee07a: pop rbx
// asm:   0x5dee07b: pop r14
// asm:   0x5dee07d: pop r15
// asm:   0x5dee07f: jmp 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5dee084: jmp 0x5dee088
// asm:   0x5dee086: jmp 0x5dee088
// asm:   0x5dee088: mov rbx, rax
// asm:   0x5dee08b: cmp edx, r14d
// asm:   0x5dee08e: jne 0x5dee0c3
// asm:   0x5dee090: mov rdi, rbx
// asm:   0x5dee093: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dee098: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dee09d: mov edi, 8
// asm:   0x5dee0a2: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dee0a7: mov rcx, qword ptr [r15]
// asm:   0x5dee0aa: mov qword ptr [rax], rcx
// asm:   0x5dee0ad: lea rsi, [rip + 0x103f44c]
// asm:   0x5dee0b4: mov rdi, rax
// asm:   0x5dee0b7: xor edx, edx
// asm:   0x5dee0b9: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dee0be: jmp 0x5dee0c0
// asm:   0x5dee0c0: mov rbx, rax
// asm:   0x5dee0c3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dee0c8: mov rdi, rbx
// asm:   0x5dee0cb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dee0d0: mov rdi, rax
// asm:   0x5dee0d3: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_FolderPaths__CheckDocumentsWritable(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_075482de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/.write_test");
    Il2CppMethodInitialized_075482de = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_52f0320
                   (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/.write_test",
                    (MethodInfo *)0x0);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->Documents,(MethodInfo *)0x0);
  System_IO_File__WriteAllText
            (path,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075483c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_075483c3 = '\x01';
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  TypeInfo_Utility_FolderPaths->static_fields->_IsDocumentsWritable_k__BackingField = true;
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Utility.FolderPaths$$TryCreateDirectory
// il2cpp: void Utility_FolderPaths__TryCreateDirectory (System_String_o* path, const MethodInfo* method);
// 0x5dee170
// eh: try 0x5dee17b..0x5dee20f -> pad 0x5dee18e (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5dee2ab..0x5dee2d1 -> pad 0x5dee2d1 (+1 call sites) cleanup
// eh: try 0x5dee2d6..0x5dee2db -> pad 0x5dee2e3 catch (...) [compiler noexcept guard]
// asm: 84 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dee18e: mov r15, rdx
// asm:   0x5dee191: mov r12, rax
// asm:   0x5dee194: cmp r15d, 1
// asm:   0x5dee198: jne 0x5dee2db
// asm:   0x5dee19e: mov rdi, r12
// asm:   0x5dee1a1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dee1a6: mov r14, rax
// asm:   0x5dee1a9: mov r12, qword ptr [rax]
// asm:   0x5dee1ac: lea rdi, [rip + 0x1489f0d]  ; TypeInfo_System_Exception
// asm:   0x5dee1b3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee1b8: test r12, r12
// asm:   0x5dee1bb: je 0x5dee2b0
// asm:   0x5dee1c1: mov rcx, qword ptr [r12]
// asm:   0x5dee1c5: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5dee1cc: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5dee1d2: jb 0x5dee2b0
// asm:   0x5dee1d8: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5dee1df: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5dee1e4: jne 0x5dee2b0
// asm:   0x5dee1ea: lea rdi, [rip + 0x14900e7]  ; TypeInfo_Utility_Util
// asm:   0x5dee1f1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee1f6: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dee1fd: jne 0x5dee207
// asm:   0x5dee1ff: mov rdi, rax
// asm:   0x5dee202: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dee207: mov rdi, r12
// asm:   0x5dee20a: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5dee20f: test al, al
// asm:   0x5dee211: je 0x5dee2b0
// asm:   0x5dee217: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dee21c: mov rax, qword ptr [r12]
// asm:   0x5dee220: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5dee227: mov rdi, r12
// asm:   0x5dee22a: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5dee230: mov r14, rax
// asm:   0x5dee233: lea rdi, [rip + 0x14ed906]  ; "Failed to create folder: "
// asm:   0x5dee23a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee23f: mov r15, rax
// asm:   0x5dee242: lea rdi, [rip + 0x14e223f]  ; ", "
// asm:   0x5dee249: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee24e: mov rdi, r15
// asm:   0x5dee251: mov rsi, rbx
// asm:   0x5dee254: mov rdx, rax
// asm:   0x5dee257: mov rcx, r14
// asm:   0x5dee25a: xor r8d, r8d
// asm:   0x5dee25d: call 0x5402810  ; System_String__Concat()
// asm:   0x5dee262: mov rbx, rax
// asm:   0x5dee265: lea rdi, [rip + 0x14893dc]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5dee26c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dee271: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dee278: jne 0x5dee282
// asm:   0x5dee27a: mov rdi, rax
// asm:   0x5dee27d: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dee282: mov rdi, rbx
// asm:   0x5dee285: xor esi, esi
// asm:   0x5dee287: add rsp, 8
// asm:   0x5dee28b: pop rbx
// asm:   0x5dee28c: pop r12
// asm:   0x5dee28e: pop r14
// asm:   0x5dee290: pop r15
// asm:   0x5dee292: jmp 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5dee297: jmp 0x5dee29b
// asm:   0x5dee299: jmp 0x5dee29b
// asm:   0x5dee29b: mov r12, rax
// asm:   0x5dee29e: cmp edx, r15d
// asm:   0x5dee2a1: jne 0x5dee2d6
// asm:   0x5dee2a3: mov rdi, r12
// asm:   0x5dee2a6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dee2ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dee2b0: mov edi, 8
// asm:   0x5dee2b5: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dee2ba: mov rcx, qword ptr [r14]
// asm:   0x5dee2bd: mov qword ptr [rax], rcx
// asm:   0x5dee2c0: lea rsi, [rip + 0x103f239]
// asm:   0x5dee2c7: mov rdi, rax
// asm:   0x5dee2ca: xor edx, edx
// asm:   0x5dee2cc: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dee2d1: jmp 0x5dee2d3
// asm:   0x5dee2d3: mov r12, rax
// asm:   0x5dee2d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dee2db: mov rdi, r12
// asm:   0x5dee2de: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dee2e3: mov rdi, rax
// asm:   0x5dee2e6: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_FolderPaths__TryCreateDirectory(System_String_o *path,MethodInfo *method)

{
  System_IO_Directory__CreateDirectory(path,(MethodInfo *)0x0);
  return;
}


// Utility.FolderPaths$$.ctor
// il2cpp: void Utility_FolderPaths___ctor (Utility_FolderPaths_o* __this, const MethodInfo* method);
// 0x5dee2f0

void Utility_FolderPaths___ctor(Utility_FolderPaths_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FolderPaths$$.cctor
// il2cpp: void Utility_FolderPaths___cctor (const MethodInfo* method);
// 0x5dee300

void Utility_FolderPaths___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  Utility_FolderPaths_StaticFields *pUVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_075482df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/PersistentData");
    il2cpp_codegen_initialize_runtime_metadata(&"/Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomMap/Backups");
    il2cpp_codegen_initialize_runtime_metadata(&"/Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomMap");
    il2cpp_codegen_initialize_runtime_metadata(&"/UIThemes");
    il2cpp_codegen_initialize_runtime_metadata(&"/GameProgress");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomMap/Autosave");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomLocale");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomLogic");
    il2cpp_codegen_initialize_runtime_metadata(&"/Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"/CharacterPreviews");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomAddon");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomAssets/WebDownload");
    il2cpp_codegen_initialize_runtime_metadata(&"/Snapshots");
    il2cpp_codegen_initialize_runtime_metadata(&"/Languages");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomControlSkins");
    Il2CppMethodInitialized_075482df = '\x01';
  }
  bVar3 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    pSVar5 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
    goto label_05dee47d;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    iVar4 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar4 != 0xd) goto label_05dee45d;
label_05dee445:
    iVar4 = 0x1c;
  }
  else {
    iVar4 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar4 == 0xd) goto label_05dee445;
label_05dee45d:
    iVar4 = 5;
  }
  pSVar5 = System_Environment__GetFolderPath(iVar4,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_52f0320(pSVar5,"/Aottg2",(MethodInfo *)0x0);
label_05dee47d:
  TypeInfo_Utility_FolderPaths->static_fields->Documents = pSVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->Documents);
  bVar3 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = Utility_MobileBuiltinAssets__get_CachePath((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    pSVar5 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  }
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->StreamingAssetsPath = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->StreamingAssetsPath);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/Languages",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->LanguagesPath = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->LanguagesPath);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/Presets",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->PresetsPath = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->PresetsPath);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/UIThemes",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->UIThemesPath = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->UIThemesPath);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/Settings",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->Settings = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->Settings);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/Snapshots",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->Snapshots = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->Snapshots);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/GameProgress",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->GameProgress = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->GameProgress);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/PersistentData",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->PersistentData = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->PersistentData);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomLogic",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomLogic = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomLogic);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomAddon",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomAddon = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomAddon);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomMap",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomMap = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomMap);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomMap/Autosave",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomMapAutosave = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomMapAutosave);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomMap/Backups",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomMapBackups = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomMapBackups);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomAssets",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomAssetsLocal = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomAssetsLocal);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomAssets/WebDownload",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomAssetsWeb = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomAssetsWeb);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CharacterPreviews",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CharacterPreviews = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CharacterPreviews);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomControlSkins",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomControlSkins = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomControlSkins);
  pSVar5 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomLocale",
                      (MethodInfo *)0x0);
  pUVar2 = TypeInfo_Utility_FolderPaths->static_fields;
  pUVar2->CustomLocale = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar2->CustomLocale);
  TypeInfo_Utility_FolderPaths->static_fields->_IsDocumentsWritable_k__BackingField = true;
  return;
}


