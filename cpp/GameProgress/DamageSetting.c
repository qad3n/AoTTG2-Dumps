// Type: GameProgress.DamageSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameProgress/DamageSetting.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/DamageSetting.cs
// --------------------------------

// GameProgress.DamageSetting.<>c$$.cctor
// il2cpp: void GameProgress_DamageSetting___c___cctor (const MethodInfo* method);
// 0x181e41d20

void GameProgress_DamageSetting___c___cctor(MethodInfo *method)

{
  GameProgress_DamageSetting___c_o *__this;
  
  if (Il2CppMethodInitialized_184344da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_c);
    Il2CppMethodInitialized_184344da7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameProgress_DamageSetting_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_DamageSetting_c->static_fields->__9,__this);
  return;
}


// GameProgress.DamageSetting.<>c$$.ctor
// il2cpp: void GameProgress_DamageSetting___c___ctor (GameProgress_DamageSetting___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameProgress_DamageSetting___c___ctor(GameProgress_DamageSetting___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_0
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_0 (GameProgress_DamageSetting___c_o* __this, int32_t w, const MethodInfo* method);
// 0x181e3f8a0

System_String_o *
GameProgress_DamageSetting___c____cctor_b__5_0
          (GameProgress_DamageSetting___c_o *__this,int32_t w,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_184344da8 = '\x01';
  }
  local_28.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = w;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_1
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_1 (GameProgress_DamageSetting___c_o* __this, System_String_o* k, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
GameProgress_DamageSetting___c____cctor_b__5_1(GameProgress_DamageSetting___c_o* __this, System_String_o* k, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// GameProgress.DamageSetting.<>c$$<GetStatLabels>b__19_0
// il2cpp: bool GameProgress_DamageSetting___c___GetStatLabels_b__19_0 (GameProgress_DamageSetting___c_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp, const MethodInfo* method);
// 0x181e3f850

bool GameProgress_DamageSetting___c___GetStatLabels_b__19_0
               (GameProgress_DamageSetting___c_o *__this,
               System_Collections_Generic_KeyValuePair_string__JSONNode__o *kvp,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    Il2CppMethodInitialized_184344da9 = '\x01';
  }
  bVar1 = System_String__op_Inequality((kvp->fields).key,"Overall",(MethodInfo *)0x0);
  return bVar1;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$.ctor
// il2cpp: void GameProgress_DamageSetting___c__DisplayClass5_0___ctor (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameProgress_DamageSetting___c__DisplayClass5_0___ctor(GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__2
// il2cpp: int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__2 (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, System_String_o* v, const MethodInfo* method);
// 0x181e419c0

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
// 0x181e419d0

int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__3
                  (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o *lhs,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o *rhs,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *pSVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_UIElements_TextureId_o local_res8 [2];
  UnityEngine_UIElements_TextureId_o local_res18 [4];
  
  if (Il2CppMethodInitialized_184344daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    Il2CppMethodInitialized_184344daa = '\x01';
  }
  pSVar1 = (__this->fields).orderByString;
  local_res8[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_res18[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (Il2CppObject *)(rhs->fields).key,local_res8,
                       (MethodInfo_1461BD0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    pSVar1 = (__this->fields).orderByString;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                         (Il2CppObject *)(lhs->fields).key,local_res18,
                         (MethodInfo_1461BD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
      if (bVar3 && bVar2) {
        return (int)local_res8[0].fields.m_Index - (int)local_res18[0].fields.m_Index;
      }
      if ((bVar2) && (!bVar3)) {
        return 1;
      }
      if (!bVar3 || bVar2) {
        iVar4 = System_String__CompareTo_1968960((lhs->fields).key,(rhs->fields).key,(MethodInfo *)0x0);
        return iVar4;
      }
      return -1;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$.ctor
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19___ctor (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e81c0

void
GameProgress_DamageSetting__GetStatLabels_d__19___ctor(GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.IDisposable.Dispose
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19__System_IDisposable_Dispose (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3cfb0
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3d010: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e3d017: lea rcx, [rbx + 0x40]
// asm:   0x181e3d01b: mov rdx, qword ptr [rip + 0x22323d6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
// asm:   0x181e3d022: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e3d027: jmp 0x181e3cfcc
// asm:   0x181e3d029: lea rcx, [rsp + 0x38]
// asm:   0x181e3d02e: call 0x181e27a40  ; il2cpp_runtime_helper_181e27a40()
// asm:   0x181e3d033: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e3d038: test rcx, rcx
// asm:   0x181e3d03b: jne 0x181e3d0ab
// asm:   0x181e3d071: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e3d078: lea rcx, [rbx + 0x40]
// asm:   0x181e3d07c: mov rdx, qword ptr [rip + 0x2232375]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
// asm:   0x181e3d083: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e3d088: jmp 0x181e3cfcc
// asm:   0x181e3d08d: lea rcx, [rsp + 0x38]
// asm:   0x181e3d092: call 0x181e27ae0  ; il2cpp_runtime_helper_181e27ae0()
// asm:   0x181e3d097: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e3d09c: test rcx, rcx
// asm:   0x181e3d09f: je 0x181e3cfcc
// asm:   0x181e3d0a5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e3d0ab: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void GameProgress_DamageSetting__GetStatLabels_d__19__System_IDisposable_Dispose
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 < -2) {
    if (iVar1 != -4) {
      if (iVar1 != -3) {
        return;
      }
      goto label_181e3cfdc;
    }
  }
  else {
    if (iVar1 == 2) {
label_181e3cfdc:
      if (Il2CppMethodInitialized_184344dac == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                  );
        Il2CppMethodInitialized_184344dac = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
      return;
    }
    if (iVar1 != 4) {
      return;
    }
  }
  if (Il2CppMethodInitialized_184344dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
    Il2CppMethodInitialized_184344dad = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$MoveNext
// il2cpp: bool GameProgress_DamageSetting__GetStatLabels_d__19__MoveNext (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3c240
// eh: try 0x181e3c39f..0x181e3ce6c -> pad 0x183318660 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3cdb4: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x181e3cdb9: test rbx, rbx
// asm:   0x181e3cdbc: jne 0x181e3ce6c
// asm:   0x181e3cdc2: movzx eax, byte ptr [rsp + 0xe0]
// asm:   0x181e3ce6c: lea rcx, [rsp + 0x38]
// asm:   0x181e3ce71: call 0x181e27b40  ; il2cpp_runtime_helper_181e27b40()
// asm:   0x181e3ce76: mov rcx, rbx
// asm:   0x181e3ce79: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318660: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318665: push rbp
// asm:   0x183318666: sub rsp, 0x20
// asm:   0x18331866a: mov rbp, rdx
// asm:   0x18331866d: mov rax, qword ptr [rbp + 0x60]
// asm:   0x183318671: mov rcx, qword ptr [rax]
// asm:   0x183318674: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183318678: movabs rax, 0
// asm:   0x183318682: add rsp, 0x20
// asm:   0x183318686: pop rbp
// asm:   0x183318687: ret 

bool GameProgress_DamageSetting__GetStatLabels_d__19__MoveNext
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_DamageSetting_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  System_Collections_Generic_List_T__o *pSVar10;
  undefined8 uVar11;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar12;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *pGVar13;
  bool bVar14;
  undefined8 *puVar15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar16;
  System_Xml_Schema_XmlSchema_o *pSVar17;
  uint64_t uVar18;
  System_Type_o *pSVar19;
  System_Type_o *pSVar20;
  System_String_array *pSVar21;
  System_ValueTuple_ulong__ulong__o *pSVar22;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *source;
  System_Predicate_T__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *pSVar23;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *local_res8;
  Unity_Properties_ConverterKey_o local_a8;
  undefined8 local_98;
  GameProgress_DamageSetting__GetStatLabels_d__19_o **local_90;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  SimpleJSONFixed_JSONNode_o *pSStack_70;
  undefined1 local_60 [72];
  
  local_res8 = __this;
  if (Il2CppMethodInitialized_184344dab == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameProgress_DamageSetting_c_GetStatLabels_b__19_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Total ");
    il2cpp_codegen_initialize_runtime_metadata(&"Total Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest ");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_184344dab = '\x01';
  }
  local_98 = 0;
  local_90 = &local_res8;
  __this_00 = (local_res8->fields).__4__this;
  iVar1 = (local_res8->fields).__1__state;
  if (iVar1 == 0) {
    (local_res8->fields).__1__state = -1;
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
    pGVar13 = local_res8;
    __this_01 = (System_Predicate_T__o *)TypeInfo_GameProgress_DamageSetting_c->static_fields->__9__19_0;
    if (__this_01 == (System_Predicate_T__o *)0x0) {
      if ((TypeInfo_GameProgress_DamageSetting_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
      }
      pIVar5 = (Il2CppObject *)TypeInfo_GameProgress_DamageSetting_c->static_fields->__9;
      __this_01 = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_JSONNode_bool);
      System_Func_KeyValuePair_object__object___bool____ctor
                (__this_01,pIVar5,(intptr_t)MethodInfo_GameProgress_DamageSetting_c_GetStatLabels_b__19_0,
                 (MethodInfo_B61280 *)0x0);
      TypeInfo_GameProgress_DamageSetting_c->static_fields->__9__19_0 =
           (System_Func_KeyValuePair_string__JSONNode___bool__o *)__this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_DamageSetting_c->static_fields->__9__19_0,__this_01);
    }
    source_00 = System_Linq_Enumerable__Where_RoleSpriteDefinition_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_6CA8B0 *)
                           MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_JSONNode);
    pSVar23 = (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)
              System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                        (source_00,
                         (MethodInfo_6C9850 *)
                         MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
    if (pGVar13 == (GameProgress_DamageSetting__GetStatLabels_d__19_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar13->fields)._rootPairs_5__2 = pSVar23;
    Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._rootPairs_5__2,pSVar23);
    pSVar23 = (local_res8->fields)._rootPairs_5__2;
    if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
    }
    if (pSVar23 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___Sort_935c80
              ((System_Collections_Generic_List_T__o *)pSVar23,
               (System_Comparison_T__o *)TypeInfo_GameProgress_DamageSetting->static_fields->Comparison,
               (MethodInfo_935C80 *)
               MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_Sort);
    pSVar22 = GameProgress_DamageSetting__get_Overall
                        ((System_ValueTuple_ulong__ulong__o *)&local_88,__this_00,(MethodInfo *)0x0);
    pSVar19 = (System_Type_o *)Utility_Format__Suffix((pSVar22->fields).Item1,(MethodInfo *)0x0);
    local_a8.fields.SourceType = (System_Type_o *)0x0;
    local_a8.fields.DestinationType = (System_Type_o *)0x0;
    System_ValueTuple_object__object____ctor
              (&local_a8,(System_Type_o *)"Highest Overall",pSVar19,
               MethodInfo_System_ValueTuple_string_string_ctor);
    (local_res8->fields).__2__current.fields.Item1 = (System_String_o *)local_a8.fields.SourceType;
    (local_res8->fields).__2__current.fields.Item2 = (System_String_o *)local_a8.fields.DestinationType;
    Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__2__current,(void *)0x0);
    (local_res8->fields).__1__state = 1;
    bVar14 = true;
  }
  else {
    if (iVar1 == 1) {
      (local_res8->fields).__1__state = -1;
      pSVar23 = (local_res8->fields)._rootPairs_5__2;
      if (pSVar23 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                (&local_88,(System_Collections_Generic_List_T__o *)pSVar23,
                 (MethodInfo_91F200 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
      (local_res8->fields).__7__wrap2.fields._list = local_88.fields._list;
      (local_res8->fields).__7__wrap2.fields._index = local_88.fields._index;
      (local_res8->fields).__7__wrap2.fields._version = local_88.fields._version;
      (local_res8->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)local_88.fields._current
      ;
      (local_res8->fields).__7__wrap2.fields._current.fields.value = pSStack_70;
      Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__7__wrap2,(void *)0x0);
      (local_res8->fields).__1__state = -3;
      goto label_181e3c822;
    }
    if (iVar1 == 2) {
      (local_res8->fields).__1__state = -3;
      while (bVar14 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&(local_res8->fields).__7__wrap4,
                                 (MethodInfo *)0x0), !bVar14) {
        *(undefined8 *)&(local_res8->fields).__7__wrap4.fields = 0;
        (local_res8->fields).__7__wrap4.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        pSVar12 = &(local_res8->fields).__7__wrap4;
        (pSVar12->fields).m_Object.fields._version = 0;
        (pSVar12->fields).m_Object.fields._index = 0;
        (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
        (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
        *(undefined8 *)&(local_res8->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = 0;
        (local_res8->fields).__7__wrap4.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)0x0;
        pSVar12 = &(local_res8->fields).__7__wrap4;
        (pSVar12->fields).m_Array.fields._index = 0;
        (pSVar12->fields).m_Array.fields._version = 0;
        (local_res8->fields).__7__wrap4.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
        (local_res8->fields)._weapon_5__4 = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(local_res8->fields)._weapon_5__4,(void *)0x0);
label_181e3c822:
        bVar14 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                           ((System_Collections_Generic_List_Enumerator_T__o *)
                            &(local_res8->fields).__7__wrap2,
                            (MethodInfo_15292D0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                           );
        pGVar13 = local_res8;
        if (!bVar14) {
          if (Il2CppMethodInitialized_184344dac == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                      );
            Il2CppMethodInitialized_184344dac = '\x01';
          }
          (pGVar13->fields).__1__state = -1;
          System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                     &(pGVar13->fields).__7__wrap2,
                     MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                    );
          (local_res8->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
          (local_res8->fields).__7__wrap2.fields._index = 0;
          (local_res8->fields).__7__wrap2.fields._version = 0;
          (local_res8->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)0x0;
          (local_res8->fields).__7__wrap2.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
          if (__this_00 != (GameProgress_DamageSetting_o *)0x0) {
            pSVar22 = GameProgress_DamageSetting__get_Overall
                                ((System_ValueTuple_ulong__ulong__o *)&local_88,__this_00,(MethodInfo *)0x0);
            pSVar19 = (System_Type_o *)Utility_Format__Suffix((pSVar22->fields).Item2,(MethodInfo *)0x0);
            local_a8.fields.SourceType = (System_Type_o *)0x0;
            local_a8.fields.DestinationType = (System_Type_o *)0x0;
            System_ValueTuple_object__object____ctor
                      (&local_a8,(System_Type_o *)"Total Overall",pSVar19,
                       MethodInfo_System_ValueTuple_string_string_ctor);
            (local_res8->fields).__2__current.fields.Item1 = (System_String_o *)local_a8.fields.SourceType;
            (local_res8->fields).__2__current.fields.Item2 =
                 (System_String_o *)local_a8.fields.DestinationType;
            Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__2__current,(void *)0x0);
            (local_res8->fields).__1__state = 3;
            return true;
          }
          ThrowNullReferenceException();
        }
        pSVar3 = (local_res8->fields).__7__wrap2.fields._current.fields.key;
        pSVar2 = (local_res8->fields).__7__wrap2.fields._current.fields.value;
        (local_res8->fields)._weapon_5__4 = pSVar3;
        Il2CppCodeGenWriteBarrier(&(local_res8->fields)._weapon_5__4,pSVar3);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        puVar15 = (undefined8 *)(*(pSVar2->klass->vtable)._32_unknown.methodPtr)(local_60);
        pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar15[1];
        uVar7 = puVar15[2];
        pIVar5 = (Il2CppObject *)puVar15[3];
        pIVar8 = (Il2CppObject *)puVar15[4];
        uVar9 = puVar15[5];
        pSVar10 = (System_Collections_Generic_List_T__o *)puVar15[6];
        uVar11 = puVar15[7];
        pSVar2 = (SimpleJSONFixed_JSONNode_o *)puVar15[8];
        *(undefined8 *)&(local_res8->fields).__7__wrap4.fields = *puVar15;
        (local_res8->fields).__7__wrap4.fields.m_Object.fields._dictionary = pSVar6;
        pSVar12 = &(local_res8->fields).__7__wrap4;
        (pSVar12->fields).m_Object.fields._version = (int)uVar7;
        (pSVar12->fields).m_Object.fields._index = (int)((ulonglong)uVar7 >> 0x20);
        (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = pIVar5;
        (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = pIVar8;
        *(undefined8 *)&(local_res8->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = uVar9;
        (local_res8->fields).__7__wrap4.fields.m_Array.fields._list = pSVar10;
        pSVar12 = &(local_res8->fields).__7__wrap4;
        (pSVar12->fields).m_Array.fields._index = (int)uVar11;
        (pSVar12->fields).m_Array.fields._version = (int)((ulonglong)uVar11 >> 0x20);
        (local_res8->fields).__7__wrap4.fields.m_Array.fields._current = pSVar2;
        Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__7__wrap4.fields.m_Object,(void *)0x0);
      }
      pSVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          ((System_Collections_Generic_KeyValuePair_string__JSONNode__o *)&local_a8,
                           &(local_res8->fields).__7__wrap4,(MethodInfo *)0x0);
      pSVar2 = (pSVar16->fields).value;
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (pSVar16->fields).key;
      pSVar17 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Highest");
      if (pSVar17 == (System_Xml_Schema_XmlSchema_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar18 = (*(code *)((Il2CppClass *)pSVar17->klass)->vtable[43].methodPtr)(pSVar17);
      pSVar19 = (System_Type_o *)Utility_Format__Suffix(uVar18,(MethodInfo *)0x0);
      bVar14 = System_String__op_Equality(pSVar3,"None",(MethodInfo *)0x0);
      pGVar13 = local_res8;
      if (bVar14) {
        pSVar20 = (System_Type_o *)
                  System_String__Concat_1969e50
                            ("Highest ",(local_res8->fields)._weapon_5__4,(MethodInfo *)0x0);
        local_a8.fields.SourceType = (System_Type_o *)0x0;
        local_a8.fields.DestinationType = (System_Type_o *)0x0;
        System_ValueTuple_object__object____ctor
                  (&local_a8,pSVar20,pSVar19,MethodInfo_System_ValueTuple_string_string_ctor);
      }
      else {
        pSVar21 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
        pSVar4 = "Highest ";
        if (pSVar21 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((int)pSVar21->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar21->m_Items[0] = "Highest ";
        Il2CppCodeGenWriteBarrier(pSVar21->m_Items,pSVar4);
        if ((uint)pSVar21->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4 = (local_res8->fields)._weapon_5__4;
        pSVar21->m_Items[1] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1,pSVar4);
        pSVar4 = " (";
        if ((uint)pSVar21->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        pSVar21->m_Items[2] = " (";
        Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 2,pSVar4);
        if ((uint)pSVar21->max_length < 4) {
          ThrowIndexOutOfRangeException();
        }
        pSVar21->m_Items[3] = pSVar3;
        Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 3,pSVar3);
        pSVar3 = ")";
        if ((uint)pSVar21->max_length < 5) {
          ThrowIndexOutOfRangeException();
        }
        pSVar21->m_Items[4] = ")";
        Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 4,pSVar3);
        pSVar20 = (System_Type_o *)System_String__Concat_1969830(pSVar21,(MethodInfo *)0x0);
        local_a8.fields.SourceType = (System_Type_o *)0x0;
        local_a8.fields.DestinationType = (System_Type_o *)0x0;
        System_ValueTuple_object__object____ctor
                  (&local_a8,pSVar20,pSVar19,MethodInfo_System_ValueTuple_string_string_ctor);
      }
      if (pGVar13 == (GameProgress_DamageSetting__GetStatLabels_d__19_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar13->fields).__2__current.fields.Item1 = (System_String_o *)local_a8.fields.SourceType;
      (pGVar13->fields).__2__current.fields.Item2 = (System_String_o *)local_a8.fields.DestinationType;
      Il2CppCodeGenWriteBarrier((void **)&(pGVar13->fields).__2__current,(void *)0x0);
      (local_res8->fields).__1__state = 2;
      bVar14 = true;
    }
    else {
      if (iVar1 == 3) {
        (local_res8->fields).__1__state = -1;
        pSVar23 = (local_res8->fields)._rootPairs_5__2;
        if (pSVar23 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                  (&local_88,(System_Collections_Generic_List_T__o *)pSVar23,
                   (MethodInfo_91F200 *)
                   MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
        (local_res8->fields).__7__wrap2.fields._list = local_88.fields._list;
        (local_res8->fields).__7__wrap2.fields._index = local_88.fields._index;
        (local_res8->fields).__7__wrap2.fields._version = local_88.fields._version;
        (local_res8->fields).__7__wrap2.fields._current.fields.key =
             (System_String_o *)local_88.fields._current;
        (local_res8->fields).__7__wrap2.fields._current.fields.value = pSStack_70;
        Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__7__wrap2,(void *)0x0);
        (local_res8->fields).__1__state = -4;
        goto label_181e3c460;
      }
      if (iVar1 == 4) {
        (local_res8->fields).__1__state = -4;
        while (bVar14 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                   &(local_res8->fields).__7__wrap4,(MethodInfo *)0x0), !bVar14) {
          *(undefined8 *)&(local_res8->fields).__7__wrap4.fields = 0;
          (local_res8->fields).__7__wrap4.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          pSVar12 = &(local_res8->fields).__7__wrap4;
          (pSVar12->fields).m_Object.fields._version = 0;
          (pSVar12->fields).m_Object.fields._index = 0;
          (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
          (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
          *(undefined8 *)&(local_res8->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = 0;
          (local_res8->fields).__7__wrap4.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)0x0;
          pSVar12 = &(local_res8->fields).__7__wrap4;
          (pSVar12->fields).m_Array.fields._index = 0;
          (pSVar12->fields).m_Array.fields._version = 0;
          (local_res8->fields).__7__wrap4.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
          (local_res8->fields)._weapon_5__4 = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(local_res8->fields)._weapon_5__4,(void *)0x0);
label_181e3c460:
          bVar14 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)
                              &(local_res8->fields).__7__wrap2,
                              (MethodInfo_15292D0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                             );
          pGVar13 = local_res8;
          if (!bVar14) {
            if (Il2CppMethodInitialized_184344dad == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                        );
              Il2CppMethodInitialized_184344dad = '\x01';
            }
            (pGVar13->fields).__1__state = -1;
            System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                       &(pGVar13->fields).__7__wrap2,
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                      );
            (local_res8->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
            (local_res8->fields).__7__wrap2.fields._index = 0;
            (local_res8->fields).__7__wrap2.fields._version = 0;
            (local_res8->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)0x0;
            (local_res8->fields).__7__wrap2.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
            return false;
          }
          pSVar3 = (local_res8->fields).__7__wrap2.fields._current.fields.key;
          pSVar2 = (local_res8->fields).__7__wrap2.fields._current.fields.value;
          (local_res8->fields)._weapon_5__4 = pSVar3;
          Il2CppCodeGenWriteBarrier(&(local_res8->fields)._weapon_5__4,pSVar3);
          if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          puVar15 = (undefined8 *)(*(pSVar2->klass->vtable)._32_unknown.methodPtr)(local_60);
          pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar15[1];
          uVar7 = puVar15[2];
          pIVar5 = (Il2CppObject *)puVar15[3];
          pIVar8 = (Il2CppObject *)puVar15[4];
          uVar9 = puVar15[5];
          pSVar10 = (System_Collections_Generic_List_T__o *)puVar15[6];
          uVar11 = puVar15[7];
          pSVar2 = (SimpleJSONFixed_JSONNode_o *)puVar15[8];
          *(undefined8 *)&(local_res8->fields).__7__wrap4.fields = *puVar15;
          (local_res8->fields).__7__wrap4.fields.m_Object.fields._dictionary = pSVar6;
          pSVar12 = &(local_res8->fields).__7__wrap4;
          (pSVar12->fields).m_Object.fields._version = (int)uVar7;
          (pSVar12->fields).m_Object.fields._index = (int)((ulonglong)uVar7 >> 0x20);
          (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = pIVar5;
          (local_res8->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = pIVar8;
          *(undefined8 *)&(local_res8->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = uVar9
          ;
          (local_res8->fields).__7__wrap4.fields.m_Array.fields._list = pSVar10;
          pSVar12 = &(local_res8->fields).__7__wrap4;
          (pSVar12->fields).m_Array.fields._index = (int)uVar11;
          (pSVar12->fields).m_Array.fields._version = (int)((ulonglong)uVar11 >> 0x20);
          (local_res8->fields).__7__wrap4.fields.m_Array.fields._current = pSVar2;
          Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__7__wrap4.fields.m_Object,(void *)0x0);
        }
        pSVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o *)&local_a8,
                             &(local_res8->fields).__7__wrap4,(MethodInfo *)0x0);
        pSVar2 = (pSVar16->fields).value;
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = (pSVar16->fields).key;
        pSVar17 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Total")
        ;
        if (pSVar17 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar18 = (*(code *)((Il2CppClass *)pSVar17->klass)->vtable[43].methodPtr)(pSVar17);
        pSVar19 = (System_Type_o *)Utility_Format__Suffix(uVar18,(MethodInfo *)0x0);
        bVar14 = System_String__op_Equality(pSVar3,"None",(MethodInfo *)0x0);
        pGVar13 = local_res8;
        if (bVar14) {
          pSVar20 = (System_Type_o *)
                    System_String__Concat_1969e50
                              ("Total ",(local_res8->fields)._weapon_5__4,(MethodInfo *)0x0);
          local_a8.fields.SourceType = (System_Type_o *)0x0;
          local_a8.fields.DestinationType = (System_Type_o *)0x0;
          System_ValueTuple_object__object____ctor
                    (&local_a8,pSVar20,pSVar19,MethodInfo_System_ValueTuple_string_string_ctor);
        }
        else {
          pSVar21 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
          pSVar4 = "Total ";
          if (pSVar21 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((int)pSVar21->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar21->m_Items[0] = "Total ";
          Il2CppCodeGenWriteBarrier(pSVar21->m_Items,pSVar4);
          if ((uint)pSVar21->max_length < 2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4 = (local_res8->fields)._weapon_5__4;
          pSVar21->m_Items[1] = pSVar4;
          Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1,pSVar4);
          pSVar4 = " (";
          if ((uint)pSVar21->max_length < 3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar21->m_Items[2] = " (";
          Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 2,pSVar4);
          if ((uint)pSVar21->max_length < 4) {
            ThrowIndexOutOfRangeException();
          }
          pSVar21->m_Items[3] = pSVar3;
          Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 3,pSVar3);
          pSVar3 = ")";
          if ((uint)pSVar21->max_length < 5) {
            ThrowIndexOutOfRangeException();
          }
          pSVar21->m_Items[4] = ")";
          Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 4,pSVar3);
          pSVar20 = (System_Type_o *)System_String__Concat_1969830(pSVar21,(MethodInfo *)0x0);
          local_a8.fields.SourceType = (System_Type_o *)0x0;
          local_a8.fields.DestinationType = (System_Type_o *)0x0;
          System_ValueTuple_object__object____ctor
                    (&local_a8,pSVar20,pSVar19,MethodInfo_System_ValueTuple_string_string_ctor);
        }
        if (pGVar13 == (GameProgress_DamageSetting__GetStatLabels_d__19_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pGVar13->fields).__2__current.fields.Item1 = (System_String_o *)local_a8.fields.SourceType;
        (pGVar13->fields).__2__current.fields.Item2 = (System_String_o *)local_a8.fields.DestinationType;
        Il2CppCodeGenWriteBarrier((void **)&(pGVar13->fields).__2__current,(void *)0x0);
        (local_res8->fields).__1__state = 4;
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
    }
  }
  return bVar14;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$<>m__Finally1
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally1 (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3d0c0

void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally1
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
    Il2CppMethodInitialized_184344dac = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$<>m__Finally2
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally2 (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3d110

void GameProgress_DamageSetting__GetStatLabels_d__19____m__Finally2
               (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
    Il2CppMethodInitialized_184344dad = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.Generic.IEnumerator<(System.Stringtitle,System.Stringvalue)>.get_Current
// il2cpp: System_ValueTuple_string__string__o GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x1808e7990

System_ValueTuple_string__string__o
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current(GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, MethodInfo* method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields).__2__current.fields.m_Length;
  iVar2 = (__this->fields).__2__current.fields.m_AllocatorLabel;
  (__return_storage_ptr__->fields).m_Buffer = (__this->fields).__2__current.fields.m_Buffer;
  (__return_storage_ptr__->fields).m_Length = iVar1;
  (__return_storage_ptr__->fields).m_AllocatorLabel = iVar2;
  return __return_storage_ptr__;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerator_Reset (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3cf20

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
// 0x181e3cf60

Il2CppObject *
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerator_get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *local_18;
  System_String_o *pSStack_10;
  
  if (Il2CppMethodInitialized_184344dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_ValueTuple_string_string);
    Il2CppMethodInitialized_184344dae = '\x01';
  }
  local_18 = (__this->fields).__2__current.fields.Item1;
  pSStack_10 = (__this->fields).__2__current.fields.Item2;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_System_ValueTuple_string_string,&local_18);
  return pIVar1;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.Generic.IEnumerable<(System.Stringtitle,System.Stringvalue)>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3ce80

System_Collections_Generic_IEnumerator_ValueTuple_string__string___o*
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator(GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, MethodInfo* method)

{
  int iVar1;
  GameProgress_DamageSetting_o *value;
  int32_t iVar2;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_184344daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
    Il2CppMethodInitialized_184344daf = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerable_GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__19_o* __this, const MethodInfo* method);
// 0x181e3ce80

System_Collections_IEnumerator_o *
GameProgress_DamageSetting__GetStatLabels_d__19__System_Collections_IEnumerable_GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_DamageSetting_o *value;
  int32_t iVar2;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_184344daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
    Il2CppMethodInitialized_184344daf = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.DamageSetting$$.cctor
// il2cpp: void GameProgress_DamageSetting___cctor (const MethodInfo* method);
// 0x181e338f0

void GameProgress_DamageSetting___cctor(MethodInfo *method)

{
  MethodInfo *method_00;
  Il2CppClass *pIVar1;
  Il2CppType *handle;
  GameProgress_DamageSetting___c__DisplayClass5_0_o *object;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *__this;
  Il2CppObject *pIVar3;
  System_Collections_Generic_IEnumerable_TResult__o *first;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Object_array *source;
  System_Func_string__string__o *__this_00;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TElement__o *value;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_02;
  
  if (Il2CppMethodInitialized_184344d9d == '\0') {
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
    Il2CppMethodInitialized_184344d9d = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  handle = TypeRef_GameProgress_KillWeapon;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pIVar2 = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if ((TypeInfo_GameProgress_DamageSetting_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_c);
  }
  pIVar3 = (Il2CppObject *)TypeInfo_GameProgress_DamageSetting_c->static_fields->__9;
  __this = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KillWeapon_string);
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t___ctor
            (__this,pIVar3,(intptr_t)MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_0,(MethodInfo *)0x0);
  pIVar1 = TypeInfo_GameProgress_KillWeapon_array;
  method_00 = MethodInfo_System_Linq_Enumerable_Select_KillWeapon_string;
  if (pIVar2 == (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,TypeInfo_GameProgress_KillWeapon_array);
    if (pIVar3 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar2,pIVar1);
    }
  }
  first = System_Linq_Enumerable__Select_Vector3__object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar3,
                     (System_Func_TSource__TResult__o *)__this,(MethodInfo_6C2170 *)method_00);
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
  }
  pSVar4 = System_Linq_Enumerable__Concat_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)
                      TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials,
                      (MethodInfo_6B9850 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar4 = System_Linq_Enumerable__Concat_object_
                     (pSVar4,(System_Collections_Generic_IEnumerable_TSource__o *)
                             TypeInfo_Characters_HumanSpecials->static_fields->AHSSSpecials,
                      (MethodInfo_6B9850 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar4 = System_Linq_Enumerable__Concat_object_
                     (pSVar4,(System_Collections_Generic_IEnumerable_TSource__o *)
                             TypeInfo_Characters_HumanSpecials->static_fields->BladeSpecials,
                      (MethodInfo_6B9850 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar4 = System_Linq_Enumerable__Concat_object_
                     (pSVar4,(System_Collections_Generic_IEnumerable_TSource__o *)
                             TypeInfo_Characters_HumanSpecials->static_fields->ShifterSpecials,
                      (MethodInfo_6B9850 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  source = System_Linq_Enumerable__ToArray_object_
                     (pSVar4,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  if (object != (GameProgress_DamageSetting___c__DisplayClass5_0_o *)0x0) {
    (object->fields).i = 0;
    pIVar2 = (Il2CppObject *)TypeInfo_GameProgress_DamageSetting_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,pIVar2,
               (intptr_t)MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_1,(MethodInfo_16E67D0 *)0x0);
    __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int);
    System_Func_object__int____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__2,
               (MethodInfo_AF4D50 *)0x0);
    value = System_Linq_Enumerable__ToDictionary_object__object__int_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__TKey__o *)__this_00,(System_Func_TSource__TElement__o *)__this_01
                       ,(MethodInfo_6C8F10 *)MethodInfo_System_Linq_Enumerable_ToDictionary_string_string_int)
    ;
    (object->fields).orderByString = (System_Collections_Generic_Dictionary_string__int__o *)value;
    Il2CppCodeGenWriteBarrier(&(object->fields).orderByString,value);
    __this_02 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Comparison_KeyValuePair_string_JSONNode);
    System_Comparison_KeyValuePair_object__object_____ctor
              (__this_02,(Il2CppObject *)object,
               (intptr_t)MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__3,
               (MethodInfo_C981A0 *)0x0);
    TypeInfo_GameProgress_DamageSetting->static_fields->Comparison =
         (System_Comparison_KeyValuePair_string__JSONNode___o *)__this_02;
    Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_DamageSetting->static_fields->Comparison,__this_02);
    return;
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$get_Item
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e33cb0

System_ValueTuple_ulong__ulong__o *
GameProgress_DamageSetting__get_Item
          (System_ValueTuple_ulong__ulong__o *__return_storage_ptr__,GameProgress_DamageSetting_o *__this,
          GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  bool bVar2;
  char cVar3;
  int32_t iVar4;
  MethodInfo *pMVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_String_o *pSVar7;
  undefined4 extraout_var;
  _union_125884 lo;
  undefined4 extraout_var_00;
  _union_125884 hi;
  System_Enum_o local_48;
  int32_t local_38;
  longlong *plVar8;
  
  if (Il2CppMethodInitialized_184344d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_ulong_ulong_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_184344d9e = '\x01';
  }
  pSVar1 = (__this->fields).root;
  if (Il2CppMethodInitialized_184344dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_184344dc4 = '\x01';
  }
  local_48.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_38 = (method->fields).Weapon;
  local_48.monitor = &g_data_ffffffffffffffff;
  pMVar5 = (MethodInfo *)System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e33fe0;
  bVar2 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)(pSVar1,pMVar5);
  if (bVar2) {
    pSVar1 = (__this->fields).root;
    if (Il2CppMethodInitialized_184344dc4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
      Il2CppMethodInitialized_184344dc4 = '\x01';
    }
    local_48.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
    local_38 = (method->fields).Weapon;
    local_48.monitor = &g_data_ffffffffffffffff;
    pMVar5 = (MethodInfo *)System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181e33fe0:
      ThrowNullReferenceException();
    }
    pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,pMVar5);
    if (Il2CppMethodInitialized_184344dc5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"None");
      Il2CppMethodInitialized_184344dc5 = '\x01';
    }
    System_String__IsNullOrEmpty((method->fields).Special,(MethodInfo *)0x0);
    if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e33fe0;
    cVar3 = (**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[28].methodPtr)(pSVar6);
    if (cVar3 != '\0') {
      pSVar1 = (__this->fields).root;
      if (Il2CppMethodInitialized_184344dc4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
        Il2CppMethodInitialized_184344dc4 = '\x01';
      }
      local_48.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
      local_38 = (method->fields).Weapon;
      local_48.monitor = &g_data_ffffffffffffffff;
      pMVar5 = (MethodInfo *)System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e33fe0;
      pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,pMVar5);
      if (Il2CppMethodInitialized_184344dc5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        Il2CppMethodInitialized_184344dc5 = '\x01';
      }
      bVar2 = System_String__IsNullOrEmpty((method->fields).Special,(MethodInfo *)0x0);
      pMVar5 = (MethodInfo *)"None";
      if (!bVar2) {
        pMVar5 = (MethodInfo *)(method->fields).Special;
      }
      if ((pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pSVar7 = (*(pSVar6->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar6,pMVar5),
         pSVar7 == (System_String_o *)0x0)) goto label_181e33fe0;
      cVar3 = (*(code *)((Il2CppClass *)pSVar7->klass)->vtable[28].methodPtr)(pSVar7,"Highest",((Il2CppClass *)pSVar7->klass)->vtable[28].method);
      if (cVar3 == '\0') {
        lo = (_union_125884)0x0;
      }
      else {
        iVar4 = (*(pSVar7->klass->vtable)._7_CompareTo.methodPtr)
                          (pSVar7,"Highest",(pSVar7->klass->vtable)._7_CompareTo.method);
        plVar8 = (longlong *)CONCAT44(extraout_var,iVar4);
        if (plVar8 == (longlong *)0x0) goto label_181e33fe0;
        lo = (_union_125884)(**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
      }
      cVar3 = (*(code *)((Il2CppClass *)pSVar7->klass)->vtable[28].methodPtr)(pSVar7,"Total",((Il2CppClass *)pSVar7->klass)->vtable[28].method);
      if (cVar3 == '\0') {
        hi = (_union_125884)0x0;
      }
      else {
        iVar4 = (*(pSVar7->klass->vtable)._7_CompareTo.methodPtr)
                          (pSVar7,"Total",(pSVar7->klass->vtable)._7_CompareTo.method);
        plVar8 = (longlong *)CONCAT44(extraout_var_00,iVar4);
        if (plVar8 == (longlong *)0x0) goto label_181e33fe0;
        hi = (_union_125884)(**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
      }
      (__return_storage_ptr__->fields).Item1 = 0;
      (__return_storage_ptr__->fields).Item2 = 0;
      goto label_181e33fb7;
    }
  }
  hi = (_union_125884)0x0;
  (__return_storage_ptr__->fields).Item1 = 0;
  (__return_storage_ptr__->fields).Item2 = 0;
  lo = (_union_125884)0x0;
label_181e33fb7:
  System_ValueTuple_ulong__ulong____ctor
            ((Unity_Burst_Intrinsics_v128_o *)__return_storage_ptr__,(Unity_Burst_Intrinsics_v64_o)lo,
             (Unity_Burst_Intrinsics_v64_o)hi,MethodInfo_System_ValueTuple_ulong_ulong_ctor);
  return __return_storage_ptr__;
}


// GameProgress.DamageSetting$$set_Item
// il2cpp: void GameProgress_DamageSetting__set_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x181e341a0

void GameProgress_DamageSetting__set_Item
               (GameProgress_DamageSetting_o *__this,GameProgress_KillMethod_o *method,
               System_ValueTuple_ulong__ulong__o *value,MethodInfo *methodInfo)

{
  bool bVar1;
  char cVar2;
  MethodInfo *pMVar3;
  System_Type_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Enum_o local_38;
  int32_t local_28;
  
  if (Il2CppMethodInitialized_184344d9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_184344d9f = '\x01';
  }
  pSVar7 = (__this->fields).root;
  if (Il2CppMethodInitialized_184344dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_184344dc4 = '\x01';
  }
  local_38.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_28 = (method->fields).Weapon;
  local_38.monitor = &g_data_ffffffffffffffff;
  pMVar3 = (MethodInfo *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)(pSVar7,pMVar3);
    if (!bVar1) {
      pSVar7 = (__this->fields).root;
      if (Il2CppMethodInitialized_184344dc4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
        Il2CppMethodInitialized_184344dc4 = '\x01';
      }
      local_38.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
      local_28 = (method->fields).Weapon;
      local_38.monitor = &g_data_ffffffffffffffff;
      pSVar4 = (System_Type_o *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pMVar3,(MethodInfo *)0x0);
      if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e345d4;
      (*(pSVar7->klass->vtable)._20_Add.methodPtr)(pSVar7,pSVar4,pMVar3);
    }
    pSVar7 = (__this->fields).root;
    if (Il2CppMethodInitialized_184344dc4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
      Il2CppMethodInitialized_184344dc4 = '\x01';
    }
    local_38.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
    local_28 = (method->fields).Weapon;
    local_38.monitor = &g_data_ffffffffffffffff;
    pMVar3 = (MethodInfo *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,pMVar3);
      if (Il2CppMethodInitialized_184344dc5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        Il2CppMethodInitialized_184344dc5 = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty((method->fields).Special,(MethodInfo *)0x0);
      pSVar6 = "None";
      if (!bVar1) {
        pSVar6 = (method->fields).Special;
      }
      if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        cVar2 = (**(code **)&((Il2CppClass *)pSVar5->klass)->vtable[28].methodPtr)
                          (pSVar5,pSVar6,((Il2CppClass *)pSVar5->klass)->vtable[28].method);
        if (cVar2 == '\0') {
          pSVar7 = (__this->fields).root;
          if (Il2CppMethodInitialized_184344dc4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
            Il2CppMethodInitialized_184344dc4 = '\x01';
          }
          local_38.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
          local_28 = (method->fields).Weapon;
          local_38.monitor = &g_data_ffffffffffffffff;
          pMVar3 = (MethodInfo *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e345d4;
          pSVar5 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,pMVar3);
          if (Il2CppMethodInitialized_184344dc5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"None");
            Il2CppMethodInitialized_184344dc5 = '\x01';
          }
          bVar1 = System_String__IsNullOrEmpty((method->fields).Special,(MethodInfo *)0x0);
          pSVar6 = "None";
          if (!bVar1) {
            pSVar6 = (method->fields).Special;
          }
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
          SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
          if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e345d4;
          (*((Il2CppClass *)pSVar5->klass)->vtable[20].methodPtr)(pSVar5,pSVar6,__this_00,((Il2CppClass *)pSVar5->klass)->vtable[20].method)
          ;
        }
        pSVar7 = (__this->fields).root;
        if (Il2CppMethodInitialized_184344dc4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
          Il2CppMethodInitialized_184344dc4 = '\x01';
        }
        local_38.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
        local_28 = (method->fields).Weapon;
        local_38.monitor = &g_data_ffffffffffffffff;
        pMVar3 = (MethodInfo *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
        if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar5 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,pMVar3);
          if (Il2CppMethodInitialized_184344dc5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"None");
            Il2CppMethodInitialized_184344dc5 = '\x01';
          }
          bVar1 = System_String__IsNullOrEmpty((method->fields).Special,(MethodInfo *)0x0);
          pMVar3 = (MethodInfo *)"None";
          if (!bVar1) {
            pMVar3 = (MethodInfo *)(method->fields).Special;
          }
          if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            pSVar6 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar5,pMVar3);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4570((value->fields).Item1,(MethodInfo *)0x0);
            if (pSVar6 != (System_String_o *)0x0) {
              (**(code **)((longlong)pSVar6->klass + 0x1b8))
                        (pSVar6,"Highest",pSVar7,*(undefined8 *)((longlong)pSVar6->klass + 0x1c0))
              ;
              pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4570((value->fields).Item2,(MethodInfo *)0x0);
              (**(code **)((longlong)pSVar6->klass + 0x1b8))
                        (pSVar6,"Total",pSVar7,*(undefined8 *)((longlong)pSVar6->klass + 0x1c0))
              ;
              return;
            }
          }
        }
      }
    }
  }
label_181e345d4:
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$get_Overall
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Overall (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x181e33ff0

System_ValueTuple_ulong__ulong__o *
GameProgress_DamageSetting__get_Overall
          (System_ValueTuple_ulong__ulong__o *__return_storage_ptr__,GameProgress_DamageSetting_o *__this,
          MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_c *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *pSVar8;
  _union_125884 lo;
  _union_125884 hi;
  
  if (Il2CppMethodInitialized_184344da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_ulong_ulong_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_184344da0 = '\x01';
  }
  pSVar1 = (__this->fields).root;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar5 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)(pSVar1,(MethodInfo *)"Overall");
    if (!bVar5) {
      hi = (_union_125884)0x0;
      (__return_storage_ptr__->fields).Item1 = 0;
      (__return_storage_ptr__->fields).Item2 = 0;
      lo = (_union_125884)0x0;
label_181e34166:
      System_ValueTuple_ulong__ulong____ctor
                ((Unity_Burst_Intrinsics_v128_o *)__return_storage_ptr__,(Unity_Burst_Intrinsics_v64_o)lo,
                 (Unity_Burst_Intrinsics_v64_o)hi,MethodInfo_System_ValueTuple_ulong_ulong_ctor);
      return __return_storage_ptr__;
    }
    pSVar1 = (__this->fields).root;
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar7 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Overall");
      if (pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        cVar6 = (**(code **)&((Il2CppClass *)pSVar7->klass)->vtable[28].methodPtr)
                          (pSVar7,"Highest",((Il2CppClass *)pSVar7->klass)->vtable[28].method);
        if (cVar6 == '\0') {
          lo = (_union_125884)0x0;
        }
        else {
          pSVar8 = (*(pSVar7->klass->vtable)._7_get_IdAttribute.methodPtr)
                             (pSVar7,(MethodInfo *)"Highest");
          if (pSVar8 == (System_String_o *)0x0) goto label_181e34195;
          pSVar2 = pSVar8->klass;
          uVar3._0_4_ = ((Il2CppClass *)pSVar2)->vtable[43].method;
          uVar3._4_4_ = pSVar2[1]._2.static_fields_size;
          lo = (_union_125884)(**(code **)&((Il2CppClass *)pSVar2)->vtable[43].methodPtr)(pSVar8,uVar3);
        }
        cVar6 = (**(code **)&((Il2CppClass *)pSVar7->klass)->vtable[28].methodPtr)
                          (pSVar7,"Total",((Il2CppClass *)pSVar7->klass)->vtable[28].method);
        if (cVar6 == '\0') {
          hi = (_union_125884)0x0;
        }
        else {
          pSVar8 = (*(pSVar7->klass->vtable)._7_get_IdAttribute.methodPtr)
                             (pSVar7,(MethodInfo *)"Total");
          if (pSVar8 == (System_String_o *)0x0) goto label_181e34195;
          pSVar2 = pSVar8->klass;
          uVar4._0_4_ = ((Il2CppClass *)pSVar2)->vtable[43].method;
          uVar4._4_4_ = pSVar2[1]._2.static_fields_size;
          hi = (_union_125884)(**(code **)&((Il2CppClass *)pSVar2)->vtable[43].methodPtr)(pSVar8,uVar4);
        }
        (__return_storage_ptr__->fields).Item1 = 0;
        (__return_storage_ptr__->fields).Item2 = 0;
        goto label_181e34166;
      }
    }
  }
label_181e34195:
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$set_Overall
// il2cpp: void GameProgress_DamageSetting__set_Overall (GameProgress_DamageSetting_o* __this, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x181e345e0

void GameProgress_DamageSetting__set_Overall
               (GameProgress_DamageSetting_o *__this,System_ValueTuple_ulong__ulong__o *value,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  bool bVar2;
  MethodInfo *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_184344da1 = '\x01';
  }
  pSVar1 = (__this->fields).root;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)(pSVar1,(MethodInfo *)"Overall");
    if (!bVar2) {
      pSVar1 = (__this->fields).root;
      __this_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e3475a;
      (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,(System_Type_o *)"Overall",__this_00);
    }
    pSVar1 = (__this->fields).root;
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Overall");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar4 = (*(pSVar3->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar3,(MethodInfo *)"Highest");
        if (pSVar4 != (System_String_o *)0x0) {
          (**(code **)((longlong)pSVar4->klass + 0x3f8))
                    (pSVar4,(value->fields).Item1,*(undefined8 *)((longlong)pSVar4->klass + 0x400));
          pSVar4 = (*(pSVar3->klass->vtable)._7_get_IdAttribute.methodPtr)
                             (pSVar3,(MethodInfo *)"Total");
          if (pSVar4 != (System_String_o *)0x0) {
            (**(code **)((longlong)pSVar4->klass + 0x3f8))
                      (pSVar4,(value->fields).Item2,*(undefined8 *)((longlong)pSVar4->klass + 0x400));
            return;
          }
        }
      }
    }
  }
label_181e3475a:
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$.ctor
// il2cpp: void GameProgress_DamageSetting___ctor (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x181e33c80

void GameProgress_DamageSetting___ctor(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// GameProgress.DamageSetting$$SetDefault
// il2cpp: void GameProgress_DamageSetting__SetDefault (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x181e33890

void GameProgress_DamageSetting__SetDefault(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184344da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_184344da2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).root = (SimpleJSONFixed_JSONNode_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root,__this_00);
  return;
}


// GameProgress.DamageSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* GameProgress_DamageSetting__SerializeToJsonObject (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x180573e90

SimpleJSONFixed_JSONNode_o*
GameProgress_DamageSetting__SerializeToJsonObject(GameProgress_DamageSetting_o* __this, MethodInfo* method)

{
  return (__this->fields).root;
}


// GameProgress.DamageSetting$$DeserializeFromJsonObject
// il2cpp: void GameProgress_DamageSetting__DeserializeFromJsonObject (GameProgress_DamageSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x180c8de30

void
GameProgress_DamageSetting__DeserializeFromJsonObject(GameProgress_DamageSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, MethodInfo* method)

{
  (__this->fields).root = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root,value);
  return;
}


// GameProgress.DamageSetting$$ClearRecords
// il2cpp: void GameProgress_DamageSetting__ClearRecords (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x181e332e0
// eh: try 0x181e333f3..0x181e3358c -> pad 0x1833245a0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e334f2: mov rdx, qword ptr [rip + 0x223beff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
// asm:   0x181e334f9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e334fe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e33503: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e33508: test rcx, rcx
// asm:   0x181e3350b: jne 0x181e3357b
// asm:   0x181e3350d: xor esi, esi
// asm:   0x181e3350f: jmp 0x181e333f3
// asm:   0x181e3354b: mov rdx, qword ptr [rip + 0x223bea6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
// asm:   0x181e33552: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e33557: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e3355c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e33561: test rcx, rcx
// asm:   0x181e33564: jne 0x181e3358c
// asm:   0x181e3357b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e3358c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 
// asm:   0x18333c7d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c7d5: push rbp
// asm:   0x18333c7d6: sub rsp, 0x20
// asm:   0x18333c7da: mov rbp, rdx
// asm:   0x18333c7dd: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333c7e4: mov rcx, qword ptr [rax]
// asm:   0x18333c7e7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333c7eb: movabs rax, 0
// asm:   0x18333c7f5: add rsp, 0x20
// asm:   0x18333c7f9: pop rbp
// asm:   0x18333c7fa: ret 

void GameProgress_DamageSetting__ClearRecords(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *pSVar3;
  System_Collections_Generic_List_TSource__o *pSVar4;
  undefined1 local_98 [16];
  System_String_o *local_88;
  SimpleJSONFixed_JSONNode_o *pSStack_80;
  undefined1 local_78 [8];
  uint64_t uStack_70;
  System_String_o *local_68;
  SimpleJSONFixed_JSONNode_o *pSStack_60;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  SimpleJSONFixed_JSONNode_o *pSStack_40;
  System_Collections_Generic_List_Enumerator_T__o local_28;
  SimpleJSONFixed_JSONNode_o *pSStack_10;
  
  if (Il2CppMethodInitialized_184344da3 == '\0') {
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
    Il2CppMethodInitialized_184344da3 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  uStack_70 = 0;
  local_68 = (System_String_o *)0x0;
  pSStack_60 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSStack_40 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar1 = (__this->fields).root;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = SimpleJSONFixed_JSONNode__get_Linq(pSVar1,(MethodInfo *)0x0);
    pSVar4 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        (MethodInfo_6C9850 *)
                        MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
    if (pSVar4 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                 (System_Collections_Generic_List_T__o *)pSVar4,
                 (MethodInfo_91F200 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
      local_78 = (undefined1  [8])local_98._0_8_;
      uStack_70 = local_98._8_8_;
      local_68 = local_88;
      pSStack_60 = pSStack_80;
      while( true ) {
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                             (MethodInfo_15292D0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                            );
          pSVar1 = pSStack_60;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose
                      );
            return;
          }
          bVar2 = System_String__op_Equality(local_68,"Overall",(MethodInfo *)0x0);
          if (!bVar2) break;
          if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
          }
          GameProgress_DamageSetting__ClearRecord(pSVar1,(MethodInfo *)0x0);
        }
        if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        pSVar3 = SimpleJSONFixed_JSONNode__get_Linq(pSVar1,(MethodInfo *)0x0);
        pSVar4 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                            (MethodInfo_6C9850 *)
                            MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_JSONNode);
        if (pSVar4 == (System_Collections_Generic_List_TSource__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                  (&local_28,(System_Collections_Generic_List_T__o *)pSVar4,
                   (MethodInfo_91F200 *)
                   MethodInfo_System_Collections_Generic_List_KeyValuePair_string_JSONNode_GetEnumerator);
        local_58.fields._list = local_28.fields._list;
        local_58.fields._index = local_28.fields._index;
        local_58.fields._version = local_28.fields._version;
        local_58.fields._current = local_28.fields._current;
        pSStack_40 = pSStack_10;
        local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_98._8_8_ = &local_58;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                            (&local_58,
                             (MethodInfo_15292D0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_MoveNext
                            );
          pSVar1 = pSStack_40;
          if (!bVar2) break;
          if ((TypeInfo_GameProgress_DamageSetting->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
          }
          GameProgress_DamageSetting__ClearRecord(pSVar1,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                   MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_JSONNode_Dispose)
        ;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$ClearRecord
// il2cpp: void GameProgress_DamageSetting__ClearRecord (SimpleJSONFixed_JSONNode_o* record, const MethodInfo* method);
// 0x181e33230

void GameProgress_DamageSetting__ClearRecord(SimpleJSONFixed_JSONNode_o *record,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_184344da4 = '\x01';
  }
  if (record != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(record->klass->vtable)._7_get_Item.methodPtr)(record,(MethodInfo *)"Highest");
    if (pSVar1 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      (*(code *)((Il2CppClass *)pSVar1->klass)->vtable[44].methodPtr)
                (pSVar1,0,((Il2CppClass *)pSVar1->klass)->vtable[44].method);
      pSVar1 = (*(record->klass->vtable)._7_get_Item.methodPtr)(record,(MethodInfo *)"Total");
      if (pSVar1 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        (*(code *)((Il2CppClass *)pSVar1->klass)->vtable[44].methodPtr)
                  (pSVar1,0,((Il2CppClass *)pSVar1->klass)->vtable[44].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$Register
// il2cpp: void GameProgress_DamageSetting__Register (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, uint64_t damage, const MethodInfo* method);
// 0x181e33620

void GameProgress_DamageSetting__Register
               (GameProgress_DamageSetting_o *__this,GameProgress_KillMethod_o *method,uint64_t damage,
               MethodInfo *methodInfo)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  _union_125927 _Var2;
  undefined8 uVar3;
  bool bVar4;
  System_ValueTuple_ulong__ulong__o *pSVar5;
  MethodInfo *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_String_o *pSVar7;
  _union_125884 _Var8;
  _union_125927 local_48;
  undefined8 uStack_40;
  _union_125927 local_38;
  System_String_o *pSStack_30;
  System_ValueTuple_ulong__ulong__o local_28;
  
  if (Il2CppMethodInitialized_184344da5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_ulong_ulong_ctor);
    Il2CppMethodInitialized_184344da5 = '\x01';
  }
  pSVar5 = GameProgress_DamageSetting__get_Overall(&local_28,__this,(MethodInfo *)0x0);
  _Var8 = (_union_125884)(pSVar5->fields).Item1;
  if ((ulonglong)_Var8 < damage) {
    _Var8 = (_union_125884)damage;
  }
  local_48 = (_union_125927)0x0;
  uStack_40 = 0;
  System_ValueTuple_ulong__ulong____ctor
            ((Unity_Burst_Intrinsics_v128_o *)&local_48._at_Byte0,(Unity_Burst_Intrinsics_v64_o)_Var8,
             (Unity_Burst_Intrinsics_v64_o)((pSVar5->fields).Item2 + damage),
             MethodInfo_System_ValueTuple_ulong_ulong_ctor);
  uVar3 = uStack_40;
  _Var2 = local_48;
  if (Il2CppMethodInitialized_184344da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Overall");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest");
    Il2CppMethodInitialized_184344da1 = '\x01';
  }
  pSVar1 = (__this->fields).root;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar4 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)(pSVar1,(MethodInfo *)"Overall");
    if (!bVar4) {
      pSVar1 = (__this->fields).root;
      __this_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e3388a;
      (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,(System_Type_o *)"Overall",__this_00);
    }
    pSVar1 = (__this->fields).root;
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Overall");
      if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar7 = (*(pSVar6->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar6,(MethodInfo *)"Highest");
        if (pSVar7 != (System_String_o *)0x0) {
          (**(code **)((longlong)pSVar7->klass + 0x3f8))
                    (pSVar7,_Var2,*(undefined8 *)((longlong)pSVar7->klass + 0x400));
          pSVar7 = (*(pSVar6->klass->vtable)._7_get_IdAttribute.methodPtr)
                             (pSVar6,(MethodInfo *)"Total");
          if (pSVar7 != (System_String_o *)0x0) {
            (**(code **)((longlong)pSVar7->klass + 0x3f8))
                      (pSVar7,uVar3,*(undefined8 *)((longlong)pSVar7->klass + 0x400));
            local_38 = *(_union_125927 *)&method->fields;
            pSStack_30 = (method->fields).Special;
            pSVar5 = GameProgress_DamageSetting__get_Item
                               (&local_28,__this,(GameProgress_KillMethod_o *)&local_38._at_Byte0,
                                (MethodInfo *)0x0);
            _Var8 = (_union_125884)(pSVar5->fields).Item1;
            if ((ulonglong)_Var8 < damage) {
              _Var8 = (_union_125884)damage;
            }
            local_48 = (_union_125927)0x0;
            uStack_40 = 0;
            System_ValueTuple_ulong__ulong____ctor
                      ((Unity_Burst_Intrinsics_v128_o *)&local_48._at_Byte0,
                       (Unity_Burst_Intrinsics_v64_o)_Var8,
                       (Unity_Burst_Intrinsics_v64_o)((pSVar5->fields).Item2 + damage),
                       MethodInfo_System_ValueTuple_ulong_ulong_ctor);
            local_28.fields.Item1 = *(uint64_t *)&method->fields;
            local_28.fields.Item2 = (uint64_t)(method->fields).Special;
            local_38 = local_48;
            pSStack_30 = (System_String_o *)uStack_40;
            GameProgress_DamageSetting__set_Item
                      (__this,(GameProgress_KillMethod_o *)&local_28,
                       (System_ValueTuple_ulong__ulong__o *)&local_38._at_Byte0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_181e3388a:
  ThrowNullReferenceException();
}


// GameProgress.DamageSetting$$GetStatLabels
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x181e335a0

System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *
GameProgress_DamageSetting__GetStatLabels(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GameProgress_DamageSetting__GetStatLabels_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_184344da6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
    Il2CppMethodInitialized_184344da6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_DamageSetting_GetStatLabels_d__19);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)__this_00;
}


