// Type: GameProgress.DamageSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/GameProgress/DamageSetting.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/DamageSetting.cs
// --------------------------------

// GameProgress.DamageSetting.<>c$$.cctor
// il2cpp: void GameProgress_DamageSetting___c___cctor (const MethodInfo* method);
// 0x591e200

void GameProgress_DamageSetting___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754573b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_c);
    Il2CppMethodInitialized_0754573b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameProgress_DamageSetting_c->static_fields->__9 = (GameProgress_DamageSetting___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_DamageSetting_c->static_fields->__9);
  return;
}


// GameProgress.DamageSetting.<>c$$.ctor
// il2cpp: void GameProgress_DamageSetting___c___ctor (GameProgress_DamageSetting___c_o* __this, const MethodInfo* method);
// 0x591e270

void GameProgress_DamageSetting___c___ctor(GameProgress_DamageSetting___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_0
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_0 (GameProgress_DamageSetting___c_o* __this, int32_t w, const MethodInfo* method);
// 0x591e280

System_String_o *
GameProgress_DamageSetting___c____cctor_b__5_0
          (GameProgress_DamageSetting___c_o *__this,int32_t w,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_0754573c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_0754573c = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = w;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_1
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_1 (GameProgress_DamageSetting___c_o* __this, System_String_o* k, const MethodInfo* method);
// 0x591e2e0

System_String_o *
GameProgress_DamageSetting___c____cctor_b__5_1
          (GameProgress_DamageSetting___c_o *__this,System_String_o *k,MethodInfo *method)

{
  return k;
}


// GameProgress.DamageSetting.<>c$$<GetStatLabels>b__19_0
// il2cpp: bool GameProgress_DamageSetting___c___GetStatLabels_b__19_0 (GameProgress_DamageSetting___c_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp, const MethodInfo* method);
// 0x591e2f0

bool GameProgress_DamageSetting___c___GetStatLabels_b__19_0
               (GameProgress_DamageSetting___c_o *__this,
               System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754573d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    Il2CppMethodInitialized_0754573d = '\x01';
  }
  bVar1 = System_String__op_Inequality(kvp.fields.key,"Overall",(MethodInfo *)0x0);
  return bVar1;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$.ctor
// il2cpp: void GameProgress_DamageSetting___c__DisplayClass5_0___ctor (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x591caa0

void GameProgress_DamageSetting___c__DisplayClass5_0___ctor
               (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__2
// il2cpp: int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__2 (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, System_String_o* v, const MethodInfo* method);
// 0x591e340

int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__2
                  (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,System_String_o *v,
                  MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).i;
  (__this->fields).i = iVar1 + 1;
  return iVar1;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__3
// il2cpp: int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__3 (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o lhs, System_Collections_Generic_KeyValuePair_string__JSONNode__o rhs, const MethodInfo* method);
// 0x591e350

int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__3
                  (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o lhs,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o rhs,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *pSVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t local_30;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_0754573e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    Il2CppMethodInitialized_0754573e = '\x01';
  }
  local_2c = 0;
  local_30 = 0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).orderByString;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                      (pSVar1,(Il2CppObject *)rhs.fields.key,&local_2c,
                       (MethodInfo_4A9F630 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).orderByString;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                        (pSVar1,(Il2CppObject *)lhs.fields.key,&local_30,
                         (MethodInfo_4A9F630 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
      if (bVar2 && bVar3) {
        iVar4 = local_2c - local_30;
      }
      else {
        iVar4 = 1;
        if ((!bVar2 || bVar3) && (iVar4 = -1, bVar2 || !bVar3)) {
          iVar4 = System_String__Compare(lhs.fields.key,rhs.fields.key,(MethodInfo *)0x0);
        }
      }
      return iVar4;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$.ctor
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19___ctor (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x591dcd0

void GameProgress_DamageSetting__GetStatLabels_d__19___ctor
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.IDisposable.Dispose
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19__System_IDisposable_Dispose (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591e440

void GameProgress_DamageSetting__GetStatLabels_d__19__System_IDisposable_Dispose
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 < -2) {
    if (iVar1 != -4) {
      if (iVar1 != -3) {
        return;
      }
      goto label_0591e46b;
    }
label_0591e47d:
    if (Il2CppMethodInitialized_07545741 != '\0') goto label_0591e49d;
    puVar2 = &Il2CppMethodInitialized_07545741;
  }
  else {
    if (iVar1 == 4) goto label_0591e47d;
    if (iVar1 != 2) {
      return;
    }
label_0591e46b:
    if (Il2CppMethodInitialized_07545740 != '\0') goto label_0591e49d;
    puVar2 = &Il2CppMethodInitialized_07545740;
  }
  il2cpp_codegen_initialize_runtime_metadata
            (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  *puVar2 = 1;
label_0591e49d:
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C1CB40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$MoveNext
// il2cpp: bool GameProgress_DamageSetting__GetStatLabels_d__19__MoveNext (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591e4d0
// fidelity: the machine code has facts this C leaves out:
//   virtual call through vtable slot 43 (2 times)
// eh: try 0x591e620..0x591ef83 -> pad 0x591e9b3 (+62 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591efba..0x591efbf -> pad 0x591efda cleanup
// eh: try 0x591efdd..0x591efea -> pad 0x591eff2 catch (...) [compiler noexcept guard]
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591e968: jmp 0x591ef9f
// asm:   0x591e96d: jmp 0x591ef9f
// asm:   0x591e972: jmp 0x591ef9f
// asm:   0x591e977: jmp 0x591ef9f
// asm:   0x591e97c: jmp 0x591ef9f
// asm:   0x591e981: jmp 0x591ef9f
// asm:   0x591e986: jmp 0x591ef9f
// asm:   0x591e98b: jmp 0x591ef9f
// asm:   0x591e990: jmp 0x591ef9f
// asm:   0x591e995: jmp 0x591ef9f
// asm:   0x591e99a: jmp 0x591ef9f
// asm:   0x591e99f: jmp 0x591ef9f
// asm:   0x591e9a4: jmp 0x591ef9f
// asm:   0x591e9a9: jmp 0x591ef9f
// asm:   0x591e9ae: jmp 0x591ef9f
// asm:   0x591e9b3: jmp 0x591ef9f
// asm:   0x591e9b8: jmp 0x591ef9f
// asm:   0x591e9bd: jmp 0x591ef9f
// asm:   0x591e9c2: jmp 0x591ef9f
// asm:   0x591e9c7: jmp 0x591ef9f
// asm:   0x591e9cc: jmp 0x591ef9f
// asm:   0x591ecb7: jmp 0x591ef9f
// asm:   0x591ecbc: jmp 0x591ef9f
// asm:   0x591ecc1: jmp 0x591ef9f
// asm:   0x591ecc6: jmp 0x591ef9f
// asm:   0x591eccb: jmp 0x591ef9f
// asm:   0x591ecd0: jmp 0x591ef9f
// asm:   0x591ecd5: jmp 0x591ef9f
// asm:   0x591ecda: jmp 0x591ef9f
// asm:   0x591ecdf: jmp 0x591ef9f
// asm:   0x591ece4: jmp 0x591ef9f
// asm:   0x591ece9: jmp 0x591ef9f
// asm:   0x591ecee: jmp 0x591ef9f
// asm:   0x591ecf3: jmp 0x591ef9f
// asm:   0x591ecf8: jmp 0x591ef9f
// asm:   0x591ecfd: jmp 0x591ef9f
// asm:   0x591ed02: jmp 0x591ef9f
// asm:   0x591ed07: jmp 0x591ef9f
// asm:   0x591ed0c: jmp 0x591ef9f
// asm:   0x591ed11: jmp 0x591ef9f
// asm:   0x591ed16: jmp 0x591ef9f
// asm:   0x591ed1b: jmp 0x591ef9f
// asm:   0x591ef83: jmp 0x591ef9f
// asm:   0x591ef85: jmp 0x591ef9f
// asm:   0x591ef87: jmp 0x591ef9f
// asm:   0x591ef89: jmp 0x591ef9f
// asm:   0x591ef8b: jmp 0x591ef9f
// asm:   0x591ef8d: jmp 0x591ef9f
// asm:   0x591ef8f: jmp 0x591ef9f
// asm:   0x591ef91: jmp 0x591ef9f
// asm:   0x591ef93: jmp 0x591ef9f
// asm:   0x591ef95: jmp 0x591ef9f
// asm:   0x591ef97: jmp 0x591ef9f
// asm:   0x591ef99: jmp 0x591ef9f
// asm:   0x591ef9b: jmp 0x591ef9f
// asm:   0x591ef9d: jmp 0x591ef9f
// asm:   0x591ef9f: mov rbx, rax
// asm:   0x591efa2: cmp edx, 1
// asm:   0x591efa5: jne 0x591efdd
// asm:   0x591efa7: mov rdi, rbx
// asm:   0x591efaa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591efaf: mov rbx, qword ptr [rax]
// asm:   0x591efb2: mov qword ptr [rsp + 0xa8], rbx
// asm:   0x591efba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591efbf: test rbx, rbx
// asm:   0x591efc2: je 0x591ee79
// asm:   0x591efc8: mov rdi, qword ptr [rsp + 8]
// asm:   0x591efcd: call 0x2fd2fd0  ; il2cpp_runtime_helper_02fd2fd0()
// asm:   0x591efd2: mov rdi, rbx
// asm:   0x591efd5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591efda: mov rbx, rax
// asm:   0x591efdd: lea rdi, [rsp + 0xa8]
// asm:   0x591efe5: call 0x2fd2520  ; il2cpp_runtime_helper_02fd2520()
// asm:   0x591efea: mov rdi, rbx
// asm:   0x591efed: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591eff2: mov rdi, rax
// asm:   0x591eff5: call 0x2ab61e0  ; __clang_call_terminate()

bool GameProgress_DamageSetting__GetStatLabels_d__19__MoveNext
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameProgress_DamageSetting_o *__this_00;
  Il2CppObject *object;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar3;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *pGVar4;
  bool bVar5;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *source;
  GameProgress_DamageSetting___c_StaticFields *pGVar6;
  System_Func_T__TResult__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *pSVar7;
  System_String_o *pSVar8;
  long *plVar9;
  uint64_t uVar10;
  System_String_o *pSVar11;
  MethodInfo *methodInfo;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar13;
  MethodInfo *methodInfo_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *methodInfo_01;
  System_ValueTuple_ulong__ulong__o SVar14;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar15;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *pGStack_e0;
  System_ValueTuple_object__object__o SStack_d8;
  System_String_o *pSStack_c8;
  Il2CppObject *pIStack_c0;
  Il2CppObject *pIStack_b8;
  undefined8 uStack_b0;
  System_Collections_Generic_List_T__o *pSStack_a8;
  undefined8 uStack_a0;
  SimpleJSONFixed_JSONNode_o *pSStack_98;
  undefined1 auStack_88 [16];
  System_String_o *pSStack_78;
  Il2CppObject *pIStack_70;
  Il2CppObject *pIStack_68;
  undefined8 uStack_60;
  System_Collections_Generic_List_T__o *pSStack_58;
  undefined8 uStack_50;
  SimpleJSONFixed_JSONNode_o *pSStack_48;
  undefined8 uStack_40;
  GameProgress_DamageSetting__GetStatLabels_d__19_o **ppGStack_38;
  
  pGStack_e0 = __this;
  if (Il2CppMethodInitialized_0754573f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_Sort);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameProgress_DamageSetting_c_GetStatLabels_b__19_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754573f = '\x01';
  }
  uStack_40 = 0;
  ppGStack_38 = &pGStack_e0;
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 5) {
    __this_00 = (__this->fields).__4__this;
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      if (__this_00 == (GameProgress_DamageSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = (__this_00->fields).root;
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      source = SimpleJSONFixed_JSONNode__get_Linq(pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_GameProgress_DamageSetting_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
      }
      pGVar4 = pGStack_e0;
      pGVar6 = TypeInfo_GameProgress_DamageSetting_c->static_fields;
      __this_01 = (System_Func_T__TResult__o *)pGVar6->__9__19_0;
      if (__this_01 == (System_Func_T__TResult__o *)0x0) {
        if ((TypeInfo_GameProgress_DamageSetting_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
          pGVar6 = TypeInfo_GameProgress_DamageSetting_c->static_fields;
        }
        object = (Il2CppObject *)pGVar6->__9;
        __this_01 = (System_Func_T__TResult__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_JSONNode_bool);
        System_Func_KeyValuePair_object__object___bool____ctor
                  (__this_01,object,(intptr_t)MethodInfo_GameProgress_DamageSetting_c_GetStatLabels_b__19_0,
                   (MethodInfo_4F10020 *)0x0);
        pGVar6 = TypeInfo_GameProgress_DamageSetting_c->static_fields;
        pGVar6->__9__19_0 = (System_Func_KeyValuePair_string__JSONNode___bool__o *)__this_01;
        Il2CppCodeGenWriteBarrier(&pGVar6->__9__19_0);
      }
      source_00 = System_Linq_Enumerable__Where_KeyValuePair_object__object__
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)__this_01,
                             (MethodInfo_3501CC0 *)
                             MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_JSONNode);
      pSVar7 = (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)
               System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                         (source_00,
                          (MethodInfo_3500CB0 *)
                          MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
      if (pGVar4 == (GameProgress_DamageSetting__GetStatLabels_d__19_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar4->fields)._rootPairs_5__2 = pSVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields)._rootPairs_5__2);
      pSVar7 = (pGStack_e0->fields)._rootPairs_5__2;
      if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
      }
      if (pSVar7 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_KeyValuePair_object__object____Sort_516b6d0
                ((System_Collections_Generic_List_T__o *)pSVar7,
                 (System_Comparison_T__o *)TypeInfo_GameProgress_DamageSetting->static_fields->Comparison,
                 (MethodInfo_516B6D0 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_Sort);
      pSVar11 = "Overall";
      pSVar8 = "";
      if (Il2CppMethodInitialized_07545737 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
        il2cpp_codegen_initialize_runtime_metadata(&"Profile.Stats");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07545737 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar8 = UI_UIManager__GetLocale
                         ("MainMenu","Profile.Stats",pSVar11,"",pSVar8,
                          (MethodInfo *)0x0);
      (pGStack_e0->fields)._overall_5__3 = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pGStack_e0->fields)._overall_5__3);
      pMVar13 = (MethodInfo *)(pGStack_e0->fields)._overall_5__3;
      pSVar8 = GameProgress_DamageSetting__StatLabel
                         ("Highest",(System_String_o *)pMVar13,methodInfo);
      SVar14 = GameProgress_DamageSetting__get_Overall(__this_00,pMVar13);
      pSVar11 = Utility_Format__Suffix(SVar14.fields.Item1,(MethodInfo *)0x0);
      SStack_d8.fields.Item1 = (Il2CppObject *)0x0;
      SStack_d8.fields.Item2 = (Il2CppObject *)0x0;
      System_ValueTuple_object__object____ctor
                (&SStack_d8,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar11,
                 (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_string_ctor);
      (pGStack_e0->fields).__2__current.fields.Item1 = (System_String_o *)SStack_d8.fields.Item1;
      (pGStack_e0->fields).__2__current.fields.Item2 = (System_String_o *)SStack_d8.fields.Item2;
      Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__2__current);
      (pGStack_e0->fields).__1__state = 1;
      break;
    case 1:
      (__this->fields).__1__state = -1;
      pSVar7 = (__this->fields)._rootPairs_5__2;
      if (pSVar7 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                 (System_Collections_Generic_List_T__o *)pSVar7,
                 (MethodInfo_516A1C0 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
      pSStack_c8 = pSStack_78;
      pIStack_c0 = pIStack_70;
      SStack_d8.fields.Item1 = (Il2CppObject *)auStack_88._0_8_;
      SStack_d8.fields.Item2 = (Il2CppObject *)auStack_88._8_8_;
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.key = pSStack_78;
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)pIStack_70;
      (pGStack_e0->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)auStack_88._0_8_;
      (pGStack_e0->fields).__7__wrap3.fields._index = auStack_88._8_4_;
      (pGStack_e0->fields).__7__wrap3.fields._version = auStack_88._12_4_;
      Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__7__wrap3);
      (pGStack_e0->fields).__1__state = -3;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)&(pGStack_e0->fields).__7__wrap3
                           ,(MethodInfo_4C1CB50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                          );
        pGVar4 = pGStack_e0;
        if (!bVar5) break;
        pSVar2 = (pGStack_e0->fields).__7__wrap3.fields._current.fields.value;
        (pGStack_e0->fields)._okvp_5__5.fields.key =
             (pGStack_e0->fields).__7__wrap3.fields._current.fields.key;
        (pGStack_e0->fields)._okvp_5__5.fields.value = pSVar2;
        Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields)._okvp_5__5);
        pSVar2 = (pGStack_e0->fields)._okvp_5__5.fields.value;
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                  (auStack_88,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        pSStack_98 = pSStack_48;
        pSStack_a8 = pSStack_58;
        uStack_a0 = uStack_50;
        pIStack_b8 = pIStack_68;
        uStack_b0 = uStack_60;
        pSStack_c8 = pSStack_78;
        pIStack_c0 = pIStack_70;
        SStack_d8.fields.Item1 = (Il2CppObject *)auStack_88._0_8_;
        SStack_d8.fields.Item2 = (Il2CppObject *)auStack_88._8_8_;
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._current = pSStack_48;
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._list = pSStack_58;
        pSVar3 = &(pGStack_e0->fields).__7__wrap5;
        (pSVar3->fields).m_Array.fields._index = (undefined4)uStack_50;
        (pSVar3->fields).m_Array.fields._version = uStack_50._4_4_;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.value = pIStack_68;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._getEnumeratorRetType =
             uStack_60;
        *(System_String_o **)&(pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._version = pSStack_78;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.key = pIStack_70;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields = auStack_88._0_8_;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_88._8_8_;
        Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__7__wrap5.fields.m_Object);
        __this = pGStack_e0;
label_0591ea7b:
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(&(__this->fields).__7__wrap5,(MethodInfo *)0x0);
        if (bVar5) {
          SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&(pGStack_e0->fields).__7__wrap5,(MethodInfo *)0x0);
          pMVar12 = (MethodInfo *)SVar15.fields.value;
          pSVar8 = (pGStack_e0->fields)._okvp_5__5.fields.key;
          pMVar13 = pMVar12;
          if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
            pMVar13 = extraout_RDX_01;
          }
          pSVar8 = GameProgress_DamageSetting__MethodLabel(pSVar8,SVar15.fields.key,pMVar13);
          pSVar8 = GameProgress_DamageSetting__StatLabel("Highest",pSVar8,methodInfo_00);
          if (pMVar12 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          plVar9 = (long *)(**(code **)(pMVar12->methodPointer + 0x1a8))
                                     (pMVar12,"Highest",
                                      *(undefined8 *)(pMVar12->methodPointer + 0x1b0));
          if (plVar9 == (long *)0x0) {
            ThrowNullReferenceException();
          }
          uVar10 = (**(code **)(*plVar9 + 1000))(plVar9);
          pSVar11 = Utility_Format__Suffix(uVar10,(MethodInfo *)0x0);
          SStack_d8.fields.Item1 = (Il2CppObject *)0x0;
          SStack_d8.fields.Item2 = (Il2CppObject *)0x0;
          System_ValueTuple_object__object____ctor
                    (&SStack_d8,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar11,
                     (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_string_ctor);
          (pGStack_e0->fields).__2__current.fields.Item1 = (System_String_o *)SStack_d8.fields.Item1;
          (pGStack_e0->fields).__2__current.fields.Item2 = (System_String_o *)SStack_d8.fields.Item2;
          Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__2__current);
          (pGStack_e0->fields).__1__state = 2;
          goto label_0591ef60;
        }
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)0x0;
        pSVar3 = &(pGStack_e0->fields).__7__wrap5;
        (pSVar3->fields).m_Array.fields._index = 0;
        (pSVar3->fields).m_Array.fields._version = 0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._getEnumeratorRetType = 0;
        pSVar3 = &(pGStack_e0->fields).__7__wrap5;
        (pSVar3->fields).m_Object.fields._version = 0;
        (pSVar3->fields).m_Object.fields._index = 0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields = 0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        (pGStack_e0->fields)._okvp_5__5.fields.key = (System_String_o *)0x0;
        (pGStack_e0->fields)._okvp_5__5.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      if (Il2CppMethodInitialized_07545740 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                  );
        Il2CppMethodInitialized_07545740 = '\x01';
      }
      (pGVar4->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)&(pGVar4->fields).__7__wrap3,
                 (MethodInfo_4C1CB40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.key = (System_String_o *)0x0;
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
      (pGStack_e0->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pGStack_e0->fields).__7__wrap3.fields._index = 0;
      (pGStack_e0->fields).__7__wrap3.fields._version = 0;
      pMVar13 = (MethodInfo *)(pGStack_e0->fields)._overall_5__3;
      pMVar12 = extraout_RDX;
      if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
        pMVar12 = extraout_RDX_00;
      }
      pSVar8 = GameProgress_DamageSetting__StatLabel("Total",(System_String_o *)pMVar13,pMVar12)
      ;
      if (__this_00 == (GameProgress_DamageSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      SVar14 = GameProgress_DamageSetting__get_Overall(__this_00,pMVar13);
      pSVar11 = Utility_Format__Suffix(SVar14.fields.Item2,(MethodInfo *)0x0);
      SStack_d8.fields.Item1 = (Il2CppObject *)0x0;
      SStack_d8.fields.Item2 = (Il2CppObject *)0x0;
      System_ValueTuple_object__object____ctor
                (&SStack_d8,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar11,
                 (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_string_ctor);
      (pGStack_e0->fields).__2__current.fields.Item1 = (System_String_o *)SStack_d8.fields.Item1;
      (pGStack_e0->fields).__2__current.fields.Item2 = (System_String_o *)SStack_d8.fields.Item2;
      Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__2__current);
      (pGStack_e0->fields).__1__state = 3;
      break;
    case 2:
      (__this->fields).__1__state = -3;
      goto label_0591ea7b;
    case 3:
      (__this->fields).__1__state = -1;
      pSVar7 = (__this->fields)._rootPairs_5__2;
      if (pSVar7 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                 (System_Collections_Generic_List_T__o *)pSVar7,
                 (MethodInfo_516A1C0 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
      pSStack_c8 = pSStack_78;
      pIStack_c0 = pIStack_70;
      SStack_d8.fields.Item1 = (Il2CppObject *)auStack_88._0_8_;
      SStack_d8.fields.Item2 = (Il2CppObject *)auStack_88._8_8_;
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.key = pSStack_78;
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)pIStack_70;
      (pGStack_e0->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)auStack_88._0_8_;
      (pGStack_e0->fields).__7__wrap3.fields._index = auStack_88._8_4_;
      (pGStack_e0->fields).__7__wrap3.fields._version = auStack_88._12_4_;
      Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__7__wrap3);
      (pGStack_e0->fields).__1__state = -4;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)&(pGStack_e0->fields).__7__wrap3
                           ,(MethodInfo_4C1CB50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                          );
        pGVar4 = pGStack_e0;
        if (!bVar5) break;
        pSVar2 = (pGStack_e0->fields).__7__wrap3.fields._current.fields.value;
        (pGStack_e0->fields)._okvp_5__5.fields.key =
             (pGStack_e0->fields).__7__wrap3.fields._current.fields.key;
        (pGStack_e0->fields)._okvp_5__5.fields.value = pSVar2;
        Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields)._okvp_5__5);
        pSVar2 = (pGStack_e0->fields)._okvp_5__5.fields.value;
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                  (auStack_88,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        pSStack_98 = pSStack_48;
        pSStack_a8 = pSStack_58;
        uStack_a0 = uStack_50;
        pIStack_b8 = pIStack_68;
        uStack_b0 = uStack_60;
        pSStack_c8 = pSStack_78;
        pIStack_c0 = pIStack_70;
        SStack_d8.fields.Item1 = (Il2CppObject *)auStack_88._0_8_;
        SStack_d8.fields.Item2 = (Il2CppObject *)auStack_88._8_8_;
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._current = pSStack_48;
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._list = pSStack_58;
        pSVar3 = &(pGStack_e0->fields).__7__wrap5;
        (pSVar3->fields).m_Array.fields._index = (undefined4)uStack_50;
        (pSVar3->fields).m_Array.fields._version = uStack_50._4_4_;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.value = pIStack_68;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._getEnumeratorRetType =
             uStack_60;
        *(System_String_o **)&(pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._version = pSStack_78;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.key = pIStack_70;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields = auStack_88._0_8_;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_88._8_8_;
        Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__7__wrap5.fields.m_Object);
        __this = pGStack_e0;
label_0591edca:
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(&(__this->fields).__7__wrap5,(MethodInfo *)0x0);
        if (bVar5) {
          SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&(pGStack_e0->fields).__7__wrap5,(MethodInfo *)0x0);
          pMVar12 = (MethodInfo *)SVar15.fields.value;
          pSVar8 = (pGStack_e0->fields)._okvp_5__5.fields.key;
          pMVar13 = pMVar12;
          if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
            pMVar13 = extraout_RDX_02;
          }
          pSVar8 = GameProgress_DamageSetting__MethodLabel(pSVar8,SVar15.fields.key,pMVar13);
          pSVar8 = GameProgress_DamageSetting__StatLabel("Total",pSVar8,methodInfo_01);
          if (pMVar12 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          plVar9 = (long *)(**(code **)(pMVar12->methodPointer + 0x1a8))
                                     (pMVar12,"Total",
                                      *(undefined8 *)(pMVar12->methodPointer + 0x1b0));
          if (plVar9 == (long *)0x0) {
            ThrowNullReferenceException();
          }
          uVar10 = (**(code **)(*plVar9 + 1000))(plVar9);
          pSVar11 = Utility_Format__Suffix(uVar10,(MethodInfo *)0x0);
          SStack_d8.fields.Item1 = (Il2CppObject *)0x0;
          SStack_d8.fields.Item2 = (Il2CppObject *)0x0;
          System_ValueTuple_object__object____ctor
                    (&SStack_d8,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar11,
                     (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_string_ctor);
          (pGStack_e0->fields).__2__current.fields.Item1 = (System_String_o *)SStack_d8.fields.Item1;
          (pGStack_e0->fields).__2__current.fields.Item2 = (System_String_o *)SStack_d8.fields.Item2;
          Il2CppCodeGenWriteBarrier((void **)&(pGStack_e0->fields).__2__current);
          (pGStack_e0->fields).__1__state = 4;
          goto label_0591ef60;
        }
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)0x0;
        pSVar3 = &(pGStack_e0->fields).__7__wrap5;
        (pSVar3->fields).m_Array.fields._index = 0;
        (pSVar3->fields).m_Array.fields._version = 0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._getEnumeratorRetType = 0;
        pSVar3 = &(pGStack_e0->fields).__7__wrap5;
        (pSVar3->fields).m_Object.fields._version = 0;
        (pSVar3->fields).m_Object.fields._index = 0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
        *(undefined8 *)&(pGStack_e0->fields).__7__wrap5.fields = 0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        (pGStack_e0->fields)._okvp_5__5.fields.key = (System_String_o *)0x0;
        (pGStack_e0->fields)._okvp_5__5.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
        (pGStack_e0->fields).__7__wrap5.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      if (Il2CppMethodInitialized_07545741 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                  );
        Il2CppMethodInitialized_07545741 = '\x01';
      }
      (pGVar4->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)&(pGVar4->fields).__7__wrap3,
                 (MethodInfo_4C1CB40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.key = (System_String_o *)0x0;
      (pGStack_e0->fields).__7__wrap3.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
      (pGStack_e0->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pGStack_e0->fields).__7__wrap3.fields._index = 0;
      (pGStack_e0->fields).__7__wrap3.fields._version = 0;
      goto label_0591ee79;
    case 4:
      (__this->fields).__1__state = -4;
      goto label_0591edca;
    }
