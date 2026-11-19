// Type: Characters.DummyHuman
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DummyHuman.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/DummyHuman.cs
// --------------------------------

// Characters.DummyHuman.<>c$$.cctor
// il2cpp: void Characters_DummyHuman___c___cctor (const MethodInfo* method);
// 0x5be7830

void Characters_DummyHuman___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075475ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_c);
    Il2CppMethodInitialized_075475ea = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DummyHuman_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Characters_DummyHuman_c->static_fields->__9 = (Characters_DummyHuman___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_DummyHuman_c->static_fields->__9);
  return;
}


// Characters.DummyHuman.<>c$$.ctor
// il2cpp: void Characters_DummyHuman___c___ctor (Characters_DummyHuman___c_o* __this, const MethodInfo* method);
// 0x5be78a0

void Characters_DummyHuman___c___ctor(Characters_DummyHuman___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman.<>c$$<LoadSkinCoroutine>b__9_0
// il2cpp: bool Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0 (Characters_DummyHuman___c_o* __this, System_String_o* url, const MethodInfo* method);
// 0x5be78b0

bool Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0
               (Characters_DummyHuman___c_o *__this,System_String_o *url,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075475eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_075475eb = '\x01';
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
// 0x5be7710

void Characters_DummyHuman__LoadSkinCoroutine_d__9___ctor
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x5be7900

void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$MoveNext
// il2cpp: bool Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x5be7910
// eh: try 0x5be7c48..0x5be93d0 -> pad 0x5be947c (+105 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5be94c1..0x5be9784 -> pad 0x5be9784 (+1 call sites) cleanup
// eh: try 0x5be9787..0x5be978c -> pad 0x5be9794 catch (...) [compiler noexcept guard]
// asm: 315 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be7db2: jmp 0x5be7e08
// asm:   0x5be7e82: jmp 0x5be7ed8
// asm:   0x5be7f50: jmp 0x5be7fa6
// asm:   0x5be8017: jmp 0x5be806d
// asm:   0x5be80e1: jmp 0x5be8137
// asm:   0x5be81a8: jmp 0x5be81fe
// asm:   0x5be826f: jmp 0x5be82c5
// asm:   0x5be8336: jmp 0x5be838c
// asm:   0x5be8403: jmp 0x5be8459
// asm:   0x5be84cd: jmp 0x5be8523
// asm:   0x5be8597: jmp 0x5be85ed
// asm:   0x5be8661: jmp 0x5be86b7
// asm:   0x5be872b: jmp 0x5be8781
// asm:   0x5be87fb: jmp 0x5be8851
// asm:   0x5be88cb: jmp 0x5be8921
// asm:   0x5be899c: jmp 0x5be89d2
// asm:   0x5be8a4c: jmp 0x5be8aa2
// asm:   0x5be8b1d: jmp 0x5be8b53
// asm:   0x5be8bca: jmp 0x5be8c20
// asm:   0x5be8c9a: jmp 0x5be8cf0
// asm:   0x5be8d6a: jmp 0x5be8dc0
// asm:   0x5be8e3a: jmp 0x5be8e90
// asm:   0x5be8f0a: jmp 0x5be8f60
// asm:   0x5be9141: mov rax, qword ptr [r15]
// asm:   0x5be9144: mov rdx, qword ptr [rax + 0x1b0]
// asm:   0x5be914b: mov rdi, r15
// asm:   0x5be914e: mov rsi, rbp
// asm:   0x5be9151: call qword ptr [rax + 0x1a8]  ; vtable slot 7
// asm:   0x5be9157: mov rdi, r12
// asm:   0x5be915a: mov rsi, rax
// asm:   0x5be915d: xor edx, edx
// asm:   0x5be915f: call 0x6a1c390  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x5be9164: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x5be9169: lea rdi, [rbx + 0x18]
// asm:   0x5be916d: mov qword ptr [rbx + 0x18], rax
// asm:   0x5be9171: mov rsi, rax
// asm:   0x5be9174: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5be9179: mov dword ptr [rbx + 0x10], 2
// asm:   0x5be9180: mov bl, 1
// asm:   0x5be9182: jmp 0x5be7bbb
// asm:   0x5be920c: lea rcx, [rip + 0x16c1585]  ; MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader
// asm:   0x5be9213: mov rsi, qword ptr [rcx]
// asm:   0x5be9216: mov rdi, rax
// asm:   0x5be9219: call 0x363b6a0  ; UnityEngine_GameObject__AddComponent_object_()
// asm:   0x5be921e: mov qword ptr [r14], rax
// asm:   0x5be9221: mov rdi, r14
// asm:   0x5be9224: mov rsi, rax
// asm:   0x5be9227: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5be922c: jmp 0x5be7bb9
// asm:   0x5be93d0: jmp 0x5be94aa
// asm:   0x5be93d5: jmp 0x5be94aa
// asm:   0x5be93da: jmp 0x5be94aa
// asm:   0x5be93df: jmp 0x5be94aa
// asm:   0x5be93e4: jmp 0x5be94aa
// asm:   0x5be93e9: jmp 0x5be94aa
// asm:   0x5be93ee: jmp 0x5be94aa
// asm:   0x5be93f3: jmp 0x5be94aa
// asm:   0x5be93f8: jmp 0x5be94aa
// asm:   0x5be93fd: jmp 0x5be94aa
// asm:   0x5be9402: jmp 0x5be94aa
// asm:   0x5be9407: jmp 0x5be94aa
// asm:   0x5be940c: jmp 0x5be94aa
// asm:   0x5be9411: jmp 0x5be94aa
// asm:   0x5be9416: jmp 0x5be94aa
// asm:   0x5be941b: jmp 0x5be94aa
// asm:   0x5be9420: jmp 0x5be94aa
// asm:   0x5be9425: jmp 0x5be94aa
// asm:   0x5be942a: jmp 0x5be94aa
// asm:   0x5be942c: jmp 0x5be94aa
// asm:   0x5be942e: jmp 0x5be94aa
// asm:   0x5be9430: jmp 0x5be94aa
// asm:   0x5be9432: jmp 0x5be94aa
// asm:   0x5be9434: jmp 0x5be94aa
// asm:   0x5be9436: jmp 0x5be94aa
// asm:   0x5be9438: jmp 0x5be94aa
// asm:   0x5be943a: jmp 0x5be94aa
// asm:   0x5be943c: jmp 0x5be94aa
// asm:   0x5be943e: jmp 0x5be94aa
// asm:   0x5be9440: jmp 0x5be94aa
// asm:   0x5be9442: jmp 0x5be94aa
// asm:   0x5be9444: jmp 0x5be94aa
// asm:   0x5be9446: jmp 0x5be94aa
// asm:   0x5be9448: jmp 0x5be94aa
// asm:   0x5be944a: jmp 0x5be94aa
// asm:   0x5be944c: jmp 0x5be94aa
// asm:   0x5be944e: jmp 0x5be94aa
// asm:   0x5be9450: jmp 0x5be94aa
// asm:   0x5be9452: jmp 0x5be94aa
// asm:   0x5be9454: jmp 0x5be94aa
// asm:   0x5be9456: jmp 0x5be94aa
// asm:   0x5be9458: jmp 0x5be94aa
// asm:   0x5be945a: jmp 0x5be94aa
// asm:   0x5be945c: jmp 0x5be94aa
// asm:   0x5be945e: jmp 0x5be94aa
// asm:   0x5be9460: jmp 0x5be94aa
// asm:   0x5be9462: jmp 0x5be94aa
// asm:   0x5be9464: jmp 0x5be94aa
// asm:   0x5be9466: jmp 0x5be94aa
// asm:   0x5be9468: jmp 0x5be94aa
// asm:   0x5be946a: jmp 0x5be94aa
// asm:   0x5be946c: jmp 0x5be94aa
// asm:   0x5be946e: jmp 0x5be94aa
// asm:   0x5be9470: jmp 0x5be94aa
// asm:   0x5be9472: jmp 0x5be94aa
// asm:   0x5be9474: jmp 0x5be94aa
// asm:   0x5be9476: jmp 0x5be94aa
// asm:   0x5be9478: jmp 0x5be94aa
// asm:   0x5be947a: jmp 0x5be94aa
// asm:   0x5be947c: jmp 0x5be94aa
// asm:   0x5be947e: jmp 0x5be94aa
// asm:   0x5be9480: jmp 0x5be94aa
// asm:   0x5be9482: jmp 0x5be94aa
// asm:   0x5be9484: jmp 0x5be94aa
// asm:   0x5be9486: jmp 0x5be94aa
// asm:   0x5be9488: jmp 0x5be94aa
// asm:   0x5be948a: jmp 0x5be94aa
// asm:   0x5be948c: jmp 0x5be94aa
// asm:   0x5be948e: jmp 0x5be94aa
// asm:   0x5be9490: jmp 0x5be94aa
// asm:   0x5be9492: jmp 0x5be94aa
// asm:   0x5be9494: jmp 0x5be94aa
// asm:   0x5be9496: jmp 0x5be94aa
// asm:   0x5be9498: jmp 0x5be94aa
// asm:   0x5be949a: jmp 0x5be94aa
// asm:   0x5be949c: jmp 0x5be94aa
// asm:   0x5be949e: jmp 0x5be94aa
// asm:   0x5be94a0: jmp 0x5be94aa
// asm:   0x5be94a2: jmp 0x5be94aa
// asm:   0x5be94a4: jmp 0x5be94aa
// asm:   0x5be94a6: jmp 0x5be94aa
// asm:   0x5be94a8: jmp 0x5be94aa
// asm:   0x5be94aa: mov rbx, rax
// asm:   0x5be94ad: cmp edx, 1
// asm:   0x5be94b0: jne 0x5be978c
// asm:   0x5be94b6: mov rdi, rbx
// asm:   0x5be94b9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be94be: mov rbx, rax
// asm:   0x5be94c1: lea rdi, [rip + 0x168ebf8]  ; TypeInfo_System_Exception
// asm:   0x5be94c8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be94cd: mov rcx, qword ptr [rbx]
// asm:   0x5be94d0: mov rsi, qword ptr [rcx]
// asm:   0x5be94d3: mov rdi, rax
// asm:   0x5be94d6: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5be94db: test al, al
// asm:   0x5be94dd: je 0x5be9763
// asm:   0x5be94e3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be94e8: lea rdi, [rip + 0x168b449]  ; TypeInfo_string_array
// asm:   0x5be94ef: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be94f4: mov rdi, rax
// asm:   0x5be94f7: mov esi, 0x17
// asm:   0x5be94fc: call 0x30d6180  ; SZArrayNew()
// asm:   0x5be9501: test rax, rax
// asm:   0x5be9504: je 0x5be975e
// asm:   0x5be950a: mov rbp, rax
// asm:   0x5be950d: lea r13, [rip + 0x16e4514]  ; ""
// asm:   0x5be9514: mov rdi, r13
// asm:   0x5be9517: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be951c: mov rdi, rbp
// asm:   0x5be951f: xor esi, esi
// asm:   0x5be9521: mov rdx, rax
// asm:   0x5be9524: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9529: mov rdi, r13
// asm:   0x5be952c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9531: mov esi, 1
// asm:   0x5be9536: mov rdi, rbp
// asm:   0x5be9539: mov rdx, rax
// asm:   0x5be953c: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9541: mov rdi, r13
// asm:   0x5be9544: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9549: mov esi, 2
// asm:   0x5be954e: mov rdi, rbp
// asm:   0x5be9551: mov rdx, rax
// asm:   0x5be9554: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9559: mov rdi, r13
// asm:   0x5be955c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9561: mov esi, 3
// asm:   0x5be9566: mov rdi, rbp
// asm:   0x5be9569: mov rdx, rax
// asm:   0x5be956c: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9571: mov rdi, r13
// asm:   0x5be9574: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9579: mov esi, 4
// asm:   0x5be957e: mov rdi, rbp
// asm:   0x5be9581: mov rdx, rax
// asm:   0x5be9584: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9589: mov rdi, r13
// asm:   0x5be958c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9591: mov esi, 5
// asm:   0x5be9596: mov rdi, rbp
// asm:   0x5be9599: mov rdx, rax
// asm:   0x5be959c: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be95a1: mov rdi, r13
// asm:   0x5be95a4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be95a9: mov esi, 6
// asm:   0x5be95ae: mov rdi, rbp
// asm:   0x5be95b1: mov rdx, rax
// asm:   0x5be95b4: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be95b9: mov rdi, r13
// asm:   0x5be95bc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be95c1: mov esi, 7
// asm:   0x5be95c6: mov rdi, rbp
// asm:   0x5be95c9: mov rdx, rax
// asm:   0x5be95cc: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be95d1: mov rdi, r13
// asm:   0x5be95d4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be95d9: mov esi, 8
// asm:   0x5be95de: mov rdi, rbp
// asm:   0x5be95e1: mov rdx, rax
// asm:   0x5be95e4: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be95e9: mov rdi, r13
// asm:   0x5be95ec: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be95f1: mov esi, 9
// asm:   0x5be95f6: mov rdi, rbp
// asm:   0x5be95f9: mov rdx, rax
// asm:   0x5be95fc: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9601: mov rdi, r13
// asm:   0x5be9604: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9609: mov esi, 0xa
// asm:   0x5be960e: mov rdi, rbp
// asm:   0x5be9611: mov rdx, rax
// asm:   0x5be9614: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9619: mov rdi, r13
// asm:   0x5be961c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9621: mov esi, 0xb
// asm:   0x5be9626: mov rdi, rbp
// asm:   0x5be9629: mov rdx, rax
// asm:   0x5be962c: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9631: mov rdi, r13
// asm:   0x5be9634: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9639: mov esi, 0xc
// asm:   0x5be963e: mov rdi, rbp
// asm:   0x5be9641: mov rdx, rax
// asm:   0x5be9644: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9649: mov rdi, r13
// asm:   0x5be964c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9651: mov esi, 0xd
// asm:   0x5be9656: mov rdi, rbp
// asm:   0x5be9659: mov rdx, rax
// asm:   0x5be965c: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9661: mov rdi, r13
// asm:   0x5be9664: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9669: mov esi, 0xe
// asm:   0x5be966e: mov rdi, rbp
// asm:   0x5be9671: mov rdx, rax
// asm:   0x5be9674: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9679: lea rbx, [rip + 0x16e8238]  ; "1"
// asm:   0x5be9680: mov rdi, rbx
// asm:   0x5be9683: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9688: mov esi, 0xf
// asm:   0x5be968d: mov rdi, rbp
// asm:   0x5be9690: mov rdx, rax
// asm:   0x5be9693: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9698: mov rdi, r13
// asm:   0x5be969b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be96a0: mov esi, 0x10
// asm:   0x5be96a5: mov rdi, rbp
// asm:   0x5be96a8: mov rdx, rax
// asm:   0x5be96ab: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be96b0: mov rdi, rbx
// asm:   0x5be96b3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be96b8: mov esi, 0x11
// asm:   0x5be96bd: mov rdi, rbp
// asm:   0x5be96c0: mov rdx, rax
// asm:   0x5be96c3: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be96c8: mov rdi, r13
// asm:   0x5be96cb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be96d0: mov esi, 0x12
// asm:   0x5be96d5: mov rdi, rbp
// asm:   0x5be96d8: mov rdx, rax
// asm:   0x5be96db: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be96e0: mov rdi, r13
// asm:   0x5be96e3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be96e8: mov esi, 0x13
// asm:   0x5be96ed: mov rdi, rbp
// asm:   0x5be96f0: mov rdx, rax
// asm:   0x5be96f3: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be96f8: mov rdi, r13
// asm:   0x5be96fb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9700: mov esi, 0x14
// asm:   0x5be9705: mov rdi, rbp
// asm:   0x5be9708: mov rdx, rax
// asm:   0x5be970b: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9710: mov rdi, r13
// asm:   0x5be9713: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9718: mov esi, 0x15
// asm:   0x5be971d: mov rdi, rbp
// asm:   0x5be9720: mov rdx, rax
// asm:   0x5be9723: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9728: mov rdi, r13
// asm:   0x5be972b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be9730: mov esi, 0x16
// asm:   0x5be9735: mov rdi, rbp
// asm:   0x5be9738: mov rdx, rax
// asm:   0x5be973b: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5be9740: lea rdi, [rip + 0x16e6d31]  ; ","
// asm:   0x5be9747: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5be974c: mov rdi, rax
// asm:   0x5be974f: mov rsi, rbp
// asm:   0x5be9752: xor edx, edx
// asm:   0x5be9754: call 0x54030a0  ; System_String__Join()
// asm:   0x5be9759: jmp 0x5be8fc9
// asm:   0x5be9763: mov edi, 8
// asm:   0x5be9768: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5be976d: mov rcx, qword ptr [rbx]
// asm:   0x5be9770: mov qword ptr [rax], rcx
// asm:   0x5be9773: lea rsi, [rip + 0x1243d86]
// asm:   0x5be977a: mov rdi, rax
// asm:   0x5be977d: xor edx, edx
// asm:   0x5be977f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5be9784: mov rbx, rax
// asm:   0x5be9787: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be978c: mov rdi, rbx
// asm:   0x5be978f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5be9794: mov rdi, rax
// asm:   0x5be9797: call 0x2ab61e0  ; __clang_call_terminate()

bool Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  CustomSkins_HumanCustomSkinLoader_o **ppCVar1;
  il2cpp_array_size_t *piVar2;
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
  Settings_FloatSetting_o *pSVar11;
  Settings_StringSetting_o *pSVar12;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *pCVar13;
  bool bVar14;
  bool bVar15;
  UnityEngine_GameObject_o *pUVar16;
  CustomSkins_HumanCustomSkinLoader_o *pCVar17;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar18;
  VirtualInvokeData *pVVar19;
  System_Collections_Generic_List_object__o *__this_02;
  Settings_BaseSetting_o *obj_00;
  System_String_array *value;
  Characters_DummyHuman___c_StaticFields *pCVar20;
  System_Func_string__bool__o *__this_03;
  System_Object_array *pSVar21;
  Il2CppObject *pIVar22;
  Il2CppObject *pIVar23;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar24;
  ulong uVar25;
  System_String_o *pSVar26;
  long lVar27;
  MethodInfo *in_R8;
  float fVar28;
  float fVar29;
  Settings_HumanCustomSet_o *pSStack_60;
  ulong uStack_58;
  Il2CppObject *pIStack_50;
  float afStack_48 [2];
  CustomSkins_HumanCustomSkinLoader_o **ppCStack_40;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *pCStack_38;
  
  if (Il2CppMethodInitialized_075475ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
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
    Il2CppMethodInitialized_075475ec = '\x01';
  }
  uStack_58 = 0;
  pIStack_50 = (Il2CppObject *)0x0;
  pSStack_60 = (Settings_HumanCustomSet_o *)0x0;
  afStack_48[0] = 0.0;
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 2) {
    (__this->fields).__1__state = -1;
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  if (iVar3 != 1) {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (Characters_DummyHuman_o *)0x0) {
      (__this_00->fields)._isLoadingSkins = true;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    goto label_05be975e;
  }
  (__this->fields).__1__state = -1;
  SZArrayNew(TypeInfo_string_array,0x17);
  if (__this_00 == (Characters_DummyHuman_o *)0x0) goto label_05be975e;
  pCVar17 = (__this_00->fields)._customSkinLoader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  ppCVar1 = &(__this_00->fields)._customSkinLoader;
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05be975e;
    pCVar17 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar16,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
    *ppCVar1 = pCVar17;
    Il2CppCodeGenWriteBarrier(ppCVar1);
  }
  pCVar4 = (__this_00->fields).Setup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    __this_01 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar18 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      pSVar18 = System_String__Concat_52f0320("HumanSetup not ready for skin loading on ",pSVar18,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
      (__this_00->fields)._isLoadingSkins = false;
      return false;
    }
    goto label_05be975e;
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  ppCStack_40 = ppCVar1;
  pCStack_38 = __this;
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
  uStack_58 = CONCAT71(uStack_58._1_7_,(pSVar7->fields)._value);
  pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar14 = (pSVar7->fields)._value;
  pCVar4 = (__this_00->fields).Setup;
  if (pCVar4 == (Characters_HumanSetup_o *)0x0) {
    pSStack_60 = (Settings_HumanCustomSet_o *)0x0;
  }
  else {
    pSStack_60 = (pCVar4->fields).CustomSet;
  }
  Il2CppCodeGenWriteBarrier(&pSStack_60);
  pIStack_50 = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&pIStack_50);
  if ((uStack_58 & 1) != 0) {
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
    obj = (pSVar6->fields).Sets;
    if (obj == (Settings_ListSetting_T__o *)0x0) {
      ThrowNullReferenceException();
    }
    index = (pSVar8->fields)._value;
    pIVar9 = (Il2CppClass *)obj->klass;
    uVar25 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar25 != 0) {
      pIVar10 = (pIVar9->_1).interfaceOffsets;
      lVar27 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar10->interfaceType + lVar27) ==
            TypeInfo_Settings_IListSetting) {
          pVVar19 = pIVar9->vtable + (*(int *)((long)&pIVar10->offset + lVar27) + 2);
          goto label_05be7d19;
        }
        lVar27 = lVar27 + 0x10;
      } while (uVar25 * 0x10 != lVar27);
    }
    pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05be7d19:
    __this_02 = (System_Collections_Generic_List_object__o *)
                (*pVVar19->methodPtr)((Il2CppObject *)obj,pVVar19->method);
    if (-1 < index) {
      if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      if (index < (__this_02->fields)._size) {
        obj_00 = System_Collections_Generic_List_object___get_Item
                           (__this_02,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
        pIStack_50 = il2cpp_codegen_is_inst_class
                               ((Il2CppObject *)obj_00,(Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet);
        il2cpp_codegen_is_inst_class
                  ((Il2CppObject *)obj_00,(Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet);
        Il2CppCodeGenWriteBarrier(&pIStack_50);
      }
    }
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,0x17);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be7dc0;
label_05be7e08:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be7e1e:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be7e3a;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[10].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[10].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be7e08;
label_05be7dc0:
    pSVar12 = (pSStack_60->fields).SkinHorse;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be7e08;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be7e1e;
    }
  }
