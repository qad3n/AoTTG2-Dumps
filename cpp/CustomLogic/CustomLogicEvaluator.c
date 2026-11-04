// Type: CustomLogic.CustomLogicEvaluator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// --------------------------------

// CustomLogic.CustomLogicEvaluator.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c___cctor (const MethodInfo* method);
// 0x1820ef600

void CustomLogic_CustomLogicEvaluator___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator___c_o *__this;
  
  if (Il2CppMethodInitialized_184346a17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c);
    Il2CppMethodInitialized_184346a17 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c___ctor (CustomLogic_CustomLogicEvaluator___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicEvaluator___c___ctor(CustomLogic_CustomLogicEvaluator___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c$$<CreateAddonNetworkChannels>b__20_0
// il2cpp: System_String_o* CustomLogic_CustomLogicEvaluator___c___CreateAddonNetworkChannels_b__20_0 (CustomLogic_CustomLogicEvaluator___c_o* __this, System_String_o* x, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
CustomLogic_CustomLogicEvaluator___c___CreateAddonNetworkChannels_b__20_0(CustomLogic_CustomLogicEvaluator___c_o* __this, System_String_o* x, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass40_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___ctor (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___ctor(CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass40_0$$<CreateInspectorSetting>b__0
// il2cpp: bool CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___CreateInspectorSetting_b__0 (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o* __this, CustomLogic_CustomLogicAssignmentExpressionAst_o* item, const MethodInfo* method);
// 0x1820ef4c0

bool CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___CreateInspectorSetting_b__0
               (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *__this,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *item,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    Il2CppMethodInitialized_184346a18 = '\x01';
  }
  if (item != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    pCVar2 = (item->fields).Left;
    if (pCVar2 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
        bVar3 = System_String__op_Equality
                          ((System_String_o *)(*(uint64_t *)((char *)pCVar2 + 0x18)),(__this->fields).variableName,(MethodInfo *)0x0)
        ;
        return bVar3;
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass41_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ctor (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ctor(CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass41_0$$<ApplyComponentInspectorRules>b__0
// il2cpp: bool CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ApplyComponentInspectorRules_b__0 (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o* __this, CustomLogic_CustomLogicAssignmentExpressionAst_o* item, const MethodInfo* method);
// 0x1820ef560

bool CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ApplyComponentInspectorRules_b__0
               (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *__this,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *item,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    Il2CppMethodInitialized_184346a19 = '\x01';
  }
  if (item != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    pCVar2 = (item->fields).Left;
    if (pCVar2 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
        bVar3 = System_String__op_Equality
                          ((System_String_o *)(*(uint64_t *)((char *)pCVar2 + 0x18)),(__this->fields).variableName,(MethodInfo *)0x0)
        ;
        return bVar3;
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87___ctor (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87___ctor(CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_IDisposable_Dispose (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x1820eef30
// eh: try 0x1820eefac..0x1820ef065 -> pad 0x183317f60 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ef031: lea rcx, [rsp + 0x38]
// asm:   0x1820ef036: call 0x1820d5550  ; il2cpp_runtime_helper_1820d5550()
// asm:   0x1820ef03b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820ef040: test rcx, rcx
// asm:   0x1820ef043: jne 0x1820ef05f
// asm:   0x1820ef045: lea rcx, [rsp + 0x48]
// asm:   0x1820ef04a: call 0x1820d55a0  ; il2cpp_runtime_helper_1820d55a0()
// asm:   0x1820ef04f: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820ef054: test rcx, rcx
// asm:   0x1820ef057: jne 0x1820ef065
// asm:   0x1820ef05f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820ef065: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f65: push rbp
// asm:   0x183317f66: sub rsp, 0x20
// asm:   0x183317f6a: mov rbp, rdx
// asm:   0x183317f6d: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317f71: mov rcx, qword ptr [rax]
// asm:   0x183317f74: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317f78: movabs rax, 0
// asm:   0x183317f82: add rsp, 0x20
// asm:   0x183317f86: pop rbp
// asm:   0x183317f87: ret 

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_IDisposable_Dispose
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 + 4U < 2) || (iVar1 - 1U < 0x13)) {
    if ((iVar1 == -4) || (iVar1 - 0x11U < 3)) {
      if (Il2CppMethodInitialized_184346a1c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        Il2CppMethodInitialized_184346a1c = '\x01';
      }
      (__this->fields).__1__state = -3;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
      if (Il2CppMethodInitialized_184346a1b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
        Il2CppMethodInitialized_184346a1b = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    }
    else {
      if (Il2CppMethodInitialized_184346a1b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
        Il2CppMethodInitialized_184346a1b = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__MoveNext (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x1820ed1a0
// eh: try 0x1820ed318..0x1820eee84 -> pad 0x183315a20 (+16 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820eee98..0x1820eeee8 -> pad 0x1803577e0 cleanup
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820eecbb: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x1820eecc0: test rbx, rbx
// asm:   0x1820eecc3: jne 0x1820eee84
// asm:   0x1820eecc9: movzx ebx, byte ptr [rsp + 0xb0]
// asm:   0x1820eee84: lea rcx, [rsp + 0x40]
// asm:   0x1820eee89: call 0x1820d5500  ; il2cpp_runtime_helper_1820d5500()
// asm:   0x1820eee8e: mov rcx, rbx
// asm:   0x1820eee91: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

bool CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__MoveNext
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_01;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicForBlockAst_o *pCVar4;
  CustomLogic_CustomLogicVariableExpressionAst_o *pCVar5;
  System_Collections_Generic_Dictionary_string__object__o *__this_02;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  CustomLogic_CustomLogicManager_o *pCVar7;
  UnityEngine_Coroutine_o *pUVar8;
  CustomLogic_CustomLogicBaseAst_o *pCVar9;
  CustomLogic_CustomLogicBaseAst_c *pCVar10;
  CustomLogic_CustomLogicAssignmentExpressionAst_c *pCVar11;
  CustomLogic_CustomLogicStartAst_o *pCVar12;
  CustomLogic_CustomLogicClassInstance_o *pCVar13;
  CustomLogic_CustomLogicToken_o *pCVar14;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar15;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar16;
  CustomLogic_CustomLogicConditionalBlockAst_o *pCVar17;
  bool bVar18;
  System_Collections_IEnumerator_o *pSVar19;
  Utility_CoroutineWithData_o *pUVar20;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *obj;
  Il2CppObject *pIVar21;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar22;
  int *piVar23;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar24;
  char *pcVar25;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *pCVar26;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *pCVar27;
  float fVar28;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if (Il2CppMethodInitialized_184346a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Coroutine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWaitExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346a1a = '\x01';
  }
  pCVar26 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  uVar2 = (__this->fields).__1__state;
  if (0x13 < uVar2) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields)._conditionalState_5__2 = 0;
    __this_01 = (__this->fields).statements;
    if (__this_01 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_50,(System_Collections_Generic_List_T__o *)__this_01,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator);
    (__this->fields).__7__wrap2.fields._list = local_50.fields._list;
    (__this->fields).__7__wrap2.fields._index = local_50.fields._index;
    (__this->fields).__7__wrap2.fields._version = local_50.fields._version;
    (__this->fields).__7__wrap2.fields._current = (CustomLogic_CustomLogicBaseAst_o *)local_50.fields._current
    ;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap2,(void *)0x0);
    (__this->fields).__1__state = -3;
    while (bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)
                               &(__this->fields).__7__wrap2,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext
                              ), bVar18) {
      pCVar9 = (__this->fields).__7__wrap2.fields._current;
      (__this->fields)._statement_5__4 = pCVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._statement_5__4,pCVar9);
      pCVar9 = (__this->fields)._statement_5__4;
      if (pCVar9 == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields)._currentLineNumber = (pCVar9->fields).Line;
      pCVar27 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(__this->fields)._statement_5__4;
      if (pCVar27 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
        pCVar11 = pCVar27->klass;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst->_2).typeHierarchyDepth;
        if (((pCVar11->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst)) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
          if ((((bVar1 <= (pCVar11->_2).typeHierarchyDepth) &&
               ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) ||
              ((bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth,
               bVar1 <= (pCVar11->_2).typeHierarchyDepth &&
               ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)))) ||
             ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
              bVar1 <= (pCVar11->_2).typeHierarchyDepth &&
              ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
               (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
            (__this->fields).__2__current = (Il2CppObject *)pCVar27;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pCVar27);
            (__this->fields).__1__state = 1;
            return true;
          }
          bVar1 = (TypeInfo_CustomLogic_CustomLogicWaitExpressionAst->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar11->_2).typeHierarchyDepth) &&
             ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWaitExpressionAst)) {
            obj = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                  CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this_00,(__this->fields).classInstance,(__this->fields).localVariables,
                             (pCVar27->fields).Left,(MethodInfo *)0x0);
            pCVar12 = (__this_00->fields)._start;
            if (pCVar12 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar13 = (__this->fields).classInstance;
            if (pCVar13 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar12->fields).Classes;
            pIVar21 = (Il2CppObject *)
                      (*(pCVar13->klass->vtable)._6_unknown.methodPtr)
                                (pCVar13,(pCVar13->klass->vtable)._6_unknown.method);
            if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar6,pIVar21,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                );
            if (pCVar22 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar14 = (pCVar22->fields).Token;
            if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar21 = (pCVar14->fields).Value;
            if (pIVar21 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar21,g_data_184354e08);
            }
            piVar23 = il2cpp_object_unbox(pIVar21);
            if (obj == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
              (__this->fields).__2__current = (Il2CppObject *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
              (__this->fields).__1__state = 2;
              return true;
            }
            pCVar15 = (pCVar27->fields).Left;
            if (pCVar15 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
              pCVar16 = pCVar15->klass;
              bVar1 = (TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst->_2).typeHierarchyDepth;
              if ((bVar1 <= (pCVar16->_2).typeHierarchyDepth) &&
                 ((pCVar16->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst)) {
                pCVar27 = pCVar26;
                if (*piVar23 != 4) {
                  pCVar27 = obj;
                }
                if (pCVar27 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
                  if ((UnityEngine_Coroutine_c *)pCVar27->klass == TypeInfo_UnityEngine_Coroutine) {
                    pCVar26 = pCVar27;
                  }
                  if (pCVar26 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
                    (__this->fields).__2__current = (Il2CppObject *)pCVar27;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pCVar27);
                    (__this->fields).__1__state = 3;
                    return true;
                  }
                }
                (__this->fields).__2__current = (Il2CppObject *)0x0;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
                (__this->fields).__1__state = 4;
                return true;
              }
            }
            if (*piVar23 != 4) {
              if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
              }
              fVar28 = MiscExtensions__UnboxToFloat((Il2CppObject *)obj,(MethodInfo *)0x0);
              pPVar24 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(pPVar24,fVar28,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)pPVar24;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar24);
              (__this->fields).__1__state = 6;
              return true;
            }
            if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
            }
            fVar28 = MiscExtensions__UnboxToFloat((Il2CppObject *)obj,(MethodInfo *)0x0);
            goto label_1820ee344;
          }
          bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
          if (((pCVar11->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
            if (((pCVar11->_2).typeHierarchyDepth < bVar1) ||
               ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
              bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
              if ((bVar1 <= (pCVar11->_2).typeHierarchyDepth) &&
                 ((pCVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
                bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
                if (((pCVar27->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar27->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
                  il2cpp_codegen_raise_invalid_cast_exception
                            (pCVar27,TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
                }
                CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this_00,(__this->fields).classInstance,(__this->fields).localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar27,(MethodInfo *)0x0);
              }
            }
            else {
              if (pCVar27 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
                (__this->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)0x0;
                pCVar27 = pCVar26;
              }
              else {
                bVar1 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
                if (((pCVar27->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar27->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
                  il2cpp_codegen_raise_invalid_cast_exception
                            (pCVar27,TypeInfo_CustomLogic_CustomLogicForBlockAst);
                }
                (__this->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)pCVar27;
                bVar1 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
                if (((pCVar27->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar27->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pCVar27);
                }
              }
              Il2CppCodeGenWriteBarrier(&(__this->fields)._forBlock_5__8,pCVar27);
              pCVar4 = (__this->fields)._forBlock_5__8;
              if (pCVar4 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar21 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                  (__this_00,(__this->fields).classInstance,(__this->fields).localVariables,
                                   (pCVar4->fields).Iterable,(MethodInfo *)0x0);
              if (pIVar21 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
              if (((pIVar21->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pIVar21->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar21);
              }
              if (pIVar21[3].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        (&local_50,(System_Collections_Generic_List_T__o *)pIVar21[3].klass,
                         (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator)
              ;
              (__this->fields).__7__wrap8.fields._list = local_50.fields._list;
              (__this->fields).__7__wrap8.fields._index = local_50.fields._index;
              (__this->fields).__7__wrap8.fields._version = local_50.fields._version;
              (__this->fields).__7__wrap8.fields._current = local_50.fields._current;
              Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap8,(void *)0x0);
              (__this->fields).__1__state = -4;
label_1820edce0:
              bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&(__this->fields).__7__wrap8,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
              if (bVar18) {
                pCVar4 = (__this->fields)._forBlock_5__8;
                if (pCVar4 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar5 = (pCVar4->fields).Variable;
                if (pCVar5 == (CustomLogic_CustomLogicVariableExpressionAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_02 = (__this->fields).localVariables;
                if (__this_02 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar21 = (__this->fields).__7__wrap8.fields._current;
                key = (pCVar5->fields).Name;
                bVar18 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                                    (Il2CppObject *)key,
                                    (MethodInfo_1455450 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey
                                   );
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields).localVariables;
                if (bVar18) {
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar6,(Il2CppObject *)key,pIVar21,
                             (MethodInfo_147A7F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
                }
                else {
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar6,(Il2CppObject *)key,pIVar21,
                             (MethodInfo_146B4B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
                }
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pCVar4 = (__this->fields)._forBlock_5__8;
                if (pCVar4 != (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                  pSVar19 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                      (__this_00,(__this->fields).classInstance,
                                       (__this->fields).localVariables,(pCVar4->fields).Statements,
                                       (MethodInfo *)0x0);
                  pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                  Utility_CoroutineWithData___ctor
                            (pUVar20,(UnityEngine_MonoBehaviour_o *)pCVar7,pSVar19,(MethodInfo *)0x0);
                  (__this->fields)._cwd_5__7 = pUVar20;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,pUVar20);
                  pUVar20 = (__this->fields)._cwd_5__7;
                  if (pUVar20 != (Utility_CoroutineWithData_o *)0x0) {
                    pUVar8 = (pUVar20->fields)._Coroutine_k__BackingField;
                    (__this->fields).__2__current = (Il2CppObject *)pUVar8;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar8);
                    (__this->fields).__1__state = 0x11;
                    return true;
                  }
                  ThrowNullReferenceException();
                }
                ThrowNullReferenceException();
              }
              if (Il2CppMethodInitialized_184346a1c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
                Il2CppMethodInitialized_184346a1c = '\x01';
              }
              (__this->fields).__1__state = -3;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                         &(__this->fields).__7__wrap8,
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
              (__this->fields).__7__wrap8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
              (__this->fields).__7__wrap8.fields._index = 0;
              (__this->fields).__7__wrap8.fields._version = 0;
              (__this->fields).__7__wrap8.fields._current = (Il2CppObject *)0x0;
              (__this->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._forBlock_5__8,(void *)0x0);
            }
          }
          else {
            if (pCVar27 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
              (__this->fields)._conditional_5__6 = (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0;
              pCVar27 = pCVar26;
            }
            else {
              bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
              if (((pCVar27->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pCVar27->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
                il2cpp_codegen_raise_invalid_cast_exception(pCVar27);
              }
              (__this->fields)._conditional_5__6 = (CustomLogic_CustomLogicConditionalBlockAst_o *)pCVar27;
              bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
              if (((pCVar27->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pCVar27->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
                il2cpp_codegen_raise_invalid_cast_exception(pCVar27);
              }
            }
            Il2CppCodeGenWriteBarrier(&(__this->fields)._conditional_5__6,pCVar27);
            pCVar17 = (__this->fields)._conditional_5__6;
            if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar14 = (pCVar17->fields).Token;
            if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar21 = (pCVar14->fields).Value;
            if (pIVar21 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar21,g_data_184354e08);
            }
            piVar23 = il2cpp_object_unbox(pIVar21);
            if (*piVar23 == 0x2a) {
              pCVar17 = (__this->fields)._conditional_5__6;
              if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar21 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                  (__this_00,(__this->fields).classInstance,(__this->fields).localVariables,
                                   (pCVar17->fields).Condition,(MethodInfo *)0x0);
              if (pIVar21 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              pcVar25 = il2cpp_object_unbox(pIVar21);
              if (*pcVar25 != '\0') {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pCVar17 = (__this->fields)._conditional_5__6;
                if (pCVar17 != (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                  pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                  pSVar19 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                      (__this_00,(__this->fields).classInstance,
                                       (__this->fields).localVariables,(pCVar17->fields).Statements,
                                       (MethodInfo *)0x0);
                  pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                  Utility_CoroutineWithData___ctor
                            (pUVar20,(UnityEngine_MonoBehaviour_o *)pCVar7,pSVar19,(MethodInfo *)0x0);
                  (__this->fields)._cwd_5__7 = pUVar20;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,pUVar20);
                  pUVar20 = (__this->fields)._cwd_5__7;
                  if (pUVar20 != (Utility_CoroutineWithData_o *)0x0) {
                    pUVar8 = (pUVar20->fields)._Coroutine_k__BackingField;
                    (__this->fields).__2__current = (Il2CppObject *)pUVar8;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar8);
                    (__this->fields).__1__state = 8;
                    return true;
                  }
                  ThrowNullReferenceException();
                }
                ThrowNullReferenceException();
              }
              (__this->fields)._conditionalState_5__2 = 2;
            }
            else {
              pCVar17 = (__this->fields)._conditional_5__6;
              if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar14 = (pCVar17->fields).Token;
              if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar21 = (pCVar14->fields).Value;
              if (pIVar21 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar21,g_data_184354e08);
              }
              piVar23 = il2cpp_object_unbox(pIVar21);
              if (*piVar23 == 0x2d) {
label_1820ed713:
                pCVar17 = (__this->fields)._conditional_5__6;
                if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar21 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                    (__this_00,(__this->fields).classInstance,(__this->fields).localVariables,
                                     (pCVar17->fields).Condition,(MethodInfo *)0x0);
                if (pIVar21 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
                pcVar25 = il2cpp_object_unbox(pIVar21);
                if (*pcVar25 != '\0') {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pCVar17 = (__this->fields)._conditional_5__6;
                  if (pCVar17 != (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                    pSVar19 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                        (__this_00,(__this->fields).classInstance,
                                         (__this->fields).localVariables,(pCVar17->fields).Statements,
                                         (MethodInfo *)0x0);
                    pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                    Utility_CoroutineWithData___ctor
                              (pUVar20,(UnityEngine_MonoBehaviour_o *)pCVar7,pSVar19,(MethodInfo *)0x0);
                    (__this->fields)._cwd_5__7 = pUVar20;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,pUVar20);
                    pUVar20 = (__this->fields)._cwd_5__7;
                    if (pUVar20 != (Utility_CoroutineWithData_o *)0x0) {
                      pUVar8 = (pUVar20->fields)._Coroutine_k__BackingField;
                      (__this->fields).__2__current = (Il2CppObject *)pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar8);
                      (__this->fields).__1__state = 10;
                      return true;
                    }
                    ThrowNullReferenceException();
                  }
                  ThrowNullReferenceException();
                }
                (__this->fields)._conditionalState_5__2 = 0;
              }
              else {
                pCVar17 = (__this->fields)._conditional_5__6;
                if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar14 = (pCVar17->fields).Token;
                if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar21 = (pCVar14->fields).Value;
                if (pIVar21 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pIVar21,g_data_184354e08);
                }
                piVar23 = il2cpp_object_unbox(pIVar21);
                if (*piVar23 == 0x2b) {
                  if (((__this->fields)._conditionalState_5__2 == 2) ||
                     ((__this->fields)._conditionalState_5__2 == 4)) {
                    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                    }
                    pCVar17 = (__this->fields)._conditional_5__6;
                    if (pCVar17 != (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                      pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                      pSVar19 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                          (__this_00,(__this->fields).classInstance,
                                           (__this->fields).localVariables,(pCVar17->fields).Statements,
                                           (MethodInfo *)0x0);
                      pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                      Utility_CoroutineWithData___ctor
                                (pUVar20,(UnityEngine_MonoBehaviour_o *)pCVar7,pSVar19,(MethodInfo *)0x0);
                      (__this->fields)._cwd_5__7 = pUVar20;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,pUVar20);
                      pUVar20 = (__this->fields)._cwd_5__7;
                      if (pUVar20 != (Utility_CoroutineWithData_o *)0x0) {
                        pUVar8 = (pUVar20->fields)._Coroutine_k__BackingField;
                        (__this->fields).__2__current = (Il2CppObject *)pUVar8;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar8);
                        (__this->fields).__1__state = 0xd;
                        return true;
                      }
                      ThrowNullReferenceException();
                    }
                    ThrowNullReferenceException();
                  }
                  (__this->fields)._conditionalState_5__2 = 0;
                }
                else {
                  pCVar17 = (__this->fields)._conditional_5__6;
                  if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar14 = (pCVar17->fields).Token;
                  if (pCVar14 == (CustomLogic_CustomLogicToken_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar21 = (pCVar14->fields).Value;
                  if (pIVar21 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pIVar21,g_data_184354e08);
                  }
                  piVar23 = il2cpp_object_unbox(pIVar21);
                  if (((*piVar23 == 0x2c) && ((__this->fields)._conditionalState_5__2 != 1)) &&
                     ((__this->fields)._conditionalState_5__2 != 3)) {
                    if (((__this->fields)._conditionalState_5__2 == 2) ||
                       ((__this->fields)._conditionalState_5__2 == 4)) {
                      pCVar17 = (__this->fields)._conditional_5__6;
                      if (pCVar17 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pIVar21 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                          (__this_00,(__this->fields).classInstance,
                                           (__this->fields).localVariables,(pCVar17->fields).Condition,
                                           (MethodInfo *)0x0);
                      if (pIVar21 == (Il2CppObject *)0x0) {
                        ThrowNullReferenceException();
                      }
                      if ((pIVar21->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
                        il2cpp_codegen_raise_invalid_cast_exception();
                      }
                      pcVar25 = il2cpp_object_unbox(pIVar21);
                      if (*pcVar25 != '\0') {
                        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                        }
                        pCVar17 = (__this->fields)._conditional_5__6;
                        if (pCVar17 != (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                          pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                          pSVar19 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                              (__this_00,(__this->fields).classInstance,
                                               (__this->fields).localVariables,(pCVar17->fields).Statements,
                                               (MethodInfo *)0x0);
                          pUVar20 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                          Utility_CoroutineWithData___ctor
                                    (pUVar20,(UnityEngine_MonoBehaviour_o *)pCVar7,pSVar19,(MethodInfo *)0x0);
                          (__this->fields)._cwd_5__7 = pUVar20;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,pUVar20);
                          pUVar20 = (__this->fields)._cwd_5__7;
                          if (pUVar20 != (Utility_CoroutineWithData_o *)0x0) {
                            pUVar8 = (pUVar20->fields)._Coroutine_k__BackingField;
                            (__this->fields).__2__current = (Il2CppObject *)pUVar8;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar8);
                            (__this->fields).__1__state = 0xf;
                            return true;
                          }
                          ThrowNullReferenceException();
                        }
                        ThrowNullReferenceException();
                      }
                    }
                    (__this->fields)._conditionalState_5__2 = 4;
                  }
                }
              }
            }
label_1820ee96a:
            (__this->fields)._conditional_5__6 = (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._conditional_5__6,(void *)0x0);
          }
        }
        else {
          CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
                    (__this_00,(__this->fields).classInstance,(__this->fields).localVariables,pCVar27,
                     (MethodInfo *)0x0);
        }
      }
label_1820edf12:
      pCVar9 = (__this->fields)._statement_5__4;
      if (pCVar9 == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
label_1820edf3f:
        (__this->fields)._conditionalState_5__2 = 0;
      }
      else {
        pCVar10 = pCVar9->klass;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
        if (((pCVar10->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) goto label_1820edf3f;
      }
      (__this->fields)._statement_5__4 = (CustomLogic_CustomLogicBaseAst_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._statement_5__4,(void *)0x0);
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally1(__this,(MethodInfo *)0x0);
    (__this->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap2.fields._index = 0;
    (__this->fields).__7__wrap2.fields._version = 0;
    (__this->fields).__7__wrap2.fields._current = (CustomLogic_CustomLogicBaseAst_o *)0x0;
    bVar18 = false;
    break;
  case 1:
    (__this->fields).__1__state = -3;
    goto label_1820edc8d;
  default:
    (__this->fields).__1__state = -3;
    goto label_1820edf12;
  case 5:
    (__this->fields).__1__state = -3;
    fVar28 = (__this->fields)._time_5__5 - 0.1;
label_1820ee344:
    (__this->fields)._time_5__5 = fVar28;
    if (0.0 < (__this->fields)._time_5__5) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene == false) {
        pPVar24 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar24,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar24;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar24);
        (__this->fields).__1__state = 5;
        return true;
      }
    }
    goto label_1820ee3e8;
  case 6:
    (__this->fields).__1__state = -3;
label_1820ee3e8:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 7;
    bVar18 = true;
    break;
  case 8:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    (__this->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 9;
    bVar18 = true;
    break;
  case 9:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 == (Il2CppObject *)0x0) {
label_1820ed52d:
      (__this->fields)._conditionalState_5__2 = 1;
label_1820ed534:
      (__this->fields)._cwd_5__7 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,(void *)0x0);
      goto label_1820ee96a;
    }
    pIVar3 = pIVar21->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) {
        pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
        if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820ed52d;
      }
    }
    goto label_1820edc8d;
  case 10:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    (__this->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 0xb;
    bVar18 = true;
    break;
  case 0xb:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar21->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) {
label_1820ed632:
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
        (__this->fields).__1__state = 0xc;
        return true;
      }
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820ed632;
    }
    goto label_1820ed67c;
  case 0xc:
    (__this->fields).__1__state = -3;
label_1820ed67c:
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 == (Il2CppObject *)0x0) {
label_1820ed6fc:
      (__this->fields)._cwd_5__7 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,(void *)0x0);
      goto label_1820ed713;
    }
    pIVar3 = pIVar21->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) goto label_1820ed6fc;
    }
    goto label_1820edc8d;
  case 0xd:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    (__this->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 0xe;
    bVar18 = true;
    break;
  case 0xe:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 == (Il2CppObject *)0x0) {
label_1820ed986:
      (__this->fields)._cwd_5__7 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,(void *)0x0);
      (__this->fields)._conditionalState_5__2 = 0;
      goto label_1820ee96a;
    }
    pIVar3 = pIVar21->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) {
        pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
        if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820ed986;
      }
    }
    goto label_1820edc8d;
  case 0xf:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    (__this->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 0x10;
    bVar18 = true;
    break;
  case 0x10:
    (__this->fields).__1__state = -3;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 == (Il2CppObject *)0x0) {
label_1820edad0:
      (__this->fields)._conditionalState_5__2 = 3;
      goto label_1820ed534;
    }
    pIVar3 = pIVar21->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) {
        pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
        if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820edad0;
      }
    }
    goto label_1820edc8d;
  case 0x11:
    (__this->fields).__1__state = -4;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    (__this->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 0x12;
    bVar18 = true;
    break;
  case 0x12:
    (__this->fields).__1__state = -4;
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar21->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) {
label_1820edbb6:
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
        (__this->fields).__1__state = 0x13;
        return true;
      }
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820edbb6;
    }
    goto label_1820edc00;
  case 0x13:
    (__this->fields).__1__state = -4;
label_1820edc00:
    pUVar20 = (__this->fields)._cwd_5__7;
    if (pUVar20 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar21 = (pUVar20->fields).Result;
    if (pIVar21 == (Il2CppObject *)0x0) {
label_1820edcc6:
      (__this->fields)._cwd_5__7 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__7,(void *)0x0);
      goto label_1820edce0;
    }
    pIVar3 = pIVar21->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      pIVar3 = ((((__this->fields)._cwd_5__7)->fields).Result)->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) goto label_1820edcc6;
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally2(__this,(MethodInfo *)0x0);
label_1820edc8d:
    bVar18 = false;
    if (Il2CppMethodInitialized_184346a1b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
      Il2CppMethodInitialized_184346a1b = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
  }
  return bVar18;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally1 (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x1820ef070

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally1
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    Il2CppMethodInitialized_184346a1b = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$<>m__Finally2
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally2 (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x1820ef0c0

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally2
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    Il2CppMethodInitialized_184346a1c = '\x01';
  }
  (__this->fields).__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap8,
             MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x1820eeef0

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor(CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_IDisposable_Dispose (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_IDisposable_Dispose(CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, MethodInfo* method)

{
  return;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicEvaluator__OnSecond_d__18__MoveNext (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x1820ef110
// eh: try 0x1820ef390..0x1820ef41d -> pad 0x183317d50 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ef41d: lea rcx, [rsp + 0x38]
// asm:   0x1820ef422: call 0x1803579a0  ; il2cpp_runtime_helper_1803579a0()
// asm:   0x1820ef427: call 0x1804170c0  ; il2cpp_runtime_helper_1804170c0()
// asm:   0x183317d50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317d55: push rbp
// asm:   0x183317d56: sub rsp, 0x30
// asm:   0x183317d5a: mov rbp, rdx
// asm:   0x183317d5d: mov rdx, qword ptr [rbp + 0x30]
// asm:   0x183317d61: mov rdx, qword ptr [rdx]
// asm:   0x183317d64: lea rcx, [rbp + 0x38]
// asm:   0x183317d68: call 0x180027830  ; il2cpp_runtime_helper_180027830()
// asm:   0x183317d6d: nop 
// asm:   0x183317d6e: movabs rax, 0
// asm:   0x183317d78: add rsp, 0x30
// asm:   0x183317d7c: pop rbp
// asm:   0x183317d7d: ret 

bool CustomLogic_CustomLogicEvaluator__OnSecond_d__18__MoveNext
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *__this_02;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_03;
  bool bVar2;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_04;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_06;
  float local_res8 [2];
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_184346a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin_40ae248
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin_40ae328
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_CustomLogicNetworkViewBuiltin_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"OnSecond");
    il2cpp_codegen_initialize_runtime_metadata(&"SyncCurrentTimeRPC");
    Il2CppMethodInitialized_184346a1d = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this_00,"OnSecond",(System_Object_array *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = (__this_00->fields).CurrentTime;
      pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"SyncCurrentTimeRPC",1,parameters,(MethodInfo *)0x0);
          __this_02 = (__this_00->fields).IdToNetworkView;
          if ((__this_02 != (System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *)0x0
              ) && (__this_05 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                                           (MethodInfo_13C6500 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Keys
                                          ),
                   __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
          {
            System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_50,__this_05,
                       (MethodInfo_F1E550 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_CustomLogicNetworkViewBuiltin_GetEnumera
                      );
            local_38 = (undefined1  [8])local_50._0_8_;
            pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
            local_28 = local_40;
            local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
            while (bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                       *)local_38,
                                      (MethodInfo_15638A0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin_40ae248
                                     ), bVar2) {
              __this_03 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                          (__this_00->fields).IdToNetworkView;
              if (__this_03 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_06 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                          System_Collections_Generic_Dictionary_int__ulong___get_Item
                                    (__this_03,(int32_t)local_28,
                                     (MethodInfo_14156F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                                    );
              if (__this_06 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
                ThrowNullReferenceException();
              }
              CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond(__this_06,(MethodInfo *)0x0);
            }
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin
                      );
            goto label_1820ef1e7;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1820ef1e7:
  __this_04 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_04,1.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_04);
  (__this->fields).__1__state = 1;
  return true;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x1820ef440

void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator$$Start
// il2cpp: void CustomLogic_CustomLogicEvaluator__Start (CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x1820e2c90
// eh: try 0x1820e2f29..0x1820e2fc0 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e2fc0..0x1820e31a7 -> pad 0x18333e860 catch Il2CppExceptionWrapper
// eh: try 0x1820e31a7..0x1820e3227 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3227..0x1820e3244 -> pad 0x18333e860 catch Il2CppExceptionWrapper
// eh: try 0x1820e3244..0x1820e32d9 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e32d9..0x1820e35ce -> pad 0x18333e8c0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820e35ce..0x1820e364e -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e364e..0x1820e36a4 -> pad 0x18333e890 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820e36a4..0x1820e3750 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3750..0x1820e379e -> pad 0x18333e8f0 catch Il2CppExceptionWrapper
// eh: try 0x1820e379e..0x1820e3840 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3840..0x1820e3961 -> pad 0x18333e950 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820e3961..0x1820e3a10 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3a10..0x1820e3a3d -> pad 0x183319d00 catch Il2CppExceptionWrapper
// eh: try 0x1820e3a3d..0x1820e3b63 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3be4..0x1820e3c2e -> pad 0x18333e860 catch Il2CppExceptionWrapper
// eh: try 0x1820e3c2e..0x1820e3c34 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3c34..0x1820e3c97 -> pad 0x18333e890 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820e3c97..0x1820e3c9d -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3c9d..0x1820e3ca3 -> pad 0x18333e8f0 catch Il2CppExceptionWrapper
// eh: try 0x1820e3ca3..0x1820e3ca9 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820e3ca9..0x1820e3cbf -> pad 0x18333e920 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820e3cbf..0x1820e3d10 -> pad 0x18333e980 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 201 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e2fbd: nop dword ptr [rax]
// asm:   0x1820e31a7: jmp 0x1820e308b
// asm:   0x1820e3235: jmp 0x1820e308b
// asm:   0x1820e324b: mov rdx, qword ptr [rip + 0x1fd59ae]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x1820e3252: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820e3257: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e325c: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820e3261: test rcx, rcx
// asm:   0x1820e3264: jne 0x1820e3c2e
// asm:   0x1820e326a: xor r15d, r15d
// asm:   0x1820e326d: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e35ce: jmp 0x1820e34aa
// asm:   0x1820e365c: jmp 0x1820e34aa
// asm:   0x1820e3675: mov rdx, qword ptr [rip + 0x1fd5584]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x1820e367c: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e3681: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e3686: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e368b: test rcx, rcx
// asm:   0x1820e368e: jne 0x1820e3c82
// asm:   0x1820e3694: xor r15d, r15d
// asm:   0x1820e3697: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e369f: jmp 0x1820e32d9
// asm:   0x1820e36b7: mov rdx, qword ptr [rip + 0x1fd6a42]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
// asm:   0x1820e36be: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820e36c3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e36c8: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820e36cd: test rcx, rcx
// asm:   0x1820e36d0: jne 0x1820e3c97
// asm:   0x1820e36d6: xor r15d, r15d
// asm:   0x1820e36d9: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e37af: mov rdx, qword ptr [rip + 0x1fd6bea]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820e37b6: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e37bb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e37c0: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e37c5: test rcx, rcx
// asm:   0x1820e37c8: jne 0x1820e3ca3
// asm:   0x1820e37ce: xor r15d, r15d
// asm:   0x1820e37d1: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e383d: nop dword ptr [rax]
// asm:   0x1820e3932: mov rdx, qword ptr [rip + 0x1fc7e2f]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
// asm:   0x1820e3939: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e393e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e3943: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e3948: test rcx, rcx
// asm:   0x1820e394b: jne 0x1820e3caf
// asm:   0x1820e3951: xor r15d, r15d
// asm:   0x1820e3954: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e395c: jmp 0x1820e3840
// asm:   0x1820e3974: mov rdx, qword ptr [rip + 0x1fd25e5]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
// asm:   0x1820e397b: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820e3980: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e3985: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820e398a: test rcx, rcx
// asm:   0x1820e398d: jne 0x1820e3cbf
// asm:   0x1820e3993: xor r15d, r15d
// asm:   0x1820e3996: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e3a4e: mov rdx, qword ptr [rip + 0x1fd694b]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820e3a55: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e3a5a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e3a5f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e3a64: test rcx, rcx
// asm:   0x1820e3a67: jne 0x1820e3cc4
// asm:   0x1820e3a6d: xor r15d, r15d
// asm:   0x1820e3a70: mov r13, qword ptr [rsp + 0x180]
// asm:   0x1820e3b65: mov eax, dword ptr [rsp + 0xb8]
// asm:   0x1820e3b6c: dec eax
// asm:   0x1820e3b6e: movsxd rcx, eax
// asm:   0x1820e3b71: mov rcx, qword ptr [rsp + rcx*8 + 0xb0]
// asm:   0x1820e3b79: test rcx, rcx
// asm:   0x1820e3b7c: je 0x1820e3bde
// asm:   0x1820e3b7e: mov rax, qword ptr [rcx]
// asm:   0x1820e3b81: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820e3b88: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820e3b8e: mov rbx, rax
// asm:   0x1820e3b91: lea rcx, [rip + 0x1fb0c80]  ; "Custom logic runtime error: "
// asm:   0x1820e3b98: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820e3b9d: mov rcx, rax
// asm:   0x1820e3ba0: xor r8d, r8d
// asm:   0x1820e3ba3: mov rdx, rbx
// asm:   0x1820e3ba6: call 0x181969e50  ; System_String__Concat()
// asm:   0x1820e3bab: mov rdx, rax
// asm:   0x1820e3bae: xor r9d, r9d
// asm:   0x1820e3bb1: mov r8b, 1
// asm:   0x1820e3bb4: mov rcx, qword ptr [rsp + 0x180]
// asm:   0x1820e3bbc: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820e3bde: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1820e3c2e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e3c82: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e3c97: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e3ca3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e3caf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e3cbf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e3cc4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183319d00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319d05: push rbp
// asm:   0x183319d06: sub rsp, 0x30
// asm:   0x183319d0a: mov rbp, rdx
// asm:   0x183319d0d: mov rax, qword ptr [rbp + 0x140]
// asm:   0x183319d14: mov rcx, qword ptr [rax]
// asm:   0x183319d17: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183319d1b: movabs rax, 0
// asm:   0x183319d25: add rsp, 0x30
// asm:   0x183319d29: pop rbp
// asm:   0x183319d2a: ret 
// asm:   0x18333e860: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e865: push rbp
// asm:   0x18333e866: sub rsp, 0x30
// asm:   0x18333e86a: mov rbp, rdx
// asm:   0x18333e86d: mov rax, qword ptr [rbp + 0x110]
// asm:   0x18333e874: mov rcx, qword ptr [rax]
// asm:   0x18333e877: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333e87b: movabs rax, 0
// asm:   0x18333e885: add rsp, 0x30
// asm:   0x18333e889: pop rbp
// asm:   0x18333e88a: ret 
// asm:   0x18333e890: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e895: push rbp
// asm:   0x18333e896: sub rsp, 0x30
// asm:   0x18333e89a: mov rbp, rdx
// asm:   0x18333e89d: mov rax, qword ptr [rbp + 0x118]
// asm:   0x18333e8a4: mov rcx, qword ptr [rax]
// asm:   0x18333e8a7: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333e8ab: movabs rax, 0
// asm:   0x18333e8b5: add rsp, 0x30
// asm:   0x18333e8b9: pop rbp
// asm:   0x18333e8ba: ret 
// asm:   0x18333e8c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e8c5: push rbp
// asm:   0x18333e8c6: sub rsp, 0x30
// asm:   0x18333e8ca: mov rbp, rdx
// asm:   0x18333e8cd: mov rax, qword ptr [rbp + 0x120]
// asm:   0x18333e8d4: mov rcx, qword ptr [rax]
// asm:   0x18333e8d7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333e8db: movabs rax, 0
// asm:   0x18333e8e5: add rsp, 0x30
// asm:   0x18333e8e9: pop rbp
// asm:   0x18333e8ea: ret 
// asm:   0x18333e8f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e8f5: push rbp
// asm:   0x18333e8f6: sub rsp, 0x30
// asm:   0x18333e8fa: mov rbp, rdx
// asm:   0x18333e8fd: mov rax, qword ptr [rbp + 0x128]
// asm:   0x18333e904: mov rcx, qword ptr [rax]
// asm:   0x18333e907: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333e90b: movabs rax, 0
// asm:   0x18333e915: add rsp, 0x30
// asm:   0x18333e919: pop rbp
// asm:   0x18333e91a: ret 
// asm:   0x18333e920: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e925: push rbp
// asm:   0x18333e926: sub rsp, 0x30
// asm:   0x18333e92a: mov rbp, rdx
// asm:   0x18333e92d: mov rax, qword ptr [rbp + 0x130]
// asm:   0x18333e934: mov rcx, qword ptr [rax]
// asm:   0x18333e937: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333e93b: movabs rax, 0
// asm:   0x18333e945: add rsp, 0x30
// asm:   0x18333e949: pop rbp
// asm:   0x18333e94a: ret 
// asm:   0x18333e950: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e955: push rbp
// asm:   0x18333e956: sub rsp, 0x30
// asm:   0x18333e95a: mov rbp, rdx
// asm:   0x18333e95d: mov rax, qword ptr [rbp + 0x138]
// asm:   0x18333e964: mov rcx, qword ptr [rax]
// asm:   0x18333e967: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333e96b: movabs rax, 0
// asm:   0x18333e975: add rsp, 0x30
// asm:   0x18333e979: pop rbp
// asm:   0x18333e97a: ret 
// asm:   0x18333e980: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e985: push rbx
// asm:   0x18333e986: push rbp
// asm:   0x18333e987: push rdi
// asm:   0x18333e988: sub rsp, 0x30
// asm:   0x18333e98c: mov rbp, rdx
// asm:   0x18333e98f: mov rdi, qword ptr [rbp + 0x148]
// asm:   0x18333e996: mov rax, qword ptr [rdi]
// asm:   0x18333e999: mov rbx, qword ptr [rax]
// asm:   0x18333e99c: lea rcx, [rip + 0xd3a5b5]  ; TypeInfo_System_Exception
// asm:   0x18333e9a3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e9a8: mov rcx, rax
// asm:   0x18333e9ab: mov rdx, rbx
// asm:   0x18333e9ae: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e9b3: test al, al
// asm:   0x18333e9b5: mov rax, qword ptr [rdi]
// asm:   0x18333e9b8: je 0x18333e9db
// asm:   0x18333e9ba: movsxd rcx, dword ptr [rbp + 0xb8]
// asm:   0x18333e9c1: mov qword ptr [rbp + rcx*8 + 0xb0], rax
// asm:   0x18333e9c9: inc dword ptr [rbp + 0xb8]
// asm:   0x18333e9cf: movabs rax, 0
// asm:   0x18333e9d9: jmp 0x18333e9f6
// asm:   0x18333e9db: mov qword ptr [rbp + 0x108], rax
// asm:   0x18333e9e2: lea rdx, [rip + 0xc9d59f]
// asm:   0x18333e9e9: lea rcx, [rbp + 0x108]
// asm:   0x18333e9f0: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e9f6: add rsp, 0x30
// asm:   0x18333e9fa: pop rdi
// asm:   0x18333e9fb: pop rbp
// asm:   0x18333e9fc: pop rbx
// asm:   0x18333e9fd: ret 

void CustomLogic_CustomLogicEvaluator__Start
               (CustomLogic_CustomLogicEvaluator_o *__this,
               System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings
               ,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar3;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *__this_00;
  CustomLogic_CustomLogicManager_o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  bool bVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar7;
  Settings_BaseSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *routine;
  System_Collections_Generic_Dictionary_string__object__o *pSVar12;
  undefined1 local_148 [8];
  undefined1 local_140 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_130;
  undefined8 local_128;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_100;
  undefined1 local_f8 [8];
  uint64_t uStack_f0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_e8;
  undefined1 local_e0 [8];
  uint64_t uStack_d8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d0;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  uint64_t uStack_b0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a8;
  undefined1 local_a0 [8];
  uint64_t uStack_98;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_90;
  undefined1 local_88 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  
  if (Il2CppMethodInitialized_1843469db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c38f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6040
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab848
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab928
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba560
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6120
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_g
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
              );
    il2cpp_codegen_initialize_runtime_metadata(&"OnGameStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_1843469db = '\x01';
  }
  local_f8 = (undefined1  [8])0x0;
  uStack_f0 = 0;
  local_e8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8 = (undefined1  [8])0x0;
  uStack_b0 = 0;
  local_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e0 = (undefined1  [8])0x0;
  uStack_d8 = 0;
  local_d0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0 = (undefined1  [8])0x0;
  uStack_98 = 0;
  local_90 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88 = (undefined1  [8])0x0;
  pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0 = 0;
  CustomLogic_CustomLogicEvaluator__Init(__this,(MethodInfo *)0x0);
  (__this->fields).CurrentTime = 0.0;
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar11,(Il2CppObject *)"Main",
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                     );
  if (modeSettings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
           System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)modeSettings,
                      (MethodInfo_13C6500 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
  if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_140,
             pSVar7,(MethodInfo_F1E4D0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
            );
  local_f8 = (undefined1  [8])local_140._0_8_;
  uStack_f0 = local_140._8_8_;
  local_e8 = local_130;
  local_128 = 0;
  local_120 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8;
label_1820e2fc0:
  bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_f8,(MethodInfo_156BDD0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                    );
  pSVar4 = local_e8;
  if (bVar5) {
    pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)modeSettings,
                        (Il2CppObject *)local_e8,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (pSVar8 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        pSVar2 = pSVar8->klass;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting
           )) {
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
          if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar11,(Il2CppObject *)pSVar4,(*(uint64_t *)((char *)pSVar8 + 0x20)),
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          goto label_1820e2fc0;
        }
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
        {
          bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting
             )) goto label_1820e2fc0;
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          pSVar12 = (pCVar6->fields).Variables;
          local_148[0] = *(undefined1 *)((longlong)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 1);
          pIVar9 = il2cpp_value_box(g_data_184354de8,local_148);
          if (pSVar12 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            ThrowNullReferenceException();
          }
        }
        else {
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
             ) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          pSVar12 = (pCVar6->fields).Variables;
          local_114 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4);
          pIVar9 = il2cpp_value_box(g_data_184354e08,&local_114);
          if (pSVar12 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            ThrowNullReferenceException();
          }
        }
      }
      else {
        if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
        }
        pSVar12 = (pCVar6->fields).Variables;
        local_118 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4);
        pIVar9 = il2cpp_value_box(g_data_184354e38,&local_118);
        if (pSVar12 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar12,(Il2CppObject *)pSVar4,
                 pIVar9,(MethodInfo_147A7F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    }
    goto label_1820e2fc0;
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8,
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
            );
  pSVar3 = (__this->fields)._addonClasses;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
           System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                      (MethodInfo_13C6500 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys
                     );
  if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_140,
             pSVar7,(MethodInfo_F1E4D0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
            );
  local_b8 = (undefined1  [8])local_140._0_8_;
  uStack_b0 = local_140._8_8_;
  local_a8 = local_130;
  local_128 = 0;
  local_120 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8;
label_1820e32e1:
  do {
    bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_b8,(MethodInfo_156BDD0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
                      );
    pSVar4 = local_a8;
    if (!bVar5) {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (local_120,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
                );
      pSVar3 = (__this->fields)._staticClasses;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
               System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                          (MethodInfo_13C65A0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                         );
      if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_110
                 ,pSVar7,(MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                );
      local_e0 = (undefined1  [8])local_110._0_8_;
      uStack_d8 = local_110._8_8_;
      local_d0 = local_100;
      local_140._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_140._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e0;
      while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                               ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                 *)local_e0,
                                (MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                               ), pSVar4 = local_d0, bVar5) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (__this,(CustomLogic_CustomLogicClassInstance_o *)local_d0,"Init",
                   (System_Object_array *)0x0,0,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          ThrowNullReferenceException();
        }
        *(bool *)((longlong)&(pSVar4->fields)._buckets + 1) = true;
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e0,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                );
      __this_00 = (__this->fields)._namespacedStaticClasses;
      if (__this_00 ==
          (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
           *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
               System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                          (MethodInfo_13C65A0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c38f0
                         );
      if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_110
                 ,pSVar7,(MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
                );
      local_a0 = (undefined1  [8])local_110._0_8_;
      uStack_98 = local_110._8_8_;
      local_90 = local_100;
      local_128 = 0;
      local_120 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0;
      while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                               ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                 *)local_a0,
                                (MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6040
                               ), bVar5) {
        if (local_90 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                           (local_90,(MethodInfo_13C65A0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
                           );
        if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_110,pSVar7,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
                  );
        local_88 = (undefined1  [8])local_110._0_8_;
        pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_110._8_8_;
        local_78 = local_100;
        local_140._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_140._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
        while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                   *)local_88,
                                  (MethodInfo_155CFB0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab848
                                 ), pSVar4 = local_78, bVar5) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this,(CustomLogic_CustomLogicClassInstance_o *)local_78,"Init",
                     (System_Object_array *)0x0,0,(MethodInfo *)0x0);
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            ThrowNullReferenceException();
          }
          *(undefined1 *)((longlong)&(pSVar4->fields)._buckets + 1) = 1;
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
                  );
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                (local_120,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
                );
      pSVar3 = (__this->fields)._addonClasses;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
               System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                          (MethodInfo_13C65A0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                         );
      if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_110
                 ,pSVar7,(MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                );
      local_e0 = (undefined1  [8])local_110._0_8_;
      uStack_d8 = local_110._8_8_;
      local_d0 = local_100;
      local_140._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_140._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e0;
      while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                               ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                 *)local_e0,
                                (MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                               ), bVar5) {
        CustomLogic_CustomLogicEvaluator__AddCallbacks
                  (__this,(CustomLogic_CustomLogicClassInstance_o *)local_d0,(MethodInfo *)0x0);
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e0,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                );
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                (__this,"Init",(System_Object_array *)0x0,(MethodInfo *)0x0);
      pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
      if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar11,(Il2CppObject *)"Main",
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                         );
      CustomLogic_CustomLogicEvaluator__AddCallbacks(__this,pCVar6,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                (__this,"OnGameStart",(System_Object_array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
      if (Il2CppMethodInitialized_1843469ec == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
        Il2CppMethodInitialized_1843469ec = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      if (routine == (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *)0x0) {
        ThrowNullReferenceException();
      }
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      if (__this_01 == (CustomLogic_CustomLogicManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      return;
    }
  } while ((addonSettings ==
            (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) ||
          (bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)addonSettings,
                              (Il2CppObject *)local_a8,
                              (MethodInfo_1455450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
                             ), !bVar5));
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
  if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar11,(Il2CppObject *)pSVar4,
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                     );
  pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
            System_Collections_Generic_Dictionary_object__object___get_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                       (Il2CppObject *)pSVar4,
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                      );
  if (pSVar10 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
           System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                     (pSVar10,(MethodInfo_13C6500 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
  if (pSVar7 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_110,
             pSVar7,(MethodInfo_F1E4D0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
            );
  local_f8 = (undefined1  [8])local_110._0_8_;
  uStack_f0 = local_110._8_8_;
  local_e8 = local_100;
  local_140._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_140._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8;
label_1820e33c0:
  do {
    bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_f8,(MethodInfo_156BDD0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                      );
    pSVar10 = local_e8;
    if (!bVar5) break;
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                         (Il2CppObject *)pSVar4,
                         (MethodInfo_147A5B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                        );
    if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar11,(Il2CppObject *)pSVar10,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (pSVar8 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        pSVar2 = pSVar8->klass;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting
           )) {
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
          if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar11,(Il2CppObject *)pSVar10,(*(uint64_t *)((char *)pSVar8 + 0x20)),
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          goto label_1820e33c0;
        }
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
        {
          bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting
             )) goto label_1820e33c0;
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          pSVar12 = (pCVar6->fields).Variables;
          local_148[0] = *(undefined1 *)((longlong)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 1);
          pIVar9 = il2cpp_value_box(g_data_184354de8,local_148);
          if (pSVar12 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            ThrowNullReferenceException();
          }
        }
        else {
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
             ) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          pSVar12 = (pCVar6->fields).Variables;
          local_118 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4);
          pIVar9 = il2cpp_value_box(g_data_184354e08,&local_118);
          if (pSVar12 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            ThrowNullReferenceException();
          }
        }
      }
      else {
        if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
        }
        pSVar12 = (pCVar6->fields).Variables;
        local_114 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4);
        pIVar9 = il2cpp_value_box(g_data_184354e38,&local_114);
        if (pSVar12 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar12,(Il2CppObject *)pSVar10,
                 pIVar9,(MethodInfo_147A7F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    }
  } while( true );
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8,
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
            );
  goto label_1820e32e1;
}


// CustomLogic.CustomLogicEvaluator$$AddCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__AddCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x1820d55f0
// eh: try 0x1820d5770..0x1820d5872 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d5833: mov rdx, qword ptr [rip + 0x1fe50a6]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
// asm:   0x1820d583a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820d583f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d5844: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820d5849: test rcx, rcx
// asm:   0x1820d584c: jne 0x1820d5872
// asm:   0x1820d5872: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicEvaluator__AddCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *instance,
               MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *__this_01;
  bool bVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_03;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_1843469dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_40ba9c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_40baaa0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
    Il2CppMethodInitialized_1843469dc = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentKey = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar4 = (Il2CppObject *)
             (*(instance->klass->vtable)._6_unknown.methodPtr)
                       (instance,(instance->klass->vtable)._6_unknown.method);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,pIVar4,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if ((pCVar5 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (__this_00 = (pCVar5->fields).Methods,
         __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)0x0))
      {
        __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
                              );
        if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_70,__this_02,
                     (MethodInfo_F1E4D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
                    );
          local_58.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_70._0_8_;
          local_58.fields._index = local_70._8_4_;
          local_58.fields._version = local_70._12_4_;
          local_58.fields._currentKey = local_60;
          local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_70._8_8_ = &local_58;
          while( true ) {
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                              (&local_58,
                               (MethodInfo_156BDD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_40ba9c0
                              );
            pIVar4 = local_58.fields._currentKey;
            if (!bVar3) {
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
                        );
              return;
            }
            __this_01 = (__this->fields)._callbacks;
            if (__this_01 ==
                (System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                               local_58.fields._currentKey,
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
                              );
            if (!bVar3) {
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
              __this_03 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
                         (MethodInfo_92A240 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar2,pIVar4,(Il2CppObject *)__this_03,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_Add
                        );
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,pIVar4,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
                               );
            if (pIVar4 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pIVar4,instance,
                          MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$RemoveCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__RemoveCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x1820e20e0
// eh: try 0x1820e2240..0x1820e2312 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e22dc: mov rdx, qword ptr [rip + 0x1fd85fd]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
// asm:   0x1820e22e3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820e22e8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e22ed: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820e22f2: test rcx, rcx
// asm:   0x1820e22f5: jne 0x1820e2312
// asm:   0x1820e2312: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicEvaluator__RemoveCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *instance,
               MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *__this_01;
  bool bVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_1843469dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_40ba9c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_40baaa0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Remove);
    Il2CppMethodInitialized_1843469dd = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar4 = (Il2CppObject *)
             (*(instance->klass->vtable)._6_unknown.methodPtr)
                       (instance,(instance->klass->vtable)._6_unknown.method);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,pIVar4,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if ((pCVar5 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (__this_00 = (pCVar5->fields).Methods,
         __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)0x0))
      {
        __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
                              );
        if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_60,__this_02,
                     (MethodInfo_F1E4D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
                    );
          local_48.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
          local_48.fields._index = local_60._8_4_;
          local_48.fields._version = local_60._12_4_;
          local_48.fields._currentKey = local_50;
          local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_60._8_8_ = &local_48;
          while( true ) {
            do {
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                (&local_48,
                                 (MethodInfo_156BDD0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_40ba9c0
                                );
              pIVar4 = local_48.fields._currentKey;
              if (!bVar3) {
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
                          );
                return;
              }
              __this_01 = (__this->fields)._callbacks;
              if (__this_01 ==
                  (System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                 local_48.fields._currentKey,
                                 (MethodInfo_1455450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
                                );
            } while (!bVar3);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_03 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar2,pIVar4,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
                                  );
            if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) break;
            bVar3 = System_Collections_Generic_List_object___Contains
                              (__this_03,(Il2CppObject *)instance,
                               (MethodInfo_93FC70 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
            if (bVar3) {
              System_Collections_Generic_List_object___Remove
                        (__this_03,(Il2CppObject *)instance,
                         (MethodInfo_947340 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Remove);
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$OnTick
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnTick (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820e2080

void CustomLogic_CustomLogicEvaluator__OnTick(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843469de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnTick");
    Il2CppMethodInitialized_1843469de = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnTick",(System_Object_array *)0x0,(MethodInfo *)0x0);
  fVar1 = (__this->fields).CurrentTime;
  fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).CurrentTime = fVar2 + fVar1;
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnFrame
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnFrame (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820e1960

void CustomLogic_CustomLogicEvaluator__OnFrame(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843469df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnFrame");
    Il2CppMethodInitialized_1843469df = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnFrame",(System_Object_array *)0x0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnLateFrame
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnLateFrame (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820e19a0

void CustomLogic_CustomLogicEvaluator__OnLateFrame
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843469e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnLateFrame");
    Il2CppMethodInitialized_1843469e0 = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnLateFrame",(System_Object_array *)0x0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnButtonClick
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnButtonClick (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1820e0e20

void CustomLogic_CustomLogicEvaluator__OnButtonClick
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843469e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnButtonClick");
    Il2CppMethodInitialized_1843469e1 = '\x01';
  }
  if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
  }
  parameters = Unity_VisualScripting_ArrayPool_object___New
                         (1,(MethodInfo_157C1E0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (name != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,name);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnButtonClick",parameters,(MethodInfo *)0x0);
    Unity_VisualScripting_ArrayPool_object___Free
              (parameters,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    return;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerSpawn
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerSpawn (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x1820e1eb0

void CustomLogic_CustomLogicEvaluator__OnPlayerSpawn
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843469e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnPlayerSpawn");
    Il2CppMethodInitialized_1843469e2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
  if (obj == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)__this_00,(((parameters->obj).klass)->_1).element_class),
     pIVar1 == (Il2CppObject *)0x0)) {
    pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,__this_00);
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,obj);
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                (__this,"OnPlayerSpawn",parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterSpawn
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterSpawn (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x1820e13d0

void CustomLogic_CustomLogicEvaluator__OnCharacterSpawn
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843469e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterSpawn");
    Il2CppMethodInitialized_1843469e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
  if (obj != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnCharacterSpawn",parameters,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterReloaded
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterReloaded (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x1820e12d0

void CustomLogic_CustomLogicEvaluator__OnCharacterReloaded
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843469e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterReloaded");
    Il2CppMethodInitialized_1843469e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
  if (obj != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnCharacterReloaded",parameters,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterDie
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterDie (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* victim, Characters_BaseCharacter_o* killer, System_String_o* killerName, const MethodInfo* method);
// 0x1820e1140

void CustomLogic_CustomLogicEvaluator__OnCharacterDie
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *victim,
               Characters_BaseCharacter_o *killer,System_String_o *killerName,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843469e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterDie");
    Il2CppMethodInitialized_1843469e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(victim,(MethodInfo *)0x0);
  obj_00 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(killer,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (obj != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    if (obj_00 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)obj_00;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,obj_00);
      if (killerName != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)killerName,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = (Il2CppObject *)killerName;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,killerName);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  (__this,"OnCharacterDie",parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterDamaged
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterDamaged (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* victim, Characters_BaseCharacter_o* killer, System_String_o* killerName, int32_t damage, const MethodInfo* method);
// 0x1820e0f30

void CustomLogic_CustomLogicEvaluator__OnCharacterDamaged
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *victim,
               Characters_BaseCharacter_o *killer,System_String_o *killerName,int32_t damage,
               MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_1843469e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterDamaged");
    Il2CppMethodInitialized_1843469e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(victim,(MethodInfo *)0x0);
  obj_00 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(killer,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (obj != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    if (obj_00 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)obj_00;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,obj_00);
      if (killerName != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)killerName,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = (Il2CppObject *)killerName;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,killerName);
        local_res10[0] = damage;
        pIVar1 = il2cpp_value_box(g_data_184354e08,local_res10);
        if (pIVar1 != (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)parameters->max_length) {
          parameters->m_Items[3] = pIVar1;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar1);
          CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                    (__this,"OnCharacterDamaged",parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnChatInput
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnChatInput (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* message, const MethodInfo* method);
// 0x1820e14d0
// eh: try 0x1820e1773..0x1820e194d -> pad 0x183315b20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e18c9: mov rdx, qword ptr [rip + 0x1fd8ad0]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820e18d0: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820e18d5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e18da: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e18df: test rcx, rcx
// asm:   0x1820e18e2: jne 0x1820e194d
// asm:   0x1820e18e4: mov r12, qword ptr [rsp + 0x30]
// asm:   0x1820e194d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

Il2CppObject *
CustomLogic_CustomLogicEvaluator__OnChatInput
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *message,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *__this_01;
  bool bVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_Object_array *pSVar5;
  char *pcVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 local_res20 [8];
  undefined1 local_58 [16];
  CustomLogic_CustomLogicClassInstance_o *local_48;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_40;
  
  if (Il2CppMethodInitialized_1843469e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba560
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    il2cpp_codegen_initialize_runtime_metadata(&"OnChatInput");
    Il2CppMethodInitialized_1843469e7 = '\x01';
  }
  local_40.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  local_res20[0] = 1;
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res20);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820e1906;
    pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)"Main",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                       );
    bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                      (__this_00,pCVar4,"OnChatInput",(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820e1906;
      pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)"Main",
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                         );
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (pSVar5 == (System_Object_array *)0x0) goto label_1820e1906;
      if ((message != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar5->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)pSVar5->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5->m_Items[0] = (Il2CppObject *)message;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items,message);
      pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,pCVar4,"OnChatInput",pSVar5,0,(MethodInfo *)0x0);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar8 = (Il2CppObject *)0x0;
        if (pIVar3->klass == g_data_184354de8) {
          pIVar8 = pIVar3;
        }
        if (pIVar8 != (Il2CppObject *)0x0) {
          if ((pIVar3->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pcVar6 = il2cpp_object_unbox(pIVar3);
          if (*pcVar6 == '\0') {
            local_res20[0] = 0;
            pIVar3 = il2cpp_value_box(g_data_184354de8,local_res20);
            return pIVar3;
          }
        }
      }
    }
    __this_01 = (__this->fields)._addonClasses;
    if ((__this_01 == (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) ||
       (__this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                               (MethodInfo_13C65A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                              ),
       __this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
label_1820e1906:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
               __this_02,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    local_40.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
    local_40.fields._index = local_58._8_4_;
    local_40.fields._version = local_58._12_4_;
    local_40.fields._currentValue = (Il2CppObject *)local_48;
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = &local_40;
    do {
      do {
        do {
          do {
            bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                              (&local_40,
                               (MethodInfo_155CFB0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                              );
            pIVar8 = local_40.fields._currentValue;
            if (!bVar2) {
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                        );
              return pIVar3;
            }
            if ((CustomLogic_CustomLogicClassInstance_o *)local_40.fields._currentValue ==
                (CustomLogic_CustomLogicClassInstance_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar2 = (*(((CustomLogic_CustomLogicClassInstance_c *)(local_40.fields._currentValue)->klass)->
                      vtable)._4_get_Enabled.methodPtr)
                              (local_40.fields._currentValue,
                               (((CustomLogic_CustomLogicClassInstance_c *)
                                (local_40.fields._currentValue)->klass)->vtable)._4_get_Enabled.method);
          } while ((!bVar2) ||
                  (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                                     (__this_00,(CustomLogic_CustomLogicClassInstance_o *)pIVar8,
                                      "OnChatInput",(MethodInfo *)0x0), !bVar2));
          pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (pSVar5 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((message != (System_String_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)message,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
          if ((int)pSVar5->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[0] = (Il2CppObject *)message;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items,message);
          pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                             (__this_00,(CustomLogic_CustomLogicClassInstance_o *)pIVar8,"OnChatInput"
                              ,pSVar5,0,(MethodInfo *)0x0);
        } while (pIVar8 == (Il2CppObject *)0x0);
        pIVar7 = (Il2CppObject *)0x0;
        if (pIVar8->klass == g_data_184354de8) {
          pIVar7 = pIVar8;
        }
      } while (pIVar7 == (Il2CppObject *)0x0);
      if ((pIVar8->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pcVar6 = il2cpp_object_unbox(pIVar8);
    } while (*pcVar6 != '\0');
    local_res20[0] = 0;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res20);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
  }
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerJoin
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerJoin (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820e1c40

void CustomLogic_CustomLogicEvaluator__OnPlayerJoin
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicUIBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_1843469e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnPlayerJoin");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    Il2CppMethodInitialized_1843469e8 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (__this_01 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)__this_01,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,__this_01);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnPlayerJoin",parameters,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = (CustomLogic_CustomLogicUIBuiltin_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)"UI",
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                            );
      if (__this_02 != (CustomLogic_CustomLogicUIBuiltin_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_02->klass->_2).typeHierarchyDepth) &&
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)) {
          CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin(__this_02,player,(MethodInfo *)0x0);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerLeave
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerLeave (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820e1dc0

void CustomLogic_CustomLogicEvaluator__OnPlayerLeave
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843469e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnPlayerLeave");
    Il2CppMethodInitialized_1843469e9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_00,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,__this_00);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnPlayerLeave",parameters,(MethodInfo *)0x0);
    return;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnNetworkMessage (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* sender, System_String_o* message, double sentServerTimestamp, const MethodInfo* method);
// 0x1820e19e0

void CustomLogic_CustomLogicEvaluator__OnNetworkMessage
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *sender,
               System_String_o *message,double sentServerTimestamp,MethodInfo *method)

{
  System_Object_array *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  double local_res8 [4];
  
  if (Il2CppMethodInitialized_1843469ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkMessage");
    Il2CppMethodInitialized_1843469ea = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,sender,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._networkCallback;
  if (pSVar1 != (System_Object_array *)0x0) {
    if (__this_01 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_01,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items,__this_01);
      pSVar1 = (__this->fields)._networkCallback;
      if (pSVar1 == (System_Object_array *)0x0) goto label_1820e1bfc;
      if (message != (System_String_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar1->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = (Il2CppObject *)message;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,message);
        pSVar1 = (__this->fields)._networkCallback;
        local_res8[0] = sentServerTimestamp;
        pIVar4 = il2cpp_value_box(g_data_184354e40,local_res8);
        if (pSVar1 == (System_Object_array *)0x0) goto label_1820e1bfc;
        if (pIVar4 != (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class);
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
        }
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pIVar4);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._staticClasses;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_1820e1c32:
              ThrowNullReferenceException();
            }
            pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)"Main",
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                               );
            bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,pCVar6,"OnNetworkMessage",(MethodInfo *)0x0);
            if (bVar3) {
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._staticClasses;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_1820e1c32;
              pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)"Main",
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                                 );
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this_00,pCVar6,"OnNetworkMessage",(__this->fields)._networkCallback,0,
                         (MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820e1bfc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetCharacterBuiltin
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x1820de1c0

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
          (Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicHorseBuiltin_o *__this;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_00;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_02;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_03;
  
  if (Il2CppMethodInitialized_1843469eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_1843469eb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
      CustomLogic_CustomLogicHorseBuiltin___ctor(__this,(Characters_Horse_o *)character,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this;
    }
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (character->klass->_2).typeHierarchyDepth) &&
         ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_Human)) {
        CustomLogic_CustomLogicHumanBuiltin___ctor
                  (__this_00,(Characters_Human_o *)character,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_00;
      }
      il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_Human);
    }
    bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
      bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (character->klass->_2).typeHierarchyDepth) &&
         ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
        CustomLogic_CustomLogicTitanBuiltin___ctor
                  (__this_01,(Characters_BasicTitan_o *)character,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_01;
      }
      il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_BasicTitan);
    }
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
      bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
      if ((bVar1 <= (character->klass->_2).typeHierarchyDepth) &&
         ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
        CustomLogic_CustomLogicWallColossalBuiltin___ctor
                  (__this_02,(Characters_WallColossalShifter_o *)character,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_02;
      }
      il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_WallColossalShifter);
    }
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
      bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if ((bVar1 <= (character->klass->_2).typeHierarchyDepth) &&
         ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
        CustomLogic_CustomLogicShifterBuiltin___ctor
                  (__this_03,(Characters_BaseShifter_o *)character,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_03;
      }
      il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_BaseShifter);
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicEvaluator$$OnSecond
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicEvaluator__OnSecond (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820e2010

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicEvaluator__OnSecond(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_1843469ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
    Il2CppMethodInitialized_1843469ec = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicEvaluator$$Init
// il2cpp: void CustomLogic_CustomLogicEvaluator__Init (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820df420
// eh: try 0x1820df821..0x1820e052f -> pad 0x18333e680 (+13 call sites) catch Il2CppExceptionWrapper
// asm: 161 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820df8c2: mov rdx, qword ptr [rip + 0x1fb7daf]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x1820df8c9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820df8ce: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820df8d3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820df8d8: test rcx, rcx
// asm:   0x1820df8db: jne 0x1820e045c
// asm:   0x1820df8e1: xor r14d, r14d
// asm:   0x1820df8e4: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820df95d: nop dword ptr [rax]
// asm:   0x1820dfd46: mov rdx, qword ptr [rip + 0x1fda113]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x1820dfd4d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820dfd52: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820dfd57: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820dfd5c: test rcx, rcx
// asm:   0x1820dfd5f: jne 0x1820e04e6
// asm:   0x1820dfd65: xor r14d, r14d
// asm:   0x1820dfd68: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820dfe2c: mov rdx, qword ptr [rip + 0x1fda2cd]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
// asm:   0x1820dfe33: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820dfe38: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820dfe3d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820dfe42: test rcx, rcx
// asm:   0x1820dfe45: jne 0x1820e04f2
// asm:   0x1820dfe4b: xor r14d, r14d
// asm:   0x1820dfe4e: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820dff1a: mov rdx, qword ptr [rip + 0x1fda47f]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820dff21: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820dff26: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820dff2b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820dff30: test rcx, rcx
// asm:   0x1820dff33: jne 0x1820e04f8
// asm:   0x1820dff39: xor r14d, r14d
// asm:   0x1820dff3c: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820e003d: nop dword ptr [rax]
// asm:   0x1820e00b2: mov rdx, qword ptr [rip + 0x1fcb6af]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
// asm:   0x1820e00b9: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820e00be: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e00c3: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e00c8: test rcx, rcx
// asm:   0x1820e00cb: jne 0x1820e04fe
// asm:   0x1820e00d1: xor r14d, r14d
// asm:   0x1820e00d4: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820e00dc: jmp 0x1820dffb0
// asm:   0x1820e00f4: mov rdx, qword ptr [rip + 0x1fd5e65]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
// asm:   0x1820e00fb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e0100: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e0105: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820e010a: test rcx, rcx
// asm:   0x1820e010d: jne 0x1820e050e
// asm:   0x1820e0113: xor r14d, r14d
// asm:   0x1820e0116: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820e01eb: mov rdx, qword ptr [rip + 0x1fda1ae]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x1820e01f2: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820e01f7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e01fc: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e0201: test rcx, rcx
// asm:   0x1820e0204: jne 0x1820e0514
// asm:   0x1820e020a: xor r14d, r14d
// asm:   0x1820e020d: mov rdi, qword ptr [rsp + 0x1b0]
// asm:   0x1820e0424: mov rdx, qword ptr [rip + 0x1fcf77d]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x1820e042b: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820e0430: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e0435: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e043a: test rcx, rcx
// asm:   0x1820e043d: jne 0x1820e052f
// asm:   0x1820e045c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e04e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e04f2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e04f8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e04fe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e050e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e0514: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e052f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a3c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a3c5: push rbp
// asm:   0x18332a3c6: sub rsp, 0x30
// asm:   0x18332a3ca: mov rbp, rdx
// asm:   0x18332a3cd: mov rax, qword ptr [rbp + 0x140]
// asm:   0x18332a3d4: mov rcx, qword ptr [rax]
// asm:   0x18332a3d7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a3db: movabs rax, 0
// asm:   0x18332a3e5: add rsp, 0x30
// asm:   0x18332a3e9: pop rbp
// asm:   0x18332a3ea: ret 
// asm:   0x18333e680: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e685: push rbp
// asm:   0x18333e686: sub rsp, 0x30
// asm:   0x18333e68a: mov rbp, rdx
// asm:   0x18333e68d: mov rax, qword ptr [rbp + 0x128]
// asm:   0x18333e694: mov rcx, qword ptr [rax]
// asm:   0x18333e697: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333e69b: movabs rax, 0
// asm:   0x18333e6a5: add rsp, 0x30
// asm:   0x18333e6a9: pop rbp
// asm:   0x18333e6aa: ret 
// asm:   0x18333e6b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e6b5: push rbp
// asm:   0x18333e6b6: sub rsp, 0x30
// asm:   0x18333e6ba: mov rbp, rdx
// asm:   0x18333e6bd: mov rax, qword ptr [rbp + 0x130]
// asm:   0x18333e6c4: mov rcx, qword ptr [rax]
// asm:   0x18333e6c7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333e6cb: movabs rax, 0
// asm:   0x18333e6d5: add rsp, 0x30
// asm:   0x18333e6d9: pop rbp
// asm:   0x18333e6da: ret 
// asm:   0x18333e6e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e6e5: push rbp
// asm:   0x18333e6e6: sub rsp, 0x30
// asm:   0x18333e6ea: mov rbp, rdx
// asm:   0x18333e6ed: mov rax, qword ptr [rbp + 0x138]
// asm:   0x18333e6f4: mov rcx, qword ptr [rax]
// asm:   0x18333e6f7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333e6fb: movabs rax, 0
// asm:   0x18333e705: add rsp, 0x30
// asm:   0x18333e709: pop rbp
// asm:   0x18333e70a: ret 
// asm:   0x18333e710: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e715: push rbp
// asm:   0x18333e716: sub rsp, 0x30
// asm:   0x18333e71a: mov rbp, rdx
// asm:   0x18333e71d: mov rax, qword ptr [rbp + 0x148]
// asm:   0x18333e724: mov rcx, qword ptr [rax]
// asm:   0x18333e727: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333e72b: movabs rax, 0
// asm:   0x18333e735: add rsp, 0x30
// asm:   0x18333e739: pop rbp
// asm:   0x18333e73a: ret 
// asm:   0x18333e740: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e745: push rbp
// asm:   0x18333e746: sub rsp, 0x30
// asm:   0x18333e74a: mov rbp, rdx
// asm:   0x18333e74d: mov rax, qword ptr [rbp + 0x150]
// asm:   0x18333e754: mov rcx, qword ptr [rax]
// asm:   0x18333e757: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333e75b: movabs rax, 0
// asm:   0x18333e765: add rsp, 0x30
// asm:   0x18333e769: pop rbp
// asm:   0x18333e76a: ret 
// asm:   0x18333e770: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e775: push rbp
// asm:   0x18333e776: sub rsp, 0x30
// asm:   0x18333e77a: mov rbp, rdx
// asm:   0x18333e77d: mov rax, qword ptr [rbp + 0x158]
// asm:   0x18333e784: mov rcx, qword ptr [rax]
// asm:   0x18333e787: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333e78b: movabs rax, 0
// asm:   0x18333e795: add rsp, 0x30
// asm:   0x18333e799: pop rbp
// asm:   0x18333e79a: ret 
// asm:   0x18333e7a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e7a5: push rbp
// asm:   0x18333e7a6: sub rsp, 0x30
// asm:   0x18333e7aa: mov rbp, rdx
// asm:   0x18333e7ad: mov rax, qword ptr [rbp + 0x160]
// asm:   0x18333e7b4: mov rcx, qword ptr [rax]
// asm:   0x18333e7b7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333e7bb: movabs rax, 0
// asm:   0x18333e7c5: add rsp, 0x30
// asm:   0x18333e7c9: pop rbp
// asm:   0x18333e7ca: ret 

void CustomLogic_CustomLogicEvaluator__Init(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *__this_00;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  System_Object_array *args;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_CustomLogicStartAst_o *pCVar4;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_02;
  CustomLogic_CustomLogicToken_o *pCVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar7;
  System_Collections_Generic_HashSet_object__o *__this_03;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *pSVar8;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_04;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_05;
  Map_MapScriptBaseObject_o *pMVar9;
  Map_MapScriptBaseObject_c *pMVar10;
  int32_t key;
  bool bVar11;
  bool bVar12;
  uint32_t key_00;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar13;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar14;
  int *piVar15;
  CustomLogic_CustomLogicClassInstance_o *pCVar16;
  System_Collections_Generic_Dictionary_CustomLogicSourceType__CustomLogicClassInstance__o *__this_06;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_07;
  UnityEngine_UIElements_TextureId_o local_res18 [2];
  UnityEngine_UIElements_TextureId_o local_res20 [2];
  undefined1 local_168 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_158;
  System_Nullable_CustomLogicSourceType__Fields local_150;
  System_Nullable_CustomLogicSourceType__Fields local_148;
  undefined1 local_140 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_138;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_130;
  undefined1 local_128 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_118;
  undefined1 local_110 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_108;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_100;
  undefined1 local_f8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_f0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_e8;
  undefined1 local_e0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_d8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d0;
  undefined1 local_c8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  undefined1 local_b0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_a8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a0;
  undefined1 local_98 [8];
  uint64_t uStack_90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  
  if (Il2CppMethodInitialized_1843469ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3810
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c38f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c39d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6040
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab848
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab928
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba560
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6120
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40ba020
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_1843469ed = '\x01';
  }
  local_110 = (undefined1  [8])0x0;
  pUStack_108 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_100 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8 = (undefined1  [8])0x0;
  pUStack_f0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_e8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_150.hasValue = false;
  local_150._1_3_ = 0;
  local_150.value = 0;
  local_res20[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_148.hasValue = false;
  local_148._1_3_ = 0;
  local_148.value = 0;
  local_res18[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_e0 = (undefined1  [8])0x0;
  pUStack_d8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_d0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_140 = (undefined1  [8])0x0;
  pUStack_138 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_130 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8 = (undefined1  [8])0x0;
  pUStack_c0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0 = (undefined1  [8])0x0;
  pUStack_a8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_a0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98 = (undefined1  [8])0x0;
  uStack_90 = 0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar2 = (__this->fields)._addonClasses;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Clear);
    __this_00 = (__this->fields).AddonToNetworkView;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_Clear);
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      __this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                  TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
      if (__this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_168,__this_01,
                   (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
        local_110 = (undefined1  [8])local_168._0_8_;
        pUStack_108 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_168._8_8_;
        local_100 = local_158;
        while( true ) {
          bVar11 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_110,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
          pSVar17 = local_100;
          if (!bVar11) break;
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          args = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
          if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
          }
          value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                            ((System_String_o *)pSVar17,args,(MethodInfo *)0x0);
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar3,(Il2CppObject *)pSVar17,(Il2CppObject *)value,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                    );
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_110,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
        pCVar4 = (__this->fields)._start;
        if ((pCVar4 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
           (__this_02 = (pCVar4->fields).Classes,
           __this_02 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0)
           ) {
          pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                              );
          if (pSVar13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_168,pSVar13,
                       (MethodInfo_F1E4D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                      );
            local_f8 = (undefined1  [8])local_168._0_8_;
            pUStack_f0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_168._8_8_;
            local_e8 = local_158;
            while( true ) {
              bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_f8,
                                  (MethodInfo_156BDD0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
                                 );
              pSVar17 = local_e8;
              if (!bVar11) break;
              bVar11 = System_String__op_Equality
                                 ((System_String_o *)local_e8,"Main",(MethodInfo *)0x0);
              if (bVar11) {
                CustomLogic_CustomLogicEvaluator__CreateStaticClass
                          (__this,(System_String_o *)pSVar17,(MethodInfo *)0x0);
              }
              else {
                pCVar4 = (__this->fields)._start;
                if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes;
                if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar3,(Il2CppObject *)pSVar17,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                    );
                if (pCVar14 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar5 = (pCVar14->fields).Token;
                if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar6 = (pCVar5->fields).Value;
                if (pIVar6 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pIVar6,g_data_184354e08);
                }
                piVar15 = il2cpp_object_unbox(pIVar6);
                pCVar4 = (__this->fields)._start;
                if (*piVar15 == 2) {
                  local_150.hasValue = false;
                  local_150._1_3_ = 0;
                  local_150.value = 0;
                  if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar7 = (pCVar4->fields).ClassNamespaces;
                  if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
                  {
                    ThrowNullReferenceException();
                  }
                  bVar11 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                      (Il2CppObject *)pSVar17,local_res20,
                                      (MethodInfo_1461BD0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                     );
                  if (bVar11) {
                    System_Data_SqlTypes_SqlInt32___ctor_ae2660
                              ((System_Data_SqlTypes_SqlInt32_o *)&local_150,
                               (int32_t)local_res20[0].fields.m_Index,
                               MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
                  }
                  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                  }
                  pCVar16 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                                      (__this,(System_String_o *)pSVar17,
                                       TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                                       false,(System_Nullable_CustomLogicSourceType__o)local_150,
                                       (MethodInfo *)0x0);
                  if (pCVar16 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (pCVar16->fields)._Namespace_k__BackingField.fields = local_150;
                  if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
                  }
                  __this_03 = (System_Collections_Generic_HashSet_object__o *)
                              TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
                  if (__this_03 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar11 = System_Collections_Generic_HashSet_object___Contains
                                     (__this_03,(Il2CppObject *)pSVar17,
                                      (MethodInfo_1759E40 *)
                                      MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                  if (bVar11) {
                    pSVar8 = (__this->fields)._namespacedStaticClasses;
                    if (pSVar8 == (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                                   *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar11 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                                        (Il2CppObject *)pSVar17,
                                        (MethodInfo_1455450 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
                                       );
                    if (!bVar11) {
                      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (__this->fields)._namespacedStaticClasses;
                      __this_06 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance
                                            );
                      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                                 (MethodInfo_14421B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
                                );
                      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar3,(Il2CppObject *)pSVar17,(Il2CppObject *)__this_06,
                                 (MethodInfo_147A7F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c39d0
                                );
                    }
                    if (local_150.hasValue != false) {
                      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (__this->fields)._namespacedStaticClasses;
                      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar3,(Il2CppObject *)pSVar17,
                                           (MethodInfo_147A5B0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3810
                                          );
                      key_00 = System_Nullable_uint___get_Value
                                         ((System_Nullable_uint__o *)&local_150,
                                          (MethodInfo_AE29B0 *)
                                          MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
                      if (pSVar17 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                                (pSVar17,key_00,(Il2CppObject *)pCVar16,
                                 (MethodInfo_1455210 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
                                );
                    }
                  }
                  else {
                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._staticClasses;
                    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar3,(Il2CppObject *)pSVar17,(Il2CppObject *)pCVar16,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                              );
                  }
                }
                else {
                  if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes
                  ;
                  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar3,(Il2CppObject *)pSVar17,
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                      );
                  if (pCVar14 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar5 = (pCVar14->fields).Token;
                  if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar6 = (pCVar5->fields).Value;
                  if (pIVar6 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pIVar6,g_data_184354e08);
                  }
                  piVar15 = il2cpp_object_unbox(pIVar6);
                  if (*piVar15 == 3) {
                    local_148.hasValue = false;
                    local_148._1_3_ = 0;
                    local_148.value = 0;
                    pCVar4 = (__this->fields)._start;
                    if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar7 = (pCVar4->fields).ClassNamespaces;
                    if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)
                                  0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar11 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                        (Il2CppObject *)pSVar17,local_res18,
                                        (MethodInfo_1461BD0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                       );
                    if (bVar11) {
                      System_Data_SqlTypes_SqlInt32___ctor_ae2660
                                ((System_Data_SqlTypes_SqlInt32_o *)&local_148,
                                 (int32_t)local_res18[0].fields.m_Index,
                                 MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
                    }
                    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                    }
                    pCVar16 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                                        (__this,(System_String_o *)pSVar17,
                                         TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                                         false,(System_Nullable_CustomLogicSourceType__o)local_148,
                                         (MethodInfo *)0x0);
                    if (pCVar16 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    (pCVar16->fields)._Namespace_k__BackingField.fields = local_148;
                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._addonClasses;
                    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar3,(Il2CppObject *)pSVar17,(Il2CppObject *)pCVar16,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                              );
                  }
                }
              }
            }
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8,
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                      );
            pSVar2 = (__this->fields)._staticClasses;
            if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
              pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                   (MethodInfo_13C6500 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys
                                  );
              if (pSVar13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_168,pSVar13,
                           (MethodInfo_F1E4D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
                          );
                local_e0 = (undefined1  [8])local_168._0_8_;
                pUStack_d8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_168._8_8_;
                local_d0 = local_158;
                while( true ) {
                  bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                     ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                       *)local_e0,
                                      (MethodInfo_156BDD0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
                                     );
                  if (!bVar11) break;
                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._staticClasses;
                  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar3,(Il2CppObject *)local_d0,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                            );
                }
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e0,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
                          );
                pSVar2 = (__this->fields)._staticClasses;
                if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0
                   ) {
                  pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                       (MethodInfo_13C65A0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                                      );
                  if (pSVar13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                  {
                    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                *)local_168,pSVar13,
                               (MethodInfo_F1E4D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                              );
                    local_140 = (undefined1  [8])local_168._0_8_;
                    pUStack_138 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                  local_168._8_8_;
                    local_130 = local_158;
label_1820dfeb1:
                    bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                       ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                         *)local_140,
                                        (MethodInfo_155CFB0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                                       );
                    if (bVar11) {
                      if (local_130 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                      goto code_r0x0001820dfed0;
                      goto label_1820dfefc;
                    }
                    System_Configuration_ConfigurationCollectionAttribute___ctor
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_140,
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                              );
                    pSVar8 = (__this->fields)._namespacedStaticClasses;
                    if (pSVar8 != (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                                   *)0x0) {
                      pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                                           (MethodInfo_13C65A0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c38f0
                                          );
                      if (pSVar13 !=
                          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                    *)local_168,pSVar13,
                                   (MethodInfo_F1E4D0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
                                  );
                        local_c8 = (undefined1  [8])local_168._0_8_;
                        pUStack_c0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                     local_168._8_8_;
                        local_b8 = local_158;
                        while( true ) {
                          bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                               *)local_c8,
                                              (MethodInfo_155CFB0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_40b6040
                                             );
                          if (!bVar11) break;
                          if (local_b8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                              (local_b8,(MethodInfo_13C65A0 *)
                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
                                              );
                          if (pSVar13 ==
                              (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                      *)local_128,pSVar13,
                                     (MethodInfo_F1E4D0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
                                    );
                          local_b0 = (undefined1  [8])local_128._0_8_;
                          pUStack_a8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                       local_128._8_8_;
                          local_a0 = local_118;
                          local_168._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                          local_168._8_8_ =
                               (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b0;
label_1820e0040:
                          bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                               *)local_b0,
                                              (MethodInfo_155CFB0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_40ab848
                                             );
                          if (bVar11) {
                            if (local_a0 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                            goto code_r0x0001820e0065;
                            goto label_1820e0091;
                          }
                          System_Configuration_ConfigurationCollectionAttribute___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b0,
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
                                    );
                        }
                        System_Configuration_ConfigurationCollectionAttribute___ctor
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8,
                                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
                                  );
                        pSVar2 = (__this->fields)._addonClasses;
                        if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o
                                       *)0x0) {
                          pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2
                                               ,(MethodInfo_13C65A0 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                                              );
                          if (pSVar13 !=
                              (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                        *)local_128,pSVar13,
                                       (MethodInfo_F1E4D0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                                      );
                            local_140 = (undefined1  [8])local_128._0_8_;
                            pUStack_138 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                          local_128._8_8_;
                            local_130 = local_118;
                            local_168._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                            local_168._8_8_ =
                                 (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_140;
label_1820e0182:
                            bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                               ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                                 *)local_140,
                                                (MethodInfo_155CFB0 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_40ba480
                                               );
                            if (bVar11) {
                              if (local_130 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                              goto code_r0x0001820e01a1;
                              goto label_1820e01cd;
                            }
                            System_Configuration_ConfigurationCollectionAttribute___ctor
                                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_140
                                       ,
                                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                                      );
                            CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels
                                      (__this,(MethodInfo *)0x0);
                            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                            }
                            __this_04 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                            if (__this_04 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
                              pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o
                                         *)System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                      )__this_04,
                                                      (MethodInfo_13C6500 *)
                                                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys
                                                     );
                              if (pSVar13 !=
                                  (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
                                 ) {
                                System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                            *)local_128,pSVar13,
                                           (MethodInfo_F1E550 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                                          );
                                local_98 = (undefined1  [8])local_128._0_8_;
                                uStack_90 = local_128._8_8_;
                                local_88 = local_118;
                                local_168._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0
                                ;
                                local_168._8_8_ =
                                     (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98;
                                while( true ) {
                                  do {
                                    do {
                                      do {
                                        bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                                                           ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)local_98,
                                                       (MethodInfo_15638A0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                                                       );
                                        if (!bVar11) {
                                          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                      *)local_98,
                                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                                                    );
                                          return;
                                        }
                                        key = (int32_t)local_88;
                                        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_Map_MapLoader);
                                        }
                                        __this_05 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                                                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                                        if (__this_05 ==
                                            (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                                          ThrowNullReferenceException();
                                        }
                                        obj = (Map_MapObject_o *)
                                              System_Collections_Generic_Dictionary_int__ulong___get_Item
                                                        (__this_05,key,
                                                         (MethodInfo_14156F0 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                                       );
                                        if (Il2CppMethodInitialized_1843469f0 == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_Map_MapScriptSceneObject);
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UnityEngine_Object);
                                          Il2CppMethodInitialized_1843469f0 = '\x01';
                                        }
                                        if (obj == (Map_MapObject_o *)0x0) {
                                          ThrowNullReferenceException();
                                        }
                                        pMVar9 = (obj->fields).ScriptObject;
                                      } while (pMVar9 == (Map_MapScriptBaseObject_o *)0x0);
                                      pMVar10 = pMVar9->klass;
                                      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
                                    } while (((pMVar10->_2).typeHierarchyDepth < bVar1) ||
                                            ((pMVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                                             (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject));
                                    __this_07 = CustomLogic_CustomLogicEvaluator__SetupNetworking
                                                          (__this,obj,(MethodInfo *)0x0);
                                    CustomLogic_CustomLogicEvaluator__SetupMapObject
                                              (__this,obj,(MethodInfo *)0x0);
                                    bVar11 = CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                                                       (__this,obj,false,(MethodInfo *)0x0);
                                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                    }
                                    bVar12 = UnityEngine_Object__op_Inequality
                                                       ((UnityEngine_Object_o *)__this_07,
                                                        (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                  } while (!bVar12);
                                  pMVar9 = (obj->fields).ScriptObject;
                                  if (pMVar9 == (Map_MapScriptBaseObject_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  if (__this_07 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) break;
                                  CustomLogic_CustomLogicPhotonSync__Init
                                            (__this_07,(pMVar9->fields).Id,bVar11,(MethodInfo *)0x0);
                                }
                                ThrowNullReferenceException();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
code_r0x0001820e01a1:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((local_130->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_130->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_1820e01cd:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_130,(MethodInfo *)0x0);
  }
  goto label_1820e0182;
code_r0x0001820e0065:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((local_a0->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_a0->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_1820e0091:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_a0,(MethodInfo *)0x0);
  }
  goto label_1820e0040;
code_r0x0001820dfed0:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if (((local_130->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_130->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_1820dfefc:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_130,(MethodInfo *)0x0);
  }
  goto label_1820dfeb1;
}


// CustomLogic.CustomLogicEvaluator$$CreateAddonNetworkChannels
// il2cpp: void CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820d7160
// eh: try 0x1820d73e0..0x1820d774b -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d73dc: nop dword ptr [rax]
// asm:   0x1820d73f9: mov r12, qword ptr [rsp + 0x50]
// asm:   0x1820d73fe: nop 
// asm:   0x1820d76d5: mov rdx, qword ptr [rip + 0x1fc023c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820d76dc: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820d76e1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d76e6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820d76eb: test rcx, rcx
// asm:   0x1820d76ee: jne 0x1820d774b
// asm:   0x1820d774b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool bVar5;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Func_string__string__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_02;
  Map_MapScriptSceneObject_o *__this_03;
  System_String_o *pSVar6;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicPhotonSync_o *__this_04;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_05;
  CustomLogic_CustomLogicClassInstance_o *instance;
  int key;
  undefined1 local_70 [16];
  System_String_o *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  
  if (Il2CppMethodInitialized_1843469ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_c_CreateAddonNetworkChannels_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c);
    il2cpp_codegen_initialize_runtime_metadata(&"CLAddon_");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    Il2CppMethodInitialized_1843469ee = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._addonClasses;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys
                       );
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c);
    }
    __this_01 = TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9__20_0;
    if (__this_01 == (System_Func_string__string__o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar1,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicEvaluator_c_CreateAddonNetworkChannels_b__20_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9__20_0 = __this_01;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9__20_0,__this_01);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_01,
                           (MethodInfo_6C1360 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    __this_02 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
      key = -500000;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
      local_58.fields._index = local_70._8_4_;
      local_58.fields._version = local_70._12_4_;
      local_58.fields._current = (Il2CppObject *)local_60;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = &local_58;
      do {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_58,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pIVar1 = local_58.fields._current;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return;
        }
        while( true ) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar2,key,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (!bVar5) break;
          key = key + -1;
        }
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
        Map_MapScriptSceneObject___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 == (Map_MapScriptSceneObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        (__this_03->fields).Id = key;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        (__this_03->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
        pSVar6 = System_String__Concat_1969e50
                           ("CLAddon_",(System_String_o *)pIVar1,(MethodInfo *)0x0);
        (__this_03->fields).Name = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).Name,pSVar6);
        (__this_03->fields).Asset = "None";
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).Asset,"None");
        (__this_03->fields).Active = false;
        (__this_03->fields).Static = true;
        (__this_03->fields).Visible = false;
        (__this_03->fields).Networked = true;
        if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
        }
        pSVar6 = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
        (__this_03->fields).CollideMode = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).CollideMode,pSVar6);
        if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
        }
        pSVar6 = TypeInfo_Map_MapObjectCollideWith->static_fields->All;
        (__this_03->fields).CollideWith = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).CollideWith,pSVar6);
        mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_03,false,(MethodInfo *)0x0);
        Map_MapLoader__SetParent_1eb01f0(mapObject,(MethodInfo *)0x0);
        CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,mapObject,(MethodInfo *)0x0);
        __this_04 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this,mapObject,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          if (mapObject == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar3 = (mapObject->fields).ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (__this_04 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
            ThrowNullReferenceException();
          }
          CustomLogic_CustomLogicPhotonSync__Init(__this_04,(pMVar3->fields).Id,false,(MethodInfo *)0x0);
        }
        else if (mapObject == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar3 = (mapObject->fields).ScriptObject;
        if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToNetworkView;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar2,(pMVar3->fields).Id,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                          );
        if (bVar5) {
          pMVar3 = (mapObject->fields).ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToNetworkView;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_05 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                      System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar2,(pMVar3->fields).Id,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                                );
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AddonToNetworkView;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar4,pIVar1,(Il2CppObject *)__this_05,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_set_Item
                    );
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          instance = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,pIVar1,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                               );
          if (instance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(instance->fields).Variables;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar4,(Il2CppObject *)"NetworkView",(Il2CppObject *)__this_05,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          if (__this_05 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
                    (__this_05,instance,(MethodInfo *)0x0);
        }
        key = key + -1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x1820dbdb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820dbebf: jmp 0x1820dbed1

void CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_02;
  CustomLogic_CustomLogicClassInstance_o *pCVar2;
  int32_t index;
  
  if (Il2CppMethodInitialized_1843469ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_1843469ef = '\x01';
  }
  __this_00 = (__this->fields)._callbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)methodName,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
                      );
    if (!bVar1) {
      return;
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)methodName,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
                            );
      index = 0;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        do {
          if ((__this_02->fields)._size <= index) {
            return;
          }
          bVar1 = System_String__op_Equality(methodName,"Init",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this_02,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item);
            if (pCVar2 == (CustomLogic_CustomLogicClassInstance_o *)0x0) break;
            if ((pCVar2->fields).Inited == false) goto label_1820dbed1;
          }
          else {
            pCVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this_02,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item);
            if (pCVar2 == (CustomLogic_CustomLogicClassInstance_o *)0x0) break;
            bVar1 = (*(pCVar2->klass->vtable)._4_get_Enabled.methodPtr)
                              (pCVar2,(pCVar2->klass->vtable)._4_get_Enabled.method);
            if (bVar1) {
label_1820dbed1:
              pCVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 (__this_02,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item
                                 );
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this,pCVar2,methodName,parameters,0,(MethodInfo *)0x0);
            }
          }
          index = index + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$LoadMapObjectComponents
// il2cpp: void CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, bool init, const MethodInfo* method);
// 0x1820e0540

void CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
               (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,bool init,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Map_MapScriptBaseObject_c *pMVar3;
  bool rigidbody;
  bool bVar4;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  if (Il2CppMethodInitialized_1843469f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843469f0 = '\x01';
  }
  if (obj != (Map_MapObject_o *)0x0) {
    pMVar2 = (obj->fields).ScriptObject;
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      pMVar3 = pMVar2->klass;
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if ((bVar1 <= (pMVar3->_2).typeHierarchyDepth) &&
         ((pMVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject
         )) {
        __this_00 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this,obj,(MethodInfo *)0x0);
        CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,obj,(MethodInfo *)0x0);
        rigidbody = CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                              (__this,obj,init,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pMVar2 = (obj->fields).ScriptObject;
          if ((pMVar2 == (Map_MapScriptBaseObject_o *)0x0) ||
             (__this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0)) goto label_1820e065a;
          CustomLogic_CustomLogicPhotonSync__Init(__this_00,(pMVar2->fields).Id,rigidbody,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_1820e065a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$LoadRuntimeMapObjectComponents
// il2cpp: bool CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, bool init, const MethodInfo* method);
// 0x1820e0660
// eh: try 0x1820e07a0..0x1820e08ed -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e079e: nop 
// asm:   0x1820e088f: mov rdx, qword ptr [rip + 0x1fab172]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x1820e0896: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820e089b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e08a0: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e08a5: test rcx, rcx
// asm:   0x1820e08a8: jne 0x1820e08ed
// asm:   0x1820e08aa: movzx r14d, byte ptr [rsp + 0xa8]
// asm:   0x1820e08ed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

bool CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
               (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,bool init,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_List_T__o *__this_00;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_01;
  Il2CppObject *script;
  bool bVar4;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  bool bVar5;
  undefined1 local_60 [16];
  Map_MapScriptComponent_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843469f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    Il2CppMethodInitialized_1843469f1 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
    }
    __this_00 = *(System_Collections_Generic_List_T__o **)&(*(uint32_t *)((char *)pMVar2 + 0x80));
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      bVar5 = false;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
        script = local_48.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
          return bVar5;
        }
        pCVar3 = (__this->fields)._start;
        if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((Map_MapScriptComponent_o *)local_48.fields._current == (Map_MapScriptComponent_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (pCVar3->fields).Classes;
        if (__this_01 == (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0
           ) break;
        bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                           (Il2CppObject *)
                           ((Map_MapScriptComponent_Fields *)((longlong)local_48.fields._current + 0x10))->
                           ComponentName,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                          );
        if (bVar4) {
          instance = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                               (__this,((Map_MapScriptComponent_Fields *)((longlong)script + 0x10))->
                                       ComponentName,obj,(Map_MapScriptComponent_o *)script,(MethodInfo *)0x0)
          ;
          Map_MapObject__RegisterComponentInstance(obj,instance,(MethodInfo *)0x0);
          if (init) {
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this,(CustomLogic_CustomLogicClassInstance_o *)instance,"Init",
                       (System_Object_array *)0x0,0,(MethodInfo *)0x0);
            if (instance == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
              ThrowNullReferenceException();
            }
            (instance->fields).Inited = true;
          }
          bVar4 = System_String__op_Equality
                            (((Map_MapScriptComponent_Fields *)((longlong)script + 0x10))->ComponentName,
                             "Rigidbody",(MethodInfo *)0x0);
          if (bVar4) {
            bVar5 = true;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$AddMapObjectComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicEvaluator__AddMapObjectComponent (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, System_String_o* componentName, const MethodInfo* method);
// 0x1820d5880
// eh: try 0x1820d5a90..0x1820d5ea3 -> pad 0x183315f50 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d5c21: mov rdx, qword ptr [rip + 0x1fa3fc8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
// asm:   0x1820d5c28: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820d5c2d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d5c32: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820d5c37: test rcx, rcx
// asm:   0x1820d5c3a: jne 0x1820d5ea3
// asm:   0x1820d5c40: xor r12d, r12d
// asm:   0x1820d5c43: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x1820d5c4b: mov r15, qword ptr [rsp + 0x38]
// asm:   0x1820d5df4: movzx r8d, al
// asm:   0x1820d5df8: mov edx, esi
// asm:   0x1820d5dfa: mov rcx, rdi
// asm:   0x1820d5ea3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315f50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315f55: push rbp
// asm:   0x183315f56: sub rsp, 0x30
// asm:   0x183315f5a: mov rbp, rdx
// asm:   0x183315f5d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183315f61: mov rcx, qword ptr [rax]
// asm:   0x183315f64: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183315f68: movabs rax, 0
// asm:   0x183315f72: add rsp, 0x30
// asm:   0x183315f76: pop rbp
// asm:   0x183315f77: ret 

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,System_String_o *componentName,
          MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_02;
  longlong *plVar3;
  longlong *plVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  Map_MapObject_o *pMVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  Il2CppObject *pIVar8;
  bool bVar9;
  System_Collections_Generic_List_string__o *__this_04;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Map_MapScriptComponent_o *__this_05;
  CustomLogic_CustomLogicPhotonSync_o *__this_06;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  Il2CppClass *klass;
  System_Exception_o *__this_07;
  MethodInfo *lastManagedFrame;
  longlong *plVar13;
  longlong *plVar14;
  int32_t mapObjectId;
  Il2CppObject *local_88;
  System_Collections_Generic_List_string__o *local_80;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_1843469f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_1843469f2 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  local_88 = (Il2CppObject *)0x0;
  pCVar2 = (__this->fields)._start;
  if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (__this_00 = (pCVar2->fields).Classes,
     __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0)) {
    bVar9 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)componentName,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (!bVar9) {
      pSVar12 = il2cpp_codegen_get_runtime_metadata(&" found");
      pSVar11 = il2cpp_codegen_get_runtime_metadata(&"No component named ");
      pSVar12 = System_String__Concat_1969b70(pSVar11,componentName,pSVar12,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_07 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_07,pSVar12,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicEvaluator_AddMapObjectComponent);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_07,lastManagedFrame);
    }
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pCVar2 = (__this->fields)._start;
    if ((((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes,
         __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
        (pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_01,(Il2CppObject *)componentName,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                             ), pCVar10 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0)) &&
       (__this_02 = (pCVar10->fields).Assignments,
       __this_02 != (System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *)0x0)) {
      local_80 = __this_04;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator);
      local_58 = (undefined1  [8])local_70._0_8_;
      pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
      local_48 = local_60;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
label_1820d5a90:
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
                        );
      pIVar8 = local_48;
      if (bVar9) {
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar3 = local_48[1].monitor;
        if (plVar3 != (longlong *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(CustomLogic_CustomLogicVariableExpressionAst_c **)
               (*(longlong *)(*plVar3 + 200) + -8 + (ulonglong)bVar1 * 8) ==
              TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
            plVar4 = local_48[2].monitor;
            if (plVar4 != (longlong *)0x0) {
              bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
              if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
                 (*(CustomLogic_CustomLogicPrimitiveExpressionAst_c **)
                   (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)bVar1 * 8) ==
                  TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
                bVar9 = System_String__op_Equality
                                  ((System_String_o *)plVar3[3],"Description",(MethodInfo *)0x0);
                if (bVar9) goto label_1820d5a90;
                if ((System_String_o *)plVar3[3] == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_String__EndsWith
                                  ((System_String_o *)plVar3[3],"Tooltip",(MethodInfo *)0x0);
                if ((bVar9) && (plVar14 = (longlong *)plVar4[3], plVar14 != (longlong *)0x0)) {
                  plVar13 = (longlong *)0x0;
                  if (*plVar14 == g_data_184354e50) {
                    plVar13 = plVar14;
                  }
                  if (plVar13 != (longlong *)0x0) goto label_1820d5a90;
                }
                if ((System_String_o *)plVar3[3] == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_String__EndsWith
                                  ((System_String_o *)plVar3[3],"Dropbox",(MethodInfo *)0x0);
                if ((bVar9) && (plVar4 = (longlong *)plVar4[3], plVar4 != (longlong *)0x0)) {
                  plVar14 = (longlong *)0x0;
                  if (*plVar4 == g_data_184354e50) {
                    plVar14 = plVar4;
                  }
                  if (plVar14 != (longlong *)0x0) goto label_1820d5a90;
                }
              }
            }
            pSVar12 = (System_String_o *)plVar3[3];
            pSVar11 = CustomLogic_CustomLogicUtils__SerializeAst(pIVar8[2].monitor,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_1969b70(pSVar12,":",pSVar11,(MethodInfo *)0x0);
            if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_04,pSVar12);
          }
        }
        goto label_1820d5a90;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
                );
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
      Map_MapScriptComponent___ctor(__this_05,(MethodInfo *)0x0);
      if (__this_05 != (Map_MapScriptComponent_o *)0x0) {
        (__this_05->fields).ComponentName = componentName;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields).ComponentName,componentName);
        (__this_05->fields).Parameters = __this_04;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields).Parameters,__this_04);
        __this_06 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this,obj,(MethodInfo *)0x0);
        CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,obj,(MethodInfo *)0x0);
        instance = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                             (__this,componentName,obj,__this_05,(MethodInfo *)0x0);
        if (obj != (Map_MapObject_o *)0x0) {
          Map_MapObject__RegisterComponentInstance(obj,instance,(MethodInfo *)0x0);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this,(CustomLogic_CustomLogicClassInstance_o *)instance,"Init",
                     (System_Object_array *)0x0,0,(MethodInfo *)0x0);
          if (instance != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
            (instance->fields).Inited = true;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar9) {
              pMVar7 = (obj->fields).ScriptObject;
              if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
                mapObjectId = (pMVar7->fields).Id;
                bVar9 = System_String__op_Equality(componentName,"Rigidbody",(MethodInfo *)0x0);
                if (__this_06 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_1820d5dfd;
              }
            }
            else {
              bVar9 = System_String__op_Equality(componentName,"Rigidbody",(MethodInfo *)0x0);
              if (!bVar9) {
                return instance;
              }
              pCVar5 = (instance->fields).MapObject;
              if ((((pCVar5 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
                   (pMVar6 = (pCVar5->fields).Value, pMVar6 != (Map_MapObject_o *)0x0)) &&
                  (pMVar7 = (pMVar6->fields).ScriptObject, pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) &&
                 (__this_03 = (System_Collections_Generic_Dictionary_int__object__o *)
                              (__this->fields).IdToNetworkView,
                 __this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                bVar9 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                                  (__this_03,(pMVar7->fields).Id,&local_88,
                                   (MethodInfo_141F4E0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_TryGetValue
                                  );
                if (!bVar9) {
                  return instance;
                }
                if (((local_88 != (Il2CppObject *)0x0) &&
                    (pMVar7 = (obj->fields).ScriptObject, pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) &&
                   (__this_06 = local_88[3].monitor, __this_06 != (CustomLogic_CustomLogicPhotonSync_o *)0x0))
                {
                  bVar9 = true;
                  mapObjectId = (pMVar7->fields).Id;
label_1820d5dfd:
                  CustomLogic_CustomLogicPhotonSync__Init(__this_06,mapObjectId,bVar9,(MethodInfo *)0x0);
                  return instance;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$RemoveComponent
// il2cpp: void CustomLogic_CustomLogicEvaluator__RemoveComponent (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x1820e2320

void CustomLogic_CustomLogicEvaluator__RemoveComponent
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  if (instance != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
    CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers(instance,(MethodInfo *)0x0);
    CustomLogic_CustomLogicEvaluator__RemoveCallbacks
              (__this,(CustomLogic_CustomLogicClassInstance_o *)instance,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicEvaluator__CreateComponentInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, const MethodInfo* method);
// 0x1820d7ac0
// eh: try 0x1820d7da0..0x1820d7e8b -> pad 0x183315b20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d7e36: mov rdx, qword ptr [rip + 0x1fa840b]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_Dispose
// asm:   0x1820d7e3d: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820d7e42: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d7e47: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820d7e4c: test rcx, rcx
// asm:   0x1820d7e4f: jne 0x1820d7e8b
// asm:   0x1820d7e51: mov r14, qword ptr [rsp + 0x30]
// asm:   0x1820d7e8b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicEvaluator__CreateComponentInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,Map_MapObject_o *obj,
          Map_MapScriptComponent_o *script,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *__this_02;
  bool bVar4;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj_00;
  System_Nullable_CustomLogicSourceType__Fields __this_03;
  System_Collections_Generic_HashSet_GameObject__o *__this_04;
  UnityEngine_Transform_o *t;
  CustomLogic_CustomLogicCollisionHandler_o *__this_05;
  UnityEngine_UIElements_TextureId_o local_res18 [4];
  System_Nullable_CustomLogicSourceType__Fields local_68 [2];
  undefined1 local_58 [16];
  UnityEngine_GameObject_o *local_48;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (Il2CppMethodInitialized_1843469f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843469f3 = '\x01';
  }
  local_res18[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_40.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    networkView = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
    if ((pMVar1->fields).Networked != false) {
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToNetworkView;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1820d7e73;
      networkView = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar2,(pMVar1->fields).Id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                              );
    }
    pMVar1 = (obj->fields).ScriptObject;
    if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToMapObjectBuiltin,
       pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
      obj_00 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar2,(pMVar1->fields).Id,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                         );
      __this_03 = (System_Nullable_CustomLogicSourceType__Fields)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance);
      CustomLogic_CustomLogicComponentInstance___ctor_209f4a0
                ((CustomLogic_CustomLogicComponentInstance_o *)__this_03,className,obj_00,script,networkView,
                 (MethodInfo *)0x0);
      pCVar3 = (__this->fields)._start;
      if ((pCVar3 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (__this_00 = (pCVar3->fields).ClassNamespaces,
         __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
        bVar4 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)className,local_res18,
                           (MethodInfo_1461BD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                          );
        if (bVar4) {
          local_68[0].hasValue = false;
          local_68[0]._1_3_ = 0;
          local_68[0].value = 0;
          System_Data_SqlTypes_SqlInt32___ctor_ae2660
                    ((System_Data_SqlTypes_SqlInt32_o *)local_68,(int32_t)local_res18[0].fields.m_Index,
                     MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
          if (__this_03 == (System_Nullable_CustomLogicSourceType__Fields)0x0) {
            ThrowNullReferenceException();
          }
          *(System_Nullable_CustomLogicSourceType__Fields *)((longlong)__this_03 + 0x24) = local_68[0];
        }
        if (networkView != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
                    (networkView,(CustomLogic_CustomLogicComponentInstance_o *)__this_03,(MethodInfo *)0x0);
        }
        CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
                  (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_03,(MethodInfo *)0x0);
        if (__this_03 != (System_Nullable_CustomLogicSourceType__Fields)0x0) {
          local_68[0] = __this_03;
          CustomLogic_CustomLogicComponentInstance__LoadVariables
                    ((CustomLogic_CustomLogicComponentInstance_o *)__this_03,(MethodInfo *)0x0);
          CustomLogic_CustomLogicEvaluator__AddCallbacks
                    (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_03,(MethodInfo *)0x0);
          bVar4 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                            ((CustomLogic_CustomLogicComponentInstance_o *)__this_03,(MethodInfo *)0x0);
          if (!bVar4) {
            return (CustomLogic_CustomLogicComponentInstance_o *)__this_03;
          }
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject);
          System_Collections_Generic_HashSet_object____ctor
                    ((System_Collections_Generic_HashSet_object__o *)__this_04,
                     (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
          __this_01 = (obj->fields).GameObject;
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            t = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            CustomLogic_CustomLogicEvaluator__FindSubcolliders(__this,t,__this_04,(MethodInfo *)0x0);
            if (__this_04 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
              System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                         (System_Collections_Generic_HashSet_Vector2Int__o *)__this_04,
                         (MethodInfo_175C200 *)
                         MethodInfo_System_Collections_Generic_HashSet_GameObject_GetEnumerator);
              local_40.fields._set = (System_Collections_Generic_HashSet_T__o *)local_58._0_8_;
              local_40.fields._index = local_58._8_4_;
              local_40.fields._version = local_58._12_4_;
              local_40.fields._current = (Il2CppObject *)local_48;
              local_58._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
              local_58._8_8_ = &local_40;
              while( true ) {
                bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  (&local_40,
                                   (MethodInfo_15381F0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_MoveNext
                                  );
                __this_02 = local_40.fields._current;
                if (!bVar4) {
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_Dispose);
                  return (CustomLogic_CustomLogicComponentInstance_o *)__this_03;
                }
                if ((UnityEngine_GameObject_o *)local_40.fields._current == (UnityEngine_GameObject_o *)0x0)
                break;
                __this_05 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)local_40.fields._current,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                      );
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar4 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar4) {
                  __this_05 = UnityEngine_GameObject__AddComponent_object_
                                        ((UnityEngine_GameObject_o *)__this_02,
                                         (MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                        );
                }
                if (__this_05 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                  ThrowNullReferenceException();
                }
                CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                          (__this_05,(CustomLogic_CustomLogicComponentInstance_o *)__this_03,(MethodInfo *)0x0
                          );
              }
              ThrowNullReferenceException();
            }
          }
        }
      }
    }
  }
label_1820d7e73:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$FindSubcolliders
// il2cpp: void CustomLogic_CustomLogicEvaluator__FindSubcolliders (CustomLogic_CustomLogicEvaluator_o* __this, UnityEngine_Transform_o* t, System_Collections_Generic_HashSet_GameObject__o* set, const MethodInfo* method);
// 0x1820dd8d0
// eh: try 0x1820dda00..0x1820ddc19 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ddbdd: lea rcx, [rsp + 0x38]
// asm:   0x1820ddbe2: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x1820ddbe7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820ddbec: test rcx, rcx
// asm:   0x1820ddbef: jne 0x1820ddc19
// asm:   0x1820ddc19: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void CustomLogic_CustomLogicEvaluator__FindSubcolliders
               (CustomLogic_CustomLogicEvaluator_o *__this,UnityEngine_Transform_o *t,
               System_Collections_Generic_HashSet_GameObject__o *set,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this_00;
  Il2CppObject *pIVar5;
  bool bVar6;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_Transform_o *t_00;
  ushort uVar9;
  Il2CppObject *local_res10 [3];
  undefined8 local_58 [2];
  undefined8 local_48;
  Il2CppObject **local_40;
  undefined8 *local_38;
  
  if (Il2CppMethodInitialized_1843469f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_1843469f4 = '\x01';
  }
  local_res10[0] = (Il2CppObject *)0x0;
  local_58[0] = 0;
  if (t != (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)t,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)t,(MethodInfo *)0x0);
      if (set == (System_Collections_Generic_HashSet_GameObject__o *)0x0) goto label_1820ddc1f;
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)set,(Il2CppObject *)pUVar7,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    }
    local_res10[0] = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(t,(MethodInfo *)0x0);
    local_48 = 0;
    local_40 = local_res10;
    local_38 = local_58;
    do {
      pIVar5 = local_res10[0];
      if (local_res10[0] == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_res10[0]->klass;
      uVar2 = (pIVar3->_2).interface_offsets_count;
      if (uVar2 != 0) {
        uVar9 = 0;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        do {
          if (pIVar4[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar8 = pIVar3->vtable + pIVar4[uVar9].offset;
            goto label_1820dda66;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_res10[0],(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1820dda66:
      bVar6 = (*pVVar8->methodPtr)(pIVar5,pVVar8->method);
      pIVar5 = local_res10[0];
      if (!bVar6) {
        il2cpp_runtime_helper_1818789e0(&local_40);
        return;
      }
      if (local_res10[0] == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_res10[0]->klass;
      uVar2 = (pIVar3->_2).interface_offsets_count;
      if (uVar2 != 0) {
        uVar9 = 0;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        do {
          if (pIVar4[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar8 = pIVar3->vtable + (pIVar4[uVar9].offset + 1);
            goto label_1820ddad9;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_res10[0],(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1820ddad9:
      t_00 = (UnityEngine_Transform_o *)(*pVVar8->methodPtr)(pIVar5,pVVar8->method);
      if (t_00 != (UnityEngine_Transform_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((t_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((t_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(t_00);
        }
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if (t_00 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)t_00,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)pUVar7,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
      if (!bVar6) {
        CustomLogic_CustomLogicEvaluator__FindSubcolliders(__this,t_00,set,(MethodInfo *)0x0);
      }
    } while( true );
  }
label_1820ddc1f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$SetupMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicEvaluator__SetupMapObject (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1820e27d0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicEvaluator__SetupMapObject
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_1843469f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item);
    Il2CppMethodInitialized_1843469f5 = '\x01';
  }
  if (((obj == (Map_MapObject_o *)0x0) ||
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_1820e28e7;
  bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar2,(pMVar1->fields).Id,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                    );
  if (!bVar3) {
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto label_1820e28e7;
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin;
    key = (pMVar1->fields).Id;
    pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar4,obj,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1820e28e7;
    System_Collections_Generic_Dictionary_int__object___Add
              (__this_00,key,(Il2CppObject *)pCVar4,
               (MethodInfo_1415BA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (pSVar2,(pMVar1->fields).Id,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                       );
    return pCVar4;
  }
label_1820e28e7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetOrCreateMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1820df1b0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_1843469f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item);
    Il2CppMethodInitialized_1843469f6 = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
    return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 == (Map_MapScriptBaseObject_o *)0x0) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_1820df2d8;
  bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar2,(pMVar1->fields).Id,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                    );
  if (!bVar3) {
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto label_1820df2d8;
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin;
    key = (pMVar1->fields).Id;
    pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar4,obj,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1820df2d8;
    System_Collections_Generic_Dictionary_int__object___Add
              (__this_00,key,(Il2CppObject *)pCVar4,
               (MethodInfo_1415BA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (pSVar2,(pMVar1->fields).Id,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                       );
    return pCVar4;
  }
label_1820df2d8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$SetupNetworking
// il2cpp: CustomLogic_CustomLogicPhotonSync_o* CustomLogic_CustomLogicEvaluator__SetupNetworking (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1820e28f0

CustomLogic_CustomLogicPhotonSync_o *
CustomLogic_CustomLogicEvaluator__SetupNetworking
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t key;
  float fVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_02;
  System_Object_array *data;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  UnityEngine_GameObject_o *__this_03;
  CustomLogic_CustomLogicPhotonSync_o *pCVar11;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  int32_t local_68 [4];
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_1843469f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
    Il2CppMethodInitialized_1843469f7 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar3 = (obj->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar3->fields).Networked == false) {
      return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields).IdToNetworkView;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      bVar8 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (__this_00,(pMVar3->fields).Id,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      if (bVar8) {
        return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
      }
      pMVar3 = (obj->fields).ScriptObject;
      if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToNetworkView;
        key = (pMVar3->fields).Id;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
        CustomLogic_CustomLogicNetworkViewBuiltin___ctor(__this_02,obj,(MethodInfo *)0x0);
        if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___Add
                    (__this_01,key,(Il2CppObject *)__this_02,
                     (MethodInfo_1415BA0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Add);
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if (!bVar8) {
            return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
          }
          data = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          local_res20[0] = 1;
          pIVar9 = il2cpp_value_box(g_data_184354e08,local_res20);
          if (data == (System_Object_array *)0x0) {
label_1820e2c81:
            ThrowNullReferenceException();
          }
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((data->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)data->max_length != 0) {
            data->m_Items[0] = pIVar9;
            Il2CppCodeGenWriteBarrier(data->m_Items,pIVar9);
            pMVar3 = (obj->fields).ScriptObject;
            if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_1820e2c81;
            local_68[0] = (pMVar3->fields).Id;
            pIVar9 = il2cpp_value_box(g_data_184354e08,local_68);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((data->obj).klass)->_1).element_class),
               pIVar10 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if (1 < (uint)data->max_length) {
              data->m_Items[1] = pIVar9;
              Il2CppCodeGenWriteBarrier(data->m_Items + 1,pIVar9);
              local_res10[0] = 0;
              pIVar9 = il2cpp_value_box(g_data_184354de8,local_res10);
              if ((pIVar9 != (Il2CppObject *)0x0) &&
                 (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((data->obj).klass)->_1).element_class),
                 pIVar10 == (Il2CppObject *)0x0)) {
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
              if (2 < (uint)data->max_length) {
                data->m_Items[2] = pIVar9;
                Il2CppCodeGenWriteBarrier(data->m_Items + 2,pIVar9);
                if (Il2CppMethodInitialized_18433dbea == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433dbea = '\x01';
                }
                pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar1._0_4_ = (pUVar4->zeroVector).fields.x;
                uVar1._4_4_ = (pUVar4->zeroVector).fields.y;
                fVar2 = (pUVar4->zeroVector).fields.z;
                if (Il2CppMethodInitialized_18433de5b == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                  Il2CppMethodInitialized_18433de5b = '\x01';
                }
                pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
                uVar6._0_4_ = (pUVar5->identityQuaternion).fields.x;
                uVar6._4_4_ = (pUVar5->identityQuaternion).fields.y;
                uVar7._0_4_ = (pUVar5->identityQuaternion).fields.z;
                uVar7._4_4_ = (pUVar5->identityQuaternion).fields.w;
                if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                }
                local_58._0_8_ = uVar1;
                local_58.z = fVar2;
                local_48[0]._0_8_ = uVar6;
                local_48[0]._8_8_ = uVar7;
                __this_03 = Photon_Pun_PhotonNetwork__Instantiate
                                      ("Game/CustomLogicPhotonSyncDynamicPrefab",(UnityEngine_Vector3_o *)&local_58,
                                       (UnityEngine_Quaternion_o *)local_48,'\0',data,(MethodInfo *)0x0);
                if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
                  pCVar11 = UnityEngine_GameObject__GetComponent_object_
                                      (__this_03,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
                  return pCVar11;
                }
                goto label_1820e2c81;
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicEvaluator__GetLineNumberString (CustomLogic_CustomLogicEvaluator_o* __this, int32_t lineNumber, const MethodInfo* method);
// 0x1820dee30

System_String_o *
CustomLogic_CustomLogicEvaluator__GetLineNumberString
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t lineNumber,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = lineNumber;
  if ((__this->fields)._Compiler_k__BackingField == (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    return pSVar1;
  }
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,lineNumber,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$LogCustomLogicError
// il2cpp: void CustomLogic_CustomLogicEvaluator__LogCustomLogicError (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* errorMessage, bool showInChat, const MethodInfo* method);
// 0x1820e0900

void CustomLogic_CustomLogicEvaluator__LogCustomLogicError
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *errorMessage,bool showInChat,
               MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_GeneralInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  bool bVar6;
  System_String_o *str1;
  
  if (Il2CppMethodInitialized_1843469f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"CL Runtime Exception, press ");
    il2cpp_codegen_initialize_runtime_metadata(&" to view in debug console");
    Il2CppMethodInitialized_1843469f8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__LogCustomLogic(errorMessage,false,(MethodInfo *)0x0);
  if (showInChat) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar6 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    if (bVar6) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).ChatCLErrors, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
label_1820e0a64:
        ThrowNullReferenceException();
      }
      if ((pSVar2->fields)._value == false) {
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if (((pSVar3 == (Settings_InputSettings_o *)0x0) ||
            (pSVar4 = (pSVar3->fields).General, pSVar4 == (Settings_GeneralInputSettings_o *)0x0)) ||
           (pSVar5 = (pSVar4->fields).DebugWindow, pSVar5 == (Settings_KeybindSetting_o *)0x0))
        goto label_1820e0a64;
        str1 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
        errorMessage = System_String__Concat_1969b70
                                 ("CL Runtime Exception, press ",str1," to view in debug console",(MethodInfo *)0x0);
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddException(errorMessage,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicEvaluator__GetStartAst (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1805853c0

CustomLogic_CustomLogicStartAst_o*
CustomLogic_CustomLogicEvaluator__GetStartAst(CustomLogic_CustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// CustomLogic.CustomLogicEvaluator$$GetStaticClasses
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_CustomLogicEvaluator__GetStaticClasses (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x180c7fb50

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o*
CustomLogic_CustomLogicEvaluator__GetStaticClasses(CustomLogic_CustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (__this->fields)._namespacedStaticClasses;
}


// CustomLogic.CustomLogicEvaluator$$GetNamespacedStaticClasses
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o* CustomLogic_CustomLogicEvaluator__GetNamespacedStaticClasses (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x18058a570

System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o*
CustomLogic_CustomLogicEvaluator__GetNamespacedStaticClasses(CustomLogic_CustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// CustomLogic.CustomLogicEvaluator$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicEvaluator__GetModeSettings (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820dee80
// eh: try 0x1820def9a..0x1820df032 -> pad 0x18333e590 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820df032..0x1820df0e3 -> pad 0x183325ef0 catch Il2CppExceptionWrapper
// eh: try 0x1820df0e3..0x1820df11b -> pad 0x18333e590 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820df188..0x1820df199 -> pad 0x183325ef0 catch Il2CppExceptionWrapper
// eh: try 0x1820df199..0x1820df1ae -> pad 0x18333e590 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820df0f4: mov rdx, qword ptr [rip + 0x1fde485]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x1820df0fb: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820df100: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820df105: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820df10a: test rcx, rcx
// asm:   0x1820df10d: jne 0x1820df199
// asm:   0x1820df113: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1820df11d: lea rcx, [rip + 0x1fb5294]  ; "Custom logic error getting main logic settings"
// asm:   0x1820df124: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820df129: mov rdx, rax
// asm:   0x1820df12c: xor r9d, r9d
// asm:   0x1820df12f: mov r8b, 1
// asm:   0x1820df132: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x1820df13a: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820df13f: lea rcx, [rip + 0x1fb448a]  ; TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting
// asm:   0x1820df146: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820df14b: mov rcx, rax
// asm:   0x1820df14e: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820df153: mov rsi, rax
// asm:   0x1820df156: lea rcx, [rip + 0x1fed9ab]  ; MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor
// asm:   0x1820df15d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820df162: mov rdx, rax
// asm:   0x1820df165: mov rcx, rsi
// asm:   0x1820df168: call 0x181454140  ; System_Collections_Generic_Dictionary_object__ValueTuple_object__object_____ctor()
// asm:   0x1820df199: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183325ef0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183325ef5: push rbp
// asm:   0x183325ef6: sub rsp, 0x30
// asm:   0x183325efa: mov rbp, rdx
// asm:   0x183325efd: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183325f01: mov rcx, qword ptr [rax]
// asm:   0x183325f04: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183325f08: movabs rax, 0
// asm:   0x183325f12: add rsp, 0x30
// asm:   0x183325f16: pop rbp
// asm:   0x183325f17: ret 
// asm:   0x18333e590: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e595: push rbx
// asm:   0x18333e596: push rbp
// asm:   0x18333e597: push rdi
// asm:   0x18333e598: sub rsp, 0x30
// asm:   0x18333e59c: mov rbp, rdx
// asm:   0x18333e59f: mov rdi, qword ptr [rbp + 0x40]
// asm:   0x18333e5a3: mov rax, qword ptr [rdi]
// asm:   0x18333e5a6: mov rbx, qword ptr [rax]
// asm:   0x18333e5a9: lea rcx, [rip + 0xd3a9a8]  ; TypeInfo_System_Exception
// asm:   0x18333e5b0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e5b5: mov rcx, rax
// asm:   0x18333e5b8: mov rdx, rbx
// asm:   0x18333e5bb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e5c0: test al, al
// asm:   0x18333e5c2: je 0x18333e5d0
// asm:   0x18333e5c4: movabs rax, 0
// asm:   0x18333e5ce: jmp 0x18333e5e8
// asm:   0x18333e5d0: mov rax, qword ptr [rdi]
// asm:   0x18333e5d3: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333e5d7: lea rdx, [rip + 0xc9d9aa]
// asm:   0x18333e5de: lea rcx, [rbp + 0x30]
// asm:   0x18333e5e2: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e5e8: add rsp, 0x30
// asm:   0x18333e5ec: pop rdi
// asm:   0x18333e5ed: pop rbp
// asm:   0x18333e5ee: pop rbx
// asm:   0x18333e5ef: ret 

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicEvaluator__GetModeSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *name;
  bool bVar1;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  Il2CppObject *value;
  Settings_BaseSetting_o *value_00;
  undefined1 local_60 [16];
  System_String_o *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_1843469f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_1843469f9 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  classInstance =
       CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                 (__this,"Main",
                  TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                  (System_Nullable_CustomLogicSourceType__o)0x0,(MethodInfo *)0x0);
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (classInstance->fields).Variables;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (MethodInfo_13C6500 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
  if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
               __this_03,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._currentKey = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                        (&local_48,
                         (MethodInfo_156BDD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                        );
      name = local_48.fields._currentKey;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
                  );
        return __this_02;
      }
      if ((System_String_o *)local_48.fields._currentKey == (System_String_o *)0x0) break;
      bVar1 = System_String__StartsWith
                        ((System_String_o *)local_48.fields._currentKey,"_",
                         (MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                          (classInstance,(System_String_o *)name,(MethodInfo *)0x0);
        if (bVar1) {
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (classInstance->fields).Variables;
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          value = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
          value_00 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                               (__this,"Main",(System_String_o *)name,value,(MethodInfo *)0x0);
          if (value_00 != (Settings_BaseSetting_o *)0x0) {
            if (__this_02 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,name,
                       (Il2CppObject *)value_00,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicEvaluator__GetAddonSettings (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820ddc30
// eh: try 0x1820dde10..0x1820ddeed -> pad 0x18333e4c0 catch Il2CppExceptionWrapper
// eh: try 0x1820ddeed..0x1820ddf91 -> pad 0x18333e450 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820ddf91..0x1820de041 -> pad 0x18333e420 catch Il2CppExceptionWrapper
// eh: try 0x1820de041..0x1820de0bf -> pad 0x18333e450 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820de0bf..0x1820de173 -> pad 0x18333e4c0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1820de173..0x1820de18d -> pad 0x18333e450 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820de18d..0x1820de1ac -> pad 0x18333e4c0 catch Il2CppExceptionWrapper
// asm: 87 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820de05a: mov rdx, qword ptr [rip + 0x1fdf51f]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x1820de061: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820de066: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820de06b: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820de070: test rcx, rcx
// asm:   0x1820de073: jne 0x1820de173
// asm:   0x1820de079: xor ebx, ebx
// asm:   0x1820de07b: mov r13, qword ptr [rsp + 0x110]
// asm:   0x1820de083: mov rdi, qword ptr [rsp + 0x128]
// asm:   0x1820de08b: mov qword ptr [rsp + 0x120], rdi
// asm:   0x1820de093: mov r12, qword ptr [rsp + 0x30]
// asm:   0x1820de098: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1820de0c4: lea rcx, [rip + 0x1fb612d]  ; "Custom logic error getting addon settings for "
// asm:   0x1820de0cb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820de0d0: xor r8d, r8d
// asm:   0x1820de0d3: mov rdx, qword ptr [rsp + 0x30]
// asm:   0x1820de0d8: mov rcx, rax
// asm:   0x1820de0db: call 0x181969e50  ; System_String__Concat()
// asm:   0x1820de0e0: xor r9d, r9d
// asm:   0x1820de0e3: mov r8b, 1
// asm:   0x1820de0e6: mov rdx, rax
// asm:   0x1820de0e9: mov r13, qword ptr [rsp + 0x110]
// asm:   0x1820de0f1: mov rcx, r13
// asm:   0x1820de0f4: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820de0f9: xor ebx, ebx
// asm:   0x1820de0fb: mov rdi, qword ptr [rsp + 0x128]
// asm:   0x1820de103: mov qword ptr [rsp + 0x120], rdi
// asm:   0x1820de10b: jmp 0x1820dde10
// asm:   0x1820de123: mov rdx, qword ptr [rip + 0x1fdbd36]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x1820de12a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820de12f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820de134: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820de139: test rcx, rcx
// asm:   0x1820de13c: jne 0x1820de1ac
// asm:   0x1820de13e: mov rdi, qword ptr [rsp + 0x128]
// asm:   0x1820de173: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820de1ac: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333e420: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e425: push rbp
// asm:   0x18333e426: sub rsp, 0x30
// asm:   0x18333e42a: mov rbp, rdx
// asm:   0x18333e42d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333e434: mov rcx, qword ptr [rax]
// asm:   0x18333e437: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18333e43b: movabs rax, 0
// asm:   0x18333e445: add rsp, 0x30
// asm:   0x18333e449: pop rbp
// asm:   0x18333e44a: ret 
// asm:   0x18333e450: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e455: push rbx
// asm:   0x18333e456: push rbp
// asm:   0x18333e457: push rdi
// asm:   0x18333e458: sub rsp, 0x30
// asm:   0x18333e45c: mov rbp, rdx
// asm:   0x18333e45f: mov rbx, qword ptr [rbp + 0xa8]
// asm:   0x18333e466: mov rax, qword ptr [rbx]
// asm:   0x18333e469: mov rdi, qword ptr [rax]
// asm:   0x18333e46c: lea rcx, [rip + 0xd3aae5]  ; TypeInfo_System_Exception
// asm:   0x18333e473: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e478: mov rdx, rdi
// asm:   0x18333e47b: mov rcx, rax
// asm:   0x18333e47e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e483: test al, al
// asm:   0x18333e485: je 0x18333e493
// asm:   0x18333e487: movabs rax, 0
// asm:   0x18333e491: jmp 0x18333e4b1
// asm:   0x18333e493: mov rax, qword ptr [rbx]
// asm:   0x18333e496: mov qword ptr [rbp + 0x98], rax
// asm:   0x18333e49d: lea rdx, [rip + 0xc9dae4]
// asm:   0x18333e4a4: lea rcx, [rbp + 0x98]
// asm:   0x18333e4ab: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e4b1: add rsp, 0x30
// asm:   0x18333e4b5: pop rdi
// asm:   0x18333e4b6: pop rbp
// asm:   0x18333e4b7: pop rbx
// asm:   0x18333e4b8: ret 
// asm:   0x18333e4c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e4c5: push rbp
// asm:   0x18333e4c6: sub rsp, 0x30
// asm:   0x18333e4ca: mov rbp, rdx
// asm:   0x18333e4cd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x18333e4d4: mov rcx, qword ptr [rax]
// asm:   0x18333e4d7: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333e4db: movabs rax, 0
// asm:   0x18333e4e5: add rsp, 0x30
// asm:   0x18333e4e9: pop rbp
// asm:   0x18333e4ea: ret 

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicEvaluator__GetAddonSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicToken_o *pCVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_string__object__o *__this_01;
  System_String_o *className;
  bool bVar5;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar6;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar7;
  int *piVar8;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_03;
  Il2CppObject *value;
  Settings_BaseSetting_o *value_00;
  undefined1 local_c0 [16];
  System_String_o *local_b0;
  undefined1 local_a8 [8];
  uint64_t uStack_a0;
  System_String_o *local_98;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_90;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_78;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if (Il2CppMethodInitialized_1843469fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40ba020
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_1843469fa = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  uStack_a0 = 0;
  local_98 = (System_String_o *)0x0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._currentKey = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Classes,
     __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0)) {
    pSVar6 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
             System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                       );
    if (pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_c0,
                 pSVar6,(MethodInfo_F1E4D0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                );
      local_a8 = (undefined1  [8])local_c0._0_8_;
      uStack_a0 = local_c0._8_8_;
      local_98 = local_b0;
      while( true ) {
        bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_a8,(MethodInfo_156BDD0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
                          );
        className = local_98;
        if (!bVar5) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                    );
          return __this_02;
        }
        pCVar1 = (__this->fields)._start;
        if (pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)local_98,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                           );
        if (pCVar7 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) break;
        pCVar3 = (pCVar7->fields).Token;
        if (pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = (pCVar3->fields).Value;
        if (pIVar4 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar8 = il2cpp_object_unbox(pIVar4);
        if (*piVar8 == 3) {
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          classInstance =
               CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                         (__this,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs
                          ,false,(System_Nullable_CustomLogicSourceType__o)0x0,(MethodInfo *)0x0);
          CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
                    (__this,classInstance,(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                     (MethodInfo_1454140 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
          if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_01 = (classInstance->fields).Variables;
          if (__this_01 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                   System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                              (MethodInfo_13C6500 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
          if (pSVar6 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
            ThrowNullReferenceException();
          }
          local_78 = __this_03;
          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                    (&local_50,pSVar6,
                     (MethodInfo_F1E4D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator
                    );
          local_90.fields._dictionary = local_50.fields._dictionary;
          local_90.fields._index = local_50.fields._index;
          local_90.fields._version = local_50.fields._version;
          local_90.fields._currentKey = local_50.fields._currentValue;
          local_c0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_c0._8_8_ = &local_90;
          while( true ) {
            bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                              (&local_90,
                               (MethodInfo_156BDD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                              );
            pIVar4 = local_90.fields._currentKey;
            if (!bVar5) break;
            if ((System_String_o *)local_90.fields._currentKey == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar5 = System_String__StartsWith
                              ((System_String_o *)local_90.fields._currentKey,"_",
                               (MethodInfo *)0x0);
            if (!bVar5) {
              bVar5 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                                (classInstance,(System_String_o *)pIVar4,(MethodInfo *)0x0);
              if (bVar5) {
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (classInstance->fields).Variables;
                if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                value = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar2,pIVar4,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
                value_00 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                                     (__this,className,(System_String_o *)pIVar4,value,(MethodInfo *)0x0);
                if (value_00 != (Settings_BaseSetting_o *)0x0) {
                  if (__this_03 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,pIVar4,
                             (Il2CppObject *)value_00,
                             (MethodInfo_146B4B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
                    );
          if (__this_02 ==
              (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                     (Il2CppObject *)className,(Il2CppObject *)__this_03,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                    );
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetComponentSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicEvaluator__GetComponentSettings (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* component, System_Collections_Generic_List_string__o* parameters, const MethodInfo* method);
// 0x1820de7a0
// eh: try 0x1820de941..0x1820de9e0 -> pad 0x18333e510 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820de9e0..0x1820dea52 -> pad 0x183320d80 catch Il2CppExceptionWrapper
// eh: try 0x1820dea52..0x1820deb01 -> pad 0x18333e510 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820deb01..0x1820dec00 -> pad 0x183331db0 catch Il2CppExceptionWrapper
// eh: try 0x1820dec00..0x1820dec35 -> pad 0x18333e510 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820dedce..0x1820dede9 -> pad 0x183320d80 catch Il2CppExceptionWrapper
// eh: try 0x1820dede9..0x1820dedef -> pad 0x18333e510 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1820dedef..0x1820dee04 -> pad 0x183331db0 catch Il2CppExceptionWrapper
// eh: try 0x1820dee04..0x1820dee1e -> pad 0x18333e510 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 158 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820de9dd: nop dword ptr [rax]
// asm:   0x1820dea63: mov rdx, qword ptr [rip + 0x1fb8eae]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820dea6a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820dea6f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820dea74: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820dea79: test rcx, rcx
// asm:   0x1820dea7c: jne 0x1820dede9
// asm:   0x1820dea82: xor r12d, r12d
// asm:   0x1820dea85: mov r15, qword ptr [rsp + 0x48]
// asm:   0x1820dea8a: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1820dea92: mov r13, qword ptr [rsp + 0x98]
// asm:   0x1820dec11: mov rdx, qword ptr [rip + 0x1fde968]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x1820dec18: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820dec1d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820dec22: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820dec27: test rcx, rcx
// asm:   0x1820dec2a: jne 0x1820dee04
// asm:   0x1820dec30: mov r15, qword ptr [rsp + 0x48]
// asm:   0x1820dec3a: lea rcx, [rip + 0x1fcf39f]  ; TypeInfo_string_array
// asm:   0x1820dec41: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dec46: mov rcx, rax
// asm:   0x1820dec49: mov edx, 6
// asm:   0x1820dec4e: call 0x180416200  ; SZArrayNew()
// asm:   0x1820dec53: mov rbx, rax
// asm:   0x1820dec56: test rax, rax
// asm:   0x1820dec59: je 0x1820dedc8
// asm:   0x1820dec5f: lea rcx, [rip + 0x1fb5672]  ; "Custom logic error getting component settings for "
// asm:   0x1820dec66: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dec6b: cmp dword ptr [rbx + 0x18], 0
// asm:   0x1820dec6f: jbe 0x1820dee1e
// asm:   0x1820dec75: mov qword ptr [rbx + 0x20], rax
// asm:   0x1820dec79: lea rcx, [rbx + 0x20]
// asm:   0x1820dec7d: mov rdx, rax
// asm:   0x1820dec80: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dec85: cmp dword ptr [rbx + 0x18], 1
// asm:   0x1820dec89: jbe 0x1820dee1e
// asm:   0x1820dec8f: mov rdx, qword ptr [rsp + 0xf8]
// asm:   0x1820dec97: mov qword ptr [rbx + 0x28], rdx
// asm:   0x1820dec9b: lea rcx, [rbx + 0x28]
// asm:   0x1820dec9f: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820deca4: lea rcx, [rip + 0x20188bd]  ; ": "
// asm:   0x1820decab: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820decb0: mov rdx, rax
// asm:   0x1820decb3: cmp dword ptr [rbx + 0x18], 2
// asm:   0x1820decb7: jbe 0x1820dee1e
// asm:   0x1820decbd: mov eax, dword ptr [rsp + 0x58]
// asm:   0x1820decc1: dec eax
// asm:   0x1820decc3: movsxd rcx, eax
// asm:   0x1820decc6: mov rdi, qword ptr [rsp + rcx*8 + 0x50]
// asm:   0x1820deccb: mov qword ptr [rbx + 0x30], rdx
// asm:   0x1820deccf: lea rcx, [rbx + 0x30]
// asm:   0x1820decd3: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820decd8: test rdi, rdi
// asm:   0x1820decdb: je 0x1820dedc8
// asm:   0x1820dece1: mov rax, qword ptr [rdi]
// asm:   0x1820dece4: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820deceb: mov rcx, rdi
// asm:   0x1820decee: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820decf4: cmp dword ptr [rbx + 0x18], 3
// asm:   0x1820decf8: jbe 0x1820dee1e
// asm:   0x1820decfe: mov qword ptr [rbx + 0x38], rax
// asm:   0x1820ded02: lea rcx, [rbx + 0x38]
// asm:   0x1820ded06: mov rdx, rax
// asm:   0x1820ded09: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820ded0e: lea rcx, [rip + 0x1fa27b3]  ; "\n"
// asm:   0x1820ded15: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820ded1a: cmp dword ptr [rbx + 0x18], 4
// asm:   0x1820ded1e: jbe 0x1820dee1e
// asm:   0x1820ded24: mov qword ptr [rbx + 0x40], rax
// asm:   0x1820ded28: lea rcx, [rbx + 0x40]
// asm:   0x1820ded2c: mov rdx, rax
// asm:   0x1820ded2f: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820ded34: mov rcx, qword ptr [rdi + 0x28]
// asm:   0x1820ded38: test rcx, rcx
// asm:   0x1820ded3b: je 0x1820ded52
// asm:   0x1820ded3d: mov rax, qword ptr [rcx]
// asm:   0x1820ded40: mov rdx, qword ptr [rax + 0x170]
// asm:   0x1820ded47: call qword ptr [rax + 0x168]  ; vtable slot 3
// asm:   0x1820ded4d: mov r12, rax
// asm:   0x1820ded50: jmp 0x1820ded55
// asm:   0x1820ded52: xor r12d, r12d
// asm:   0x1820ded55: cmp dword ptr [rbx + 0x18], 5
// asm:   0x1820ded59: jbe 0x1820dee1e
// asm:   0x1820ded5f: mov qword ptr [rbx + 0x48], r12
// asm:   0x1820ded63: lea rcx, [rbx + 0x48]
// asm:   0x1820ded67: mov rdx, r12
// asm:   0x1820ded6a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820ded6f: xor edx, edx
// asm:   0x1820ded71: mov rcx, rbx
// asm:   0x1820ded74: call 0x181969830  ; System_String__Concat()
// asm:   0x1820ded79: mov rbx, rax
// asm:   0x1820ded7c: lea rcx, [rip + 0x201c6b5]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1820ded83: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820ded88: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1820ded8f: jne 0x1820ded99
// asm:   0x1820ded91: mov rcx, rax
// asm:   0x1820ded94: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1820ded99: xor edx, edx
// asm:   0x1820ded9b: mov rcx, rbx
// asm:   0x1820ded9e: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x1820deda3: mov r15, qword ptr [rsp + 0x48]
// asm:   0x1820dedc8: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1820dede9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820dee04: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820dee1e: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x183320d80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320d85: push rbp
// asm:   0x183320d86: sub rsp, 0x30
// asm:   0x183320d8a: mov rbp, rdx
// asm:   0x183320d8d: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x183320d94: mov rcx, qword ptr [rax]
// asm:   0x183320d97: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183320d9b: movabs rax, 0
// asm:   0x183320da5: add rsp, 0x30
// asm:   0x183320da9: pop rbp
// asm:   0x183320daa: ret 
// asm:   0x183331db0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331db5: push rbp
// asm:   0x183331db6: sub rsp, 0x30
// asm:   0x183331dba: mov rbp, rdx
// asm:   0x183331dbd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x183331dc4: mov rcx, qword ptr [rax]
// asm:   0x183331dc7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331dcb: movabs rax, 0
// asm:   0x183331dd5: add rsp, 0x30
// asm:   0x183331dd9: pop rbp
// asm:   0x183331dda: ret 
// asm:   0x18333e510: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e515: push rbx
// asm:   0x18333e516: push rbp
// asm:   0x18333e517: push rdi
// asm:   0x18333e518: sub rsp, 0x30
// asm:   0x18333e51c: mov rbp, rdx
// asm:   0x18333e51f: mov rdi, qword ptr [rbp + 0xb8]
// asm:   0x18333e526: mov rax, qword ptr [rdi]
// asm:   0x18333e529: mov rbx, qword ptr [rax]
// asm:   0x18333e52c: lea rcx, [rip + 0xd3aa25]  ; TypeInfo_System_Exception
// asm:   0x18333e533: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e538: mov rcx, rax
// asm:   0x18333e53b: mov rdx, rbx
// asm:   0x18333e53e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e543: test al, al
// asm:   0x18333e545: mov rax, qword ptr [rdi]
// asm:   0x18333e548: je 0x18333e562
// asm:   0x18333e54a: movsxd rcx, dword ptr [rbp + 0x58]
// asm:   0x18333e54e: mov qword ptr [rbp + rcx*8 + 0x50], rax
// asm:   0x18333e553: inc dword ptr [rbp + 0x58]
// asm:   0x18333e556: movabs rax, 0
// asm:   0x18333e560: jmp 0x18333e57d
// asm:   0x18333e562: mov qword ptr [rbp + 0xa0], rax
// asm:   0x18333e569: lea rdx, [rip + 0xc9da18]
// asm:   0x18333e570: lea rcx, [rbp + 0xa0]
// asm:   0x18333e577: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e57d: add rsp, 0x30
// asm:   0x18333e581: pop rdi
// asm:   0x18333e582: pop rbp
// asm:   0x18333e583: pop rbx
// asm:   0x18333e584: ret 

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicEvaluator__GetComponentSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *component,
          System_Collections_Generic_List_string__o *parameters,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *name;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_02;
  System_Collections_Generic_Dictionary_string__string__o *__this_03;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  Il2CppObject *obj;
  System_String_o *value;
  Settings_BaseSetting_o *value_00;
  undefined1 local_b8 [16];
  System_String_o *local_a8;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_a0;
  undefined4 local_90;
  System_Collections_Generic_List_Enumerator_object__o local_88;
  undefined1 local_70 [8];
  uint64_t uStack_68;
  System_String_o *local_60;
  System_Collections_Generic_Dictionary_string__string__o *local_58;
  CustomLogic_CustomLogicClassInstance_o *local_50;
  
  if (Il2CppMethodInitialized_1843469fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_1843469fb = '\x01';
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  local_70 = (undefined1  [8])0x0;
  uStack_68 = 0;
  local_60 = (System_String_o *)0x0;
  local_90 = 0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  local_a0 = __this_02;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  local_58 = __this_03;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  classInstance =
       CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                 (__this,component,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                  (System_Nullable_CustomLogicSourceType__o)0x0,(MethodInfo *)0x0);
  local_50 = classInstance;
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,(MethodInfo *)0x0);
  if (parameters == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
             (System_Collections_Generic_List_T__o *)parameters,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_88.fields._list = (System_Collections_Generic_List_T__o *)local_b8._0_8_;
  local_88.fields._index = local_b8._8_4_;
  local_88.fields._version = local_b8._12_4_;
  local_88.fields._current = (Il2CppObject *)local_a8;
  local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8._8_8_ = &local_88;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_88,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (classInstance->fields).Variables;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_04 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
      if (__this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_b8,
                 __this_04,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
      local_70 = (undefined1  [8])local_b8._0_8_;
      uStack_68 = local_b8._8_8_;
      local_60 = local_a8;
      local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
      while( true ) {
        do {
          do {
            bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)local_70,
                               (MethodInfo_156BDD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                              );
            name = local_60;
            if (!bVar1) {
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
                        );
              return __this_02;
            }
            if (local_60 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar1 = System_String__StartsWith(local_60,"_",(MethodInfo *)0x0);
          } while (bVar1);
          bVar1 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                            (classInstance,name,(MethodInfo *)0x0);
        } while (!bVar1);
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (classInstance->fields).Variables;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_01,(Il2CppObject *)name,
                         (MethodInfo_147A5B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
        if (__this_03 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) break;
        bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                           (Il2CppObject *)name,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (bVar1) {
          value = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                             (Il2CppObject *)name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
          obj = CustomLogic_CustomLogicComponentInstance__DeserializeValue(obj,value,(MethodInfo *)0x0);
        }
        value_00 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                             (__this,component,name,obj,(MethodInfo *)0x0);
        if (value_00 != (Settings_BaseSetting_o *)0x0) {
          if (__this_02 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,(Il2CppObject *)name
                     ,(Il2CppObject *)value_00,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
        }
      }
      ThrowNullReferenceException();
    }
    if ((System_String_o *)local_88.fields._current == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__Split((System_String_o *)local_88.fields._current,0x3a,0,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_array *)0x0) break;
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((uint)pSVar2->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    if (__this_03 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)pSVar2->m_Items[0],(Il2CppObject *)pSVar2->m_Items[1],
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateInspectorSetting
// il2cpp: Settings_BaseSetting_o* CustomLogic_CustomLogicEvaluator__CreateInspectorSetting (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x1820d8670

Settings_BaseSetting_o *
CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,System_String_o *variableName
          ,Il2CppObject *value,MethodInfo *method)

{
  float defaultValue;
  byte bVar1;
  bool defaultValue_00;
  int32_t defaultValue_01;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *source;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *object;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar4;
  System_Func_CustomLogicAssignmentExpressionAst__bool__o *__this_01;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment;
  Settings_InspectorSettingMetadata_o *value_00;
  Il2CppObject *pIVar5;
  Settings_ColorSetting_o *__this_02;
  void *pvVar6;
  int32_t *piVar7;
  float *pfVar8;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_String_o *defaultValue_02;
  int32_t maxValue;
  int32_t minValue;
  float fVar9;
  float maxValue_00;
  Il2CppClass *local_68;
  float local_60;
  
  if (Il2CppMethodInitialized_1843469fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OfType_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HashSetSetting_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0_CreateInspectorSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_1843469fc = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *)0x0) {
    (object->fields).variableName = variableName;
    Il2CppCodeGenWriteBarrier(&(object->fields).variableName,variableName);
    pCVar2 = (__this->fields)._start;
    if (((pCVar2 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
        (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes,
        __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
       (pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_00,(Il2CppObject *)className,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                           ), pCVar4 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0))
    goto label_1820d8bdd;
    source = (pCVar4->fields).Assignments;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_01,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0_CreateInspectorSetting_b__0,
               (MethodInfo_B61EB0 *)0x0);
    assignment = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__bool__o *)__this_01,
                            (MethodInfo_6BD2C0 *)
                            MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst
                           );
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value_00 = CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata(assignment,(MethodInfo *)0x0);
    if (value != (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar8 = il2cpp_object_unbox(value);
        if (value_00 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1820d8bdd;
        if (((value_00->fields).HasClamp == false) && ((value_00->fields).HasSlider == false)) {
          fVar9 = -3.4028235e+38;
          maxValue_00 = 3.4028235e+38;
        }
        else {
          fVar9 = (value_00->fields).Min;
          if (((value_00->fields).HasClamp == false) && ((value_00->fields).HasSlider == false)) {
            maxValue_00 = 3.4028235e+38;
          }
          else {
            maxValue_00 = (value_00->fields).Max;
          }
        }
        defaultValue = *pfVar8;
        __this_02 = (Settings_ColorSetting_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
        Settings_FloatSetting___ctor_1f12570
                  ((Settings_FloatSetting_o *)__this_02,defaultValue,fVar9,maxValue_00,(MethodInfo *)0x0);
        goto label_1820d8baf;
      }
      defaultValue_02 = (System_String_o *)0x0;
      if (value->klass == g_data_184354e50) {
        defaultValue_02 = (System_String_o *)value;
      }
      if (defaultValue_02 != (System_String_o *)0x0) {
        __this_02 = (Settings_ColorSetting_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
        Settings_StringSetting___ctor_1f27ee0
                  ((Settings_StringSetting_o *)__this_02,defaultValue_02,0x7fffffff,(MethodInfo *)0x0);
        goto label_1820d8baf;
      }
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar7 = il2cpp_object_unbox(value);
        if (value_00 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1820d8bdd;
        if (((value_00->fields).HasClamp == false) && ((value_00->fields).HasSlider == false)) {
          minValue = -0x80000000;
          maxValue = 0x7fffffff;
        }
        else {
          minValue = (int32_t)(value_00->fields).Min;
          if (((value_00->fields).HasClamp == false) && ((value_00->fields).HasSlider == false)) {
            maxValue = 0x7fffffff;
          }
          else {
            maxValue = (int32_t)(value_00->fields).Max;
          }
        }
        defaultValue_01 = *piVar7;
        __this_02 = (Settings_ColorSetting_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
        Settings_IntSetting___ctor_1f1de00
                  ((Settings_IntSetting_o *)__this_02,defaultValue_01,minValue,maxValue,(MethodInfo *)0x0);
        goto label_1820d8baf;
      }
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354de8) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pvVar6 = il2cpp_object_unbox(value);
        defaultValue_00 = *(bool *)pvVar6;
        __this_02 = (Settings_ColorSetting_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
        Settings_BoolSetting___ctor_1f11be0
                  ((Settings_BoolSetting_o *)__this_02,defaultValue_00,(MethodInfo *)0x0);
        goto label_1820d8baf;
      }
      pIVar3 = value->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        pIVar3 = value[3].klass;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
        Settings_ColorSetting___ctor_1f12060(__this_02,(Utility_Color255_o *)pIVar3,0,(MethodInfo *)0x0);
        goto label_1820d8baf;
      }
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
        pIVar3 = value[3].klass;
        fVar9 = *(float *)&value[3].monitor;
        __this_02 = (Settings_ColorSetting_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
        local_68 = pIVar3;
        local_60 = fVar9;
        Settings_Vector3Setting___ctor_1f2c120
                  ((Settings_Vector3Setting_o *)__this_02,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0
                  );
        goto label_1820d8baf;
      }
    }
    if (value_00 != (Settings_InspectorSettingMetadata_o *)0x0) {
      if ((value_00->fields).MapObjectList == false) {
        return (Settings_BaseSetting_o *)0x0;
      }
      if (value == (Il2CppObject *)0x0) {
        return (Settings_BaseSetting_o *)0x0;
      }
      bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if ((value->klass->_2).typeHierarchyDepth < bVar1) {
        return (Settings_BaseSetting_o *)0x0;
      }
      if ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin) {
        return (Settings_BaseSetting_o *)0x0;
      }
      collection = System_Linq_Enumerable__OfType_int_
                             ((System_Collections_IEnumerable_o *)value[3].klass,
                              (MethodInfo_6C0D40 *)MethodInfo_System_Linq_Enumerable_OfType_int);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_176c3b0
                (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
      __this_02 = (Settings_ColorSetting_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
      Settings_HashSetSetting_int____ctor
                ((Settings_ListSetting_T__o *)__this_02,(System_Collections_Generic_List_T__o *)__this_03,
                 (MethodInfo_1755D40 *)MethodInfo_Settings_HashSetSetting_int_ctor);
label_1820d8baf:
      if (__this_02 != (Settings_ColorSetting_o *)0x0) {
        (__this_02->fields).InspectorMetadata = value_00;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).InspectorMetadata,value_00);
      }
      return (Settings_BaseSetting_o *)__this_02;
    }
  }
label_1820d8bdd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ApplyComponentInspectorRules
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ApplyComponentInspectorRules (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x1820d6170
// eh: try 0x1820d64a0..0x1820d6956 -> pad 0x183320d00 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d63e1: mov rdx, qword ptr [rip + 0x227ea20]
// asm:   0x1820d649d: nop dword ptr [rax]
// asm:   0x1820d671e: mov rdx, qword ptr [rip + 0x1fb8763]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x1820d6725: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820d672a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d672f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820d6734: test rcx, rcx
// asm:   0x1820d6737: jne 0x1820d6956
// asm:   0x1820d673d: mov r14, qword ptr [rsp + 0x68]
// asm:   0x1820d6742: mov rax, r14
// asm:   0x1820d6797: mov rax, rsi
// asm:   0x1820d679a: jmp 0x1820d6745
// asm:   0x1820d68e8: mov r8, qword ptr [rip + 0x1fd0be1]  ; MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
// asm:   0x1820d68ef: mov edx, dword ptr [rdx + 0x20]
// asm:   0x1820d68f2: call 0x1814156f0  ; System_Collections_Generic_Dictionary_int__long___get_Item()
// asm:   0x1820d68f7: jmp 0x1820d6745
// asm:   0x1820d6956: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320d00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320d05: push rbp
// asm:   0x183320d06: sub rsp, 0x20
// asm:   0x183320d0a: mov rbp, rdx
// asm:   0x183320d0d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183320d11: mov rcx, qword ptr [rax]
// asm:   0x183320d14: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183320d18: movabs rax, 0
// asm:   0x183320d22: add rsp, 0x20
// asm:   0x183320d26: pop rbp
// asm:   0x183320d27: ret 

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ApplyComponentInspectorRules
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,System_String_o *variableName
          ,Il2CppObject *value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicStartAst_o *pCVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *source;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar8;
  Map_MapObject_o *pMVar9;
  bool bVar10;
  CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *object;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar11;
  System_Func_CustomLogicAssignmentExpressionAst__bool__o *__this_01;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment;
  Settings_InspectorSettingMetadata_o *pSVar12;
  float *pfVar13;
  CustomLogic_CustomLogicListBuiltin_o *pCVar14;
  int32_t *piVar15;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar16;
  uint64_t uVar17;
  Il2CppObject *pIVar18;
  Il2CppClass *pIVar19;
  float fVar20;
  float local_res18 [2];
  float local_88 [2];
  Map_MapObject_o *local_80;
  Map_MapObject_o *local_78;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  CustomLogic_CustomLogicListBuiltin_o *local_40;
  
  if (Il2CppMethodInitialized_1843469fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0_ApplyComponentInspectorRules_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0)
    ;
    Il2CppMethodInitialized_1843469fd = '\x01';
  }
  local_78 = (Map_MapObject_o *)0x0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  local_80 = (Map_MapObject_o *)0x0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *)0x0) goto label_1820d6903;
  (object->fields).variableName = variableName;
  Il2CppCodeGenWriteBarrier(&(object->fields).variableName,variableName);
  pCVar4 = (__this->fields)._start;
  if (((pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
      (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes,
      __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
     (pCVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)className,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                          ), pCVar11 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0))
  goto label_1820d6903;
  source = (pCVar11->fields).Assignments;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_01,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0_ApplyComponentInspectorRules_b__0
             ,(MethodInfo_B61EB0 *)0x0);
  assignment = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_01,
                          (MethodInfo_6BD2C0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst)
  ;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar12 = CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata(assignment,(MethodInfo *)0x0);
  if (pSVar12 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_1820d6903;
  if (((pSVar12->fields).HasClamp != false) && (value != (Il2CppObject *)0x0)) {
    pIVar18 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar18 = value;
    }
    if (pIVar18 == (Il2CppObject *)0x0) {
      pIVar18 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar18 = value;
      }
      if (pIVar18 == (Il2CppObject *)0x0) goto label_1820d63e8;
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e38);
      }
      pfVar13 = il2cpp_object_unbox(value);
      fVar1 = *pfVar13;
      local_res18[0] = (pSVar12->fields).Min;
      if ((local_res18[0] <= fVar1) && (local_res18[0] = (pSVar12->fields).Max, fVar1 <= local_res18[0])) {
        local_res18[0] = fVar1;
      }
      pfVar13 = local_res18;
      pIVar19 = g_data_184354e38;
    }
    else {
      if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar13 = il2cpp_object_unbox(value);
      fVar1 = *pfVar13;
      fVar20 = (float)(int)(pSVar12->fields).Min;
      if ((((int)fVar1 < (int)fVar20) ||
          (local_88[0] = (float)(int)(pSVar12->fields).Max, (int)fVar1 <= (int)local_88[0])) &&
         (local_88[0] = fVar1, (int)fVar1 < (int)fVar20)) {
        local_88[0] = fVar20;
      }
      pfVar13 = local_88;
      pIVar19 = g_data_184354e08;
    }
    value = il2cpp_value_box(pIVar19,pfVar13);
  }
label_1820d63e8:
  if ((pSVar12->fields).MapObject == false) {
    pCVar14 = (CustomLogic_CustomLogicListBuiltin_o *)value;
    if ((pSVar12->fields).MapObjectList != false) {
      pCVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor(pCVar14,(MethodInfo *)0x0);
      if ((CustomLogic_CustomLogicListBuiltin_o *)value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        bVar2 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
        if ((bVar2 <= (((CustomLogic_CustomLogicListBuiltin_o *)value)->klass->_2).typeHierarchyDepth) &&
           ((((CustomLogic_CustomLogicListBuiltin_o *)value)->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1]
            == (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
          pSVar5 = (((CustomLogic_CustomLogicListBuiltin_o *)value)->fields).List;
          local_40 = pCVar14;
          if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_1820d6903;
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                     (System_Collections_Generic_List_T__o *)pSVar5,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
          local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
          local_58.fields._index = local_70._8_4_;
          local_58.fields._version = local_70._12_4_;
          local_58.fields._current = local_60;
          local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_70._8_8_ = &local_58;
          while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (&local_58,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
                bVar10) {
            if (local_58.fields._current != (Il2CppObject *)0x0) {
              pIVar19 = (local_58.fields._current)->klass;
              bVar2 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
              if (((pIVar19->_2).typeHierarchyDepth < bVar2) ||
                 ((pIVar19->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
                pIVar18 = (Il2CppObject *)0x0;
                if (pIVar19 == g_data_184354e08) {
                  pIVar18 = local_58.fields._current;
                }
                if (pIVar18 != (Il2CppObject *)0x0) {
                  if ((pIVar19->_1).element_class != (g_data_184354e08->_1).element_class) {
                    il2cpp_codegen_raise_invalid_cast_exception();
                  }
                  piVar15 = il2cpp_object_unbox(local_58.fields._current);
                  iVar3 = *piVar15;
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar10 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                                     (pSVar6,iVar3,(Il2CppObject **)&local_80,
                                      (MethodInfo_141F4E0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue
                                     );
                  pMVar9 = local_80;
                  if (bVar10) {
                    if (pCVar14 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar5 = (pCVar14->fields).List;
                    if (Il2CppMethodInitialized_1843469f6 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&
                                 MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add
                                );
                      il2cpp_codegen_initialize_runtime_metadata
                                (&
                                 MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                                );
                      il2cpp_codegen_initialize_runtime_metadata
                                (&
                                 MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                                );
                      Il2CppMethodInitialized_1843469f6 = '\x01';
                    }
                    if (pMVar9 == (Map_MapObject_o *)0x0) {
                      uVar17 = 0;
                    }
                    else {
                      pMVar7 = (pMVar9->fields).ScriptObject;
                      if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar8 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                               (__this->fields).IdToMapObjectBuiltin;
                      if (pSVar8 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      bVar10 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                         (pSVar8,(pMVar7->fields).Id,
                                          (MethodInfo_1407110 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                                         );
                      if (!bVar10) {
                        pMVar7 = (pMVar9->fields).ScriptObject;
                        if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                                 (__this->fields).IdToMapObjectBuiltin;
                        iVar3 = (pMVar7->fields).Id;
                        pCVar16 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
                        CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar16,pMVar9,(MethodInfo *)0x0);
                        if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        System_Collections_Generic_Dictionary_int__object___Add
                                  (pSVar6,iVar3,(Il2CppObject *)pCVar16,
                                   (MethodInfo_1415BA0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add
                                  );
                      }
                      pMVar7 = (pMVar9->fields).ScriptObject;
                      if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar8 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                               (__this->fields).IdToMapObjectBuiltin;
                      if (pSVar8 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      uVar17 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                         (pSVar8,(pMVar7->fields).Id,
                                          (MethodInfo_14156F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                                         );
                    }
                    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    il2cpp_runtime_helper_180012890(pSVar5,uVar17,MethodInfo_System_Collections_Generic_List_object_Add);
                  }
                }
              }
              else {
                if (pCVar14 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar5 = (pCVar14->fields).List;
                if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180012890(pSVar5,local_58.fields._current,
                              MethodInfo_System_Collections_Generic_List_object_Add);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                     MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        }
      }
    }
  }
  else {
    if ((CustomLogic_CustomLogicListBuiltin_o *)value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pIVar19 = (Il2CppClass *)((CustomLogic_CustomLogicListBuiltin_o *)value)->klass;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
      if ((bVar2 <= (pIVar19->_2).typeHierarchyDepth) &&
         ((pIVar19->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
        return (Il2CppObject *)(CustomLogic_CustomLogicListBuiltin_o *)value;
      }
      pCVar14 = (CustomLogic_CustomLogicListBuiltin_o *)0x0;
      if (pIVar19 == g_data_184354e08) {
        pCVar14 = (CustomLogic_CustomLogicListBuiltin_o *)value;
      }
      if (pCVar14 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if ((pIVar19->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar15 = il2cpp_object_unbox(value);
        iVar3 = *piVar15;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1820d6903;
        bVar10 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                           (pSVar6,iVar3,(Il2CppObject **)&local_78,
                            (MethodInfo_141F4E0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
        pMVar9 = local_78;
        if (bVar10) {
          if (Il2CppMethodInitialized_1843469f6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                      );
            Il2CppMethodInitialized_1843469f6 = '\x01';
          }
          if (pMVar9 != (Map_MapObject_o *)0x0) {
            pMVar7 = (pMVar9->fields).ScriptObject;
            if ((pMVar7 == (Map_MapScriptBaseObject_o *)0x0) ||
               (pSVar8 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         (__this->fields).IdToMapObjectBuiltin,
               pSVar8 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_1820d6903;
            bVar10 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                               (pSVar8,(pMVar7->fields).Id,
                                (MethodInfo_1407110 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                               );
            if (!bVar10) {
              pMVar7 = (pMVar9->fields).ScriptObject;
              if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) goto label_1820d6903;
              pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (__this->fields).IdToMapObjectBuiltin;
              iVar3 = (pMVar7->fields).Id;
              pCVar16 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
              CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar16,pMVar9,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1820d6903;
              System_Collections_Generic_Dictionary_int__object___Add
                        (pSVar6,iVar3,(Il2CppObject *)pCVar16,
                         (MethodInfo_1415BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add)
              ;
            }
            pMVar7 = (pMVar9->fields).ScriptObject;
            if ((pMVar7 != (Map_MapScriptBaseObject_o *)0x0) &&
               (pSVar8 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         (__this->fields).IdToMapObjectBuiltin,
               pSVar8 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
              pIVar18 = (Il2CppObject *)
                        System_Collections_Generic_Dictionary_int__ulong___get_Item
                                  (pSVar8,(pMVar7->fields).Id,
                                   (MethodInfo_14156F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                                  );
              return pIVar18;
            }
label_1820d6903:
            ThrowNullReferenceException();
          }
        }
      }
    }
    pCVar14 = (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  }
  return (Il2CppObject *)pCVar14;
}


// CustomLogic.CustomLogicEvaluator$$CreateInspectorMetadata
// il2cpp: Settings_InspectorSettingMetadata_o* CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata (CustomLogic_CustomLogicAssignmentExpressionAst_o* assignment, const MethodInfo* method);
// 0x1820d7ea0
// eh: try 0x1820d8060..0x1820d8669 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d853c: mov rdx, qword ptr [rip + 0x1fa266d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_Dispose
// asm:   0x1820d8543: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820d8548: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d854d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820d8552: test rcx, rcx
// asm:   0x1820d8555: jne 0x1820d8669
// asm:   0x1820d855b: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x1820d8669: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Settings_InspectorSettingMetadata_o *
CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata
          (CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment,MethodInfo *method)

{
  float val1;
  System_Collections_Generic_List_CustomLogicDecorator__o *__this;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  bool bVar2;
  bool bVar3;
  Settings_InspectorSettingMetadata_o *__this_00;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Func_object__string__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_string__o *value;
  Il2CppClass *pIVar7;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  float fVar8;
  float val2;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  System_Collections_Generic_List_Enumerator_object__o local_68 [3];
  
  if (Il2CppMethodInitialized_1843469fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Convert_ToString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InspectorSettingMetadata);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"group");
    il2cpp_codegen_initialize_runtime_metadata(&"dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"clamp");
    il2cpp_codegen_initialize_runtime_metadata(&"mapobject");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"mapobjectlist");
    Il2CppMethodInitialized_1843469fe = '\x01';
  }
  local_68[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68[0].fields._index = 0;
  local_68[0].fields._version = 0;
  local_68[0].fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InspectorSettingMetadata);
  Settings_InspectorSettingMetadata___ctor(__this_00,(MethodInfo *)0x0);
  if (assignment != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    __this = (assignment->fields).Decorators;
    if (__this == (System_Collections_Generic_List_CustomLogicDecorator__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_GetEnumerator);
    local_68[0].fields._list = (System_Collections_Generic_List_T__o *)local_80._0_8_;
    local_68[0].fields._index = local_80._8_4_;
    local_68[0].fields._version = local_80._12_4_;
    local_68[0].fields._current = local_70;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = local_68;
label_1820d8060:
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (local_68,(MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_MoveNext
                      );
    pIVar5 = local_68[0].fields._current;
    if (bVar2) {
      if (local_68[0].fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_68[0].fields._current[1].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = System_String__ToLowerInvariant
                         ((System_String_o *)local_68[0].fields._current[1].klass,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar4,"tooltip",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = pIVar5[1].monitor;
        if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar1->fields)._size == 1) {
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (pSVar1,0,(MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
          }
          pSVar4 = System_Convert__ToString(pIVar5,(MethodInfo *)0x0);
          if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
            ThrowNullReferenceException();
          }
          (__this_00->fields).Tooltip = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Tooltip,pSVar4);
          goto label_1820d8060;
        }
      }
      bVar2 = System_String__op_Equality(pSVar4,"dropbox",(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar4,"header",(MethodInfo *)0x0);
        if (bVar2) {
          pSVar1 = pIVar5[1].monitor;
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar1->fields)._size == 1) {
            if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar1,0,(MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_object_get_Item);
            if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
            }
            pSVar4 = System_Convert__ToString(pIVar5,(MethodInfo *)0x0);
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_00->fields).Header = pSVar4;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).Header,pSVar4);
            goto label_1820d8060;
          }
        }
        bVar2 = System_String__op_Equality(pSVar4,"group",(MethodInfo *)0x0);
        if (bVar2) {
          pSVar1 = pIVar5[1].monitor;
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar1->fields)._size == 2) {
            if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar1,0,(MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_object_get_Item);
            if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
            }
            pSVar4 = System_Convert__ToString(pIVar6,(MethodInfo *)0x0);
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_00->fields).GroupId = pSVar4;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).GroupId,pSVar4);
            if (pIVar5[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pIVar5[1].monitor,1,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_object_get_Item);
            pSVar4 = System_Convert__ToString(pIVar5,(MethodInfo *)0x0);
            (__this_00->fields).GroupHeader = pSVar4;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).GroupHeader,pSVar4);
            goto label_1820d8060;
          }
        }
        bVar2 = System_String__op_Equality(pSVar4,"clamp",(MethodInfo *)0x0);
        if (bVar2) {
label_1820d82ad:
          pSVar1 = pIVar5[1].monitor;
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          if (1 < (pSVar1->fields)._size) {
            if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar1,0,(MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_object_get_Item);
            if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
            }
            fVar8 = System_Convert__ToSingle(pIVar6,(MethodInfo *)0x0);
            if (pIVar5[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pIVar5[1].monitor,1,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_object_get_Item);
            val2 = System_Convert__ToSingle(pIVar6,(MethodInfo *)0x0);
            if (val2 < fVar8) {
              NullCheck(pIVar5);
              pIVar7 = pIVar5[1].klass;
              pSVar4 = il2cpp_codegen_get_runtime_metadata(&" minimum cannot exceed maximum");
              pSVar4 = System_String__Concat_1969e50((System_String_o *)pIVar7,pSVar4,(MethodInfo *)0x0);
              pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
              System_Exception___ctor_1b6abf0(__this_02,pSVar4,(MethodInfo *)0x0);
              lastManagedFrame =
                   il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateInspectorMetadata);
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
            }
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (((__this_00->fields).HasClamp == false) && ((__this_00->fields).HasSlider == false)) {
              (__this_00->fields).Min = fVar8;
            }
            else {
              val1 = (__this_00->fields).Min;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              fVar8 = System_Math__Max_1b2c160(val1,fVar8,(MethodInfo *)0x0);
              (__this_00->fields).Min = fVar8;
              val2 = System_Math__Min_1b2c340((__this_00->fields).Max,val2,(MethodInfo *)0x0);
            }
            (__this_00->fields).Max = val2;
            bVar2 = (__this_00->fields).HasClamp;
            bVar3 = System_String__op_Equality(pSVar4,"clamp",(MethodInfo *)0x0);
            (__this_00->fields).HasClamp = bVar2 != false || bVar3;
            bVar2 = (__this_00->fields).HasSlider;
            bVar3 = System_String__op_Equality(pSVar4,"slider",(MethodInfo *)0x0);
            (__this_00->fields).HasSlider = bVar2 != false || bVar3;
            bVar2 = System_String__op_Equality(pSVar4,"slider",(MethodInfo *)0x0);
            if (bVar2) {
              pSVar1 = pIVar5[1].monitor;
              if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pSVar1->fields)._size == 3) {
                pIVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   (pSVar1,2,(MethodInfo_92B830 *)
                                             MethodInfo_System_Collections_Generic_List_object_get_Item);
                if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
                }
                fVar8 = System_Convert__ToSingle(pIVar5,(MethodInfo *)0x0);
                (__this_00->fields).SliderInterval = fVar8;
              }
            }
            goto label_1820d8060;
          }
        }
        else {
          bVar2 = System_String__op_Equality(pSVar4,"slider",(MethodInfo *)0x0);
          if (bVar2) goto label_1820d82ad;
        }
        bVar2 = System_String__op_Equality(pSVar4,"mapobject",(MethodInfo *)0x0);
        if (bVar2) {
          if (pIVar5[1].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(int *)((longlong)pIVar5[1].monitor + 0x18) == 0) {
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_00->fields).MapObject = true;
            goto label_1820d8060;
          }
        }
        bVar2 = System_String__op_Equality(pSVar4,"mapobjectlist",(MethodInfo *)0x0);
        if (bVar2) {
          if (pIVar5[1].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(int *)((longlong)pIVar5[1].monitor + 0x18) == 0) {
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_00->fields).MapObjectList = true;
          }
        }
        goto label_1820d8060;
      }
      source = pIVar5[1].monitor;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_System_Convert_ToString,(MethodInfo_16E67D0 *)0x0);
      source_00 = System_Linq_Enumerable__Select_Vector3__object_
                            (source,(System_Func_TSource__TResult__o *)__this_01,
                             (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_object_string);
      value = (System_Collections_Generic_List_string__o *)
              System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).Dropbox = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Dropbox,value);
      goto label_1820d8060;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_Dispose);
  }
  return __this_00;
}


// CustomLogic.CustomLogicEvaluator$$GetComponentNames
// il2cpp: System_Collections_Generic_List_string__o* CustomLogic_CustomLogicEvaluator__GetComponentNames (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820de550
// eh: try 0x1820de680..0x1820de797 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820de739: mov rdx, qword ptr [rip + 0x1fdb720]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x1820de740: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820de745: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820de74a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820de74f: test rcx, rcx
// asm:   0x1820de752: jne 0x1820de797
// asm:   0x1820de754: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1820de797: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_List_string__o *
CustomLogic_CustomLogicEvaluator__GetComponentNames
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  CustomLogic_CustomLogicToken_o *pCVar2;
  Il2CppObject *obj;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar5;
  int *piVar6;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_1843469ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40ba020
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843469ff = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Classes,
     __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0)) {
    __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                          );
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_03,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                );
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentKey = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_48,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_40b9f40
                          );
        pIVar3 = local_48.fields._currentKey;
        if (!bVar4) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                    );
          return __this_02;
        }
        pCVar1 = (__this->fields)._start;
        if (pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_01,local_48.fields._currentKey,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                           );
        if (pCVar5 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) break;
        pCVar2 = (pCVar5->fields).Token;
        if (pCVar2 == (CustomLogic_CustomLogicToken_o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = (pCVar2->fields).Value;
        if (obj == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
        piVar6 = il2cpp_object_unbox(obj);
        if (*piVar6 == 0) {
          if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_02,pIVar3,MethodInfo_System_Collections_Generic_List_string_Add);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__GetStaticClass (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x1820df2e0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__GetStaticClass
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  CustomLogic_CustomLogicClassInstance_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346a00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    Il2CppMethodInitialized_184346a00 = '\x01';
  }
  __this_00 = (__this->fields)._staticClasses;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)className,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (!bVar1) {
      return (CustomLogic_CustomLogicClassInstance_o *)0x0;
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)className,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                         );
      return pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_CustomLogicEvaluator__CreateStaticClass (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x1820d8bf0

void CustomLogic_CustomLogicEvaluator__CreateStaticClass
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *__this_00;
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  bool bVar2;
  CustomLogic_CustomLogicClassInstance_o *value;
  UnityEngine_UIElements_TextureId_o local_res8 [2];
  System_Nullable_CustomLogicSourceType__Fields local_res10;
  
  if (Il2CppMethodInitialized_184346a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_184346a01 = '\x01';
  }
  __this_00 = (__this->fields)._staticClasses;
  local_res10.hasValue = false;
  local_res10._1_3_ = 0;
  local_res10.value = 0;
  local_res8[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)className,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (bVar2) {
      return;
    }
    pCVar1 = (__this->fields)._start;
    local_res10.hasValue = false;
    local_res10._1_3_ = 0;
    local_res10.value = 0;
    if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (__this_01 = (pCVar1->fields).ClassNamespaces,
       __this_01 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
      bVar2 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (Il2CppObject *)className,local_res8,
                         (MethodInfo_1461BD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                        );
      if (bVar2) {
        System_Data_SqlTypes_SqlInt32___ctor_ae2660
                  ((System_Data_SqlTypes_SqlInt32_o *)&local_res10,(int32_t)local_res8[0].fields.m_Index,
                   MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                        (__this,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                         false,(System_Nullable_CustomLogicSourceType__o)local_res10,(MethodInfo *)0x0);
      if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        (value->fields)._Namespace_k__BackingField.fields = local_res10;
        __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses
        ;
        if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_02,(Il2CppObject *)className,(Il2CppObject *)value,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicEvaluator__get_Compiler (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x18058a580

CustomLogic_CustomLogicCompiler_o*
CustomLogic_CustomLogicEvaluator__get_Compiler(CustomLogic_CustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (__this->fields)._CapturedErrors_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_Compiler (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x18058a900

void
CustomLogic_CustomLogicEvaluator__set_Compiler(CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* value, MethodInfo* method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicEvaluator$$get_CaptureErrors
// il2cpp: bool CustomLogic_CustomLogicEvaluator__get_CaptureErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x181b90350

bool
CustomLogic_CustomLogicEvaluator__get_CaptureErrors(CustomLogic_CustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (__this->fields)._CaptureErrors_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_CaptureErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_CaptureErrors (CustomLogic_CustomLogicEvaluator_o* __this, bool value, const MethodInfo* method);
// 0x181c5e4b0

void
CustomLogic_CustomLogicEvaluator__set_CaptureErrors(CustomLogic_CustomLogicEvaluator_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._CaptureErrors_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicEvaluator$$get_CapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_CustomLogicEvaluator__get_CapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x18058a890

System_Collections_Generic_List_CustomLogicError__o*
CustomLogic_CustomLogicEvaluator__get_CapturedErrors(CustomLogic_CustomLogicEvaluator_o* __this, MethodInfo* method)

{
  return (__this->fields)._CapturedErrors_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_CapturedErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_CapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_List_CustomLogicError__o* value, const MethodInfo* method);
// 0x18058aa30

void
CustomLogic_CustomLogicEvaluator__set_CapturedErrors(CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_List_CustomLogicError__o* value, MethodInfo* method)

{
  (__this->fields)._CapturedErrors_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CapturedErrors_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___ctor (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicStartAst_o* start, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x1820e3fb0

void CustomLogic_CustomLogicEvaluator___ctor
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicStartAst_o *start,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Object_array *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *__this_01;
  System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *__this_02;
  System_Collections_Generic_Dictionary_int__CustomLogicMapObjectBuiltin__o *__this_03;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar3;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *__this_04;
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *__this_05;
  System_Collections_Generic_Dictionary_int__Dictionary_string__float___o *__this_06;
  System_Collections_Generic_List_CustomLogicError__o *__this_07;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o *__this_08;
  
  if (Il2CppMethodInitialized_184346a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicError);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType
              );
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills / Deaths / Max / Total");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mod__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    Il2CppMethodInitialized_184346a02 = '\x01';
  }
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  (__this->fields)._networkCallback = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._networkCallback,pSVar2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).emptyList = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).emptyList,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ctor);
  (__this->fields).IdToNetworkView = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).IdToNetworkView,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_ctor);
  (__this->fields).AddonToNetworkView = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AddonToNetworkView,__this_02);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ctor);
  (__this->fields).IdToMapObjectBuiltin = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).IdToMapObjectBuiltin,__this_03);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ctor);
  (__this->fields)._staticClasses = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._staticClasses,pSVar3);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ctor);
  (__this->fields)._addonClasses = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._addonClasses,pSVar3);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
            );
  (__this->fields)._namespacedStaticClasses = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namespacedStaticClasses,__this_04);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ctor);
  (__this->fields)._callbacks = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._callbacks,__this_05);
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ctor);
  (__this->fields).PlayerIdToLastPropertyChanges = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlayerIdToLastPropertyChanges,__this_06);
  (__this->fields).ScoreboardHeader = "Kills / Deaths / Max / Total";
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScoreboardHeader,"Kills / Deaths / Max / Total");
  (__this->fields).ScoreboardProperty = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScoreboardProperty,"");
  (__this->fields).DefaultShowKillScore = true;
  (__this->fields).DefaultShowKillFeed = true;
  (__this->fields).DefaultAddKillScore = true;
  (__this->fields).ShowScoreboardLoadout = true;
  (__this->fields).ShowScoreboardStatus = true;
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).ForcedCharacterType = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForcedCharacterType,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).ForcedLoadout = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForcedLoadout,pSVar1);
  __this_07 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicError);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_07,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicError_ctor);
  (__this->fields)._CapturedErrors_k__BackingField = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CapturedErrors_k__BackingField,__this_07);
  __this_08 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType
                        );
  System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_object____ctor
            ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)__this_08,
             (MethodInfo_B96030 *)
             MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor
            );
  (__this->fields)._executionStack = __this_08;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._executionStack,__this_08);
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  (__this->fields).Parameters3 = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters3,pSVar2);
  (__this->fields).add = "__Add__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).add,"__Add__");
  (__this->fields).sub = "__Sub__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).sub,"__Sub__");
  (__this->fields).mul = "__Mul__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).mul,"__Mul__");
  (__this->fields).div = "__Div__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).div,"__Div__");
  (__this->fields).mod = "__Mod__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).mod,"__Mod__");
  (__this->fields).eq = "__Eq__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).eq,"__Eq__");
  (__this->fields).copy = "__Copy__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).copy,"__Copy__");
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._start = start;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._start,start);
  (__this->fields)._Compiler_k__BackingField = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField,compiler);
  return;
}


// CustomLogic.CustomLogicEvaluator$$ClearCapturedErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__ClearCapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x1820d70f0

void CustomLogic_CustomLogicEvaluator__ClearCapturedErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_CustomLogicError__o *pSVar2;
  
  if (Il2CppMethodInitialized_184346a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_Clear);
    Il2CppMethodInitialized_184346a03 = '\x01';
  }
  pSVar2 = (__this->fields)._CapturedErrors_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_CustomLogicError__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, const MethodInfo* method);
// 0x1820d7760

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool init,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                     (__this,className,parameterValues,init,(System_Nullable_CustomLogicSourceType__o)0x0,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, System_Nullable_CustomLogicSourceType__o callerNamespace, const MethodInfo* method);
// 0x1820d7780
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d7997: mov rax, qword ptr [rsp + 0x38]
// asm:   0x1820d799c: jmp 0x1820d78bb
// asm:   0x1820d79d9: xor r8d, r8d
// asm:   0x1820d79dc: mov rdx, rbp
// asm:   0x1820d79df: mov rcx, rdi
// asm:   0x1820d79e2: call 0x18207ebb0  ; CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance()
// asm:   0x1820d79e7: jmp 0x1820d78d7

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool init,
          System_Nullable_CustomLogicSourceType__o callerNamespace,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar3;
  UnityEngine_UIElements_TextureId_o UVar4;
  bool bVar5;
  UnityEngine_UIElements_TextureId_Fields UVar6;
  System_Nullable_CustomLogicSourceType__Fields classNamespace;
  CustomLogic_CustomLogicClassInstance_o *pCVar7;
  CustomLogic_BuiltinClassInstance_o *pCVar8;
  System_String_o *pSVar9;
  System_String_o *str0;
  Il2CppClass *pIVar10;
  System_Exception_o *pSVar11;
  MethodInfo *pMVar12;
  UnityEngine_UIElements_TextureId_o local_38;
  UnityEngine_UIElements_TextureId_o local_34;
  System_Nullable_CustomLogicSourceType__Fields local_30;
  System_Nullable_CustomLogicSourceType__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    Il2CppMethodInitialized_184346a04 = '\x01';
  }
  local_38.fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_30.hasValue = false;
  local_30._1_3_ = 0;
  local_30.value = 0;
  local_34.fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if (callerNamespace.fields.hasValue != false) {
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
       (pSVar2 = (pCVar1->fields).Classes,
       pSVar2 == (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0))
    goto label_1820d7ab2;
    bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (Il2CppObject *)className,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (bVar5) {
      pCVar1 = (__this->fields)._start;
      if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
         (pSVar3 = (pCVar1->fields).ClassNamespaces,
         pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0))
      goto label_1820d7ab2;
      bVar5 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)className,&local_38,
                         (MethodInfo_1461BD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                        );
      UVar4.fields.m_Index = local_38.fields.m_Index;
      if ((bVar5) &&
         (UVar6.m_Index =
               System_Nullable_uint___get_Value
                         ((System_Nullable_uint__o *)&callerNamespace,
                          (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value),
         UVar4.fields.m_Index == (UnityEngine_UIElements_TextureId_Fields)UVar6.m_Index)) {
        local_28[0].hasValue = false;
        local_28[0]._1_3_ = 0;
        local_28[0].value = 0;
        System_Data_SqlTypes_SqlInt32___ctor_ae2660
                  ((System_Data_SqlTypes_SqlInt32_o *)local_28,(int32_t)local_38.fields.m_Index,
                   MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
        classNamespace = local_28[0];
        goto label_1820d78bb;
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
  }
  bVar5 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(className,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    }
    bVar5 = CustomLogic_CustomLogicBuiltinTypes__IsAbstract(className,(MethodInfo *)0x0);
    if (!bVar5) {
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pCVar8 = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                         (className,parameterValues,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicClassInstance_o *)pCVar8;
    }
    pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Cannot instantiate abstract type ");
    pSVar9 = System_String__Concat_1969e50(pSVar9,className,(MethodInfo *)0x0);
    pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar11 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar10);
    System_Exception___ctor_1b6abf0(pSVar11,pSVar9,(MethodInfo *)0x0);
    pMVar12 = il2cpp_codegen_get_runtime_metadata
                        (&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateClassInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar11,pMVar12);
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).Classes,
     pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (Il2CppObject *)className,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (!bVar5) {
      pSVar9 = il2cpp_codegen_get_runtime_metadata(&" not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Class ");
      pSVar9 = System_String__Concat_1969b70(str0,className,pSVar9,(MethodInfo *)0x0);
      pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar11 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar10);
      System_Exception___ctor_1b6abf0(pSVar11,pSVar9,(MethodInfo *)0x0);
      pMVar12 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateClassInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar11,pMVar12);
    }
    pCVar1 = (__this->fields)._start;
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0;
    if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (pSVar3 = (pCVar1->fields).ClassNamespaces,
       pSVar3 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
      bVar5 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)className,&local_34,
                         (MethodInfo_1461BD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                        );
      classNamespace = local_30;
      if (bVar5) {
        System_Data_SqlTypes_SqlInt32___ctor_ae2660
                  ((System_Data_SqlTypes_SqlInt32_o *)&local_30,(int32_t)local_34.fields.m_Index,
                   MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
        classNamespace = local_30;
      }
label_1820d78bb:
      pCVar7 = CustomLogic_CustomLogicEvaluator__CreateUserClassInstance
                         (__this,className,parameterValues,init,
                          (System_Nullable_CustomLogicSourceType__o)classNamespace,(MethodInfo *)0x0);
      return pCVar7;
    }
  }
label_1820d7ab2:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateUserClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateUserClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, System_Nullable_CustomLogicSourceType__o classNamespace, const MethodInfo* method);
// 0x1820d8d60

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateUserClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool init,
          System_Nullable_CustomLogicSourceType__o classNamespace,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_UserClassInstance_o *__this_01;
  
  if (Il2CppMethodInitialized_184346a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_184346a05 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_UserClassInstance);
  if (Il2CppMethodInitialized_184346a22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_184346a22 = '\x01';
  }
  CustomLogic_CustomLogicClassInstance___ctor
            ((CustomLogic_CustomLogicClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._className = className;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._className,className);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields).Variables;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)"Type",(Il2CppObject *)className,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    (__this_01->fields)._Namespace_k__BackingField.fields = classNamespace.fields;
    if (init) {
      CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
                (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_01,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_01,"Init",
                 parameterValues,0,(MethodInfo *)0x0);
      (__this_01->fields).Inited = true;
    }
    return (CustomLogic_CustomLogicClassInstance_o *)__this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$RunAssignmentsClassInstance
// il2cpp: void CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, const MethodInfo* method);
// 0x1820e2360
// eh: try 0x1820e2534..0x1820e27ba -> pad 0x183331de0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e262c: mov rdx, qword ptr [rip + 0x1f975bd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
// asm:   0x1820e2633: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e2638: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e263d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820e2642: test rcx, rcx
// asm:   0x1820e2645: jne 0x1820e27ae
// asm:   0x1820e264b: xor r12d, r12d
// asm:   0x1820e264e: mov rdi, qword ptr [rsp + 0x118]
// asm:   0x1820e2656: mov r13, qword ptr [rsp + 0x78]
// asm:   0x1820e2767: mov rdx, qword ptr [rip + 0x1fd7ed2]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_Dispose
// asm:   0x1820e276e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820e2773: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e2778: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820e277d: test rcx, rcx
// asm:   0x1820e2780: jne 0x1820e27ba
// asm:   0x1820e27ae: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820e27ba: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a3f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a3f5: push rbp
// asm:   0x18332a3f6: sub rsp, 0x30
// asm:   0x18332a3fa: mov rbp, rdx
// asm:   0x18332a3fd: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18332a404: mov rcx, qword ptr [rax]
// asm:   0x18332a407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a40b: movabs rax, 0
// asm:   0x18332a415: add rsp, 0x30
// asm:   0x18332a419: pop rbp
// asm:   0x18332a41a: ret 
// asm:   0x183331de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331de5: push rbp
// asm:   0x183331de6: sub rsp, 0x30
// asm:   0x183331dea: mov rbp, rdx
// asm:   0x183331ded: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x183331df4: mov rcx, qword ptr [rax]
// asm:   0x183331df7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331dfb: movabs rax, 0
// asm:   0x183331e05: add rsp, 0x30
// asm:   0x183331e09: pop rbp
// asm:   0x183331e0a: ret 

void CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_00;
  longlong *plVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_01;
  bool bVar6;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar8;
  System_Collections_Generic_Dictionary_string__object__o *localVariables;
  CustomLogic_UserMethod_o *__this_02;
  Il2CppObject *local_res20;
  undefined1 local_d8 [16];
  Il2CppObject *local_c8;
  Il2CppObject *pIStack_c0;
  int32_t local_b8;
  undefined4 uStack_b4;
  System_String_o *local_b0;
  undefined1 local_a8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_a0;
  Il2CppObject *local_98;
  CustomLogic_CustomLogicClassDefinitionAst_o *local_90;
  undefined1 local_88 [8];
  uint64_t uStack_80;
  Il2CppObject *local_78;
  Il2CppObject *pIStack_70;
  undefined8 local_68;
  System_Collections_Generic_KeyValuePair_object__object__o local_60 [2];
  
  if (Il2CppMethodInitialized_184346a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_get_Curre
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_CustomLogicMethodDefinitionAst_Deconstruct
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_184346a06 = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_98 = (Il2CppObject *)0x0;
  local_88 = (undefined1  [8])0x0;
  uStack_80 = 0;
  local_78 = (Il2CppObject *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60[0].fields.key = (Il2CppObject *)0x0;
  local_60[0].fields.value = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  local_b0 = (System_String_o *)0x0;
  pCVar2 = (__this->fields)._start;
  if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes;
    pIVar7 = (Il2CppObject *)
             (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                       (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,pIVar7,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      local_90 = pCVar8;
      if ((pCVar8 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (__this_00 = (pCVar8->fields).Assignments,
         __this_00 != (System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *)0x0)) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator
                  );
        local_a8 = (undefined1  [8])local_d8._0_8_;
        pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8._8_8_;
        local_98 = local_c8;
        local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_d8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8;
        while( true ) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
                            );
          pIVar7 = local_98;
          if (!bVar6) break;
          if (local_98 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          plVar4 = local_98[1].monitor;
          if (plVar4 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(CustomLogic_CustomLogicVariableExpressionAst_c **)
               (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)bVar1 * 8) !=
              TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
            il2cpp_codegen_raise_invalid_cast_exception(plVar4);
          }
          pSVar5 = (System_String_o *)plVar4[3];
          localVariables =
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
          System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)localVariables,
                     (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor
                    );
          pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                             (__this,classInstance,localVariables,pIVar7[2].monitor,(MethodInfo *)0x0);
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (classInstance->fields).Variables;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar3,(Il2CppObject *)pSVar5,pIVar7,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          bVar6 = System_String__op_Equality(pSVar5,"Type",(MethodInfo *)0x0);
          if (bVar6) {
            (classInstance->fields)._containsTypeOverride = true;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
                  );
        __this_01 = (pCVar8->fields).Methods;
        if (__this_01 !=
            (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)0x0) {
          System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_d8,
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (MethodInfo_13C1150 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_GetEnumerator
                    );
          local_88 = (undefined1  [8])local_d8._0_8_;
          uStack_80 = local_d8._8_8_;
          local_78 = local_c8;
          pIStack_70 = pIStack_c0;
          local_68._0_4_ = local_b8;
          local_68._4_4_ = uStack_b4;
          local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_d8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
          while( true ) {
            bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
                               (MethodInfo_1585360 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_MoveNext
                              );
            if (!bVar6) {
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_Dispose
                        );
              return;
            }
            local_60[0].fields.key = local_78;
            local_60[0].fields.value = pIStack_70;
            System_Collections_Generic_KeyValuePair_object__object___Deconstruct
                      (local_60,&local_res20,(Il2CppObject **)&local_b0,
                       (MethodInfo_180E1C0 *)
                       MethodInfo_System_Collections_Generic_KeyValuePair_string_CustomLogicMethodDefinitionAst_Deconstruct
                      );
            pSVar5 = local_b0;
            pIVar7 = local_res20;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_UserMethod);
            CustomLogic_UserMethod___ctor
                      ((UnityEngine_Android_AndroidLocale_o *)__this_02,(System_String_o *)classInstance,
                       pSVar5,(MethodInfo *)0x0);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (classInstance->fields).Variables;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar3,pIVar7,(Il2CppObject *)__this_02,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBlockCoroutine
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, System_Collections_Generic_List_CustomLogicBaseAst__o* statements, const MethodInfo* method);
// 0x1820d9b80

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          System_Collections_Generic_List_CustomLogicBaseAst__o *statements,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this_00;
  
  if (Il2CppMethodInitialized_184346a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87);
    Il2CppMethodInitialized_184346a07 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).classInstance = classInstance;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).classInstance,classInstance);
  (__this_00->fields).localVariables = localVariables;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).localVariables,localVariables);
  (__this_00->fields).statements = statements;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).statements,statements);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBlock
// il2cpp: bool CustomLogic_CustomLogicEvaluator__EvaluateBlock (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, System_Collections_Generic_List_CustomLogicBaseAst__o* statements, Il2CppObject** result, const MethodInfo* method);
// 0x1820d9c30
// eh: try 0x1820d9e09..0x1820daa96 -> pad 0x18333e170 (+17 call sites) catch Il2CppExceptionWrapper
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d9e0c: nop dword ptr [rax]
// asm:   0x1820da1d7: mov rsi, qword ptr [rsp + 0x140]
// asm:   0x1820da20e: xor ebx, ebx
// asm:   0x1820da210: jmp 0x1820d9e09
// asm:   0x1820da2fd: mov rsi, qword ptr [rsp + 0x140]
// asm:   0x1820da305: mov r15d, ebx
// asm:   0x1820da308: jmp 0x1820da1df
// asm:   0x1820da724: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x1820da8bf: mov rdx, qword ptr [rip + 0x1fb45c2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x1820da8c6: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x1820da8ce: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820da8d3: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x1820da8db: test rcx, rcx
// asm:   0x1820da8de: jne 0x1820daa6c
// asm:   0x1820da8e4: xor ebx, ebx
// asm:   0x1820da8e6: mov r13, qword ptr [rsp + 0x160]
// asm:   0x1820da8ee: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1820da8f6: mov r15d, dword ptr [rsp + 0x30]
// asm:   0x1820da8fb: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x1820da903: mov rsi, r14
// asm:   0x1820da906: mov r12, qword ptr [rsp + 0x150]
// asm:   0x1820da992: xor ebx, ebx
// asm:   0x1820da994: jmp 0x1820d9e10
// asm:   0x1820da999: mov rdx, qword ptr [rip + 0x1f9f4f0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose
// asm:   0x1820da9a0: mov rcx, rdi
// asm:   0x1820da9a3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820da9a8: jmp 0x1820da9cc
// asm:   0x1820da9aa: mov rdx, qword ptr [rip + 0x1f9f4df]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose
// asm:   0x1820da9b1: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x1820da9b9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820da9be: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1820da9c3: test rcx, rcx
// asm:   0x1820da9c6: jne 0x1820daa96
// asm:   0x1820da9cc: movzx eax, byte ptr [rsp + 0x158]
// asm:   0x1820da9d4: jmp 0x1820da893
// asm:   0x1820daa6c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820daa96: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333e140: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e145: push rbp
// asm:   0x18333e146: sub rsp, 0x30
// asm:   0x18333e14a: mov rbp, rdx
// asm:   0x18333e14d: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x18333e154: mov rcx, qword ptr [rax]
// asm:   0x18333e157: mov qword ptr [rbp + 0x88], rcx
// asm:   0x18333e15e: movabs rax, 0
// asm:   0x18333e168: add rsp, 0x30
// asm:   0x18333e16c: pop rbp
// asm:   0x18333e16d: ret 
// asm:   0x18333e170: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e175: push rbp
// asm:   0x18333e176: sub rsp, 0x30
// asm:   0x18333e17a: mov rbp, rdx
// asm:   0x18333e17d: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18333e184: mov rcx, qword ptr [rax]
// asm:   0x18333e187: mov qword ptr [rbp + 0x78], rcx
// asm:   0x18333e18b: movabs rax, 0
// asm:   0x18333e195: add rsp, 0x30
// asm:   0x18333e199: pop rbp
// asm:   0x18333e19a: ret 

bool CustomLogic_CustomLogicEvaluator__EvaluateBlock
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,
               System_Collections_Generic_Dictionary_string__object__o *localVariables,
               System_Collections_Generic_List_CustomLogicBaseAst__o *statements,Il2CppObject **result,
               MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicAssignmentExpressionAst_c *pCVar2;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar3;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar4;
  Il2CppClass *pIVar5;
  CustomLogic_CustomLogicToken_o *pCVar6;
  Il2CppObject *key;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *pCVar7;
  bool bVar8;
  Il2CppObject *pIVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  Il2CppObject *local_f0;
  Il2CppObject *local_e8;
  Il2CppObject *local_e0;
  Il2CppObject *local_d8;
  Il2CppObject *local_d0;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_c8;
  undefined8 local_c0;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_b8;
  undefined1 local_b0 [16];
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_a0;
  undefined1 local_98 [8];
  uint64_t uStack_90;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_88;
  System_Collections_Generic_List_Enumerator_object__o local_80;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if (Il2CppMethodInitialized_184346a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    Il2CppMethodInitialized_184346a08 = '\x01';
  }
  local_98 = (undefined1  [8])0x0;
  uStack_90 = 0;
  local_88 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  local_d8 = (Il2CppObject *)0x0;
  local_e0 = (Il2CppObject *)0x0;
  local_e8 = (Il2CppObject *)0x0;
  local_f0 = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_d0 = (Il2CppObject *)0x0;
  *result = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(result,(void *)0x0);
  if (statements == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_b0,
             (System_Collections_Generic_List_T__o *)statements,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator)
  ;
  local_98 = (undefined1  [8])local_b0._0_8_;
  uStack_90 = local_b0._8_8_;
  local_88 = local_a0;
  local_c0 = 0;
  local_b8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98;
label_1820d9e09:
  iVar13 = 0;
label_1820d9e10:
  iVar12 = 0;
  bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
  pCVar7 = local_88;
  if (!bVar8) {
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    return false;
  }
  local_68 = local_88;
  if (local_88 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._currentLineNumber = (local_88->fields).Line;
  pCVar2 = local_88->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst->_2).typeHierarchyDepth;
  if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst)) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,(local_88->fields).Left,(MethodInfo *)0x0);
        *result = pIVar9;
        Il2CppCodeGenWriteBarrier(result,pIVar9);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
        return true;
      }
      il2cpp_codegen_raise_invalid_cast_exception
                (local_88,TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
    if (((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
        ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
       ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
        bVar1 <= (pCVar2->_2).typeHierarchyDepth &&
        ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
      *result = (Il2CppObject *)local_88;
      Il2CppCodeGenWriteBarrier(result,local_88);
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
      return true;
    }
    local_c8 = local_88;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
    if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_88);
        }
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,(local_88->fields).Right,(MethodInfo *)0x0);
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
        if (((pIVar9->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar9);
        }
        if (pIVar9[3].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_50,(System_Collections_Generic_List_T__o *)pIVar9[3].klass,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
        local_80.fields._list = local_50.fields._list;
        local_80.fields._index = local_50.fields._index;
        local_80.fields._version = local_50.fields._version;
        local_80.fields._current = local_50.fields._current;
        local_b0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_b0._8_8_ = &local_80;
label_1820da729:
        do {
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_80,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
          pIVar9 = local_80.fields._current;
          if (!bVar8) goto label_1820da8a6;
          pCVar6 = (pCVar7->fields).Operator;
          if (pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          key = (pCVar6->fields).Value;
          bVar8 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)localVariables,key,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
          if (bVar8) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,key,pIVar9,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
          else {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,key,pIVar9,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
          }
          bVar8 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                            (__this,classInstance,localVariables,
                             (System_Collections_Generic_List_CustomLogicBaseAst__o *)(pCVar7->fields).Left,
                             &local_d0,(MethodInfo *)0x0);
          if (bVar8) {
            if (local_d0 != (Il2CppObject *)0x0) {
              pIVar5 = local_d0->klass;
              bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
              if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
                 ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
                goto label_1820da1df;
              }
              bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
              if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
                 ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820da729;
            }
            *result = local_d0;
            Il2CppCodeGenWriteBarrier(result,local_d0);
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                       MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
            return true;
          }
        } while( true );
      }
      pCVar2 = local_88->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_88);
        }
        CustomLogic_CustomLogicEvaluator__EvaluateExpression
                  (__this,classInstance,localVariables,(CustomLogic_CustomLogicBaseExpressionAst_o *)local_88,
                   (MethodInfo *)0x0);
      }
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
      if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
        il2cpp_codegen_raise_invalid_cast_exception(local_88);
      }
      pCVar3 = (local_88->fields).Right;
      if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar4 = (*(uint64_t *)((char *)pCVar3 + 0x18));
      if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
        ThrowNullReferenceException();
      }
      if ((((pCVar4->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar10 = il2cpp_object_unbox((Il2CppObject *)pCVar4);
      if (*piVar10 == 0x2a) {
        pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)(pCVar7->fields).Operator,
                            (MethodInfo *)0x0);
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar9->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar9,g_data_184354de8);
        }
        pcVar11 = il2cpp_object_unbox(pIVar9);
        if (*pcVar11 == '\0') {
          iVar13 = 2;
        }
        else {
          bVar8 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                            (__this,classInstance,localVariables,
                             (System_Collections_Generic_List_CustomLogicBaseAst__o *)(pCVar7->fields).Left,
                             &local_d8,(MethodInfo *)0x0);
          if (bVar8) {
            if (local_d8 != (Il2CppObject *)0x0) {
              pIVar5 = local_d8->klass;
              bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
              if (((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
                  ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                   (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
                 ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
                  bVar1 <= (pIVar5->_2).typeHierarchyDepth &&
                  ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                   (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
                *result = local_d8;
                Il2CppCodeGenWriteBarrier(result,local_d8);
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
                return true;
              }
            }
            *result = local_d8;
            Il2CppCodeGenWriteBarrier(result,local_d8);
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
            return true;
          }
          iVar13 = 1;
        }
      }
      else {
        pCVar3 = (pCVar7->fields).Right;
        if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar4 = (*(uint64_t *)((char *)pCVar3 + 0x18));
        if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
          ThrowNullReferenceException();
        }
        if ((((pCVar4->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar10 = il2cpp_object_unbox((Il2CppObject *)pCVar4);
        if (*piVar10 == 0x2d) {
label_1820da3ce:
          do {
            pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                               (__this,classInstance,localVariables,
                                (CustomLogic_CustomLogicBaseExpressionAst_o *)(pCVar7->fields).Operator,
                                (MethodInfo *)0x0);
            if (pIVar9 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar9->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar9,g_data_184354de8);
            }
            pcVar11 = il2cpp_object_unbox(pIVar9);
            iVar13 = iVar12;
            if (*pcVar11 == '\0') goto label_1820da1df;
            bVar8 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                              (__this,classInstance,localVariables,
                               (System_Collections_Generic_List_CustomLogicBaseAst__o *)(pCVar7->fields).Left,
                               &local_e0,(MethodInfo *)0x0);
          } while (!bVar8);
          if (local_e0 != (Il2CppObject *)0x0) {
            pIVar5 = local_e0->klass;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
            if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
               ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) goto label_1820da1df;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
            if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
               ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_1820da3ce;
          }
          *result = local_e0;
          Il2CppCodeGenWriteBarrier(result,local_e0);
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
          return true;
        }
        pCVar3 = (pCVar7->fields).Right;
        if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar4 = (*(uint64_t *)((char *)pCVar3 + 0x18));
        if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
          ThrowNullReferenceException();
        }
        if ((((pCVar4->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar4,g_data_184354e08);
        }
        piVar10 = il2cpp_object_unbox((Il2CppObject *)pCVar4);
        if (*piVar10 == 0x2b) {
          if (((iVar13 == 2) || (bVar8 = iVar13 == 4, iVar13 = iVar12, bVar8)) &&
             (bVar8 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                                (__this,classInstance,localVariables,
                                 (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                                 (pCVar7->fields).Left,&local_e8,(MethodInfo *)0x0), iVar13 = iVar12, bVar8))
          {
            if (local_e8 != (Il2CppObject *)0x0) {
              pIVar5 = local_e8->klass;
              bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
              if (((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
                  ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                   (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
                 ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
                  bVar1 <= (pIVar5->_2).typeHierarchyDepth &&
                  ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                   (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
                *result = local_e8;
                Il2CppCodeGenWriteBarrier(result,local_e8);
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
                return true;
              }
            }
            *result = local_e8;
            Il2CppCodeGenWriteBarrier(result,local_e8);
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
            return true;
          }
        }
        else {
          pCVar3 = (pCVar7->fields).Right;
          if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar4 = (*(uint64_t *)((char *)pCVar3 + 0x18));
          if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
            ThrowNullReferenceException();
          }
          if ((((pCVar4->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar4,g_data_184354e08);
          }
          piVar10 = il2cpp_object_unbox((Il2CppObject *)pCVar4);
          if (((*piVar10 == 0x2c) && (iVar13 != 1)) && (iVar13 != 3)) {
            if ((iVar13 == 2) || (iVar13 == 4)) {
              pIVar9 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                 (__this,classInstance,localVariables,
                                  (CustomLogic_CustomLogicBaseExpressionAst_o *)(pCVar7->fields).Operator,
                                  (MethodInfo *)0x0);
              if (pIVar9 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar9->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar9,g_data_184354de8);
              }
              pcVar11 = il2cpp_object_unbox(pIVar9);
              if (*pcVar11 != '\0') {
                bVar8 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                                  (__this,classInstance,localVariables,
                                   (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                                   (pCVar7->fields).Left,&local_f0,(MethodInfo *)0x0);
                if (bVar8) {
                  if (local_f0 != (Il2CppObject *)0x0) {
                    pIVar5 = local_f0->klass;
                    bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
                    if (((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
                        ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
                       ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).
                                 typeHierarchyDepth, bVar1 <= (pIVar5->_2).typeHierarchyDepth &&
                        ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
                      *result = local_f0;
                      Il2CppCodeGenWriteBarrier(result,local_f0);
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose
                                );
                      return true;
                    }
                  }
                  *result = local_f0;
                  Il2CppCodeGenWriteBarrier(result,local_f0);
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose)
                  ;
                  return true;
                }
                iVar13 = 3;
                goto label_1820da1df;
              }
            }
            iVar13 = 4;
          }
        }
      }
    }
  }
  else {
    CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
              (__this,classInstance,localVariables,local_88,(MethodInfo *)0x0);
  }
  goto label_1820da1df;
label_1820da8a6:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
             MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
label_1820da1df:
  bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
  if (((pCVar7->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) goto label_1820d9e09;
  goto label_1820d9e10;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateAssignmentExpression
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, CustomLogic_CustomLogicAssignmentExpressionAst_o* assignment, const MethodInfo* method);
// 0x1820d9040
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d92e6: test rbp, rbp
// asm:   0x1820d92e9: je 0x1820d9579
// asm:   0x1820d92ef: mov r9, qword ptr [rip + 0x2001752]  ; MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
// asm:   0x1820d92f6: mov r8, rbx
// asm:   0x1820d92f9: mov rdx, rsi
// asm:   0x1820d92fc: mov rcx, rbp
// asm:   0x1820d94af: mov r9, qword ptr [rip + 0x2000cfa]  ; MethodInfo_System_Collections_Generic_Dictionary_string_object_Add
// asm:   0x1820d94b6: mov r8, rbx
// asm:   0x1820d94b9: mov rdx, r15
// asm:   0x1820d94bc: call 0x18146b4b0  ; System_Collections_Generic_Dictionary_object__object___Add()
// asm:   0x1820d94c1: jmp 0x1820d9304
// asm:   0x1820d9514: mov rax, qword ptr [rdi]
// asm:   0x1820d9517: mov r8, rbx
// asm:   0x1820d951a: mov rdx, rsi
// asm:   0x1820d951d: mov rcx, rdi
// asm:   0x1820d9520: mov r9, qword ptr [rax + 0x1a0]
// asm:   0x1820d9527: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x1820d952d: jmp 0x1820d9304
// asm:   0x1820d9567: mov r9, qword ptr [rip + 0x20014da]  ; MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
// asm:   0x1820d956e: mov r8, rbx
// asm:   0x1820d9571: mov rdx, r15
// asm:   0x1820d9574: jmp 0x1820d92ff

void CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,
               System_Collections_Generic_Dictionary_string__object__o *localVariables,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  CustomLogic_CustomLogicToken_o *pCVar3;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicClassInstance_o *__this_02;
  Il2CppClass *pIVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  System_Exception_o *pSVar13;
  MethodInfo *pMVar14;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar15;
  Il2CppObject *local_res20;
  
  if (Il2CppMethodInitialized_184346a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFieldExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_184346a09 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  if (((assignment == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) ||
      (pCVar3 = (assignment->fields).Operator, pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0)) ||
     (pIVar9 = (pCVar3->fields).Value, pIVar9 == (Il2CppObject *)0x0)) goto label_1820d9579;
  if ((pIVar9->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(pIVar9,TypeInfo_CustomLogic_CustomLogicSymbol);
  }
  piVar8 = il2cpp_object_unbox(pIVar9);
  iVar2 = *piVar8;
  bVar6 = 2 < iVar2 - 0x15U;
  __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,(assignment->fields).Right,(MethodInfo *)0x0);
  pCVar4 = (assignment->fields).Right;
  if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
label_1820d91a1:
    if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if (((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
          ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) &&
         (bVar5 = CustomLogic_CustomLogicClassInstance__HasVariable
                            (__this_01,(__this->fields).copy,(MethodInfo *)0x0), bVar5)) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__EvaluateMethod
                              (__this,__this_01,(__this->fields).copy,(System_Object_array *)0x0,
                               (__this->fields)._currentLineNumber,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pCVar15 = pCVar4->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst->_2).typeHierarchyDepth;
    if (((pCVar15->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar15->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)) goto label_1820d91a1;
  }
  pCVar4 = (assignment->fields).Left;
  if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    return;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
  if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicFieldExpressionAst->_2).typeHierarchyDepth;
    if ((pCVar4->klass->_2).typeHierarchyDepth < bVar1) {
      return;
    }
    if ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst) {
      return;
    }
    pCVar15 = (*(uint64_t *)((char *)pCVar4 + 0x18));
    __this_02 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,(*(uint64_t *)((char *)pCVar4 + 0x20)),(MethodInfo *)0x0);
    if (__this_02 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_02);
      }
    }
    if (bVar6 && iVar2 != 0x18) {
      if (__this_02 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_1820d9579;
    }
    else {
      if (__this_02 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_1820d9579;
      pIVar9 = CustomLogic_CustomLogicClassInstance__GetVariable
                         (__this_02,(System_String_o *)pCVar15,(MethodInfo *)0x0);
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar10 = pIVar9->klass;
        bVar1 = (TypeInfo_CustomLogic_CLPropertyBinding->_2).typeHierarchyDepth;
        if ((bVar1 <= (pIVar10->_2).typeHierarchyDepth) &&
           ((pIVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding)) {
          pIVar9 = (Il2CppObject *)(*pIVar10->vtable[5].methodPtr)(pIVar9,__this_02,pIVar10->vtable[5].method)
          ;
        }
      }
      if (iVar2 == 0x15) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__AddValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      else if (iVar2 == 0x16) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__SubtractValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      else if (iVar2 == 0x17) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__MultiplyValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      else if (iVar2 == 0x18) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__DivideValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
    }
    bVar6 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                      (__this_02,(System_String_o *)pCVar15,&local_res20,(MethodInfo *)0x0);
    pIVar9 = local_res20;
    if (!bVar6) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_02->fields).Variables;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_00,(Il2CppObject *)pCVar15,(Il2CppObject *)__this_01,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
        return;
      }
      goto label_1820d9579;
    }
    if (local_res20 != (Il2CppObject *)0x0) {
      pIVar10 = local_res20->klass;
      bVar1 = (TypeInfo_CustomLogic_CLPropertyBinding->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar10->_2).typeHierarchyDepth) &&
         ((pIVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding)) {
        cVar7 = (*pIVar10->vtable[4].methodPtr)(local_res20,pIVar10->vtable[4].method);
        if (cVar7 == '\0') {
          pIVar10 = pIVar9->klass;
          (*pIVar10->vtable[6].methodPtr)(pIVar9,__this_02,__this_01,pIVar10->vtable[6].method);
          return;
        }
        pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        pSVar11 = (System_String_array *)SZArrayNew(pIVar10,5);
        NullCheck(pSVar11);
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&"Cannot reassign read-only field '");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,0,pIVar9);
        NullCheck(__this_02);
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_180003110(6,__this_02);
        NullCheck(pSVar11);
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,1,pIVar9);
        NullCheck(pSVar11);
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&".");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,2,pIVar9);
        NullCheck(pSVar11);
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,3,(Il2CppObject *)pCVar15);
        NullCheck(pSVar11);
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&"'");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,4,pIVar9);
        pSVar12 = System_String__Concat_1969830(pSVar11,(MethodInfo *)0x0);
        pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar13 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar10);
        System_Exception___ctor_1b6abf0(pSVar13,pSVar12,(MethodInfo *)0x0);
        pMVar14 = il2cpp_codegen_get_runtime_metadata
                            (&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateAssignmentExpression);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar13,pMVar14);
      }
      bVar1 = (TypeInfo_CustomLogic_CLMethodBinding->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar10->_2).typeHierarchyDepth) &&
         ((pIVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding)) {
        pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        pSVar11 = (System_String_array *)SZArrayNew(pIVar10,5);
        NullCheck(pSVar11);
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&"Cannot reassign built-in method '");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,0,pIVar9);
        NullCheck(__this_02);
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_180003110(6,__this_02);
        NullCheck(pSVar11);
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,1,pIVar9);
        NullCheck(pSVar11);
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&".");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,2,pIVar9);
        NullCheck(pSVar11);
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,3,(Il2CppObject *)pCVar15);
        NullCheck(pSVar11);
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&"'");
        il2cpp_codegen_array_set_ref((System_Array_o *)pSVar11,4,pIVar9);
        pSVar12 = System_String__Concat_1969830(pSVar11,(MethodInfo *)0x0);
        pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar13 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar10);
        System_Exception___ctor_1b6abf0(pSVar13,pSVar12,(MethodInfo *)0x0);
        pMVar14 = il2cpp_codegen_get_runtime_metadata
                            (&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateAssignmentExpression);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar13,pMVar14);
      }
    }
    localVariables = (__this_02->fields).Variables;
  }
  else {
    pCVar15 = (*(uint64_t *)((char *)pCVar4 + 0x18));
    if (!bVar6 || iVar2 == 0x18) {
      if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0)
      goto label_1820d9579;
      pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                          (Il2CppObject *)pCVar15,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
      if (iVar2 == 0x15) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__AddValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      else if (iVar2 == 0x16) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__SubtractValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      else if (iVar2 == 0x17) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__MultiplyValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      else if (iVar2 == 0x18) {
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__DivideValues
                              (__this,pIVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      }
      goto label_1820d92ff;
    }
  }
  if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
label_1820d9579:
    ThrowNullReferenceException();
  }
label_1820d92ff:
  System_Collections_Generic_Dictionary_object__object___set_Item
            ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,(Il2CppObject *)pCVar15
             ,(Il2CppObject *)__this_01,
             (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.CustomLogicEvaluator$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicEvaluator__HasMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_String_o* methodName, const MethodInfo* method);
// 0x1820df370

bool CustomLogic_CustomLogicEvaluator__HasMethod
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,System_String_o *methodName,
               MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_01;
  bool bVar2;
  Il2CppObject *key;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    Il2CppMethodInitialized_184346a0a = '\x01';
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    key = (Il2CppObject *)
          (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                    (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,key,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if ((pCVar3 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (__this_01 = (pCVar3->fields).Methods,
         __this_01 != (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)0x0))
      {
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                           (Il2CppObject *)methodName,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
                          );
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_String_o* methodName, System_Object_array* parameterValues, int32_t callerLineNumber, const MethodInfo* method);
// 0x1820dbf30
// eh: try 0x1820dc116..0x1820dc4eb -> pad 0x18333e250 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dc4eb..0x1820dc5fb -> pad 0x18333e220 catch Il2CppExceptionWrapper
// eh: try 0x1820dc5fb..0x1820dccff -> pad 0x18333e250 (+3 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dccff..0x1820dcd05 -> pad 0x18333e220 catch Il2CppExceptionWrapper
// eh: try 0x1820dcd05..0x1820dcd10 -> pad 0x18333e250 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dcd10..0x1820dcd20 -> pad 0x18333e220 catch Il2CppExceptionWrapper
// eh: try 0x1820dcd20..0x1820dcd26 -> pad 0x18333e250 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dcd26..0x1820dcd2c -> pad 0x18333e220 catch Il2CppExceptionWrapper
// eh: try 0x1820dcd2c..0x1820dcd87 -> pad 0x18333e250 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// asm: 340 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820dc62b: nop 
// asm:   0x1820dc62c: jmp 0x1820dcc50
// asm:   0x1820dc631: lea rcx, [rsp + 0x58]
// asm:   0x1820dc636: call 0x1820d5510  ; il2cpp_runtime_helper_1820d5510()
// asm:   0x1820dc63b: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820dc640: test rcx, rcx
// asm:   0x1820dc643: jne 0x1820dcd2c
// asm:   0x1820dc649: xor r8d, r8d
// asm:   0x1820dc64c: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dc654: mov edx, dword ptr [rcx + 0xb8]
// asm:   0x1820dc65a: call 0x1820dee30  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x1820dc65f: mov qword ptr [rsp + 0x50], rax
// asm:   0x1820dc664: lea rcx, [rip + 0x1fd1975]  ; TypeInfo_string_array
// asm:   0x1820dc66b: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc670: mov rcx, rax
// asm:   0x1820dc673: mov edx, 6
// asm:   0x1820dc678: call 0x180416200  ; SZArrayNew()
// asm:   0x1820dc67d: mov rbx, rax
// asm:   0x1820dc680: test rax, rax
// asm:   0x1820dc683: je 0x1820dcc66
// asm:   0x1820dc689: lea rcx, [rip + 0x1fb80a8]  ; "Custom logic runtime error at method "
// asm:   0x1820dc690: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc695: cmp dword ptr [rbx + 0x18], 0
// asm:   0x1820dc699: jbe 0x1820dcd87
// asm:   0x1820dc69f: mov qword ptr [rbx + 0x20], rax
// asm:   0x1820dc6a3: lea rcx, [rbx + 0x20]
// asm:   0x1820dc6a7: mov rdx, rax
// asm:   0x1820dc6aa: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dc6af: cmp dword ptr [rbx + 0x18], 1
// asm:   0x1820dc6b3: jbe 0x1820dcd87
// asm:   0x1820dc6b9: mov r13, qword ptr [rsp + 0x100]
// asm:   0x1820dc6c1: mov qword ptr [rbx + 0x28], r13
// asm:   0x1820dc6c5: lea rcx, [rbx + 0x28]
// asm:   0x1820dc6c9: mov rdx, r13
// asm:   0x1820dc6cc: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dc6d1: lea rcx, [rip + 0x1fbce60]  ; " in class "
// asm:   0x1820dc6d8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc6dd: cmp dword ptr [rbx + 0x18], 2
// asm:   0x1820dc6e1: jbe 0x1820dcd87
// asm:   0x1820dc6e7: mov qword ptr [rbx + 0x30], rax
// asm:   0x1820dc6eb: lea rcx, [rbx + 0x30]
// asm:   0x1820dc6ef: mov rdx, rax
// asm:   0x1820dc6f2: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dc6f7: mov r14, qword ptr [rsp + 0xf8]
// asm:   0x1820dc6ff: test r14, r14
// asm:   0x1820dc702: je 0x1820dcc66
// asm:   0x1820dc708: mov rax, qword ptr [r14]
// asm:   0x1820dc70b: mov rdx, qword ptr [rax + 0x1a0]
// asm:   0x1820dc712: mov rcx, r14
// asm:   0x1820dc715: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x1820dc71b: cmp dword ptr [rbx + 0x18], 3
// asm:   0x1820dc71f: jbe 0x1820dcd87
// asm:   0x1820dc725: mov qword ptr [rbx + 0x38], rax
// asm:   0x1820dc729: lea rcx, [rbx + 0x38]
// asm:   0x1820dc72d: mov rdx, rax
// asm:   0x1820dc730: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dc735: lea rcx, [rip + 0x201ae2c]  ; ": "
// asm:   0x1820dc73c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc741: cmp dword ptr [rbx + 0x18], 4
// asm:   0x1820dc745: jbe 0x1820dcd87
// asm:   0x1820dc74b: mov ecx, dword ptr [rsp + 0x48]
// asm:   0x1820dc74f: dec ecx
// asm:   0x1820dc751: movsxd rdx, ecx
// asm:   0x1820dc754: mov rdi, qword ptr [rsp + rdx*8 + 0x40]
// asm:   0x1820dc759: mov qword ptr [rbx + 0x40], rax
// asm:   0x1820dc75d: lea rcx, [rbx + 0x40]
// asm:   0x1820dc761: mov rdx, rax
// asm:   0x1820dc764: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dc769: test rdi, rdi
// asm:   0x1820dc76c: je 0x1820dcc66
// asm:   0x1820dc772: mov rcx, qword ptr [rdi + 0x28]
// asm:   0x1820dc776: test rcx, rcx
// asm:   0x1820dc779: je 0x1820dc8ac
// asm:   0x1820dc77f: mov rax, qword ptr [rcx]
// asm:   0x1820dc782: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dc789: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dc78f: xor r15d, r15d
// asm:   0x1820dc792: jmp 0x1820dc8b2
// asm:   0x1820dc8ac: xor r15d, r15d
// asm:   0x1820dc8af: mov eax, r15d
// asm:   0x1820dc8b2: cmp dword ptr [rbx + 0x18], 5
// asm:   0x1820dc8b6: jbe 0x1820dcd87
// asm:   0x1820dc8bc: mov qword ptr [rbx + 0x48], rax
// asm:   0x1820dc8c0: lea rcx, [rbx + 0x48]
// asm:   0x1820dc8c4: mov rdx, rax
// asm:   0x1820dc8c7: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dc8cc: xor edx, edx
// asm:   0x1820dc8ce: mov rcx, rbx
// asm:   0x1820dc8d1: call 0x181969830  ; System_String__Concat()
// asm:   0x1820dc8d6: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dc8de: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x1820dc8e5: jne 0x1820dc8fa
// asm:   0x1820dc8e7: xor r9d, r9d
// asm:   0x1820dc8ea: mov r8b, 1
// asm:   0x1820dc8ed: mov rdx, rax
// asm:   0x1820dc8f0: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820dc8f5: jmp 0x1820dcc50
// asm:   0x1820dc8fa: mov rax, qword ptr [rcx + 0xa8]
// asm:   0x1820dc901: mov qword ptr [rsp + 0xf8], rax
// asm:   0x1820dc909: mov rcx, qword ptr [rdi + 0x28]
// asm:   0x1820dc90d: test rcx, rcx
// asm:   0x1820dc910: je 0x1820dc92a
// asm:   0x1820dc912: mov rax, qword ptr [rcx]
// asm:   0x1820dc915: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dc91c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dc922: mov r12, rax
// asm:   0x1820dc925: test rax, rax
// asm:   0x1820dc928: jne 0x1820dc940
// asm:   0x1820dc92a: mov rax, qword ptr [rdi]
// asm:   0x1820dc92d: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dc934: mov rcx, rdi
// asm:   0x1820dc937: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dc93d: mov r12, rax
// asm:   0x1820dc940: mov r8, qword ptr [r14]
// asm:   0x1820dc943: mov rdx, qword ptr [r8 + 0x1a0]
// asm:   0x1820dc94a: mov rcx, r14
// asm:   0x1820dc94d: call qword ptr [r8 + 0x198]  ; vtable slot 6
// asm:   0x1820dc954: mov rsi, rax
// asm:   0x1820dc957: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dc95f: mov edi, dword ptr [rcx + 0xb8]
// asm:   0x1820dc965: mov rbx, qword ptr [r14 + 0x24]
// asm:   0x1820dc969: lea rcx, [rip + 0x200ff58]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x1820dc970: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc975: mov rcx, rax
// asm:   0x1820dc978: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820dc97d: mov r14, rax
// asm:   0x1820dc980: mov qword ptr [rsp + 0x38], r15
// asm:   0x1820dc985: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1820dc98a: mov rax, qword ptr [rsp + 0x50]
// asm:   0x1820dc98f: mov qword ptr [rsp + 0x28], rax
// asm:   0x1820dc994: mov dword ptr [rsp + 0x20], edi
// asm:   0x1820dc998: mov r9, r13
// asm:   0x1820dc99b: mov r8, rsi
// asm:   0x1820dc99e: mov rdx, r12
// asm:   0x1820dc9a1: mov rcx, r14
// asm:   0x1820dc9a4: call 0x1820a0110  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x1820dc9a9: mov rbx, qword ptr [rsp + 0xf8]
// asm:   0x1820dc9b1: test rbx, rbx
// asm:   0x1820dc9b4: je 0x1820dcc66
// asm:   0x1820dc9ba: lea rcx, [rip + 0x1fb736f]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x1820dc9c1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc9c6: mov rdx, r14
// asm:   0x1820dc9c9: jmp 0x1820dcc45
// asm:   0x1820dc9ce: xor r8d, r8d
// asm:   0x1820dc9d1: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dc9d9: mov edx, dword ptr [rcx + 0xb8]
// asm:   0x1820dc9df: call 0x1820dee30  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x1820dc9e4: mov r13, rax
// asm:   0x1820dc9e7: lea rcx, [rip + 0x1fd15f2]  ; TypeInfo_string_array
// asm:   0x1820dc9ee: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dc9f3: mov rcx, rax
// asm:   0x1820dc9f6: mov edx, 8
// asm:   0x1820dc9fb: call 0x180416200  ; SZArrayNew()
// asm:   0x1820dca00: mov rbx, rax
// asm:   0x1820dca03: test rax, rax
// asm:   0x1820dca06: je 0x1820dcc66
// asm:   0x1820dca0c: lea rcx, [rip + 0x1fb7c45]  ; "Custom logic runtime error at line "
// asm:   0x1820dca13: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dca18: cmp dword ptr [rbx + 0x18], 0
// asm:   0x1820dca1c: jbe 0x1820dcd87
// asm:   0x1820dca22: mov qword ptr [rbx + 0x20], rax
// asm:   0x1820dca26: lea rcx, [rbx + 0x20]
// asm:   0x1820dca2a: mov rdx, rax
// asm:   0x1820dca2d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dca32: cmp dword ptr [rbx + 0x18], 1
// asm:   0x1820dca36: jbe 0x1820dcd87
// asm:   0x1820dca3c: mov qword ptr [rbx + 0x28], r13
// asm:   0x1820dca40: lea rcx, [rbx + 0x28]
// asm:   0x1820dca44: mov rdx, r13
// asm:   0x1820dca47: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dca4c: lea rcx, [rip + 0x1fb481d]  ; " at method "
// asm:   0x1820dca53: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dca58: cmp dword ptr [rbx + 0x18], 2
// asm:   0x1820dca5c: jbe 0x1820dcd87
// asm:   0x1820dca62: mov qword ptr [rbx + 0x30], rax
// asm:   0x1820dca66: lea rcx, [rbx + 0x30]
// asm:   0x1820dca6a: mov rdx, rax
// asm:   0x1820dca6d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dca72: cmp dword ptr [rbx + 0x18], 3
// asm:   0x1820dca76: jbe 0x1820dcd87
// asm:   0x1820dca7c: mov r12, qword ptr [rsp + 0x100]
// asm:   0x1820dca84: mov qword ptr [rbx + 0x38], r12
// asm:   0x1820dca88: lea rcx, [rbx + 0x38]
// asm:   0x1820dca8c: mov rdx, r12
// asm:   0x1820dca8f: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dca94: lea rcx, [rip + 0x1fbca9d]  ; " in class "
// asm:   0x1820dca9b: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dcaa0: cmp dword ptr [rbx + 0x18], 4
// asm:   0x1820dcaa4: jbe 0x1820dcd87
// asm:   0x1820dcaaa: mov qword ptr [rbx + 0x40], rax
// asm:   0x1820dcaae: lea rcx, [rbx + 0x40]
// asm:   0x1820dcab2: mov rdx, rax
// asm:   0x1820dcab5: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dcaba: mov r15, qword ptr [rsp + 0xf8]
// asm:   0x1820dcac2: test r15, r15
// asm:   0x1820dcac5: je 0x1820dcc66
// asm:   0x1820dcacb: mov rax, qword ptr [r15]
// asm:   0x1820dcace: mov rdx, qword ptr [rax + 0x1a0]
// asm:   0x1820dcad5: mov rcx, r15
// asm:   0x1820dcad8: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x1820dcade: cmp dword ptr [rbx + 0x18], 5
// asm:   0x1820dcae2: jbe 0x1820dcd87
// asm:   0x1820dcae8: mov qword ptr [rbx + 0x48], rax
// asm:   0x1820dcaec: lea rcx, [rbx + 0x48]
// asm:   0x1820dcaf0: mov rdx, rax
// asm:   0x1820dcaf3: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dcaf8: lea rcx, [rip + 0x201aa69]  ; ": "
// asm:   0x1820dcaff: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dcb04: cmp dword ptr [rbx + 0x18], 6
// asm:   0x1820dcb08: jbe 0x1820dcd87
// asm:   0x1820dcb0e: mov ecx, dword ptr [rsp + 0x48]
// asm:   0x1820dcb12: dec ecx
// asm:   0x1820dcb14: movsxd rdx, ecx
// asm:   0x1820dcb17: mov rdi, qword ptr [rsp + rdx*8 + 0x40]
// asm:   0x1820dcb1c: mov qword ptr [rbx + 0x50], rax
// asm:   0x1820dcb20: lea rcx, [rbx + 0x50]
// asm:   0x1820dcb24: mov rdx, rax
// asm:   0x1820dcb27: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dcb2c: test rdi, rdi
// asm:   0x1820dcb2f: je 0x1820dcc66
// asm:   0x1820dcb35: mov rax, qword ptr [rdi]
// asm:   0x1820dcb38: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dcb3f: mov rcx, rdi
// asm:   0x1820dcb42: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dcb48: cmp dword ptr [rbx + 0x18], 7
// asm:   0x1820dcb4c: jbe 0x1820dcd87
// asm:   0x1820dcb52: mov qword ptr [rbx + 0x58], rax
// asm:   0x1820dcb56: lea rcx, [rbx + 0x58]
// asm:   0x1820dcb5a: mov rdx, rax
// asm:   0x1820dcb5d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dcb62: xor edx, edx
// asm:   0x1820dcb64: mov rcx, rbx
// asm:   0x1820dcb67: call 0x181969830  ; System_String__Concat()
// asm:   0x1820dcb6c: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dcb74: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x1820dcb7b: jne 0x1820dcb93
// asm:   0x1820dcb7d: xor r9d, r9d
// asm:   0x1820dcb80: mov r8b, 1
// asm:   0x1820dcb83: mov rdx, rax
// asm:   0x1820dcb86: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820dcb8b: xor r15d, r15d
// asm:   0x1820dcb8e: jmp 0x1820dcc50
// asm:   0x1820dcb93: mov rax, qword ptr [rcx + 0xa8]
// asm:   0x1820dcb9a: mov qword ptr [rsp + 0xf8], rax
// asm:   0x1820dcba2: mov rax, qword ptr [rdi]
// asm:   0x1820dcba5: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dcbac: mov rcx, rdi
// asm:   0x1820dcbaf: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dcbb5: mov r14, rax
// asm:   0x1820dcbb8: mov r8, qword ptr [r15]
// asm:   0x1820dcbbb: mov rdx, qword ptr [r8 + 0x1a0]
// asm:   0x1820dcbc2: mov rcx, r15
// asm:   0x1820dcbc5: call qword ptr [r8 + 0x198]  ; vtable slot 6
// asm:   0x1820dcbcc: mov rsi, rax
// asm:   0x1820dcbcf: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dcbd7: mov edi, dword ptr [rcx + 0xb8]
// asm:   0x1820dcbdd: mov rbx, qword ptr [r15 + 0x24]
// asm:   0x1820dcbe1: lea rcx, [rip + 0x200fce0]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x1820dcbe8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dcbed: mov rcx, rax
// asm:   0x1820dcbf0: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820dcbf5: mov qword ptr [rsp + 0x100], rax
// asm:   0x1820dcbfd: xor r15d, r15d
// asm:   0x1820dcc00: mov qword ptr [rsp + 0x38], r15
// asm:   0x1820dcc05: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1820dcc0a: mov qword ptr [rsp + 0x28], r13
// asm:   0x1820dcc0f: mov dword ptr [rsp + 0x20], edi
// asm:   0x1820dcc13: mov r9, r12
// asm:   0x1820dcc16: mov r8, rsi
// asm:   0x1820dcc19: mov rdx, r14
// asm:   0x1820dcc1c: mov rcx, rax
// asm:   0x1820dcc1f: call 0x1820a0110  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x1820dcc24: mov rbx, qword ptr [rsp + 0xf8]
// asm:   0x1820dcc2c: test rbx, rbx
// asm:   0x1820dcc2f: je 0x1820dcc66
// asm:   0x1820dcc31: lea rcx, [rip + 0x1fb70f8]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x1820dcc38: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dcc3d: mov rdx, qword ptr [rsp + 0x100]
// asm:   0x1820dcc45: mov r8, rax
// asm:   0x1820dcc48: mov rcx, rbx
// asm:   0x1820dcc4b: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x1820dcc66: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1820dcd2c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820dcd87: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18333e220: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e225: push rbp
// asm:   0x18333e226: sub rsp, 0x40
// asm:   0x18333e22a: mov rbp, rdx
// asm:   0x18333e22d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333e234: mov rcx, qword ptr [rax]
// asm:   0x18333e237: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333e23b: movabs rax, 0
// asm:   0x18333e245: add rsp, 0x40
// asm:   0x18333e249: pop rbp
// asm:   0x18333e24a: ret 
// asm:   0x18333e250: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e255: push rbx
// asm:   0x18333e256: push rbp
// asm:   0x18333e257: push rdi
// asm:   0x18333e258: sub rsp, 0x40
// asm:   0x18333e25c: mov rbp, rdx
// asm:   0x18333e25f: mov rdi, qword ptr [rbp + 0xa8]
// asm:   0x18333e266: mov rax, qword ptr [rdi]
// asm:   0x18333e269: mov rbx, qword ptr [rax]
// asm:   0x18333e26c: lea rcx, [rip + 0xd3bb35]  ; TypeInfo_System_Reflection_TargetInvocationException
// asm:   0x18333e273: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e278: mov rcx, rax
// asm:   0x18333e27b: mov rdx, rbx
// asm:   0x18333e27e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e283: test al, al
// asm:   0x18333e285: mov rax, qword ptr [rdi]
// asm:   0x18333e288: je 0x18333e2a2
// asm:   0x18333e28a: movsxd rcx, dword ptr [rbp + 0x48]
// asm:   0x18333e28e: mov qword ptr [rbp + rcx*8 + 0x40], rax
// asm:   0x18333e293: inc dword ptr [rbp + 0x48]
// asm:   0x18333e296: movabs rax, 0
// asm:   0x18333e2a0: jmp 0x18333e2f0
// asm:   0x18333e2a2: mov rbx, qword ptr [rax]
// asm:   0x18333e2a5: lea rcx, [rip + 0xd3acac]  ; TypeInfo_System_Exception
// asm:   0x18333e2ac: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e2b1: mov rcx, rax
// asm:   0x18333e2b4: mov rdx, rbx
// asm:   0x18333e2b7: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e2bc: test al, al
// asm:   0x18333e2be: mov rax, qword ptr [rdi]
// asm:   0x18333e2c1: je 0x18333e2db
// asm:   0x18333e2c3: movsxd rcx, dword ptr [rbp + 0x48]
// asm:   0x18333e2c7: mov qword ptr [rbp + rcx*8 + 0x40], rax
// asm:   0x18333e2cc: inc dword ptr [rbp + 0x48]
// asm:   0x18333e2cf: movabs rax, 1
// asm:   0x18333e2d9: jmp 0x18333e2f0
// asm:   0x18333e2db: mov qword ptr [rbp + 0x70], rax
// asm:   0x18333e2df: lea rdx, [rip + 0xc9dca2]
// asm:   0x18333e2e6: lea rcx, [rbp + 0x70]
// asm:   0x18333e2ea: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e2f0: add rsp, 0x40
// asm:   0x18333e2f4: pop rdi
// asm:   0x18333e2f5: pop rbp
// asm:   0x18333e2f6: pop rbx
// asm:   0x18333e2f7: ret 

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateMethod
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_String_o *methodName,System_Object_array *parameterValues,int32_t callerLineNumber,
          MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_00;
  System_Collections_Generic_List_CustomLogicError__o *pSVar2;
  System_Nullable_CustomLogicSourceType__Fields ns;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o *pSVar3;
  void *pvVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  CustomLogic_CustomLogicManager_o *__this_01;
  bool bVar6;
  int32_t iVar7;
  Il2CppObject *pIVar8;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar9;
  System_String_o *pSVar10;
  CustomLogic_CustomLogicError_o *__this_02;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_string__object__o *pSVar14;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar15;
  System_String_o *str0;
  Il2CppClass *pIVar16;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  uint index;
  Il2CppObject local_res8;
  System_String_o *local_res18;
  Il2CppObject *local_res20;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_98;
  UnityEngine_Coroutine_o *local_80 [3];
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_68 [2];
  
  local_res8.klass = (Il2CppClass *)__this;
  local_res8.monitor = classInstance;
  local_res18 = methodName;
  if (Il2CppMethodInitialized_184346a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicError);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&" not found in class ");
    il2cpp_codegen_initialize_runtime_metadata(&"Method ");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom logic runtime error: ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a0b = '\x01';
  }
  index = 0;
  local_res20 = (Il2CppObject *)0x0;
  local_80[0] = (UnityEngine_Coroutine_o *)0x0;
  *(int32_t *)&(local_res8.klass)->static_fields = callerLineNumber;
  if (parameterValues == (System_Object_array *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    parameterValues = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
  }
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar6 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                    (classInstance,methodName,&local_res20,(MethodInfo *)0x0);
  if ((bVar6) && (local_res20 != (Il2CppObject *)0x0)) {
    pIVar16 = local_res20->klass;
    bVar1 = (TypeInfo_CustomLogic_CLMethodBinding->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar16->_2).typeHierarchyDepth) &&
       ((pIVar16->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding)) {
      pIVar8 = (Il2CppObject *)
               (*pIVar16->vtable[4].methodPtr)
                         (local_res20,classInstance,parameterValues,pIVar16->vtable[4].method);
      return pIVar8;
    }
  }
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if ((bVar1 <= (classInstance->klass->_2).typeHierarchyDepth) &&
     ((classInstance->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
    NullCheck(classInstance);
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_180003110(6,classInstance);
    pSVar10 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
    str0 = il2cpp_codegen_get_runtime_metadata(&"Method ");
    pSVar13 = System_String__Concat_1969590(str0,methodName,pSVar10,pSVar13,(MethodInfo *)0x0);
    pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
    System_Exception___ctor_1b6abf0(__this_03,pSVar13,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateMethod);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
  }
  pSVar14 = (classInstance->fields).Variables;
  if (pSVar14 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
                     (Il2CppObject *)methodName,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
  if (bVar6) {
    pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(classInstance->fields).Variables;
    if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar12,(Il2CppObject *)methodName,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    if (pIVar8 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar8->klass->_2).typeHierarchyDepth) &&
         ((pIVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
        pCVar11 = pIVar8[1].monitor;
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)pIVar8[1].klass;
        local_res8.monitor = classInstance;
        goto label_1820dc410;
      }
    }
  }
  pIVar16 = ((local_res8.klass)->_1).element_class;
  if (pIVar16 == (Il2CppClass *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(pIVar16->_1).namespaze;
  pIVar8 = (Il2CppObject *)
           (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                     (classInstance,(classInstance->klass->vtable)._6_unknown.method);
  if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar12,pIVar8,
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                     );
  if (pCVar9 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pCVar9->fields).Methods;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)methodName,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
                    );
  if (!bVar6) {
    pSVar13 = (System_String_o *)
              (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                        (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    pSVar13 = System_String__Concat_1969590
                        ("Method ",methodName," not found in class ",pSVar13,(MethodInfo *)0x0);
    if (*(bool *)&((local_res8.klass)->_1).nestedTypes == false) {
      pSVar13 = System_String__Concat_1969e50("Custom logic runtime error: ",pSVar13,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError
                ((CustomLogic_CustomLogicEvaluator_o *)local_res8.klass,pSVar13,true,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    pSVar2 = (System_Collections_Generic_List_CustomLogicError__o *)
             ((local_res8.klass)->_1).implementedInterfaces;
    pSVar10 = (System_String_o *)
              (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                        (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    ns = (classInstance->fields)._Namespace_k__BackingField.fields;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicError);
    CustomLogic_CustomLogicError___ctor
              (__this_02,pSVar13,pSVar10,methodName,0,"",
               (System_Nullable_CustomLogicSourceType__o)ns,(MethodInfo *)0x0);
    if (pSVar2 != (System_Collections_Generic_List_CustomLogicError__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar2,__this_02,MethodInfo_System_Collections_Generic_List_CustomLogicError_Add);
      return (Il2CppObject *)0x0;
    }
    ThrowNullReferenceException();
  }
  pIVar16 = ((local_res8.klass)->_1).element_class;
  if (pIVar16 == (Il2CppClass *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(pIVar16->_1).namespaze;
  pIVar8 = (Il2CppObject *)
           (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                     (classInstance,(classInstance->klass->vtable)._6_unknown.method);
  if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar12,pIVar8,
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                     );
  if (pCVar9 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar9->fields).Methods;
  if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar12,(Il2CppObject *)methodName,
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
                      );
label_1820dc410:
  if (pCVar11 == (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar11->fields).Coroutine == false) {
    *(int32_t *)&(local_res8.klass)->static_fields = (pCVar11->fields).Line;
    if (*(bool *)&((local_res8.klass)->_1).nestedTypes != false) {
      if ((Il2CppClass *)classInstance == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                *)((local_res8.klass)->_1).interfaceOffsets;
      pvVar4 = (((Il2CppClass *)classInstance)->_1).image;
      pIVar8 = (Il2CppObject *)
               (**(code **)((longlong)pvVar4 + 0x198))
                         (classInstance,*(undefined8 *)((longlong)pvVar4 + 0x1a0));
      local_98.fields.Item1 = (Il2CppObject *)0x0;
      local_98.fields.Item2 = (Il2CppObject *)0x0;
      local_98.fields.Item3.fields.hasValue = false;
      local_98.fields.Item3.fields._1_3_ = 0;
      local_98.fields.Item3.fields.value = 0;
      System_ValueTuple_object__object__Nullable_Int32Enum_____ctor
                (&local_98,pIVar8,(Il2CppObject *)methodName,
                 (System_Nullable_Int32Enum__o)
                 *(System_Nullable_Int32Enum__Fields *)
                  ((longlong)&(((Il2CppClass *)classInstance)->_1).byval_arg.data + 4),
                 (MethodInfo_1046120 *)
                 MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
      if (pSVar3 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                     *)0x0) {
        ThrowNullReferenceException();
      }
      local_68[0].fields.Item1 = local_98.fields.Item1;
      local_68[0].fields.Item2 = local_98.fields.Item2;
      local_68[0].fields.Item3.fields = local_98.fields.Item3.fields;
      System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Push
                ((System_Collections_Generic_Stack_T__o *)pSVar3,local_68,
                 (MethodInfo_CFD6E0 *)
                 MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
                );
    }
    local_98.fields.Item1 = (Il2CppObject *)0x0;
    local_98.fields.Item2 = &local_res8;
    if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object)
      ;
    }
    pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Pool_CollectionPool_object__StyleSelectorHelper_SelectorWorkItem___Get
                        ((MethodInfo_12C1CC0 *)
                         MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
                        );
    if (parameterValues == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pCVar11->fields).ParameterNames;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar7 = (pSVar5->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar7 = System_Math__Min_1b2c2d0((int32_t)parameterValues->max_length,iVar7,(MethodInfo *)0x0);
    for (; (int)index < iVar7; index = index + 1) {
      pSVar5 = (pCVar11->fields).ParameterNames;
      if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar13 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar5,index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)parameterValues->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar12,(Il2CppObject *)pSVar13,parameterValues->m_Items[(int)index],
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlock
              ((CustomLogic_CustomLogicEvaluator_o *)local_res8.klass,classInstance,
               (System_Collections_Generic_Dictionary_string__object__o *)pSVar12,(pCVar11->fields).Statements
               ,(Il2CppObject **)local_80,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object)
      ;
    }
    UnityEngine_Pool_CollectionPool_object__StyleSelectorHelper_SelectorWorkItem___Release
              ((Il2CppObject *)pSVar12,
               (MethodInfo_12C1D90 *)
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    pUVar15 = local_80[0];
    if (*(bool *)&((local_res8.klass)->_1).nestedTypes != false) {
      pSVar3 = (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                *)((local_res8.klass)->_1).interfaceOffsets;
      if (pSVar3 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                     *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Pop
                (local_68,(System_Collections_Generic_Stack_T__o *)pSVar3,
                 (MethodInfo_CFC400 *)
                 MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
                );
    }
  }
  else {
    pSVar14 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if (parameterValues == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pCVar11->fields).ParameterNames;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar7 = (pSVar5->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar7 = System_Math__Min_1b2c2d0((int32_t)parameterValues->max_length,iVar7,(MethodInfo *)0x0);
    for (; (int)index < iVar7; index = index + 1) {
      pSVar5 = (pCVar11->fields).ParameterNames;
      if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar13 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar5,index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)parameterValues->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar14 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar14,(Il2CppObject *)pSVar13,
                 parameterValues->m_Items[(int)index],
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
    routine = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                        ((CustomLogic_CustomLogicEvaluator_o *)local_res8.klass,classInstance,pSVar14,
                         (pCVar11->fields).Statements,(MethodInfo *)0x0);
    if (__this_01 == (CustomLogic_CustomLogicManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this_01,routine,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)pUVar15;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_UserMethod_o* userMethod, System_Object_array* parameterValues, const MethodInfo* method);
// 0x1820dcd90
// eh: try 0x1820dceda..0x1820dcfad -> pad 0x18333e340 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dcfad..0x1820dd0bb -> pad 0x18333e310 catch Il2CppExceptionWrapper
// eh: try 0x1820dd0bb..0x1820dd36f -> pad 0x18333e340 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dd735..0x1820dd73b -> pad 0x18333e310 catch Il2CppExceptionWrapper
// eh: try 0x1820dd73b..0x1820dd746 -> pad 0x18333e340 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dd746..0x1820dd756 -> pad 0x18333e310 catch Il2CppExceptionWrapper
// eh: try 0x1820dd756..0x1820dd75c -> pad 0x18333e340 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x1820dd75c..0x1820dd762 -> pad 0x18333e310 catch Il2CppExceptionWrapper
// eh: try 0x1820dd762..0x1820dd786 -> pad 0x18333e340 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// asm: 342 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820dd0eb: nop 
// asm:   0x1820dd0ec: jmp 0x1820dd70f
// asm:   0x1820dd0f1: lea rcx, [rsp + 0x60]
// asm:   0x1820dd0f6: call 0x1820d5510  ; il2cpp_runtime_helper_1820d5510()
// asm:   0x1820dd0fb: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820dd100: test rcx, rcx
// asm:   0x1820dd103: jne 0x1820dd762
// asm:   0x1820dd109: xor r8d, r8d
// asm:   0x1820dd10c: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dd114: mov edx, dword ptr [rcx + 0xb8]
// asm:   0x1820dd11a: call 0x1820dee30  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x1820dd11f: mov qword ptr [rsp + 0xf8], rax
// asm:   0x1820dd127: lea rcx, [rip + 0x1fd0eb2]  ; TypeInfo_string_array
// asm:   0x1820dd12e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd133: mov rcx, rax
// asm:   0x1820dd136: mov edx, 6
// asm:   0x1820dd13b: call 0x180416200  ; SZArrayNew()
// asm:   0x1820dd140: mov rbx, rax
// asm:   0x1820dd143: test rax, rax
// asm:   0x1820dd146: je 0x1820dd72f
// asm:   0x1820dd14c: lea rcx, [rip + 0x1fb75e5]  ; "Custom logic runtime error at method "
// asm:   0x1820dd153: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd158: cmp dword ptr [rbx + 0x18], 0
// asm:   0x1820dd15c: jbe 0x1820dd786
// asm:   0x1820dd162: mov qword ptr [rbx + 0x20], rax
// asm:   0x1820dd166: lea rcx, [rbx + 0x20]
// asm:   0x1820dd16a: mov rdx, rax
// asm:   0x1820dd16d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd172: cmp dword ptr [rbx + 0x18], 1
// asm:   0x1820dd176: jbe 0x1820dd786
// asm:   0x1820dd17c: mov r13, qword ptr [rsp + 0x78]
// asm:   0x1820dd181: mov qword ptr [rbx + 0x28], r13
// asm:   0x1820dd185: lea rcx, [rbx + 0x28]
// asm:   0x1820dd189: mov rdx, r13
// asm:   0x1820dd18c: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd191: lea rcx, [rip + 0x1fbc3a0]  ; " in class "
// asm:   0x1820dd198: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd19d: cmp dword ptr [rbx + 0x18], 2
// asm:   0x1820dd1a1: jbe 0x1820dd786
// asm:   0x1820dd1a7: mov qword ptr [rbx + 0x30], rax
// asm:   0x1820dd1ab: lea rcx, [rbx + 0x30]
// asm:   0x1820dd1af: mov rdx, rax
// asm:   0x1820dd1b2: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd1b7: mov r14, qword ptr [rsp + 0x80]
// asm:   0x1820dd1bf: test r14, r14
// asm:   0x1820dd1c2: je 0x1820dd72f
// asm:   0x1820dd1c8: mov rsi, r14
// asm:   0x1820dd1cb: mov rax, qword ptr [r14]
// asm:   0x1820dd1ce: mov rdx, qword ptr [rax + 0x1a0]
// asm:   0x1820dd1d5: mov rcx, r14
// asm:   0x1820dd1d8: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x1820dd1de: cmp dword ptr [rbx + 0x18], 3
// asm:   0x1820dd1e2: jbe 0x1820dd786
// asm:   0x1820dd1e8: mov qword ptr [rbx + 0x38], rax
// asm:   0x1820dd1ec: lea rcx, [rbx + 0x38]
// asm:   0x1820dd1f0: mov rdx, rax
// asm:   0x1820dd1f3: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd1f8: lea rcx, [rip + 0x201a369]  ; ": "
// asm:   0x1820dd1ff: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd204: cmp dword ptr [rbx + 0x18], 4
// asm:   0x1820dd208: jbe 0x1820dd786
// asm:   0x1820dd20e: mov ecx, dword ptr [rsp + 0x50]
// asm:   0x1820dd212: dec ecx
// asm:   0x1820dd214: movsxd rdx, ecx
// asm:   0x1820dd217: mov rdi, qword ptr [rsp + rdx*8 + 0x48]
// asm:   0x1820dd21c: mov qword ptr [rbx + 0x40], rax
// asm:   0x1820dd220: lea rcx, [rbx + 0x40]
// asm:   0x1820dd224: mov rdx, rax
// asm:   0x1820dd227: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd22c: test rdi, rdi
// asm:   0x1820dd22f: je 0x1820dd72f
// asm:   0x1820dd235: mov rcx, qword ptr [rdi + 0x28]
// asm:   0x1820dd239: test rcx, rcx
// asm:   0x1820dd23c: je 0x1820dd374
// asm:   0x1820dd242: mov rax, qword ptr [rcx]
// asm:   0x1820dd245: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dd24c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dd252: xor r15d, r15d
// asm:   0x1820dd255: jmp 0x1820dd37a
// asm:   0x1820dd2b9: nop dword ptr [rax]
// asm:   0x1820dd374: xor r15d, r15d
// asm:   0x1820dd377: mov eax, r15d
// asm:   0x1820dd37a: cmp dword ptr [rbx + 0x18], 5
// asm:   0x1820dd37e: jbe 0x1820dd786
// asm:   0x1820dd384: mov qword ptr [rbx + 0x48], rax
// asm:   0x1820dd388: lea rcx, [rbx + 0x48]
// asm:   0x1820dd38c: mov rdx, rax
// asm:   0x1820dd38f: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd394: xor edx, edx
// asm:   0x1820dd396: mov rcx, rbx
// asm:   0x1820dd399: call 0x181969830  ; System_String__Concat()
// asm:   0x1820dd39e: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dd3a6: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x1820dd3ad: jne 0x1820dd3c2
// asm:   0x1820dd3af: xor r9d, r9d
// asm:   0x1820dd3b2: mov r8b, 1
// asm:   0x1820dd3b5: mov rdx, rax
// asm:   0x1820dd3b8: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820dd3bd: jmp 0x1820dd70f
// asm:   0x1820dd3c2: mov rax, qword ptr [rcx + 0xa8]
// asm:   0x1820dd3c9: mov qword ptr [rsp + 0x40], rax
// asm:   0x1820dd3ce: mov rcx, qword ptr [rdi + 0x28]
// asm:   0x1820dd3d2: test rcx, rcx
// asm:   0x1820dd3d5: je 0x1820dd3ef
// asm:   0x1820dd3d7: mov rax, qword ptr [rcx]
// asm:   0x1820dd3da: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dd3e1: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dd3e7: mov r12, rax
// asm:   0x1820dd3ea: test rax, rax
// asm:   0x1820dd3ed: jne 0x1820dd405
// asm:   0x1820dd3ef: mov rax, qword ptr [rdi]
// asm:   0x1820dd3f2: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dd3f9: mov rcx, rdi
// asm:   0x1820dd3fc: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dd402: mov r12, rax
// asm:   0x1820dd405: mov r8, qword ptr [rsi]
// asm:   0x1820dd408: mov rdx, qword ptr [r8 + 0x1a0]
// asm:   0x1820dd40f: mov rcx, r14
// asm:   0x1820dd412: call qword ptr [r8 + 0x198]  ; vtable slot 6
// asm:   0x1820dd419: mov rsi, rax
// asm:   0x1820dd41c: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dd424: mov edi, dword ptr [rcx + 0xb8]
// asm:   0x1820dd42a: mov rbx, qword ptr [r14 + 0x24]
// asm:   0x1820dd42e: lea rcx, [rip + 0x200f493]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x1820dd435: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd43a: mov rcx, rax
// asm:   0x1820dd43d: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820dd442: mov r14, rax
// asm:   0x1820dd445: mov qword ptr [rsp + 0x38], r15
// asm:   0x1820dd44a: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1820dd44f: mov rax, qword ptr [rsp + 0xf8]
// asm:   0x1820dd457: mov qword ptr [rsp + 0x28], rax
// asm:   0x1820dd45c: mov dword ptr [rsp + 0x20], edi
// asm:   0x1820dd460: mov r9, r13
// asm:   0x1820dd463: mov r8, rsi
// asm:   0x1820dd466: mov rdx, r12
// asm:   0x1820dd469: mov rcx, r14
// asm:   0x1820dd46c: call 0x1820a0110  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x1820dd471: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x1820dd476: test rbx, rbx
// asm:   0x1820dd479: je 0x1820dd72f
// asm:   0x1820dd47f: lea rcx, [rip + 0x1fb68aa]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x1820dd486: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd48b: mov rdx, r14
// asm:   0x1820dd48e: jmp 0x1820dd704
// asm:   0x1820dd493: xor r8d, r8d
// asm:   0x1820dd496: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dd49e: mov edx, dword ptr [rcx + 0xb8]
// asm:   0x1820dd4a4: call 0x1820dee30  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x1820dd4a9: mov r13, rax
// asm:   0x1820dd4ac: lea rcx, [rip + 0x1fd0b2d]  ; TypeInfo_string_array
// asm:   0x1820dd4b3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd4b8: mov rcx, rax
// asm:   0x1820dd4bb: mov edx, 8
// asm:   0x1820dd4c0: call 0x180416200  ; SZArrayNew()
// asm:   0x1820dd4c5: mov rbx, rax
// asm:   0x1820dd4c8: test rax, rax
// asm:   0x1820dd4cb: je 0x1820dd72f
// asm:   0x1820dd4d1: lea rcx, [rip + 0x1fb7180]  ; "Custom logic runtime error at line "
// asm:   0x1820dd4d8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd4dd: cmp dword ptr [rbx + 0x18], 0
// asm:   0x1820dd4e1: jbe 0x1820dd786
// asm:   0x1820dd4e7: mov qword ptr [rbx + 0x20], rax
// asm:   0x1820dd4eb: lea rcx, [rbx + 0x20]
// asm:   0x1820dd4ef: mov rdx, rax
// asm:   0x1820dd4f2: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd4f7: cmp dword ptr [rbx + 0x18], 1
// asm:   0x1820dd4fb: jbe 0x1820dd786
// asm:   0x1820dd501: mov qword ptr [rbx + 0x28], r13
// asm:   0x1820dd505: lea rcx, [rbx + 0x28]
// asm:   0x1820dd509: mov rdx, r13
// asm:   0x1820dd50c: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd511: lea rcx, [rip + 0x1fb3d58]  ; " at method "
// asm:   0x1820dd518: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd51d: cmp dword ptr [rbx + 0x18], 2
// asm:   0x1820dd521: jbe 0x1820dd786
// asm:   0x1820dd527: mov qword ptr [rbx + 0x30], rax
// asm:   0x1820dd52b: lea rcx, [rbx + 0x30]
// asm:   0x1820dd52f: mov rdx, rax
// asm:   0x1820dd532: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd537: cmp dword ptr [rbx + 0x18], 3
// asm:   0x1820dd53b: jbe 0x1820dd786
// asm:   0x1820dd541: mov r12, qword ptr [rsp + 0x78]
// asm:   0x1820dd546: mov qword ptr [rbx + 0x38], r12
// asm:   0x1820dd54a: lea rcx, [rbx + 0x38]
// asm:   0x1820dd54e: mov rdx, r12
// asm:   0x1820dd551: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd556: lea rcx, [rip + 0x1fbbfdb]  ; " in class "
// asm:   0x1820dd55d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd562: cmp dword ptr [rbx + 0x18], 4
// asm:   0x1820dd566: jbe 0x1820dd786
// asm:   0x1820dd56c: mov qword ptr [rbx + 0x40], rax
// asm:   0x1820dd570: lea rcx, [rbx + 0x40]
// asm:   0x1820dd574: mov rdx, rax
// asm:   0x1820dd577: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd57c: mov r15, qword ptr [rsp + 0x80]
// asm:   0x1820dd584: test r15, r15
// asm:   0x1820dd587: je 0x1820dd72f
// asm:   0x1820dd58d: mov rsi, r15
// asm:   0x1820dd590: mov rax, qword ptr [r15]
// asm:   0x1820dd593: mov rdx, qword ptr [rax + 0x1a0]
// asm:   0x1820dd59a: mov rcx, r15
// asm:   0x1820dd59d: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x1820dd5a3: cmp dword ptr [rbx + 0x18], 5
// asm:   0x1820dd5a7: jbe 0x1820dd786
// asm:   0x1820dd5ad: mov qword ptr [rbx + 0x48], rax
// asm:   0x1820dd5b1: lea rcx, [rbx + 0x48]
// asm:   0x1820dd5b5: mov rdx, rax
// asm:   0x1820dd5b8: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd5bd: lea rcx, [rip + 0x2019fa4]  ; ": "
// asm:   0x1820dd5c4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd5c9: cmp dword ptr [rbx + 0x18], 6
// asm:   0x1820dd5cd: jbe 0x1820dd786
// asm:   0x1820dd5d3: mov ecx, dword ptr [rsp + 0x50]
// asm:   0x1820dd5d7: dec ecx
// asm:   0x1820dd5d9: movsxd rdx, ecx
// asm:   0x1820dd5dc: mov rdi, qword ptr [rsp + rdx*8 + 0x48]
// asm:   0x1820dd5e1: mov qword ptr [rbx + 0x50], rax
// asm:   0x1820dd5e5: lea rcx, [rbx + 0x50]
// asm:   0x1820dd5e9: mov rdx, rax
// asm:   0x1820dd5ec: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd5f1: test rdi, rdi
// asm:   0x1820dd5f4: je 0x1820dd72f
// asm:   0x1820dd5fa: mov rax, qword ptr [rdi]
// asm:   0x1820dd5fd: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dd604: mov rcx, rdi
// asm:   0x1820dd607: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dd60d: cmp dword ptr [rbx + 0x18], 7
// asm:   0x1820dd611: jbe 0x1820dd786
// asm:   0x1820dd617: mov qword ptr [rbx + 0x58], rax
// asm:   0x1820dd61b: lea rcx, [rbx + 0x58]
// asm:   0x1820dd61f: mov rdx, rax
// asm:   0x1820dd622: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820dd627: xor edx, edx
// asm:   0x1820dd629: mov rcx, rbx
// asm:   0x1820dd62c: call 0x181969830  ; System_String__Concat()
// asm:   0x1820dd631: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dd639: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x1820dd640: jne 0x1820dd658
// asm:   0x1820dd642: xor r9d, r9d
// asm:   0x1820dd645: mov r8b, 1
// asm:   0x1820dd648: mov rdx, rax
// asm:   0x1820dd64b: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820dd650: xor r15d, r15d
// asm:   0x1820dd653: jmp 0x1820dd70f
// asm:   0x1820dd658: mov rax, qword ptr [rcx + 0xa8]
// asm:   0x1820dd65f: mov qword ptr [rsp + 0xf8], rax
// asm:   0x1820dd667: mov rax, qword ptr [rdi]
// asm:   0x1820dd66a: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dd671: mov rcx, rdi
// asm:   0x1820dd674: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dd67a: mov r14, rax
// asm:   0x1820dd67d: mov r8, qword ptr [rsi]
// asm:   0x1820dd680: mov rdx, qword ptr [r8 + 0x1a0]
// asm:   0x1820dd687: mov rcx, r15
// asm:   0x1820dd68a: call qword ptr [r8 + 0x198]  ; vtable slot 6
// asm:   0x1820dd691: mov rsi, rax
// asm:   0x1820dd694: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x1820dd69c: mov edi, dword ptr [rcx + 0xb8]
// asm:   0x1820dd6a2: mov rbx, qword ptr [r15 + 0x24]
// asm:   0x1820dd6a6: lea rcx, [rip + 0x200f21b]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x1820dd6ad: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd6b2: mov rcx, rax
// asm:   0x1820dd6b5: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820dd6ba: mov qword ptr [rsp + 0x40], rax
// asm:   0x1820dd6bf: xor r15d, r15d
// asm:   0x1820dd6c2: mov qword ptr [rsp + 0x38], r15
// asm:   0x1820dd6c7: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1820dd6cc: mov qword ptr [rsp + 0x28], r13
// asm:   0x1820dd6d1: mov dword ptr [rsp + 0x20], edi
// asm:   0x1820dd6d5: mov r9, r12
// asm:   0x1820dd6d8: mov r8, rsi
// asm:   0x1820dd6db: mov rdx, r14
// asm:   0x1820dd6de: mov rcx, rax
// asm:   0x1820dd6e1: call 0x1820a0110  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x1820dd6e6: mov rbx, qword ptr [rsp + 0xf8]
// asm:   0x1820dd6ee: test rbx, rbx
// asm:   0x1820dd6f1: je 0x1820dd72f
// asm:   0x1820dd6f3: lea rcx, [rip + 0x1fb6636]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x1820dd6fa: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dd6ff: mov rdx, qword ptr [rsp + 0x40]
// asm:   0x1820dd704: mov r8, rax
// asm:   0x1820dd707: mov rcx, rbx
// asm:   0x1820dd70a: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x1820dd762: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820dd786: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18333e310: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e315: push rbp
// asm:   0x18333e316: sub rsp, 0x40
// asm:   0x18333e31a: mov rbp, rdx
// asm:   0x18333e31d: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x18333e324: mov rcx, qword ptr [rax]
// asm:   0x18333e327: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333e32b: movabs rax, 0
// asm:   0x18333e335: add rsp, 0x40
// asm:   0x18333e339: pop rbp
// asm:   0x18333e33a: ret 
// asm:   0x18333e340: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e345: push rbx
// asm:   0x18333e346: push rbp
// asm:   0x18333e347: push rdi
// asm:   0x18333e348: sub rsp, 0x40
// asm:   0x18333e34c: mov rbp, rdx
// asm:   0x18333e34f: mov rdi, qword ptr [rbp + 0xb8]
// asm:   0x18333e356: mov rax, qword ptr [rdi]
// asm:   0x18333e359: mov rbx, qword ptr [rax]
// asm:   0x18333e35c: lea rcx, [rip + 0xd3ba45]  ; TypeInfo_System_Reflection_TargetInvocationException
// asm:   0x18333e363: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e368: mov rcx, rax
// asm:   0x18333e36b: mov rdx, rbx
// asm:   0x18333e36e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e373: test al, al
// asm:   0x18333e375: mov rax, qword ptr [rdi]
// asm:   0x18333e378: je 0x18333e392
// asm:   0x18333e37a: movsxd rcx, dword ptr [rbp + 0x50]
// asm:   0x18333e37e: mov qword ptr [rbp + rcx*8 + 0x48], rax
// asm:   0x18333e383: inc dword ptr [rbp + 0x50]
// asm:   0x18333e386: movabs rax, 0
// asm:   0x18333e390: jmp 0x18333e3e6
// asm:   0x18333e392: mov rbx, qword ptr [rax]
// asm:   0x18333e395: lea rcx, [rip + 0xd3abbc]  ; TypeInfo_System_Exception
// asm:   0x18333e39c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e3a1: mov rcx, rax
// asm:   0x18333e3a4: mov rdx, rbx
// asm:   0x18333e3a7: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e3ac: test al, al
// asm:   0x18333e3ae: mov rax, qword ptr [rdi]
// asm:   0x18333e3b1: je 0x18333e3cb
// asm:   0x18333e3b3: movsxd rcx, dword ptr [rbp + 0x50]
// asm:   0x18333e3b7: mov qword ptr [rbp + rcx*8 + 0x48], rax
// asm:   0x18333e3bc: inc dword ptr [rbp + 0x50]
// asm:   0x18333e3bf: movabs rax, 1
// asm:   0x18333e3c9: jmp 0x18333e3e6
// asm:   0x18333e3cb: mov qword ptr [rbp + 0x88], rax
// asm:   0x18333e3d2: lea rdx, [rip + 0xc9dbaf]
// asm:   0x18333e3d9: lea rcx, [rbp + 0x88]
// asm:   0x18333e3e0: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e3e6: add rsp, 0x40
// asm:   0x18333e3ea: pop rdi
// asm:   0x18333e3eb: pop rbp
// asm:   0x18333e3ec: pop rbx
// asm:   0x18333e3ed: ret 

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_UserMethod_o *userMethod,
          System_Object_array *parameterValues,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar2;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o *pSVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  CustomLogic_CustomLogicManager_o *__this_00;
  int32_t iVar5;
  Il2CppObject *item1;
  System_Collections_Generic_Dictionary_object__object__o *localVariables;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_string__object__o *localVariables_00;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar7;
  uint index;
  Il2CppObject local_res8;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_90;
  UnityEngine_Coroutine_o *local_78;
  System_String_o *local_70;
  CustomLogic_CustomLogicClassInstance_o *local_68;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_58 [2];
  
  local_res8.klass = (Il2CppClass *)__this;
  if (Il2CppMethodInitialized_184346a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_184346a0c = '\x01';
  }
  index = 0;
  local_78 = (UnityEngine_Coroutine_o *)0x0;
  if ((userMethod == (CustomLogic_UserMethod_o *)0x0) ||
     (pCVar2 = (userMethod->fields).Ast, pCVar2 == (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar6 = (pCVar2->fields).Name;
  classInstance = (userMethod->fields).Owner;
  local_70 = pSVar6;
  local_68 = classInstance;
  if (parameterValues == (System_Object_array *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    parameterValues = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
  }
  bVar1 = (pCVar2->fields).Coroutine;
  *(int32_t *)&(local_res8.klass)->static_fields = (pCVar2->fields).Line;
  if (bVar1 == false) {
    if (*(bool *)&((local_res8.klass)->_1).nestedTypes != false) {
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                *)((local_res8.klass)->_1).interfaceOffsets;
      item1 = (Il2CppObject *)
              (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                        (classInstance,(classInstance->klass->vtable)._6_unknown.method);
      local_90.fields.Item1 = (Il2CppObject *)0x0;
      local_90.fields.Item2 = (Il2CppObject *)0x0;
      local_90.fields.Item3.fields.hasValue = false;
      local_90.fields.Item3.fields._1_3_ = 0;
      local_90.fields.Item3.fields.value = 0;
      System_ValueTuple_object__object__Nullable_Int32Enum_____ctor
                (&local_90,item1,(Il2CppObject *)pSVar6,
                 (System_Nullable_Int32Enum__o)(classInstance->fields)._Namespace_k__BackingField.fields,
                 (MethodInfo_1046120 *)
                 MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
      if (pSVar3 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                     *)0x0) {
        ThrowNullReferenceException();
      }
      local_58[0].fields.Item1 = local_90.fields.Item1;
      local_58[0].fields.Item2 = local_90.fields.Item2;
      local_58[0].fields.Item3.fields = local_90.fields.Item3.fields;
      System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Push
                ((System_Collections_Generic_Stack_T__o *)pSVar3,local_58,
                 (MethodInfo_CFD6E0 *)
                 MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
                );
    }
    local_90.fields.Item1 = (Il2CppObject *)0x0;
    local_90.fields.Item2 = &local_res8;
    if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object)
      ;
    }
    localVariables =
         (System_Collections_Generic_Dictionary_object__object__o *)
         UnityEngine_Pool_CollectionPool_object__StyleSelectorHelper_SelectorWorkItem___Get
                   ((MethodInfo_12C1CC0 *)
                    MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
                   );
    if (parameterValues == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (pCVar2->fields).ParameterNames;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar5 = (pSVar4->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    local_res8.monitor._0_4_ =
         System_Math__Min_1b2c2d0((int32_t)parameterValues->max_length,iVar5,(MethodInfo *)0x0);
    for (; (int)index < (int32_t)local_res8.monitor; index = index + 1) {
      pSVar4 = (pCVar2->fields).ParameterNames;
      if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)parameterValues->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      if (localVariables == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (localVariables,(Il2CppObject *)pSVar6,parameterValues->m_Items[(int)index],
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlock
              ((CustomLogic_CustomLogicEvaluator_o *)local_res8.klass,classInstance,
               (System_Collections_Generic_Dictionary_string__object__o *)localVariables,
               (pCVar2->fields).Statements,(Il2CppObject **)&local_78,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object)
      ;
    }
    UnityEngine_Pool_CollectionPool_object__StyleSelectorHelper_SelectorWorkItem___Release
              ((Il2CppObject *)localVariables,
               (MethodInfo_12C1D90 *)
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    pUVar7 = local_78;
    if (*(bool *)&((local_res8.klass)->_1).nestedTypes != false) {
      pSVar3 = (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                *)((local_res8.klass)->_1).interfaceOffsets;
      if (pSVar3 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                     *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Pop
                (local_58,(System_Collections_Generic_Stack_T__o *)pSVar3,
                 (MethodInfo_CFC400 *)
                 MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
                );
    }
  }
  else {
    localVariables_00 =
         il2cpp_codegen_object_new
                   ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)localVariables_00,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if (parameterValues == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (pCVar2->fields).ParameterNames;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar5 = (pSVar4->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar5 = System_Math__Min_1b2c2d0((int32_t)parameterValues->max_length,iVar5,(MethodInfo *)0x0);
    for (; (int)index < iVar5; index = index + 1) {
      pSVar4 = (pCVar2->fields).ParameterNames;
      if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)parameterValues->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      if (localVariables_00 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)localVariables_00,
                 (Il2CppObject *)pSVar6,parameterValues->m_Items[(int)index],
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
    routine = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                        ((CustomLogic_CustomLogicEvaluator_o *)local_res8.klass,classInstance,
                         localVariables_00,(pCVar2->fields).Statements,(MethodInfo *)0x0);
    if (__this_00 == (CustomLogic_CustomLogicManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                       ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)pUVar7;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateExpression (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, CustomLogic_CustomLogicBaseExpressionAst_o* expression, const MethodInfo* method);
// 0x1820daaa0
// eh: try 0x1820dac7a..0x1820dbdad -> pad 0x18333e1a0 (+13 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 152 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820db00f: mov r8, r15
// asm:   0x1820db012: jmp 0x1820db047
// asm:   0x1820db2f8: mov r15, r8
// asm:   0x1820db2fb: jmp 0x1820db9a0
// asm:   0x1820db483: jmp 0x1820db9a0
// asm:   0x1820db52f: mov r8, r15
// asm:   0x1820db532: jmp 0x1820db567
// asm:   0x1820db734: mov r15, r8
// asm:   0x1820db915: mov r15, qword ptr [rsp + 0x48]
// asm:   0x1820db91a: jmp 0x1820db9a0
// asm:   0x1820db964: mov r15, r13
// asm:   0x1820db967: jmp 0x1820db9a0
// asm:   0x1820db9a0: mov rax, r15
// asm:   0x1820db9b6: mov eax, dword ptr [rsp + 0x58]
// asm:   0x1820db9ba: dec eax
// asm:   0x1820db9bc: movsxd rcx, eax
// asm:   0x1820db9bf: mov rsi, qword ptr [rsp + rcx*8 + 0x50]
// asm:   0x1820db9c4: xor r8d, r8d
// asm:   0x1820db9c7: mov r13, qword ptr [rsp + 0xd0]
// asm:   0x1820db9cf: mov edx, dword ptr [r13 + 0xb8]
// asm:   0x1820db9d6: mov rcx, r13
// asm:   0x1820db9d9: call 0x1820dee30  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x1820db9de: mov r14, rax
// asm:   0x1820db9e1: mov qword ptr [rsp + 0xe8], rax
// asm:   0x1820db9e9: test rsi, rsi
// asm:   0x1820db9ec: je 0x1820dbb9e
// asm:   0x1820db9f2: mov r8, qword ptr [rsi]
// asm:   0x1820db9f5: mov rdx, qword ptr [r8 + 0x190]
// asm:   0x1820db9fc: mov rcx, rsi
// asm:   0x1820db9ff: call qword ptr [r8 + 0x188]  ; vtable slot 5
// asm:   0x1820dba06: mov rdi, rax
// asm:   0x1820dba09: lea rcx, [rip + 0x201bb58]  ; ": "
// asm:   0x1820dba10: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dba15: mov rbx, rax
// asm:   0x1820dba18: lea rcx, [rip + 0x1fb8c39]  ; "Custom logic runtime error at line "
// asm:   0x1820dba1f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dba24: mov rcx, rax
// asm:   0x1820dba27: xor r15d, r15d
// asm:   0x1820dba2a: mov qword ptr [rsp + 0x20], r15
// asm:   0x1820dba2f: mov r9, rdi
// asm:   0x1820dba32: mov r8, rbx
// asm:   0x1820dba35: mov rdx, r14
// asm:   0x1820dba38: call 0x181969590  ; System_String__Concat()
// asm:   0x1820dba3d: cmp byte ptr [r13 + 0xa0], r15b
// asm:   0x1820dba44: jne 0x1820dba5e
// asm:   0x1820dba46: xor r9d, r9d
// asm:   0x1820dba49: mov r8b, 1
// asm:   0x1820dba4c: mov rdx, rax
// asm:   0x1820dba4f: mov rcx, r13
// asm:   0x1820dba52: call 0x1820e0900  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x1820dba57: xor eax, eax
// asm:   0x1820dba59: jmp 0x1820db9a3
// asm:   0x1820dba5e: lea rcx, [rip + 0x1fa34c3]  ; ""
// asm:   0x1820dba65: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dba6a: mov r12, rax
// asm:   0x1820dba6d: mov rdi, qword ptr [rsp + 0xd8]
// asm:   0x1820dba75: test rdi, rdi
// asm:   0x1820dba78: je 0x1820dbb9e
// asm:   0x1820dba7e: mov r14, qword ptr [r13 + 0xb0]
// asm:   0x1820dba85: test r14, r14
// asm:   0x1820dba88: je 0x1820dbb9e
// asm:   0x1820dba8e: mov rbx, qword ptr [rdi + 0x24]
// asm:   0x1820dba92: lea rcx, [rip + 0x201fe4f]  ; MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_get_Cou
// asm:   0x1820dba99: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dba9e: cmp dword ptr [r14 + 0x18], r15d
// asm:   0x1820dbaa2: jle 0x1820dbaf0
// asm:   0x1820dbaa4: mov r14, qword ptr [r13 + 0xb0]
// asm:   0x1820dbaab: test r14, r14
// asm:   0x1820dbaae: je 0x1820dbb9e
// asm:   0x1820dbab4: lea rcx, [rip + 0x201fb95]  ; MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Peek
// asm:   0x1820dbabb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dbac0: mov r8, rax
// asm:   0x1820dbac3: mov rdx, r14
// asm:   0x1820dbac6: lea rcx, [rsp + 0x70]
// asm:   0x1820dbacb: call 0x180cfc260  ; System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Peek()
// asm:   0x1820dbad0: mov r12, qword ptr [rsp + 0x78]
// asm:   0x1820dbad5: lea rcx, [rip + 0x1fdce3c]  ; MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue
// asm:   0x1820dbadc: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dbae1: mov rax, qword ptr [rsp + 0x80]
// asm:   0x1820dbae9: test al, al
// asm:   0x1820dbaeb: je 0x1820dbaf0
// asm:   0x1820dbaed: mov rbx, rax
// asm:   0x1820dbaf0: mov rax, qword ptr [r13 + 0xa8]
// asm:   0x1820dbaf7: mov qword ptr [rsp + 0x50], rax
// asm:   0x1820dbafc: mov rax, qword ptr [rsi]
// asm:   0x1820dbaff: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1820dbb06: mov rcx, rsi
// asm:   0x1820dbb09: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1820dbb0f: mov r14, rax
// asm:   0x1820dbb12: mov r8, qword ptr [rdi]
// asm:   0x1820dbb15: mov rdx, qword ptr [r8 + 0x1a0]
// asm:   0x1820dbb1c: mov rcx, rdi
// asm:   0x1820dbb1f: call qword ptr [r8 + 0x198]  ; vtable slot 6
// asm:   0x1820dbb26: mov rsi, rax
// asm:   0x1820dbb29: mov edi, dword ptr [r13 + 0xb8]
// asm:   0x1820dbb30: lea rcx, [rip + 0x2010d91]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x1820dbb37: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dbb3c: mov rcx, rax
// asm:   0x1820dbb3f: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820dbb44: mov r13, rax
// asm:   0x1820dbb47: mov qword ptr [rsp + 0x38], r15
// asm:   0x1820dbb4c: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1820dbb51: mov rax, qword ptr [rsp + 0xe8]
// asm:   0x1820dbb59: mov qword ptr [rsp + 0x28], rax
// asm:   0x1820dbb5e: mov dword ptr [rsp + 0x20], edi
// asm:   0x1820dbb62: mov r9, r12
// asm:   0x1820dbb65: mov r8, rsi
// asm:   0x1820dbb68: mov rdx, r14
// asm:   0x1820dbb6b: mov rcx, r13
// asm:   0x1820dbb6e: call 0x1820a0110  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x1820dbb73: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x1820dbb78: test rbx, rbx
// asm:   0x1820dbb7b: je 0x1820dbb9e
// asm:   0x1820dbb7d: lea rcx, [rip + 0x1fb81ac]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x1820dbb84: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820dbb89: mov r8, rax
// asm:   0x1820dbb8c: mov rdx, r13
// asm:   0x1820dbb8f: mov rcx, rbx
// asm:   0x1820dbb92: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x1820dbb97: xor eax, eax
// asm:   0x1820dbb99: jmp 0x1820db9a3
// asm:   0x18333e1a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e1a5: push rbx
// asm:   0x18333e1a6: push rbp
// asm:   0x18333e1a7: push rdi
// asm:   0x18333e1a8: sub rsp, 0x40
// asm:   0x18333e1ac: mov rbp, rdx
// asm:   0x18333e1af: mov rdi, qword ptr [rbp + 0x68]
// asm:   0x18333e1b3: mov rax, qword ptr [rdi]
// asm:   0x18333e1b6: mov rbx, qword ptr [rax]
// asm:   0x18333e1b9: lea rcx, [rip + 0xd3ad98]  ; TypeInfo_System_Exception
// asm:   0x18333e1c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333e1c5: mov rcx, rax
// asm:   0x18333e1c8: mov rdx, rbx
// asm:   0x18333e1cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333e1d0: test al, al
// asm:   0x18333e1d2: mov rax, qword ptr [rdi]
// asm:   0x18333e1d5: je 0x18333e1ef
// asm:   0x18333e1d7: movsxd rcx, dword ptr [rbp + 0x58]
// asm:   0x18333e1db: mov qword ptr [rbp + rcx*8 + 0x50], rax
// asm:   0x18333e1e0: inc dword ptr [rbp + 0x58]
// asm:   0x18333e1e3: movabs rax, 0
// asm:   0x18333e1ed: jmp 0x18333e204
// asm:   0x18333e1ef: mov qword ptr [rbp + 0x60], rax
// asm:   0x18333e1f3: lea rdx, [rip + 0xc9dd8e]
// asm:   0x18333e1fa: lea rcx, [rbp + 0x60]
// asm:   0x18333e1fe: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333e204: add rsp, 0x40
// asm:   0x18333e208: pop rdi
// asm:   0x18333e209: pop rbp
// asm:   0x18333e20a: pop rbx
// asm:   0x18333e20b: ret 

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          CustomLogic_CustomLogicBaseExpressionAst_o *expression,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int32_t iVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  CustomLogic_CustomLogicClassInstance_c *pCVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar7;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  bool bVar10;
  uint32_t key;
  int *piVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  char *pcVar14;
  undefined1 *puVar15;
  System_Object_array *pSVar16;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar17;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar18;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar19;
  ulonglong *puVar20;
  undefined4 *puVar21;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  Il2CppClass *pIVar22;
  System_String_o *pSVar23;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  uint uVar24;
  System_Nullable_CustomLogicSourceType__Fields local_res20;
  System_Nullable_uint__Fields local_88;
  CustomLogic_CustomLogicBaseExpressionAst_c *local_80 [2];
  undefined4 local_70;
  
  if (Il2CppMethodInitialized_184346a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBinopExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFieldExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNotExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3810
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&"self");
    Il2CppMethodInitialized_184346a0d = '\x01';
  }
  pCVar19 = (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0;
  local_88.hasValue = false;
  local_88._1_3_ = 0;
  local_88.value = 0;
  local_80[0] = (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0;
  local_70 = 0;
  if (expression == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._currentLineNumber = (expression->fields).Line;
  if ((expression->fields).Type == 7) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)(*(uint64_t *)((char *)expression + 0x18));
  }
  else if ((expression->fields).Type == 0xb) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    pCVar19 = (*(uint64_t *)((char *)expression + 0x18));
    bVar10 = System_String__op_Equality((System_String_o *)pCVar19,"self",(MethodInfo *)0x0);
    if (!bVar10) {
      pSVar7 = (__this->fields)._staticClasses;
      if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                          (Il2CppObject *)pCVar19,
                          (MethodInfo_1455450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                         );
      if (!bVar10) {
        pSVar8 = (__this->fields)._namespacedStaticClasses;
        if (pSVar8 == (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                       *)0x0) {
          ThrowNullReferenceException();
        }
        bVar10 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                            (Il2CppObject *)pCVar19,
                            (MethodInfo_1455450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
                           );
        if (!bVar10) {
          if (localVariables != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                                 (Il2CppObject *)pCVar19,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            return pIVar12;
          }
          ThrowNullReferenceException();
        }
      }
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_88 = *(System_Nullable_uint__Fields *)&(classInstance->fields)._Namespace_k__BackingField.fields;
      if (local_88.hasValue != false) {
        pSVar8 = (__this->fields)._namespacedStaticClasses;
        if (pSVar8 == (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                       *)0x0) {
          ThrowNullReferenceException();
        }
        bVar10 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                            (Il2CppObject *)pCVar19,
                            (MethodInfo_1455450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3730
                           );
        if (bVar10) {
          pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._namespacedStaticClasses;
          if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_02 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar9,(Il2CppObject *)pCVar19,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_40c3810
                                );
          local_88 = *(System_Nullable_uint__Fields *)
                      &(classInstance->fields)._Namespace_k__BackingField.fields;
          key = System_Nullable_uint___get_Value
                          ((System_Nullable_uint__o *)&local_88,
                           (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
          if (__this_02 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar10 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                             (__this_02,key,(Il2CppObject **)local_80,
                              (MethodInfo_1450A20 *)
                              MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_TryGetValue
                             );
          if (bVar10) {
            return (Il2CppObject *)local_80[0];
          }
        }
      }
      pSVar7 = (__this->fields)._staticClasses;
      if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                          (Il2CppObject *)pCVar19,
                          (MethodInfo_1455450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                         );
      if (!bVar10) {
        NullCheck(classInstance);
        local_res20 = (System_Nullable_CustomLogicSourceType__Fields)
                      CustomLogic_CustomLogicClassInstance__get_Namespace(classInstance,(MethodInfo *)0x0);
        pIVar22 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Nullable_CustomLogicSourceType);
        pIVar12 = il2cpp_value_box(pIVar22,&local_res20);
        pSVar23 = il2cpp_codegen_get_runtime_metadata(&"Static class {0} not found for namespace {1}");
        pSVar23 = System_String__Format_196d440(pSVar23,(Il2CppObject *)pCVar19,pIVar12,(MethodInfo *)0x0);
        pIVar22 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar22);
        System_Exception___ctor_1b6abf0(__this_03,pSVar23,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateExpression);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      classInstance =
           System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar9,(Il2CppObject *)pCVar19,
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                     );
    }
  }
  else if ((expression->fields).Type == 5) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    if ((*(uint64_t *)((char *)expression + 0x20)) == (void *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = *(int32_t *)((longlong)(*(uint64_t *)((char *)expression + 0x20)) + 0x18);
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar16 = Unity_VisualScripting_ArrayPool_object___New
                        (iVar3,(MethodInfo_157C1E0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    pCVar18 = pCVar19;
    while( true ) {
      pSVar4 = (*(uint64_t *)((char *)expression + 0x20));
      if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar24 = (uint)pCVar18;
      if ((pSVar4->fields)._size <= (int)uVar24) break;
      pCVar17 = (CustomLogic_CustomLogicBaseExpressionAst_c *)
                System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          (pSVar4,uVar24,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      pCVar18 = pCVar19;
      if (pCVar17 != (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
        pCVar5 = (pCVar17->_1).image;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
        if (((pCVar5->_2).typeHierarchyDepth < bVar1) ||
           (pCVar18 = pCVar17,
           (pCVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar17);
        }
      }
      pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar18,(MethodInfo *)0x0);
      if (pSVar16 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((pSVar16->obj).klass)->_1).element_class),
         pIVar13 == (Il2CppObject *)0x0)) {
        pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
      }
      if ((uint)pSVar16->max_length <= uVar24) {
        ThrowIndexOutOfRangeException();
      }
      pSVar16->m_Items[(int)uVar24] = pIVar12;
      Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar24,pIVar12);
      pCVar18 = (CustomLogic_CustomLogicBaseExpressionAst_c *)(ulonglong)(uVar24 + 1);
    }
    pCVar18 = (*(uint64_t *)((char *)expression + 0x18));
    if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    }
    bVar10 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType((System_String_o *)pCVar18,(MethodInfo *)0x0);
    if (!bVar10) {
      pCVar6 = (__this->fields)._start;
      if (pCVar6 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (pCVar6->fields).Classes;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0)
      {
        ThrowNullReferenceException();
      }
      bVar10 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                          (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                          (MethodInfo_1455450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                         );
      if (!bVar10) {
        if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar10 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)localVariables,
                            (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                            (MethodInfo_1455450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
        if ((bVar10) &&
           (pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                                 (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item),
           pIVar12 != (Il2CppObject *)0x0)) {
          pIVar22 = pIVar12->klass;
          bVar1 = (TypeInfo_CustomLogic_CLMethodBinding->_2).typeHierarchyDepth;
          if ((bVar1 <= (pIVar22->_2).typeHierarchyDepth) &&
             ((pIVar22->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding)) {
            pIVar12 = (Il2CppObject *)
                      (*pIVar22->vtable[4].methodPtr)(pIVar12,classInstance,pSVar16,pIVar22->vtable[4].method)
            ;
            if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
            }
            Unity_VisualScripting_ArrayPool_object___Free
                      (pSVar16,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
            return pIVar12;
          }
        }
        pCVar18 = (CustomLogic_CustomLogicBaseExpressionAst_c *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                             (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
        if (pCVar18 != (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
          pIVar22 = (pCVar18->_1).image;
          bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
          if (((pIVar22->_2).typeHierarchyDepth < bVar1) ||
             (pCVar19 = pCVar18,
             (pIVar22->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar18);
          }
        }
        pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                            (__this,(CustomLogic_UserMethod_o *)pCVar19,pSVar16,(MethodInfo *)0x0);
        if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
        }
        Unity_VisualScripting_ArrayPool_object___Free
                  (pSVar16,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
        return pIVar12;
      }
    }
    if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    classInstance =
         CustomLogic_CustomLogicEvaluator__CreateClassInstance_20d7780
                   (__this,(System_String_o *)(*(uint64_t *)((char *)expression + 0x18)),pSVar16,true,
                    (System_Nullable_CustomLogicSourceType__o)
                    (classInstance->fields)._Namespace_k__BackingField.fields,(MethodInfo *)0x0);
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    Unity_VisualScripting_ArrayPool_object___Free
              (pSVar16,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
  }
  else if ((expression->fields).Type == 6) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicFieldExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,(*(uint64_t *)((char *)expression + 0x20)),(MethodInfo *)0x0);
    if (__this_01 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
    classInstance =
         (CustomLogic_CustomLogicClassInstance_o *)
         CustomLogic_CustomLogicClassInstance__GetVariable
                   (__this_01,(System_String_o *)(*(uint64_t *)((char *)expression + 0x18)),(MethodInfo *)0x0);
    if ((CustomLogic_CustomLogicBaseExpressionAst_c *)classInstance !=
        (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
      pIVar22 = (((CustomLogic_CustomLogicBaseExpressionAst_c *)classInstance)->_1).image;
      bVar1 = (TypeInfo_CustomLogic_CLPropertyBinding->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar22->_2).typeHierarchyDepth) &&
         ((pIVar22->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding)) {
        classInstance =
             (CustomLogic_CustomLogicClassInstance_o *)
             (*pIVar22->vtable[5].methodPtr)(classInstance,__this_01,pIVar22->vtable[5].method);
      }
    }
  }
  else if ((expression->fields).Type == 10) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicNotExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNotExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)(*(uint64_t *)((char *)expression + 0x18)),(MethodInfo *)0x0);
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar12->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar12,g_data_184354de8);
    }
    pcVar14 = il2cpp_object_unbox(pIVar12);
    local_res20.hasValue = *pcVar14 == '\0';
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354de8,&local_res20);
  }
  else if ((expression->fields).Type == 8) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    if ((*(uint64_t *)((char *)expression + 0x20)) == (void *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar12 = *(Il2CppObject **)((longlong)(*(uint64_t *)((char *)expression + 0x20)) + 0x18);
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar12->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar12,TypeInfo_CustomLogic_CustomLogicSymbol);
    }
    piVar11 = il2cpp_object_unbox(pIVar12);
    bVar1 = (TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception
                (expression,TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    }
    iVar2 = *piVar11;
    pCVar18 = (CustomLogic_CustomLogicBaseExpressionAst_c *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)(*(uint64_t *)((char *)expression + 0x18)),(MethodInfo *)0x0);
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)pCVar18;
    if (((iVar2 != 0x21) && (classInstance = (CustomLogic_CustomLogicClassInstance_o *)pCVar19, iVar2 == 0x22)
        ) && (pCVar18 != (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0)) {
      pCVar17 = pCVar19;
      if ((pCVar18->_1).image == g_data_184354e08) {
        pCVar17 = pCVar18;
      }
      if (pCVar17 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
        pCVar17 = pCVar19;
        if ((pCVar18->_1).image == g_data_184354e38) {
          pCVar17 = pCVar18;
        }
        if (pCVar17 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
          if ((pCVar18->_1).image == g_data_184354e40) {
            pCVar19 = pCVar18;
          }
          if (pCVar19 != (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
            if ((((pCVar18->_1).image)->_1).element_class != (g_data_184354e40->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            puVar20 = il2cpp_object_unbox((Il2CppObject *)pCVar18);
            local_res20 = (System_Nullable_CustomLogicSourceType__Fields)(*puVar20 ^ 0x8000000000000000);
            classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354e40,&local_res20);
          }
        }
        else {
          if ((((pCVar18->_1).image)->_1).element_class != (g_data_184354e38->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          puVar21 = il2cpp_object_unbox((Il2CppObject *)pCVar18);
          local_res20 = (System_Nullable_CustomLogicSourceType__Fields)
                        (CONCAT44(local_res20.value,*puVar21) ^ 0x80000000);
          classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354e38,&local_res20);
        }
      }
      else {
        if ((((pCVar18->_1).image)->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar11 = il2cpp_object_unbox((Il2CppObject *)pCVar18);
        local_res20._0_4_ = -*piVar11;
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354e08,&local_res20);
      }
    }
  }
  else if ((expression->fields).Type == 4) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    local_res20 = (System_Nullable_CustomLogicSourceType__Fields)
                  CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)expression[1].fields,
                             (MethodInfo *)0x0);
    if (local_res20 == (System_Nullable_CustomLogicSourceType__Fields)0x0) {
      local_res20.hasValue = false;
      local_res20._1_3_ = 0;
      local_res20.value = 0;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if ((*(byte *)(*(longlong *)local_res20 + 0x130) < bVar1) ||
         (*(CustomLogic_CustomLogicClassInstance_c **)
           (*(longlong *)(*(longlong *)local_res20 + 200) + -8 + (ulonglong)bVar1 * 8) !=
          TypeInfo_CustomLogic_CustomLogicClassInstance)) {
        il2cpp_codegen_raise_invalid_cast_exception(local_res20);
      }
    }
    if ((*(uint64_t *)((char *)expression + 0x20)) == (void *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = *(int32_t *)((longlong)(*(uint64_t *)((char *)expression + 0x20)) + 0x18);
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar16 = Unity_VisualScripting_ArrayPool_object___New
                        (iVar3,(MethodInfo_157C1E0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    pCVar18 = pCVar19;
    while( true ) {
      pSVar4 = (*(uint64_t *)((char *)expression + 0x20));
      if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar24 = (uint)pCVar18;
      if ((pSVar4->fields)._size <= (int)uVar24) break;
      pCVar17 = (CustomLogic_CustomLogicBaseExpressionAst_c *)
                System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          (pSVar4,uVar24,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      pCVar18 = pCVar19;
      if (pCVar17 != (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
        pCVar5 = (pCVar17->_1).image;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
        if (((pCVar5->_2).typeHierarchyDepth < bVar1) ||
           (pCVar18 = pCVar17,
           (pCVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar17);
        }
      }
      pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar18,(MethodInfo *)0x0);
      if (pSVar16 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((pSVar16->obj).klass)->_1).element_class),
         pIVar13 == (Il2CppObject *)0x0)) {
        pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
      }
      if ((uint)pSVar16->max_length <= uVar24) {
        ThrowIndexOutOfRangeException();
      }
      pSVar16->m_Items[(int)uVar24] = pIVar12;
      Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar24,pIVar12);
      pCVar18 = (CustomLogic_CustomLogicBaseExpressionAst_c *)(ulonglong)(uVar24 + 1);
    }
    classInstance =
         (CustomLogic_CustomLogicClassInstance_o *)
         CustomLogic_CustomLogicEvaluator__EvaluateMethod
                   (__this,(CustomLogic_CustomLogicClassInstance_o *)local_res20,
                    (System_String_o *)(*(uint64_t *)((char *)expression + 0x18)),pSVar16,(__this->fields)._currentLineNumber,
                    (MethodInfo *)0x0);
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    Unity_VisualScripting_ArrayPool_object___Free
              (pSVar16,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
  }
  else if ((expression->fields).Type == 9) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicBinopExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBinopExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    if (expression[1].fields == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
      ThrowNullReferenceException();
    }
    pIVar12 = *(Il2CppObject **)((longlong)expression[1].fields + 0x18);
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar12->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar12,TypeInfo_CustomLogic_CustomLogicSymbol);
    }
    piVar11 = il2cpp_object_unbox(pIVar12);
    iVar2 = *piVar11;
    pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)(*(uint64_t *)((char *)expression + 0x18)),(MethodInfo *)0x0);
    if (iVar2 == 0x1a) {
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar12->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar12,g_data_184354de8);
      }
      pcVar14 = il2cpp_object_unbox(pIVar12);
      if (*pcVar14 == '\0') {
        pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,(*(uint64_t *)((char *)expression + 0x20)),(MethodInfo *)0x0);
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar12->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar12,g_data_184354de8);
        }
        puVar15 = il2cpp_object_unbox(pIVar12);
        local_res20.hasValue = (bool)*puVar15;
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354de8,&local_res20);
      }
      else {
        local_res20.hasValue = true;
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354de8,&local_res20);
      }
    }
    else if (iVar2 == 0x19) {
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar12->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar12,g_data_184354de8);
      }
      pcVar14 = il2cpp_object_unbox(pIVar12);
      if (*pcVar14 == '\0') {
        local_res20 = (System_Nullable_CustomLogicSourceType__Fields)
                      ((ulonglong)local_res20 & 0xffffffffffffff00);
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354de8,&local_res20);
      }
      else {
        pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,(*(uint64_t *)((char *)expression + 0x20)),(MethodInfo *)0x0);
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar12->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar12,g_data_184354de8);
        }
        puVar15 = il2cpp_object_unbox(pIVar12);
        local_res20.hasValue = (bool)*puVar15;
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_value_box(g_data_184354de8,&local_res20);
      }
    }
    else {
      pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,(*(uint64_t *)((char *)expression + 0x20)),(MethodInfo *)0x0);
      classInstance =
           (CustomLogic_CustomLogicClassInstance_o *)
           CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
                     (__this,iVar2,pIVar12,pIVar13,(MethodInfo *)0x0);
    }
  }
  else {
    classInstance =
         (CustomLogic_CustomLogicClassInstance_o *)(CustomLogic_CustomLogicBaseExpressionAst_c *)0x0;
  }
  return (Il2CppObject *)classInstance;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateUnaryExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression (CustomLogic_CustomLogicEvaluator_o* __this, int32_t symbol, Il2CppObject* next, const MethodInfo* method);
// 0x1820dd790

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t symbol,Il2CppObject *next,MethodInfo *method)

{
  ulonglong *puVar1;
  Il2CppObject *pIVar2;
  uint *puVar3;
  int *piVar4;
  uint local_res10 [6];
  ulonglong local_18 [3];
  
  if (symbol == 0x21) {
    return next;
  }
  if ((symbol == 0x22) && (next != (Il2CppObject *)0x0)) {
    pIVar2 = (Il2CppObject *)0x0;
    if (next->klass == g_data_184354e08) {
      pIVar2 = next;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((next->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
        piVar4 = il2cpp_object_unbox(next);
        local_res10[0] = -*piVar4;
        pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
        return pIVar2;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (next->klass == g_data_184354e38) {
      pIVar2 = next;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((next->klass->_1).element_class == (g_data_184354e38->_1).element_class) {
        puVar3 = il2cpp_object_unbox(next);
        local_res10[0] = *puVar3 ^ 0x80000000;
        pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
        return pIVar2;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (next->klass == g_data_184354e40) {
      pIVar2 = next;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((next->klass->_1).element_class == (g_data_184354e40->_1).element_class) {
        puVar1 = il2cpp_object_unbox(next);
        local_18[0] = *puVar1 ^ 0x8000000000000000;
        pIVar2 = il2cpp_value_box(g_data_184354e40,local_18);
        return pIVar2;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBinopExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression (CustomLogic_CustomLogicEvaluator_o* __this, int32_t symbol, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820d97c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d9968: mov rcx, qword ptr [rip + 0x227b479]
// asm:   0x1820d996f: lea rdx, [rsp + 0x78]

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t symbol,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  int *piVar5;
  Il2CppClass *pIVar6;
  float fVar7;
  float fVar8;
  float local_res10 [6];
  
  pIVar6 = (Il2CppClass *)left;
  if (Il2CppMethodInitialized_184346a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346a0e = '\x01';
  }
  if (symbol == 0x21) {
    pIVar3 = CustomLogic_CustomLogicEvaluator__AddValues(__this,left,right,(MethodInfo *)0x0);
    return pIVar3;
  }
  if (symbol == 0x22) {
    pIVar3 = CustomLogic_CustomLogicEvaluator__SubtractValues(__this,left,right,(MethodInfo *)0x0);
    return pIVar3;
  }
  if (symbol == 0x23) {
    pIVar3 = CustomLogic_CustomLogicEvaluator__MultiplyValues(__this,left,right,(MethodInfo *)0x0);
    return pIVar3;
  }
  if (symbol == 0x24) {
    pIVar3 = CustomLogic_CustomLogicEvaluator__DivideValues(__this,left,right,(MethodInfo *)0x0);
    return pIVar3;
  }
  if (symbol == 0x25) {
    if (Il2CppMethodInitialized_184346a14 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
      Il2CppMethodInitialized_184346a14 = '\x01';
    }
    if (left != (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
      if (left->klass == g_data_184354e08) {
        pIVar3 = left;
      }
      if ((pIVar3 != (Il2CppObject *)0x0) && (right != (Il2CppObject *)0x0)) {
        pIVar3 = (Il2CppObject *)0x0;
        if (right->klass == g_data_184354e08) {
          pIVar3 = right;
        }
        if (pIVar3 != (Il2CppObject *)0x0) {
          if ((left->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(left,g_data_184354e08);
          }
          piVar4 = il2cpp_object_unbox(left);
          if ((right->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(right,g_data_184354e08);
          }
          piVar5 = il2cpp_object_unbox(right);
          local_res10[0] = (float)(*piVar4 % *piVar5);
          pIVar6 = g_data_184354e08;
          goto label_1820d9974;
        }
      }
      pIVar6 = left->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar6->_2).typeHierarchyDepth) &&
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d9a8d;
    }
    if (right != (Il2CppObject *)0x0) {
      pIVar6 = right->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar6->_2).typeHierarchyDepth) &&
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_1820d9a8d:
        pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                           (__this,left,right,(__this->fields).mod,(MethodInfo *)0x0);
        return pIVar3;
      }
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
    fVar8 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
    local_res10[0] = il2cpp_runtime_helper_1804f41a0(fVar7,fVar8,(MethodInfo *)pIVar6);
    pIVar6 = g_data_184354e38;
  }
  else {
    if (symbol == 0x1f) {
      bVar2 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this,left,right,(MethodInfo *)0x0);
    }
    else {
      if (symbol != 0x20) {
        if (symbol == 0x1b) {
          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
          fVar8 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
          local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,fVar7 < fVar8);
          pIVar6 = g_data_184354de8;
        }
        else if (symbol == 0x1c) {
          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
          fVar8 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
          local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,fVar8 < fVar7);
          pIVar6 = g_data_184354de8;
        }
        else if (symbol == 0x1d) {
          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
          fVar8 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
          local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,fVar7 <= fVar8);
          pIVar6 = g_data_184354de8;
        }
        else {
          if (symbol != 0x1e) {
            return (Il2CppObject *)0x0;
          }
          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
          fVar8 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
          local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,fVar8 <= fVar7);
          pIVar6 = g_data_184354de8;
        }
        goto label_1820d9974;
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this,left,right,(MethodInfo *)0x0);
      bVar2 = !bVar2;
    }
    local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,bVar2);
    pIVar6 = g_data_184354de8;
  }
label_1820d9974:
  pIVar3 = il2cpp_value_box(pIVar6,local_res10);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$ClassMathOperation
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ClassMathOperation (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, System_String_o* method, const MethodInfo* method);
// 0x1820d6e10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d6ecd: mov rbp, rbx
// asm:   0x1820d6ed0: jmp 0x1820d6f13
// asm:   0x1820d6f07: mov rbp, rsi

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ClassMathOperation
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          System_String_o *method,MethodInfo *methodInfo)

{
  byte bVar1;
  bool bVar2;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *pIVar5;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  
  if (Il2CppMethodInitialized_184346a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_184346a0f = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
label_1820d6ed2:
    if (right == (Il2CppObject *)0x0) {
      __this_01 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if (((right->klass->_2).typeHierarchyDepth < bVar1) ||
         (__this_01 = (CustomLogic_CustomLogicClassInstance_o *)right,
         (right->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
        il2cpp_codegen_raise_invalid_cast_exception(right);
      }
    }
    if (__this_01 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_1820d70e1;
  }
  else {
    pIVar5 = left->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pIVar5->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d6ed2;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pIVar5->_2).typeHierarchyDepth < bVar1) ||
       (__this_01 = (CustomLogic_CustomLogicClassInstance_o *)left,
       (pIVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(left);
    }
  }
  bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,method,(MethodInfo *)0x0);
  if (!bVar2) {
    NullCheck(__this_01);
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_180003110(6,__this_01);
    str2 = il2cpp_codegen_get_runtime_metadata(&" method found in class ");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No ");
    pSVar4 = System_String__Concat_1969590(str0,method,str2,pSVar4,(MethodInfo *)0x0);
    pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar5);
    System_Exception___ctor_1b6abf0(__this_00,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ClassMathOperation);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
  }
  parameterValues =
       Unity_VisualScripting_ArrayPool_object___New
                 (2,(MethodInfo_157C1E0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((left != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(left,(((parameterValues->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = left;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,left);
      if ((right != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(right,(((parameterValues->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = right;
        Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,right);
        pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (__this,__this_01,method,parameterValues,(__this->fields)._currentLineNumber,
                            (MethodInfo *)0x0);
        Unity_VisualScripting_ArrayPool_object___Free
                  (parameterValues,
                   (MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
        return pIVar3;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820d70e1:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$AddValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__AddValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820d5eb0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d5f92: jmp 0x1820d5f97
// asm:   0x1820d5f94: mov rcx, rbx
// asm:   0x1820d60ad: mov rax, rbx
// asm:   0x1820d60c5: xor r8d, r8d
// asm:   0x1820d60c8: mov rdx, rbx
// asm:   0x1820d60cb: mov rcx, rax
// asm:   0x1820d6130: mov rdx, rbx
// asm:   0x1820d6133: mov rbx, rax
// asm:   0x1820d6136: xor r8d, r8d
// asm:   0x1820d6139: mov rcx, rax
// asm:   0x1820d613c: jmp 0x1820d60ce

Il2CppObject *
CustomLogic_CustomLogicEvaluator__AddValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  float fVar7;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184346a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346a10 = '\x01';
  }
  str1 = (System_String_o *)0x0;
  pSVar6 = str1;
  if (left != (Il2CppObject *)0x0) {
    pSVar5 = str1;
    if (left->klass == g_data_184354e08) {
      pSVar5 = (System_String_o *)left;
    }
    if ((pSVar5 != (System_String_o *)0x0) && (right != (Il2CppObject *)0x0)) {
      pSVar5 = str1;
      if (right->klass == g_data_184354e08) {
        pSVar5 = (System_String_o *)right;
      }
      if (pSVar5 != (System_String_o *)0x0) {
        if ((right->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(right,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(right);
        if ((left->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
          iVar2 = *piVar3;
          piVar3 = il2cpp_object_unbox(left);
          local_res10[0] = (float)(*piVar3 + iVar2);
          pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
          return pIVar4;
        }
        il2cpp_codegen_raise_invalid_cast_exception(left,g_data_184354e08);
      }
    }
    if (left->klass == g_data_184354e50) {
      pSVar6 = (System_String_o *)left;
    }
  }
  pSVar5 = str1;
  if ((right != (Il2CppObject *)0x0) && (right->klass == g_data_184354e50)) {
    pSVar5 = (System_String_o *)right;
  }
  if (pSVar5 != (System_String_o *)0x0 || pSVar6 != (System_String_o *)0x0) {
    pSVar5 = str1;
    if (pSVar6 == (System_String_o *)0x0) {
      if (left != (Il2CppObject *)0x0) {
        pSVar5 = (System_String_o *)(*left->klass->vtable[3].methodPtr)(left,left->klass->vtable[3].method);
      }
      if (right != (Il2CppObject *)0x0) {
        if (right->klass == g_data_184354e50) {
          str1 = (System_String_o *)right;
        }
        if (str1 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(right);
        }
      }
    }
    else if (right == (Il2CppObject *)0x0) {
      if (left != (Il2CppObject *)0x0) {
        if (left->klass == g_data_184354e50) {
          pSVar5 = (System_String_o *)left;
        }
        if (pSVar5 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(left);
        }
      }
    }
    else {
      if (left != (Il2CppObject *)0x0) {
        if (left->klass == g_data_184354e50) {
          pSVar5 = (System_String_o *)left;
        }
        if (pSVar5 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(left);
        }
      }
      str1 = (System_String_o *)(*right->klass->vtable[3].methodPtr)(right,right->klass->vtable[3].method);
    }
    pSVar6 = System_String__Concat_1969e50(pSVar5,str1,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar6;
  }
  if (left == (Il2CppObject *)0x0) {
label_1820d5fec:
    if (right != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
         ((right->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d6015;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
    local_res10[0] = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
    local_res10[0] = local_res10[0] + fVar7;
    pIVar4 = il2cpp_value_box(g_data_184354e38,local_res10);
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((left->klass->_2).typeHierarchyDepth < bVar1) ||
       ((left->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d5fec;
label_1820d6015:
    pIVar4 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                       (__this,left,right,(__this->fields).add,(MethodInfo *)0x0);
  }
  return pIVar4;
}


// CustomLogic.CustomLogicEvaluator$$SubtractValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__SubtractValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820e3d20

Il2CppObject *
CustomLogic_CustomLogicEvaluator__SubtractValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184346a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346a11 = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (left->klass == g_data_184354e08) {
      pIVar4 = left;
    }
    if ((pIVar4 != (Il2CppObject *)0x0) && (right != (Il2CppObject *)0x0)) {
      pIVar4 = (Il2CppObject *)0x0;
      if (right->klass == g_data_184354e08) {
        pIVar4 = right;
      }
      if (pIVar4 != (Il2CppObject *)0x0) {
        if ((right->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(right,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(right);
        if ((left->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
          iVar2 = *piVar3;
          piVar3 = il2cpp_object_unbox(left);
          local_res10[0] = (float)(*piVar3 - iVar2);
          pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
          return pIVar4;
        }
        il2cpp_codegen_raise_invalid_cast_exception(left,g_data_184354e08);
      }
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (left->klass->_2).typeHierarchyDepth) &&
       ((left->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820e3e49;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_1820e3e49:
      pIVar4 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).sub,(MethodInfo *)0x0);
      return pIVar4;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar5 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_res10[0] = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_res10[0] = fVar5 - local_res10[0];
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar4;
}


// CustomLogic.CustomLogicEvaluator$$MultiplyValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__MultiplyValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820e0c50

Il2CppObject *
CustomLogic_CustomLogicEvaluator__MultiplyValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184346a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346a12 = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (left->klass == g_data_184354e08) {
      pIVar4 = left;
    }
    if ((pIVar4 != (Il2CppObject *)0x0) && (right != (Il2CppObject *)0x0)) {
      pIVar4 = (Il2CppObject *)0x0;
      if (right->klass == g_data_184354e08) {
        pIVar4 = right;
      }
      if (pIVar4 != (Il2CppObject *)0x0) {
        if ((right->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(right,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(right);
        if ((left->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
          iVar2 = *piVar3;
          piVar3 = il2cpp_object_unbox(left);
          local_res10[0] = (float)(iVar2 * *piVar3);
          pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
          return pIVar4;
        }
        il2cpp_codegen_raise_invalid_cast_exception(left,g_data_184354e08);
      }
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (left->klass->_2).typeHierarchyDepth) &&
       ((left->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820e0d78;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_1820e0d78:
      pIVar4 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).mul,(MethodInfo *)0x0);
      return pIVar4;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar5 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_res10[0] = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_res10[0] = local_res10[0] * fVar5;
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar4;
}


// CustomLogic.CustomLogicEvaluator$$DivideValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__DivideValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820d8e70

Il2CppObject *
CustomLogic_CustomLogicEvaluator__DivideValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184346a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346a13 = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (left->klass == g_data_184354e08) {
      pIVar4 = left;
    }
    if ((pIVar4 != (Il2CppObject *)0x0) && (right != (Il2CppObject *)0x0)) {
      pIVar4 = (Il2CppObject *)0x0;
      if (right->klass == g_data_184354e08) {
        pIVar4 = right;
      }
      if (pIVar4 != (Il2CppObject *)0x0) {
        if ((left->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(left,g_data_184354e08);
        }
        piVar2 = il2cpp_object_unbox(left);
        if ((right->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
          piVar3 = il2cpp_object_unbox(right);
          local_res10[0] = (float)(*piVar2 / *piVar3);
          pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
          return pIVar4;
        }
        il2cpp_codegen_raise_invalid_cast_exception(right,g_data_184354e08);
      }
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (left->klass->_2).typeHierarchyDepth) &&
       ((left->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d8f9e;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_1820d8f9e:
      pIVar4 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).div,(MethodInfo *)0x0);
      return pIVar4;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar5 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_res10[0] = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_res10[0] = fVar5 / local_res10[0];
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar4;
}


// CustomLogic.CustomLogicEvaluator$$ModuloValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ModuloValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820e0a70

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ModuloValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *method_00;
  float x;
  float y;
  float local_res10 [2];
  
  method_00 = (Il2CppClass *)right;
  if (Il2CppMethodInitialized_184346a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346a14 = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (left->klass == g_data_184354e08) {
      pIVar4 = left;
    }
    if ((pIVar4 != (Il2CppObject *)0x0) && (right != (Il2CppObject *)0x0)) {
      pIVar4 = (Il2CppObject *)0x0;
      if (right->klass == g_data_184354e08) {
        pIVar4 = right;
      }
      if (pIVar4 != (Il2CppObject *)0x0) {
        if ((left->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(left,g_data_184354e08);
        }
        piVar2 = il2cpp_object_unbox(left);
        if ((right->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
          piVar3 = il2cpp_object_unbox(right);
          local_res10[0] = (float)(*piVar2 % *piVar3);
          pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
          return pIVar4;
        }
        il2cpp_codegen_raise_invalid_cast_exception(right,g_data_184354e08);
      }
    }
    method_00 = left->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (method_00->_2).typeHierarchyDepth) &&
       ((method_00->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820e0b9e;
  }
  if (right != (Il2CppObject *)0x0) {
    method_00 = right->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (method_00->_2).typeHierarchyDepth) &&
       ((method_00->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_1820e0b9e:
      pIVar4 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).mod,(MethodInfo *)0x0);
      return pIVar4;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  x = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  y = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_res10[0] = il2cpp_runtime_helper_1804f41a0(x,y,(MethodInfo *)method_00);
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar4;
}


// CustomLogic.CustomLogicEvaluator$$CheckEquals
// il2cpp: bool CustomLogic_CustomLogicEvaluator__CheckEquals (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x1820d6970
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d6ae7: mov rax, qword ptr [rbx]
// asm:   0x1820d6aea: mov rdx, rdi
// asm:   0x1820d6aed: mov rcx, rbx
// asm:   0x1820d6af0: mov r8, qword ptr [rax + 0x140]
// asm:   0x1820d6af7: call qword ptr [rax + 0x138]  ; vtable slot 0
// asm:   0x1820d6afd: jmp 0x1820d69e4
// asm:   0x1820d6b02: xor al, al
// asm:   0x1820d6b04: jmp 0x1820d69e4
// asm:   0x1820d6c3f: jmp 0x1820d6d72
// asm:   0x1820d6d72: call 0x180416360  ; il2cpp_object_unbox()
// asm:   0x1820d6d77: movzx eax, byte ptr [rax]
// asm:   0x1820d6d7a: jmp 0x1820d69e4

bool CustomLogic_CustomLogicEvaluator__CheckEquals
               (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  undefined1 *puVar8;
  
  if (Il2CppMethodInitialized_184346a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_184346a15 = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
    if (right == (Il2CppObject *)0x0) {
      return true;
    }
label_1820d6a64:
    bVar3 = false;
  }
  else {
    pIVar2 = left->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d6a64;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(left);
    }
    bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable
                      ((CustomLogic_CustomLogicClassInstance_o *)left,(__this->fields).eq,(MethodInfo *)0x0);
  }
  if (right == (Il2CppObject *)0x0) {
label_1820d6acf:
    bVar4 = false;
  }
  else {
    pIVar2 = right->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_1820d6acf;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(right);
    }
    bVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                      ((CustomLogic_CustomLogicClassInstance_o *)right,(__this->fields).eq,(MethodInfo *)0x0);
  }
  if (bVar3 == false) {
    if (bVar4 == false) {
      if ((left != (Il2CppObject *)0x0) && (right != (Il2CppObject *)0x0)) {
        uVar5 = (*left->klass->vtable[0].methodPtr)(left,right,left->klass->vtable[0].method);
        return (bool)uVar5;
      }
      return false;
    }
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar6 = Unity_VisualScripting_ArrayPool_object___New
                       (2,(MethodInfo_157C1E0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((left != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(left,(((pSVar6->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = left;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items,left);
        if ((right != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(right,(((pSVar6->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[1] = right;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,right);
          if (right != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
            if (((right->klass->_2).typeHierarchyDepth < bVar1) ||
               ((right->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
              il2cpp_codegen_raise_invalid_cast_exception(right);
            }
          }
          pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                             (__this,(CustomLogic_CustomLogicClassInstance_o *)right,(__this->fields).eq,
                              pSVar6,(__this->fields)._currentLineNumber,(MethodInfo *)0x0);
          Unity_VisualScripting_ArrayPool_object___Free
                    (pSVar6,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
          if (pIVar7 != (Il2CppObject *)0x0) {
            if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar7,g_data_184354de8);
            }
label_1820d6d72:
            puVar8 = il2cpp_object_unbox(pIVar7);
            return (bool)*puVar8;
          }
          goto label_1820d6d7f;
        }
      }
label_1820d6dfb:
      ThrowIndexOutOfRangeException();
    }
  }
  else {
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar6 = Unity_VisualScripting_ArrayPool_object___New
                       (2,(MethodInfo_157C1E0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((left != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(left,(((pSVar6->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = left;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items,left);
        if ((right != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(right,(((pSVar6->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[1] = right;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,right);
          if (left != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
            if (((left->klass->_2).typeHierarchyDepth < bVar1) ||
               ((left->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
              il2cpp_codegen_raise_invalid_cast_exception(left);
            }
          }
          pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                             (__this,(CustomLogic_CustomLogicClassInstance_o *)left,(__this->fields).eq,pSVar6
                              ,(__this->fields)._currentLineNumber,(MethodInfo *)0x0);
          Unity_VisualScripting_ArrayPool_object___Free
                    (pSVar6,(MethodInfo_157BC80 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
          if (pIVar7 != (Il2CppObject *)0x0) {
            if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar7,g_data_184354de8);
            }
            goto label_1820d6d72;
          }
          goto label_1820d6d7f;
        }
      }
      goto label_1820d6dfb;
    }
  }
label_1820d6d7f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<bool>
// il2cpp: bool CustomLogic_CustomLogicEvaluator__ConvertTo_bool_ (Il2CppObject* obj, const MethodInfo_66E400* method);
// 0x18066e400

bool CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(Il2CppObject *obj,MethodInfo_66E400 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  Il2CppClass *pIVar4;
  undefined1 *puVar5;
  float *data;
  float local_res8 [2];
  float local_res10 [2];
  
  if (method->rgctx_data == (MethodInfo_66E400_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66E400_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                     TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo_841F20 *)0x0);
  if (bVar2) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res10[0] = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = local_res10;
    pIVar4 = g_data_184354e08;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                       TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo_841F20 *)0x0);
    if (!bVar2) goto label_18066e574;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res8[0] = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = local_res8;
    pIVar4 = g_data_184354e38;
  }
  obj = il2cpp_value_box(pIVar4,data);
label_18066e574:
  pIVar4 = method->rgctx_data->_1_T;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar4->_1).element_class) {
      puVar5 = il2cpp_object_unbox(obj);
      return (bool)*puVar5;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<double>
// il2cpp: double CustomLogic_CustomLogicEvaluator__ConvertTo_double_ (Il2CppObject* obj, const MethodInfo_66E5D0* method);
// 0x18066e5d0

double CustomLogic_CustomLogicEvaluator__ConvertTo_double_(Il2CppObject *obj,MethodInfo_66E5D0 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  Il2CppClass *pIVar4;
  double *pdVar5;
  float *data;
  float local_res8 [2];
  float local_res10 [2];
  
  if (method->rgctx_data == (MethodInfo_66E5D0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66E5D0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                     TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo_841F20 *)0x0);
  if (bVar2) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res10[0] = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = local_res10;
    pIVar4 = g_data_184354e08;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                       TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo_841F20 *)0x0);
    if (!bVar2) goto label_18066e744;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res8[0] = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = local_res8;
    pIVar4 = g_data_184354e38;
  }
  obj = il2cpp_value_box(pIVar4,data);
label_18066e744:
  pIVar4 = method->rgctx_data->_1_T;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar4->_1).element_class) {
      pdVar5 = il2cpp_object_unbox(obj);
      return *pdVar5;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<int>
// il2cpp: int32_t CustomLogic_CustomLogicEvaluator__ConvertTo_int_ (Il2CppObject* obj, const MethodInfo_66E9A0* method);
// 0x18066e9a0

int32_t CustomLogic_CustomLogicEvaluator__ConvertTo_int_(Il2CppObject *obj,MethodInfo_66E9A0 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  Il2CppClass *pIVar4;
  int32_t *piVar5;
  float *data;
  float local_res8 [2];
  float local_res10 [2];
  
  if (method->rgctx_data == (MethodInfo_66E9A0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66E9A0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                     TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo_841F20 *)0x0);
  if (bVar2) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res10[0] = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = local_res10;
    pIVar4 = g_data_184354e08;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                       TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo_841F20 *)0x0);
    if (!bVar2) goto label_18066eb14;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res8[0] = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = local_res8;
    pIVar4 = g_data_184354e38;
  }
  obj = il2cpp_value_box(pIVar4,data);
label_18066eb14:
  pIVar4 = method->rgctx_data->_1_T;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar4->_1).element_class) {
      piVar5 = il2cpp_object_unbox(obj);
      return *piVar5;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<object>
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ConvertTo_object_ (Il2CppObject* obj, const MethodInfo_66EB70* method);
// 0x18066eb70

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ConvertTo_object_(Il2CppObject *obj,MethodInfo_66EB70 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  float *data;
  float local_res8 [2];
  float local_res10 [2];
  
  if (method->rgctx_data == (MethodInfo_66EB70_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66EB70_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                     TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo_841F20 *)0x0);
  if (bVar2) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res10[0] = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = local_res10;
    pIVar4 = g_data_184354e08;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                       TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo_841F20 *)0x0);
    if (!bVar2) goto label_18066ece4;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res8[0] = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = local_res8;
    pIVar4 = g_data_184354e38;
  }
  obj = il2cpp_value_box(pIVar4,data);
label_18066ece4:
  pIVar4 = method->rgctx_data->_1_T;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
  }
  else {
    pIVar5 = il2cpp_vm_Object_IsInst(obj,pIVar4);
    if (pIVar5 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
    }
  }
  return pIVar5;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<float>
// il2cpp: float CustomLogic_CustomLogicEvaluator__ConvertTo_float_ (Il2CppObject* obj, const MethodInfo_66ED40* method);
// 0x18066ed40

float CustomLogic_CustomLogicEvaluator__ConvertTo_float_(Il2CppObject *obj,MethodInfo_66ED40 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  Il2CppClass *pIVar4;
  float *pfVar5;
  float local_res8 [2];
  float local_res10 [2];
  
  if (method->rgctx_data == (MethodInfo_66ED40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66ED40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                     TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo_841F20 *)0x0);
  if (bVar2) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res10[0] = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar5 = local_res10;
    pIVar4 = g_data_184354e08;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                       TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo_841F20 *)0x0);
    if (!bVar2) goto label_18066eeb4;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res8[0] = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar5 = local_res8;
    pIVar4 = g_data_184354e38;
  }
  obj = il2cpp_value_box(pIVar4,pfVar5);
label_18066eeb4:
  pIVar4 = method->rgctx_data->_1_T;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar4->_1).element_class) {
      pfVar5 = il2cpp_object_unbox(obj);
      return *pfVar5;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<Vector3>
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_ (Il2CppObject* obj, const MethodInfo_66EF10* method);
// 0x18066ef10

UnityEngine_Vector3_o *
CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_
          (UnityEngine_Vector3_o *__return_storage_ptr__,Il2CppObject *obj,MethodInfo_66EF10 *method)

{
  undefined8 uVar1;
  float fVar2;
  System_RuntimeTypeHandle_o SVar3;
  bool bVar4;
  System_Type_o *pSVar5;
  Il2CppClass *pIVar6;
  undefined8 *puVar7;
  float *data;
  float local_res8 [2];
  float local_res10 [2];
  
  if (method->rgctx_data == (MethodInfo_66EF10_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66EF10_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  SVar3.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar5,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                     TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo_841F20 *)0x0);
  if (bVar4) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res10[0] = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = local_res10;
    pIVar6 = g_data_184354e08;
  }
  else {
    SVar3.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar5,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                       TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo_841F20 *)0x0);
    if (!bVar4) goto label_18066f084;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_res8[0] = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = local_res8;
    pIVar6 = g_data_184354e38;
  }
  obj = il2cpp_value_box(pIVar6,data);
label_18066f084:
  pIVar6 = method->rgctx_data->_1_T;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar6->_1).element_class) {
      puVar7 = il2cpp_object_unbox(obj);
      uVar1 = *puVar7;
      fVar2 = *(float *)(puVar7 + 1);
      (__return_storage_ptr__->fields).x = (float)(int)uVar1;
      (__return_storage_ptr__->fields).y = (float)(int)((ulonglong)uVar1 >> 0x20);
      (__return_storage_ptr__->fields).z = fVar2;
      return __return_storage_ptr__;
    }
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar6);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o CustomLogic_CustomLogicEvaluator__ConvertTo___Il2CppFullySharedGenericType_ (Il2CppObject* obj, const MethodInfo_66E7A0* method);
// 0x18066e7a0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
CustomLogic_CustomLogicEvaluator__ConvertTo___Il2CppFullySharedGenericType_
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,Il2CppObject *obj,
          MethodInfo_66E7A0 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  System_Type_o *pSVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  System_Type_o *pSVar6;
  Il2CppClass *pIVar7;
  void *source;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar8;
  float *data;
  ulonglong size;
  float local_res8 [2];
  float local_res18 [2];
  undefined8 auStack_50 [5];
  
  if (method->rgctx_data == (MethodInfo_66E7A0_RGCTXs *)0x0) {
    auStack_50[0] = 0x18066e7d6;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    auStack_50[0] = 0x18066e7e2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    if (method->rgctx_data == (MethodInfo_66E7A0_RGCTXs *)0x0) {
      auStack_50[0] = 0x18066e7f1;
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  size = (ulonglong)(method->rgctx_data->_1_T->_2).stack_slot_size;
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x18066e81c;
  lVar3 = -(uVar5 & 0xfffffffffffffff0);
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e840;
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e84a;
  pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e865;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  pSVar2 = TypeInfo_ReflectionExtensions->static_fields->IntType;
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e881;
  bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar2,(MethodInfo_841F20 *)0x0
                    );
  if (bVar4) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e931;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e93b;
    local_res18[0] =
         (float)MiscExtensions__UnboxToInt((Il2CppObject *)__return_storage_ptr__,(MethodInfo *)0x0);
    data = local_res18;
    pIVar7 = g_data_184354e08;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e8a5;
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e8af;
    pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e8ca;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    pSVar2 = TypeInfo_ReflectionExtensions->static_fields->FloatType;
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e8e7;
    bVar4 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar6,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar2,
                       (MethodInfo_841F20 *)0x0);
    if (!bVar4) goto label_18066e951;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e900;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e90a;
    local_res8[0] = MiscExtensions__UnboxToFloat((Il2CppObject *)__return_storage_ptr__,(MethodInfo *)0x0);
    data = local_res8;
    pIVar7 = g_data_184354e38;
  }
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e94e;
  __return_storage_ptr__ = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)il2cpp_value_box(pIVar7,data);
label_18066e951:
  pIVar7 = method->rgctx_data->_1_T;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e96a;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e978;
  source = (void *)il2cpp_runtime_helper_180416280(__return_storage_ptr__,pIVar7,&stack0xffffffffffffffd8 + lVar3);
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18066e986;
  pUVar8 = memcpy(obj,source,size);
  return pUVar8;
}


// CustomLogic.CustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x1820e3ef0

void CustomLogic_CustomLogicEvaluator___cctor(MethodInfo *method)

{
  System_Object_array *value;
  MethodInfo *pMVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_184346a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346a16 = '\x01';
  }
  pMVar1 = MethodInfo_System_Array_Empty_object;
  if ((MethodInfo_System_Array_Empty_object->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar2);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  value = *(System_Object_array **)pIVar2->static_fields;
  TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,value);
  return;
}


