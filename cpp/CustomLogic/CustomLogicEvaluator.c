// Type: CustomLogic.CustomLogicEvaluator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicEvaluator.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c___cctor (const MethodInfo* method);
// 0x3f6bda0

void CustomLogic_CustomLogicEvaluator_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703ee4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ee4 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c___ctor (CustomLogic_CustomLogicEvaluator___c_o* __this, const MethodInfo* method);
// 0x3f6be10

void CustomLogic_CustomLogicEvaluator_<>c___ctor
               (CustomLogic_CustomLogicEvaluator___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c$$<CreateAddonNetworkChannels>b__20_0
// il2cpp: System_String_o* CustomLogic_CustomLogicEvaluator___c___CreateAddonNetworkChannels_b__20_0 (CustomLogic_CustomLogicEvaluator___c_o* __this, System_String_o* x, const MethodInfo* method);
// 0x3f6be20

System_String_o *
CustomLogic_CustomLogicEvaluator_<>c__<CreateAddonNetworkChannels>b__20_0
          (CustomLogic_CustomLogicEvaluator___c_o *__this,System_String_o *x,MethodInfo *method)

{
  return x;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84___ctor (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f68a10

void CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84___ctor
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84__System_IDisposable_Dispose (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6be30

/* WARNING: Removing unreachable block (ram,0x03f6bee6) */

void CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__System_IDisposable_Dispose
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  Il2CppObject *unaff_R15;
  
  uVar1 = (__this->fields).__1__state;
  if (((uVar1 & 0xfffffffe) == 0xfffffffc) || (uVar1 - 1 < 0x13)) {
    if ((uVar1 + 4 < 0x18) && ((0xe00001U >> (uVar1 + 4 & 0x1f) & 1) != 0)) {
      if (DAT_05703ee7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_05703ee7 = '\x01';
      }
      (__this->fields).__1__state = -3;
      __this_00.fields._index = (int)unaff_R14;
      __this_00.fields._version = (int)((ulong)unaff_R14 >> 0x20);
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)unaff_RBX;
      __this_00.fields._current = unaff_R15;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_00,(MethodInfo_3185E10 *)&(__this->fields).__7__wrap8);
    }
    if (DAT_05703ee6 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_05703ee6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    __this_01.fields._index = (int)unaff_R14;
    __this_01.fields._version = (int)((ulong)unaff_R14 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)unaff_RBX;
    __this_01.fields._current = unaff_R15;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&(__this->fields).__7__wrap2);
  }
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84__MoveNext (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6bf70

/* WARNING: Type propagation algorithm not settling */

bool_conflict
CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__MoveNext
          (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
          MethodInfo *method)

{
  CustomLogic_CustomLogicBaseAst_o **ppCVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_01;
  Il2CppClass *pIVar6;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment;
  CustomLogic_CustomLogicAssignmentExpressionAst_c *pCVar7;
  CustomLogic_CustomLogicConditionalBlockAst_o *pCVar8;
  CustomLogic_CustomLogicToken_o *pCVar9;
  CustomLogic_CustomLogicForBlockAst_o *pCVar10;
  CustomLogic_CustomLogicBaseAst_o *pCVar11;
  CustomLogic_CustomLogicBaseAst_c *pCVar12;
  CustomLogic_CustomLogicVariableExpressionAst_o *pCVar13;
  System_String_o *key;
  CustomLogic_CustomLogicStartAst_o *pCVar14;
  CustomLogic_CustomLogicClassInstance_o *pCVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  long *plVar17;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar18;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar19;
  UnityEngine_MonoBehaviour_o *pUVar20;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  Il2CppClass *pIVar21;
  bool_conflict bVar22;
  UnityEngine_WaitForSeconds_o *pUVar23;
  int *piVar24;
  char *pcVar25;
  Il2CppObject *pIVar26;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *pCVar27;
  Il2CppObject *pIVar28;
  System_Collections_IEnumerator_o *pSVar29;
  Utility_CoroutineWithData_o *pUVar30;
  Utility_CoroutineWithData_o **ppUVar31;
  Il2CppClass *in_R8;
  float fVar32;
  undefined8 in_stack_ffffffffffffff98;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *pCVar33;
  undefined4 in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffac;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  int32_t iStack_30;
  int32_t iStack_2c;
  CustomLogic_CustomLogicBaseAst_o *local_28;
  
  pCVar27 = __this;
  if (DAT_05703ee5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CoroutineWithData);
    il2cpp_init_method_metadata(&TypeInfo_Coroutine);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAssignmentExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBaseExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBreakExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicConditionalBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicContinueExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicForBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMethodCallExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicReturnExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWaitExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicBaseAst_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicBase);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05703ee5 = '\x01';
  }
  uVar4 = (__this->fields).__1__state;
  if (0x13 < uVar4) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar4) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields)._conditionalState_5__2 = 0;
    __this_01 = (__this->fields).statements;
    if (__this_01 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_50,(System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicBase);
    local_28 = (CustomLogic_CustomLogicBaseAst_o *)local_50.fields._current;
    local_38 = local_50.fields._list._0_4_;
    uStack_34 = local_50.fields._list._4_4_;
    iStack_30 = local_50.fields._index;
    iStack_2c = local_50.fields._version;
    (pCVar27->fields).__7__wrap2.fields._current =
         (CustomLogic_CustomLogicBaseAst_o *)local_50.fields._current;
    *(undefined4 *)&(pCVar27->fields).__7__wrap2.fields._list = local_50.fields._list._0_4_;
    *(undefined4 *)((long)&(pCVar27->fields).__7__wrap2.fields._list + 4) =
         local_50.fields._list._4_4_;
    (pCVar27->fields).__7__wrap2.fields._index = local_50.fields._index;
    (pCVar27->fields).__7__wrap2.fields._version = local_50.fields._version;
    il2cpp_runtime_glue(&(pCVar27->fields).__7__wrap2,0);
    (pCVar27->fields).__1__state = -3;
    do {
      __this_06.fields._8_8_ = pCVar27;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
      __this_06.fields._current._0_4_ = in_stack_ffffffffffffffa8;
      __this_06.fields._current._4_4_ = in_stack_ffffffffffffffac;
      bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                         (__this_06,(MethodInfo_3185E20 *)&(pCVar27->fields).__7__wrap2);
      if ((char)bVar22 == '\0') {
        pCVar33 = pCVar27;
        if (DAT_05703ee6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
          DAT_05703ee6 = '\x01';
        }
        (pCVar27->fields).__1__state = -1;
        __this_07.fields._8_8_ = pCVar33;
        __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
        __this_07.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_07.fields._current._4_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_07,(MethodInfo_3185E10 *)&(pCVar27->fields).__7__wrap2);
        (pCVar33->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
        (pCVar33->fields).__7__wrap2.fields._index = 0;
        (pCVar33->fields).__7__wrap2.fields._version = 0;
        (pCVar33->fields).__7__wrap2.fields._current = (CustomLogic_CustomLogicBaseAst_o *)0x0;
        return 0;
      }
      (pCVar27->fields)._statement_5__4 = (pCVar27->fields).__7__wrap2.fields._current;
      il2cpp_runtime_glue(&(pCVar27->fields)._statement_5__4);
      assignment = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                   (pCVar27->fields)._statement_5__4;
      if (assignment == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(int32_t *)&(__this_00->fields)._CapturedErrors_k__BackingField = (assignment->fields).Line;
      pIVar21 = TypeInfo_CustomLogicForBlockAst;
      pIVar6 = TypeInfo_CustomLogicConditionalBlockAst;
      pCVar7 = assignment->klass;
      bVar2 = (pCVar7->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicAssignmentExpressionAst->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicAssignmentExpressionAst)) {
        bVar3 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
        if ((((bVar3 <= bVar2) && ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicReturnExpressionAst)) ||
            ((bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
             ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)))) ||
           ((bVar3 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
            ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) {
          (pCVar27->fields).__2__current = (Il2CppObject *)assignment;
          il2cpp_runtime_glue(&(pCVar27->fields).__2__current,assignment);
          (pCVar27->fields).__1__state = 1;
          break;
        }
        bVar3 = (TypeInfo_CustomLogicWaitExpressionAst->_2).naturalAligment;
        if ((bVar3 <= bVar2) && ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicWaitExpressionAst)) {
          pIVar26 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                              (__this_00,(pCVar27->fields).classInstance,
                               (pCVar27->fields).localVariables,(assignment->fields).Left,
                               (MethodInfo *)in_R8);
          pCVar14 = (__this_00->fields)._start;
          if (pCVar14 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar15 = (pCVar27->fields).classInstance;
          if (pCVar15 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pCVar14->fields).Classes;
          pIVar28 = (Il2CppObject *)
                    (*(pCVar15->klass->vtable)._4_unknown.methodPtr)
                              (pCVar15,(pCVar15->klass->vtable)._4_unknown.method);
          if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar28 = System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar16,pIVar28,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
          if (pIVar28 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pIVar28[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          plVar17 = *(long **)((long)pIVar28[2].monitor + 0x18);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(long *)(*plVar17 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          piVar24 = (int *)il2cpp_glue_022c7330();
          if (pIVar26 == (Il2CppObject *)0x0) {
            (pCVar27->fields).__2__current = (Il2CppObject *)0x0;
            il2cpp_runtime_glue(&(pCVar27->fields).__2__current,0);
            (pCVar27->fields).__1__state = 2;
            break;
          }
          pCVar18 = (assignment->fields).Left;
          if (pCVar18 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            pCVar19 = pCVar18->klass;
            bVar2 = (TypeInfo_CustomLogicMethodCallExpressionAst->_2).naturalAligment;
            if ((bVar2 <= (pCVar19->_2).naturalAligment) &&
               ((pCVar19->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicMethodCallExpressionAst)) {
              if ((*piVar24 == 4) || (pIVar26->klass != TypeInfo_Coroutine)) {
                (pCVar27->fields).__2__current = (Il2CppObject *)0x0;
                il2cpp_runtime_glue(&(pCVar27->fields).__2__current,0);
                (pCVar27->fields).__1__state = 4;
              }
              else {
                (pCVar27->fields).__2__current = pIVar26;
                il2cpp_runtime_glue(&(pCVar27->fields).__2__current,pIVar26);
                (pCVar27->fields).__1__state = 3;
              }
              break;
            }
          }
          if (*piVar24 != 4) {
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              il2cpp_init_class();
            }
            fVar32 = MiscExtensions__UnboxToFloat(pIVar26,(MethodInfo *)0x0);
            pUVar23 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(pUVar23,fVar32,(MethodInfo *)0x0);
            (pCVar27->fields).__2__current = (Il2CppObject *)pUVar23;
            il2cpp_runtime_glue(&(pCVar27->fields).__2__current,pUVar23);
            (pCVar27->fields).__1__state = 6;
            break;
          }
          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
            il2cpp_init_class();
          }
          fVar32 = MiscExtensions__UnboxToFloat(pIVar26,(MethodInfo *)0x0);
          (pCVar27->fields)._time_5__5 = fVar32;
          __this = pCVar27;
          goto joined_r0x03f6c59a;
        }
        bVar3 = (TypeInfo_CustomLogicConditionalBlockAst->_2).naturalAligment;
        if ((bVar2 < bVar3) || ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicConditionalBlockAst)) {
          bVar3 = (TypeInfo_CustomLogicForBlockAst->_2).naturalAligment;
          if ((bVar3 <= bVar2) && ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicForBlockAst)) {
            (pCVar27->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)assignment;
            if (((assignment->klass->_2).naturalAligment < bVar3) ||
               ((assignment->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar21)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(assignment);
            }
            il2cpp_runtime_glue(&(pCVar27->fields)._forBlock_5__8,assignment);
            pCVar10 = (pCVar27->fields)._forBlock_5__8;
            if (pCVar10 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar26 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                (__this_00,(pCVar27->fields).classInstance,
                                 (pCVar27->fields).localVariables,(pCVar10->fields).Iterable,
                                 (MethodInfo *)in_R8);
            if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
            if (((pIVar26->klass->_2).naturalAligment < bVar2) ||
               ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar26);
            }
            if (pIVar26[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_50,(System_Collections_Generic_List_object__o *)pIVar26[3].klass,
                       MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
            local_28 = (CustomLogic_CustomLogicBaseAst_o *)local_50.fields._current;
            local_38 = local_50.fields._list._0_4_;
            uStack_34 = local_50.fields._list._4_4_;
            iStack_30 = local_50.fields._index;
            iStack_2c = local_50.fields._version;
            (pCVar27->fields).__7__wrap8.fields._current = local_50.fields._current;
            *(undefined4 *)&(pCVar27->fields).__7__wrap8.fields._list = local_50.fields._list._0_4_;
            *(undefined4 *)((long)&(pCVar27->fields).__7__wrap8.fields._list + 4) =
                 local_50.fields._list._4_4_;
            (pCVar27->fields).__7__wrap8.fields._index = local_50.fields._index;
            (pCVar27->fields).__7__wrap8.fields._version = local_50.fields._version;
            il2cpp_runtime_glue(&(pCVar27->fields).__7__wrap8,0);
            (pCVar27->fields).__1__state = -4;
LAB_03f6cdba:
            __this_04.fields._8_8_ = pCVar27;
            __this_04.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffffa8;
            __this_04.fields._current._4_4_ = in_stack_ffffffffffffffac;
            bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_04,(MethodInfo_3185E20 *)&(pCVar27->fields).__7__wrap8);
            if ((char)bVar22 == '\0') {
              pCVar33 = pCVar27;
              if (DAT_05703ee7 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
                DAT_05703ee7 = '\x01';
              }
              (pCVar27->fields).__1__state = -3;
              __this_05.fields._8_8_ = pCVar33;
              __this_05.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
              __this_05.fields._current._0_4_ = in_stack_ffffffffffffffa8;
              __this_05.fields._current._4_4_ = in_stack_ffffffffffffffac;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_05,(MethodInfo_3185E10 *)&(pCVar27->fields).__7__wrap8);
              (pCVar33->fields).__7__wrap8.fields._index = 0;
              (pCVar33->fields).__7__wrap8.fields._version = 0;
              (pCVar33->fields).__7__wrap8.fields._current = (Il2CppObject *)0x0;
              (pCVar33->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)0x0;
              (pCVar33->fields).__7__wrap8.fields._list =
                   (System_Collections_Generic_List_T__o *)0x0;
              il2cpp_runtime_glue(&(pCVar33->fields)._forBlock_5__8,0);
              pCVar27 = pCVar33;
              goto LAB_03f6cf11;
            }
            pCVar10 = (pCVar27->fields)._forBlock_5__8;
            if (pCVar10 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pCVar13 = (pCVar10->fields).Variable;
            if (pCVar13 == (CustomLogic_CustomLogicVariableExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pCVar27->fields).localVariables;
            if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar26 = (pCVar27->fields).__7__wrap8.fields._current;
            key = (pCVar13->fields).Name;
            bVar22 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                               (pSVar16,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
            pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pCVar27->fields).localVariables;
            if ((char)bVar22 == '\0') {
              if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar16,(Il2CppObject *)key,pIVar26,MethodInfo_Void_Add);
            }
            else {
              if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar16,(Il2CppObject *)key,pIVar26,MethodInfo_Void_set_Item);
            }
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pCVar10 = (pCVar27->fields)._forBlock_5__8;
            if (pCVar10 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar20 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
            pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                (__this_00,(pCVar27->fields).classInstance,
                                 (pCVar27->fields).localVariables,(pCVar10->fields).Statements,
                                 (MethodInfo *)in_R8);
            pUVar30 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
            Utility_CoroutineWithData___ctor(pUVar30,pUVar20,pSVar29,(MethodInfo *)0x0);
            (pCVar27->fields)._cwd_5__7 = pUVar30;
            il2cpp_runtime_glue(&(pCVar27->fields)._cwd_5__7,pUVar30);
            pUVar30 = (pCVar27->fields)._cwd_5__7;
            if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            (pCVar27->fields).__2__current =
                 (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
            il2cpp_runtime_glue(&(pCVar27->fields).__2__current);
            (pCVar27->fields).__1__state = 0x11;
            break;
          }
          bVar3 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
          if ((bVar3 <= bVar2) && ((pCVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBaseExpressionAst)) {
            CustomLogic_CustomLogicEvaluator__EvaluateExpression
                      (__this_00,(pCVar27->fields).classInstance,(pCVar27->fields).localVariables,
                       (CustomLogic_CustomLogicBaseExpressionAst_o *)assignment,(MethodInfo *)in_R8)
            ;
          }
        }
        else {
          (pCVar27->fields)._conditional_5__6 =
               (CustomLogic_CustomLogicConditionalBlockAst_o *)assignment;
          if (((assignment->klass->_2).naturalAligment < bVar3) ||
             ((assignment->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar6)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(assignment);
          }
          il2cpp_runtime_glue(&(pCVar27->fields)._conditional_5__6,assignment);
          pCVar8 = (pCVar27->fields)._conditional_5__6;
          if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar9 = (pCVar8->fields).Token;
          if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar26 = (pCVar9->fields).Value;
          if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          piVar24 = (int *)il2cpp_glue_022c7330();
          pCVar8 = (pCVar27->fields)._conditional_5__6;
          if (*piVar24 == 0x27) {
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar26 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                (__this_00,(pCVar27->fields).classInstance,
                                 (pCVar27->fields).localVariables,(pCVar8->fields).Condition,
                                 (MethodInfo *)in_R8);
            if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar26);
            }
            pcVar25 = (char *)il2cpp_glue_022c7330(pIVar26);
            if (*pcVar25 == '\0') {
              (pCVar27->fields)._conditionalState_5__2 = 2;
              goto switchD_03f6d2b7_caseD_1;
            }
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pCVar8 = (pCVar27->fields)._conditional_5__6;
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar20 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
            pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                (__this_00,(pCVar27->fields).classInstance,
                                 (pCVar27->fields).localVariables,(pCVar8->fields).Statements,
                                 (MethodInfo *)in_R8);
            pUVar30 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
            Utility_CoroutineWithData___ctor(pUVar30,pUVar20,pSVar29,(MethodInfo *)0x0);
            (pCVar27->fields)._cwd_5__7 = pUVar30;
            il2cpp_runtime_glue(&(pCVar27->fields)._cwd_5__7,pUVar30);
            pUVar30 = (pCVar27->fields)._cwd_5__7;
            if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            (pCVar27->fields).__2__current =
                 (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
            il2cpp_runtime_glue(&(pCVar27->fields).__2__current);
            (pCVar27->fields).__1__state = 8;
            break;
          }
          if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar9 = (pCVar8->fields).Token;
          if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar26 = (pCVar9->fields).Value;
          if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          piVar24 = (int *)il2cpp_glue_022c7330();
          if (*piVar24 == 0x2a) {
LAB_03f6ce88:
            pCVar8 = (pCVar27->fields)._conditional_5__6;
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar26 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                (__this_00,(pCVar27->fields).classInstance,
                                 (pCVar27->fields).localVariables,(pCVar8->fields).Condition,
                                 (MethodInfo *)in_R8);
            if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar26);
            }
            pcVar25 = (char *)il2cpp_glue_022c7330(pIVar26);
            if (*pcVar25 != '\0') {
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pCVar8 = (pCVar27->fields)._conditional_5__6;
              if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar20 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
              pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                  (__this_00,(pCVar27->fields).classInstance,
                                   (pCVar27->fields).localVariables,(pCVar8->fields).Statements,
                                   (MethodInfo *)in_R8);
              pUVar30 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
              Utility_CoroutineWithData___ctor(pUVar30,pUVar20,pSVar29,(MethodInfo *)0x0);
              (pCVar27->fields)._cwd_5__7 = pUVar30;
              il2cpp_runtime_glue(&(pCVar27->fields)._cwd_5__7,pUVar30);
              pUVar30 = (pCVar27->fields)._cwd_5__7;
              if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              (pCVar27->fields).__2__current =
                   (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
              il2cpp_runtime_glue(&(pCVar27->fields).__2__current);
              (pCVar27->fields).__1__state = 10;
              break;
            }
LAB_03f6cef2:
            (pCVar27->fields)._conditionalState_5__2 = 0;
          }
          else {
            pCVar8 = (pCVar27->fields)._conditional_5__6;
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pCVar9 = (pCVar8->fields).Token;
            if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar26 = (pCVar9->fields).Value;
            if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume();
            }
            piVar24 = (int *)il2cpp_glue_022c7330();
            if (*piVar24 == 0x28) {
              iVar5 = (pCVar27->fields)._conditionalState_5__2;
              if ((iVar5 != 4) && (iVar5 != 2)) goto LAB_03f6cef2;
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pCVar8 = (pCVar27->fields)._conditional_5__6;
              if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar20 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
              pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                  (__this_00,(pCVar27->fields).classInstance,
                                   (pCVar27->fields).localVariables,(pCVar8->fields).Statements,
                                   (MethodInfo *)in_R8);
              pUVar30 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
              Utility_CoroutineWithData___ctor(pUVar30,pUVar20,pSVar29,(MethodInfo *)0x0);
              (pCVar27->fields)._cwd_5__7 = pUVar30;
              il2cpp_runtime_glue(&(pCVar27->fields)._cwd_5__7,pUVar30);
              pUVar30 = (pCVar27->fields)._cwd_5__7;
              if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              (pCVar27->fields).__2__current =
                   (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
              il2cpp_runtime_glue(&(pCVar27->fields).__2__current);
              (pCVar27->fields).__1__state = 0xd;
              break;
            }
            pCVar8 = (pCVar27->fields)._conditional_5__6;
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pCVar9 = (pCVar8->fields).Token;
            if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar26 = (pCVar9->fields).Value;
            if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume();
            }
            piVar24 = (int *)il2cpp_glue_022c7330();
            if (*piVar24 == 0x29) {
              switch((pCVar27->fields)._conditionalState_5__2) {
              case 1:
              case 3:
                goto switchD_03f6d2b7_caseD_1;
              case 2:
              case 4:
                pCVar8 = (pCVar27->fields)._conditional_5__6;
                if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar26 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                    (__this_00,(pCVar27->fields).classInstance,
                                     (pCVar27->fields).localVariables,(pCVar8->fields).Condition,
                                     (MethodInfo *)in_R8);
                if (pIVar26 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if ((pIVar26->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pIVar26);
                }
                pcVar25 = (char *)il2cpp_glue_022c7330(pIVar26);
                if (*pcVar25 != '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pCVar8 = (pCVar27->fields)._conditional_5__6;
                  if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar20 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
                  pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                      (__this_00,(pCVar27->fields).classInstance,
                                       (pCVar27->fields).localVariables,(pCVar8->fields).Statements,
                                       (MethodInfo *)in_R8);
                  pUVar30 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
                  Utility_CoroutineWithData___ctor(pUVar30,pUVar20,pSVar29,(MethodInfo *)0x0);
                  (pCVar27->fields)._cwd_5__7 = pUVar30;
                  il2cpp_runtime_glue(&(pCVar27->fields)._cwd_5__7,pUVar30);
                  pUVar30 = (pCVar27->fields)._cwd_5__7;
                  if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  (pCVar27->fields).__2__current =
                       (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
                  il2cpp_runtime_glue(&(pCVar27->fields).__2__current);
                  (pCVar27->fields).__1__state = 0xf;
                  goto LAB_03f6d3f8;
                }
              }
              (pCVar27->fields)._conditionalState_5__2 = 4;
            }
          }
switchD_03f6d2b7_caseD_1:
          (pCVar27->fields)._conditional_5__6 = (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0;
          il2cpp_runtime_glue(&(pCVar27->fields)._conditional_5__6,0);
        }
      }
      else {
        CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
                  (__this_00,(pCVar27->fields).classInstance,(pCVar27->fields).localVariables,
                   assignment,(MethodInfo *)in_R8);
      }
LAB_03f6cf11:
      ppCVar1 = &(pCVar27->fields)._statement_5__4;
      pCVar11 = (pCVar27->fields)._statement_5__4;
      if (pCVar11 == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
LAB_03f6cf4e:
        (pCVar27->fields)._conditionalState_5__2 = 0;
      }
      else {
        pCVar12 = pCVar11->klass;
        bVar2 = (TypeInfo_CustomLogicConditionalBlockAst->_2).naturalAligment;
        if (((pCVar12->_2).naturalAligment < bVar2) ||
           ((pCVar12->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicConditionalBlockAst)) goto LAB_03f6cf4e;
      }
      *ppCVar1 = (CustomLogic_CustomLogicBaseAst_o *)0x0;
      il2cpp_runtime_glue(ppCVar1,0);
    } while( true );
  case 1:
    (__this->fields).__1__state = -3;
    goto joined_r0x03f6c81f;
  default:
    (__this->fields).__1__state = -3;
    goto LAB_03f6cf11;
  case 5:
    (__this->fields).__1__state = -3;
    fVar32 = (__this->fields)._time_5__5 + -0.1;
    (__this->fields)._time_5__5 = fVar32;
joined_r0x03f6c59a:
    if (0.0 < fVar32) {
      __this = pCVar27;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        __this = pCVar27;
      }
      pCVar27 = __this;
      if (*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40) == '\0') {
        pUVar23 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pUVar23,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar23;
        pCVar27 = __this;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar23);
        (pCVar27->fields).__1__state = 5;
        break;
      }
    }
    goto LAB_03f6c60f;
  case 6:
    (__this->fields).__1__state = -3;
LAB_03f6c60f:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (pCVar27->fields).__1__state = 7;
    break;
  case 8:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (pCVar27->fields).__1__state = 9;
    break;
  case 9:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar26->klass;
      bVar2 = (pIVar6->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
      if ((((bVar3 <= bVar2) && ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicReturnExpressionAst)) ||
          ((bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
           ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)))) ||
         ((bVar3 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) goto joined_r0x03f6c81f;
    }
    (__this->fields)._conditionalState_5__2 = 1;
    (__this->fields)._cwd_5__7 = (Utility_CoroutineWithData_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._cwd_5__7,0);
    goto switchD_03f6d2b7_caseD_1;
  case 10:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (pCVar27->fields).__1__state = 0xb;
    break;
  case 0xb:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 != (Il2CppObject *)0x0) {
      in_R8 = pIVar26->klass;
      bVar2 = (in_R8->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
      if (((bVar3 <= bVar2) && ((in_R8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)) ||
         ((bVar3 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
          ((in_R8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(&(__this->fields).__2__current,0);
        (pCVar27->fields).__1__state = 0xc;
        break;
      }
    }
    goto LAB_03f6c31b;
  case 0xc:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03f6c31b:
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar26->klass;
      bVar2 = (pIVar6->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
      if (((bVar3 <= bVar2) && ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicReturnExpressionAst)) ||
         ((bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)))) {
joined_r0x03f6c81f:
        if (DAT_05703ee6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
          DAT_05703ee6 = '\x01';
        }
        (__this->fields).__1__state = -1;
        __this_02.fields._8_8_ = pCVar27;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
        __this_02.fields._current._0_4_ = in_stack_ffffffffffffffa8;
        __this_02.fields._current._4_4_ = in_stack_ffffffffffffffac;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&(__this->fields).__7__wrap2);
        return 0;
      }
    }
    ppUVar31 = &(__this->fields)._cwd_5__7;
    *ppUVar31 = (Utility_CoroutineWithData_o *)0x0;
    il2cpp_runtime_glue(ppUVar31,0);
    goto LAB_03f6ce88;
  case 0xd:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (pCVar27->fields).__1__state = 0xe;
    break;
  case 0xe:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar26->klass;
      bVar2 = (pIVar6->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
      if ((((bVar3 <= bVar2) && ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicReturnExpressionAst)) ||
          ((bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
           ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)))) ||
         ((bVar3 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) goto joined_r0x03f6c81f;
    }
    ppUVar31 = &(__this->fields)._cwd_5__7;
    *ppUVar31 = (Utility_CoroutineWithData_o *)0x0;
    il2cpp_runtime_glue(ppUVar31,0);
    goto LAB_03f6cef2;
  case 0xf:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (pCVar27->fields).__1__state = 0x10;
    break;
  case 0x10:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar26->klass;
      bVar2 = (pIVar6->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
      if ((((bVar3 <= bVar2) && ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicReturnExpressionAst)) ||
          ((bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
           ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)))) ||
         ((bVar3 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) goto joined_r0x03f6c81f;
    }
    (__this->fields)._conditionalState_5__2 = 3;
    (__this->fields)._cwd_5__7 = (Utility_CoroutineWithData_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._cwd_5__7,0);
    goto switchD_03f6d2b7_caseD_1;
  case 0x11:
    (__this->fields).__1__state = -4;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (pCVar27->fields).__1__state = 0x12;
    break;
  case 0x12:
    (__this->fields).__1__state = -4;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 != (Il2CppObject *)0x0) {
      in_R8 = pIVar26->klass;
      bVar2 = (in_R8->_2).naturalAligment;
      bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
      if (((bVar3 <= bVar2) && ((in_R8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicBreakExpressionAst)) ||
         ((bVar3 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar3 <= bVar2 &&
          ((in_R8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(&(__this->fields).__2__current,0);
        (pCVar27->fields).__1__state = 0x13;
        break;
      }
    }
    goto LAB_03f6c75e;
  case 0x13:
    (__this->fields).__1__state = -4;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03f6c75e:
    pIVar26 = (pUVar30->fields).Result;
    if (pIVar26 == (Il2CppObject *)0x0) {
LAB_03f6c7b8:
      ppUVar31 = &(__this->fields)._cwd_5__7;
      *ppUVar31 = (Utility_CoroutineWithData_o *)0x0;
      il2cpp_runtime_glue(ppUVar31,0);
      goto LAB_03f6cdba;
    }
    pIVar6 = pIVar26->klass;
    bVar2 = (pIVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
    if (((bVar2 < bVar3) || ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicReturnExpressionAst)) &&
       ((bVar3 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment, bVar2 < bVar3 ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicBreakExpressionAst)))) goto LAB_03f6c7b8;
    if (DAT_05703ee7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_05703ee7 = '\x01';
    }
    (__this->fields).__1__state = -3;
    __this_03.fields._8_8_ = pCVar27;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffffa8;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffffac;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&(__this->fields).__7__wrap8);
    __this = pCVar27;
    goto joined_r0x03f6c81f;
  }
LAB_03f6d3f8:
  return (bool_conflict)CONCAT71((int7)((ulong)pCVar27 >> 8),1);
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84____m__Finally1 (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6de90

void CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__<>m__Finally1
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05703ee6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05703ee6 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap2);
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$<>m__Finally2
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84____m__Finally2 (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6de40

void CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__<>m__Finally2
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05703ee7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05703ee7 = '\x01';
  }
  (__this->fields).__1__state = -3;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap8);
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6ded0

Il2CppObject *
CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6dee0

void CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__84$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o* __this, const MethodInfo* method);
// 0x3f6df20

Il2CppObject *
CustomLogic_CustomLogicEvaluator_<EvaluateBlockCoroutine>d__84__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__84_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f61680

void CustomLogic_CustomLogicEvaluator_<OnSecond>d__18___ctor
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_IDisposable_Dispose (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x3f6df30

void CustomLogic_CustomLogicEvaluator_<OnSecond>d__18__System_IDisposable_Dispose
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicEvaluator__OnSecond_d__18__MoveNext (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x3f6df40

bool_conflict
CustomLogic_CustomLogicEvaluator_<OnSecond>d__18__MoveNext
          (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  char cVar3;
  bool_conflict bVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  long lVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_05;
  UnityEngine_WaitForSeconds_o *__this_06;
  undefined8 uVar7;
  MethodInfo *in_RCX;
  undefined4 uVar8;
  undefined4 uVar9;
  MethodInfo_31C2F60 *pMVar10;
  Il2CppObject *pIVar11;
  
  if (DAT_05703ee8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"OnSecond");
    il2cpp_init_method_metadata(&"SyncCurrentTimeRPC");
    DAT_05703ee8 = '\x01';
  }
  pIVar11 = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                (__this_00,"OnSecond",(System_Object_array *)0x0,in_RCX);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      if (cVar3 == '\0') goto LAB_03f6e1eb;
      __this_01 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&stack0xffffffffffffffa8);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar5;
        il2cpp_runtime_glue(parameters->m_Items,pIVar5);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"SyncCurrentTimeRPC",1,parameters,(MethodInfo *)0x0);
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this_00->fields).IdToNetworkView;
          if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (__this_04 = System_Collections_Generic_Dictionary<int__object>__get_Keys
                                    (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I),
             __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0
             )) {
            System_Collections_Generic_Dictionary_KeyCollection<int__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                        *)&stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
            uVar8 = 0;
            uVar9 = 0;
            pMVar10 = (MethodInfo_31C2F60 *)&stack0xffffffffffffffb8;
            while (__this_02.fields._dictionary._4_4_ = uVar9,
                  __this_02.fields._dictionary._0_4_ = uVar8, __this_02.fields._8_8_ = pMVar10,
                  __this_02.fields._currentKey = pIVar11,
                  bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__MoveNext
                                    (__this_02,(MethodInfo_31C2F60 *)&stack0xffffffffffffffb8),
                  (char)bVar4 != '\0') {
              pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (__this_00->fields).IdToNetworkView;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              __this_05 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                          System_Collections_Generic_Dictionary<int__object>__get_Item
                                    (pSVar2,0,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
              if (__this_05 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond(__this_05,(MethodInfo *)0x0);
            }
            __this_03.fields._dictionary._4_4_ = uVar9;
            __this_03.fields._dictionary._0_4_ = uVar8;
            __this_03.fields._8_8_ = pMVar10;
            __this_03.fields._currentKey = pIVar11;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__Dispose
                      (__this_03,(MethodInfo_31C2F50 *)&stack0xffffffffffffffb8);
            goto LAB_03f6e1eb;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
LAB_03f6e1eb:
  __this_06 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_06,1.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_06;
  uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_06);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x3f6e2e0

Il2CppObject *
CustomLogic_CustomLogicEvaluator_<OnSecond>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x3f6e2f0

void CustomLogic_CustomLogicEvaluator_<OnSecond>d__18__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x3f6e330

Il2CppObject *
CustomLogic_CustomLogicEvaluator_<OnSecond>d__18__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator$$Start
// il2cpp: void CustomLogic_CustomLogicEvaluator__Start (CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x3f5b8b0

/* WARNING: Removing unreachable block (ram,0x03f5c1c0) */
/* WARNING: Removing unreachable block (ram,0x03f5c7e2) */
/* WARNING: Removing unreachable block (ram,0x03f5c50d) */
/* WARNING: Removing unreachable block (ram,0x03f5c516) */
/* WARNING: Removing unreachable block (ram,0x03f5c86a) */
/* WARNING: Removing unreachable block (ram,0x03f5be0c) */
/* WARNING: Removing unreachable block (ram,0x03f5c849) */
/* WARNING: Removing unreachable block (ram,0x03f5c2cc) */
/* WARNING: Removing unreachable block (ram,0x03f5c83a) */
/* WARNING: Removing unreachable block (ram,0x03f5c39e) */
/* WARNING: Removing unreachable block (ram,0x03f5c585) */
/* WARNING: Removing unreachable block (ram,0x03f5c646) */
/* WARNING: Removing unreachable block (ram,0x03f5c82b) */

void CustomLogic_CustomLogicEvaluator__Start
               (CustomLogic_CustomLogicEvaluator_o *__this,
               System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
               *addonSettings,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_12;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_13;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_14;
  undefined8 uVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_Dictionary_TKey__TValue__o *key;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar12;
  CustomLogic_CustomLogicClassInstance_o *instance;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  undefined1 in_stack_fffffffffffffef8 [16];
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar14;
  undefined1 local_e8 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d8;
  Il2CppClass *local_d0;
  undefined1 local_c8 [40];
  Il2CppType *pIStack_a0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  _union_234480 local_88;
  Il2CppType *pIStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  _union_231280 local_68;
  Il2CppType *pIStack_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  _union_231120 local_48;
  Il2CppType *pIStack_40;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  
  pMVar13 = (MethodInfo *)modeSettings;
  if (DAT_05703eab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Custom);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"OnGameStart");
    il2cpp_init_method_metadata(&"Init");
    il2cpp_init_method_metadata(&"Main");
    DAT_05703eab = '\x01';
  }
  local_c8._32_8_ =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_a0 = (Il2CppType *)0x0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.genericMethod = (void *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_68.genericMethod = (void *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.genericMethod = (void *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  local_38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  CustomLogic_CustomLogicEvaluator__Init(__this,pMVar13);
  (__this->fields).CurrentTime = 0.0;
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
            (__this->fields)._staticClasses;
  local_d0 = (Il2CppClass *)__this;
  if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                     (pSVar11,"Main",MethodInfo_CustomLogicClassInstance_get_Item);
  if (modeSettings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                     ((System_Collections_Generic_Dictionary_object__object__o *)modeSettings,
                      MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
  if (pSVar9 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             local_e8,pSVar9,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  local_98 = local_d8;
  local_c8._32_8_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
  pIStack_a0 = (Il2CppType *)local_e8._8_8_;
  pSVar14 = addonSettings;
  while (__this_01.fields._currentKey = (Il2CppObject *)pSVar14,
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             in_stack_fffffffffffffef8._0_8_,
        __this_01.fields._index = in_stack_fffffffffffffef8._8_4_,
        __this_01.fields._version = in_stack_fffffffffffffef8._12_4_,
        bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D0850 *)(local_c8 + 0x20)), pSVar6 = local_98,
        (char)bVar7 != '\0') {
    pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)modeSettings,
                         (Il2CppObject *)local_98,MethodInfo_BaseSetting_get_Item);
    if (pIVar10 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar10->klass;
      bVar1 = (pIVar3->_2).naturalAligment;
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
        bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
            bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
            if ((bVar2 <= bVar1) && ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting))
            {
              if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar11 = pIVar8[1].monitor;
              local_e8[0] = *(undefined1 *)((long)&pIVar10[1].klass + 1);
              pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,local_e8);
              if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar11,(Il2CppObject *)pSVar6,pIVar10,MethodInfo_Void_set_Item);
            }
          }
          else {
            if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar11 = pIVar8[1].monitor;
            local_e8._0_4_ = *(undefined4 *)((long)&pIVar10[1].klass + 4);
            pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_e8);
            if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar11,(Il2CppObject *)pSVar6,pIVar10,MethodInfo_Void_set_Item);
          }
        }
        else {
          if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pIVar8[1].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pIVar8[1].monitor,(Il2CppObject *)pSVar6,pIVar10[1].monitor,MethodInfo_Void_set_Item);
        }
      }
      else {
        if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = pIVar8[1].monitor;
        local_e8._0_4_ = *(undefined4 *)((long)&pIVar10[1].klass + 4);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,local_e8);
        if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar11,(Il2CppObject *)pSVar6,pIVar10,MethodInfo_Void_set_Item);
      }
    }
  }
  __this_02.fields._currentKey = (Il2CppObject *)pSVar14;
  __this_02.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
  __this_02.fields._index = in_stack_fffffffffffffef8._8_4_;
  __this_02.fields._version = in_stack_fffffffffffffef8._12_4_;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_02,(MethodInfo_31D0840 *)(local_c8 + 0x20));
  pIVar3 = (local_d0->_1).declaringType;
  if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                     ((System_Collections_Generic_Dictionary_object__object__o *)pIVar3,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S
                     );
  if (pSVar9 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             local_e8,pSVar9,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  local_78 = local_d8;
  local_88._4_4_ = local_e8._4_4_;
  local_88._0_4_ = local_e8._0_4_;
  pIStack_80 = (Il2CppType *)local_e8._8_8_;
  while (__this_03.fields._currentKey = (Il2CppObject *)pSVar14,
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             in_stack_fffffffffffffef8._0_8_,
        __this_03.fields._index = in_stack_fffffffffffffef8._8_4_,
        __this_03.fields._version = in_stack_fffffffffffffef8._12_4_,
        bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_03,(MethodInfo_31D0850 *)&local_88), pSVar6 = local_78,
        (char)bVar7 != '\0') {
    if ((addonSettings !=
         (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) &&
       (bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                           (Il2CppObject *)local_78,MethodInfo_Boolean_ContainsKey), (char)bVar7 != '\0')) {
      pIVar3 = (local_d0->_1).declaringType;
      if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)pIVar3,
                          (Il2CppObject *)pSVar6,MethodInfo_CustomLogicClassInstance_get_Item);
      pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                           (Il2CppObject *)pSVar6,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar9 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar11,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S)
      ;
      if (pSVar9 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 local_e8,pSVar9,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      local_98 = local_d8;
      local_c8._32_8_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
      pIStack_a0 = (Il2CppType *)local_e8._8_8_;
      while (__this_04.fields._currentKey = (Il2CppObject *)pSVar14,
            __this_04.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 in_stack_fffffffffffffef8._0_8_,
            __this_04.fields._index = in_stack_fffffffffffffef8._8_4_,
            __this_04.fields._version = in_stack_fffffffffffffef8._12_4_,
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this_04,(MethodInfo_31D0850 *)(local_c8 + 0x20)), key = local_98,
            (char)bVar7 != '\0') {
        pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             addonSettings,(Il2CppObject *)pSVar6,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
        if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar11,(Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
        if (pIVar10 != (Il2CppObject *)0x0) {
          pIVar3 = pIVar10->klass;
          bVar1 = (pIVar3->_2).naturalAligment;
          bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
            bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
              bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting))
              {
                bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                if ((bVar2 <= bVar1) &&
                   ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
                  if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar11 = pIVar8[1].monitor;
                  local_e8[0] = *(undefined1 *)((long)&pIVar10[1].klass + 1);
                  pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,local_e8);
                  if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            (pSVar11,(Il2CppObject *)key,pIVar10,MethodInfo_Void_set_Item);
                }
              }
              else {
                if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar11 = pIVar8[1].monitor;
                local_e8._0_4_ = *(undefined4 *)((long)&pIVar10[1].klass + 4);
                pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_e8);
                if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          (pSVar11,(Il2CppObject *)key,pIVar10,MethodInfo_Void_set_Item);
              }
            }
            else {
              if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (pIVar8[1].monitor ==
                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pIVar8[1].monitor,(Il2CppObject *)key,pIVar10[1].monitor,MethodInfo_Void_set_Item);
            }
          }
          else {
            if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar11 = pIVar8[1].monitor;
            local_e8._0_4_ = *(undefined4 *)((long)&pIVar10[1].klass + 4);
            pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,local_e8);
            if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            addonSettings = pSVar14;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar11,(Il2CppObject *)key,pIVar10,MethodInfo_Void_set_Item);
            pSVar14 = addonSettings;
          }
        }
      }
      __this_05.fields._currentKey = (Il2CppObject *)pSVar14;
      __this_05.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
      __this_05.fields._index = in_stack_fffffffffffffef8._8_4_;
      __this_05.fields._version = in_stack_fffffffffffffef8._12_4_;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_05,(MethodInfo_31D0840 *)(local_c8 + 0x20));
    }
  }
  __this_06.fields._currentKey = (Il2CppObject *)pSVar14;
  __this_06.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
  __this_06.fields._index = in_stack_fffffffffffffef8._8_4_;
  __this_06.fields._version = in_stack_fffffffffffffef8._12_4_;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_06,(MethodInfo_31D0840 *)&local_88);
  pIVar4 = local_d0;
  pIVar3 = (local_d0->_1).castClass;
  if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar12 = System_Collections_Generic_Dictionary<object__object>__get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar3,
                       MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
  if (pSVar12 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
             local_e8,pSVar12,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  local_c8._16_8_ = local_d8;
  local_c8._0_8_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
  local_c8._8_8_ = local_e8._8_8_;
  while (__this_07.fields._currentValue = (Il2CppObject *)pSVar14,
        __this_07.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             in_stack_fffffffffffffef8._0_8_,
        __this_07.fields._index = in_stack_fffffffffffffef8._8_4_,
        __this_07.fields._version = in_stack_fffffffffffffef8._12_4_,
        bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_07,(MethodInfo_31D09E0 *)local_c8), uVar5 = local_c8._16_8_,
        (char)bVar7 != '\0') {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              ((CustomLogic_CustomLogicEvaluator_o *)pIVar4,
               (CustomLogic_CustomLogicClassInstance_o *)local_c8._16_8_,"Init",
               (System_Object_array *)0x0,0,in_R9);
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar5 ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)
     ((long)&((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)(uVar5 + 0x10))->
             _buckets + 1) = 1;
  }
  __this_08.fields._currentValue = (Il2CppObject *)pSVar14;
  __this_08.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
  __this_08.fields._index = in_stack_fffffffffffffef8._8_4_;
  __this_08.fields._version = in_stack_fffffffffffffef8._12_4_;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
            (__this_08,(MethodInfo_31D09D0 *)local_c8);
  pIVar3 = (local_d0->_1).parent;
  if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar12 = System_Collections_Generic_Dictionary<object__object>__get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar3,
                       MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
  if (pSVar12 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
             local_e8,pSVar12,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  pIVar3 = local_d0;
  local_58 = local_d8;
  local_68._4_4_ = local_e8._4_4_;
  local_68._0_4_ = local_e8._0_4_;
  pIStack_60 = (Il2CppType *)local_e8._8_8_;
  pIVar8 = (Il2CppObject *)0x0;
  while (__this_09.fields._currentValue = pIVar8,
        __this_09.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             in_stack_fffffffffffffef8._0_8_,
        __this_09.fields._index = in_stack_fffffffffffffef8._8_4_,
        __this_09.fields._version = in_stack_fffffffffffffef8._12_4_,
        bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_09,(MethodInfo_31D09E0 *)&local_68), (char)bVar7 != '\0') {
    if (local_58 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar12 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Values
                        (local_58,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Custom);
    if (pSVar12 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary_ValueCollection<Int32Enum__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               local_e8,pSVar12,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    local_38 = local_d8;
    local_48._4_4_ = local_e8._4_4_;
    local_48._0_4_ = local_e8._0_4_;
    pIStack_40 = (Il2CppType *)local_e8._8_8_;
    while (__this_10.fields._currentValue = pIVar8,
          __this_10.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               in_stack_fffffffffffffef8._0_8_,
          __this_10.fields._index = in_stack_fffffffffffffef8._8_4_,
          __this_10.fields._version = in_stack_fffffffffffffef8._12_4_,
          bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__MoveNext
                            (__this_10,(MethodInfo_31C8640 *)&local_48), pSVar6 = local_38,
          (char)bVar7 != '\0') {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                ((CustomLogic_CustomLogicEvaluator_o *)pIVar3,
                 (CustomLogic_CustomLogicClassInstance_o *)local_38,"Init",
                 (System_Object_array *)0x0,0,in_R9);
      if (pSVar6 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(undefined1 *)((long)&(pSVar6->fields)._buckets + 1) = 1;
    }
    __this_11.fields._currentValue = pIVar8;
    __this_11.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
    __this_11.fields._index = in_stack_fffffffffffffef8._8_4_;
    __this_11.fields._version = in_stack_fffffffffffffef8._12_4_;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__Dispose
              (__this_11,(MethodInfo_31C8630 *)&local_48);
  }
  __this_12.fields._currentValue = pIVar8;
  __this_12.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
  __this_12.fields._index = in_stack_fffffffffffffef8._8_4_;
  __this_12.fields._version = in_stack_fffffffffffffef8._12_4_;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
            (__this_12,(MethodInfo_31D09D0 *)&local_68);
  pIVar3 = local_d0;
  if (pIVar8 != (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_022c0ed0();
  }
  pIVar4 = (local_d0->_1).declaringType;
  if (pIVar4 != (Il2CppClass *)0x0) {
    pSVar12 = System_Collections_Generic_Dictionary<object__object>__get_Values
                        ((System_Collections_Generic_Dictionary_object__object__o *)pIVar4,
                         MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    if (pSVar12 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar13 = (MethodInfo *)&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T;
    System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               local_e8,pSVar12,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    local_c8._16_8_ = local_d8;
    local_c8._0_8_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
    local_c8._8_8_ = local_e8._8_8_;
    while (__this_13.fields._currentValue = pIVar8,
          __this_13.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               in_stack_fffffffffffffef8._0_8_,
          __this_13.fields._index = in_stack_fffffffffffffef8._8_4_,
          __this_13.fields._version = in_stack_fffffffffffffef8._12_4_,
          bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_13,(MethodInfo_31D09E0 *)local_c8), (char)bVar7 != '\0') {
      CustomLogic_CustomLogicEvaluator__AddCallbacks
                ((CustomLogic_CustomLogicEvaluator_o *)pIVar3,
                 (CustomLogic_CustomLogicClassInstance_o *)local_c8._16_8_,method_00);
    }
    __this_14.fields._currentValue = pIVar8;
    __this_14.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8._0_8_;
    __this_14.fields._index = in_stack_fffffffffffffef8._8_4_;
    __this_14.fields._version = in_stack_fffffffffffffef8._12_4_;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
              (__this_14,(MethodInfo_31D09D0 *)local_c8);
    pIVar4 = local_d0;
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              ((CustomLogic_CustomLogicEvaluator_o *)local_d0,"Init",
               (System_Object_array *)0x0,pMVar13);
    pIVar3 = (pIVar4->_1).castClass;
    if (pIVar3 != (Il2CppClass *)0x0) {
      instance = (CustomLogic_CustomLogicClassInstance_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)pIVar3,
                            "Main",MethodInfo_CustomLogicClassInstance_get_Item);
      CustomLogic_CustomLogicEvaluator__AddCallbacks
                ((CustomLogic_CustomLogicEvaluator_o *)pIVar4,instance,method_01);
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                ((CustomLogic_CustomLogicEvaluator_o *)pIVar4,"OnGameStart",
                 (System_Object_array *)0x0,pMVar13);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (DAT_05703ebc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_OnSecond_d__18);
        DAT_05703ebc = '\x01';
      }
      pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_OnSecond_d__18);
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar8[1].klass = 0;
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar8[2].klass = pIVar4;
        il2cpp_runtime_glue(pIVar8 + 2,pIVar4);
        if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine
                    (__this_00,(System_Collections_IEnumerator_o *)pIVar8,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$AddCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__AddCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x3f5f560

void CustomLogic_CustomLogicEvaluator__AddCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  long lVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar9;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05703eac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicClassInstance);
    DAT_05703eac = '\x01';
    method = extraout_RDX;
  }
  pCVar3 = (__this->fields)._start;
  if ((pCVar3 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
    pIVar8 = (Il2CppObject *)
             (*(instance->klass->vtable)._4_unknown.methodPtr)
                       (instance,(instance->klass->vtable)._4_unknown.method,method);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar4,pIVar8,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if ((pIVar8 != (Il2CppObject *)0x0) && (pIVar8[2].klass != (Il2CppClass *)0x0)) {
        __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               pIVar8[2].klass,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
        if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        {
          System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                      *)local_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
          pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c
                     *)local_48._0_8_;
          pIVar11 = (Il2CppType *)local_48._8_8_;
          pIVar8 = local_38;
          while( true ) {
            __this_00.fields._8_8_ = pIVar11;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
            __this_00.fields._currentKey = pIVar8;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
            if ((char)bVar7 == '\0') {
              __this_01.fields._8_8_ = pIVar11;
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
              __this_01.fields._currentKey = pIVar8;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                        (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
              return;
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._callbacks;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar12 = pIVar8;
            bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              (pSVar4,pIVar8,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar7 == '\0') {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._callbacks;
              pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_CustomLogicClassInstance)
              ;
              System_Collections_Generic_List<object>___ctor(pSVar9,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance);
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar4,pIVar8,(Il2CppObject *)pSVar9,MethodInfo_Void_Add);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._callbacks;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            pSVar9 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar4,pIVar8,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
            lVar6 = MethodInfo_Void_Add;
            if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar9->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (pSVar9->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (pSVar9->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)instance;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,instance);
              pIVar8 = pIVar12;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar9,(Il2CppObject *)instance,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
              pIVar8 = pIVar12;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$RemoveCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__RemoveCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x3f5fc60

void CustomLogic_CustomLogicEvaluator__RemoveCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05703ead == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05703ead = '\x01';
    method = extraout_RDX;
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicComponentInstance_o *)0x0)) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar4 = (Il2CppObject *)
             (*(instance->klass->vtable)._4_get_ClassName.methodPtr)
                       (instance,(instance->klass->vtable)._4_get_ClassName.method,method);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,pIVar4,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[2].klass != (Il2CppClass *)0x0)) {
        __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               pIVar4[2].klass,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
        if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        {
          System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                      *)local_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
          pSVar5 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *
                   )local_48._0_8_;
          pIVar6 = (Il2CppType *)local_48._8_8_;
          while( true ) {
            do {
              pIVar4 = local_38;
              __this_00.fields._8_8_ = pIVar6;
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
              __this_00.fields._currentKey = pIVar4;
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
              if ((char)bVar3 == '\0') {
                __this_01.fields._8_8_ = pIVar6;
                __this_01.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
                __this_01.fields._currentKey = pIVar4;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
                return;
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._callbacks;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar7 = pIVar4;
              bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar2,pIVar4,MethodInfo_Boolean_ContainsKey);
              local_38 = pIVar7;
            } while ((char)bVar3 == '\0');
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._callbacks;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_03 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar2,pIVar4,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
            if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) break;
            bVar3 = System_Collections_Generic_List<object>__Contains
                              (__this_03,(Il2CppObject *)instance,MethodInfo_Boolean_Contains);
            local_38 = pIVar7;
            if ((char)bVar3 != '\0') {
              System_Collections_Generic_List<object>__Remove
                        (__this_03,(Il2CppObject *)instance,MethodInfo_Boolean_Remove);
              local_38 = pIVar7;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnTick
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnTick (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f5ff50

void CustomLogic_CustomLogicEvaluator__OnTick
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  float fVar1;
  MethodInfo *in_RCX;
  float fVar2;
  
  if (DAT_05703eae == '\0') {
    il2cpp_init_method_metadata(&"OnTick");
    DAT_05703eae = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnTick",(System_Object_array *)0x0,in_RCX);
  fVar1 = (__this->fields).CurrentTime;
  fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).CurrentTime = fVar2 + fVar1;
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnFrame
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnFrame (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f5ffb0

void CustomLogic_CustomLogicEvaluator__OnFrame
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05703eaf == '\0') {
    il2cpp_init_method_metadata(&"OnFrame");
    DAT_05703eaf = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnFrame",(System_Object_array *)0x0,in_RCX);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnLateFrame
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnLateFrame (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f5fff0

void CustomLogic_CustomLogicEvaluator__OnLateFrame
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05703eb0 == '\0') {
    il2cpp_init_method_metadata(&"OnLateFrame");
    DAT_05703eb0 = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnLateFrame",(System_Object_array *)0x0,in_RCX);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnButtonClick
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnButtonClick (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f60030

void CustomLogic_CustomLogicEvaluator__OnButtonClick
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05703eb1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Free);
    il2cpp_init_method_metadata(&MethodInfo_Object___New);
    il2cpp_init_method_metadata(&TypeInfo_ArrayPool_object);
    il2cpp_init_method_metadata(&"OnButtonClick");
    DAT_05703eb1 = '\x01';
  }
  if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  parameters = Unity_VisualScripting_ArrayPool<object>__New(1,MethodInfo_Object___New);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (name != (System_String_o *)0x0) {
    lVar1 = il2cpp_runtime_glue(name,(((parameters->obj).klass)->_1).element_class);
    if (lVar1 == 0) {
      uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar2,0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    il2cpp_runtime_glue(parameters->m_Items,name);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnButtonClick",parameters,in_RCX);
    Unity_VisualScripting_ArrayPool<object>__Free(parameters,MethodInfo_Void_Free);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerSpawn
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerSpawn (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3f60130

void CustomLogic_CustomLogicEvaluator__OnPlayerSpawn
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05703eb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnPlayerSpawn");
    DAT_05703eb2 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
    pCVar1 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)player);
  }
  else {
    pCVar1 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)player);
  }
  if (pCVar1 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (lVar2 = il2cpp_runtime_glue(__this_00,(((parameters->obj).klass)->_1).element_class),
     lVar2 == 0)) {
LAB_03f60292:
    uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar3,0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(parameters->m_Items,__this_00);
    lVar2 = il2cpp_runtime_glue(pCVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_03f60292;
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)pCVar1;
      il2cpp_runtime_glue(parameters->m_Items + 1,pCVar1);
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                (__this,"OnPlayerSpawn",parameters,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterSpawn
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterSpawn (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3f60520

void CustomLogic_CustomLogicEvaluator__OnCharacterSpawn
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  System_Object_array *parameters;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *in_RCX;
  Characters_BaseCharacter_o *pCVar5;
  
  pCVar5 = character;
  if (DAT_05703eb3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCharacterSpawn");
    DAT_05703eb3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicEvaluator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicEvaluator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar5);
  }
  else {
    pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar5);
  }
  if (pCVar2 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = il2cpp_runtime_glue(pCVar2,(((parameters->obj).klass)->_1).element_class);
  if (lVar3 == 0) {
    uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar4,0);
  }
  if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  parameters->m_Items[0] = (Il2CppObject *)pCVar2;
  il2cpp_runtime_glue(parameters->m_Items,pCVar2);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnCharacterSpawn",parameters,in_RCX);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterReloaded
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterReloaded (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3f60650

void CustomLogic_CustomLogicEvaluator__OnCharacterReloaded
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  System_Object_array *parameters;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *in_RCX;
  Characters_BaseCharacter_o *pCVar5;
  
  pCVar5 = character;
  if (DAT_05703eb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCharacterReloaded");
    DAT_05703eb4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicEvaluator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicEvaluator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar5);
  }
  else {
    pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar5);
  }
  if (pCVar2 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = il2cpp_runtime_glue(pCVar2,(((parameters->obj).klass)->_1).element_class);
  if (lVar3 == 0) {
    uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar4,0);
  }
  if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  parameters->m_Items[0] = (Il2CppObject *)pCVar2;
  il2cpp_runtime_glue(parameters->m_Items,pCVar2);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnCharacterReloaded",parameters,in_RCX);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterDie
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterDie (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* victim, Characters_BaseCharacter_o* killer, System_String_o* killerName, const MethodInfo* method);
// 0x3f60780

void CustomLogic_CustomLogicEvaluator__OnCharacterDie
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *victim,
               Characters_BaseCharacter_o *killer,System_String_o *killerName,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  System_Object_array *parameters;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *method_01;
  
  method_00 = (MethodInfo *)killerName;
  method_01 = victim;
  if (DAT_05703eb5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCharacterDie");
    DAT_05703eb5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(victim,(MethodInfo *)method_01);
  pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(killer,(MethodInfo *)method_01);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pCVar1 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pCVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_03f608d2;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pCVar1;
    il2cpp_runtime_glue(parameters->m_Items,pCVar1);
    if (pCVar2 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pCVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03f608d2;
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)pCVar2;
      il2cpp_runtime_glue(parameters->m_Items + 1,pCVar2);
      if (killerName != (System_String_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(killerName,(((parameters->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_03f608d2:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = (Il2CppObject *)killerName;
        il2cpp_runtime_glue(parameters->m_Items + 2,killerName);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  (__this,"OnCharacterDie",parameters,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterDamaged
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterDamaged (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* victim, Characters_BaseCharacter_o* killer, System_String_o* killerName, int32_t damage, const MethodInfo* method);
// 0x3f608f0

void CustomLogic_CustomLogicEvaluator__OnCharacterDamaged
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *victim,
               Characters_BaseCharacter_o *killer,System_String_o *killerName,int32_t damage,
               MethodInfo *method)

{
  undefined8 in_RAX;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  System_Object_array *parameters;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *method_01;
  undefined8 uStack_38;
  
  method_00 = (MethodInfo *)killerName;
  method_01 = victim;
  uStack_38 = in_RAX;
  if (DAT_05703eb6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnCharacterDamaged");
    DAT_05703eb6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(victim,(MethodInfo *)method_01);
  pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(killer,(MethodInfo *)method_01);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pCVar1 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pCVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_03f60aad;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pCVar1;
    il2cpp_runtime_glue(parameters->m_Items,pCVar1);
    if (pCVar2 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pCVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03f60aad;
    }
    if ((uint)parameters->max_length < 2) goto LAB_03f60aa8;
    parameters->m_Items[1] = (Il2CppObject *)pCVar2;
    il2cpp_runtime_glue(parameters->m_Items + 1,pCVar2);
    if (killerName != (System_String_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(killerName,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03f60aad;
    }
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = (Il2CppObject *)killerName;
      il2cpp_runtime_glue(parameters->m_Items + 2,killerName);
      uStack_38 = CONCAT44(damage,(undefined4)uStack_38);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_38 + 4);
      if (pIVar4 != (Il2CppObject *)0x0) {
        lVar3 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_03f60aad:
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
      }
      if (3 < (uint)parameters->max_length) {
        parameters->m_Items[3] = pIVar4;
        il2cpp_runtime_glue(parameters->m_Items + 3,pIVar4);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  (__this,"OnCharacterDamaged",parameters,method_00);
        return;
      }
    }
  }
LAB_03f60aa8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnChatInput
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnChatInput (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* message, const MethodInfo* method);
// 0x3f60ad0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__OnChatInput
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *message,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_Object_array *pSVar5;
  long lVar6;
  char *pcVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  int iVar10;
  MethodInfo *in_R9;
  undefined8 in_stack_ffffffffffffff88;
  Il2CppObject *pIVar11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_05703eb7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Main");
    il2cpp_init_method_metadata(&"OnChatInput");
    DAT_05703eb7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  local_48.fields._dictionary._0_1_ = 1;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_48);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return pIVar3;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._staticClasses;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03f60f97;
  pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
           System_Collections_Generic_Dictionary<object__object>__get_Item
                     (pSVar1,"Main",MethodInfo_CustomLogicClassInstance_get_Item);
  bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                    (__this_00,pCVar4,"OnChatInput",(MethodInfo *)&"OnChatInput");
  if ((char)bVar2 != '\0') {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._staticClasses;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03f60f97;
    pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,"Main",MethodInfo_CustomLogicClassInstance_get_Item);
    pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_03f60f97;
    if ((message != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(message,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
    {
      uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar9,0);
    }
    if ((int)pSVar5->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(pSVar5->m_Items,message);
    pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,pCVar4,"OnChatInput",pSVar5,0,in_R9);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else if (((System_Object_array *)pIVar3->klass == DAT_05711048) &&
            (pcVar7 = (char *)il2cpp_glue_022c7330(), *pcVar7 == '\0')) {
      local_48.fields._dictionary._0_1_ = 0;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_48);
      return pIVar3;
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses
  ;
  if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
     __this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
LAB_03f60f97:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar5 = (System_Object_array *)&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T;
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            (&local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  pIVar11 = (Il2CppObject *)
            CONCAT71(local_48.fields._dictionary._1_7_,local_48.fields._dictionary._0_1_);
  if (message == (System_String_o *)0x0) {
    do {
      do {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
        __this_02.fields._currentValue = pIVar11;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_02,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') goto LAB_03f60f3f;
        if ((CustomLogic_CustomLogicClassInstance_o *)local_48.fields._currentValue ==
            (CustomLogic_CustomLogicClassInstance_o *)0x0) goto LAB_03f60f79;
      } while (((char)((CustomLogic_CustomLogicClassInstance_Fields *)
                      ((long)local_48.fields._currentValue + 0x10))->Enabled == '\0') ||
              (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                                 (__this_00,
                                  (CustomLogic_CustomLogicClassInstance_o *)
                                  local_48.fields._currentValue,"OnChatInput",(MethodInfo *)pSVar5),
              (char)bVar2 == '\0'));
      pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      if (pSVar5 == (System_Object_array *)0x0) goto LAB_03f60f7e;
      if ((int)pSVar5->max_length == 0) goto LAB_03f60f83;
      pSVar5->m_Items[0] = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(pSVar5->m_Items,0);
      pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,
                          (CustomLogic_CustomLogicClassInstance_o *)local_48.fields._currentValue,
                          "OnChatInput",pSVar5,0,in_R9);
    } while (((pIVar8 == (Il2CppObject *)0x0) ||
             (pSVar5 = (System_Object_array *)pIVar8->klass, pSVar5 != DAT_05711048)) ||
            (pcVar7 = (char *)il2cpp_glue_022c7330(pIVar8), *pcVar7 != '\0'));
  }
  else {
    do {
      do {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
        __this_01.fields._currentValue = pIVar11;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') goto LAB_03f60f3f;
        if ((CustomLogic_CustomLogicClassInstance_o *)local_48.fields._currentValue ==
            (CustomLogic_CustomLogicClassInstance_o *)0x0) {
LAB_03f60f79:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while (((char)((CustomLogic_CustomLogicClassInstance_Fields *)
                      ((long)local_48.fields._currentValue + 0x10))->Enabled == '\0') ||
              (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                                 (__this_00,
                                  (CustomLogic_CustomLogicClassInstance_o *)
                                  local_48.fields._currentValue,"OnChatInput",(MethodInfo *)pSVar5),
              (char)bVar2 == '\0'));
      pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      if (pSVar5 == (System_Object_array *)0x0) {
LAB_03f60f7e:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar6 = il2cpp_runtime_glue(message,(((pSVar5->obj).klass)->_1).element_class);
      if (lVar6 == 0) {
        uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar9,0);
      }
      if ((int)pSVar5->max_length == 0) {
LAB_03f60f83:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar5->m_Items[0] = (Il2CppObject *)message;
      il2cpp_runtime_glue(pSVar5->m_Items,message);
      pIVar8 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,
                          (CustomLogic_CustomLogicClassInstance_o *)local_48.fields._currentValue,
                          "OnChatInput",pSVar5,0,in_R9);
    } while (((pIVar8 == (Il2CppObject *)0x0) ||
             (pSVar5 = (System_Object_array *)pIVar8->klass, pSVar5 != DAT_05711048)) ||
            (pcVar7 = (char *)il2cpp_glue_022c7330(pIVar8), *pcVar7 != '\0'));
  }
  local_48.fields._dictionary._0_1_ = 0;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_48);
  iVar10 = 6;
LAB_03f60f4c:
  __this_03.fields._8_8_ = pIVar3;
  __this_03.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
  __this_03.fields._currentValue = pIVar11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
            (__this_03,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
  if (iVar10 == 6) {
    pIVar3 = pIVar8;
  }
  return pIVar3;
LAB_03f60f3f:
  iVar10 = 3;
  pIVar8 = (Il2CppObject *)0x0;
  goto LAB_03f60f4c;
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerJoin
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerJoin (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3f611c0

void CustomLogic_CustomLogicEvaluator__OnPlayerJoin
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  System_Object_array *parameters;
  long lVar2;
  CustomLogic_CustomLogicUIBuiltin_o *__this_02;
  undefined8 uVar3;
  MethodInfo *in_RCX;
  
  if (DAT_05703eb8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnPlayerJoin");
    il2cpp_init_method_metadata(&"UI");
    DAT_05703eb8 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters != (System_Object_array *)0x0) {
    if (__this_01 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(__this_01,(((parameters->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(parameters->m_Items,__this_01);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnPlayerJoin",parameters,in_RCX);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._staticClasses;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = (CustomLogic_CustomLogicUIBuiltin_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (__this_00,"UI",MethodInfo_CustomLogicClassInstance_get_Item);
      if (__this_02 != (CustomLogic_CustomLogicUIBuiltin_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogicUIBuiltin->_2).naturalAligment;
        if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicUIBuiltin)) {
          CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin(__this_02,player,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_02);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerLeave
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerLeave (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3f61340

void CustomLogic_CustomLogicEvaluator__OnPlayerLeave
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05703eb9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"OnPlayerLeave");
    DAT_05703eb9 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    lVar1 = il2cpp_runtime_glue(__this_00,(((parameters->obj).klass)->_1).element_class);
    if (lVar1 == 0) {
      uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar2,0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(parameters->m_Items,__this_00);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnPlayerLeave",parameters,in_RCX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnNetworkMessage (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* sender, System_String_o* message, double sentServerTimestamp, const MethodInfo* method);
// 0x3f61420

void CustomLogic_CustomLogicEvaluator__OnNetworkMessage
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *sender,
               System_String_o *message,double sentServerTimestamp,MethodInfo *method)

{
  System_Object_array *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  long lVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  undefined8 uVar7;
  MethodInfo *in_R9;
  double local_30;
  
  if (DAT_05703eba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&"Main");
    il2cpp_init_method_metadata(&"OnNetworkMessage");
    DAT_05703eba = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,sender,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._networkCallback;
  if (pSVar1 == (System_Object_array *)0x0) goto LAB_03f61664;
  if ((__this_01 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(__this_01,(((pSVar1->obj).klass)->_1).element_class), lVar4 == 0))
  {
LAB_03f6166e:
    uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar7,0);
  }
  if ((int)pSVar1->max_length == 0) {
LAB_03f61669:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar1->m_Items[0] = (Il2CppObject *)__this_01;
  il2cpp_runtime_glue(pSVar1->m_Items,__this_01);
  pSVar1 = (__this->fields)._networkCallback;
  if (pSVar1 == (System_Object_array *)0x0) goto LAB_03f61664;
  if ((message != (System_String_o *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(message,(((pSVar1->obj).klass)->_1).element_class), lVar4 == 0))
  goto LAB_03f6166e;
  if ((uint)pSVar1->max_length < 2) goto LAB_03f61669;
  pSVar1->m_Items[1] = (Il2CppObject *)message;
  il2cpp_runtime_glue(pSVar1->m_Items + 1,message);
  pSVar1 = (__this->fields)._networkCallback;
  local_30 = sentServerTimestamp;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,&local_30);
  if (pSVar1 == (System_Object_array *)0x0) goto LAB_03f61664;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pIVar5,(((pSVar1->obj).klass)->_1).element_class), lVar4 == 0))
  goto LAB_03f6166e;
  if ((uint)pSVar1->max_length < 3) goto LAB_03f61669;
  pSVar1->m_Items[2] = pIVar5;
  il2cpp_runtime_glue(pSVar1->m_Items + 2,pIVar5);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._staticClasses;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f61664:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar2,"Main",MethodInfo_CustomLogicClassInstance_get_Item);
    bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar6,"OnNetworkMessage",method);
    if ((char)bVar3 != '\0') {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._staticClasses;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f61664;
      pCVar6 = (CustomLogic_CustomLogicClassInstance_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,"Main",MethodInfo_CustomLogicClassInstance_get_Item);
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,pCVar6,"OnNetworkMessage",(__this->fields)._networkCallback,0,in_R9);
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$GetCharacterBuiltin
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3f602b0

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
          (Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  CustomLogic_CustomLogicHumanBuiltin_o *__this;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_00;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  
  if (DAT_05703ebb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_05703ebb = '\x01';
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
    return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
  }
  pCVar3 = character->klass;
  bVar1 = (pCVar3->_2).naturalAligment;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
    bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
      bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
        bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if (bVar1 < bVar2) {
          return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
        }
        if ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter) {
          return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
        }
        __this_02 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
        bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar1 <= (character->klass->_2).naturalAligment) &&
           ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
          CustomLogic_CustomLogicShifterBuiltin___ctor
                    (__this_02,(Characters_BaseShifter_o *)character,(MethodInfo *)0x0);
          return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_02;
        }
      }
      else {
        __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin)
        ;
        bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if ((bVar1 <= (character->klass->_2).naturalAligment) &&
           ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter)) {
          CustomLogic_CustomLogicWallColossalBuiltin___ctor
                    (__this_01,(Characters_WallColossalShifter_o *)character,(MethodInfo *)0x0);
          return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_01;
        }
      }
    }
    else {
      __this_00 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
      bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 <= (character->klass->_2).naturalAligment) &&
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) {
        CustomLogic_CustomLogicTitanBuiltin___ctor
                  (__this_00,(Characters_BasicTitan_o *)character,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_00;
      }
    }
  }
  else {
    __this = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (character->klass->_2).naturalAligment) &&
       ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      CustomLogic_CustomLogicHumanBuiltin___ctor
                (__this,(Characters_Human_o *)character,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(character);
}


// CustomLogic.CustomLogicEvaluator$$OnSecond
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicEvaluator__OnSecond (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f5fa60

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicEvaluator__OnSecond
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703ebc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_OnSecond_d__18);
    DAT_05703ebc = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_OnSecond_d__18);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$Init
// il2cpp: void CustomLogic_CustomLogicEvaluator__Init (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f5cd10

/* WARNING: Removing unreachable block (ram,0x03f5dbcf) */
/* WARNING: Removing unreachable block (ram,0x03f5d94c) */

void CustomLogic_CustomLogicEvaluator__Init
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Object_array *args;
  CustomLogic_CustomLogicStartAst_o *pCVar4;
  long *plVar5;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_12;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_13;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_14;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_15;
  bool_conflict bVar7;
  int32_t iVar8;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar9;
  Il2CppObject *pIVar10;
  int *piVar11;
  CustomLogic_CustomLogicClassInstance_o *pCVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_16;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar14;
  Map_MapObject_o *obj;
  MethodInfo *pMVar15;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *in_R9;
  undefined8 in_stack_fffffffffffffeb8;
  _union_329995 in_stack_fffffffffffffec0;
  Il2CppObject *in_stack_fffffffffffffec8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_130;
  System_Nullable_CustomLogicSourceType__Fields local_128;
  int32_t local_120;
  int32_t local_11c;
  _union_329995 local_118;
  Il2CppObject *pIStack_110;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_108;
  System_Nullable_CustomLogicSourceType__Fields local_100;
  _union_329995 local_f8;
  Il2CppObject *pIStack_f0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_e8;
  _union_329995 local_d8;
  Il2CppObject *pIStack_d0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_c8;
  _union_329995 local_b8;
  Il2CppObject *pIStack_b0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a8;
  _union_329995 local_98;
  Il2CppObject *pIStack_90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  _union_231280 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  _union_329995 local_58;
  Il2CppObject *pIStack_50;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_48;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *local_38;
  
  if (DAT_05703ebd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Custom);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_CustomLogicSourceType__CustomLogicCla);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Main");
    DAT_05703ebd = '\x01';
  }
  local_98.genericMethod = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8.genericMethod = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_b0 = (Il2CppObject *)0x0;
  local_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.hasValue = 0;
  local_128.value = 0;
  local_11c = 0;
  local_100.hasValue = 0;
  local_100.value = 0;
  local_120 = 0;
  local_d8.genericMethod = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_d0 = (Il2CppObject *)0x0;
  local_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.genericMethod = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_110 = (Il2CppObject *)0x0;
  local_108 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.genericMethod = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_f0 = (Il2CppObject *)0x0;
  local_e8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.genericMethod = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_50 = (Il2CppObject *)0x0;
  local_48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.genericMethod = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses
  ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields).AddonToNetworkView;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x20);
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xfffffffffffffec0,
                   pSVar3,MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
        local_88 = local_130;
        local_98 = in_stack_fffffffffffffec0;
        pIStack_90 = in_stack_fffffffffffffec8;
        while (__this_00.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod,
              __this_00.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8,
              __this_00.fields._current = in_stack_fffffffffffffec8,
              bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_00,(MethodInfo_3185890 *)&local_98), pSVar13 = local_88,
              (char)bVar7 != '\0') {
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          args = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
          if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
            il2cpp_init_class();
          }
          value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                            ((System_String_o *)pSVar13,args,(MethodInfo *)0x0);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._staticClasses;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar2,(Il2CppObject *)pSVar13,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        }
        __this_01.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8
        ;
        __this_01.fields._current = in_stack_fffffffffffffec8;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185880 *)&local_98);
        pCVar4 = (__this->fields)._start;
        if (((pCVar4 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
            (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pCVar4->fields).Classes,
            pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
           (pSVar9 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                               (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
           pSVar9 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                      *)&stack0xfffffffffffffec0,pSVar9,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
          local_a8 = local_130;
          local_b8 = in_stack_fffffffffffffec0;
          pIStack_b0 = in_stack_fffffffffffffec8;
          while (__this_02.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod,
                __this_02.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_fffffffffffffeb8,
                __this_02.fields._currentKey = in_stack_fffffffffffffec8,
                bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                  (__this_02,(MethodInfo_31D0850 *)&local_b8), pSVar13 = local_a8,
                (char)bVar7 != '\0') {
            bVar7 = System_String__op_Equality
                              ((System_String_o *)local_a8,"Main",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              pCVar4 = (__this->fields)._start;
              if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (pCVar4->fields).Classes;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar2,(Il2CppObject *)pSVar13,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
              if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (pIVar10[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              plVar5 = *(long **)((long)pIVar10[2].monitor + 0x18);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              piVar11 = (int *)il2cpp_glue_022c7330();
              if (*piVar11 == 2) {
                local_128.hasValue = 0;
                local_128.value = 0;
                pCVar4 = (__this->fields)._start;
                if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar6 = (pCVar4->fields).ClassNamespaces;
                if (pSVar6 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o
                               *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar7 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                                   (Il2CppObject *)pSVar13,&local_11c,MethodInfo_Boolean_TryGetValue);
                if ((char)bVar7 != '\0') {
                  System_Nullable<Int32Enum>___ctor
                            ((System_Nullable_Int32Enum__o)&local_128,local_11c,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
                }
                if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pCVar12 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                                    (__this,(System_String_o *)pSVar13,
                                     (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0
                                     ,(System_Nullable_CustomLogicSourceType__o)local_128,in_R9);
                if (pCVar12 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                (pCVar12->fields)._Namespace_k__BackingField.fields = local_128;
                if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x20);
                if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Boolean_Contains);
                if ((char)bVar7 == '\0') {
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._staticClasses;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            (pSVar2,(Il2CppObject *)pSVar13,(Il2CppObject *)pCVar12,MethodInfo_Void_set_Item);
                }
                else {
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._namespacedStaticClasses;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                    (pSVar2,(Il2CppObject *)pSVar13,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar7 == '\0') {
                    local_38 = (__this->fields)._namespacedStaticClasses;
                    __this_16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                il2cpp_runtime_glue(TypeInfo_Dictionary_CustomLogicSourceType__CustomLogicCla);
                    System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
                              (__this_16,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
                    if (local_38 ==
                        (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                         *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    System_Collections_Generic_Dictionary<object__object>__set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)local_38,
                               (Il2CppObject *)pSVar13,(Il2CppObject *)__this_16,MethodInfo_Void_set_Item);
                  }
                  if ((char)local_128.hasValue != '\0') {
                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._namespacedStaticClasses;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                              System_Collections_Generic_Dictionary<object__object>__get_Item
                                        (pSVar2,(Il2CppObject *)pSVar13,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
                    iVar8 = System_Nullable<Int32Enum>__get_Value
                                      ((System_Nullable_Int32Enum__o)&local_128,MethodInfo_CustomLogicSourceType_get_Value);
                    if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    System_Collections_Generic_Dictionary<Int32Enum__object>__set_Item
                              (pSVar13,iVar8,(Il2CppObject *)pCVar12,MethodInfo_Void_set_Item);
                  }
                }
              }
              else {
                pCVar4 = (__this->fields)._start;
                if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pCVar4->fields).Classes;
                if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (pSVar2,(Il2CppObject *)pSVar13,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
                if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (pIVar10[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                plVar5 = *(long **)((long)pIVar10[2].monitor + 0x18);
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume();
                }
                piVar11 = (int *)il2cpp_glue_022c7330();
                if (*piVar11 == 3) {
                  local_100.hasValue = 0;
                  local_100.value = 0;
                  pCVar4 = (__this->fields)._start;
                  if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar6 = (pCVar4->fields).ClassNamespaces;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o
                                 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar7 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6
                                     ,(Il2CppObject *)pSVar13,&local_120,MethodInfo_Boolean_TryGetValue);
                  if ((char)bVar7 != '\0') {
                    System_Nullable<Int32Enum>___ctor
                              ((System_Nullable_Int32Enum__o)&local_100,local_120,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
                  }
                  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pCVar12 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                                      (__this,(System_String_o *)pSVar13,
                                       (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8)
                                       ,0,(System_Nullable_CustomLogicSourceType__o)local_100,in_R9)
                  ;
                  if (pCVar12 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  (pCVar12->fields)._Namespace_k__BackingField.fields = local_100;
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._addonClasses;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            (pSVar2,(Il2CppObject *)pSVar13,(Il2CppObject *)pCVar12,MethodInfo_Void_set_Item);
                }
              }
            }
            else {
              CustomLogic_CustomLogicEvaluator__CreateStaticClass
                        (__this,(System_String_o *)pSVar13,method_00);
            }
          }
          __this_03.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
          __this_03.fields._currentKey = in_stack_fffffffffffffec8;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                    (__this_03,(MethodInfo_31D0840 *)&local_b8);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._staticClasses;
          if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pSVar9 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                 (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
             pSVar9 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
          {
            System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                        *)&stack0xfffffffffffffec0,pSVar9,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
            local_c8 = local_130;
            local_d8 = in_stack_fffffffffffffec0;
            pIStack_d0 = in_stack_fffffffffffffec8;
            while (__this_04.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod,
                  __this_04.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       in_stack_fffffffffffffeb8,
                  __this_04.fields._currentKey = in_stack_fffffffffffffec8,
                  bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                    (__this_04,(MethodInfo_31D0850 *)&local_d8), (char)bVar7 != '\0'
                  ) {
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._staticClasses;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar2,(Il2CppObject *)local_c8,MethodInfo_CustomLogicClassInstance_get_Item);
            }
            __this_05.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
            __this_05.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
            __this_05.fields._currentKey = in_stack_fffffffffffffec8;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                      (__this_05,(MethodInfo_31D0840 *)&local_d8);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._staticClasses;
            if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSVar14 = System_Collections_Generic_Dictionary<object__object>__get_Values
                                    (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
               pSVar14 !=
               (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
              System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                          *)&stack0xfffffffffffffec0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
              local_108 = local_130;
              local_118 = in_stack_fffffffffffffec0;
              pIStack_110 = in_stack_fffffffffffffec8;
LAB_03f5d798:
              __this_06.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
              __this_06.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_fffffffffffffeb8;
              __this_06.fields._currentValue = in_stack_fffffffffffffec8;
              bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                                (__this_06,(MethodInfo_31D09E0 *)&local_118);
              if ((char)bVar7 != '\0') {
                pMVar15 = extraout_RDX;
                if (local_108 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                goto code_r0x03f5d7b1;
                goto LAB_03f5d790;
              }
              __this_07.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
              __this_07.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_fffffffffffffeb8;
              __this_07.fields._currentValue = in_stack_fffffffffffffec8;
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                        (__this_07,(MethodInfo_31D09D0 *)&local_118);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._namespacedStaticClasses;
              if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                 (pSVar14 = System_Collections_Generic_Dictionary<object__object>__get_Values
                                      (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
                 pSVar14 !=
                 (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                            *)&stack0xfffffffffffffec0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
                local_e8 = local_130;
                local_f8 = in_stack_fffffffffffffec0;
                pIStack_f0 = in_stack_fffffffffffffec8;
                while (__this_08.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod,
                      __this_08.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           in_stack_fffffffffffffeb8,
                      __this_08.fields._currentValue = in_stack_fffffffffffffec8,
                      bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                                        (__this_08,(MethodInfo_31D09E0 *)&local_f8),
                      (char)bVar7 != '\0') {
                  if (local_e8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar14 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Values
                                      (local_e8,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Custom);
                  if (pSVar14 ==
                      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                  {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_Dictionary_ValueCollection<Int32Enum__object>__GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)&stack0xfffffffffffffec0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
                  local_48 = local_130;
                  local_58 = in_stack_fffffffffffffec0;
                  pIStack_50 = in_stack_fffffffffffffec8;
LAB_03f5d8d8:
                  __this_09.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                  __this_09.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       in_stack_fffffffffffffeb8;
                  __this_09.fields._currentValue = in_stack_fffffffffffffec8;
                  bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__MoveNext
                                    (__this_09,(MethodInfo_31C8640 *)&local_58);
                  if ((char)bVar7 != '\0') {
                    pMVar15 = extraout_RDX_00;
                    if (local_48 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                    goto code_r0x03f5d8f4;
                    goto LAB_03f5d8d0;
                  }
                  __this_10.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                  __this_10.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       in_stack_fffffffffffffeb8;
                  __this_10.fields._currentValue = in_stack_fffffffffffffec8;
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__Dispose
                            (__this_10,(MethodInfo_31C8630 *)&local_58);
                }
                __this_11.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                __this_11.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_fffffffffffffeb8;
                __this_11.fields._currentValue = in_stack_fffffffffffffec8;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                          (__this_11,(MethodInfo_31D09D0 *)&local_f8);
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._addonClasses;
                if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                   (pSVar14 = System_Collections_Generic_Dictionary<object__object>__get_Values
                                        (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
                   pSVar14 !=
                   (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)&stack0xfffffffffffffec0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
                  local_108 = local_130;
                  local_118 = in_stack_fffffffffffffec0;
                  pIStack_110 = in_stack_fffffffffffffec8;
LAB_03f5da08:
                  __this_12.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                  __this_12.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       in_stack_fffffffffffffeb8;
                  __this_12.fields._currentValue = in_stack_fffffffffffffec8;
                  bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                                    (__this_12,(MethodInfo_31D09E0 *)&local_118);
                  if ((char)bVar7 != '\0') {
                    pMVar15 = extraout_RDX_01;
                    if (local_108 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                    goto code_r0x03f5da21;
                    goto LAB_03f5da00;
                  }
                  __this_13.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                  __this_13.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       in_stack_fffffffffffffeb8;
                  __this_13.fields._currentValue = in_stack_fffffffffffffec8;
                  pMVar15 = MethodInfo_Void_Dispose;
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                            (__this_13,(MethodInfo_31D09D0 *)&local_118);
                  CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels(__this,pMVar15);
                  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if (((System_Collections_Generic_Dictionary_int__object__o *)
                       **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                       (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (pSVar9 = System_Collections_Generic_Dictionary<int__object>__get_Keys
                                         ((System_Collections_Generic_Dictionary_int__object__o *)
                                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I),
                     pSVar9 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                *)0x0)) {
                    pMVar15 = (MethodInfo *)&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa;
                    System_Collections_Generic_Dictionary_KeyCollection<int__object>__GetEnumerator
                              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)&local_78,pSVar9,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                    while( true ) {
                      __this_14.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                      __this_14.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           in_stack_fffffffffffffeb8;
                      __this_14.fields._currentKey = in_stack_fffffffffffffec8;
                      bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__MoveNext
                                        (__this_14,(MethodInfo_31C2F60 *)&local_78);
                      if ((char)bVar7 == '\0') {
                        __this_15.fields._8_8_ = in_stack_fffffffffffffec0.genericMethod;
                        __this_15.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             in_stack_fffffffffffffeb8;
                        __this_15.fields._currentKey = in_stack_fffffffffffffec8;
                        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__Dispose
                                  (__this_15,(MethodInfo_31C2F50 *)&local_78);
                        return;
                      }
                      iVar8 = (int32_t)local_68;
                      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      if ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                          (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
                      obj = (Map_MapObject_o *)
                            System_Collections_Generic_Dictionary<int__object>__get_Item
                                      ((System_Collections_Generic_Dictionary_int__object__o *)
                                       **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar8,MethodInfo_MapObject_get_Item);
                      CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                                (__this,obj,0,pMVar15);
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
code_r0x03f5d7b1:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar15 = (MethodInfo *)(ulong)bVar1;
  if (((local_108->klass->_2).naturalAligment < bVar1) ||
     ((local_108->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] != TypeInfo_BuiltinClassInstance)) {
LAB_03f5d790:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_108,pMVar15);
  }
  goto LAB_03f5d798;
code_r0x03f5d8f4:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar15 = (MethodInfo *)(ulong)bVar1;
  if (((local_48->klass->_2).naturalAligment < bVar1) ||
     ((local_48->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] != TypeInfo_BuiltinClassInstance)) {
LAB_03f5d8d0:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_48,pMVar15);
  }
  goto LAB_03f5d8d8;
code_r0x03f5da21:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar15 = (MethodInfo *)(ulong)bVar1;
  if (((local_108->klass->_2).naturalAligment < bVar1) ||
     ((local_108->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] != TypeInfo_BuiltinClassInstance)) {
LAB_03f5da00:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_108,pMVar15);
  }
  goto LAB_03f5da08;
}


// CustomLogic.CustomLogicEvaluator$$CreateAddonNetworkChannels
// il2cpp: void CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f62060

void CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long lVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_02;
  Map_MapScriptSceneObject_o *__this_03;
  System_String_o *pSVar7;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicPhotonSync_o *__this_04;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_05;
  CustomLogic_CustomLogicClassInstance_o *instance;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int key;
  undefined8 in_stack_ffffffffffffff88;
  System_String_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05703ebe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_String__OrderBy_Stri);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_String__CreateAddonNetworkChannels_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"CLAddon_");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"NetworkView");
    DAT_05703ebe = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses
  ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
      System_Func<object__object>___ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar3 + 8) = keySelector;
      il2cpp_runtime_glue(lVar3 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderBy<object__object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_String__OrderBy_Stri);
    __this_02 = System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           MethodInfo_List_1_System_String__ToList_String);
    if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      key = -500000;
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      do {
        __this_00.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_00.fields._current = (Il2CppObject *)pSVar8;
        bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar6 == '\0') {
          __this_01.fields._8_8_ = in_stack_ffffffffffffff90;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88
          ;
          __this_01.fields._current = (Il2CppObject *)pSVar8;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
        in_stack_ffffffffffffff90 = (System_String_o *)local_48.fields._current;
        while( true ) {
          if (iVar1 == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar6 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar6 == '\0') break;
          key = key + -1;
          iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
        }
        __this_03 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
        Map_MapScriptSceneObject___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 == (Map_MapScriptSceneObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (__this_03->fields).Id = key;
        (__this_03->fields).Parent = 0;
        pSVar7 = System_String__Concat("CLAddon_",in_stack_ffffffffffffff90,(MethodInfo *)0x0);
        *(System_String_o **)&(__this_03->fields).Visible = pSVar7;
        il2cpp_runtime_glue(&(__this_03->fields).Visible,pSVar7);
        (__this_03->fields).Asset = "None";
        il2cpp_runtime_glue(&(__this_03->fields).Asset);
        (__this_03->fields).Active = 0x1000100;
        if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        *(undefined8 *)&(__this_03->fields).ScaleZ =
             *(undefined8 *)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
        il2cpp_runtime_glue(&(__this_03->fields).ScaleZ);
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_init_class();
        }
        (__this_03->fields).CollideMode = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
        il2cpp_runtime_glue(&(__this_03->fields).CollideMode);
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        mapObject = Map_MapLoader__LoadObject
                              ((Map_MapScriptBaseObject_o *)__this_03,0,(MethodInfo *)0x0);
        Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
        CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,mapObject,method_00);
        __this_04 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this,mapObject,method_01);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          if (mapObject == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          if (mapObject == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar4 = (mapObject->fields).ScriptObject;
          if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (__this_04 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          CustomLogic_CustomLogicPhotonSync__Init(__this_04,(pMVar4->fields).Id,0,(MethodInfo *)0x0)
          ;
        }
        pMVar4 = (mapObject->fields).ScriptObject;
        if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields).IdToNetworkView;
        if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar6 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          (pSVar5,(pMVar4->fields).Id,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar6 != '\0') {
          pMVar4 = (mapObject->fields).ScriptObject;
          if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IdToNetworkView;
          if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_05 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                      System_Collections_Generic_Dictionary<int__object>__get_Item
                                (pSVar5,(pMVar4->fields).Id,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AddonToNetworkView;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar2,(Il2CppObject *)in_stack_ffffffffffffff90,(Il2CppObject *)__this_05,
                     MethodInfo_Void_set_Item);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._addonClasses;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          instance = (CustomLogic_CustomLogicClassInstance_o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar2,(Il2CppObject *)in_stack_ffffffffffffff90,MethodInfo_CustomLogicClassInstance_get_Item);
          if (instance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (instance->fields).Variables;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar2,"NetworkView",(Il2CppObject *)__this_05,MethodInfo_Void_set_Item);
          if (__this_05 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
                    (__this_05,instance,(MethodInfo *)0x0);
        }
        key = key + -1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x3f5f900

void CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar3;
  int index;
  MethodInfo *in_R9;
  
  if (DAT_05703ebf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&"Init");
    DAT_05703ebf = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f5fa50:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar1,(Il2CppObject *)methodName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 != '\0') {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar1,(Il2CppObject *)methodName,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get),
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03f5fa50;
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        bVar2 = System_String__op_Equality(methodName,"Init",(MethodInfo *)0x0);
        pIVar3 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_CustomLogicClassInstance_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03f5fa50;
        if ((char)bVar2 == '\0') {
          if (*(char *)&pIVar3[1].klass != '\0') goto LAB_03f5f9e6;
        }
        else if (*(char *)((long)&pIVar3[1].klass + 1) == '\0') {
LAB_03f5f9e6:
          classInstance =
               (CustomLogic_CustomLogicClassInstance_o *)
               System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_CustomLogicClassInstance_get_Item);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this,classInstance,methodName,parameters,0,in_R9);
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$LoadMapObjectComponents
// il2cpp: void CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, bool init, const MethodInfo* method);
// 0x3f62920

void CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
               (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,bool_conflict init,
               MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Map_MapScriptBaseObject_c *pMVar3;
  uint uVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05703ec0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ec0 = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
LAB_03f62a22:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar2 = (obj->fields).ScriptObject;
  if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
    pMVar3 = pMVar2->klass;
    bVar1 = *(byte *)(TypeInfo_MapScriptSceneObject + 0x130);
    if ((bVar1 <= (pMVar3->_2).naturalAligment) &&
       (method_00 = (MethodInfo *)(pMVar3->_2).typeHierarchy,
       *(long *)((long)method_00 + (long)(ulong)bVar1 * 8 + -8) == TypeInfo_MapScriptSceneObject)) {
      __this_00 = CustomLogic_CustomLogicEvaluator__SetupNetworking
                            (__this,obj,(MethodInfo *)(ulong)bVar1);
      CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,obj,method_01);
      uVar4 = CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                        (__this,obj,init & 0xff,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pMVar2 = (obj->fields).ScriptObject;
        if ((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
           (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
          CustomLogic_CustomLogicPhotonSync__Init
                    (__this_00,(pMVar2->fields).Id,uVar4 & 0xff,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03f62a22;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$LoadRuntimeMapObjectComponents
// il2cpp: bool CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, bool init, const MethodInfo* method);
// 0x3f62ec0

bool_conflict
CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,bool_conflict init,
          MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  CustomLogic_CustomLogicComponentInstance_o *pCVar6;
  undefined8 extraout_RAX;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  undefined8 in_stack_ffffffffffffff88;
  ulong in_stack_ffffffffffffff90;
  ulong uVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05703ec1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptComponent_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"Init");
    il2cpp_init_method_metadata(&"Rigidbody");
    DAT_05703ec1 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    if (((pMVar2->klass->_2).naturalAligment < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapScriptSceneObject)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (System_Collections_Generic_List_object__o *)pMVar2[1].fields.Asset;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator(&local_48,__this_00,MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      if ((char)init == '\0') {
        uVar7 = 0;
        while (__this_02.fields._index = (int)uVar7,
              __this_02.fields._version = (int)(uVar7 >> 0x20),
              __this_02.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this_02.fields._current = (Il2CppObject *)pSVar8,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              in_stack_ffffffffffffff90 = uVar7, (char)bVar5 != '\0') {
          pCVar3 = (__this->fields)._start;
          if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) goto LAB_03f631bf;
          if ((Map_MapScriptComponent_o *)local_48.fields._current ==
              (Map_MapScriptComponent_o *)0x0) goto LAB_03f631c9;
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pCVar3->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03f631d3;
          bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar4,(Il2CppObject *)
                                    ((Map_MapScriptComponent_Fields *)
                                    ((long)local_48.fields._current + 0x10))->ComponentName,
                             MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 != '\0') {
            pCVar6 = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                               (__this,((Map_MapScriptComponent_Fields *)
                                       ((long)local_48.fields._current + 0x10))->ComponentName,obj,
                                (Map_MapScriptComponent_o *)local_48.fields._current,in_R8);
            Map_MapObject__RegisterComponentInstance(obj,pCVar6,(MethodInfo *)0x0);
            bVar5 = System_String__op_Equality
                              (((Map_MapScriptComponent_Fields *)
                               ((long)local_48.fields._current + 0x10))->ComponentName,"Rigidbody",
                               (MethodInfo *)0x0);
            uVar7 = uVar7 & 0xff;
            if ((char)bVar5 != '\0') {
              uVar7 = 1;
            }
          }
        }
      }
      else {
        uVar7 = 0;
        while (__this_01.fields._index = (int)in_stack_ffffffffffffff90,
              __this_01.fields._version = (int)(in_stack_ffffffffffffff90 >> 0x20),
              __this_01.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this_01.fields._current = (Il2CppObject *)pSVar8,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              (char)bVar5 != '\0') {
          pCVar3 = (__this->fields)._start;
          if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
LAB_03f631bf:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((Map_MapScriptComponent_o *)local_48.fields._current ==
              (Map_MapScriptComponent_o *)0x0) {
LAB_03f631c9:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pCVar3->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f631d3:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar4,(Il2CppObject *)
                                    ((Map_MapScriptComponent_Fields *)
                                    ((long)local_48.fields._current + 0x10))->ComponentName,
                             MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 != '\0') {
            pCVar6 = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                               (__this,((Map_MapScriptComponent_Fields *)
                                       ((long)local_48.fields._current + 0x10))->ComponentName,obj,
                                (Map_MapScriptComponent_o *)local_48.fields._current,in_R8);
            Map_MapObject__RegisterComponentInstance(obj,pCVar6,(MethodInfo *)0x0);
            in_R8 = (MethodInfo *)0x0;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this,(CustomLogic_CustomLogicClassInstance_o *)pCVar6,"Init",
                       (System_Object_array *)0x0,0,in_R9);
            if (pCVar6 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            *(undefined1 *)((long)&(pCVar6->fields).Enabled + 1) = 1;
            in_stack_ffffffffffffff90 = uVar7;
            bVar5 = System_String__op_Equality
                              (((Map_MapScriptComponent_Fields *)
                               ((long)local_48.fields._current + 0x10))->ComponentName,"Rigidbody",
                               (MethodInfo *)0x0);
            uVar7 = in_stack_ffffffffffffff90 & 0xff;
            if ((char)bVar5 != '\0') {
              uVar7 = 1;
            }
          }
        }
      }
      __this_03.fields._index = (int)in_stack_ffffffffffffff90;
      __this_03.fields._version = (int)(in_stack_ffffffffffffff90 >> 0x20);
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_03.fields._current = (Il2CppObject *)pSVar8;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),(char)uVar7 != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$AddMapObjectComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicEvaluator__AddMapObjectComponent (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, System_String_o* componentName, const MethodInfo* method);
// 0x3f63780

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,
          System_String_o *componentName,MethodInfo *method)

{
  int32_t *piVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  long *plVar4;
  long *plVar5;
  System_String_array *pSVar6;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar7;
  Map_MapObject_o *pMVar8;
  Map_MapScriptBaseObject_o *pMVar9;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar10;
  CustomLogic_CustomLogicEvaluator_o *__this_03;
  Il2CppRGCTXData *obj_00;
  bool_conflict bVar11;
  uint uVar12;
  System_Collections_Generic_List_string__o *__this_04;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  Map_MapScriptComponent_o *__this_05;
  CustomLogic_CustomLogicPhotonSync_o *__this_06;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  undefined8 uVar16;
  System_Exception_o *__this_07;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t mapObjectId;
  MethodInfo *method_02;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  _union_247328 _Var17;
  Il2CppMethodPointer pIVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  CustomLogic_CustomLogicEvaluator_o *local_60;
  System_String_o *local_58;
  Il2CppRGCTXData *local_50;
  _union_247328 local_48;
  Il2CppMethodPointer pIStack_40;
  Il2CppObject *local_38;
  
  if (DAT_05703ec2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicAssignmentExpressionAst_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicAssi);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptComponent);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Init");
    il2cpp_init_method_metadata(&"Dropbox");
    il2cpp_init_method_metadata(&":");
    il2cpp_init_method_metadata(&"Tooltip");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"Description");
    DAT_05703ec2 = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pCVar2 = (__this->fields)._start;
  if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes,
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar11 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                       (pSVar3,(Il2CppObject *)componentName,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      pSVar15 = (System_String_o *)il2cpp_init_method_metadata(&"No component named ");
      pSVar14 = (System_String_o *)il2cpp_init_method_metadata(&" found");
      pSVar15 = System_String__Concat(pSVar15,componentName,pSVar14,(MethodInfo *)0x0);
      uVar16 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_07 = (System_Exception_o *)il2cpp_runtime_glue(uVar16);
      System_Exception___ctor(__this_07,pSVar15,(MethodInfo *)0x0);
      uVar16 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_AddMapObjectCompone);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_07,uVar16);
    }
    __this_04 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_System_String);
    pCVar2 = (__this->fields)._start;
    if ((((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pCVar2->fields).Classes,
         pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
        (pIVar13 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,(Il2CppObject *)componentName,MethodInfo_CustomLogicClassDefinitionAst_get_Item),
        pIVar13 != (Il2CppObject *)0x0)) &&
       (local_60 = __this, local_58 = componentName, local_50 = (Il2CppRGCTXData *)obj,
       pIVar13[1].monitor != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,pIVar13[1].monitor,
                 MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicAssi);
      _Var17 = local_48;
      pIVar18 = pIStack_40;
LAB_03f639b0:
      pIVar13 = local_38;
      __this_01.fields._8_8_ = pIVar18;
      __this_01.fields._list = _Var17.genericMethod;
      __this_01.fields._current = pIVar13;
      method_02 = MethodInfo_Boolean_MoveNext;
      bVar11 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                         (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
      if ((char)bVar11 != '\0') {
        if (pIVar13 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar4 = pIVar13[1].monitor;
        local_38 = pIVar13;
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(TypeInfo_CustomLogicVariableExpressionAst + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicVariableExpressionAst + 0x130) * 8)
              == TypeInfo_CustomLogicVariableExpressionAst)) {
            plVar5 = pIVar13[2].monitor;
            pIVar19 = pIVar13;
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar5 + 200) + -8 +
                           (ulong)*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
                bVar11 = System_String__op_Equality
                                   ((System_String_o *)plVar4[3],"Description",(MethodInfo *)0x0);
                local_38 = pIVar19;
                if ((char)bVar11 != '\0') goto LAB_03f639b0;
                if ((System_String_o *)plVar4[3] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar11 = System_String__EndsWith
                                   ((System_String_o *)plVar4[3],"Tooltip",(MethodInfo *)0x0);
                if ((((char)bVar11 != '\0') && ((long *)plVar5[3] != (long *)0x0)) &&
                   (local_38 = pIVar19, *(long *)plVar5[3] == DAT_057110b0)) goto LAB_03f639b0;
                if ((System_String_o *)plVar4[3] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                method_02 = "Dropbox";
                bVar11 = System_String__EndsWith
                                   ((System_String_o *)plVar4[3],(System_String_o *)"Dropbox",
                                    (MethodInfo *)0x0);
                if ((((char)bVar11 != '\0') && ((long *)plVar5[3] != (long *)0x0)) &&
                   (local_38 = pIVar19, *(long *)plVar5[3] == DAT_057110b0)) goto LAB_03f639b0;
              }
            }
            pSVar15 = (System_String_o *)plVar4[3];
            pSVar14 = CustomLogic_CustomLogicUtils__SerializeAst(pIVar13[2].monitor,method_02);
            pSVar15 = System_String__Concat(pSVar15,":",pSVar14,(MethodInfo *)0x0);
            lVar10 = MethodInfo_Void_Add;
            if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_04->fields)._items;
            if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar12 = (__this_04->fields)._size;
            if (uVar12 < (uint)pSVar6->max_length) {
              (__this_04->fields)._size = uVar12 + 1;
              pSVar6->m_Items[(int)uVar12] = pSVar15;
              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar12,pSVar15);
              local_38 = pIVar19;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_04,
                         (Il2CppObject *)pSVar15,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
              local_38 = pIVar19;
            }
          }
        }
        goto LAB_03f639b0;
      }
      __this_02.fields._8_8_ = pIVar18;
      __this_02.fields._list = _Var17.genericMethod;
      __this_02.fields._current = pIVar13;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
      __this_05 = (Map_MapScriptComponent_o *)il2cpp_runtime_glue(TypeInfo_MapScriptComponent);
      Map_MapScriptComponent___ctor(__this_05,(MethodInfo *)0x0);
      pSVar15 = local_58;
      __this_03 = local_60;
      if (__this_05 != (Map_MapScriptComponent_o *)0x0) {
        (__this_05->fields).ComponentName = local_58;
        il2cpp_runtime_glue(&__this_05->fields,local_58);
        (__this_05->fields).Parameters = __this_04;
        il2cpp_runtime_glue(&(__this_05->fields).Parameters,__this_04);
        obj_00 = local_50;
        __this_06 = CustomLogic_CustomLogicEvaluator__SetupNetworking
                              (__this_03,(Map_MapObject_o *)local_50,method_00);
        CustomLogic_CustomLogicEvaluator__SetupMapObject
                  (__this_03,(Map_MapObject_o *)obj_00,method_01);
        instance = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                             (__this_03,pSVar15,(Map_MapObject_o *)obj_00,__this_05,in_R8);
        if (obj_00 != (Il2CppRGCTXData *)0x0) {
          Map_MapObject__RegisterComponentInstance
                    ((Map_MapObject_o *)obj_00,instance,(MethodInfo *)0x0);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_03,(CustomLogic_CustomLogicClassInstance_o *)instance,"Init",
                     (System_Object_array *)0x0,0,in_R9);
          if (instance != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
            *(undefined1 *)((long)&(instance->fields).Enabled + 1) = 1;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              bVar11 = System_String__op_Equality(pSVar15,"Rigidbody",(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
                return instance;
              }
              pCVar7 = (instance->fields).MapObject;
              if (((pCVar7 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
                  (pMVar8 = (pCVar7->fields).Value, pMVar8 != (Map_MapObject_o *)0x0)) &&
                 ((pMVar9 = (pMVar8->fields).ScriptObject,
                  pMVar9 != (Map_MapScriptBaseObject_o *)0x0 &&
                  (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                               (__this_03->fields).IdToNetworkView,
                  __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)))) {
                bVar11 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                                   (__this_00,(pMVar9->fields).Id,(Il2CppObject **)&local_68,
                                    MethodInfo_Boolean_TryGetValue);
                if ((char)bVar11 == '\0') {
                  return instance;
                }
                if (((local_68 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) &&
                    ((Map_MapScriptBaseObject_o *)obj_00[4].method !=
                     (Map_MapScriptBaseObject_o *)0x0)) &&
                   (__this_06 = *(CustomLogic_CustomLogicPhotonSync_o **)
                                 &(local_68->_1).this_arg.bits,
                   __this_06 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
                  mapObjectId = (((Map_MapScriptBaseObject_o *)obj_00[4].method)->fields).Id;
                  uVar12 = 1;
                  goto LAB_03f63c90;
                }
              }
            }
            else if ((Map_MapScriptBaseObject_o *)obj_00[4].method !=
                     (Map_MapScriptBaseObject_o *)0x0) {
              mapObjectId = (((Map_MapScriptBaseObject_o *)obj_00[4].method)->fields).Id;
              uVar12 = System_String__op_Equality(pSVar15,"Rigidbody",(MethodInfo *)0x0);
              if (__this_06 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                uVar12 = uVar12 & 0xff;
LAB_03f63c90:
                CustomLogic_CustomLogicPhotonSync__Init
                          (__this_06,mapObjectId,uVar12,(MethodInfo *)0x0);
                return instance;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$RemoveComponent
// il2cpp: void CustomLogic_CustomLogicEvaluator__RemoveComponent (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x3f63ea0

void CustomLogic_CustomLogicEvaluator__RemoveComponent
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_05703ead == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05703ead = '\x01';
    method = extraout_RDX;
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicComponentInstance_o *)0x0)) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar4 = (Il2CppObject *)
             (*(instance->klass->vtable)._4_get_ClassName.methodPtr)
                       (instance,(instance->klass->vtable)._4_get_ClassName.method,method);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,pIVar4,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[2].klass != (Il2CppClass *)0x0)) {
        __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               pIVar4[2].klass,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
        if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        {
          System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                      *)auStack_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
          pSVar5 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *
                   )auStack_48._0_8_;
          pIVar6 = (Il2CppType *)auStack_48._8_8_;
          while( true ) {
            do {
              pIVar4 = pIStack_38;
              __this_00.fields._8_8_ = pIVar6;
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
              __this_00.fields._currentKey = pIVar4;
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
              if ((char)bVar3 == '\0') {
                __this_01.fields._8_8_ = pIVar6;
                __this_01.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
                __this_01.fields._currentKey = pIVar4;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
                return;
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._callbacks;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar7 = pIVar4;
              bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar2,pIVar4,MethodInfo_Boolean_ContainsKey);
              pIStack_38 = pIVar7;
            } while ((char)bVar3 == '\0');
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._callbacks;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_03 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar2,pIVar4,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance__get);
            if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) break;
            bVar3 = System_Collections_Generic_List<object>__Contains
                              (__this_03,(Il2CppObject *)instance,MethodInfo_Boolean_Contains);
            pIStack_38 = pIVar7;
            if ((char)bVar3 != '\0') {
              System_Collections_Generic_List<object>__Remove
                        (__this_03,(Il2CppObject *)instance,MethodInfo_Boolean_Remove);
              pIStack_38 = pIVar7;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$CreateComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicEvaluator__CreateComponentInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, const MethodInfo* method);
// 0x3f63320

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicEvaluator__CreateComponentInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          Map_MapObject_o *obj,Map_MapScriptComponent_o *script,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar4;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj_00;
  CustomLogic_CustomLogicComponentInstance_o *__this_04;
  System_Collections_Generic_HashSet_object__o *__this_05;
  UnityEngine_Transform_o *t;
  CustomLogic_CustomLogicCollisionHandler_o *__this_06;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined4 in_stack_ffffffffffffff90;
  int32_t value;
  System_Nullable_CustomLogicSourceType__Fields SVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (DAT_05703ec3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicComponentInstance);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ec3 = '\x01';
  }
  value = 0;
  if ((obj == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (obj->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0))
  goto LAB_03f636bc;
  if (*(char *)((long)&(pMVar1->fields).Active + 3) == '\0') {
    networkView = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields).IdToMapObjectBuiltin;
  }
  else {
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields).IdToNetworkView;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03f636bc;
    networkView = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                  System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar2,(pMVar1->fields).Id,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03f636bc;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields).IdToMapObjectBuiltin;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    obj_00 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (pSVar2,(pMVar1->fields).Id,MethodInfo_CustomLogicMapObjectBuiltin_get_Item);
    __this_04 = (CustomLogic_CustomLogicComponentInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicComponentInstance);
    CustomLogic_CustomLogicComponentInstance___ctor
              (__this_04,className,obj_00,script,networkView,(MethodInfo *)0x0);
    pCVar3 = (__this->fields)._start;
    if ((pCVar3 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (__this_00 = (pCVar3->fields).ClassNamespaces,
       __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0))
    {
      method_00 = MethodInfo_Boolean_TryGetValue;
      bVar4 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)className,(int32_t *)&stack0xffffffffffffff94,
                         (MethodInfo_308A900 *)MethodInfo_Boolean_TryGetValue);
      method_01 = extraout_RDX;
      if ((char)bVar4 != '\0') {
        local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
        System_Nullable<Int32Enum>___ctor
                  ((System_Nullable_Int32Enum__o)&local_48,value,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        if (__this_04 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03f636bc;
        (__this_04->fields)._Namespace_k__BackingField.fields =
             (System_Nullable_CustomLogicSourceType__Fields)local_48.fields._set;
        method_01 = extraout_RDX_00;
      }
      if (networkView != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
                  (networkView,__this_04,(MethodInfo *)0x0);
        method_01 = extraout_RDX_01;
      }
      CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
                (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_04,method_01);
      if (__this_04 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        CustomLogic_CustomLogicComponentInstance__LoadVariables(__this_04,(MethodInfo *)0x0);
        CustomLogic_CustomLogicEvaluator__AddCallbacks
                  (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_04,method_02);
        bVar4 = CustomLogic_CustomLogicComponentInstance__UsesCollider(__this_04,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return __this_04;
        }
        __this_05 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_GameObject)
        ;
        System_Collections_Generic_HashSet<object>___ctor(__this_05,MethodInfo_HashSet_1_UnityEngine_GameObject);
        __this_01 = (obj->fields).GameObject;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          t = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
          CustomLogic_CustomLogicEvaluator__FindSubcolliders
                    (__this,t,(System_Collections_Generic_HashSet_GameObject__o *)__this_05,
                     method_00);
          if (__this_05 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet<object>__GetEnumerator
                      (&local_48,__this_05,MethodInfo_HashSet_1_T__Enumerator_UnityEngine_GameObject);
            SVar5 = (System_Nullable_CustomLogicSourceType__Fields)local_48.fields._set;
            while( true ) {
              __this_02.fields._index = in_stack_ffffffffffffff90;
              __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)__this_04;
              __this_02.fields._version = value;
              __this_02.fields._current = (Il2CppObject *)SVar5;
              bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
              if ((char)bVar4 == '\0') {
                __this_03.fields._index = in_stack_ffffffffffffff90;
                __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)__this_04;
                __this_03.fields._version = value;
                __this_03.fields._current = (Il2CppObject *)SVar5;
                System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                          (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
                return __this_04;
              }
              if ((UnityEngine_GameObject_o *)local_48.fields._current ==
                  (UnityEngine_GameObject_o *)0x0) break;
              __this_06 = (CustomLogic_CustomLogicCollisionHandler_o *)
                          UnityEngine_GameObject__GetComponent<object>
                                    ((UnityEngine_GameObject_o *)local_48.fields._current,
                                     MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar4 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                __this_06 = (CustomLogic_CustomLogicCollisionHandler_o *)
                            UnityEngine_GameObject__AddComponent<object>
                                      ((UnityEngine_GameObject_o *)local_48.fields._current,
                                       MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
              }
              if (__this_06 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                        (__this_06,__this_04,(MethodInfo *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
LAB_03f636bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$FindSubcolliders
// il2cpp: void CustomLogic_CustomLogicEvaluator__FindSubcolliders (CustomLogic_CustomLogicEvaluator_o* __this, UnityEngine_Transform_o* t, System_Collections_Generic_HashSet_GameObject__o* set, const MethodInfo* method);
// 0x3f63eb0

/* WARNING: Removing unreachable block (ram,0x03f64216) */

void CustomLogic_CustomLogicEvaluator__FindSubcolliders
               (CustomLogic_CustomLogicEvaluator_o *__this,UnityEngine_Transform_o *t,
               System_Collections_Generic_HashSet_GameObject__o *set,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar8;
  System_Collections_IEnumerator_o *pSVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *method_00;
  UnityEngine_Transform_o *t_00;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  if (DAT_05703ec4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_05703ec4 = '\x01';
  }
  if (t == (UnityEngine_Transform_o *)0x0) {
LAB_03f6420c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)t,MethodInfo_Collider_GetComponent_Collider);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)t,(MethodInfo *)0x0);
    if (set == (System_Collections_Generic_HashSet_GameObject__o *)0x0) goto LAB_03f6420c;
    System_Collections_Generic_HashSet<object>__Add
              ((System_Collections_Generic_HashSet_object__o *)set,(Il2CppObject *)pUVar8,
               MethodInfo_Boolean_Add);
  }
  pSVar9 = UnityEngine_Transform__GetEnumerator(t,(MethodInfo *)0x0);
  if (pSVar9 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar4 = pSVar9->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
          goto LAB_03f64033;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar13);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar9,TypeInfo_IEnumerator,0);
LAB_03f64033:
    cVar6 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
    if (cVar6 == '\0') {
      plVar11 = (long *)il2cpp_runtime_glue(pSVar9,TypeInfo_IDisposable);
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar11;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) == 0) goto LAB_03f641bf;
      lVar14 = 0;
      break;
    }
    pSVar4 = pSVar9->klass;
    uVar3._0_1_ = (pSVar4->_2).rank;
    uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
          method_00 = (MethodInfo *)
                      (pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1));
          goto LAB_03f640b8;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar13);
    }
    method_00 = (MethodInfo *)il2cpp_runtime_glue(pSVar9,TypeInfo_IEnumerator,1);
LAB_03f640b8:
    t_00 = (UnityEngine_Transform_o *)(*method_00->methodPointer)(pSVar9);
    if (t_00 != (UnityEngine_Transform_o *)0x0) {
      bVar1 = (TypeInfo_Transform->_2).naturalAligment;
      method_00 = (MethodInfo *)(ulong)bVar1;
      if (((t_00->klass->_2).naturalAligment < bVar1) ||
         ((t_00->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(t_00);
      }
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (t_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pUVar8 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)t_00,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      CustomLogic_CustomLogicEvaluator__FindSubcolliders(__this,t_00,set,method_00);
    }
  } while( true );
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14) {
    if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)
                (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto LAB_03f641dd;
    }
  }
LAB_03f641bf:
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IDisposable,0);
LAB_03f641dd:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}


// CustomLogic.CustomLogicEvaluator$$SetupMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicEvaluator__SetupMapObject (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x3f62a30

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicEvaluator__SetupMapObject
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (DAT_05703ec5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_get_Item);
    DAT_05703ec5 = '\x01';
  }
  if (((obj == (Map_MapObject_o *)0x0) ||
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields).IdToMapObjectBuiltin,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03f62b30;
  bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    (pSVar2,(pMVar1->fields).Id,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03f62b30;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields).IdToMapObjectBuiltin;
    key = (pMVar1->fields).Id;
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar4,obj,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03f62b30;
    System_Collections_Generic_Dictionary<int__object>__Add
              (pSVar2,key,(Il2CppObject *)pCVar4,MethodInfo_Void_Add);
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields).IdToMapObjectBuiltin,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (pSVar2,(pMVar1->fields).Id,MethodInfo_CustomLogicMapObjectBuiltin_get_Item);
    return pCVar4;
  }