label_0591ef60:
    bVar5 = true;
  }
  else {
label_0591ee79:
    bVar5 = false;
  }
  return bVar5;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$<>m__Finally1
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally1 (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f000

void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally1
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545740 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
    Il2CppMethodInitialized_07545740 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C1CB40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$<>m__Finally2
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally2 (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f040

void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally2
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545741 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
    Il2CppMethodInitialized_07545741 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C1CB40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.Generic.IEnumerator<(System.Stringtitle,System.Stringvalue)>.get_Current
// il2cpp: System_ValueTuple_string__string__o GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f080

System_ValueTuple_string__string__o
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  return (System_ValueTuple_string__string__o)(__this->fields).__2__current.fields;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerator_Reset (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f090

void GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerator_Reset
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

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
                  MethodInfo_GameProgress_DamageSetting_GetStatLabels_d__19_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerator_get_Current (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f0d0

Il2CppObject *
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerator_get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *local_18;
  System_String_o *pSStack_10;
  
  if (Il2CppMethodInitialized_07545742 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_ValueTuple_string_string);
    Il2CppMethodInitialized_07545742 = '\x01';
  }
  local_18 = (__this->fields).__2__current.fields.Item1;
  pSStack_10 = (__this->fields).__2__current.fields.Item2;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_System_ValueTuple_string_string,&local_18);
  return pIVar1;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.Generic.IEnumerable<(System.Stringtitle,System.Stringvalue)>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f120

System_Collections_IEnumerator_o *
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_07545743 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
    Il2CppMethodInitialized_07545743 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerable_GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x591f1c0

System_Collections_IEnumerator_o *
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerable_GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator
                     (__this,method);
  return pSVar1;
}


// GameProgress.DamageSetting$$.cctor
// il2cpp: void GameProgress_DamageSetting___cctor (const MethodInfo* method);
// 0x591c6f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591c8fb: mov r12, rbp
// asm:   0x591c8fe: jmp 0x591c90b

void GameProgress_DamageSetting___cctor(MethodInfo *method)

{
  Il2CppObject *object;
  Il2CppType *handle;
  Il2CppClass *pIVar1;
  GameProgress_DamageSetting___c__DisplayClass5_0_o *__this;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_Func_T__TResult__o *__this_00;
  Il2CppObject *source;
  System_Collections_Generic_IEnumerable_TResult__o *first;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_Object_array *source_00;
  System_Func_string__string__o *__this_01;
  System_Func_string__int__o *__this_02;
  System_Collections_Generic_Dictionary_TKey__TElement__o *pSVar4;
  System_Comparison_T__o *__this_03;
  
  if (Il2CppMethodInitialized_0754572d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_KillWeapon_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToDictionary_string_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KillWeapon_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameProgress_KillWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_c);
    Il2CppMethodInitialized_0754572d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle = TypeRef_GameProgress_KillWeapon;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pIVar2 = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if ((TypeInfo_GameProgress_DamageSetting_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
  }
  object = (Il2CppObject *)TypeInfo_GameProgress_DamageSetting_c->static_fields->__9;
  __this_00 = (System_Func_T__TResult__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KillWeapon_string);
  source = (Il2CppObject *)0x0;
  System_Func_Int32Enum__object____ctor
            (__this_00,object,(intptr_t)MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_0,
             (MethodInfo_4F13780 *)0x0);
  pIVar1 = TypeInfo_GameProgress_KillWeapon_array;
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (source = il2cpp_vm_Object_IsInst(pIVar2,TypeInfo_GameProgress_KillWeapon_array),
     source == (Il2CppObject *)0x0)) {
    il2cpp_codegen_raise_invalid_cast_exception(pIVar2,pIVar1);
  }
  first = System_Linq_Enumerable__Select_Int32Enum__object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__TResult__o *)__this_00,
                     (MethodInfo_34F4BF0 *)MethodInfo_System_Linq_Enumerable_Select_KillWeapon_string);
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
  }
  pSVar3 = System_Linq_Enumerable__Concat_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)
                      TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar3 = System_Linq_Enumerable__Concat_object_
                     (pSVar3,(System_Collections_Generic_IEnumerable_TSource__o *)
                             TypeInfo_Characters_HumanSpecials->static_fields->AHSSSpecials,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar3 = System_Linq_Enumerable__Concat_object_
                     (pSVar3,(System_Collections_Generic_IEnumerable_TSource__o *)
                             TypeInfo_Characters_HumanSpecials->static_fields->BladeSpecials,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar3 = System_Linq_Enumerable__Concat_object_
                     (pSVar3,(System_Collections_Generic_IEnumerable_TSource__o *)
                             TypeInfo_Characters_HumanSpecials->static_fields->ShifterSpecials,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  source_00 = System_Linq_Enumerable__ToArray_object_
                        (pSVar3,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  if (__this == (GameProgress_DamageSetting___c__DisplayClass5_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).i = 0;
  pIVar2 = (Il2CppObject *)TypeInfo_GameProgress_DamageSetting_c->static_fields->__9;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this_01,pIVar2,
             (intptr_t)MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_1,(MethodInfo_4F19B50 *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int);
  System_Func_object__int____ctor
            ((System_Func_object__int__o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__2,
             (MethodInfo_4F198F0 *)0x0);
  pSVar4 = System_Linq_Enumerable__ToDictionary_object__object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TKey__o *)__this_01,(System_Func_TSource__TElement__o *)__this_02,
                      (MethodInfo_34FED70 *)MethodInfo_System_Linq_Enumerable_ToDictionary_string_string_int);
  (__this->fields).orderByString = (System_Collections_Generic_Dictionary_string__int__o *)pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).orderByString);
  __this_03 = (System_Comparison_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Comparison_KeyValuePair_string_JSONNode);
  System_Comparison_KeyValuePair_object__object_____ctor
            (__this_03,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__3,
             (MethodInfo_48DE930 *)0x0);
  TypeInfo_GameProgress_DamageSetting->static_fields->Comparison =
       (System_Comparison_KeyValuePair_string__JSONNode___o *)__this_03;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_DamageSetting->static_fields->Comparison);
  return;
}