label_05be7e3a:
  if (value == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)value->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be7e90;
label_05be7ed8:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be7eee:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be7f0a;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[4].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[4].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be7ed8;
label_05be7e90:
    pSVar12 = (pSStack_60->fields).SkinHair;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be7ed8;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be7eee;
    }
  }
label_05be7f0a:
  piVar2 = &value->max_length;
  if ((*piVar2 & 0xfffffffe) == 0) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[1] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 1);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be7f5e;
label_05be7fa6:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be7fbc:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be7fd8;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[5].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[5].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be7fa6;
label_05be7f5e:
    pSVar12 = (pSStack_60->fields).SkinEye;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be7fa6;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be7fbc;
    }
  }
label_05be7fd8:
  if ((uint)*piVar2 < 3) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[2] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 2);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8025;
label_05be806d:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8083:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be809f;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[5].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[5].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be806d;
label_05be8025:
    pSVar12 = (pSStack_60->fields).SkinGlass;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be806d;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8083;
    }
  }
label_05be809f:
  if ((*piVar2 & 0xfffffffc) == 0) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[3] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 3);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be80ef;
label_05be8137:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be814d:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8169;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[6].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[6].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8137;
label_05be80ef:
    pSVar12 = (pSStack_60->fields).SkinFace;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8137;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be814d;
    }
  }