LAB_03f62b30:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$GetOrCreateMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x3f64330

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (DAT_05703ec6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_get_Item);
    DAT_05703ec6 = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
    return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 == (Map_MapScriptBaseObject_o *)0x0) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields).IdToMapObjectBuiltin,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03f6443b;
  bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    (pSVar2,(pMVar1->fields).Id,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03f6443b;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields).IdToMapObjectBuiltin;
    key = (pMVar1->fields).Id;
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar4,obj,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03f6443b;
    System_Collections_Generic_Dictionary<int__object>__Add
              (pSVar2,key,(Il2CppObject *)pCVar4,MethodInfo_Void_Add);
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               (__this->fields).IdToMapObjectBuiltin,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (pSVar2,(pMVar1->fields).Id,MethodInfo_CustomLogicMapObjectBuiltin_get_Item);
    return pCVar4;
  }
LAB_03f6443b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$SetupNetworking
// il2cpp: CustomLogic_CustomLogicPhotonSync_o* CustomLogic_CustomLogicEvaluator__SetupNetworking (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x3f62b40

/* WARNING: Type propagation algorithm not settling */

CustomLogic_CustomLogicPhotonSync_o *
CustomLogic_CustomLogicEvaluator__SetupNetworking
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  System_Object_array *data;
  Il2CppObject *pIVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_01;
  CustomLogic_CustomLogicPhotonSync_o *pCVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined1 local_65;
  float local_64;
  int32_t local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_05703ec7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
    DAT_05703ec7 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if (*(char *)((long)&(pMVar2->fields).Active + 3) == '\0') {
      return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields).IdToNetworkView;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                        (pSVar3,(pMVar2->fields).Id,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 != '\0') {
        return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
      }
      pMVar2 = (obj->fields).ScriptObject;
      if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields).IdToNetworkView;
        key = (pMVar2->fields).Id;
        __this_00 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNetworkViewBuiltin);
        CustomLogic_CustomLogicNetworkViewBuiltin___ctor(__this_00,obj,(MethodInfo *)0x0);
        if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary<int__object>__Add
                    (pSVar3,key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
          }
          data = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
          local_60[1] = 1;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_60 + 1);
          if (data != (System_Object_array *)0x0) {
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (lVar6 = il2cpp_runtime_glue(pIVar5,(((data->obj).klass)->_1).element_class),
               lVar6 == 0)) goto LAB_03f62ea9;
            if ((int)data->max_length == 0) goto LAB_03f62ea4;
            data->m_Items[0] = pIVar5;
            il2cpp_runtime_glue(data->m_Items,pIVar5);
            pMVar2 = (obj->fields).ScriptObject;
            if (pMVar2 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03f62e9f;
            local_60[0] = (pMVar2->fields).Id;
            pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_60);
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (lVar6 = il2cpp_runtime_glue(pIVar5,(((data->obj).klass)->_1).element_class),
               lVar6 == 0)) {
LAB_03f62ea9:
              uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar8,0);
            }
            if (1 < (uint)data->max_length) {
              data->m_Items[1] = pIVar5;
              il2cpp_runtime_glue(data->m_Items + 1,pIVar5);
              local_65 = 0;
              pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_65);
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (lVar6 = il2cpp_runtime_glue(pIVar5,(((data->obj).klass)->_1).element_class),
                 lVar6 == 0)) goto LAB_03f62ea9;
              if (2 < (uint)data->max_length) {
                data->m_Items[2] = pIVar5;
                il2cpp_runtime_glue(data->m_Items + 2);
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                uVar8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                fVar13 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                uVar9 = (int)uVar8;
                uVar10 = (int)((ulong)uVar8 >> 0x20);
                uVar11 = 0;
                uVar12 = 0;
                if (DAT_056fde1e == '\0') {
                  uStack_50 = 0;
                  local_64 = fVar13;
                  local_58 = uVar8;
                  il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                  DAT_056fde1e = '\x01';
                  uVar9 = (undefined4)local_58;
                  uVar10 = local_58._4_4_;
                  uVar11 = (undefined4)uStack_50;
                  uVar12 = uStack_50._4_4_;
                  fVar13 = local_64;
                }
                uVar8 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
                uVar1 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
                uVar14 = (int)uVar8;
                uVar15 = (int)((ulong)uVar8 >> 0x20);
                uVar16 = (int)uVar1;
                uVar17 = (int)((ulong)uVar1 >> 0x20);
                if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                  local_58 = CONCAT44(uVar10,uVar9);
                  uStack_50 = CONCAT44(uVar12,uVar11);
                  uStack_30 = 0;
                  uStack_40 = 0;
                  local_64 = fVar13;
                  local_48 = uVar1;
                  local_38 = uVar8;
                  il2cpp_init_class();
                  uVar9 = (undefined4)local_58;
                  uVar10 = local_58._4_4_;
                  fVar13 = local_64;
                  uVar14 = (undefined4)local_38;
                  uVar15 = local_38._4_4_;
                  uVar16 = (undefined4)local_48;
                  uVar17 = local_48._4_4_;
                }
                position.fields.y = (float)uVar10;
                position.fields.x = (float)uVar9;
                position.fields.z = fVar13;
                rotation.fields.y = (float)uVar15;
                rotation.fields.x = (float)uVar14;
                rotation.fields.w = (float)uVar17;
                rotation.fields.z = (float)uVar16;
                __this_01 = Photon_Pun_PhotonNetwork__Instantiate
                                      ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,'\0',data,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                  pCVar7 = (CustomLogic_CustomLogicPhotonSync_o *)
                           UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
                  return pCVar7;
                }
                goto LAB_03f62e9f;
              }
            }