// GameProgress.DamageSetting$$get_Item
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x591cab0
// fidelity: the machine code has facts this C leaves out:
//   virtual call through vtable slot 43 (2 times)
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591cdbd: xorps xmm0, xmm0
// asm:   0x591cdc0: movaps xmmword ptr [rsp], xmm0
// asm:   0x591cdc4: lea rax, [rip + 0x198301d]  ; MethodInfo_System_ValueTuple_ulong_ulong_ctor
// asm:   0x591cdcb: mov rcx, qword ptr [rax]
// asm:   0x591cdce: mov rdi, rsp
// asm:   0x591cdd1: mov rsi, r14

System_ValueTuple_ulong__ulong__o
GameProgress_DamageSetting__get_Item
          (GameProgress_DamageSetting_o *__this,GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  System_ValueTuple_ulong__ulong__Fields SVar1;
  bool bVar2;
  char cVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  uint64_t item1;
  uint64_t item2;
  System_String_o *value;
  int32_t iVar7;
  System_ValueTuple_ulong__ulong__o local_58;
  System_Enum_o local_48;
  int32_t local_38;
  
  value = method.fields.Special;
  iVar7 = method.fields.Weapon;
  if (Il2CppMethodInitialized_0754572e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_ulong_ulong_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_0754572e = '\x01';
  }
  pSVar5 = (__this->fields).root;
  if (Il2CppMethodInitialized_07545758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_07545758 = '\x01';
  }
  local_48.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = iVar7;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591cdf1;
  bVar2 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                    (pSVar5,pSVar4,(pSVar5->klass->vtable)._28_HasKey.method);
  if (bVar2) {
    pSVar5 = (__this->fields).root;
    if (Il2CppMethodInitialized_07545758 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
      Il2CppMethodInitialized_07545758 = '\x01';
    }
    local_48.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = iVar7;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0591cdf1:
      ThrowNullReferenceException();
    }
    pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,pSVar4,(pSVar5->klass->vtable)._7_get_Item.method);
    if (Il2CppMethodInitialized_07545759 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"None");
      Il2CppMethodInitialized_07545759 = '\x01';
    }
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591cdf1;
    pSVar4 = value;
    if (bVar2) {
      pSVar4 = "None";
    }
    bVar2 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar5,pSVar4,(pSVar5->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      pSVar5 = (__this->fields).root;
      if (Il2CppMethodInitialized_07545758 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
        Il2CppMethodInitialized_07545758 = '\x01';
      }
      local_48.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = iVar7;
      pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591cdf1;
      pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,pSVar4,(pSVar5->klass->vtable)._7_get_Item.method);
      if (Il2CppMethodInitialized_07545759 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        Il2CppMethodInitialized_07545759 = '\x01';
      }
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591cdf1;
      if (bVar2) {
        value = "None";
      }
      pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,value,(pSVar5->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591cdf1;
      cVar3 = (**(code **)((long)pSVar5->klass + 0x2f8))
                        (pSVar5,"Highest",*(undefined8 *)((long)pSVar5->klass + 0x300));
      if (cVar3 == '\0') {
        item1 = 0;
      }
      else {
        plVar6 = (long *)(**(code **)((long)pSVar5->klass + 0x1a8))
                                   (pSVar5,"Highest",*(undefined8 *)((long)pSVar5->klass + 0x1b0))
        ;
        if (plVar6 == (long *)0x0) goto label_0591cdf1;
        item1 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
      }
      cVar3 = (**(code **)((long)pSVar5->klass + 0x2f8))
                        (pSVar5,"Total",*(undefined8 *)((long)pSVar5->klass + 0x300));
      if (cVar3 == '\0') {
        item2 = 0;
      }
      else {
        plVar6 = (long *)(**(code **)((long)pSVar5->klass + 0x1a8))
                                   (pSVar5,"Total",*(undefined8 *)((long)pSVar5->klass + 0x1b0))
        ;
        if (plVar6 == (long *)0x0) goto label_0591cdf1;
        item2 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
      }
      goto label_0591cdd4;
    }
  }
  item1 = 0;
  item2 = 0;