label_05be8169:
  if ((uint)*piVar2 < 5) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[4] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 4);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be81b6;
label_05be81fe:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8214:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8230;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[6].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[6].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be81fe;
label_05be81b6:
    pSVar12 = (pSStack_60->fields).SkinSkin;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be81fe;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8214;
    }
  }
label_05be8230:
  if ((uint)*piVar2 < 6) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[5] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 5);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be827d;
label_05be82c5:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be82db:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be82f7;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[7].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[7].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be82c5;
label_05be827d:
    pSVar12 = (pSStack_60->fields).SkinCostume;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be82c5;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be82db;
    }
  }
label_05be82f7:
  if ((uint)*piVar2 < 7) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[6] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 6);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8344;
label_05be838c:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be83a2:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be83be;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[7].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[7].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be838c;
label_05be8344:
    pSVar12 = (pSStack_60->fields).SkinLogo;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be838c;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be83a2;
    }
  }
label_05be83be:
  if ((*piVar2 & 0xfffffff8) == 0) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[7] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 7);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8411;
label_05be8459:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be846f:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be848b;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[8].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[8].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8459;
label_05be8411:
    pSVar12 = (pSStack_60->fields).SkinGearL;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8459;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be846f;
    }
  }
label_05be848b:
  if ((uint)*piVar2 < 9) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[8] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 8);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be84db;