LAB_03f62ea4:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
LAB_03f62e9f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicEvaluator__GetLineNumberString (CustomLogic_CustomLogicEvaluator_o* __this, int32_t lineNumber, const MethodInfo* method);
// 0x3f64440

System_String_o *
CustomLogic_CustomLogicEvaluator__GetLineNumberString
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t lineNumber,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  __this_00 = (CustomLogic_CustomLogicCompiler_o *)(__this->fields).ForcedCharacterType;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber
                       (__this_00,lineNumber,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicEvaluator$$LogCustomLogicError
// il2cpp: void CustomLogic_CustomLogicEvaluator__LogCustomLogicError (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* errorMessage, bool showInChat, const MethodInfo* method);
// 0x3f5fad0

void CustomLogic_CustomLogicEvaluator__LogCustomLogicError
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *errorMessage,
               bool_conflict showInChat,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *str1;
  
  if (DAT_05703ec8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"CL Runtime Exception, press ");
    il2cpp_init_method_metadata(&" to view in debug console");
    DAT_05703ec8 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_DebugConsole__LogCustomLogic(errorMessage,0,(MethodInfo *)0x0);
  if ((char)showInChat != '\0') {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar5 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar4 = (char)bVar5;
    }
    else {
      bVar5 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar4 = (char)bVar5;
    }
    if (cVar4 != '\0') {
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 400), lVar2 != 0)) {
        if (*(char *)(lVar2 + 0x11) == '\0') {
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
          if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) ||
             (plVar3 = *(long **)(lVar2 + 0xe0), plVar3 == (long *)0x0)) goto LAB_03f5fc52;
          str1 = (System_String_o *)
                 (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          errorMessage = System_String__Concat("CL Runtime Exception, press ",str1," to view in debug console",(MethodInfo *)0x0);
          iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__AddException(errorMessage,(MethodInfo *)0x0);
        return;
      }