label_0591cdd4:
  local_58.fields.Item2 = 0;
  local_58.fields.Item1 = 0;
  System_ValueTuple_ulong__ulong____ctor
            (&local_58,item1,item2,(MethodInfo_4540040 *)MethodInfo_System_ValueTuple_ulong_ulong_ctor);
  SVar1.Item2 = local_58.fields.Item2;
  SVar1.Item1 = local_58.fields.Item1;
  return (System_ValueTuple_ulong__ulong__o)SVar1;
}


// GameProgress.DamageSetting$$set_Item
// il2cpp: void GameProgress_DamageSetting__set_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x591ceb0

void GameProgress_DamageSetting__set_Item
               (GameProgress_DamageSetting_o *__this,GameProgress_KillMethod_o method,
               System_ValueTuple_ulong__ulong__o value,MethodInfo *methodInfo)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONObject_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  uint64_t uVar6;
  System_String_o *value_00;
  int32_t iVar7;
  uint64_t uVar8;
  System_Enum_o local_60;
  int32_t local_50;
  int32_t local_44;
  uint64_t local_40;
  uint64_t local_38;
  
  uVar8 = value.fields.Item2;
  uVar6 = value.fields.Item1;
  value_00 = method.fields.Special;
  if (Il2CppMethodInitialized_0754572f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_0754572f = '\x01';
  }
  pSVar4 = (__this->fields).root;
  if (Il2CppMethodInitialized_07545758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_07545758 = '\x01';
  }
  local_60.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_60.monitor = (void *)0xffffffffffffffff;
  iVar7 = method.fields.Weapon;
  local_50 = iVar7;
  pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar4,pSVar2,(pSVar4->klass->vtable)._28_HasKey.method);
    local_40 = uVar6;
    local_38 = uVar8;
    if (!bVar1) {
      pSVar4 = (__this->fields).root;
      if (Il2CppMethodInitialized_07545758 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
        Il2CppMethodInitialized_07545758 = '\x01';
      }
      local_60.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
      local_60.monitor = (void *)0xffffffffffffffff;
      local_50 = iVar7;
      pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar3,(MethodInfo *)0x0);
      if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d320;
      (*(pSVar4->klass->vtable)._20_Add.methodPtr)
                (pSVar4,pSVar2,(SimpleJSONFixed_JSONNode_o *)pSVar3,(pSVar4->klass->vtable)._20_Add.method);
    }
    uVar8 = local_38;
    uVar6 = local_40;
    pSVar4 = (__this->fields).root;
    if (Il2CppMethodInitialized_07545758 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
      Il2CppMethodInitialized_07545758 = '\x01';
    }
    local_60.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
    local_60.monitor = (void *)0xffffffffffffffff;
    local_50 = iVar7;
    pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,pSVar2,(pSVar4->klass->vtable)._7_get_Item.method);
      if (Il2CppMethodInitialized_07545759 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        Il2CppMethodInitialized_07545759 = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar2 = value_00;
        if (bVar1) {
          pSVar2 = "None";
        }
        bVar1 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                          (pSVar4,pSVar2,(pSVar4->klass->vtable)._28_HasKey.method);
        if (!bVar1) {
          pSVar4 = (__this->fields).root;
          if (Il2CppMethodInitialized_07545758 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
            Il2CppMethodInitialized_07545758 = '\x01';
          }
          local_60.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
          local_60.monitor = (void *)0xffffffffffffffff;
          local_50 = iVar7;
          pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
          if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d320;
          local_44 = iVar7;
          pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,pSVar2,(pSVar4->klass->vtable)._7_get_Item.method);
          if (Il2CppMethodInitialized_07545759 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"None");
            Il2CppMethodInitialized_07545759 = '\x01';
          }
          bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
          pSVar2 = "None";
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
          SimpleJSONFixed_JSONObject___ctor(pSVar3,(MethodInfo *)0x0);
          if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d320;
          if (!bVar1) {
            pSVar2 = value_00;
          }
          (*(pSVar4->klass->vtable)._20_Add.methodPtr)
                    (pSVar4,pSVar2,(SimpleJSONFixed_JSONNode_o *)pSVar3,(pSVar4->klass->vtable)._20_Add.method
                    );
          uVar8 = local_38;
          uVar6 = local_40;
          iVar7 = local_44;
        }
        pSVar4 = (__this->fields).root;
        if (Il2CppMethodInitialized_07545758 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
          Il2CppMethodInitialized_07545758 = '\x01';
        }
        local_60.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
        local_60.monitor = (void *)0xffffffffffffffff;
        local_50 = iVar7;
        pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
        if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,pSVar2,(pSVar4->klass->vtable)._7_get_Item.method);
          if (Il2CppMethodInitialized_07545759 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"None");
            Il2CppMethodInitialized_07545759 = '\x01';
          }
          bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
          if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            if (bVar1) {
              value_00 = "None";
            }
            pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,value_00,(pSVar4->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5763e50(uVar6,(MethodInfo *)0x0);
            if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              (**(code **)((long)pSVar4->klass + 0x1b8))
                        (pSVar4,"Highest",pSVar5,*(undefined8 *)((long)pSVar4->klass + 0x1c0));
              pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5763e50(uVar8,(MethodInfo *)0x0);
              (**(code **)((long)pSVar4->klass + 0x1b8))
                        (pSVar4,"Total",pSVar5,*(undefined8 *)((long)pSVar4->klass + 0x1c0));
              return;
            }
          }
        }
      }
    }
  }
