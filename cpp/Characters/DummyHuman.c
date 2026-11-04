// Type: Characters.DummyHuman
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DummyHuman.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/DummyHuman.cs
// --------------------------------

// Characters.DummyHuman.<>c$$.cctor
// il2cpp: void Characters_DummyHuman___c___cctor (const MethodInfo* method);
// 0x18211eff0

void Characters_DummyHuman___c___cctor(MethodInfo *method)

{
  Characters_DummyHuman___c_o *__this;
  
  if (Il2CppMethodInitialized_184346b89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_c);
    Il2CppMethodInitialized_184346b89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DummyHuman_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Characters_DummyHuman_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_DummyHuman_c->static_fields->__9,__this);
  return;
}


// Characters.DummyHuman.<>c$$.ctor
// il2cpp: void Characters_DummyHuman___c___ctor (Characters_DummyHuman___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_DummyHuman___c___ctor(Characters_DummyHuman___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman.<>c$$<LoadSkinCoroutine>b__9_0
// il2cpp: bool Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0 (Characters_DummyHuman___c_o* __this, System_String_o* url, const MethodInfo* method);
// 0x18211ee60

bool Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0
               (Characters_DummyHuman___c_o *__this,System_String_o *url,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184346b8a = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(url,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  bVar1 = System_String__op_Inequality(url,"1",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$.ctor
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9___ctor (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_DummyHuman__LoadSkinCoroutine_d__9___ctor(Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose(Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, MethodInfo* method)

{
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$MoveNext
// il2cpp: bool Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x18211d250
// eh: try 0x18211d481..0x18211ea69 -> pad 0x183336110 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 279 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18211d508: mov rdx, rsi
// asm:   0x18211d5af: nop 
// asm:   0x18211d6e2: mov r10, rsi
// asm:   0x18211d705: mov rdx, rsi
// asm:   0x18211d758: mov r10, rsi
// asm:   0x18211d77b: mov rdx, rsi
// asm:   0x18211d7c5: mov r10, rsi
// asm:   0x18211d7e8: mov rdx, rsi
// asm:   0x18211d832: mov r10, rsi
// asm:   0x18211d855: mov rdx, rsi
// asm:   0x18211d89f: mov r10, rsi
// asm:   0x18211d8c2: mov rdx, rsi
// asm:   0x18211d90c: mov r10, rsi
// asm:   0x18211d92f: mov rdx, rsi
// asm:   0x18211d979: mov r10, rsi
// asm:   0x18211d99c: mov rdx, rsi
// asm:   0x18211d9e6: mov r10, rsi
// asm:   0x18211da09: mov rdx, rsi
// asm:   0x18211da56: mov r10, rsi
// asm:   0x18211da79: mov rdx, rsi
// asm:   0x18211dac6: mov r10, rsi
// asm:   0x18211dae9: mov rdx, rsi
// asm:   0x18211db36: mov r10, rsi
// asm:   0x18211db59: mov rdx, rsi
// asm:   0x18211dba6: mov r10, rsi
// asm:   0x18211dbc9: mov rdx, rsi
// asm:   0x18211dc16: mov r10, rsi
// asm:   0x18211dc39: mov rdx, rsi
// asm:   0x18211dc8c: mov r10, rsi
// asm:   0x18211dcaf: mov rdx, rsi
// asm:   0x18211dd02: mov r10, rsi
// asm:   0x18211dd25: mov rdx, rsi
// asm:   0x18211dde4: movaps xmm0, xmm1
// asm:   0x18211dde7: jmp 0x18211ddec
// asm:   0x18211de44: mov r10, rsi
// asm:   0x18211de67: mov rdx, rsi
// asm:   0x18211df16: movaps xmm0, xmm1
// asm:   0x18211df19: jmp 0x18211df1e
// asm:   0x18211df76: mov r10, rsi
// asm:   0x18211df99: mov rdx, rsi
// asm:   0x18211dfec: mov r10, rsi
// asm:   0x18211e00f: mov rdx, rsi
// asm:   0x18211e062: mov r10, rsi
// asm:   0x18211e085: mov rdx, rsi
// asm:   0x18211e0d8: mov r10, rsi
// asm:   0x18211e0fb: mov rdx, rsi
// asm:   0x18211e14e: mov r10, rsi
// asm:   0x18211e171: mov rdx, rsi
// asm:   0x18211e1be: lea rcx, [rip + 0x1f8fe1b]  ; TypeInfo_string_array
// asm:   0x18211e1c5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e1ca: mov rcx, rax
// asm:   0x18211e1cd: mov edx, 0x17
// asm:   0x18211e1d2: call 0x180416200  ; SZArrayNew()
// asm:   0x18211e1d7: mov rdi, rax
// asm:   0x18211e1da: test rax, rax
// asm:   0x18211e1dd: je 0x18211e8bd
// asm:   0x18211e1e3: lea rcx, [rip + 0x1f60d3e]  ; ""
// asm:   0x18211e1ea: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e1ef: cmp dword ptr [rdi + 0x18], 0
// asm:   0x18211e1f3: jbe 0x18211ea95
// asm:   0x18211e1f9: mov qword ptr [rdi + 0x20], rax
// asm:   0x18211e1fd: lea rcx, [rdi + 0x20]
// asm:   0x18211e201: mov rdx, rax
// asm:   0x18211e204: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e209: lea rcx, [rip + 0x1f60d18]  ; ""
// asm:   0x18211e210: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e215: cmp dword ptr [rdi + 0x18], 1
// asm:   0x18211e219: jbe 0x18211ea95
// asm:   0x18211e21f: mov qword ptr [rdi + 0x28], rax
// asm:   0x18211e223: lea rcx, [rdi + 0x28]
// asm:   0x18211e227: mov rdx, rax
// asm:   0x18211e22a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e22f: lea rcx, [rip + 0x1f60cf2]  ; ""
// asm:   0x18211e236: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e23b: cmp dword ptr [rdi + 0x18], 2
// asm:   0x18211e23f: jbe 0x18211ea95
// asm:   0x18211e245: mov qword ptr [rdi + 0x30], rax
// asm:   0x18211e249: lea rcx, [rdi + 0x30]
// asm:   0x18211e24d: mov rdx, rax
// asm:   0x18211e250: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e255: lea rcx, [rip + 0x1f60ccc]  ; ""
// asm:   0x18211e25c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e261: cmp dword ptr [rdi + 0x18], 3
// asm:   0x18211e265: jbe 0x18211ea95
// asm:   0x18211e26b: mov qword ptr [rdi + 0x38], rax
// asm:   0x18211e26f: lea rcx, [rdi + 0x38]
// asm:   0x18211e273: mov rdx, rax
// asm:   0x18211e276: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e27b: lea rcx, [rip + 0x1f60ca6]  ; ""
// asm:   0x18211e282: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e287: cmp dword ptr [rdi + 0x18], 4
// asm:   0x18211e28b: jbe 0x18211ea95
// asm:   0x18211e291: mov qword ptr [rdi + 0x40], rax
// asm:   0x18211e295: lea rcx, [rdi + 0x40]
// asm:   0x18211e299: mov rdx, rax
// asm:   0x18211e29c: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e2a1: lea rcx, [rip + 0x1f60c80]  ; ""
// asm:   0x18211e2a8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e2ad: cmp dword ptr [rdi + 0x18], 5
// asm:   0x18211e2b1: jbe 0x18211ea95
// asm:   0x18211e2b7: mov qword ptr [rdi + 0x48], rax
// asm:   0x18211e2bb: lea rcx, [rdi + 0x48]
// asm:   0x18211e2bf: mov rdx, rax
// asm:   0x18211e2c2: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e2c7: lea rcx, [rip + 0x1f60c5a]  ; ""
// asm:   0x18211e2ce: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e2d3: cmp dword ptr [rdi + 0x18], 6
// asm:   0x18211e2d7: jbe 0x18211ea95
// asm:   0x18211e2dd: mov qword ptr [rdi + 0x50], rax
// asm:   0x18211e2e1: lea rcx, [rdi + 0x50]
// asm:   0x18211e2e5: mov rdx, rax
// asm:   0x18211e2e8: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e2ed: lea rcx, [rip + 0x1f60c34]  ; ""
// asm:   0x18211e2f4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e2f9: cmp dword ptr [rdi + 0x18], 7
// asm:   0x18211e2fd: jbe 0x18211ea95
// asm:   0x18211e303: mov qword ptr [rdi + 0x58], rax
// asm:   0x18211e307: lea rcx, [rdi + 0x58]
// asm:   0x18211e30b: mov rdx, rax
// asm:   0x18211e30e: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e313: lea rcx, [rip + 0x1f60c0e]  ; ""
// asm:   0x18211e31a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e31f: cmp dword ptr [rdi + 0x18], 8
// asm:   0x18211e323: jbe 0x18211ea95
// asm:   0x18211e329: mov qword ptr [rdi + 0x60], rax
// asm:   0x18211e32d: lea rcx, [rdi + 0x60]
// asm:   0x18211e331: mov rdx, rax
// asm:   0x18211e334: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e339: lea rcx, [rip + 0x1f60be8]  ; ""
// asm:   0x18211e340: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e345: cmp dword ptr [rdi + 0x18], 9
// asm:   0x18211e349: jbe 0x18211ea95
// asm:   0x18211e34f: mov qword ptr [rdi + 0x68], rax
// asm:   0x18211e353: lea rcx, [rdi + 0x68]
// asm:   0x18211e357: mov rdx, rax
// asm:   0x18211e35a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e35f: lea rcx, [rip + 0x1f60bc2]  ; ""
// asm:   0x18211e366: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e36b: cmp dword ptr [rdi + 0x18], 0xa
// asm:   0x18211e36f: jbe 0x18211ea95
// asm:   0x18211e375: mov qword ptr [rdi + 0x70], rax
// asm:   0x18211e379: lea rcx, [rdi + 0x70]
// asm:   0x18211e37d: mov rdx, rax
// asm:   0x18211e380: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e385: lea rcx, [rip + 0x1f60b9c]  ; ""
// asm:   0x18211e38c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e391: cmp dword ptr [rdi + 0x18], 0xb
// asm:   0x18211e395: jbe 0x18211ea95
// asm:   0x18211e39b: mov qword ptr [rdi + 0x78], rax
// asm:   0x18211e39f: lea rcx, [rdi + 0x78]
// asm:   0x18211e3a3: mov rdx, rax
// asm:   0x18211e3a6: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e3ab: lea rcx, [rip + 0x1f60b76]  ; ""
// asm:   0x18211e3b2: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e3b7: cmp dword ptr [rdi + 0x18], 0xc
// asm:   0x18211e3bb: jbe 0x18211ea95
// asm:   0x18211e3c1: mov qword ptr [rdi + 0x80], rax
// asm:   0x18211e3c8: lea rcx, [rdi + 0x80]
// asm:   0x18211e3cf: mov rdx, rax
// asm:   0x18211e3d2: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e3d7: lea rcx, [rip + 0x1f60b4a]  ; ""
// asm:   0x18211e3de: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e3e3: cmp dword ptr [rdi + 0x18], 0xd
// asm:   0x18211e3e7: jbe 0x18211ea95
// asm:   0x18211e3ed: mov qword ptr [rdi + 0x88], rax
// asm:   0x18211e3f4: lea rcx, [rdi + 0x88]
// asm:   0x18211e3fb: mov rdx, rax
// asm:   0x18211e3fe: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e403: lea rcx, [rip + 0x1f60b1e]  ; ""
// asm:   0x18211e40a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e40f: cmp dword ptr [rdi + 0x18], 0xe
// asm:   0x18211e413: jbe 0x18211ea95
// asm:   0x18211e419: mov qword ptr [rdi + 0x90], rax
// asm:   0x18211e420: lea rcx, [rdi + 0x90]
// asm:   0x18211e427: mov rdx, rax
// asm:   0x18211e42a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e42f: lea rcx, [rip + 0x1fcd6c2]  ; "1"
// asm:   0x18211e436: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e43b: cmp dword ptr [rdi + 0x18], 0xf
// asm:   0x18211e43f: jbe 0x18211ea95
// asm:   0x18211e445: mov qword ptr [rdi + 0x98], rax
// asm:   0x18211e44c: lea rcx, [rdi + 0x98]
// asm:   0x18211e453: mov rdx, rax
// asm:   0x18211e456: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e45b: lea rcx, [rip + 0x1f60ac6]  ; ""
// asm:   0x18211e462: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e467: cmp dword ptr [rdi + 0x18], 0x10
// asm:   0x18211e46b: jbe 0x18211ea95
// asm:   0x18211e471: mov qword ptr [rdi + 0xa0], rax
// asm:   0x18211e478: lea rcx, [rdi + 0xa0]
// asm:   0x18211e47f: mov rdx, rax
// asm:   0x18211e482: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e487: lea rcx, [rip + 0x1fcd66a]  ; "1"
// asm:   0x18211e48e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e493: cmp dword ptr [rdi + 0x18], 0x11
// asm:   0x18211e497: jbe 0x18211ea95
// asm:   0x18211e49d: mov qword ptr [rdi + 0xa8], rax
// asm:   0x18211e4a4: lea rcx, [rdi + 0xa8]
// asm:   0x18211e4ab: mov rdx, rax
// asm:   0x18211e4ae: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e4b3: lea rcx, [rip + 0x1f60a6e]  ; ""
// asm:   0x18211e4ba: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e4bf: cmp dword ptr [rdi + 0x18], 0x12
// asm:   0x18211e4c3: jbe 0x18211ea95
// asm:   0x18211e4c9: mov qword ptr [rdi + 0xb0], rax
// asm:   0x18211e4d0: lea rcx, [rdi + 0xb0]
// asm:   0x18211e4d7: mov rdx, rax
// asm:   0x18211e4da: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e4df: lea rcx, [rip + 0x1f60a42]  ; ""
// asm:   0x18211e4e6: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e4eb: cmp dword ptr [rdi + 0x18], 0x13
// asm:   0x18211e4ef: jbe 0x18211ea95
// asm:   0x18211e4f5: mov qword ptr [rdi + 0xb8], rax
// asm:   0x18211e4fc: lea rcx, [rdi + 0xb8]
// asm:   0x18211e503: mov rdx, rax
// asm:   0x18211e506: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e50b: lea rcx, [rip + 0x1f60a16]  ; ""
// asm:   0x18211e512: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e517: cmp dword ptr [rdi + 0x18], 0x14
// asm:   0x18211e51b: jbe 0x18211ea95
// asm:   0x18211e521: mov qword ptr [rdi + 0xc0], rax
// asm:   0x18211e528: lea rcx, [rdi + 0xc0]
// asm:   0x18211e52f: mov rdx, rax
// asm:   0x18211e532: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e537: lea rcx, [rip + 0x1f609ea]  ; ""
// asm:   0x18211e53e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e543: cmp dword ptr [rdi + 0x18], 0x15
// asm:   0x18211e547: jbe 0x18211ea95
// asm:   0x18211e54d: mov qword ptr [rdi + 0xc8], rax
// asm:   0x18211e554: lea rcx, [rdi + 0xc8]
// asm:   0x18211e55b: mov rdx, rax
// asm:   0x18211e55e: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e563: lea rcx, [rip + 0x1f609be]  ; ""
// asm:   0x18211e56a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e56f: cmp dword ptr [rdi + 0x18], 0x16
// asm:   0x18211e573: jbe 0x18211ea95
// asm:   0x18211e579: mov qword ptr [rdi + 0xd0], rax
// asm:   0x18211e580: lea rcx, [rdi + 0xd0]
// asm:   0x18211e587: mov rdx, rax
// asm:   0x18211e58a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18211e58f: lea rcx, [rip + 0x1fab6a2]  ; ","
// asm:   0x18211e596: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18211e59b: mov rcx, rax
// asm:   0x18211e59e: xor r8d, r8d
// asm:   0x18211e5a1: mov rdx, rdi
// asm:   0x18211e5a4: call 0x18196ec20  ; System_String__Join()
// asm:   0x18211e5a9: mov r15, rax
// asm:   0x18211e5ac: xor esi, esi
// asm:   0x18211e5ae: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x18211e5b6: mov r14, qword ptr [rsp + 0xc8]
// asm:   0x18211ea95: call 0x180417110  ; ThrowIndexOutOfRangeException()
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

bool Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int32_t index;
  Characters_DummyHuman_o *__this_00;
  Characters_HumanSetup_o *pCVar4;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_HumanCustomSkinSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Settings_StringSetting_o *pSVar11;
  Settings_FloatSetting_o *pSVar12;
  bool bVar13;
  UnityEngine_GameObject_o *pUVar14;
  CustomSkins_HumanCustomSkinLoader_o *pCVar15;
  VirtualInvokeData *pVVar16;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_HumanCustomSkinSet_o *pSVar17;
  System_String_array *value;
  System_String_o *pSVar18;
  System_Func_string__bool__o *__this_02;
  System_Object_array *pSVar19;
  Il2CppObject *pIVar20;
  Il2CppObject *pIVar21;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value_00;
  UnityEngine_Object_o *__this_03;
  ushort uVar22;
  Settings_HumanCustomSet_o *pSVar23;
  Settings_HumanCustomSet_o *presetValue;
  Settings_HumanCustomSet_o *pSVar24;
  float fVar25;
  float fVar26;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *local_res8 [2];
  float local_res18 [2];
  Characters_DummyHuman_o *local_res20;
  Characters_Human___c__DisplayClass281_0_Fields local_68;
  
  local_res8[0] = __this;
  if (Il2CppMethodInitialized_184346b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Characters_DummyHuman_c_LoadSkinCoroutine_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_c);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanSetup not ready for skin loading on ");
    Il2CppMethodInitialized_184346b8b = '\x01';
  }
  local_68.usePresetSkins = false;
  local_68._1_7_ = 0;
  local_68.presetSet = (Settings_HumanCustomSet_o *)0x0;
  local_68.useGlobalOverrides = false;
  local_68._17_7_ = 0;
  local_68.globalSet = (Settings_HumanCustomSkinSet_o *)0x0;
  local_res18[0] = 0.0;
  __this_00 = (__this->fields).__4__this;
  iVar3 = (__this->fields).__1__state;
  local_res20 = __this_00;
  if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) goto label_18211e8bd;
    (__this_00->fields)._isLoadingSkins = true;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
label_18211e820:
    bVar13 = true;
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      SZArrayNew(TypeInfo_string_array,0x17);
      if (__this_00 == (Characters_DummyHuman_o *)0x0) {
label_18211e8bd:
        ThrowNullReferenceException();
      }
      pCVar15 = (__this_00->fields)._customSkinLoader;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar13) {
        pUVar14 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_18211e8bd;
        pCVar15 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar14,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
        (__this_00->fields)._customSkinLoader = pCVar15;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._customSkinLoader,pCVar15);
      }
      pCVar4 = (__this_00->fields).Setup;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar13) {
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (pSVar5 == (Settings_CustomSkinSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = (pSVar5->fields).Human;
        if (pSVar6 == (Settings_HumanCustomSkinSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled;
        if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_68.useGlobalOverrides = (pSVar7->fields)._value;
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (pSVar5 == (Settings_CustomSkinSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = (pSVar5->fields).Human;
        if (pSVar6 == (Settings_HumanCustomSkinSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled;
        if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_68.usePresetSkins = (pSVar7->fields)._value;
        pCVar4 = (__this_00->fields).Setup;
        presetValue = (Settings_HumanCustomSet_o *)0x0;
        local_68.presetSet = presetValue;
        if (pCVar4 != (Characters_HumanSetup_o *)0x0) {
          local_68.presetSet = (pCVar4->fields).CustomSet;
        }
        Il2CppCodeGenWriteBarrier(&local_68.presetSet,local_68.presetSet);
        local_68.globalSet = (Settings_HumanCustomSkinSet_o *)0x0;
        Il2CppCodeGenWriteBarrier(&local_68.globalSet,(void *)0x0);
        if (local_68.useGlobalOverrides != false) {
          pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if (pSVar5 == (Settings_CustomSkinSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar5->fields).Human;
          if (pSVar6 == (Settings_HumanCustomSkinSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar8 = (pSVar6->fields).LastGlobalPresetIndex;
          if (pSVar8 == (Settings_IntSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          obj = (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human)->
                fields).Sets;
          if (obj == (Settings_ListSetting_T__o *)0x0) {
            ThrowNullReferenceException();
          }
          index = (pSVar8->fields)._value;
          pIVar9 = (Il2CppClass *)obj->klass;
          uVar2 = (pIVar9->_2).interface_offsets_count;
          uVar22 = 0;
          if (uVar2 != 0) {
            pIVar10 = (pIVar9->_1).interfaceOffsets;
            do {
              if (pIVar10[uVar22].interfaceType == (Il2CppClass *)TypeInfo_Settings_IListSetting) {
                pVVar16 = pIVar9->vtable + (pIVar10[uVar22].offset + 2);
                goto label_18211d5d5;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar2);
          }
          pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_18211d5d5:
          __this_01 = (System_Collections_Generic_List_object__o *)
                      (*pVVar16->methodPtr)((Il2CppObject *)obj,pVVar16->method);
          if (-1 < index) {
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            if (index < (__this_01->fields)._size) {
              pSVar17 = (Settings_HumanCustomSkinSet_o *)
                        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  (__this_01,index,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
              if (pSVar17 == (Settings_HumanCustomSkinSet_o *)0x0) {
                local_68.globalSet = (Settings_HumanCustomSkinSet_o *)0x0;
              }
              else {
                bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
                if (((pSVar17->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pSVar17->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar17);
                }
                bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
                local_68.globalSet = pSVar17;
                if (((pSVar17->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pSVar17->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar17);
                }
              }
              Il2CppCodeGenWriteBarrier(&local_68.globalSet,local_68.globalSet);
            }
          }
        }
        value = (System_String_array *)SZArrayNew(TypeInfo_string_array,0x17);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Horse;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHorse;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if (value == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((int)value->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Hair;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHair;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[1] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Eye;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinEye;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[2] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Glass;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinGlass;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 4) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[3] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Face;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinFace;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 5) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[4] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Skin;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinSkin;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 6) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[5] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 5,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Costume;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinCostume;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 7) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[6] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 6,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Logo;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinLogo;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 8) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[7] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 7,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).GearL;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinGearL;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 9) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[8] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 8,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).GearR;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinGearR;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 10) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[9] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 9,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Gas;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinGas;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0xb) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[10] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 10,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Hoodie;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHoodie;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0xc) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0xb] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0xb,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).WeaponTrail;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinWeaponTrail;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0xd) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0xc] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0xc,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).ThunderspearL;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinThunderspearL;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0xe) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0xd] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0xd,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).ThunderspearR;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinThunderspearR;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0xf) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0xe] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0xe,pSVar18);
        if (local_68.globalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
          fVar25 = 1.0;
        }
        else {
          pSVar12 = ((local_68.globalSet)->fields).HookLTiling;
          if (pSVar12 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar25 = (pSVar12->fields)._value;
        }
        if (local_68.presetSet == (Settings_HumanCustomSet_o *)0x0) {
          fVar26 = 1.0;
        }
        else {
          pSVar12 = ((local_68.presetSet)->fields).SkinHookLTiling;
          if (pSVar12 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar26 = (pSVar12->fields)._value;
        }
        local_res18[0] = fVar25;
        if ((local_68.usePresetSkins == false) || (local_68.presetSet == (Settings_HumanCustomSet_o *)0x0)) {
          if (((local_68.useGlobalOverrides == false) ||
              (local_68.globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) &&
             ((local_68.usePresetSkins == false ||
              (local_res18[0] = fVar26, local_68.presetSet == (Settings_HumanCustomSet_o *)0x0)))) {
            local_res18[0] = 1.0;
          }
        }
        else if ((local_68.useGlobalOverrides == false) ||
                (local_68.globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
          local_res18[0] = fVar26;
        }
        pSVar18 = System_Single__ToString(local_res18,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x10) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0xf] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0xf,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).HookL;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHookL;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x11) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x10] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x10,pSVar18);
        if (local_68.globalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
          fVar25 = 1.0;
        }
        else {
          pSVar12 = ((local_68.globalSet)->fields).HookRTiling;
          if (pSVar12 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar25 = (pSVar12->fields)._value;
        }
        if (local_68.presetSet == (Settings_HumanCustomSet_o *)0x0) {
          fVar26 = 1.0;
        }
        else {
          pSVar12 = ((local_68.presetSet)->fields).SkinHookRTiling;
          if (pSVar12 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar26 = (pSVar12->fields)._value;
        }
        local_res18[0] = fVar25;
        if ((local_68.usePresetSkins == false) || (local_68.presetSet == (Settings_HumanCustomSet_o *)0x0)) {
          if (((local_68.useGlobalOverrides == false) ||
              (local_68.globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) &&
             ((local_68.usePresetSkins == false ||
              (local_res18[0] = fVar26, local_68.presetSet == (Settings_HumanCustomSet_o *)0x0)))) {
            local_res18[0] = 1.0;
          }
        }
        else if ((local_68.useGlobalOverrides == false) ||
                (local_68.globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
          local_res18[0] = fVar26;
        }
        pSVar18 = System_Single__ToString(local_res18,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x12) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x11] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x11,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).HookR;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHookR;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x13) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x12] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x12,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Hat;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHat;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x14) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x13] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x13,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Head;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinHead;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x15) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x14] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x14,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Back;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar23 = presetValue;
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinBack;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar23 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)pSVar23,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x16) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x15] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x15,pSVar18);
        pSVar24 = presetValue;
        if (local_68.globalSet != (Settings_HumanCustomSkinSet_o *)0x0) {
          pSVar11 = ((local_68.globalSet)->fields).Cloak;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar24 = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        if (local_68.presetSet != (Settings_HumanCustomSet_o *)0x0) {
          pSVar11 = ((local_68.presetSet)->fields).SkinCloak;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          presetValue = (Settings_HumanCustomSet_o *)(pSVar11->fields)._value;
        }
        pSVar18 = Characters_Human___LoadSkin_g__GetSkinValue_281_0
                            ((System_String_o *)pSVar24,(System_String_o *)presetValue,
                             (Characters_Human___c__DisplayClass281_0_o *)&local_68,(MethodInfo *)0x0);
        if ((uint)value->max_length < 0x17) {
          ThrowIndexOutOfRangeException();
        }
        value->m_Items[0x16] = pSVar18;
        Il2CppCodeGenWriteBarrier(value->m_Items + 0x16,pSVar18);
        pSVar18 = System_String__Join(",",value,(MethodInfo *)0x0);
        (__this_00->fields)._isLoadingSkins = false;
        if ((TypeInfo_Characters_DummyHuman_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_DummyHuman_c);
        }
        __this_02 = TypeInfo_Characters_DummyHuman_c->static_fields->__9__9_0;
        if (__this_02 == (System_Func_string__bool__o *)0x0) {
          if ((TypeInfo_Characters_DummyHuman_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_DummyHuman_c);
          }
          pIVar20 = (Il2CppObject *)TypeInfo_Characters_DummyHuman_c->static_fields->__9;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)__this_02,pIVar20,
                     (intptr_t)MethodInfo_Characters_DummyHuman_c_LoadSkinCoroutine_b__9_0,
                     (MethodInfo_B61EB0 *)0x0);
          TypeInfo_Characters_DummyHuman_c->static_fields->__9__9_0 = __this_02;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_DummyHuman_c->static_fields->__9__9_0,__this_02);
        }
        bVar13 = System_Linq_Enumerable__Any_object__6b6920
                           ((System_Collections_Generic_IEnumerable_TSource__o *)value,
                            (System_Func_TSource__bool__o *)__this_02,
                            (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
        if (!bVar13) {
          pCVar4 = (__this_00->fields).Setup;
          if (pCVar4 != (Characters_HumanSetup_o *)0x0) {
            Characters_HumanSetup__Load
                      ((__this_00->fields).Setup,(pCVar4->fields).CustomSet,(pCVar4->fields).Weapon,false,
                       (MethodInfo *)0x0);
            pCVar15 = (__this_00->fields)._customSkinLoader;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar13) {
              pCVar15 = (__this_00->fields)._customSkinLoader;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pCVar15,(MethodInfo *)0x0);
            }
            pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
              pCVar15 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar14,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader
                                  );
              (__this_00->fields)._customSkinLoader = pCVar15;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._customSkinLoader,pCVar15);
              return false;
            }
          }
          goto label_18211e8bd;
        }
        pCVar15 = (__this_00->fields)._customSkinLoader;
        pSVar19 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        local_res8[0] =
             (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *)CONCAT44(local_res8[0]._4_4_,0xffffffff);
        pIVar20 = il2cpp_value_box(g_data_184354e08,local_res8);
        if (pSVar19 == (System_Object_array *)0x0) {
label_18211ea8f:
          ThrowNullReferenceException();
        }
        if ((pIVar20 != (Il2CppObject *)0x0) &&
           (pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((pSVar19->obj).klass)->_1).element_class),
           pIVar21 == (Il2CppObject *)0x0)) {
          pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
        }
        if ((int)pSVar19->max_length == 0) {
label_18211ea89:
          ThrowIndexOutOfRangeException();
        }
        pSVar19->m_Items[0] = pIVar20;
        Il2CppCodeGenWriteBarrier(pSVar19->m_Items,pIVar20);
        if ((pSVar18 != (System_String_o *)0x0) &&
           (pIVar20 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar18,(((pSVar19->obj).klass)->_1).element_class),
           pIVar20 == (Il2CppObject *)0x0)) {
          pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
        }
        if ((uint)pSVar19->max_length < 2) goto label_18211ea89;
        pSVar19->m_Items[1] = (Il2CppObject *)pSVar18;
        Il2CppCodeGenWriteBarrier(pSVar19->m_Items + 1,pSVar18);
        if (pCVar15 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto label_18211ea8f;
        routine = (*(pCVar15->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                            (pCVar15,pSVar19,(pCVar15->klass->vtable)._7_LoadSkinsFromRPC.method);
        value_00 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                             ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value_00);
        (__this->fields).__1__state = 2;
        goto label_18211e820;
      }
      __this_03 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_Object_o *)0x0) goto label_18211e8bd;
      pSVar18 = UnityEngine_Object__get_name(__this_03,(MethodInfo *)0x0);
      pSVar18 = System_String__Concat_1969e50("HumanSetup not ready for skin loading on ",pSVar18,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
      (__this_00->fields)._isLoadingSkins = false;
    }
    else if (iVar3 == 2) {
      (__this->fields).__1__state = -1;
      return false;
    }
    bVar13 = false;
  }
  return bVar13;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_Reset (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x18211eaa0

void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_Reset
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_get_Current(Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman$$Awake
// il2cpp: void Characters_DummyHuman__Awake (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x182116d70

void Characters_DummyHuman__Awake(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *pUVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_AnimationHandler_o *__this_00;
  Characters_HumanComponentCache_o *pCVar5;
  Characters_HumanSetup_o *pCVar6;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b84 = '\x01';
  }
  if (Il2CppMethodInitialized_184346b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler);
    Il2CppMethodInitialized_184346b83 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler);
  Characters_AnimationHandler___ctor(__this_00,pUVar4,(MethodInfo *)0x0);
  (__this->fields).Animation = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Animation,__this_00);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanComponentCache);
  Characters_HumanComponentCache___ctor(pCVar5,pUVar4,(MethodInfo *)0x0);
  (__this->fields).Cache = pCVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cache,pCVar5);
  pCVar5 = (__this->fields).Cache;
  if ((pCVar5 != (Characters_HumanComponentCache_o *)0x0) &&
     (pUVar1 = (pCVar5->fields).Rigidbody, pUVar1 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar1,true,(MethodInfo *)0x0);
    pCVar5 = (__this->fields).Cache;
    if ((pCVar5 != (Characters_HumanComponentCache_o *)0x0) &&
       (pUVar1 = (pCVar5->fields).Rigidbody, pUVar1 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar1,false,(MethodInfo *)0x0);
      pCVar5 = (__this->fields).Cache;
      if (pCVar5 != (Characters_HumanComponentCache_o *)0x0) {
        pUVar1 = (pCVar5->fields).Rigidbody;
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        if (pUVar1 != (UnityEngine_Rigidbody_o *)0x0) {
          pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_18.x = (pUVar2->zeroVector).fields.x;
          local_18.y = (pUVar2->zeroVector).fields.y;
          local_18.z = (pUVar2->zeroVector).fields.z;
          UnityEngine_Rigidbody__set_linearVelocity
                    (pUVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pCVar6 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar4,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
            (__this->fields).Setup = pCVar6;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Setup,pCVar6);
            pCVar6 = (__this->fields).Setup;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_182116f99;
              pCVar6 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar4,(MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_HumanSetup);
              (__this->fields).Setup = pCVar6;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Setup,pCVar6);
            }
            return;
          }
        }
      }
    }
  }