label_05be8523:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8539:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8555;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[8].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[8].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8523;
label_05be84db:
    pSVar12 = (pSStack_60->fields).SkinGearR;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8523;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8539;
    }
  }
label_05be8555:
  if ((uint)*piVar2 < 10) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[9] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 9);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be85a5;
label_05be85ed:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8603:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be861f;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[9].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[9].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be85ed;
label_05be85a5:
    pSVar12 = (pSStack_60->fields).SkinGas;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be85ed;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8603;
    }
  }
label_05be861f:
  if ((uint)*piVar2 < 0xb) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[10] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 10);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be866f;
label_05be86b7:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be86cd:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be86e9;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[9].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[9].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be86b7;
label_05be866f:
    pSVar12 = (pSStack_60->fields).SkinHoodie;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be86b7;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be86cd;
    }
  }
label_05be86e9:
  if ((uint)*piVar2 < 0xc) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0xb] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0xb);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8739;
label_05be8781:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8797:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be87b3;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[10].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[10].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8781;
label_05be8739:
    pSVar12 = (pSStack_60->fields).SkinWeaponTrail;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8781;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8797;
    }
  }
label_05be87b3:
  if ((uint)*piVar2 < 0xd) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0xc] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0xc);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8809;
label_05be8851:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8867:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8883;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xb].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[0xb].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8851;
label_05be8809:
    pSVar12 = (pSStack_60->fields).SkinThunderspearL;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8851;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8867;
    }
  }