label_0591d320:
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$get_Overall
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Overall (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x591d330
// fidelity: the machine code has facts this C leaves out:
//   virtual call through vtable slot 43 (2 times)
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591d4a2: xorps xmm0, xmm0
// asm:   0x591d4a5: movaps xmmword ptr [rsp], xmm0
// asm:   0x591d4a9: lea rax, [rip + 0x1982938]  ; MethodInfo_System_ValueTuple_ulong_ulong_ctor
// asm:   0x591d4b0: mov rcx, qword ptr [rax]
// asm:   0x591d4b3: mov rdi, rsp
// asm:   0x591d4b6: mov rsi, r14

System_ValueTuple_ulong__ulong__o
GameProgress_DamageSetting__get_Overall(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  System_ValueTuple_ulong__ulong__Fields SVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  uint64_t item1;
  uint64_t item2;
  System_ValueTuple_ulong__ulong__o local_28;
  
  if (Il2CppMethodInitialized_07545730 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_ulong_ulong_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_07545730 = '\x01';
  }
  pSVar3 = (__this->fields).root;
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0591d4d1:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                    (pSVar3,"Overall",(pSVar3->klass->vtable)._28_HasKey.method);
  if (!bVar2) {
    item1 = 0;
    item2 = 0;
  }
  else {
    pSVar3 = (__this->fields).root;
    if ((pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Overall",(pSVar3->klass->vtable)._7_get_Item.method),
       pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_0591d4d1;
    bVar2 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar3,"Highest",(pSVar3->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"Highest",(pSVar3->klass->vtable)._7_get_Item.method);
      if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d4d1;
      item1 = (**(code **)((long)pSVar4->klass + 1000))(pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x3f0));
    }
    else {
      item1 = 0;
    }
    bVar2 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar3,"Total",(pSVar3->klass->vtable)._28_HasKey.method);
    if (bVar2) {
      pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"Total",(pSVar3->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d4d1;
      item2 = (**(code **)((long)pSVar3->klass + 1000))(pSVar3,*(undefined8 *)((long)pSVar3->klass + 0x3f0));
    }
    else {
      item2 = 0;
    }
  }
  local_28.fields.Item2 = 0;
  local_28.fields.Item1 = 0;
  System_ValueTuple_ulong__ulong____ctor
            (&local_28,item1,item2,(MethodInfo_4540040 *)MethodInfo_System_ValueTuple_ulong_ulong_ctor);
  SVar1.Item2 = local_28.fields.Item2;
  SVar1.Item1 = local_28.fields.Item1;
  return (System_ValueTuple_ulong__ulong__o)SVar1;
}


// GameProgress.DamageSetting$$set_Overall
// il2cpp: void GameProgress_DamageSetting__set_Overall (GameProgress_DamageSetting_o* __this, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x591d4e0

void GameProgress_DamageSetting__set_Overall
               (GameProgress_DamageSetting_o *__this,System_ValueTuple_ulong__ulong__o value,
               MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545731 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_07545731 = '\x01';
  }
  pSVar3 = (__this->fields).root;
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar3,"Overall",(pSVar3->klass->vtable)._28_HasKey.method);
    if (!bVar2) {
      pSVar3 = (__this->fields).root;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d655;
      (*(pSVar3->klass->vtable)._20_Add.methodPtr)
                (pSVar3,"Overall",(SimpleJSONFixed_JSONNode_o *)__this_00,
                 (pSVar3->klass->vtable)._20_Add.method);
    }
    pSVar3 = (__this->fields).root;
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"Overall",(pSVar3->klass->vtable)._7_get_Item.method);
      if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Highest",(pSVar3->klass->vtable)._7_get_Item.method);
        if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (**(code **)((long)pSVar4->klass + 0x3f8))
                    (pSVar4,value.fields.Item1,*(undefined8 *)((long)pSVar4->klass + 0x400));
          pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"Total",(pSVar3->klass->vtable)._7_get_Item.method);
          if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            lVar1 = (long)pSVar3->klass;
            (**(code **)(lVar1 + 0x3f8))
                      (pSVar3,value.fields.Item2,*(undefined8 *)(lVar1 + 0x400),lVar1,
                       *(code **)(lVar1 + 0x3f8));
            return;
          }
        }
      }
    }
  }