LAB_03f5fc52:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicEvaluator__GetStartAst (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f64470

CustomLogic_CustomLogicStartAst_o *
CustomLogic_CustomLogicEvaluator__GetStartAst
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._start;
}


// CustomLogic.CustomLogicEvaluator$$GetStaticClasses
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_CustomLogicEvaluator__GetStaticClasses (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f64480

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *
CustomLogic_CustomLogicEvaluator__GetStaticClasses
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._staticClasses;
}


// CustomLogic.CustomLogicEvaluator$$GetNamespacedStaticClasses
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o* CustomLogic_CustomLogicEvaluator__GetNamespacedStaticClasses (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f64490

System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
* CustomLogic_CustomLogicEvaluator__GetNamespacedStaticClasses
            (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._namespacedStaticClasses;
}


// CustomLogic.CustomLogicEvaluator$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicEvaluator__GetModeSettings (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f644a0

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicEvaluator__GetModeSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_c *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar3;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  System_String_o *defaultValue;
  Settings_BoolSetting_o *__this_04;
  byte *pbVar4;
  Settings_FloatSetting_o *__this_05;
  float *pfVar5;
  Settings_StringSetting_o *__this_06;
  Settings_IntSetting_o *__this_07;
  int32_t *piVar6;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  long lVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_05703ec9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Main");
    il2cpp_init_method_metadata(&"_");
    DAT_05703ec9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  classInstance =
       CustomLogic_CustomLogicEvaluator__CreateClassInstance
                 (__this,"Main",(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),
                  0,(System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,method_00);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (classInstance->fields).Variables;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
  if (__this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              (&local_48,__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    lVar7 = 0;
    pSVar8 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
             local_48.fields._dictionary;
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              do {
                do {
                  do {
                    __this_00.fields._8_8_ = __this_02;
                    __this_00.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)lVar7;
                    __this_00.fields._currentKey = (Il2CppObject *)pSVar8;
                    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                      (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
                    if ((char)bVar3 == '\0') {
                      __this_01.fields._8_8_ = __this_02;
                      __this_01.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)lVar7;
                      __this_01.fields._currentKey = (Il2CppObject *)pSVar8;
                      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                                (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
                      if (lVar7 == 0) {
                        return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                               __this_02;
                      }
                    /* WARNING: Subroutine does not return */
                      il2cpp_glue_022c0ed0();
                    }
                    if ((System_String_o *)local_48.fields._currentKey == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar3 = System_String__StartsWith
                                      ((System_String_o *)local_48.fields._currentKey,"_",
                                       (MethodInfo *)0x0);
                  } while ((char)bVar3 != '\0');
                  bVar3 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                                    (classInstance,(System_String_o *)local_48.fields._currentKey,
                                     (MethodInfo *)0x0);
                } while ((char)bVar3 == '\0');
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (classInstance->fields).Variables;
                if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                defaultValue = (System_String_o *)
                               System_Collections_Generic_Dictionary<object__object>__get_Item
                                         (pSVar1,local_48.fields._currentKey,MethodInfo_Object_get_Item);
              } while (defaultValue == (System_String_o *)0x0);
              pSVar2 = defaultValue->klass;
              if (pSVar2 != DAT_05711098) break;
              __this_05 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
              if ((defaultValue->klass->_1).element_class != (DAT_05711098->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(defaultValue);
              }
              pfVar5 = (float *)il2cpp_glue_022c7330(defaultValue);
              Settings_FloatSetting___ctor
                        (__this_05,*pfVar5,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this_02,local_48.fields._currentKey,(Il2CppObject *)__this_05,
                         MethodInfo_Void_Add);
            }
            if (pSVar2 != DAT_057110b0) break;
            __this_06 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
            if (defaultValue->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(defaultValue);
            }
            Settings_StringSetting___ctor(__this_06,defaultValue,0x7fffffff,(MethodInfo *)0x0);
            if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__Add
                      (__this_02,local_48.fields._currentKey,(Il2CppObject *)__this_06,MethodInfo_Void_Add)
            ;
          }
          if (pSVar2 != DAT_05711068) break;
          __this_07 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
          if ((defaultValue->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(defaultValue);
          }
          piVar6 = (int32_t *)il2cpp_glue_022c7330(defaultValue);
          Settings_IntSetting___ctor(__this_07,*piVar6,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
          if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this_02,local_48.fields._currentKey,(Il2CppObject *)__this_07,MethodInfo_Void_Add);
        }
      } while (pSVar2 != DAT_05711048);
      __this_04 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
      if ((defaultValue->klass->_1).element_class != (DAT_05711048->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(defaultValue);
      }
      pbVar4 = (byte *)il2cpp_glue_022c7330(defaultValue);
      Settings_BoolSetting___ctor(__this_04,(uint)*pbVar4,(MethodInfo *)0x0);
      if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_02,local_48.fields._currentKey,(Il2CppObject *)__this_04,MethodInfo_Void_Add);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicEvaluator__GetAddonSettings (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f64c00

/* WARNING: Removing unreachable block (ram,0x03f652cd) */
/* WARNING: Removing unreachable block (ram,0x03f6520d) */

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicEvaluator__GetAddonSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long *plVar3;
  System_String_c *pSVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_String_o *className;
  System_String_o *name;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  Il2CppObject *pIVar8;
  int *piVar9;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_o *defaultValue;
  Settings_BoolSetting_o *__this_04;
  byte *pbVar10;
  Settings_FloatSetting_o *__this_05;
  float *pfVar11;
  Settings_StringSetting_o *__this_06;
  Settings_IntSetting_o *__this_07;
  int32_t *piVar12;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  undefined1 in_stack_ffffffffffffff48 [12];
  undefined4 uVar13;
  Il2CppObject *in_stack_ffffffffffffff58;
  _union_231280 local_88;
  undefined8 uStack_80;
  System_String_o *local_78;
  System_Collections_Generic_Dictionary_object__object__o *local_70;
  _union_231280 local_68;
  undefined8 uStack_60;
  System_String_o *local_58;
  undefined8 local_50;
  _union_231280 local_48;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  if (DAT_05703eca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__BaseSettin);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"_");
    DAT_05703eca = '\x01';
  }
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_String_o *)0x0;
  local_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  local_58 = (System_String_o *)0x0;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__BaseSettin);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  pCVar1 = (__this->fields)._start;
  if (((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
      (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes,
      pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
     (local_70 = pSVar6,
     pSVar7 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             &local_48,pSVar7,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  local_78 = local_38;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uVar13 = 0;
  local_50 = 0;
  while( true ) {
    __this_00.fields._version = uVar13;
    __this_00.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff48._0_8_;
    __this_00.fields._index = in_stack_ffffffffffffff48._8_4_;
    __this_00.fields._currentKey = in_stack_ffffffffffffff58;
    bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                      (__this_00,(MethodInfo_31D0850 *)&local_88);
    className = local_78;
    if ((char)bVar5 == '\0') {
      __this_03.fields._version = uVar13;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff48._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff48._8_4_;
      __this_03.fields._currentKey = in_stack_ffffffffffffff58;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_03,(MethodInfo_31D0840 *)&local_88);
      return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
             local_70;
    }
    pCVar1 = (__this->fields)._start;
    if (pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar6,(Il2CppObject *)local_78,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    if (pIVar8 == (Il2CppObject *)0x0) break;
    if (pIVar8[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar3 = *(long **)((long)pIVar8[2].monitor + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(Il2CppClass **)(*plVar3 + 0x40) != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    piVar9 = (int *)il2cpp_glue_022c7330();
    if (*piVar9 == 3) {
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      classInstance =
           CustomLogic_CustomLogicEvaluator__CreateClassInstance
                     (__this,className,(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8)
                      ,0,(System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
      CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,method_00);
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (classInstance->fields).Variables;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
      if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &local_48,pSVar7,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      local_58 = local_38;
      local_68 = local_48;
      uStack_60 = uStack_40;
      while (__this_01.fields._version = uVar13,
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 in_stack_ffffffffffffff48._0_8_,
            __this_01.fields._index = in_stack_ffffffffffffff48._8_4_,
            __this_01.fields._currentKey = in_stack_ffffffffffffff58,
            bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this_01,(MethodInfo_31D0850 *)&local_68), name = local_58,
            (char)bVar5 != '\0') {
        if (local_58 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = System_String__StartsWith(local_58,"_",(MethodInfo *)0x0);
        if (((char)bVar5 == '\0') &&
           (bVar5 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                              (classInstance,name,(MethodInfo *)0x0), (char)bVar5 != '\0')) {
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (classInstance->fields).Variables;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          defaultValue = (System_String_o *)
                         System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar2,(Il2CppObject *)name,MethodInfo_Object_get_Item);
          if (defaultValue != (System_String_o *)0x0) {
            pSVar4 = defaultValue->klass;
            if (pSVar4 == DAT_05711098) {
              __this_05 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
              if ((defaultValue->klass->_1).element_class != (DAT_05711098->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(defaultValue);
              }
              pfVar11 = (float *)il2cpp_glue_022c7330(defaultValue);
              Settings_FloatSetting___ctor
                        (__this_05,*pfVar11,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar6,(Il2CppObject *)name,(Il2CppObject *)__this_05,MethodInfo_Void_Add);
            }
            else if (pSVar4 == DAT_057110b0) {
              __this_06 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
              if (defaultValue->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(defaultValue);
              }
              Settings_StringSetting___ctor(__this_06,defaultValue,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar6,(Il2CppObject *)name,(Il2CppObject *)__this_06,MethodInfo_Void_Add);
            }
            else if (pSVar4 == DAT_05711068) {
              __this_07 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
              if ((defaultValue->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(defaultValue);
              }
              piVar12 = (int32_t *)il2cpp_glue_022c7330(defaultValue);
              Settings_IntSetting___ctor
                        (__this_07,*piVar12,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar6,(Il2CppObject *)name,(Il2CppObject *)__this_07,MethodInfo_Void_Add);
            }
            else if (pSVar4 == DAT_05711048) {
              __this_04 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
              if ((defaultValue->klass->_1).element_class != (DAT_05711048->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(defaultValue);
              }
              pbVar10 = (byte *)il2cpp_glue_022c7330(defaultValue);
              Settings_BoolSetting___ctor(__this_04,(uint)*pbVar10,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar6,(Il2CppObject *)name,(Il2CppObject *)__this_04,MethodInfo_Void_Add);
            }
          }
        }
      }
      __this_02.fields._version = uVar13;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff48._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff48._8_4_;
      __this_02.fields._currentKey = in_stack_ffffffffffffff58;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_02,(MethodInfo_31D0840 *)&local_68);
      if (local_70 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (local_70,(Il2CppObject *)className,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$GetComponentSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicEvaluator__GetComponentSettings (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* component, System_Collections_Generic_List_string__o* parameters, const MethodInfo* method);
// 0x3f655d0

/* WARNING: Removing unreachable block (ram,0x03f65d6a) */

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicEvaluator__GetComponentSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *component,
          System_Collections_Generic_List_string__o *parameters,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_String_c *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  undefined8 name;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_array *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  System_String_o *defaultValue;
  System_String_o *value;
  Settings_Vector3Setting_o *__this_08;
  Settings_FloatSetting_o *__this_09;
  float *pfVar9;
  Settings_StringSetting_o *__this_10;
  Settings_IntSetting_o *__this_11;
  int32_t *piVar10;
  Settings_BoolSetting_o *__this_12;
  byte *pbVar11;
  Settings_ColorSetting_o *__this_13;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  UnityEngine_Vector3_o defaultValue_00;
  undefined8 in_stack_ffffffffffffff48;
  Il2CppObject *in_stack_ffffffffffffff58;
  Il2CppObject *pIVar12;
  undefined1 local_98 [64];
  _union_247328 _Stack_58;
  System_String_o *local_50;
  System_String_c *local_48;
  undefined8 uStack_40;
  
  local_98._24_8_ = component;
  if (DAT_05703ecb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    il2cpp_init_method_metadata(&"_");
    DAT_05703ecb = '\x01';
  }
  local_98._0_8_ = (Il2CppMethodPointer)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (InvokerMethod)0x0;
  local_98._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_98._40_8_ = (Il2CppType *)0x0;
  local_98._48_8_ = (Il2CppType **)0x0;
  __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_05,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_06,MethodInfo_Dictionary_2_System_String_System_String);
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  classInstance =
       CustomLogic_CustomLogicEvaluator__CreateClassInstance
                 (__this,(System_String_o *)local_98._24_8_,
                  (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0,
                  (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,method_00);
  if (parameters == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)(local_98 + 0x38),
             (System_Collections_Generic_List_object__o *)parameters,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  local_98._16_8_ = local_50;
  local_98._0_8_ = local_98._56_8_;
  local_98._8_8_ = _Stack_58;
  if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01.fields._8_8_ = __this_05;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_01.fields._current = in_stack_ffffffffffffff58;
    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)local_98);
    if ((char)bVar7 != '\0') {
      if ((System_String_o *)local_98._16_8_ != (System_String_o *)0x0) {
        pSVar8 = System_String__Split((System_String_o *)local_98._16_8_,0x3a,0,(MethodInfo *)0x0);
        if (pSVar8 != (System_String_array *)0x0) {
          iVar4 = (int)pSVar8->max_length;
          if (iVar4 == 0) {
LAB_03f65db9:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03f65db4:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f65da3:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03f65d8b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_00.fields._8_8_ = __this_05,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48
          , __this_00.fields._current = in_stack_ffffffffffffff58,
          bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)local_98), (char)bVar7 != '\0') {
      if ((System_String_o *)local_98._16_8_ == (System_String_o *)0x0) goto LAB_03f65d8b;
      pSVar8 = System_String__Split((System_String_o *)local_98._16_8_,0x3a,0,(MethodInfo *)0x0);
      if (pSVar8 == (System_String_array *)0x0) goto LAB_03f65da3;
      iVar4 = (int)pSVar8->max_length;
      if (iVar4 == 1) goto LAB_03f65db4;
      if (iVar4 == 0) goto LAB_03f65db9;
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_06,(Il2CppObject *)pSVar8->m_Items[0],(Il2CppObject *)pSVar8->m_Items[1],
                 MethodInfo_Void_Add);
    }
  }
  __this_02.fields._8_8_ = __this_05;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_02.fields._current = in_stack_ffffffffffffff58;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)local_98);
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           (classInstance->fields).Variables;
  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_07 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar5,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
  if (__this_07 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             (local_98 + 0x38),__this_07,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  local_98._48_8_ = local_50;
  local_98._32_8_ = local_98._56_8_;
  local_98._40_8_ = _Stack_58;
  pIVar12 = (Il2CppObject *)0x0;
  while( true ) {
    do {
      __this_03.fields._8_8_ = __this_05;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff48;
      __this_03.fields._currentKey = pIVar12;
      bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                        (__this_03,(MethodInfo_31D0850 *)(local_98 + 0x20));
      name = local_98._48_8_;
      if ((char)bVar7 == '\0') {
        __this_04.fields._8_8_ = __this_05;
        __this_04.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff48;
        __this_04.fields._currentKey = pIVar12;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                  (__this_04,(MethodInfo_31D0840 *)(local_98 + 0x20));
        if (pIVar12 == (Il2CppObject *)0x0) {
          return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_05;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_022c0ed0();
      }
      if ((System_String_o *)local_98._48_8_ == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar7 = System_String__StartsWith
                        ((System_String_o *)local_98._48_8_,"_",(MethodInfo *)0x0);
    } while (((char)bVar7 != '\0') ||
            (bVar7 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                               (classInstance,(System_String_o *)name,(MethodInfo *)0x0),
            (char)bVar7 == '\0'));
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (classInstance->fields).Variables;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    defaultValue = (System_String_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar5,(Il2CppObject *)name,MethodInfo_Object_get_Item);
    if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_06,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 != '\0') {
      value = (System_String_o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (__this_06,(Il2CppObject *)name,MethodInfo_String_get_Item);
      defaultValue = (System_String_o *)
                     CustomLogic_CustomLogicComponentInstance__DeserializeValue
                               ((Il2CppObject *)defaultValue,value,(MethodInfo *)0x0);
    }
    if (defaultValue != (System_String_o *)0x0) {
      pSVar6 = defaultValue->klass;
      if (pSVar6 == DAT_05711098) {
        __this_09 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
        if ((defaultValue->klass->_1).element_class != (DAT_05711098->_1).element_class) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(defaultValue);
        }
        pfVar9 = (float *)il2cpp_glue_022c7330(defaultValue);
        Settings_FloatSetting___ctor
                  (__this_09,*pfVar9,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_05,(Il2CppObject *)name,(Il2CppObject *)__this_09,MethodInfo_Void_Add);
      }
      else if (pSVar6 == DAT_057110b0) {
        __this_10 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
        if (defaultValue->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(defaultValue);
        }
        Settings_StringSetting___ctor(__this_10,defaultValue,0x7fffffff,(MethodInfo *)0x0);
        if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_05,(Il2CppObject *)name,(Il2CppObject *)__this_10,MethodInfo_Void_Add);
      }
      else if (pSVar6 == DAT_05711068) {
        __this_11 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
        if ((defaultValue->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(defaultValue);
        }
        piVar10 = (int32_t *)il2cpp_glue_022c7330(defaultValue);
        Settings_IntSetting___ctor(__this_11,*piVar10,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
        if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_05,(Il2CppObject *)name,(Il2CppObject *)__this_11,MethodInfo_Void_Add);
      }
      else if (pSVar6 == DAT_05711048) {
        __this_12 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
        if ((defaultValue->klass->_1).element_class != (DAT_05711048->_1).element_class) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(defaultValue);
        }
        pbVar11 = (byte *)il2cpp_glue_022c7330(defaultValue);
        Settings_BoolSetting___ctor(__this_12,(uint)*pbVar11,(MethodInfo *)0x0);
        if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_05,(Il2CppObject *)name,(Il2CppObject *)__this_12,MethodInfo_Void_Add);
      }
      else {
        bVar2 = (pSVar6->_2).naturalAligment;
        bVar3 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
        if ((bVar2 < bVar3) || ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicColorBuiltin)) {
          bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
          if ((bVar3 <= bVar2) && ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicVector3Builtin)) {
            local_48 = defaultValue[2].klass;
            uStack_40 = 0;
            fVar1 = *(float *)&defaultValue[2].monitor;
            __this_08 = (Settings_Vector3Setting_o *)il2cpp_runtime_glue(TypeInfo_Vector3Setting);
            defaultValue_00.fields.z = fVar1;
            defaultValue_00.fields._0_8_ = local_48;
            Settings_Vector3Setting___ctor(__this_08,defaultValue_00,(MethodInfo *)0x0);
            if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__Add
                      (__this_05,(Il2CppObject *)name,(Il2CppObject *)__this_08,MethodInfo_Void_Add);
          }
        }
        else {
          pSVar6 = defaultValue[2].klass;
          __this_13 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
          Settings_ColorSetting___ctor(__this_13,(Utility_Color255_o *)pSVar6,0,(MethodInfo *)0x0);
          if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this_05,(Il2CppObject *)name,(Il2CppObject *)__this_13,MethodInfo_Void_Add);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$GetComponentNames
// il2cpp: System_Collections_Generic_List_string__o* CustomLogic_CustomLogicEvaluator__GetComponentNames (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f663a0

System_Collections_Generic_List_string__o *
CustomLogic_CustomLogicEvaluator__GetComponentNames
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  long *plVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *pIVar9;
  int *piVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  System_String_o *pSVar13;
  System_String_o *key;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05703ecc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703ecc = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  pCVar3 = (__this->fields)._start;
  if (((pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
      (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes,
      pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar4,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
            local_48._0_8_;
  pIVar12 = (Il2CppType *)local_48._8_8_;
  key = local_38;
  if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
    while (__this_01.fields._8_8_ = pIVar12,
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
          __this_01.fields._currentKey = (Il2CppObject *)key,
          bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
          (char)bVar8 != '\0') {
      pCVar3 = (__this->fields)._start;
      if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) goto LAB_03f66697;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f6669c;
      pIVar9 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar4,(Il2CppObject *)key,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03f66688;
      if (pIVar9[2].monitor == (void *)0x0) goto LAB_03f6668d;
      plVar5 = *(long **)((long)pIVar9[2].monitor + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_03f66692;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_05711068 + 0x40)) goto LAB_03f66683;
      piVar10 = (int *)il2cpp_glue_022c7330();
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    while (key = local_38, __this_00.fields._8_8_ = pIVar12,
          __this_00.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
          __this_00.fields._currentKey = (Il2CppObject *)key,
          bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
          (char)bVar8 != '\0') {
      pCVar3 = (__this->fields)._start;
      if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
LAB_03f66697:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f6669c:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = key;
      pIVar9 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar4,(Il2CppObject *)key,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if (pIVar9 == (Il2CppObject *)0x0) {
LAB_03f66688:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pIVar9[2].monitor == (void *)0x0) {
LAB_03f6668d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar5 = *(long **)((long)pIVar9[2].monitor + 0x18);
      if (plVar5 == (long *)0x0) {
LAB_03f66692:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
LAB_03f66683:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      piVar10 = (int *)il2cpp_glue_022c7330();
      lVar7 = MethodInfo_Void_Add;
      local_38 = pSVar13;
      if (*piVar10 == 0) {
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_03->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = key;
          il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,key);
          local_38 = pSVar13;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)key,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          local_38 = pSVar13;
        }
      }
    }
  }
  __this_02.fields._8_8_ = pIVar12;
  __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
  __this_02.fields._currentKey = (Il2CppObject *)key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
  return __this_03;
}


// CustomLogic.CustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__GetStaticClass (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x3f667b0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__GetStaticClass
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  
  if (DAT_05703ecd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    DAT_05703ecd = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._staticClasses;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (CustomLogic_CustomLogicClassInstance_o *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._staticClasses;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar3 = (CustomLogic_CustomLogicClassInstance_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)className,MethodInfo_CustomLogicClassInstance_get_Item);
      return pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_CustomLogicEvaluator__CreateStaticClass (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x3f616a0

void CustomLogic_CustomLogicEvaluator__CreateStaticClass
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  bool_conflict bVar3;
  CustomLogic_CustomLogicClassInstance_o *value;
  MethodInfo *in_R9;
  int32_t local_24;
  System_Nullable_CustomLogicSourceType__Fields local_20;
  
  if (DAT_05703ece == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    DAT_05703ece = '\x01';
  }
  local_20.hasValue = 0;
  local_20.value = 0;
  local_24 = 0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._staticClasses;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      return;
    }
    local_20.hasValue = 0;
    local_20.value = 0;
    pCVar2 = (__this->fields)._start;
    if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (__this_00 = (pCVar2->fields).ClassNamespaces,
       __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0))
    {
      bVar3 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)className,&local_24,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') {
        System_Nullable<Int32Enum>___ctor
                  ((System_Nullable_Int32Enum__o)&local_20,local_24,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                        (__this,className,
                         (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0,
                         (System_Nullable_CustomLogicSourceType__o)local_20,in_R9);
      if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        (value->fields)._Namespace_k__BackingField.fields = local_20;
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._staticClasses;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar1,(Il2CppObject *)className,(Il2CppObject *)value,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicEvaluator__get_Compiler (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f66840

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicEvaluator__get_Compiler
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (CustomLogic_CustomLogicCompiler_o *)(__this->fields).ForcedCharacterType;
}


// CustomLogic.CustomLogicEvaluator$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_Compiler (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x3f66850

void CustomLogic_CustomLogicEvaluator__set_Compiler
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields).ForcedCharacterType = (System_String_o *)value;
  il2cpp_runtime_glue(&(__this->fields).ForcedCharacterType);
  return;
}


// CustomLogic.CustomLogicEvaluator$$get_CaptureErrors
// il2cpp: bool CustomLogic_CustomLogicEvaluator__get_CaptureErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f66870

bool_conflict
CustomLogic_CustomLogicEvaluator__get_CaptureErrors
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)&(__this->fields).ForcedLoadout);
}


// CustomLogic.CustomLogicEvaluator$$set_CaptureErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_CaptureErrors (CustomLogic_CustomLogicEvaluator_o* __this, bool value, const MethodInfo* method);
// 0x3f66880

void CustomLogic_CustomLogicEvaluator__set_CaptureErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields).ForcedLoadout = (char)value;
  return;
}


// CustomLogic.CustomLogicEvaluator$$get_CapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_CustomLogicEvaluator__get_CapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f66890

System_Collections_Generic_List_CustomLogicError__o *
CustomLogic_CustomLogicEvaluator__get_CapturedErrors
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_List_CustomLogicError__o *)
         (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_CapturedErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_CapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_List_CustomLogicError__o* value, const MethodInfo* method);
// 0x3f668a0

void CustomLogic_CustomLogicEvaluator__set_CapturedErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,
               System_Collections_Generic_List_CustomLogicError__o *value,MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)value;
  il2cpp_runtime_glue(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___ctor (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicStartAst_o* start, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x3f668c0

void CustomLogic_CustomLogicEvaluator___ctor
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicStartAst_o *start,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  undefined8 uVar1;
  System_Object_array *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_Stack_T__o *__this_00;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
  *pSVar6;
  
  if (DAT_05703ecf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_CustomLogic_Cu);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_CustomLogic_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_Dictionary_2_System_St);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_CustomLogic_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_CustomLo);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_CustomLogicSourceT);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__Dictionary_string__float);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicError);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicError);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&MethodInfo_Stack_1_System_ValueTuple_3_String_String_Nullab);
    il2cpp_init_method_metadata(&TypeInfo_Stack_ValueTuple_string__string__CustomLogicSour);
    il2cpp_init_method_metadata(&"__Sub__");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"Kills / Deaths / Max / Total");
    il2cpp_init_method_metadata(&"__Div__");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"__Mod__");
    il2cpp_init_method_metadata(&"__Add__");
    DAT_05703ecf = '\x01';
  }
  pSVar2 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  (__this->fields)._networkCallback = pSVar2;
  il2cpp_runtime_glue(&__this->fields,pSVar2);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_Object);
  (__this->fields).emptyList = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).emptyList,pSVar3);
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__CustomLogicNetworkViewBuiltin);
  System_Collections_Generic_Dictionary<int__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_CustomLogic_CustomLogi);
  (__this->fields).IdToNetworkView =
       (System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *)pSVar4;
  il2cpp_runtime_glue(&(__this->fields).IdToNetworkView,pSVar4);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicNetworkViewBuiltin);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields).AddonToNetworkView =
       (System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *)pSVar5;
  il2cpp_runtime_glue(&(__this->fields).AddonToNetworkView,pSVar5);
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__CustomLogicMapObjectBuiltin);
  System_Collections_Generic_Dictionary<int__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_CustomLogic_CustomLogi);
  (__this->fields).IdToMapObjectBuiltin =
       (System_Collections_Generic_Dictionary_int__CustomLogicMapObjectBuiltin__o *)pSVar4;
  il2cpp_runtime_glue(&(__this->fields).IdToMapObjectBuiltin,pSVar4);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicClassInstance);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields)._staticClasses =
       (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._staticClasses,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicClassInstance);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields)._addonClasses =
       (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._addonClasses,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_CustomLogicSourceT);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_Dictionary_2_CustomLo);
  (__this->fields)._namespacedStaticClasses =
       (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
        *)pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._namespacedStaticClasses,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_CustomLogic_Cu);
  (__this->fields)._callbacks =
       (System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *)pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._callbacks,pSVar5);
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__Dictionary_string__float);
  System_Collections_Generic_Dictionary<int__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_Dictionary_2_System_St);
  (__this->fields).PlayerIdToLastPropertyChanges =
       (System_Collections_Generic_Dictionary_int__Dictionary_string__float___o *)pSVar4;
  il2cpp_runtime_glue(&(__this->fields).PlayerIdToLastPropertyChanges,pSVar4);
  (__this->fields).ScoreboardHeader = "Kills / Deaths / Max / Total";
  il2cpp_runtime_glue(&(__this->fields).ScoreboardHeader);
  (__this->fields).ScoreboardProperty = "";
  il2cpp_runtime_glue(&(__this->fields).ScoreboardProperty);
  *(undefined1 *)&(__this->fields).DefaultShowKillFeed = 1;
  (__this->fields).DefaultShowKillScore = 0x1010101;
  uVar1 = **(undefined8 **)(DAT_057110b0 + 0xb8);
  (__this->fields).DefaultAddKillScore = (int)uVar1;
  (__this->fields).ShowScoreboardLoadout = (int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_glue(&(__this->fields).DefaultAddKillScore);
  *(undefined8 *)&(__this->fields).ShowScoreboardStatus = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).ShowScoreboardStatus);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_CustomLogicError);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_CustomLogic_CustomLogicError);
  (__this->fields)._Compiler_k__BackingField = (CustomLogic_CustomLogicCompiler_o *)pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._Compiler_k__BackingField,pSVar3);
  __this_00 = (System_Collections_Generic_Stack_T__o *)il2cpp_runtime_glue(TypeInfo_Stack_ValueTuple_string__string__CustomLogicSour);
  System_Collections_Generic_Stack<ValueTuple<object__object__Nullable<Int32Enum>>>___ctor
            (__this_00,MethodInfo_Stack_1_System_ValueTuple_3_String_String_Nullab);
  *(System_Collections_Generic_Stack_T__o **)&(__this->fields)._CaptureErrors_k__BackingField =
       __this_00;
  il2cpp_runtime_glue(&(__this->fields)._CaptureErrors_k__BackingField,__this_00);
  pSVar6 = (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
            *)il2cpp_glue_02274930(TypeInfo_object,2);
  (__this->fields)._executionStack = pSVar6;
  il2cpp_runtime_glue(&(__this->fields)._executionStack,pSVar6);
  *(undefined8 *)&(__this->fields)._currentLineNumber = "__Add__";
  il2cpp_runtime_glue(&(__this->fields)._currentLineNumber);
  (__this->fields).Parameters3 = "__Sub__";
  il2cpp_runtime_glue(&(__this->fields).Parameters3);
  (__this->fields).add = "__Mul__";
  il2cpp_runtime_glue(&(__this->fields).add);
  (__this->fields).sub = "__Div__";
  il2cpp_runtime_glue(&(__this->fields).sub);
  (__this->fields).mul = "__Mod__";
  il2cpp_runtime_glue(&(__this->fields).mul);
  (__this->fields).div = "__Eq__";
  il2cpp_runtime_glue(&(__this->fields).div);
  (__this->fields).mod = "__Copy__";
  il2cpp_runtime_glue(&(__this->fields).mod);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._start = start;
  il2cpp_runtime_glue(&(__this->fields)._start,start);
  (__this->fields).ForcedCharacterType = (System_String_o *)compiler;
  il2cpp_runtime_glue(&(__this->fields).ForcedCharacterType,compiler);
  return;
}