label_05be8883:
  if ((uint)*piVar2 < 0xe) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0xd] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0xd);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be88d9;
label_05be8921:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8937:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8953;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xb].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[0xb].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8921;
label_05be88d9:
    pSVar12 = (pSStack_60->fields).SkinThunderspearR;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8921;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8937;
    }
  }
label_05be8953:
  if ((uint)*piVar2 < 0xf) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0xe] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0xe);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    fVar28 = 1.0;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be89b0;
label_05be89d2:
    afStack_48[0] = 1.0;
  }
  else {
    if (pIStack_50[0xc].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    fVar28 = *(float *)((long)pIStack_50[0xc].monitor + 0x1c);
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be89d2;
label_05be89b0:
    pSVar11 = (pSStack_60->fields).SkinHookLTiling;
    if (pSVar11 == (Settings_FloatSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be89d2;
    afStack_48[0] = (pSVar11->fields)._value;
  }
  fVar29 = afStack_48[0];
  if (pIStack_50 != (Il2CppObject *)0x0) {
    fVar29 = fVar28;
  }
  if ((char)uStack_58 != '\0') {
    afStack_48[0] = fVar29;
  }
  pSVar18 = System_Single__ToString(afStack_48,(MethodInfo *)0x0);
  if ((*piVar2 & 0xfffffff0) == 0) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0xf] = pSVar18;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0xf);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8a5a;
label_05be8aa2:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8ab8:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8ad4;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xc].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[0xc].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8aa2;
label_05be8a5a:
    pSVar12 = (pSStack_60->fields).SkinHookL;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8aa2;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8ab8;
    }
  }