label_0591d655:
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$.ctor
// il2cpp: void GameProgress_DamageSetting___ctor (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x591d660

void GameProgress_DamageSetting___ctor(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// GameProgress.DamageSetting$$SetDefault
// il2cpp: void GameProgress_DamageSetting__SetDefault (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x591d690

void GameProgress_DamageSetting__SetDefault(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07545732 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_07545732 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).root = (SimpleJSONFixed_JSONNode_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root);
  return;
}


// GameProgress.DamageSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* GameProgress_DamageSetting__SerializeToJsonObject (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x591d6f0

SimpleJSONFixed_JSONNode_o *
GameProgress_DamageSetting__SerializeToJsonObject(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  return (__this->fields).root;
}


// GameProgress.DamageSetting$$DeserializeFromJsonObject
// il2cpp: void GameProgress_DamageSetting__DeserializeFromJsonObject (GameProgress_DamageSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x591d700

void GameProgress_DamageSetting__DeserializeFromJsonObject
               (GameProgress_DamageSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  (__this->fields).root = json;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root);
  return;
}


// GameProgress.DamageSetting$$ClearRecords
// il2cpp: void GameProgress_DamageSetting__ClearRecords (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x591d710
// eh: try 0x591d850..0x591d9ee -> pad 0x591da73 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591da0c..0x591da11 -> pad 0x591da5d catch Il2CppExceptionWrapper, cleanup
// eh: try 0x591da37..0x591da41 -> pad 0x591dad1 catch (...) [compiler noexcept guard]
// eh: try 0x591da46..0x591da58 -> pad 0x591da6f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591da8f..0x591da94 -> pad 0x591dabc cleanup
// eh: try 0x591dabf..0x591dac9 -> pad 0x591dad1 catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591d9dd: jmp 0x591da46
// asm:   0x591d9f0: jmp 0x591d9f4
// asm:   0x591d9f2: jmp 0x591d9f4
// asm:   0x591d9f4: mov rbp, rax
// asm:   0x591d9f7: cmp edx, 1
// asm:   0x591d9fa: jne 0x591da34
// asm:   0x591d9fc: mov rdi, rbp
// asm:   0x591d9ff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591da04: mov rbp, qword ptr [rax]
// asm:   0x591da07: mov qword ptr [rsp + 0x20], rbp
// asm:   0x591da0c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591da11: jmp 0x591d9c2
// asm:   0x591da34: mov rbx, rdx
// asm:   0x591da37: lea rdi, [rsp + 0x20]
// asm:   0x591da3c: call 0x2fd24c0  ; il2cpp_runtime_helper_02fd24c0()
// asm:   0x591da41: mov rdi, rbp
// asm:   0x591da44: jmp 0x591da7d
// asm:   0x591da46: mov rdi, rbp
// asm:   0x591da49: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591da5d: mov rbx, rdx
// asm:   0x591da60: mov rbp, rax
// asm:   0x591da63: jmp 0x591da37
// asm:   0x591da65: jmp 0x591da77
// asm:   0x591da67: jmp 0x591da77
// asm:   0x591da69: jmp 0x591da77
// asm:   0x591da6b: jmp 0x591da77
// asm:   0x591da6d: jmp 0x591da77
// asm:   0x591da6f: jmp 0x591da77
// asm:   0x591da71: jmp 0x591da77
// asm:   0x591da73: jmp 0x591da77
// asm:   0x591da75: jmp 0x591da77
// asm:   0x591da77: mov rbx, rdx
// asm:   0x591da7a: mov rdi, rax
// asm:   0x591da7d: cmp ebx, 1
// asm:   0x591da80: jne 0x591dab7
// asm:   0x591da82: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591da87: mov rbx, qword ptr [rax]
// asm:   0x591da8a: mov qword ptr [rsp + 0x40], rbx
// asm:   0x591da8f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591da94: lea rax, [rip + 0x196f8ed]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
// asm:   0x591da9b: mov rsi, qword ptr [rax]
// asm:   0x591da9e: mov rdi, rsp
// asm:   0x591daa1: call 0x4d1cb40  ; System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose()
// asm:   0x591daa6: test rbx, rbx
// asm:   0x591daa9: je 0x591da25
// asm:   0x591daaf: mov rdi, rbx
// asm:   0x591dab2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591dab7: mov rbx, rdi
// asm:   0x591daba: jmp 0x591dabf
// asm:   0x591dabc: mov rbx, rax
// asm:   0x591dabf: lea rdi, [rsp + 0x40]
// asm:   0x591dac4: call 0x2fd24f0  ; il2cpp_runtime_helper_02fd24f0()
// asm:   0x591dac9: mov rdi, rbx
// asm:   0x591dacc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591dad1: mov rdi, rax
// asm:   0x591dad4: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_DamageSetting__ClearRecords(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *pSVar2;
  System_Collections_Generic_List_TSource__o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *method_00;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  System_String_o *pSStack_98;
  SimpleJSONFixed_JSONNode_o *pSStack_90;
  undefined1 auStack_88 [16];
  System_String_o *pSStack_78;
  SimpleJSONFixed_JSONNode_o *pSStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_50;
  System_String_o *pSStack_48;
  SimpleJSONFixed_JSONNode_o *pSStack_40;
  
  if (Il2CppMethodInitialized_07545733 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    Il2CppMethodInitialized_07545733 = '\x01';
  }
  pSStack_98 = (System_String_o *)0x0;
  pSStack_90 = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_a8 = (undefined1  [8])0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  pSStack_48 = (System_String_o *)0x0;
  pSStack_40 = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  pSVar5 = (__this->fields).root;
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = SimpleJSONFixed_JSONNode__get_Linq(pSVar5,(MethodInfo *)0x0);
    pSVar3 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (MethodInfo_3500CB0 *)
                        MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
    if (pSVar3 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                 (System_Collections_Generic_List_T__o *)pSVar3,
                 (MethodInfo_516A1C0 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
      puStack_60 = auStack_a8;
      pSStack_98 = pSStack_78;
      pSStack_90 = pSStack_70;
      auStack_a8 = (undefined1  [8])auStack_88._0_8_;
      uStack_a0 = (System_Collections_Generic_List_Enumerator_T__o *)auStack_88._8_8_;
      uStack_68 = 0;
      do {
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
                             (MethodInfo_4C1CB50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                            );
          pSVar5 = pSStack_90;
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
                       (MethodInfo_4C1CB40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                      );
            return;
          }
          method_00 = (MethodInfo *)"Overall";
          bVar1 = System_String__op_Equality(pSStack_98,"Overall",(MethodInfo *)0x0);
          if (!bVar1) break;
          if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
          }
          GameProgress_DamageSetting__ClearRecord(pSVar5,method_00);
        }
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = SimpleJSONFixed_JSONNode__get_Linq(pSVar5,(MethodInfo *)0x0);
        pSVar3 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            (MethodInfo_3500CB0 *)
                            MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
        if (pSVar3 == (System_Collections_Generic_List_TSource__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                   (System_Collections_Generic_List_T__o *)pSVar3,
                   (MethodInfo_516A1C0 *)
                   MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
        pSStack_48 = pSStack_78;
        pSStack_40 = pSStack_70;
        auStack_58 = (undefined1  [8])auStack_88._0_8_;
        pSStack_50 = (System_Collections_Generic_List_Enumerator_T__o *)auStack_88._8_8_;
        auStack_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_88._8_8_ = (System_Collections_Generic_List_Enumerator_T__o *)auStack_58;
        while (bVar1 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                                 ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                                  (MethodInfo_4C1CB50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                                 ), pSVar5 = pSStack_40, bVar1) {
          if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
          }
          if (Il2CppMethodInitialized_07545734 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"Total");
            il2cpp_codegen_initialize_runtime_metadata(&"Highest");
            Il2CppMethodInitialized_07545734 = '\x01';
          }
          if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar4 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"Highest",(pSVar5->klass->vtable)._7_get_Item.method),
             pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_0591d9e9:
            ThrowNullReferenceException();
          }
          (*(pSVar4->klass->vtable)._44_set_AsULong.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._44_set_AsULong.method);
          pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,"Total",(pSVar5->klass->vtable)._7_get_Item.method);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0591d9e9;
          (*(pSVar5->klass->vtable)._44_set_AsULong.methodPtr)
                    (pSVar5,0,(pSVar5->klass->vtable)._44_set_AsULong.method);
        }
        System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                   (MethodInfo_4C1CB40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose)
        ;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$ClearRecord