label_182116f99:
  ThrowNullReferenceException();
}


// Characters.DummyHuman$$Start
// il2cpp: void Characters_DummyHuman__Start (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x182117520

void Characters_DummyHuman__Start(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_HumanCustomSkinLoader_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346b85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b85 = '\x01';
  }
  pCVar2 = (__this->fields)._customSkinLoader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
    (__this->fields)._customSkinLoader = pCVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinLoader,pCVar2);
  }
  return;
}


// Characters.DummyHuman$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetIdleAnimation (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x182117290

System_String_o * Characters_DummyHuman__GetIdleAnimation(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346b86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346b86 = '\x01';
  }
  pCVar2 = (__this->fields).Setup;
  if (((pCVar2 == (Characters_HumanSetup_o *)0x0) ||
      (pSVar3 = (pCVar2->fields).CustomSet, pSVar3 == (Settings_HumanCustomSet_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Sex, pSVar4 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar4->fields)._value;
  if (((pCVar2->fields).Weapon == 1) || ((pCVar2->fields).Weapon == 3)) {
    if (iVar1 == 0) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSM;
    }
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSF;
  }
  if ((pCVar2->fields).Weapon == 2) {
    if (iVar1 == 0) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSM;
    }
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSF;
  }
  if (iVar1 == 0) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleM;
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleF;
}