// CustomLogic.CustomLogicEvaluator$$ClearCapturedErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__ClearCapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x3f66eb0

void CustomLogic_CustomLogicEvaluator__ClearCapturedErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  CustomLogic_CustomLogicCompiler_o *pCVar2;
  
  if (DAT_05703ed0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703ed0 = '\x01';
  }
  pCVar2 = (__this->fields)._Compiler_k__BackingField;
  if (pCVar2 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    piVar1 = (int *)((long)&(pCVar2->fields)._fileRanges + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pCVar2->fields)._fileRanges;
    *(undefined4 *)&(pCVar2->fields)._fileRanges = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pCVar2->fields)._sourceFiles,0,length,(MethodInfo *)0x0
                         );
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, const MethodInfo* method);
// 0x3f64bf0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool_conflict init,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  MethodInfo *in_R9;
  
  pCVar1 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                     (__this,className,parameterValues,init,
                      (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
  return pCVar1;
}


// CustomLogic.CustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, System_Nullable_CustomLogicSourceType__o callerNamespace, const MethodInfo* method);
// 0x3f61800

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool_conflict init,
          System_Nullable_CustomLogicSourceType__o callerNamespace,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  CustomLogic_CustomLogicClassInstance_o *pCVar8;
  System_String_o *pSVar9;
  System_String_o *str2;
  undefined8 uVar10;
  System_Exception_o *__this_00;
  System_Nullable_CustomLogicSourceType__Fields classNamespace;
  int32_t local_48;
  int32_t local_44;
  System_Nullable_CustomLogicSourceType__Fields local_40;
  System_Nullable_CustomLogicSourceType__Fields local_38;
  System_Nullable_CustomLogicSourceType__Fields local_30;
  
  local_30 = callerNamespace.fields;
  if (DAT_05703ed1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSourceType_get_Value);
    DAT_05703ed1 = '\x01';
  }
  local_48 = 0;
  local_40.hasValue = 0;
  local_40.value = 0;
  local_44 = 0;
  if ((char)callerNamespace.fields.hasValue != '\0') {
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes
       , pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
    goto LAB_03f61a5f;
    bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 != '\0') {
      pCVar1 = (__this->fields)._start;
      if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
         (pSVar3 = (pCVar1->fields).ClassNamespaces,
         pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0))
      goto LAB_03f61a5f;
      bVar5 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)className,&local_48,MethodInfo_Boolean_TryGetValue);
      iVar4 = local_48;
      if (((char)bVar5 != '\0') &&
         (iVar6 = System_Nullable<Int32Enum>__get_Value
                            ((System_Nullable_Int32Enum__o)&local_30,MethodInfo_CustomLogicSourceType_get_Value), iVar4 == iVar6))
      {
        local_38.hasValue = 0;
        local_38.value = 0;
        System_Nullable<Int32Enum>___ctor
                  ((System_Nullable_Int32Enum__o)&local_38,local_48,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        classNamespace = local_38;
        goto LAB_03f61a40;
      }
    }
  }
  if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(className,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes
       , pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar2,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 == '\0') {
        pSVar9 = (System_String_o *)il2cpp_init_method_metadata(&"Class ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" not found");
        pSVar9 = System_String__Concat(pSVar9,className,str2,(MethodInfo *)0x0);
        goto LAB_03f61aaa;
      }
      local_40.hasValue = 0;
      local_40.value = 0;
      pCVar1 = (__this->fields)._start;
      if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
         (pSVar3 = (pCVar1->fields).ClassNamespaces,
         pSVar3 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
        bVar5 = System_Collections_Generic_Dictionary<object__Int32Enum>__TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)className,&local_44,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar5 == '\0') {
          classNamespace.hasValue = 0;
          classNamespace.value = 0;
        }
        else {
          System_Nullable<Int32Enum>___ctor
                    ((System_Nullable_Int32Enum__o)&local_40,local_44,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
          classNamespace = local_40;
        }
LAB_03f61a40:
        pCVar8 = CustomLogic_CustomLogicEvaluator__CreateUserClassInstance
                           (__this,className,parameterValues,init & 0xff,
                            (System_Nullable_CustomLogicSourceType__o)classNamespace,method);
        return pCVar8;
      }
    }
LAB_03f61a5f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = CustomLogic_CustomLogicBuiltinTypes__IsAbstract(className,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar7 = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                       (className,parameterValues,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicClassInstance_o *)pCVar7;
  }
  pSVar9 = (System_String_o *)il2cpp_init_method_metadata(&"Cannot instantiate abstract type ");
  pSVar9 = System_String__Concat(pSVar9,className,(MethodInfo *)0x0);
LAB_03f61aaa:
  uVar10 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar10);
  System_Exception___ctor(__this_00,pSVar9,(MethodInfo *)0x0);
  uVar10 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_CreateClassInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar10);
}


// CustomLogic.CustomLogicEvaluator$$CreateUserClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateUserClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, System_Nullable_CustomLogicSourceType__o classNamespace, const MethodInfo* method);
// 0x3f66f10

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateUserClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool_conflict init,
          System_Nullable_CustomLogicSourceType__o classNamespace,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05703ed2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UserClassInstance);
    il2cpp_init_method_metadata(&"Init");
    DAT_05703ed2 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_glue(TypeInfo_UserClassInstance);
  if (DAT_05703eeb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Type");
    DAT_05703eeb = '\x01';
  }
  CustomLogic_CustomLogicClassInstance___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = (CustomLogic_CustomLogicClassInstance_c *)className;
  il2cpp_runtime_glue(__this_01 + 1,className);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this_01->fields).Variables;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,"Type",(Il2CppObject *)className,MethodInfo_Void_set_Item);
    (__this_01->fields)._Namespace_k__BackingField.fields = classNamespace.fields;
    if ((char)init != '\0') {
      CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,__this_01,method_00);
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this,__this_01,"Init",parameterValues,0,method);
      *(undefined1 *)((long)&(__this_01->fields).Enabled + 1) = 1;
    }
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$RunAssignmentsClassInstance
// il2cpp: void CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, const MethodInfo* method);
// 0x3f61af0

void CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  long *plVar2;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  undefined1 key [8];
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  CustomLogic_UserMethod_o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  Il2CppObject IVar6;
  System_Collections_Generic_KeyValuePair_object__object__o __this_05;
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppRGCTXData *pIVar8;
  _union_229680 _Var9;
  _union_229680 _Var10;
  System_Collections_Generic_List_Enumerator_T__c *ast;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  undefined1 local_a0 [8];
  Il2CppObject local_98;
  Il2CppObject *local_80;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_58;
  undefined1 local_48 [16];
  _union_229680 local_38;
  
  if (DAT_05703ed3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_CustomLogic_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicAssignmentExpressionAst_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Deconstruct);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicAssi);
    il2cpp_init_method_metadata(&TypeInfo_UserMethod);
    il2cpp_init_method_metadata(&"Type");
    DAT_05703ed3 = '\x01';
    method = extraout_RDX;
  }
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  local_58 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  local_98.klass = (Il2CppClass *)0x0;
  local_98.monitor = (Il2CppRGCTXData *)0x0;
  local_a0 = (undefined1  [8])0x0;
  ast = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar4 = (Il2CppObject *)
             (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                       (classInstance,(classInstance->klass->vtable)._4_unknown.method,method);
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar5,pIVar4,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if (pIVar4 != (Il2CppObject *)0x0) {
        local_80 = pIVar4;
        if (pIVar4[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pIVar4[1].monitor,
                     MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicAssi);
          pSVar7 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
          pIVar8 = (Il2CppRGCTXData *)local_48._8_8_;
          _Var9 = local_38;
          while( true ) {
            __this_00.fields._8_8_ = pIVar8;
            __this_00.fields._list = pSVar7;
            __this_00.fields._current = _Var9.genericMethod;
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff38);
            if ((char)bVar3 == '\0') break;
            if (_Var9.genericMethod == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            plVar2 = *(void **)((long)_Var9.genericMethod + 0x18);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_CustomLogicVariableExpressionAst + 0x130)) ||
               (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicVariableExpressionAst + 0x130) * 8
                         ) != TypeInfo_CustomLogicVariableExpressionAst)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume();
            }
            a = (System_String_o *)plVar2[3];
            _Var10 = _Var9;
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
            System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_System_Object);
            pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                               (__this,classInstance,
                                (System_Collections_Generic_Dictionary_string__object__o *)pSVar5,
                                *(void **)((long)_Var9.genericMethod + 0x28),in_R8);
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (classInstance->fields).Variables;
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar5,(Il2CppObject *)a,pIVar4,MethodInfo_Void_set_Item);
            bVar3 = System_String__op_Equality(a,"Type",(MethodInfo *)0x0);
            _Var9 = _Var10;
            if ((char)bVar3 != '\0') {
              *(undefined1 *)&(classInstance->fields)._containsTypeOverride = 1;
            }
          }
          __this_01.fields._8_8_ = pIVar8;
          __this_01.fields._list = pSVar7;
          __this_01.fields._current = _Var9.genericMethod;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff38);
          if (local_80[2].klass != (Il2CppClass *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&local_78
                       ,(System_Collections_Generic_Dictionary_object__object__o *)local_80[2].klass
                       ,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
            while( true ) {
              __this_02.fields._8_8_ = pIVar8;
              __this_02.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
              __this_02.fields._current.fields.key = _Var9.genericMethod;
              __this_02.fields._current.fields.value = (Il2CppObject *)__this;
              __this_02.fields._32_8_ = ast;
              bVar3 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                                (__this_02,(MethodInfo_31CFE90 *)&local_78);
              if ((char)bVar3 == '\0') {
                __this_03.fields._8_8_ = pIVar8;
                __this_03.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
                __this_03.fields._current.fields.key = _Var9.genericMethod;
                __this_03.fields._current.fields.value = (Il2CppObject *)__this;
                __this_03.fields._32_8_ = ast;
                System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                          (__this_03,(MethodInfo_31CFFB0 *)&local_78);
                return;
              }
              IVar6 = (Il2CppObject)il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&local_78,MethodInfo_KeyValuePair_2_System_String_CustomLogic_CustomL);
              __this_05.fields.value = (Il2CppObject *)local_a0;
              __this_05.fields.key = &local_98;
              local_98 = IVar6;
              System_Collections_Generic_KeyValuePair<object__object>__Deconstruct
                        (__this_05,(Il2CppObject **)&stack0xffffffffffffff58,MethodInfo_Void_Deconstruct,
                         (MethodInfo_347CF60 *)in_R8);
              key = local_a0;
              pSVar11 = ast;
              __this_04 = (CustomLogic_UserMethod_o *)il2cpp_runtime_glue(TypeInfo_UserMethod);
              CustomLogic_UserMethod___ctor
                        (__this_04,classInstance,(CustomLogic_CustomLogicMethodDefinitionAst_o *)ast
                         ,(MethodInfo *)0x0);
              pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (classInstance->fields).Variables;
              if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar5,(Il2CppObject *)key,(Il2CppObject *)__this_04,MethodInfo_Void_set_Item);
              ast = pSVar11;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBlockCoroutine
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, System_Collections_Generic_List_CustomLogicBaseAst__o* statements, const MethodInfo* method);
// 0x3f68950

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
          (CustomLogic_CustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          System_Collections_Generic_List_CustomLogicBaseAst__o *statements,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703ed4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EvaluateBlockCoroutine_d__84);
    DAT_05703ed4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_EvaluateBlockCoroutine_d__84);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[3].klass = (Il2CppClass *)classInstance;
    il2cpp_runtime_glue(__this_00 + 3,classInstance);
    __this_00[3].monitor = localVariables;
    il2cpp_runtime_glue(&__this_00[3].monitor,localVariables);
    __this_00[2].klass = (Il2CppClass *)statements;
    il2cpp_runtime_glue(__this_00 + 2,statements);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBlock
// il2cpp: bool CustomLogic_CustomLogicEvaluator__EvaluateBlock (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, System_Collections_Generic_List_CustomLogicBaseAst__o* statements, Il2CppObject** result, const MethodInfo* method);
// 0x3f68a30

/* WARNING: Removing unreachable block (ram,0x03f696ac) */

bool_conflict
CustomLogic_CustomLogicEvaluator__EvaluateBlock
          (CustomLogic_CustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          System_Collections_Generic_List_CustomLogicBaseAst__o *statements,Il2CppObject **result,
          MethodInfo *method)

{
  CustomLogic_CustomLogicToken_o *pCVar1;
  long lVar2;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar3;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *value;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  int *piVar7;
  char *pcVar8;
  CustomLogic_CustomLogicAssignmentExpressionAst_c *pCVar9;
  byte bVar10;
  byte bVar11;
  _union_247328 *method_00;
  int iVar12;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *expression;
  int iVar13;
  undefined8 uVar14;
  System_Collections_Generic_Dictionary_string__object__o *pSVar15;
  _union_247328 local_b8;
  undefined8 uStack_b0;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_a8;
  _union_247328 local_98;
  undefined8 uStack_90;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_88;
  CustomLogic_CustomLogicClassInstance_o *local_78;
  _union_247328 local_70;
  _union_247328 local_68;
  _union_247328 local_60;
  _union_247328 local_58;
  _union_247328 local_50;
  _union_247328 local_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_38;
  
  method_00 = (_union_247328 *)result;
  if (DAT_05703ed5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAssignmentExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBaseExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBreakExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicConditionalBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicContinueExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicForBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicReturnExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicBaseAst_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicBase);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    DAT_05703ed5 = '\x01';
  }
  local_98.genericMethod = (void *)0x0;
  uStack_90 = 0;
  local_88 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  local_50.genericMethod = (Il2CppObject *)0x0;
  local_58.genericMethod = (Il2CppObject *)0x0;
  local_60.genericMethod = (Il2CppObject *)0x0;
  local_68.genericMethod = (Il2CppObject *)0x0;
  local_b8.genericMethod = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  local_70.genericMethod = (Il2CppObject *)0x0;
  *result = (Il2CppObject *)0x0;
  il2cpp_runtime_glue(result,0);
  if (statements == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
             (System_Collections_Generic_List_object__o *)statements,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicBase);
  local_88 = local_38;
  local_98 = local_48;
  uStack_90 = uStack_40;
  uVar14 = 0;
  iVar13 = 0;
  pSVar15 = localVariables;
  local_78 = classInstance;
  do {
    __this_00.fields._index = (int)uVar14;
    __this_00.fields._version = (int)((ulong)uVar14 >> 0x20);
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)result;
    __this_00.fields._current = (Il2CppObject *)pSVar15;
    bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_00,(MethodInfo_3185E20 *)&local_98);
    expression = local_88;
    if ((char)bVar5 == '\0') {
      iVar12 = 0x24;
LAB_03f69449:
      bVar11 = 0;
      bVar10 = (byte)uVar14;
LAB_03f694a7:
      __this_04.fields._index = (int)uVar14;
      __this_04.fields._version = (int)((ulong)uVar14 >> 0x20);
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)result;
      __this_04.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&local_98);
      bVar10 = bVar10 & 1;
      if (iVar12 != 7) {
        bVar10 = bVar11;
      }
      return (uint)bVar10;
    }
    if (local_88 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField = (local_88->fields).Line;
    pCVar9 = local_88->klass;
    bVar10 = (pCVar9->_2).naturalAligment;
    bVar11 = (TypeInfo_CustomLogicAssignmentExpressionAst->_2).naturalAligment;
    if ((bVar11 <= bVar10) && ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_CustomLogicAssignmentExpressionAst)) {
      CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
                (__this,classInstance,localVariables,local_88,(MethodInfo *)method_00);
      goto switchD_03f692c5_caseD_1;
    }
    bVar11 = (TypeInfo_CustomLogicReturnExpressionAst->_2).naturalAligment;
    if ((bVar11 <= bVar10) && ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_CustomLogicReturnExpressionAst)) {
      pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                         (__this,classInstance,localVariables,(local_88->fields).Left,
                          (MethodInfo *)method_00);
      *result = pIVar6;
      il2cpp_runtime_glue(result,pIVar6);
LAB_03f6949c:
      bVar10 = 1;
      iVar12 = 7;
      bVar11 = 1;
      goto LAB_03f694a7;
    }
    bVar11 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
    if (((bVar11 <= bVar10) && ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_CustomLogicBreakExpressionAst)) ||
       ((bVar11 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar11 <= bVar10 &&
        ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_CustomLogicContinueExpressionAst)))) {
      *result = (Il2CppObject *)local_88;
      il2cpp_runtime_glue(result,local_88);
      goto LAB_03f6949c;
    }
    bVar11 = (TypeInfo_CustomLogicConditionalBlockAst->_2).naturalAligment;
    if ((bVar10 < bVar11) || ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] != TypeInfo_CustomLogicConditionalBlockAst)) {
      bVar11 = (TypeInfo_CustomLogicForBlockAst->_2).naturalAligment;
      if ((bVar11 <= bVar10) && ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_CustomLogicForBlockAst)) {
        pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,(local_88->fields).Right,
                            (MethodInfo *)method_00);
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar10 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
        if (((pIVar6->klass->_2).naturalAligment < bVar10) ||
           ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_CustomLogicListBuiltin)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar6);
        }
        if (pIVar6[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
                   (System_Collections_Generic_List_object__o *)pIVar6[3].klass,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
        local_a8 = local_38;
        local_b8 = local_48;
        uStack_b0 = uStack_40;
        if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          __this_02.fields._index = (int)uVar14;
          __this_02.fields._version = (int)((ulong)uVar14 >> 0x20);
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)result;
          __this_02.fields._current = (Il2CppObject *)pSVar15;
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&local_b8);
          if ((char)bVar5 != '\0') {
            if ((expression->fields).Operator != (CustomLogic_CustomLogicToken_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03f69371:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar12 = 5;
        }
        else {
          while( true ) {
            do {
              __this_01.fields._index = (int)uVar14;
              __this_01.fields._version = (int)((ulong)uVar14 >> 0x20);
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)result;
              __this_01.fields._current = (Il2CppObject *)pSVar15;
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&local_b8);
              value = local_a8;
              iVar12 = 5;
              if ((char)bVar5 == '\0') goto LAB_03f6915f;
              pCVar1 = (expression->fields).Operator;
              if (pCVar1 == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f69371;
              pIVar6 = (pCVar1->fields).Value;
              localVariables = pSVar15;
              bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar15,
                                 pIVar6,MethodInfo_Boolean_ContainsKey);
              pSVar15 = localVariables;
              if ((char)bVar5 == '\0') {
                System_Collections_Generic_Dictionary<object__object>__Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)localVariables
                           ,pIVar6,(Il2CppObject *)value,MethodInfo_Void_Add);
              }
              else {
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)localVariables
                           ,pIVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
              }
              classInstance = local_78;
              method_00 = &local_70;
              bVar5 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                                (__this,local_78,localVariables,
                                 (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                                 (expression->fields).Left,&method_00->genericMethod,method);
            } while ((char)bVar5 == '\0');
            if (local_70.genericMethod == (Il2CppObject *)0x0) break;
            lVar2 = *(long *)local_70.genericMethod;
            bVar10 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
            if ((bVar10 <= *(byte *)(lVar2 + 0x130)) &&
               (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) == TypeInfo_CustomLogicBreakExpressionAst))
            goto LAB_03f6915f;
            bVar10 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment;
            if ((*(byte *)(lVar2 + 0x130) < bVar10) ||
               (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) != TypeInfo_CustomLogicContinueExpressionAst))
            break;
          }
          *result = (Il2CppObject *)local_70;
          uVar14 = il2cpp_runtime_glue();
          uVar14 = CONCAT71((int7)((ulong)uVar14 >> 8),1);
          iVar12 = 7;
        }
LAB_03f6915f:
        __this_03.fields._index = (int)uVar14;
        __this_03.fields._version = (int)((ulong)uVar14 >> 0x20);
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)result;
        __this_03.fields._current = (Il2CppObject *)pSVar15;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_03,(MethodInfo_3185E10 *)&local_b8);
        if (iVar12 == 5) goto switchD_03f692c5_caseD_1;
        if (iVar12 != 0) goto LAB_03f69449;
        pCVar9 = expression->klass;
        bVar10 = (pCVar9->_2).naturalAligment;
      }
      bVar11 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
      if ((bVar11 <= bVar10) && ((pCVar9->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_CustomLogicBaseExpressionAst)) {
        CustomLogic_CustomLogicEvaluator__EvaluateExpression
                  (__this,classInstance,localVariables,
                   (CustomLogic_CustomLogicBaseExpressionAst_o *)expression,(MethodInfo *)method_00)
        ;
      }
    }
    else {
      pCVar3 = (local_88->fields).Right;
      if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar4 = pCVar3[1].klass;
      if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(long *)((long)(pCVar4->_1).image + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      piVar7 = (int *)il2cpp_glue_022c7330();
      if (*piVar7 == 0x27) {
        pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)
                            (expression->fields).Operator,(MethodInfo *)method_00);
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar6);
        }
        pcVar8 = (char *)il2cpp_glue_022c7330(pIVar6);
        if (*pcVar8 == '\0') {
          iVar13 = 2;
        }
        else {
          method_00 = &local_50;
          bVar5 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                            (__this,classInstance,localVariables,
                             (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                             (expression->fields).Left,&method_00->genericMethod,method);
          iVar13 = 1;
          if ((char)bVar5 != '\0') {
            if (local_50.genericMethod != (Il2CppObject *)0x0) {
              lVar2 = *(long *)local_50.genericMethod;
              bVar10 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
              if (((bVar10 <= *(byte *)(lVar2 + 0x130)) &&
                  (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) ==
                   TypeInfo_CustomLogicBreakExpressionAst)) ||
                 ((bVar10 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar10 <= *(byte *)(lVar2 + 0x130)
                  && (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) ==
                      TypeInfo_CustomLogicContinueExpressionAst)))) {
                *result = (Il2CppObject *)local_50;
                il2cpp_runtime_glue();
                goto LAB_03f6949c;
              }
            }
            *result = (Il2CppObject *)local_50;
            il2cpp_runtime_glue();
LAB_03f6946f:
            bVar10 = 1;
            iVar12 = 7;
            bVar11 = 0;
            goto LAB_03f694a7;
          }
        }
      }
      else {
        pCVar3 = (expression->fields).Right;
        if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pCVar4 = pCVar3[1].klass;
        if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(long *)((long)(pCVar4->_1).image + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        piVar7 = (int *)il2cpp_glue_022c7330();
        if (*piVar7 == 0x2a) {
LAB_03f69060:
          do {
            pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                               (__this,classInstance,localVariables,
                                (CustomLogic_CustomLogicBaseExpressionAst_o *)
                                (expression->fields).Operator,(MethodInfo *)method_00);
            if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar6);
            }
            pcVar8 = (char *)il2cpp_glue_022c7330(pIVar6);
            iVar13 = 0;
            if (*pcVar8 == '\0') goto switchD_03f692c5_caseD_1;
            method_00 = &local_58;
            bVar5 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                              (__this,classInstance,localVariables,
                               (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                               (expression->fields).Left,&method_00->genericMethod,method);
          } while ((char)bVar5 == '\0');
          if (local_58.genericMethod != (Il2CppObject *)0x0) {
            lVar2 = *(long *)local_58.genericMethod;
            bVar10 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
            if ((bVar10 <= *(byte *)(lVar2 + 0x130)) &&
               (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) == TypeInfo_CustomLogicBreakExpressionAst))
            goto switchD_03f692c5_caseD_1;
            bVar10 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment;
            if ((bVar10 <= *(byte *)(lVar2 + 0x130)) &&
               (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) == TypeInfo_CustomLogicContinueExpressionAst))
            goto LAB_03f69060;
          }
          *result = (Il2CppObject *)local_58;
          il2cpp_runtime_glue();
          goto LAB_03f6946f;
        }
        pCVar3 = (expression->fields).Right;
        if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pCVar4 = pCVar3[1].klass;
        if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(long *)((long)(pCVar4->_1).image + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        piVar7 = (int *)il2cpp_glue_022c7330();
        if (*piVar7 == 0x28) {
          if ((iVar13 == 4) || (iVar13 == 2)) {
            method_00 = &local_60;
            bVar5 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                              (__this,classInstance,localVariables,
                               (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                               (expression->fields).Left,&method_00->genericMethod,method);
            if ((char)bVar5 != '\0') {
              if (local_60.genericMethod != (Il2CppObject *)0x0) {
                lVar2 = *(long *)local_60.genericMethod;
                bVar10 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
                if (((bVar10 <= *(byte *)(lVar2 + 0x130)) &&
                    (*(Il2CppClass **)(*(long *)(lVar2 + 200) + ((ulong)bVar10 - 1) * 8) ==
                     TypeInfo_CustomLogicBreakExpressionAst)) ||
                   ((bVar10 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment, bVar10 <= *(byte *)(lVar2 + 0x130)
                    && (*(Il2CppClass **)(*(long *)(lVar2 + 200) + ((ulong)bVar10 - 1) * 8) ==
                        TypeInfo_CustomLogicContinueExpressionAst)))) {
                  *result = (Il2CppObject *)local_60;
                  il2cpp_runtime_glue();
                  goto LAB_03f6949c;
                }
              }
              *result = (Il2CppObject *)local_60;
              il2cpp_runtime_glue();
              goto LAB_03f6946f;
            }
          }
          iVar13 = 0;
        }
        else {
          pCVar3 = (expression->fields).Right;
          if (pCVar3 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar4 = pCVar3[1].klass;
          if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(long *)((long)(pCVar4->_1).image + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          piVar7 = (int *)il2cpp_glue_022c7330();
          if (*piVar7 == 0x29) {
            switch(iVar13) {
            case 1:
            case 3:
              break;
            case 2:
            case 4:
              pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                 (__this,classInstance,localVariables,
                                  (CustomLogic_CustomLogicBaseExpressionAst_o *)
                                  (expression->fields).Operator,(MethodInfo *)method_00);
              if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(pIVar6);
              }
              pcVar8 = (char *)il2cpp_glue_022c7330(pIVar6);
              if (*pcVar8 == '\0') goto switchD_03f692c5_default;
              method_00 = &local_68;
              bVar5 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                                (__this,classInstance,localVariables,
                                 (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                                 (expression->fields).Left,&method_00->genericMethod,method);
              iVar13 = 3;
              if ((char)bVar5 != '\0') {
                if (local_68.genericMethod != (Il2CppObject *)0x0) {
                  lVar2 = *(long *)local_68.genericMethod;
                  bVar10 = (TypeInfo_CustomLogicBreakExpressionAst->_2).naturalAligment;
                  if (((bVar10 <= *(byte *)(lVar2 + 0x130)) &&
                      (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) ==
                       TypeInfo_CustomLogicBreakExpressionAst)) ||
                     ((bVar10 = (TypeInfo_CustomLogicContinueExpressionAst->_2).naturalAligment,
                      bVar10 <= *(byte *)(lVar2 + 0x130) &&
                      (*(Il2CppClass **)(*(long *)(lVar2 + 200) + -8 + (ulong)bVar10 * 8) ==
                       TypeInfo_CustomLogicContinueExpressionAst)))) {
                    *result = (Il2CppObject *)local_68;
                    il2cpp_runtime_glue();
                    goto LAB_03f6949c;
                  }
                }
                *result = (Il2CppObject *)local_68;
                il2cpp_runtime_glue();
                goto LAB_03f6946f;
              }
              break;
            default:
switchD_03f692c5_default:
              iVar13 = 4;
            }
          }
        }
      }
    }
switchD_03f692c5_caseD_1:
    bVar10 = (TypeInfo_CustomLogicConditionalBlockAst->_2).naturalAligment;
    if ((expression->klass->_2).naturalAligment < bVar10) {
      expression = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
    }
    else if ((expression->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_CustomLogicConditionalBlockAst) {
      expression = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
    }
    if (expression == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
      iVar13 = 0;
    }
  } while( true );
}


// CustomLogic.CustomLogicEvaluator$$EvaluateAssignmentExpression
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, CustomLogic_CustomLogicAssignmentExpressionAst_o* assignment, const MethodInfo* method);
// 0x3f69800

void CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,
               System_Collections_Generic_Dictionary_string__object__o *localVariables,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicToken_o *pCVar4;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar7;
  bool_conflict bVar8;
  int *piVar9;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  CustomLogic_CustomLogicClassInstance_o *__this_02;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  System_String_array *values;
  System_String_o *message;
  System_Exception_o *__this_03;
  MethodInfo *method_00;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar13;
  undefined *puVar14;
  MethodInfo *in_R9;
  uint uVar15;
  Il2CppObject *local_38;
  ulong uVar16;
  
  if (DAT_05703ed6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicFieldExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703ed6 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  if (((assignment == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) ||
      (pCVar4 = (assignment->fields).Operator, pCVar4 == (CustomLogic_CustomLogicToken_o *)0x0)) ||
     (pIVar11 = (pCVar4->fields).Value, pIVar11 == (Il2CppObject *)0x0)) goto LAB_03f69cdb;
  if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_CustomLogicSymbol + 0x40)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  piVar9 = (int *)il2cpp_glue_022c7330();
  iVar3 = *piVar9;
  __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,(assignment->fields).Right,method);
  pCVar5 = (assignment->fields).Right;
  if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
LAB_03f69935:
    if (__this_01 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      __this_01 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
      goto LAB_03f699a9;
    }
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((((__this_01->klass->_2).naturalAligment < bVar1) ||
        ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) ||
       (bVar8 = CustomLogic_CustomLogicClassInstance__HasVariable
                          (__this_01,(__this->fields).mod,(MethodInfo *)0x0), (char)bVar8 == '\0'))
    goto LAB_03f699a9;
    uVar15 = *(uint *)&(__this->fields)._CapturedErrors_k__BackingField;
    method = (MethodInfo *)(ulong)uVar15;
    __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__EvaluateMethod
                          (__this,__this_01,(__this->fields).mod,(System_Object_array *)0x0,uVar15,
                           in_R9);
    pCVar5 = (assignment->fields).Left;
  }
  else {
    pCVar13 = pCVar5->klass;
    bVar1 = (TypeInfo_CustomLogicClassInstantiateExpressionAst->_2).naturalAligment;
    if (((pCVar13->_2).naturalAligment < bVar1) ||
       ((pCVar13->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstantiateExpressionAst)) goto LAB_03f69935;
LAB_03f699a9:
    pCVar5 = (assignment->fields).Left;
  }
  if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    return;
  }
  uVar15 = iVar3 - 0x12;
  uVar16 = (ulong)uVar15;
  pCVar13 = pCVar5->klass;
  bVar1 = (pCVar13->_2).naturalAligment;
  bVar2 = (TypeInfo_CustomLogicVariableExpressionAst->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pCVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVariableExpressionAst)) {
    bVar2 = (TypeInfo_CustomLogicFieldExpressionAst->_2).naturalAligment;
    if (bVar1 < bVar2) {
      return;
    }
    if ((pCVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicFieldExpressionAst) {
      return;
    }
    if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) goto LAB_03f69cdb;
    pCVar13 = pCVar5[1].klass;
    __this_02 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,pCVar5[1].monitor,method);
    if (__this_02 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_02);
      }
    }
    if (uVar15 < 4) {
      if (__this_02 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto LAB_03f69cdb;
      pIVar10 = CustomLogic_CustomLogicClassInstance__GetVariable
                          (__this_02,(System_String_o *)pCVar13,(MethodInfo *)0x0);
      pIVar11 = (Il2CppObject *)0x0;
      if (pIVar10 != (Il2CppObject *)0x0) {
        pIVar6 = pIVar10->klass;
        bVar1 = (TypeInfo_CLPropertyBinding->_2).naturalAligment;
        pIVar11 = pIVar10;
        if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
           ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CLPropertyBinding)) {
          pIVar11 = (Il2CppObject *)
                    (*pIVar6->vtable[5].methodPtr)(pIVar10,__this_02,pIVar6->vtable[5].method);
        }
      }
      if (uVar15 < 4) {
        method_00 = (MethodInfo *)
                    ((long)&switchD_03f69afa::switchdataD_00d81e34 +
                    (long)(int)(&switchD_03f69afa::switchdataD_00d81e34)[uVar16]);
        switch(uVar16) {
        case 0:
          __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                      CustomLogic_CustomLogicEvaluator__AddValues
                                (__this,pIVar11,(Il2CppObject *)__this_01,method_00);
          break;
        case 1:
          __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                      CustomLogic_CustomLogicEvaluator__SubtractValues
                                (__this,pIVar11,(Il2CppObject *)__this_01,method_00);
          break;
        case 2:
          __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                      CustomLogic_CustomLogicEvaluator__MultiplyValues
                                (__this,pIVar11,(Il2CppObject *)__this_01,method_00);
          break;
        case 3:
          __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                      CustomLogic_CustomLogicEvaluator__DivideValues
                                (__this,pIVar11,(Il2CppObject *)__this_01,method_00);
        }
      }
    }
    else if (__this_02 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto LAB_03f69cdb;
    bVar8 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                      (__this_02,(System_String_o *)pCVar13,&local_38,(MethodInfo *)0x0);
    pIVar11 = local_38;
    if ((char)bVar8 == '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this_02->fields).Variables;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_00,(Il2CppObject *)pCVar13,(Il2CppObject *)__this_01,MethodInfo_Void_Add);
        return;
      }
      goto LAB_03f69cdb;
    }
    if (local_38 != (Il2CppObject *)0x0) {
      pIVar6 = local_38->klass;
      bVar1 = (pIVar6->_2).naturalAligment;
      bVar2 = (TypeInfo_CLPropertyBinding->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CLPropertyBinding)) {
        cVar7 = (*pIVar6->vtable[4].methodPtr)(local_38,pIVar6->vtable[4].method);
        if (cVar7 == '\0') {
          pIVar6 = pIVar11->klass;
          (*pIVar6->vtable[6].methodPtr)(pIVar11,__this_02,__this_01,pIVar6->vtable[6].method);
          return;
        }
        uVar12 = il2cpp_init_method_metadata(&TypeInfo_string);
        values = (System_String_array *)il2cpp_glue_02274930(uVar12,5);
        il2cpp_glue_01f2f1a0(values);
        puVar14 = &"Cannot reassign read-only field '";
LAB_03f69d45:
        uVar12 = il2cpp_init_method_metadata(puVar14);
        il2cpp_glue_01f34f00(values,0,uVar12);
        il2cpp_glue_01f2f1a0(__this_02);
        uVar12 = (*(__this_02->klass->vtable)._4_unknown.methodPtr)
                           (__this_02,(__this_02->klass->vtable)._4_unknown.method);
        il2cpp_glue_01f2f1a0(values);
        il2cpp_glue_01f34f00(values,1,uVar12);
        il2cpp_glue_01f2f1a0(values);
        uVar12 = il2cpp_init_method_metadata(&".");
        il2cpp_glue_01f34f00(values,2,uVar12);
        il2cpp_glue_01f2f1a0(values);
        il2cpp_glue_01f34f00(values,3,pCVar13);
        il2cpp_glue_01f2f1a0(values);
        uVar12 = il2cpp_init_method_metadata(&"'");
        il2cpp_glue_01f34f00(values,4,uVar12);
        message = System_String__Concat(values,(MethodInfo *)0x0);
        uVar12 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_03 = (System_Exception_o *)il2cpp_runtime_glue(uVar12);
        System_Exception___ctor(__this_03,message,(MethodInfo *)0x0);
        uVar12 = il2cpp_init_method_metadata(&MethodInfo_Void_EvaluateAssignmentExpression);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_03,uVar12);
      }
      bVar2 = (TypeInfo_CLMethodBinding->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CLMethodBinding)) {
        uVar12 = il2cpp_init_method_metadata(&TypeInfo_string);
        values = (System_String_array *)il2cpp_glue_02274930(uVar12,5);
        il2cpp_glue_01f2f1a0(values);
        puVar14 = &"Cannot reassign built-in method '";
        goto LAB_03f69d45;
      }
    }
    localVariables = (__this_02->fields).Variables;
  }
  else {
    pCVar13 = pCVar5[1].klass;
    if (uVar15 < 4) {
      if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0)
      goto LAB_03f69cdb;
      pIVar11 = System_Collections_Generic_Dictionary<object__object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)localVariables
                           ,(Il2CppObject *)pCVar13,MethodInfo_Object_get_Item);
      switch(uVar16) {
      case 0:
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__AddValues
                              (__this,pIVar11,(Il2CppObject *)__this_01,
                               (MethodInfo *)&switchD_03f69b4b::switchdataD_00d81e24);
        break;
      case 1:
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__SubtractValues
                              (__this,pIVar11,(Il2CppObject *)__this_01,
                               (MethodInfo *)&switchD_03f69b4b::switchdataD_00d81e24);
        break;
      case 2:
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__MultiplyValues
                              (__this,pIVar11,(Il2CppObject *)__this_01,
                               (MethodInfo *)&switchD_03f69b4b::switchdataD_00d81e24);
        break;
      case 3:
        __this_01 = (CustomLogic_CustomLogicClassInstance_o *)
                    CustomLogic_CustomLogicEvaluator__DivideValues
                              (__this,pIVar11,(Il2CppObject *)__this_01,
                               (MethodInfo *)&switchD_03f69b4b::switchdataD_00d81e24);
      }
      goto switchD_03f69b4b_default;
    }
  }
  if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
LAB_03f69cdb:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
switchD_03f69b4b_default:
  System_Collections_Generic_Dictionary<object__object>__set_Item
            ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
             (Il2CppObject *)pCVar13,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
  return;
}


// CustomLogic.CustomLogicEvaluator$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicEvaluator__HasMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_String_o* methodName, const MethodInfo* method);
// 0x3f61120

bool_conflict
CustomLogic_CustomLogicEvaluator__HasMethod
          (CustomLogic_CustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *classInstance,System_String_o *methodName,
          MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05703ed7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    DAT_05703ed7 = '\x01';
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar3 = (Il2CppObject *)
             (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                       (classInstance,(classInstance->klass->vtable)._4_unknown.method);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (__this_00,pIVar3,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[2].klass != (Il2CppClass *)0x0)) {
        bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           pIVar3[2].klass,(Il2CppObject *)methodName,MethodInfo_Boolean_ContainsKey);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_String_o* methodName, System_Object_array* parameterValues, int32_t callerLineNumber, const MethodInfo* method);
// 0x3f5e2b0