// il2cpp: void GameProgress_DamageSetting__ClearRecord (SimpleJSONFixed_JSONNode_o* record, const MethodInfo* method);
// 0x591dae0

void GameProgress_DamageSetting__ClearRecord(SimpleJSONFixed_JSONNode_o *record,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545734 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_07545734 = '\x01';
  }
  if (record != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(record->klass->vtable)._7_get_Item.methodPtr)
                       (record,"Highest",(record->klass->vtable)._7_get_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar1->klass->vtable)._44_set_AsULong.methodPtr)
                (pSVar1,0,(pSVar1->klass->vtable)._44_set_AsULong.method);
      pSVar1 = (*(record->klass->vtable)._7_get_Item.methodPtr)
                         (record,"Total",(record->klass->vtable)._7_get_Item.method);
      if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        (*(pSVar1->klass->vtable)._44_set_AsULong.methodPtr)
                  (pSVar1,0,(pSVar1->klass->vtable)._44_set_AsULong.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$Register
// il2cpp: void GameProgress_DamageSetting__Register (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, uint64_t damage, const MethodInfo* method);
// 0x591db90

void GameProgress_DamageSetting__Register
               (GameProgress_DamageSetting_o *__this,GameProgress_KillMethod_o method,uint64_t damage,
               MethodInfo *methodInfo)

{
  System_ValueTuple_ulong__ulong__o value;
  ulong uVar1;
  MethodInfo *pMVar2;
  MethodInfo *in_R9;
  System_ValueTuple_ulong__ulong__o SVar3;
  GameProgress_KillMethod_o method_00;
  GameProgress_KillMethod_o method_01;
  System_ValueTuple_ulong__ulong__o SStack_38;
  
  method_00.fields.Special = method.fields.Special;
  pMVar2 = method.fields._0_8_;
  method_00.fields.Weapon = method.fields.Weapon;
  if (Il2CppMethodInitialized_07545735 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_ulong_ulong_ctor);
    Il2CppMethodInitialized_07545735 = '\x01';
  }
  SVar3 = GameProgress_DamageSetting__get_Overall(__this,pMVar2);
  uVar1 = SVar3.fields.Item1;
  if (SVar3.fields.Item1 <= damage) {
    uVar1 = damage;
  }
  SStack_38.fields.Item1 = 0;
  SStack_38.fields.Item2 = 0;
  pMVar2 = MethodInfo_System_ValueTuple_ulong_ulong_ctor;
  System_ValueTuple_ulong__ulong____ctor
            (&SStack_38,uVar1,SVar3.fields.Item2 + damage,
             (MethodInfo_4540040 *)MethodInfo_System_ValueTuple_ulong_ulong_ctor);
  SVar3.fields.Item2 = SStack_38.fields.Item2;
  SVar3.fields.Item1 = SStack_38.fields.Item1;
  GameProgress_DamageSetting__set_Overall(__this,SVar3,pMVar2);
  method_00.fields._4_4_ = 0;
  SVar3 = GameProgress_DamageSetting__get_Item(__this,method_00,pMVar2);
  uVar1 = SVar3.fields.Item1;
  if (SVar3.fields.Item1 <= damage) {
    uVar1 = damage;
  }
  SStack_38.fields.Item1 = 0;
  SStack_38.fields.Item2 = 0;
  System_ValueTuple_ulong__ulong____ctor
            (&SStack_38,uVar1,SVar3.fields.Item2 + damage,
             (MethodInfo_4540040 *)MethodInfo_System_ValueTuple_ulong_ulong_ctor);
  value.fields.Item2 = SStack_38.fields.Item2;
  value.fields.Item1 = SStack_38.fields.Item1;
  method_01.fields._4_4_ = 0;
  method_01.fields.Weapon = method_00.fields.Weapon;
  method_01.fields.Special = method_00.fields.Special;
  GameProgress_DamageSetting__set_Item(__this,method_01,value,in_R9);
  return;
}