// Characters.DummyHuman$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetEmoteAnimation (Characters_DummyHuman_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x182116fa0

System_String_o *
Characters_DummyHuman__GetEmoteAnimation
          (Characters_DummyHuman_o *__this,System_String_o *emote,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Eat");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"Flip");
    Il2CppMethodInitialized_184346b87 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  pSVar1 = TypeInfo_Characters_HumanAnimations->static_fields->EmoteSalute;
  bVar2 = System_String__op_Equality(emote,"Salute",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteSalute;
  }
  bVar2 = System_String__op_Equality(emote,"Dance",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialArmin;
  }
  bVar2 = System_String__op_Equality(emote,"Flip",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->Dodge;
  }
  bVar2 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave;
  }
  bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteYes;
  }
  bVar2 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteNo;
  }
  bVar2 = System_String__op_Equality(emote,"Eat",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialSasha;
  }
  return pSVar1;
}


// Characters.DummyHuman$$LoadSkin
// il2cpp: void Characters_DummyHuman__LoadSkin (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x1821174a0

void Characters_DummyHuman__LoadSkin(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *routine;
  
  if ((__this->fields)._isLoadingSkins == false) {
    if (Il2CppMethodInitialized_184346b88 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
      Il2CppMethodInitialized_184346b88 = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Characters.DummyHuman$$LoadSkinCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_DummyHuman__LoadSkinCoroutine (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x182117430

System_Collections_IEnumerator_o *
Characters_DummyHuman__LoadSkinCoroutine(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
    Il2CppMethodInitialized_184346b88 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.DummyHuman$$.ctor
// il2cpp: void Characters_DummyHuman___ctor (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x180528540

void
Characters_DummyHuman___ctor(Characters_DummyHuman_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetSkinValue|9_1
// il2cpp: System_String_o* Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1 (System_String_o* globalValue, System_String_o* presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x182117610

System_String_o*
Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1(System_String_o* globalValue, System_String_o* presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , MethodInfo* method)

{
  bool bVar1;
  
  if (((param_3->fields).usePresetSkins == false) ||
     ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if (((param_3->fields).useGlobalOverrides != false) &&
       ((param_3->fields).globalSet != (Settings_HumanCustomSkinSet_o *)0x0)) {
      bVar1 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0);
      if (!bVar1) {
        return globalValue;
      }
      goto label_182117654;
    }
    if (((param_3->fields).usePresetSkins == false) ||
       ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) goto label_182117654;
    bVar1 = System_String__IsNullOrEmpty(presetValue,(MethodInfo *)0x0);
  }
  else {
    if ((((param_3->fields).useGlobalOverrides != false) &&
        ((param_3->fields).globalSet != (Settings_HumanCustomSkinSet_o *)0x0)) &&
       (bVar1 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0), !bVar1)) {
      return globalValue;
    }
    bVar1 = System_String__IsNullOrEmpty(presetValue,(MethodInfo *)0x0);
  }
  if (!bVar1) {
    return presetValue;
  }
label_182117654:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetFloatValue|9_2
// il2cpp: float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2 (float globalValue, float presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x1821175c0

float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2
                (float globalValue,float presetValue,Characters_DummyHuman___c__DisplayClass9_0_o *param_3,
                MethodInfo *method)

{
  if (((param_3->fields).usePresetSkins == false) ||
     ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if (((param_3->fields).useGlobalOverrides == false) ||
       ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
      if (((param_3->fields).usePresetSkins != false) &&
         ((param_3->fields).presetSet != (Settings_HumanCustomSet_o *)0x0)) {
        return presetValue;
      }
      globalValue = 1.0;
    }
  }
  else {
    if ((param_3->fields).useGlobalOverrides == false) {
      return presetValue;
    }
    if ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
      return presetValue;
    }
  }
  return globalValue;
}