label_05be8ad4:
  if ((uint)*piVar2 < 0x11) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x10] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x10);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    fVar28 = 1.0;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8b31;
label_05be8b53:
    afStack_48[0] = 1.0;
  }
  else {
    if (pIStack_50[0xd].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    fVar28 = *(float *)((long)pIStack_50[0xd].monitor + 0x1c);
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8b53;
label_05be8b31:
    pSVar11 = (pSStack_60->fields).SkinHookRTiling;
    if (pSVar11 == (Settings_FloatSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8b53;
    afStack_48[0] = (pSVar11->fields)._value;
  }
  fVar29 = afStack_48[0];
  if (pIStack_50 != (Il2CppObject *)0x0) {
    fVar29 = fVar28;
  }
  if ((char)uStack_58 != '\0') {
    afStack_48[0] = fVar29;
  }
  pSVar18 = System_Single__ToString(afStack_48,(MethodInfo *)0x0);
  if ((uint)*piVar2 < 0x12) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x11] = pSVar18;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x11);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8bd8;
label_05be8c20:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8c36:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8c52;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xd].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[0xd].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8c20;
label_05be8bd8:
    pSVar12 = (pSStack_60->fields).SkinHookR;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8c20;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8c36;
    }
  }
label_05be8c52:
  if ((uint)*piVar2 < 0x13) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x12] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x12);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8ca8;
label_05be8cf0:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8d06:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8d22;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xe].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[0xe].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8cf0;
label_05be8ca8:
    pSVar12 = (pSStack_60->fields).SkinHat;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8cf0;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8d06;
    }
  }
label_05be8d22:
  if ((uint)*piVar2 < 0x14) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x13] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x13);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8d78;
label_05be8dc0:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8dd6:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8df2;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xe].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[0xe].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8dc0;
label_05be8d78:
    pSVar12 = (pSStack_60->fields).SkinHead;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8dc0;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8dd6;
    }
  }
label_05be8df2:
  if ((uint)*piVar2 < 0x15) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x14] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x14);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8e48;
label_05be8e90:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8ea6:
      pSVar26 = pSVar18;
      if (bVar15 == false) goto label_05be8ec2;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xf].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = ((pIStack_50[0xf].klass)->_1).byval_arg.data;
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8e90;
label_05be8e48:
    pSVar12 = (pSStack_60->fields).SkinBack;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8e90;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar15 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar15)) {
      bVar15 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8ea6;
    }
  }
label_05be8ec2:
  if ((uint)*piVar2 < 0x16) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x15] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x15);
  if (pIStack_50 == (Il2CppObject *)0x0) {
    pSVar26 = (System_String_o *)0x0;
    pSVar18 = pSVar26;
    if (pSStack_60 != (Settings_HumanCustomSet_o *)0x0) goto label_05be8f18;
label_05be8f60:
    if (((char)uStack_58 != '\0') && (pIStack_50 != (Il2CppObject *)0x0)) {
      bVar14 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
label_05be8f76:
      pSVar26 = pSVar18;
      if (bVar14 == false) goto label_05be8f92;
    }
    pSVar26 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pIStack_50[0xf].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar26 = *(System_String_o **)((long)pIStack_50[0xf].monitor + 0x20);
    pSVar18 = pSVar26;
    if (pSStack_60 == (Settings_HumanCustomSet_o *)0x0) goto label_05be8f60;
label_05be8f18:
    pSVar12 = (pSStack_60->fields).SkinCloak;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar18 = pSVar26;
    if ((bVar14 == false) || (pSStack_60 == (Settings_HumanCustomSet_o *)0x0)) goto label_05be8f60;
    pSVar18 = (pSVar12->fields)._value;
    if ((((char)uStack_58 == '\0') || (pIStack_50 == (Il2CppObject *)0x0)) ||
       (bVar14 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0), bVar14)) {
      bVar14 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
      goto label_05be8f76;
    }
  }