// GameProgress.DamageSetting$$GetStatLabels
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x591dc60

System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *
GameProgress_DamageSetting__GetStatLabels(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_07545736 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
    Il2CppMethodInitialized_07545736 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)__this_00;
}


// GameProgress.DamageSetting$$StatLocale
// il2cpp: System_String_o* GameProgress_DamageSetting__StatLocale (System_String_o* item, System_String_o* defaultValue, const MethodInfo* method);
// 0x591dd00

System_String_o *
GameProgress_DamageSetting__StatLocale(System_String_o *item,System_String_o *defaultValue,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545737 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile.Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545737 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","Profile.Stats",item,"",defaultValue,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.DamageSetting$$StatLabel
// il2cpp: System_String_o* GameProgress_DamageSetting__StatLabel (System_String_o* recordKey, System_String_o* method, const MethodInfo* method);
// 0x591dda0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591de0c: lea r12, [rip + 0x19afc15]  ; ""
// asm:   0x591de13: mov rbx, qword ptr [r12]
// asm:   0x591de17: cmp byte ptr [rip + 0x1c27919], 0
// asm:   0x591de1e: je 0x591de8e

System_String_o *
GameProgress_DamageSetting__StatLabel
          (System_String_o *recordKey,System_String_o *method,MethodInfo *methodInfo)

{
  uint32_t uVar1;
  System_String_o *item;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545738 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545738 = '\x01';
  }
  item = System_String__Concat_52f0320(recordKey,"Damage",(MethodInfo *)0x0);
  pSVar2 = "";
  if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
    pSVar2 = "";
  }
  "" = pSVar2;
  if (Il2CppMethodInitialized_07545737 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile.Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545737 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("MainMenu","Profile.Stats",item,"",pSVar2,
                      (MethodInfo *)0x0);
  pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)method,(MethodInfo *)0x0);
  return pSVar2;
}


// GameProgress.DamageSetting$$MethodLabel
// il2cpp: System_String_o* GameProgress_DamageSetting__MethodLabel (System_String_o* weapon, System_String_o* special, const MethodInfo* method);
// 0x591def0

System_String_o *
GameProgress_DamageSetting__MethodLabel(System_String_o *weapon,System_String_o *special,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)special;
  if (Il2CppMethodInitialized_07545739 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_07545739 = '\x01';
  }
  if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
  }
  pSVar2 = GameProgress_DamageSetting__WeaponLabel(weapon,method_00);
  bVar1 = System_String__op_Equality(special,"None",(MethodInfo *)0x0);
  if (bVar1) {
    return pSVar2;
  }
  pSVar2 = System_String__Concat_5302810
                     (pSVar2," (",special,")",(MethodInfo *)0x0);
  return pSVar2;
}


// GameProgress.DamageSetting$$WeaponLabel
// il2cpp: System_String_o* GameProgress_DamageSetting__WeaponLabel (System_String_o* weapon, const MethodInfo* method);
// 0x591dfb0

System_String_o * GameProgress_DamageSetting__WeaponLabel(System_String_o *weapon,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754573a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderSpear");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_0754573a = '\x01';
  }
  bVar2 = System_String__op_Equality(weapon,"Thunderspear",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
    }
    weapon = "ThunderSpear";
    pSVar3 = "";
    if (Il2CppMethodInitialized_07545737 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
      il2cpp_codegen_initialize_runtime_metadata(&"Profile.Stats");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07545737 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    goto label_0591e0d9;
  }
  bVar2 = System_String__op_Equality(weapon,"Shifter",(MethodInfo *)0x0);
  if ((bVar2) || (bVar2 = System_String__op_Equality(weapon,"Titan",(MethodInfo *)0x0), bVar2))
  {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocaleCommon(weapon,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
    if (Il2CppMethodInitialized_07545737 != '\0') goto label_0591e159;
label_0591e1a7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile.Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545737 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07545737 == '\0') goto label_0591e1a7;
label_0591e159:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = weapon;
label_0591e0d9:
  pSVar3 = UI_UIManager__GetLocale
                     ("MainMenu","Profile.Stats",weapon,"",pSVar3,
                      (MethodInfo *)0x0);
  return pSVar3;
}