/* WARNING: Removing unreachable block (ram,0x03f5ec87) */
/* WARNING: Removing unreachable block (ram,0x03f5edd2) */
/* WARNING: Removing unreachable block (ram,0x03f5ec94) */
/* WARNING: Removing unreachable block (ram,0x03f5edde) */
/* WARNING: Removing unreachable block (ram,0x03f5ecb1) */
/* WARNING: Removing unreachable block (ram,0x03f5f4a8) */
/* WARNING: Removing unreachable block (ram,0x03f5ecd8) */
/* WARNING: Removing unreachable block (ram,0x03f5ecf5) */
/* WARNING: Removing unreachable block (ram,0x03f5ed0d) */
/* WARNING: Removing unreachable block (ram,0x03f5ed23) */
/* WARNING: Removing unreachable block (ram,0x03f5efeb) */
/* WARNING: Removing unreachable block (ram,0x03f5ed8c) */
/* WARNING: Removing unreachable block (ram,0x03f5eff0) */
/* WARNING: Removing unreachable block (ram,0x03f5eda9) */
/* WARNING: Removing unreachable block (ram,0x03f5ede3) */
/* WARNING: Removing unreachable block (ram,0x03f5edb2) */
/* WARNING: Removing unreachable block (ram,0x03f5ea86) */
/* WARNING: Removing unreachable block (ram,0x03f5eb86) */
/* WARNING: Removing unreachable block (ram,0x03f5eaa8) */
/* WARNING: Removing unreachable block (ram,0x03f5eb92) */
/* WARNING: Removing unreachable block (ram,0x03f5ef9d) */
/* WARNING: Removing unreachable block (ram,0x03f5ebb7) */
/* WARNING: Removing unreachable block (ram,0x03f5efa2) */
/* WARNING: Removing unreachable block (ram,0x03f5ebd0) */
/* WARNING: Removing unreachable block (ram,0x03f5efa7) */
/* WARNING: Removing unreachable block (ram,0x03f5ebea) */
/* WARNING: Removing unreachable block (ram,0x03f5efac) */
/* WARNING: Removing unreachable block (ram,0x03f5ec10) */
/* WARNING: Removing unreachable block (ram,0x03f5efb1) */
/* WARNING: Removing unreachable block (ram,0x03f5ec2e) */
/* WARNING: Removing unreachable block (ram,0x03f5efb6) */
/* WARNING: Removing unreachable block (ram,0x03f5ec48) */
/* WARNING: Removing unreachable block (ram,0x03f5efbb) */
/* WARNING: Removing unreachable block (ram,0x03f5ec6e) */
/* WARNING: Removing unreachable block (ram,0x03f5efc0) */
/* WARNING: Removing unreachable block (ram,0x03f5ef56) */

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateMethod
          (CustomLogic_CustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *classInstance,System_String_o *methodName,
          System_Object_array *parameterValues,int32_t callerLineNumber,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  Il2CppClass *pIVar4;
  CustomLogic_CustomLogicClassInstance_c *pCVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Nullable_CustomLogicSourceType__Fields ns;
  System_Object_array *pSVar7;
  System_Collections_Generic_Stack_T__o *pSVar8;
  UnityEngine_MonoBehaviour_o *__this_01;
  System_ValueTuple_object__object__Nullable_Int32Enum___o item;
  System_ValueTuple_object__object__Nullable_Int32Enum___o __this_02;
  long lVar9;
  bool_conflict bVar10;
  uint uVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  Il2CppObject *pIVar14;
  MethodInfo *pMVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  CustomLogic_CustomLogicError_o *__this_03;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar18;
  System_String_o *str2;
  undefined8 uVar19;
  System_Exception_o *__this_04;
  CustomLogic_CustomLogicEvaluator_o *__this_05;
  undefined4 in_register_00000084;
  ulong uVar20;
  undefined8 in_stack_ffffffffffffff78;
  System_Nullable_Int32Enum__Fields SVar21;
  UnityEngine_Coroutine_o *local_58;
  Il2CppObject *local_50;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_48;
  
  pMVar15 = (MethodInfo *)CONCAT44(in_register_00000084,callerLineNumber);
  if (DAT_05703ed8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object__Get);
    il2cpp_init_method_metadata(&MethodInfo_Void_Release);
    il2cpp_init_method_metadata(&TypeInfo_CollectionPool_Dictionary_string__object___KeyVa);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicError);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMethodDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_Void_Push);
    il2cpp_init_method_metadata(&TypeInfo_UserMethod);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogi);
    il2cpp_init_method_metadata(&" not found in class ");
    il2cpp_init_method_metadata(&"Method ");
    il2cpp_init_method_metadata(&"Custom logic runtime error: ");
    il2cpp_init_method_metadata(&"");
    DAT_05703ed8 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  local_58 = (UnityEngine_Coroutine_o *)0x0;
  *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField = callerLineNumber;
  if (parameterValues == (System_Object_array *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    parameterValues = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
  }
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar10 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                     (classInstance,methodName,&local_50,(MethodInfo *)0x0);
  if (((char)bVar10 != '\0') && (local_50 != (Il2CppObject *)0x0)) {
    pIVar4 = local_50->klass;
    bVar2 = (TypeInfo_CLMethodBinding->_2).naturalAligment;
    if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CLMethodBinding)) {
      pIVar12 = (Il2CppObject *)
                (*pIVar4->vtable[4].methodPtr)
                          (local_50,classInstance,parameterValues,pIVar4->vtable[4].method);
      return pIVar12;
    }
  }
  pCVar5 = classInstance->klass;
  bVar2 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  if ((bVar2 <= (pCVar5->_2).naturalAligment) &&
     ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BuiltinClassInstance)) {
    pSVar16 = (System_String_o *)
              (*(pCVar5->vtable)._4_unknown.methodPtr)
                        (classInstance,(pCVar5->vtable)._4_unknown.method);
    pSVar17 = (System_String_o *)il2cpp_init_method_metadata(&"Method ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" not found in class ");
    pSVar16 = System_String__Concat(pSVar17,methodName,str2,pSVar16,(MethodInfo *)0x0);
    uVar19 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_04 = (System_Exception_o *)il2cpp_runtime_glue(uVar19);
    System_Exception___ctor(__this_04,pSVar16,(MethodInfo *)0x0);
    uVar19 = il2cpp_init_method_metadata(&MethodInfo_Object_EvaluateMethod);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_04,uVar19);
  }
  pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
            (classInstance->fields).Variables;
  if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                     (pSVar13,(Il2CppObject *)methodName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar10 != '\0') {
    pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
              (classInstance->fields).Variables;
    if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar12 = System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar13,(Il2CppObject *)methodName,MethodInfo_Object_get_Item);
    if (pIVar12 != (Il2CppObject *)0x0) {
      bVar2 = (TypeInfo_UserMethod->_2).naturalAligment;
      if ((bVar2 <= (pIVar12->klass->_2).naturalAligment) &&
         ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_UserMethod)) {
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)pIVar12[1].klass;
        pIVar12 = pIVar12[1].monitor;
        goto joined_r0x03f5e65b;
      }
    }
  }
  pCVar6 = (__this->fields)._start;
  if (pCVar6 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Classes;
  pIVar12 = (Il2CppObject *)
            (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                      (classInstance,(classInstance->klass->vtable)._4_unknown.method);
  if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar12 = System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar13,pIVar12,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
  if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pIVar12[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                     ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12[2].klass,
                      (Il2CppObject *)methodName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar10 == '\0') {
    pMVar15 = (MethodInfo *)
              (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                        (classInstance,(classInstance->klass->vtable)._4_unknown.method);
    pSVar16 = System_String__Concat
                        ("Method ",methodName," not found in class ",(System_String_o *)pMVar15,
                         (MethodInfo *)0x0);
    if (*(char *)&(__this->fields).ForcedLoadout == '\0') {
      __this_05 = "Custom logic runtime error: ";
      pSVar16 = System_String__Concat((System_String_o *)"Custom logic runtime error: ",pSVar16,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_05,pSVar16,1,pMVar15);
    }
    else {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  (__this->fields)._Compiler_k__BackingField;
      pSVar17 = (System_String_o *)
                (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                          (classInstance,(classInstance->klass->vtable)._4_unknown.method);
      ns = (classInstance->fields)._Namespace_k__BackingField.fields;
      __this_03 = (CustomLogic_CustomLogicError_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicError);
      CustomLogic_CustomLogicError___ctor
                (__this_03,pSVar16,pSVar17,methodName,0,"",
                 (System_Nullable_CustomLogicSourceType__o)ns,(MethodInfo *)0x0);
      lVar9 = MethodInfo_Void_Add;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (__this_00->fields)._items;
      if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar11 = (__this_00->fields)._size;
      if (uVar11 < (uint)pSVar7->max_length) {
        (__this_00->fields)._size = uVar11 + 1;
        pSVar7->m_Items[(int)uVar11] = (Il2CppObject *)__this_03;
        il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar11,__this_03);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)__this_03,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    return (Il2CppObject *)0x0;
  }
  pCVar6 = (__this->fields)._start;
  if (pCVar6 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Classes;
  SVar21 = (System_Nullable_Int32Enum__Fields)methodName;
  pIVar12 = (Il2CppObject *)
            (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                      (classInstance,(classInstance->klass->vtable)._4_unknown.method);
  if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar12 = System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar13,pIVar12,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
  if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pIVar12[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar12 = System_Collections_Generic_Dictionary<object__object>__get_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12[2].klass,
                       (Il2CppObject *)methodName,MethodInfo_CustomLogicMethodDefinitionAst_get_Item);
  methodName = (System_String_o *)SVar21;
joined_r0x03f5e65b:
  if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)&pIVar12[2].monitor == '\0') {
    *(undefined4 *)&(__this->fields)._CapturedErrors_k__BackingField =
         *(undefined4 *)((long)&pIVar12[1].klass + 4);
    if (*(char *)&(__this->fields).ForcedLoadout != '\0') {
      if ((Il2CppClass *)classInstance == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar8 = *(System_Collections_Generic_Stack_T__o **)
                &(__this->fields)._CaptureErrors_k__BackingField;
      pCVar5 = (((Il2CppClass *)classInstance)->_1).image;
      pIVar14 = (Il2CppObject *)
                (*(pCVar5->vtable)._4_unknown.methodPtr)
                          (classInstance,(pCVar5->vtable)._4_unknown.method);
      local_48.fields.Item1 = (Il2CppObject *)0x0;
      local_48.fields.Item2 = (Il2CppObject *)0x0;
      local_48.fields.Item3.fields.hasValue = 0;
      local_48.fields.Item3.fields.value = 0;
      __this_02.fields.Item2 = (Il2CppObject *)__this;
      __this_02.fields.Item1 = (Il2CppObject *)in_stack_ffffffffffffff78;
      __this_02.fields.Item3.fields = (System_Nullable_Int32Enum__Fields)methodName;
      System_ValueTuple<object__object__Nullable<Int32Enum>>___ctor
                (__this_02,(Il2CppObject *)&local_48,pIVar14,
                 (System_Nullable_Int32Enum__o)methodName,
                 (MethodInfo_2B5AF50 *)
                 ((System_Nullable_CustomLogicSourceType__o *)
                 ((long)&(((Il2CppClass *)classInstance)->_1).byval_arg.data + 4))->fields);
      if (pSVar8 == (System_Collections_Generic_Stack_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      item.fields.Item2 = local_48.fields.Item2;
      item.fields.Item1 = local_48.fields.Item1;
      item.fields.Item3.fields = local_48.fields.Item3.fields;
      System_Collections_Generic_Stack<ValueTuple<object__object__Nullable<Int32Enum>>>__Push
                (pSVar8,item,MethodInfo_Void_Push);
    }
    if (*(int *)(TypeInfo_CollectionPool_Dictionary_string__object___KeyVa + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Pool_CollectionPool<object__KeyValuePair<object__object>>__Get
                        (MethodInfo_Dictionary_2_System_String_System_Object__Get);
    if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pIVar12[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = *(int32_t *)&((pIVar12[2].klass)->_1).namespaze;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar11 = System_Math__Min((int32_t)parameterValues->max_length,iVar3,(MethodInfo *)0x0);
    if (0 < (int)uVar11) {
      if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if (pIVar12[2].klass != (Il2CppClass *)0x0) {
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pIVar12[2].klass,0,MethodInfo_String_get_Item);
          if ((int)parameterValues->max_length != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03f5efe1:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f5ef72:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar20 = 0;
      do {
        if (pIVar12[2].klass == (Il2CppClass *)0x0) goto LAB_03f5ef72;
        pIVar14 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pIVar12[2].klass,
                             (int32_t)uVar20,MethodInfo_String_get_Item);
        if ((uint)parameterValues->max_length <= uVar20) goto LAB_03f5efe1;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar13,pIVar14,parameterValues->m_Items[uVar20],MethodInfo_Void_Add);
        uVar20 = uVar20 + 1;
      } while (uVar11 != uVar20);
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlock
              (__this,classInstance,
               (System_Collections_Generic_Dictionary_string__object__o *)pSVar13,pIVar12[1].monitor
               ,(Il2CppObject **)&local_58,method);
    if (*(int *)(TypeInfo_CollectionPool_Dictionary_string__object___KeyVa + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Pool_CollectionPool<object__KeyValuePair<object__object>>__Release
              ((Il2CppObject *)pSVar13,MethodInfo_Void_Release);
    pUVar18 = local_58;
    if (*(char *)&(__this->fields).ForcedLoadout != '\0') {
      pSVar8 = *(System_Collections_Generic_Stack_T__o **)
                &(__this->fields)._CaptureErrors_k__BackingField;
      if (pSVar8 == (System_Collections_Generic_Stack_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Stack<ValueTuple<object__object__Nullable<Int32Enum>>>__Pop
                (&local_48,pSVar8,MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogi);
    }
  }
  else {
    pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar13,MethodInfo_Dictionary_2_System_String_System_Object);
    if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pIVar12[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = *(int32_t *)&((pIVar12[2].klass)->_1).namespaze;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar11 = System_Math__Min((int32_t)parameterValues->max_length,iVar3,(MethodInfo *)0x0);
    if (0 < (int)uVar11) {
      if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if (pIVar12[2].klass != (Il2CppClass *)0x0) {
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pIVar12[2].klass,0,MethodInfo_String_get_Item);
          if ((int)parameterValues->max_length != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03f5ef98:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f5ef47:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar20 = 0;
      do {
        if (pIVar12[2].klass == (Il2CppClass *)0x0) goto LAB_03f5ef47;
        pIVar14 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pIVar12[2].klass,
                             (int32_t)uVar20,MethodInfo_String_get_Item);
        if ((uint)parameterValues->max_length <= uVar20) goto LAB_03f5ef98;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar13,pIVar14,parameterValues->m_Items[uVar20],MethodInfo_Void_Add);
        uVar20 = uVar20 + 1;
      } while (uVar11 != uVar20);
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
    routine = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                        (__this,classInstance,
                         (System_Collections_Generic_Dictionary_string__object__o *)pSVar13,
                         pIVar12[1].monitor,pMVar15);
    if (__this_01 == (UnityEngine_MonoBehaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar18 = UnityEngine_MonoBehaviour__StartCoroutine(__this_01,routine,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)pUVar18;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_UserMethod_o* userMethod, System_Object_array* parameterValues, const MethodInfo* method);
// 0x3f6a520

/* WARNING: Removing unreachable block (ram,0x03f6a957) */
/* WARNING: Removing unreachable block (ram,0x03f6a9cf) */
/* WARNING: Removing unreachable block (ram,0x03f6a96e) */
/* WARNING: Removing unreachable block (ram,0x03f6a9db) */
/* WARNING: Removing unreachable block (ram,0x03f6acb7) */
/* WARNING: Removing unreachable block (ram,0x03f6aa00) */
/* WARNING: Removing unreachable block (ram,0x03f6acbc) */
/* WARNING: Removing unreachable block (ram,0x03f6aa19) */
/* WARNING: Removing unreachable block (ram,0x03f6acc1) */
/* WARNING: Removing unreachable block (ram,0x03f6aa33) */
/* WARNING: Removing unreachable block (ram,0x03f6acc6) */
/* WARNING: Removing unreachable block (ram,0x03f6aa5b) */
/* WARNING: Removing unreachable block (ram,0x03f6accb) */
/* WARNING: Removing unreachable block (ram,0x03f6aa79) */
/* WARNING: Removing unreachable block (ram,0x03f6acd0) */
/* WARNING: Removing unreachable block (ram,0x03f6aa93) */
/* WARNING: Removing unreachable block (ram,0x03f6acd5) */
/* WARNING: Removing unreachable block (ram,0x03f6aab9) */
/* WARNING: Removing unreachable block (ram,0x03f6acda) */
/* WARNING: Removing unreachable block (ram,0x03f6aad2) */
/* WARNING: Removing unreachable block (ram,0x03f6ac13) */
/* WARNING: Removing unreachable block (ram,0x03f6aadf) */
/* WARNING: Removing unreachable block (ram,0x03f6ac1f) */
/* WARNING: Removing unreachable block (ram,0x03f6aafc) */
/* WARNING: Removing unreachable block (ram,0x03f6b0f3) */
/* WARNING: Removing unreachable block (ram,0x03f6ab24) */
/* WARNING: Removing unreachable block (ram,0x03f6ab38) */
/* WARNING: Removing unreachable block (ram,0x03f6ab50) */
/* WARNING: Removing unreachable block (ram,0x03f6ab66) */
/* WARNING: Removing unreachable block (ram,0x03f6ad02) */
/* WARNING: Removing unreachable block (ram,0x03f6abcd) */
/* WARNING: Removing unreachable block (ram,0x03f6ad07) */
/* WARNING: Removing unreachable block (ram,0x03f6abea) */
/* WARNING: Removing unreachable block (ram,0x03f6ac24) */
/* WARNING: Removing unreachable block (ram,0x03f6abf3) */
/* WARNING: Removing unreachable block (ram,0x03f6b100) */
/* WARNING: Removing unreachable block (ram,0x03f6ac74) */

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateMethod
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_UserMethod_o *userMethod,
          System_Object_array *parameterValues,MethodInfo *method)

{
  int32_t iVar1;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar2;
  System_Nullable_Int32Enum__o item3;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_Stack_T__o *pSVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_ValueTuple_object__object__Nullable_Int32Enum___o item;
  System_ValueTuple_object__object__Nullable_Int32Enum___o __this_01;
  bool_conflict bVar5;
  uint uVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar9;
  ulong uVar10;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  CustomLogic_CustomLogicClassInstance_o *classInstance_00;
  System_Nullable_Int32Enum__Fields in_stack_ffffffffffffff88;
  UnityEngine_Coroutine_o *local_60;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_58;
  
  if (DAT_05703ed9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object__Get);
    il2cpp_init_method_metadata(&MethodInfo_Void_Release);
    il2cpp_init_method_metadata(&TypeInfo_CollectionPool_Dictionary_string__object___KeyVa);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_Void_Push);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogi);
    DAT_05703ed9 = '\x01';
  }
  local_60 = (UnityEngine_Coroutine_o *)0x0;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar2 = (userMethod->fields).Ast;
  if (pCVar2 == (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  item3.fields = (System_Nullable_Int32Enum__Fields)(pCVar2->fields).Name;
  classInstance = (userMethod->fields).Owner;
  if (parameterValues == (System_Object_array *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    parameterValues = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
  }
  bVar5 = (pCVar2->fields).Coroutine;
  *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField = (pCVar2->fields).Line;
  if ((char)bVar5 == '\0') {
    classInstance_00 = classInstance;
    if (*(char *)&(__this->fields).ForcedLoadout != '\0') {
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar4 = *(System_Collections_Generic_Stack_T__o **)
                &(__this->fields)._CaptureErrors_k__BackingField;
      pIVar8 = (Il2CppObject *)
               (*(classInstance->klass->vtable)._4_unknown.methodPtr)
                         (classInstance,(classInstance->klass->vtable)._4_unknown.method);
      local_58.fields.Item1 = (Il2CppObject *)0x0;
      local_58.fields.Item2 = (Il2CppObject *)0x0;
      local_58.fields.Item3.fields.hasValue = 0;
      local_58.fields.Item3.fields.value = 0;
      __this_01.fields.Item2 = (Il2CppObject *)classInstance_00;
      __this_01.fields.Item1 = (Il2CppObject *)__this;
      __this_01.fields.Item3.fields = in_stack_ffffffffffffff88;
      System_ValueTuple<object__object__Nullable<Int32Enum>>___ctor
                (__this_01,(Il2CppObject *)&local_58,pIVar8,item3,
                 (MethodInfo_2B5AF50 *)(classInstance->fields)._Namespace_k__BackingField.fields);
      if (pSVar4 == (System_Collections_Generic_Stack_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      item.fields.Item2 = local_58.fields.Item2;
      item.fields.Item1 = local_58.fields.Item1;
      item.fields.Item3.fields = local_58.fields.Item3.fields;
      System_Collections_Generic_Stack<ValueTuple<object__object__Nullable<Int32Enum>>>__Push
                (pSVar4,item,MethodInfo_Void_Push);
    }
    if (*(int *)(TypeInfo_CollectionPool_Dictionary_string__object___KeyVa + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             UnityEngine_Pool_CollectionPool<object__KeyValuePair<object__object>>__Get
                       (MethodInfo_Dictionary_2_System_String_System_Object__Get);
    if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = (pCVar2->fields).ParameterNames;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar1 = (pSVar3->fields)._size;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar6 = System_Math__Min((int32_t)parameterValues->max_length,iVar1,(MethodInfo *)0x0);
    if (0 < (int)uVar6) {
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar3 = (pCVar2->fields).ParameterNames;
        if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_String_get_Item);
          if ((int)parameterValues->max_length != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03f6acf8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f6ac8f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar10 = 0;
      do {
        pSVar3 = (pCVar2->fields).ParameterNames;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03f6ac8f;
        pIVar8 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,(int32_t)uVar10,
                            MethodInfo_String_get_Item);
        if ((uint)parameterValues->max_length <= uVar10) goto LAB_03f6acf8;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar7,pIVar8,parameterValues->m_Items[uVar10],MethodInfo_Void_Add);
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlock
              (__this,classInstance_00,
               (System_Collections_Generic_Dictionary_string__object__o *)pSVar7,
               (pCVar2->fields).Statements,(Il2CppObject **)&local_60,in_R9);
    if (*(int *)(TypeInfo_CollectionPool_Dictionary_string__object___KeyVa + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Pool_CollectionPool<object__KeyValuePair<object__object>>__Release
              ((Il2CppObject *)pSVar7,MethodInfo_Void_Release);
    pUVar9 = local_60;
    if (*(char *)&(__this->fields).ForcedLoadout != '\0') {
      pSVar4 = *(System_Collections_Generic_Stack_T__o **)
                &(__this->fields)._CaptureErrors_k__BackingField;
      if (pSVar4 == (System_Collections_Generic_Stack_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Stack<ValueTuple<object__object__Nullable<Int32Enum>>>__Pop
                (&local_58,pSVar4,MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogi);
    }
  }
  else {
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_Object);
    if (parameterValues == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = (pCVar2->fields).ParameterNames;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar1 = (pSVar3->fields)._size;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar6 = System_Math__Min((int32_t)parameterValues->max_length,iVar1,(MethodInfo *)0x0);
    if (0 < (int)uVar6) {
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar3 = (pCVar2->fields).ParameterNames;
        if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_String_get_Item);
          if ((int)parameterValues->max_length != 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03f6acb2:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f6ac65:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar10 = 0;
      do {
        pSVar3 = (pCVar2->fields).ParameterNames;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03f6ac65;
        pIVar8 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,(int32_t)uVar10,
                            MethodInfo_String_get_Item);
        if ((uint)parameterValues->max_length <= uVar10) goto LAB_03f6acb2;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar7,pIVar8,parameterValues->m_Items[uVar10],MethodInfo_Void_Add);
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
    routine = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                        (__this,classInstance,
                         (System_Collections_Generic_Dictionary_string__object__o *)pSVar7,
                         (pCVar2->fields).Statements,in_R8);
    if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine(__this_00,routine,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)pUVar9;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateExpression (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, CustomLogic_CustomLogicBaseExpressionAst_o* expression, const MethodInfo* method);
// 0x3f670a0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          CustomLogic_CustomLogicBaseExpressionAst_o *expression,MethodInfo *method)

{
  byte bVar1;
  int symbol;
  void *pvVar2;
  long *plVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  Il2CppClass *pIVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  CustomLogic_CustomLogicBaseExpressionAst_o *expression_00;
  int32_t *piVar9;
  CustomLogic_CustomLogicClassInstance_o *pCVar10;
  System_Object_array *pSVar11;
  Il2CppClass *method_00;
  long lVar12;
  int *piVar13;
  char *pcVar14;
  undefined1 *puVar15;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Il2CppObject *right;
  CustomLogic_UserMethod_o *userMethod;
  undefined8 uVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  System_Exception_o *__this_01;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar19;
  ulong uVar20;
  Il2CppObject **ppIVar21;
  System_Collections_Generic_List_object__o *pSVar22;
  MethodInfo *in_R9;
  System_Nullable_CustomLogicSourceType__Fields local_60 [3];
  System_Nullable_CustomLogicSourceType__Fields local_48;
  CustomLogic_CustomLogicBaseExpressionAst_c *local_38;
  
  if (DAT_05703eda == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Free);
    il2cpp_init_method_metadata(&MethodInfo_Object___New);
    il2cpp_init_method_metadata(&TypeInfo_ArrayPool_object);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBaseExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBinopExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicFieldExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMethodCallExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNotExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnaryExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicBaseAst_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UserMethod);
    il2cpp_init_method_metadata(&"self");
    DAT_05703eda = '\x01';
  }
  local_48.hasValue = 0;
  local_48.value = 0;
  local_38 = (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0;
  if (expression == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField = (expression->fields).Line;
  switch((expression->fields).Type) {
  case 4:
    bVar1 = (TypeInfo_CustomLogicMethodCallExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicMethodCallExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    pCVar10 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)expression[1].fields,method);
    if (pCVar10 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
      if (((pCVar10->klass->_2).naturalAligment < bVar1) ||
         ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pCVar10);
      }
    }
    if (expression[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar8 = *(int32_t *)((long)expression[1].monitor + 0x18);
    if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = Unity_VisualScripting_ArrayPool<object>__New(iVar8,MethodInfo_Object___New);
    pSVar22 = expression[1].monitor;
    if (pSVar22 != (System_Collections_Generic_List_object__o *)0x0) {
      if (pSVar11 == (System_Object_array *)0x0) {
        if (0 < (pSVar22->fields)._size) {
          expression_00 =
               (CustomLogic_CustomLogicBaseExpressionAst_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar22,0,MethodInfo_CustomLogicBaseAst_get_Item);
          if (expression_00 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
            if (((expression_00->klass->_2).naturalAligment < bVar1) ||
               ((expression_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicBaseExpressionAst)) {
LAB_03f67fe7:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(expression_00);
            }
          }
          CustomLogic_CustomLogicEvaluator__EvaluateExpression
                    (__this,classInstance,localVariables,expression_00,method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f67b20:
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                            (__this,pCVar10,(System_String_o *)expression[1].klass,pSVar11,
                             *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField,in_R9);
        if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Unity_VisualScripting_ArrayPool<object>__Free(pSVar11,MethodInfo_Void_Free);
        return pIVar17;
      }
      ppIVar21 = pSVar11->m_Items;
      uVar20 = 0;
      do {
        if ((long)(pSVar22->fields)._size <= (long)uVar20) goto LAB_03f67b20;
        expression_00 =
             (CustomLogic_CustomLogicBaseExpressionAst_o *)
             System_Collections_Generic_List<object>__get_Item(pSVar22,(int32_t)uVar20,MethodInfo_CustomLogicBaseAst_get_Item)
        ;
        if (expression_00 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
          if (((expression_00->klass->_2).naturalAligment < bVar1) ||
             ((expression_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicBaseExpressionAst))
          goto LAB_03f67fe7;
        }
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,expression_00,method);
        if ((pIVar17 != (Il2CppObject *)0x0) &&
           (lVar12 = il2cpp_runtime_glue(pIVar17,(((pSVar11->obj).klass)->_1).element_class),
           lVar12 == 0)) {
          uVar16 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar16,0);
        }
        if ((uint)pSVar11->max_length <= uVar20) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *ppIVar21 = pIVar17;
        il2cpp_runtime_glue(ppIVar21,pIVar17);
        uVar20 = uVar20 + 1;
        pSVar22 = expression[1].monitor;
        ppIVar21 = ppIVar21 + 1;
      } while (pSVar22 != (System_Collections_Generic_List_object__o *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  case 5:
    bVar1 = (TypeInfo_CustomLogicClassInstantiateExpressionAst->_2).naturalAligment;
    method_00 = (Il2CppClass *)(ulong)bVar1;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(long)((long)&method_00[-1].vtable[0xfe].method + 7)]
        != TypeInfo_CustomLogicClassInstantiateExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    if (expression[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar8 = *(int32_t *)((long)expression[1].monitor + 0x18);
    if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = Unity_VisualScripting_ArrayPool<object>__New(iVar8,MethodInfo_Object___New);
    pSVar22 = expression[1].monitor;
    if (pSVar22 != (System_Collections_Generic_List_object__o *)0x0) {
      if (pSVar11 == (System_Object_array *)0x0) {
        if (0 < (pSVar22->fields)._size) {
          method_00 = (Il2CppClass *)
                      System_Collections_Generic_List<object>__get_Item(pSVar22,0,MethodInfo_CustomLogicBaseAst_get_Item);
          if (method_00 != (Il2CppClass *)0x0) {
            pvVar2 = (method_00->_1).image;
            bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
            if ((*(byte *)((long)pvVar2 + 0x130) < bVar1) ||
               (*(Il2CppClass **)(*(long *)((long)pvVar2 + 200) + -8 + (ulong)bVar1 * 8) !=
                TypeInfo_CustomLogicBaseExpressionAst)) {
LAB_03f680f8:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(method_00);
            }
          }
          CustomLogic_CustomLogicEvaluator__EvaluateExpression
                    (__this,classInstance,localVariables,
                     (CustomLogic_CustomLogicBaseExpressionAst_o *)method_00,method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03f67a60:
        pCVar19 = expression[1].klass;
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType
                          ((System_String_o *)pCVar19,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          pCVar5 = (__this->fields)._start;
          if (pCVar5 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pCVar5->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar4,(Il2CppObject *)expression[1].klass,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar7 == '\0') {
            if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               localVariables,(Il2CppObject *)expression[1].klass,MethodInfo_Boolean_ContainsKey);
            if (((char)bVar7 != '\0') &&
               (pIVar17 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     localVariables,(Il2CppObject *)expression[1].klass,MethodInfo_Object_get_Item
                                    ), pIVar17 != (Il2CppObject *)0x0)) {
              pIVar6 = pIVar17->klass;
              bVar1 = (TypeInfo_CLMethodBinding->_2).naturalAligment;
              method_00 = TypeInfo_CLMethodBinding;
              if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
                 ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CLMethodBinding)) {
                pIVar17 = (Il2CppObject *)
                          (*pIVar6->vtable[4].methodPtr)
                                    (pIVar17,classInstance,pSVar11,pIVar6->vtable[4].method);
                if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                Unity_VisualScripting_ArrayPool<object>__Free(pSVar11,MethodInfo_Void_Free);
                return pIVar17;
              }
            }
            userMethod = (CustomLogic_UserMethod_o *)
                         System_Collections_Generic_Dictionary<object__object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    localVariables,(Il2CppObject *)expression[1].klass,MethodInfo_Object_get_Item)
            ;
            if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
              if (((userMethod->klass->_2).naturalAligment < *(byte *)(TypeInfo_UserMethod + 0x130)) ||
                 (method_00 = (Il2CppClass *)(userMethod->klass->_2).typeHierarchy,
                 *(long *)((long)method_00 + (ulong)*(byte *)(TypeInfo_UserMethod + 0x130) * 8 + -8) !=
                 TypeInfo_UserMethod)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(userMethod);
              }
            }
            pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                                (__this,userMethod,pSVar11,(MethodInfo *)method_00);
            if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Unity_VisualScripting_ArrayPool<object>__Free(pSVar11,MethodInfo_Void_Free);
            return pIVar17;
          }
        }
        if (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          pCVar10 = CustomLogic_CustomLogicEvaluator__CreateClassInstance
                              (__this,(System_String_o *)expression[1].klass,pSVar11,1,
                               (System_Nullable_CustomLogicSourceType__o)
                               (classInstance->fields)._Namespace_k__BackingField.fields,in_R9);
          if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Unity_VisualScripting_ArrayPool<object>__Free(pSVar11,MethodInfo_Void_Free);
          return (Il2CppObject *)pCVar10;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      ppIVar21 = pSVar11->m_Items;
      uVar20 = 0;
      do {
        if ((long)(pSVar22->fields)._size <= (long)uVar20) goto LAB_03f67a60;
        method_00 = (Il2CppClass *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar22,(int32_t)uVar20,MethodInfo_CustomLogicBaseAst_get_Item);
        if (method_00 != (Il2CppClass *)0x0) {
          pvVar2 = (method_00->_1).image;
          bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
          if ((*(byte *)((long)pvVar2 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)((long)pvVar2 + 200) + -8 + (ulong)bVar1 * 8) !=
              TypeInfo_CustomLogicBaseExpressionAst)) goto LAB_03f680f8;
        }
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)method_00,method);
        if ((pIVar17 != (Il2CppObject *)0x0) &&
           (lVar12 = il2cpp_runtime_glue(pIVar17,(((pSVar11->obj).klass)->_1).element_class),
           lVar12 == 0)) {
          uVar16 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar16,0);
        }
        if ((uint)pSVar11->max_length <= uVar20) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *ppIVar21 = pIVar17;
        il2cpp_runtime_glue(ppIVar21);
        uVar20 = uVar20 + 1;
        pSVar22 = expression[1].monitor;
        ppIVar21 = ppIVar21 + 1;
      } while (pSVar22 != (System_Collections_Generic_List_object__o *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  case 6:
    bVar1 = (TypeInfo_CustomLogicFieldExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicFieldExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    pCVar10 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,expression[1].monitor,method);
    if (pCVar10 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if (((pCVar10->klass->_2).naturalAligment < bVar1) ||
       ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pCVar10);
    }
    pIVar17 = CustomLogic_CustomLogicClassInstance__GetVariable
                        (pCVar10,(System_String_o *)expression[1].klass,(MethodInfo *)0x0);
    if (pIVar17 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_CLPropertyBinding->_2).naturalAligment;
      if ((pIVar17->klass->_2).naturalAligment < bVar1) {
        return pIVar17;
      }
      if ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CLPropertyBinding) {
        return pIVar17;
      }
      if (pIVar17 != (Il2CppObject *)0x0) {
        pIVar17 = (Il2CppObject *)
                  (*pIVar17->klass->vtable[5].methodPtr)
                            (pIVar17,pCVar10,pIVar17->klass->vtable[5].method);
        return pIVar17;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  default:
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)0x0;
    break;
  case 7:
    bVar1 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicPrimitiveExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)expression[1].klass;
    break;
  case 8:
    bVar1 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicUnaryExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    if (expression[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar3 = *(long **)((long)expression[1].monitor + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(*plVar3 + 0x40) != *(long *)(TypeInfo_CustomLogicSymbol + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    piVar9 = (int32_t *)il2cpp_glue_022c7330();
    bVar1 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicUnaryExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    iVar8 = *piVar9;
    pCVar19 = expression[1].klass;
    pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar19,method);
    classInstance =
         (CustomLogic_CustomLogicClassInstance_o *)
         CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression
                   (__this,iVar8,pIVar17,(MethodInfo *)pCVar19);
    break;
  case 9:
    bVar1 = (TypeInfo_CustomLogicBinopExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicBinopExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    if (expression[1].fields == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar3 = *(long **)((long)expression[1].fields + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(*plVar3 + 0x40) != *(long *)(TypeInfo_CustomLogicSymbol + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    piVar13 = (int *)il2cpp_glue_022c7330();
    symbol = *piVar13;
    if (symbol == 0x16) {
      pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)expression[1].klass,method)
      ;
      if (pIVar17 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar17);
      }
      pcVar14 = (char *)il2cpp_glue_022c7330(pIVar17);
      if (*pcVar14 == '\0') {
        local_60[0] = (System_Nullable_CustomLogicSourceType__Fields)
                      ((ulong)local_60[0] & 0xffffffffffffff00);
        classInstance =
             (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_glue(DAT_05711048,local_60);
      }
      else {
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,expression[1].monitor,method);
        if (pIVar17 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar17);
        }
        puVar15 = (undefined1 *)il2cpp_glue_022c7330(pIVar17);
        local_60[0].hasValue._0_1_ = *puVar15;
        classInstance =
             (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_glue(DAT_05711048,local_60);
      }
    }
    else if (symbol == 0x17) {
      pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)expression[1].klass,method)
      ;
      if (pIVar17 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar17);
      }
      pcVar14 = (char *)il2cpp_glue_022c7330(pIVar17);
      if (*pcVar14 == '\0') {
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,expression[1].monitor,method);
        if (pIVar17 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar17);
        }
        puVar15 = (undefined1 *)il2cpp_glue_022c7330(pIVar17);
        local_60[0].hasValue._0_1_ = *puVar15;
        classInstance =
             (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_glue(DAT_05711048,local_60);
      }
      else {
        local_60[0].hasValue._0_1_ = 1;
        classInstance =
             (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_glue(DAT_05711048,local_60);
      }
    }
    else {
      pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)expression[1].klass,method)
      ;
      right = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,expression[1].monitor,method);
      classInstance =
           (CustomLogic_CustomLogicClassInstance_o *)
           CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
                     (__this,symbol,pIVar17,right,method);
    }
    break;
  case 10:
    bVar1 = (TypeInfo_CustomLogicNotExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicNotExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)expression[1].klass,method);
    if (pIVar17 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pIVar17->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar17);
    }
    puVar15 = (undefined1 *)il2cpp_glue_022c7330(pIVar17);
    local_60[0] = (System_Nullable_CustomLogicSourceType__Fields)
                  (CONCAT71(local_60[0]._1_7_,*puVar15) ^ 1);
    classInstance =
         (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_glue(DAT_05711048,local_60);
    break;
  case 0xb:
    bVar1 = (TypeInfo_CustomLogicVariableExpressionAst->_2).naturalAligment;
    if (((expression->klass->_2).naturalAligment < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVariableExpressionAst)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(expression);
    }
    pCVar19 = expression[1].klass;
    bVar7 = System_String__op_Equality((System_String_o *)pCVar19,"self",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._staticClasses;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar4,(Il2CppObject *)pCVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar7 == '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._namespacedStaticClasses;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar4,(Il2CppObject *)pCVar19,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar7 == '\0') {
          if (localVariables != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            pIVar17 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 localVariables,(Il2CppObject *)pCVar19,MethodInfo_Object_get_Item);
            return pIVar17;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_48 = (classInstance->fields)._Namespace_k__BackingField.fields;
      if ((char)local_48.hasValue != '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._namespacedStaticClasses;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar4,(Il2CppObject *)pCVar19,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar7 != '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._namespacedStaticClasses;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar4,(Il2CppObject *)pCVar19,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_C);
          local_48 = (classInstance->fields)._Namespace_k__BackingField.fields;
          iVar8 = System_Nullable<Int32Enum>__get_Value
                            ((System_Nullable_Int32Enum__o)&local_48,MethodInfo_CustomLogicSourceType_get_Value);
          if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar7 = System_Collections_Generic_Dictionary<Int32Enum__object>__TryGetValue
                            (__this_00,iVar8,(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
          if ((char)bVar7 != '\0') {
            return (Il2CppObject *)local_38;
          }
        }
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._staticClasses;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar4,(Il2CppObject *)pCVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar7 == '\0') {
        local_60[0] = (classInstance->fields)._Namespace_k__BackingField.fields;
        uVar16 = il2cpp_init_method_metadata(&TypeInfo_CustomLogicSourceType);
        pIVar17 = (Il2CppObject *)il2cpp_runtime_glue(uVar16,local_60);
        pSVar18 = (System_String_o *)il2cpp_init_method_metadata(&"Static class {0} not found for namespace {1}");
        pSVar18 = System_String__Format(pSVar18,(Il2CppObject *)pCVar19,pIVar17,(MethodInfo *)0x0);
        uVar16 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar16);
        System_Exception___ctor(__this_01,pSVar18,(MethodInfo *)0x0);
        uVar16 = il2cpp_init_method_metadata(&MethodInfo_Object_EvaluateExpression);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_01,uVar16);
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._staticClasses;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      classInstance =
           (CustomLogic_CustomLogicClassInstance_o *)
           System_Collections_Generic_Dictionary<object__object>__get_Item
                     (pSVar4,(Il2CppObject *)pCVar19,MethodInfo_CustomLogicClassInstance_get_Item);
    }
  }
  return (Il2CppObject *)(CustomLogic_CustomLogicBaseExpressionAst_c *)classInstance;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateUnaryExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression (CustomLogic_CustomLogicEvaluator_o* __this, int32_t symbol, Il2CppObject* next, const MethodInfo* method);
// 0x3f6b1a0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t symbol,Il2CppObject *next,
          MethodInfo *method)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  undefined8 local_10;
  
  if (symbol != 0x1e) {
    if ((symbol == 0x1f) && (next != (Il2CppObject *)0x0)) {
      pIVar5 = next->klass;
      if (pIVar5 == DAT_05711068) {
        piVar1 = (int *)il2cpp_glue_022c7330(next);
        local_10 = CONCAT44(local_10._4_4_,-*piVar1);
        pIVar5 = DAT_05711068;
LAB_03f6b232:
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(pIVar5,&local_10);
        return pIVar4;
      }
      if (pIVar5 == DAT_05711098) {
        puVar2 = (undefined4 *)il2cpp_glue_022c7330(next);
        local_10 = CONCAT44(local_10._4_4_,*puVar2) ^ 0x80000000;
        pIVar5 = DAT_05711098;
        goto LAB_03f6b232;
      }
      if (pIVar5 == DAT_057110a0) {
        puVar3 = (ulong *)il2cpp_glue_022c7330(next);
        local_10 = *puVar3 ^ 0x8000000000000000;
        pIVar5 = DAT_057110a0;
        goto LAB_03f6b232;
      }
    }
    next = (Il2CppObject *)0x0;
  }
  return next;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBinopExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression (CustomLogic_CustomLogicEvaluator_o* __this, int32_t symbol, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f6b250

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t symbol,Il2CppObject *left,
          Il2CppObject *right,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  int *piVar5;
  MethodInfo *method_00;
  undefined4 *puVar6;
  Il2CppClass *pIVar7;
  float fVar8;
  float fVar9;
  undefined1 local_28 [3];
  bool bStack_25;
  undefined4 local_24;
  
  if (DAT_05703edb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703edb = '\x01';
  }
  if (symbol - 0x18U < 0xb) {
    method_00 = (MethodInfo *)
                ((long)&switchD_03f6b298::switchdataD_00d81e44 +
                (long)(int)(&switchD_03f6b298::switchdataD_00d81e44)[symbol - 0x18U]);
    switch(symbol) {
    case 0x18:
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar8 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar9 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      local_24._0_2_ = CONCAT11(fVar8 < fVar9,(undefined1)local_24);
      puVar6 = (undefined4 *)((long)&local_24 + 1);
      break;
    case 0x19:
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar8 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar9 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      local_24 = CONCAT31(local_24._1_3_,fVar9 < fVar8);
      puVar6 = &local_24;
      break;
    case 0x1a:
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar8 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar9 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      _local_28 = (float)CONCAT13(fVar8 <= fVar9,local_28);
      puVar6 = (undefined4 *)(local_28 + 3);
      break;
    case 0x1b:
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar8 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar9 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      local_28 = (undefined1  [3])CONCAT12(fVar9 <= fVar8,local_28._0_2_);
      puVar6 = (undefined4 *)(local_28 + 2);
      break;
    case 0x1c:
      bVar3 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this,left,right,method_00);
      local_24 = CONCAT13((char)bVar3,(undefined3)local_24);
      puVar6 = (undefined4 *)((long)&local_24 + 3);
      break;
    case 0x1d:
      bVar3 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this,left,right,method_00);
      local_24 = CONCAT13(local_24._3_1_,CONCAT12((char)bVar3,(undefined2)local_24)) ^ 0x10000;
      puVar6 = (undefined4 *)((long)&local_24 + 2);
      break;
    case 0x1e:
      pIVar4 = CustomLogic_CustomLogicEvaluator__AddValues(__this,left,right,method_00);
      return pIVar4;
    case 0x1f:
      pIVar4 = CustomLogic_CustomLogicEvaluator__SubtractValues(__this,left,right,method_00);
      return pIVar4;
    case 0x20:
      pIVar4 = CustomLogic_CustomLogicEvaluator__MultiplyValues(__this,left,right,method_00);
      return pIVar4;
    case 0x21:
      pIVar4 = CustomLogic_CustomLogicEvaluator__DivideValues(__this,left,right,method_00);
      return pIVar4;
    case 0x22:
      if (DAT_05703ee1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
        il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
        DAT_05703ee1 = '\x01';
      }
      if (left != (Il2CppObject *)0x0) {
        pIVar7 = left->klass;
        if (((right != (Il2CppObject *)0x0) && (pIVar7 == DAT_05711068)) &&
           (right->klass == DAT_05711068)) {
          piVar5 = (int *)il2cpp_glue_022c7330(left);
          if ((right->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(right);
          }
          iVar2 = *piVar5;
          piVar5 = (int *)il2cpp_glue_022c7330(right);
          local_24 = iVar2 % *piVar5;
          puVar6 = &local_24;
          pIVar7 = DAT_05711068;
          goto LAB_03f6b5f2;
        }
        bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
        if ((bVar1 <= (pIVar7->_2).naturalAligment) &&
           ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto LAB_03f6b573;
      }
      if (right != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
        if ((bVar1 <= (right->klass->_2).naturalAligment) &&
           ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
LAB_03f6b573:
          pIVar4 = CustomLogic_CustomLogicEvaluator__ClassMathOperation();
          return pIVar4;
        }
      }
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar8 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar9 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      _local_28 = fmodf(fVar8,fVar9,(MethodInfo *)right);
      puVar6 = (undefined4 *)local_28;
      pIVar7 = DAT_05711098;
LAB_03f6b5f2:
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(pIVar7,puVar6);
      return pIVar4;
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,puVar6);
  }
  else {
    pIVar4 = (Il2CppObject *)0x0;
  }
  return pIVar4;
}


// CustomLogic.CustomLogicEvaluator$$ClassMathOperation
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ClassMathOperation (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, System_String_o* method, const MethodInfo* method);
// 0x3f6ba50

Il2CppObject * CustomLogic_CustomLogicEvaluator__ClassMathOperation(void)

{
  byte bVar1;
  bool_conflict bVar2;
  System_Object_array *parameterValues;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  System_String_o *pSVar6;
  System_String_o *str0;
  System_String_o *str2;
  System_Exception_o *__this;
  System_String_o *in_RCX;
  CustomLogic_CustomLogicClassInstance_o *in_RDX;
  CustomLogic_CustomLogicClassInstance_o *in_RSI;
  CustomLogic_CustomLogicEvaluator_o *in_RDI;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  
  if (DAT_05703edc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Free);
    il2cpp_init_method_metadata(&MethodInfo_Object___New);
    il2cpp_init_method_metadata(&TypeInfo_ArrayPool_object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    DAT_05703edc = '\x01';
  }
  if (in_RSI == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
LAB_03f6bad9:
    if (in_RDX == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto LAB_03f6bc05;
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if (((((Il2CppClass *)in_RDX->klass)->_2).naturalAligment < bVar1) ||
       (__this_00 = in_RDX,
       (((Il2CppClass *)in_RDX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if (((((Il2CppClass *)in_RSI->klass)->_2).naturalAligment < bVar1) ||
       (__this_00 = in_RSI,
       (((Il2CppClass *)in_RSI->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance))
    goto LAB_03f6bad9;
  }
  bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_00,in_RCX,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    il2cpp_glue_01f2f1a0(__this_00);
    pSVar6 = (System_String_o *)
             (*(__this_00->klass->vtable)._4_unknown.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._4_unknown.method);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" method found in class ");
    pSVar6 = System_String__Concat(str0,in_RCX,str2,pSVar6,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
    System_Exception___ctor(__this,pSVar6,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object_ClassMathOperation);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar5);
  }
  if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  parameterValues = Unity_VisualScripting_ArrayPool<object>__New(2,MethodInfo_Object___New);
  if (parameterValues == (System_Object_array *)0x0) {
LAB_03f6bc05:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (in_RSI != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    lVar3 = il2cpp_runtime_glue();
    if (lVar3 == 0) goto LAB_03f6bc17;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)in_RSI;
    il2cpp_runtime_glue(parameterValues->m_Items);
    if (in_RDX != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      lVar3 = il2cpp_runtime_glue();
      if (lVar3 == 0) {
LAB_03f6bc17:
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = (Il2CppObject *)in_RDX;
      il2cpp_runtime_glue(parameterValues->m_Items + 1);
      pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (in_RDI,__this_00,in_RCX,parameterValues,
                          *(int32_t *)&(in_RDI->fields)._CapturedErrors_k__BackingField,in_R9);
      Unity_VisualScripting_ArrayPool<object>__Free(parameterValues,MethodInfo_Void_Free);
      return pIVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$AddValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__AddValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f69e40

Il2CppObject *
CustomLogic_CustomLogicEvaluator__AddValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  float *pfVar7;
  Il2CppClass *pIVar8;
  bool bVar9;
  float fVar10;
  float local_28;
  float local_24;
  
  if (DAT_05703edd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata();
    DAT_05703edd = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
    bVar9 = false;
  }
  else {
    if (((right != (Il2CppObject *)0x0) && (left->klass == DAT_05711068)) &&
       (right->klass == DAT_05711068)) {
      piVar4 = (int *)il2cpp_glue_022c7330(left);
      if ((right->klass->_1).element_class != (DAT_05711068->_1).element_class) goto LAB_03f6a07a;
      iVar2 = *piVar4;
      piVar4 = (int *)il2cpp_glue_022c7330(right);
      local_24 = (float)(iVar2 + *piVar4);
      pfVar7 = &local_24;
      pIVar8 = DAT_05711068;
      goto LAB_03f6a029;
    }
    bVar9 = left->klass == DAT_057110b0;
  }
  bVar3 = bVar9;
  if (right != (Il2CppObject *)0x0) {
    bVar3 = (bool)(right->klass == DAT_057110b0 | bVar9);
  }
  if (bVar3) {
    if (bVar9) {
      if ((left != (Il2CppObject *)0x0) && (left->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(left);
      }
      if (right == (Il2CppObject *)0x0) {
        right = (Il2CppObject *)0x0;
      }
      else {
        right = (Il2CppObject *)
                (*right->klass->vtable[3].methodPtr)(right,right->klass->vtable[3].method);
      }
    }
    else {
      if (left == (Il2CppObject *)0x0) {
        left = (Il2CppObject *)0x0;
      }
      else {
        left = (Il2CppObject *)
               (*left->klass->vtable[3].methodPtr)(left,left->klass->vtable[3].method);
      }
      if ((right != (Il2CppObject *)0x0) && (right->klass != DAT_057110b0)) {
LAB_03f6a07a:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(right);
      }
    }
    pSVar6 = System_String__Concat
                       ((System_String_o *)left,(System_String_o *)right,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar6;
  }
  if (left != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (left->klass->_2).naturalAligment) &&
       ((left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto LAB_03f6a03a;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (right->klass->_2).naturalAligment) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
LAB_03f6a03a:
      pIVar5 = CustomLogic_CustomLogicEvaluator__ClassMathOperation();
      return pIVar5;
    }
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar10 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_28 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_28 = local_28 + fVar10;
  pfVar7 = &local_28;
  pIVar8 = DAT_05711098;
LAB_03f6a029:
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(pIVar8,pfVar7);
  return pIVar5;
}


// CustomLogic.CustomLogicEvaluator$$SubtractValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__SubtractValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f6a090

Il2CppObject *
CustomLogic_CustomLogicEvaluator__SubtractValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *pfVar5;
  Il2CppClass *pIVar6;
  float fVar7;
  float local_28;
  float local_24;
  
  if (DAT_05703ede == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703ede = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar6 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar6 == DAT_05711068)) &&
       (right->klass == DAT_05711068)) {
      piVar4 = (int *)il2cpp_glue_022c7330(left);
      if ((right->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(right);
      }
      iVar2 = *piVar4;
      piVar4 = (int *)il2cpp_glue_022c7330(right);
      local_24 = (float)(iVar2 - *piVar4);
      pfVar5 = &local_24;
      pIVar6 = DAT_05711068;
      goto LAB_03f6a1be;
    }
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto LAB_03f6a143;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (right->klass->_2).naturalAligment) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
LAB_03f6a143:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation();
      return pIVar3;
    }
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_28 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_28 = fVar7 - local_28;
  pfVar5 = &local_28;
  pIVar6 = DAT_05711098;
LAB_03f6a1be:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(pIVar6,pfVar5);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$MultiplyValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__MultiplyValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f6a210

Il2CppObject *
CustomLogic_CustomLogicEvaluator__MultiplyValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *pfVar5;
  Il2CppClass *pIVar6;
  float fVar7;
  float local_28;
  float local_24;
  
  if (DAT_05703edf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703edf = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar6 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar6 == DAT_05711068)) &&
       (right->klass == DAT_05711068)) {
      piVar4 = (int *)il2cpp_glue_022c7330(left);
      if ((right->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(right);
      }
      iVar2 = *piVar4;
      piVar4 = (int *)il2cpp_glue_022c7330(right);
      local_24 = (float)(iVar2 * *piVar4);
      pfVar5 = &local_24;
      pIVar6 = DAT_05711068;
      goto LAB_03f6a33a;
    }
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto LAB_03f6a2c3;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (right->klass->_2).naturalAligment) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
LAB_03f6a2c3:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation();
      return pIVar3;
    }
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_28 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_28 = local_28 * fVar7;
  pfVar5 = &local_28;
  pIVar6 = DAT_05711098;
LAB_03f6a33a:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(pIVar6,pfVar5);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$DivideValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__DivideValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f6a390

Il2CppObject *
CustomLogic_CustomLogicEvaluator__DivideValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *pfVar5;
  Il2CppClass *pIVar6;
  float fVar7;
  float local_28;
  float local_24;
  
  if (DAT_05703ee0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703ee0 = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar6 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar6 == DAT_05711068)) &&
       (right->klass == DAT_05711068)) {
      piVar4 = (int *)il2cpp_glue_022c7330(left);
      if ((right->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(right);
      }
      iVar2 = *piVar4;
      piVar4 = (int *)il2cpp_glue_022c7330(right);
      local_24 = (float)(iVar2 / *piVar4);
      pfVar5 = &local_24;
      pIVar6 = DAT_05711068;
      goto LAB_03f6a4be;
    }
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto LAB_03f6a443;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (right->klass->_2).naturalAligment) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
LAB_03f6a443:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation();
      return pIVar3;
    }
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_28 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_28 = fVar7 / local_28;
  pfVar5 = &local_28;
  pIVar6 = DAT_05711098;
LAB_03f6a4be:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(pIVar6,pfVar5);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$ModuloValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ModuloValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f6b4c0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ModuloValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *pfVar5;
  Il2CppClass *pIVar6;
  float x;
  float y;
  float fStack_28;
  float fStack_24;
  
  if (DAT_05703ee1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703ee1 = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar6 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar6 == DAT_05711068)) &&
       (right->klass == DAT_05711068)) {
      piVar4 = (int *)il2cpp_glue_022c7330(left);
      if ((right->klass->_1).element_class != (DAT_05711068->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(right);
      }
      iVar2 = *piVar4;
      piVar4 = (int *)il2cpp_glue_022c7330(right);
      fStack_24 = (float)(iVar2 % *piVar4);
      pfVar5 = &fStack_24;
      pIVar6 = DAT_05711068;
      goto LAB_03f6b5f2;
    }
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto LAB_03f6b573;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (right->klass->_2).naturalAligment) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
LAB_03f6b573:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation();
      return pIVar3;
    }
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  y = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  fStack_28 = fmodf(x,y,(MethodInfo *)right);
  pfVar5 = &fStack_28;
  pIVar6 = DAT_05711098;
LAB_03f6b5f2:
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(pIVar6,pfVar5);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$CheckEquals
// il2cpp: bool CustomLogic_CustomLogicEvaluator__CheckEquals (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x3f6b650

bool_conflict
CustomLogic_CustomLogicEvaluator__CheckEquals
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool bVar2;
  bool_conflict bVar3;
  uint uVar4;
  uint uVar5;
  System_Object_array *parameterValues;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  System_String_o *methodName;
  int32_t callerLineNumber;
  MethodInfo *in_R9;
  undefined8 unaff_R12;
  
  if (DAT_05703ee2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Free);
    il2cpp_init_method_metadata(&MethodInfo_Object___New);
    il2cpp_init_method_metadata(&TypeInfo_ArrayPool_object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstance);
    DAT_05703ee2 = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
    uVar4 = 0;
    uVar8 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
    if (right == (Il2CppObject *)0x0) {
      return (bool_conflict)uVar8;
    }
LAB_03f6b86a:
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((bVar1 <= (right->klass->_2).naturalAligment) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) {
      bVar2 = false;
      uVar5 = CustomLogic_CustomLogicClassInstance__HasVariable
                        ((CustomLogic_CustomLogicClassInstance_o *)right,(__this->fields).div,
                         (MethodInfo *)0x0);
      uVar5 = uVar5 & 0xff;
      goto joined_r0x03f6ba12;
    }
    bVar2 = false;
    uVar5 = 0;
    if (uVar4 == 0) goto LAB_03f6b6fe;
LAB_03f6b8a8:
    if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    parameterValues = Unity_VisualScripting_ArrayPool<object>__New(2,MethodInfo_Object___New);
    if (parameterValues == (System_Object_array *)0x0) goto LAB_03f6ba22;
    if ((left != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(left,(((parameterValues->obj).klass)->_1).element_class),
       lVar6 == 0)) {
LAB_03f6ba2f:
      uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar8,0);
    }
    if ((int)parameterValues->max_length == 0) {
LAB_03f6ba1d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = left;
    il2cpp_runtime_glue(parameterValues->m_Items,left);
    if ((!bVar2) &&
       (lVar6 = il2cpp_runtime_glue(right,(((parameterValues->obj).klass)->_1).element_class),
       lVar6 == 0)) goto LAB_03f6ba2f;
    if ((uint)parameterValues->max_length < 2) goto LAB_03f6ba1d;
    parameterValues->m_Items[1] = right;
    il2cpp_runtime_glue(parameterValues->m_Items + 1,right);
    methodName = (__this->fields).div;
    callerLineNumber = *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField;
    if ((char)uVar8 == '\0') {
      bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
      if (((left->klass->_2).naturalAligment < bVar1) ||
         ((left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) goto LAB_03f6ba27;
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    uVar8 = 0;
    if (((left->klass->_2).naturalAligment < bVar1) ||
       ((left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) {
      uVar4 = 0;
    }
    else {
      uVar4 = CustomLogic_CustomLogicClassInstance__HasVariable
                        ((CustomLogic_CustomLogicClassInstance_o *)left,(__this->fields).div,
                         (MethodInfo *)0x0);
      uVar4 = uVar4 & 0xff;
    }
    if (right != (Il2CppObject *)0x0) goto LAB_03f6b86a;
    bVar2 = true;
    uVar5 = 0;
joined_r0x03f6ba12:
    if (uVar4 != 0) goto LAB_03f6b8a8;
LAB_03f6b6fe:
    if (uVar5 == 0) {
      if (left == (Il2CppObject *)0x0) {
        return 0;
      }
      if (bVar2) {
        return 0;
      }
      vtable_dispatch = left->klass->vtable[0].methodPtr;
      bVar3 = (*vtable_dispatch)
                        (left,right,left->klass->vtable[0].method,vtable_dispatch);
      return bVar3;
    }
    if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    parameterValues = Unity_VisualScripting_ArrayPool<object>__New(2,MethodInfo_Object___New);
    if (parameterValues == (System_Object_array *)0x0) goto LAB_03f6ba22;
    if ((left != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(left,(((parameterValues->obj).klass)->_1).element_class),
       lVar6 == 0)) goto LAB_03f6ba2f;
    if ((int)parameterValues->max_length == 0) goto LAB_03f6ba1d;
    parameterValues->m_Items[0] = left;
    il2cpp_runtime_glue(parameterValues->m_Items,left);
    if ((!bVar2) &&
       (lVar6 = il2cpp_runtime_glue(right,(((parameterValues->obj).klass)->_1).element_class),
       lVar6 == 0)) goto LAB_03f6ba2f;
    if ((uint)parameterValues->max_length < 2) goto LAB_03f6ba1d;
    parameterValues->m_Items[1] = right;
    il2cpp_runtime_glue(parameterValues->m_Items + 1,right);
    methodName = (__this->fields).div;
    callerLineNumber = *(int32_t *)&(__this->fields)._CapturedErrors_k__BackingField;
    left = right;
    if (!bVar2) {
      bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
      if (((right->klass->_2).naturalAligment < bVar1) ||
         ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicClassInstance)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(right);
      }
    }
  }
  left = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                   (__this,(CustomLogic_CustomLogicClassInstance_o *)left,methodName,parameterValues
                    ,callerLineNumber,in_R9);
  Unity_VisualScripting_ArrayPool<object>__Free(parameterValues,MethodInfo_Void_Free);
  if (left != (Il2CppObject *)0x0) {
    if ((left->klass->_1).element_class == *(Il2CppClass **)(DAT_05711048 + 0x40)) {
      pcVar7 = (char *)il2cpp_glue_022c7330(left);
      return (bool_conflict)CONCAT71((int7)((ulong)uVar8 >> 8),*pcVar7 != '\0');
    }
LAB_03f6ba27:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(left);
  }
LAB_03f6ba22:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<bool>
// il2cpp: bool CustomLogic_CustomLogicEvaluator__ConvertTo_bool_ (Il2CppObject* obj, const MethodInfo_24AB1E0* method);
// 0x25ab1e0

bool_conflict
CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(Il2CppObject *obj,MethodInfo_24AB1E0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  MethodInfo_24AB1E0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  undefined1 *puVar6;
  Il2CppClass *pIVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24AB1E0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_24AB1E0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,(System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,*(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).field_0x6d;
      goto joined_r0x025ab327;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar8 = &local_30;
    puVar9 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar8 = &local_2c;
    puVar9 = &DAT_05711068;
  }
  obj = (Il2CppObject *)il2cpp_runtime_glue(*puVar9,pfVar8);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).field_0x6d;
joined_r0x025ab327:
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar7);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar7->_1).element_class) {
      puVar6 = (undefined1 *)il2cpp_glue_022c7330(obj);
      return (bool_conflict)CONCAT71((int7)((ulong)puVar6 >> 8),*puVar6);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(obj,pIVar7);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<double>
// il2cpp: double CustomLogic_CustomLogicEvaluator__ConvertTo_double_ (Il2CppObject* obj, const MethodInfo_24AB3D0* method);
// 0x25ab3d0

double CustomLogic_CustomLogicEvaluator__ConvertTo<double>
                 (Il2CppObject *obj,MethodInfo_24AB3D0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  MethodInfo_24AB3D0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  double *pdVar6;
  Il2CppClass *pIVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24AB3D0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_24AB3D0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,(System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,*(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).field_0x6d;
      goto joined_r0x025ab517;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar8 = &local_30;
    puVar9 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar8 = &local_2c;
    puVar9 = &DAT_05711068;
  }
  obj = (Il2CppObject *)il2cpp_runtime_glue(*puVar9,pfVar8);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).field_0x6d;
joined_r0x025ab517:
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar7);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar7->_1).element_class) {
      pdVar6 = (double *)il2cpp_glue_022c7330(obj);
      return *pdVar6;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(obj,pIVar7);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<int>
// il2cpp: int32_t CustomLogic_CustomLogicEvaluator__ConvertTo_int_ (Il2CppObject* obj, const MethodInfo_24AB5C0* method);
// 0x25ab5c0

int32_t CustomLogic_CustomLogicEvaluator__ConvertTo<int>
                  (Il2CppObject *obj,MethodInfo_24AB5C0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  MethodInfo_24AB5C0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  int32_t *piVar6;
  Il2CppClass *pIVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24AB5C0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_24AB5C0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,(System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,*(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).field_0x6d;
      goto joined_r0x025ab707;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar8 = &local_30;
    puVar9 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar8 = &local_2c;
    puVar9 = &DAT_05711068;
  }
  obj = (Il2CppObject *)il2cpp_runtime_glue(*puVar9,pfVar8);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).field_0x6d;
joined_r0x025ab707:
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar7);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar7->_1).element_class) {
      piVar6 = (int32_t *)il2cpp_glue_022c7330(obj);
      return *piVar6;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(obj,pIVar7);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<object>
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ConvertTo_object_ (Il2CppObject* obj, const MethodInfo_24AB7B0* method);
// 0x25ab7b0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ConvertTo<object>(Il2CppObject *obj,MethodInfo_24AB7B0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  MethodInfo_24AB7B0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24AB7B0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_24AB7B0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,(System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,*(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).field_0x6d;
      goto joined_r0x025ab8f7;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar8 = &local_30;
    puVar9 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar8 = &local_2c;
    puVar9 = &DAT_05711068;
  }
  obj = (Il2CppObject *)il2cpp_runtime_glue(*puVar9,pfVar8);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).field_0x6d;
joined_r0x025ab8f7:
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar6 = (Il2CppObject *)0x0;
  }
  else {
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(obj,pIVar7);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(obj,pIVar7);
    }
  }
  return pIVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<float>
// il2cpp: float CustomLogic_CustomLogicEvaluator__ConvertTo_float_ (Il2CppObject* obj, const MethodInfo_24AB990* method);
// 0x25ab990

float CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                (Il2CppObject *obj,MethodInfo_24AB990 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  MethodInfo_24AB990_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  float *pfVar6;
  Il2CppClass *pIVar7;
  undefined8 *puVar8;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24AB990_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_24AB990_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,(System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,*(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).field_0x6d;
      goto joined_r0x025abad7;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar6 = &local_30;
    puVar8 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar6 = &local_2c;
    puVar8 = &DAT_05711068;
  }
  obj = (Il2CppObject *)il2cpp_runtime_glue(*puVar8,pfVar6);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).field_0x6d;
joined_r0x025abad7:
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar7);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar7->_1).element_class) {
      pfVar6 = (float *)il2cpp_glue_022c7330(obj);
      return *pfVar6;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(obj,pIVar7);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<Vector3>
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_ (Il2CppObject* obj, const MethodInfo_24ABB80* method);
// 0x25abb80

UnityEngine_Vector3_o
CustomLogic_CustomLogicEvaluator__ConvertTo<Vector3>(Il2CppObject *obj,MethodInfo_24ABB80 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  MethodInfo_24ABB80_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  UnityEngine_Vector3_Fields *pUVar6;
  Il2CppClass *pIVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24ABB80_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_24ABB80_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,(System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,*(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).field_0x6d;
      goto joined_r0x025abcc7;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar8 = &local_30;
    puVar9 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar8 = &local_2c;
    puVar9 = &DAT_05711068;
  }
  obj = (Il2CppObject *)il2cpp_runtime_glue(*puVar9,pfVar8);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).field_0x6d;
joined_r0x025abcc7:
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar7);
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class == (pIVar7->_1).element_class) {
      pUVar6 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330(obj);
      return (UnityEngine_Vector3_o)*pUVar6;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(obj,pIVar7);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o CustomLogic_CustomLogicEvaluator__ConvertTo___Il2CppFullySharedGenericType_ (Il2CppObject* obj, const MethodInfo_24ABD80* method);
// 0x25abd80

/* WARNING: Type propagation algorithm not settling */

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
CustomLogic_CustomLogicEvaluator__ConvertTo<__Il2CppFullySharedGenericType>
          (Il2CppObject *obj,MethodInfo_24ABD80 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  System_Type_o *pSVar3;
  undefined8 uVar4;
  long lVar5;
  ulong __n;
  bool_conflict bVar6;
  System_RuntimeTypeHandle_Fields *pSVar7;
  System_Type_o *pSVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  float *pfVar11;
  undefined8 *puVar12;
  MethodInfo_24ABD80 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar13;
  undefined8 uStack_60;
  ulong local_58;
  float local_50;
  float local_4c;
  Il2CppObject *local_48;
  MethodInfo_24ABD80 *local_40;
  long local_38;
  
  pSVar7 = *(System_RuntimeTypeHandle_Fields **)(in_RDX + 0x38);
  local_48 = obj;
  if (pSVar7 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_60 = 0x25abdb0;
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    uStack_60 = 0x25abdbc;
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    pSVar7 = *(System_RuntimeTypeHandle_Fields **)(in_RDX + 0x38);
    if (pSVar7 == (System_RuntimeTypeHandle_Fields *)0x0) {
      uStack_60 = 0x25abdcd;
      il2cpp_glue_022c2910();
      pSVar7 = *(System_RuntimeTypeHandle_Fields **)(in_RDX + 0x38);
    }
  }
  local_58 = (ulong)*(uint *)(pSVar7[1].value + 0xfc);
  lVar5 = -(local_58 + 0xf & 0xfffffffffffffff0);
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pSVar7->value;
  local_40 = method;
  local_38 = in_RDX;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abe18;
    il2cpp_init_class();
  }
  *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abe22;
  pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abe3e;
    il2cpp_init_class();
  }
  pSVar3 = (System_Type_o *)**(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8);
  *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abe56;
  bVar6 = System_Type__op_Equality(pSVar8,pSVar3,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    SVar2.fields.value =
         (System_RuntimeTypeHandle_Fields)
         (*(System_RuntimeTypeHandle_Fields **)(local_38 + 0x38))->value;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abeb6;
      il2cpp_init_class();
    }
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abec0;
    pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ReflectionExtensions + 0xe4) == 0) {
      *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abed5;
      il2cpp_init_class();
    }
    __dest = local_40;
    pSVar3 = *(System_Type_o **)(*(long *)(TypeInfo_ReflectionExtensions + 0xb8) + 8);
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abef6;
    bVar6 = System_Type__op_Equality(pSVar8,pSVar3,(MethodInfo *)0x0);
    pIVar9 = local_48;
    if ((char)bVar6 == '\0') {
      lVar10 = *(long *)(*(long *)(local_38 + 0x38) + 8);
      bVar1 = *(byte *)(lVar10 + 0x135);
      goto joined_r0x025abf98;
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abf1a;
      il2cpp_init_class();
    }
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abf24;
    local_4c = MiscExtensions__UnboxToFloat(pIVar9,(MethodInfo *)0x0);
    pfVar11 = &local_4c;
    puVar12 = &DAT_05711098;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abe72;
      il2cpp_init_class();
    }
    pIVar9 = local_48;
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abe7d;
    local_50 = (float)MiscExtensions__UnboxToInt(pIVar9,(MethodInfo *)0x0);
    pfVar11 = &local_50;
    puVar12 = &DAT_05711068;
    __dest = local_40;
  }
  uVar4 = *puVar12;
  *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abf3a;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(uVar4,pfVar11);
  lVar10 = *(long *)(*(long *)(local_38 + 0x38) + 8);
  bVar1 = *(byte *)(lVar10 + 0x135);
joined_r0x025abf98:
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abf56;
    lVar10 = il2cpp_glue_022c28b0(lVar10);
  }
  __n = local_58;
  *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abf68;
  __src = (void *)il2cpp_glue_02274a70(pIVar9,lVar10,(long)&local_58 + lVar5);
  *(undefined8 *)((long)&uStack_60 + lVar5) = 0x25abf76;
  UVar13.klass = memcpy(__dest,__src,__n);
  UVar13.monitor = extraout_RDX;
  return UVar13;
}


// CustomLogic.CustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x3f6bcc0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicEvaluator___cctor(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_05703ee3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object___Empty_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ee3 = '\x01';
  }
  lVar3 = MethodInfo_Object___Empty_Object;
  if (*(long *)(MethodInfo_Object___Empty_Object + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_Object___Empty_Object);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_Object___Empty_Object + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0(lVar3);
  }
  **(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8) = **(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicEvaluator + 0xb8));
  return;
}