label_05be8f92:
  if ((uint)*piVar2 < 0x17) {
    ThrowIndexOutOfRangeException();
  }
  value->m_Items[0x16] = pSVar26;
  Il2CppCodeGenWriteBarrier(value->m_Items + 0x16);
  pSVar18 = System_String__Join(",",value,(MethodInfo *)0x0);
  (__this_00->fields)._isLoadingSkins = false;
  if ((TypeInfo_Characters_DummyHuman_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_DummyHuman_c);
  }
  pCVar20 = TypeInfo_Characters_DummyHuman_c->static_fields;
  __this_03 = pCVar20->__9__9_0;
  if (__this_03 == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_Characters_DummyHuman_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_DummyHuman_c);
      pCVar20 = TypeInfo_Characters_DummyHuman_c->static_fields;
    }
    pIVar22 = (Il2CppObject *)pCVar20->__9;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_03,pIVar22,
               (intptr_t)MethodInfo_Characters_DummyHuman_c_LoadSkinCoroutine_b__9_0,(MethodInfo_4F19300 *)0x0
              );
    pCVar20 = TypeInfo_Characters_DummyHuman_c->static_fields;
    pCVar20->__9__9_0 = __this_03;
    Il2CppCodeGenWriteBarrier(&pCVar20->__9__9_0);
  }
  bVar14 = System_Linq_Enumerable__Any_object__34dfce0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)value,
                      (System_Func_TSource__bool__o *)__this_03,
                      (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  if (bVar14) {
    pCVar17 = *ppCStack_40;
    pSVar21 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    afStack_48[1] = -NAN;
    pIVar22 = il2cpp_vm_Object_Box(g_data_07556710,afStack_48 + 1);
    if (pSVar21 != (System_Object_array *)0x0) {
      if ((pIVar22 != (Il2CppObject *)0x0) &&
         (pIVar23 = il2cpp_vm_Object_IsInst(pIVar22,(((pSVar21->obj).klass)->_1).element_class),
         pIVar23 == (Il2CppObject *)0x0)) {
label_05be92c2:
        pIVar22 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar22,(MethodInfo *)0x0);
      }
      if ((int)pSVar21->max_length != 0) {
        pSVar21->m_Items[0] = pIVar22;
        Il2CppCodeGenWriteBarrier(pSVar21->m_Items);
        if ((pSVar18 != (System_String_o *)0x0) &&
           (pIVar22 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar18,(((pSVar21->obj).klass)->_1).element_class),
           pIVar22 == (Il2CppObject *)0x0)) goto label_05be92c2;
        if ((pSVar21->max_length & 0xfffffffe) != 0) {
          pSVar21->m_Items[1] = (Il2CppObject *)pSVar18;
          Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1);
          if (pCVar17 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
            routine = (*(pCVar17->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                (pCVar17,pSVar21,(pCVar17->klass->vtable)._7_LoadSkinsFromRPC.method);
            pUVar24 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
            pCVar13 = pCStack_38;
            (pCStack_38->fields).__2__current = (Il2CppObject *)pUVar24;
            Il2CppCodeGenWriteBarrier(&(pCStack_38->fields).__2__current);
            (pCVar13->fields).__1__state = 2;
            return true;
          }
          goto label_05be975e;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  else {
    pCVar4 = (__this_00->fields).Setup;
    if (pCVar4 != (Characters_HumanSetup_o *)0x0) {
      Characters_HumanSetup__Load(pCVar4,(pCVar4->fields).CustomSet,(pCVar4->fields).Weapon,false,in_R8);
      ppCVar1 = ppCStack_40;
      pCVar17 = *ppCStack_40;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar14) {
        pCVar17 = *ppCVar1;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pCVar17,(MethodInfo *)0x0);
      }
      pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        pCVar17 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar16,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
        *ppCVar1 = pCVar17;
        Il2CppCodeGenWriteBarrier(ppCVar1);
        return false;
      }
    }
  }
label_05be975e:
  ThrowNullReferenceException();
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x5be9d10

Il2CppObject *
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_Reset (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x5be9d20

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
// 0x5be9d60

Il2CppObject *
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_get_Current
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman$$Awake
// il2cpp: void Characters_DummyHuman__Awake (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x5be67d0

void Characters_DummyHuman__Awake(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_HumanComponentCache_o **targetAddress;
  Characters_HumanSetup_o **targetAddress_00;
  UnityEngine_Rigidbody_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  Characters_AnimationHandler_o *__this_00;
  Characters_HumanComponentCache_o *pCVar4;
  Characters_HumanSetup_o *pCVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075475e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475e5 = '\x01';
  }
  if (Il2CppMethodInitialized_075475e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler);
    Il2CppMethodInitialized_075475e4 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler);
  Characters_AnimationHandler___ctor(__this_00,pUVar3,(MethodInfo *)0x0);
  (__this->fields).Animation = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Animation);
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanComponentCache);
  Characters_HumanComponentCache___ctor(pCVar4,pUVar3,method_00);
  targetAddress = &(__this->fields).Cache;
  (__this->fields).Cache = pCVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pCVar4 = (__this->fields).Cache;
  if ((pCVar4 != (Characters_HumanComponentCache_o *)0x0) &&
     (pUVar1 = (pCVar4->fields).Rigidbody, pUVar1 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar1,true,(MethodInfo *)0x0);
    if ((*targetAddress != (Characters_HumanComponentCache_o *)0x0) &&
       (pUVar1 = ((*targetAddress)->fields).Rigidbody, pUVar1 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar1,false,(MethodInfo *)0x0);
      if (*targetAddress != (Characters_HumanComponentCache_o *)0x0) {
        pUVar1 = ((*targetAddress)->fields).Rigidbody;
        if (Il2CppMethodInitialized_0753e4b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b6 = '\x01';
        }
        if (pUVar1 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_linearVelocity
                    (pUVar1,(UnityEngine_Vector3_o)
                            (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pCVar5 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar3,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
            targetAddress_00 = &(__this->fields).Setup;
            (__this->fields).Setup = pCVar5;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pCVar5 = (__this->fields).Setup;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              pCVar5 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar3,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_HumanSetup);
              *targetAddress_00 = pCVar5;
              Il2CppCodeGenWriteBarrier(targetAddress_00);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.DummyHuman$$Start
// il2cpp: void Characters_DummyHuman__Start (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x5be71e0

void Characters_DummyHuman__Start(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_HumanCustomSkinLoader_o *pCVar2;
  CustomSkins_HumanCustomSkinLoader_o **targetAddress;
  
  if (Il2CppMethodInitialized_075475e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475e6 = '\x01';
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
    targetAddress = &(__this->fields)._customSkinLoader;
    pCVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_HumanCustomSkinLoader);
    *targetAddress = pCVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// Characters.DummyHuman$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetIdleAnimation (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x5be7290

System_String_o * Characters_DummyHuman__GetIdleAnimation(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  Characters_HumanSetup_o *pCVar4;
  Settings_HumanCustomSet_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  
  if (Il2CppMethodInitialized_075475e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075475e7 = '\x01';
  }
  pCVar4 = (__this->fields).Setup;
  if (((pCVar4 == (Characters_HumanSetup_o *)0x0) ||
      (pSVar5 = (pCVar4->fields).CustomSet, pSVar5 == (Settings_HumanCustomSet_o *)0x0)) ||
     (pSVar6 = (pSVar5->fields).Sex, pSVar6 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar6->fields)._value;
  iVar2 = (pCVar4->fields).Weapon;
  if (iVar2 != 3) {
    if (iVar2 == 2) {
      uVar3 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
      if (iVar1 == 0) {
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSM;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSF;
    }
    if (iVar2 != 1) {
      uVar3 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
      if (iVar1 == 0) {
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        return TypeInfo_Characters_HumanAnimations->static_fields->IdleM;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      return TypeInfo_Characters_HumanAnimations->static_fields->IdleF;
    }
  }
  uVar3 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  if (iVar1 == 0) {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    }
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSM;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSF;
}


// Characters.DummyHuman$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetEmoteAnimation (Characters_DummyHuman_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5be73f0

System_String_o *
Characters_DummyHuman__GetEmoteAnimation
          (Characters_DummyHuman_o *__this,System_String_o *emote,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  long lVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_075475e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Eat");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"Flip");
    Il2CppMethodInitialized_075475e8 = '\x01';
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
    lVar3 = 0x228;
  }
  else {
    bVar2 = System_String__op_Equality(emote,"Dance",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
      }
      lVar3 = 0x1d8;
    }
    else {
      bVar2 = System_String__op_Equality(emote,"Flip",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        ppSVar4 = &TypeInfo_Characters_HumanAnimations->static_fields->Dodge;
        goto label_05be74fc;
      }
      bVar2 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
        }
        lVar3 = 0x240;
      }
      else {
        bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
          }
          lVar3 = 0x238;
        }
        else {
          bVar2 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
            }
            lVar3 = 0x230;
          }
          else {
            bVar2 = System_String__op_Equality(emote,"Eat",(MethodInfo *)0x0);
            if (!bVar2) {
              return pSVar1;
            }
            if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
            }
            lVar3 = 0x1f0;
          }
        }
      }
    }
  }
  ppSVar4 = (System_String_o **)
            ((long)&TypeInfo_Characters_HumanAnimations->static_fields->HorseMount + lVar3);
label_05be74fc:
  return *ppSVar4;
}


// Characters.DummyHuman$$LoadSkin
// il2cpp: void Characters_DummyHuman__LoadSkin (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x5be7620

void Characters_DummyHuman__LoadSkin(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this_00;
  
  if ((__this->fields)._isLoadingSkins != false) {
    return;
  }
  if (Il2CppMethodInitialized_075475e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
    Il2CppMethodInitialized_075475e9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman$$LoadSkinCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_DummyHuman__LoadSkinCoroutine (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x5be76a0

System_Collections_IEnumerator_o *
Characters_DummyHuman__LoadSkinCoroutine(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_075475e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
    Il2CppMethodInitialized_075475e9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DummyHuman_LoadSkinCoroutine_d__9);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.DummyHuman$$.ctor
// il2cpp: void Characters_DummyHuman___ctor (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x5be7730

void Characters_DummyHuman___ctor(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetSkinValue|9_1
// il2cpp: System_String_o* Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1 (System_String_o* globalValue, System_String_o* presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x5be7740
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be7773: jmp 0x5be77c6
// asm:   0x5be7790: jmp 0x5be77c6

System_String_o *
Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1
          (System_String_o *globalValue,System_String_o *presetValue,
          Characters_DummyHuman___c__DisplayClass9_0_o *param_3,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (param_3->fields).usePresetSkins;
  if ((bVar1 == false) || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if (((param_3->fields).useGlobalOverrides == false) ||
       ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
      if ((bVar1 == false) || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0))
      goto label_05be77ae;
      goto label_05be779d;
    }
    bVar1 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0);
  }
  else {
    if (((param_3->fields).useGlobalOverrides != false) &&
       (((param_3->fields).globalSet != (Settings_HumanCustomSkinSet_o *)0x0 &&
        (bVar1 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0), !bVar1)))) {
      return globalValue;
    }
label_05be779d:
    bVar1 = System_String__IsNullOrEmpty(presetValue,(MethodInfo *)0x0);
    globalValue = presetValue;
  }
  if (!bVar1) {
    return globalValue;
  }
label_05be77ae:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetFloatValue|9_2
// il2cpp: float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2 (float globalValue, float presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x5be77e0

float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2
                (float globalValue,float presetValue,Characters_DummyHuman___c__DisplayClass9_0_o *param_3,
                MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (param_3->fields).usePresetSkins;
  if ((bVar1 == false) || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if ((((param_3->fields).useGlobalOverrides == false) ||
        ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) &&
       ((bVar1 == false ||
        (globalValue = presetValue, (param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)))) {
      return 1.0;
    }
  }
  else if (((param_3->fields).useGlobalOverrides == false) ||
          ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
    return presetValue;
  }
  return globalValue;
}


