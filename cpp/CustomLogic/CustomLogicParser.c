// Type: CustomLogic.CustomLogicParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicParser.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicParser.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicParser$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicParser__get_Compiler (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x3f55f40

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicParser__get_Compiler
          (CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicParser$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicParser__set_Compiler (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x3f55f50

void CustomLogic_CustomLogicParser__set_Compiler
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicParser$$.ctor
// il2cpp: void CustomLogic_CustomLogicParser___ctor (CustomLogic_CustomLogicParser_o* __this, System_Collections_Generic_List_CustomLogicToken__o* tokens, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x3f55f60

void CustomLogic_CustomLogicParser___ctor
               (CustomLogic_CustomLogicParser_o *__this,
               System_Collections_Generic_List_CustomLogicToken__o *tokens,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (DAT_05703e96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicToken);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicToken);
    il2cpp_init_method_metadata(&"");
    DAT_05703e96 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicToken__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicToken);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicToken);
  (__this->fields)._tokens = __this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  (__this->fields).Error = "";
  il2cpp_runtime_glue(&(__this->fields).Error);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._tokens = tokens;
  il2cpp_runtime_glue(&__this->fields,tokens);
  (__this->fields)._Compiler_k__BackingField = compiler;
  il2cpp_runtime_glue(&(__this->fields)._Compiler_k__BackingField,compiler);
  return;
}


// CustomLogic.CustomLogicParser$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetLineNumberString (CustomLogic_CustomLogicParser_o* __this, int32_t line, const MethodInfo* method);
// 0x3f56030

System_String_o *
CustomLogic_CustomLogicParser__GetLineNumberString
          (CustomLogic_CustomLogicParser_o *__this,int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  undefined1 local_4 [4];
  
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,line,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = System_Int32__ToString((int32_t)local_4,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicParser$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicParser__GetStartAst (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x3f56060

CustomLogic_CustomLogicStartAst_o *
CustomLogic_CustomLogicParser__GetStartAst
          (CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *__this_00;
  MethodInfo *in_RCX;
  
  if (DAT_05703e97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicStartAst);
    DAT_05703e97 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicStartAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicStartAst);
  CustomLogic_CustomLogicStartAst___ctor(__this_00,(MethodInfo *)0x0);
  CustomLogic_CustomLogicParser__ParseAst
            (__this,0,(CustomLogic_CustomLogicBaseAst_o *)__this_00,in_RCX);
  if (__this_00 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    CustomLogic_CustomLogicStartAst__AddEmptyMain(__this_00,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicParser$$ParseExpression
// il2cpp: CustomLogic_CustomLogicBaseExpressionAst_o* CustomLogic_CustomLogicParser__ParseExpression (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* prev, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x3f57630

/* WARNING: Type propagation algorithm not settling */

CustomLogic_CustomLogicBaseExpressionAst_o *
CustomLogic_CustomLogicParser__ParseExpression
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicBaseExpressionAst_o *prev,
          int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar4;
  ulong uVar5;
  System_Collections_Generic_List_CustomLogicBaseAst__o *pSVar6;
  long lVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  CustomLogic_CustomLogicToken_o *token;
  CustomLogic_CustomLogicToken_o *pCVar10;
  CustomLogic_CustomLogicClassInstantiateExpressionAst_o *pCVar11;
  int *piVar12;
  System_Int32_array *pSVar13;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar14;
  Il2CppObject *pIVar15;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_00;
  CustomLogic_CustomLogicToken_o *pCVar16;
  undefined4 in_register_0000000c;
  CustomLogic_CustomLogicBaseAst_array *pCVar17;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar19;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *prev_00;
  CustomLogic_CustomLogicToken_o **ppCVar20;
  int32_t startIndex_00;
  ulong uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  
  pCVar17 = (CustomLogic_CustomLogicBaseAst_array *)CONCAT44(in_register_0000000c,endIndex);
joined_r0x03f57660:
  if (DAT_05703e98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAssignmentExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBinopExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicFieldExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMethodCallExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNotExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnaryExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicToken_get_Item);
    il2cpp_init_method_metadata(&fld_5D8B4B09ABB99266596E0F938E9883F0254EF5FCDCE6ADB);
    DAT_05703e98 = '\x01';
  }
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f5810a;
  token = (CustomLogic_CustomLogicToken_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar4,startIndex,MethodInfo_CustomLogicToken_get_Item);
  if (endIndex < startIndex) {
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)
           (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)prev;
  }
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f5810a;
  if (startIndex < (pSVar4->fields)._size + -1) {
    pCVar10 = (CustomLogic_CustomLogicToken_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar4,startIndex + 1,
                         MethodInfo_CustomLogicToken_get_Item);
  }
  else {
    pCVar10 = (CustomLogic_CustomLogicToken_o *)0x0;
  }
  iVar8 = CustomLogic_CustomLogicParser__FindLowestBinop
                    (__this,startIndex,endIndex,(MethodInfo *)pCVar17);
  if (iVar8 < 1) {
    if (token == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f5810a;
    iVar2 = (token->fields).Type;
    if (iVar2 == 0) {
      pIVar15 = (token->fields).Value;
      if (pIVar15 == (Il2CppObject *)0x0) goto LAB_03f5810a;
      if ((pIVar15->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_03f58114;
      auVar23 = il2cpp_glue_022c7330();
      if (*auVar23._0_8_ == 0xb) {
        iVar8 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,auVar23._8_8_);
        pCVar17 = (CustomLogic_CustomLogicBaseAst_array *)(ulong)(iVar8 - 1U);
        prev = CustomLogic_CustomLogicParser__ParseExpression
                         (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 1,
                          iVar8 - 1U,method);
        startIndex = iVar8 + 1;
        goto joined_r0x03f57660;
      }
      iVar2 = (token->fields).Type;
    }
    if (iVar2 != 0) {
      if (iVar2 != 1) goto joined_r0x03f57e3e;
      pIVar15 = (token->fields).Value;
      iVar8 = (token->fields).Line;
      prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPrimitiveExpressionAst);
      pCVar17 = (CustomLogic_CustomLogicBaseAst_array *)0x0;
      CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev,pIVar15,iVar8,
                 (MethodInfo *)0x0);
      startIndex = startIndex + 1;
      goto joined_r0x03f57660;
    }
    pIVar15 = (token->fields).Value;
    if (pIVar15 == (Il2CppObject *)0x0) goto LAB_03f5810a;
    if ((pIVar15->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
    goto LAB_03f58114;
    piVar12 = (int *)il2cpp_glue_022c7330();
    if (*piVar12 != 0x10) {
      iVar2 = (token->fields).Type;
      if (iVar2 != 0) goto joined_r0x03f57e3e;
      pIVar15 = (token->fields).Value;
      if (pIVar15 == (Il2CppObject *)0x0) goto LAB_03f5810a;
      if ((pIVar15->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_03f58114;
      piVar12 = (int *)il2cpp_glue_022c7330();
      if (*piVar12 == 0x1f) {
LAB_03f580a5:
        iVar8 = (token->fields).Line;
        __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicUnaryExpressionAst);
        CustomLogic_CustomLogicUnaryExpressionAst___ctor
                  ((CustomLogic_CustomLogicUnaryExpressionAst_o *)__this_00,token,iVar8,
                   (MethodInfo *)0x0);
        prev_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
        goto LAB_03f580d6;
      }
      iVar2 = (token->fields).Type;
      if (iVar2 != 0) goto joined_r0x03f57e3e;
      pIVar15 = (token->fields).Value;
      if (pIVar15 == (Il2CppObject *)0x0) goto LAB_03f5810a;
      if ((pIVar15->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_03f58114;
      piVar12 = (int *)il2cpp_glue_022c7330();
      if (*piVar12 == 0x1e) goto LAB_03f580a5;
      iVar2 = (token->fields).Type;
      if (iVar2 == 0) {
        pIVar15 = (token->fields).Value;
        if (pIVar15 == (Il2CppObject *)0x0) goto LAB_03f5810a;
        if ((pIVar15->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
        goto LAB_03f58114;
        piVar12 = (int *)il2cpp_glue_022c7330();
        if (*piVar12 != 0x26) {
          iVar2 = (token->fields).Type;
          goto joined_r0x03f57e3e;
        }
        CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar10,2,(MethodInfo *)pCVar17);
        pSVar4 = (__this->fields)._tokens;
        if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f5810a;
        iVar2 = startIndex + 2;
        pIVar15 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,iVar2,MethodInfo_CustomLogicToken_get_Item)
        ;
        if ((pIVar15 == (Il2CppObject *)0x0) || (*(int *)&pIVar15[1].klass != 0)) {
          bVar22 = false;
        }
        else {
          if (pIVar15[1].monitor == (long *)0x0) goto LAB_03f5810a;
          if (*(long *)(*(long *)pIVar15[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
          goto LAB_03f58114;
          piVar12 = (int *)il2cpp_glue_022c7330();
          bVar22 = *piVar12 == 0xb;
        }
        if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f5810a;
        pSVar19 = (System_String_o *)(pCVar10->fields).Value;
        iVar8 = (token->fields).Line;
        if (!bVar22) {
          pCVar11 = (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicFieldExpressionAst);
          if ((pSVar19 != (System_String_o *)0x0) && (pSVar19->klass != DAT_057110b0)) {
LAB_03f58121:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar19);
          }
          pCVar17 = (CustomLogic_CustomLogicBaseAst_array *)0x0;
          CustomLogic_CustomLogicFieldExpressionAst___ctor
                    ((CustomLogic_CustomLogicFieldExpressionAst_o *)pCVar11,pSVar19,iVar8,
                     (MethodInfo *)0x0);
          if (pCVar11 == (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)0x0)
          goto LAB_03f5810a;
          (pCVar11->fields).Parameters =
               (System_Collections_Generic_List_CustomLogicBaseAst__o *)prev;
          il2cpp_runtime_glue(&(pCVar11->fields).Parameters,prev);
          prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar11;
          startIndex = iVar2;
          goto joined_r0x03f57660;
        }
        pCVar11 = (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)
                  il2cpp_runtime_glue(TypeInfo_CustomLogicMethodCallExpressionAst);
        if ((pSVar19 != (System_String_o *)0x0) && (pSVar19->klass != DAT_057110b0))
        goto LAB_03f58121;
        pMVar18 = (MethodInfo *)0x0;
        CustomLogic_CustomLogicMethodCallExpressionAst___ctor
                  ((CustomLogic_CustomLogicMethodCallExpressionAst_o *)pCVar11,pSVar19,iVar8,
                   (MethodInfo *)0x0);
        if (pCVar11 == (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)0x0)
        goto LAB_03f5810a;
        (((CustomLogic_CustomLogicMethodCallExpressionAst_o *)pCVar11)->fields).Left = prev;
        il2cpp_runtime_glue(&(((CustomLogic_CustomLogicMethodCallExpressionAst_o *)pCVar11)->fields).
                            Left,prev);
        iVar8 = CustomLogic_CustomLogicParser__FindClosingParen(__this,iVar2,method_01);
        startIndex_00 = startIndex + 3;
        pSVar13 = CustomLogic_CustomLogicParser__FindCommas(__this,startIndex_00,iVar8,pMVar18);
        if (pSVar13 == (System_Int32_array *)0x0) goto LAB_03f5810a;
        uVar5 = pSVar13->max_length;
        if ((uVar5 != 0) && (0 < (int)uVar5)) {
          uVar21 = 0;
          if ((uVar5 & 0xffffffff) == 0) goto LAB_03f5810f;
          while( true ) {
            iVar2 = pSVar13->m_Items[uVar21];
            pCVar14 = CustomLogic_CustomLogicParser__ParseExpression
                                (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,
                                 startIndex_00,iVar2 + -1,method);
            lVar7 = MethodInfo_Void_Add;
            pSVar6 = (((CustomLogic_CustomLogicMethodCallExpressionAst_o *)pCVar11)->fields).
                     Parameters;
            if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
            goto LAB_03f5810a;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pCVar17 = (pSVar6->fields)._items;
            if (pCVar17 == (CustomLogic_CustomLogicBaseAst_array *)0x0) goto LAB_03f5810a;
            uVar3 = (pSVar6->fields)._size;
            if (uVar3 < (uint)pCVar17->max_length) {
              (pSVar6->fields)._size = uVar3 + 1;
              pCVar17->m_Items[(int)uVar3] = (CustomLogic_CustomLogicBaseAst_o *)pCVar14;
              il2cpp_runtime_glue(pCVar17->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pCVar14
                         ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                        );
            }
            startIndex_00 = iVar2 + 1;
            uVar21 = uVar21 + 1;
            uVar3 = (uint)pSVar13->max_length;
            if ((long)(int)uVar3 <= (long)uVar21) break;
            if (uVar3 <= uVar21) goto LAB_03f5810f;
          }
        }
LAB_03f57b93:
        pCVar17 = (CustomLogic_CustomLogicBaseAst_array *)(ulong)(iVar8 - 1U);
        pCVar14 = CustomLogic_CustomLogicParser__ParseExpression
                            (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex_00,
                             iVar8 - 1U,method);
        lVar7 = MethodInfo_Void_Add;
        startIndex = iVar8;
        if (pCVar14 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          pSVar6 = (pCVar11->fields).Parameters;
          if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
          goto LAB_03f5810a;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar17 = (pSVar6->fields)._items;
          if (pCVar17 == (CustomLogic_CustomLogicBaseAst_array *)0x0) goto LAB_03f5810a;
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pCVar17->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pCVar17->m_Items[(int)uVar3] = (CustomLogic_CustomLogicBaseAst_o *)pCVar14;
            il2cpp_runtime_glue(pCVar17->m_Items + (int)uVar3,pCVar14);
          }
          else {
            pCVar17 = *(CustomLogic_CustomLogicBaseAst_array **)(*(long *)(lVar7 + 0x20) + 0xc0);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pCVar14,
                       (MethodInfo_35A7350 *)pCVar17->m_Items[10]);
          }
        }
      }
      else {
joined_r0x03f57e3e:
        if (iVar2 != 2) {
          return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
        }
        if ((pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar10->fields).Type != 0)) {
          pSVar19 = (System_String_o *)(token->fields).Value;
          iVar8 = (token->fields).Line;
        }
        else {
          pIVar15 = (pCVar10->fields).Value;
          if (pIVar15 == (Il2CppObject *)0x0) goto LAB_03f5810a;
          if ((pIVar15->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
LAB_03f58114:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          piVar12 = (int *)il2cpp_glue_022c7330();
          pSVar19 = (System_String_o *)(token->fields).Value;
          iVar8 = (token->fields).Line;
          if (*piVar12 == 0xb) {
            pCVar11 = (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)
                      il2cpp_runtime_glue(TypeInfo_CustomLogicClassInstantiateExpressionAst);
            if ((pSVar19 != (System_String_o *)0x0) && (pSVar19->klass != DAT_057110b0))
            goto LAB_03f58119;
            pMVar18 = (MethodInfo *)0x0;
            CustomLogic_CustomLogicClassInstantiateExpressionAst___ctor
                      (pCVar11,pSVar19,iVar8,(MethodInfo *)0x0);
            if (pCVar11 != (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)0x0) {
              (pCVar11->fields).Left = prev;
              il2cpp_runtime_glue(&(pCVar11->fields).Left,prev);
              iVar8 = CustomLogic_CustomLogicParser__FindClosingParen
                                (__this,startIndex + 1,method_00);
              startIndex_00 = startIndex + 2;
              pSVar13 = CustomLogic_CustomLogicParser__FindCommas
                                  (__this,startIndex_00,iVar8,pMVar18);
              if (pSVar13 != (System_Int32_array *)0x0) {
                uVar5 = pSVar13->max_length;
                if ((uVar5 != 0) && (0 < (int)uVar5)) {
                  uVar21 = 0;
                  if ((uVar5 & 0xffffffff) == 0) {
LAB_03f5810f:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  while( true ) {
                    iVar2 = pSVar13->m_Items[uVar21];
                    pCVar14 = CustomLogic_CustomLogicParser__ParseExpression
                                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,
                                         startIndex_00,iVar2 + -1,method);
                    lVar7 = MethodInfo_Void_Add;
                    pSVar6 = (pCVar11->fields).Parameters;
                    if (pSVar6 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0)
                    goto LAB_03f5810a;
                    piVar1 = &(pSVar6->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pCVar17 = (pSVar6->fields)._items;
                    if (pCVar17 == (CustomLogic_CustomLogicBaseAst_array *)0x0) goto LAB_03f5810a;
                    uVar3 = (pSVar6->fields)._size;
                    if (uVar3 < (uint)pCVar17->max_length) {
                      (pSVar6->fields)._size = uVar3 + 1;
                      pCVar17->m_Items[(int)uVar3] = (CustomLogic_CustomLogicBaseAst_o *)pCVar14;
                      il2cpp_runtime_glue(pCVar17->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar6,
                                 (Il2CppObject *)pCVar14,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    }
                    startIndex_00 = iVar2 + 1;
                    uVar21 = uVar21 + 1;
                    uVar3 = (uint)pSVar13->max_length;
                    if ((long)(int)uVar3 <= (long)uVar21) break;
                    if (uVar3 <= uVar21) goto LAB_03f5810f;
                  }
                }
                goto LAB_03f57b93;
              }
            }
            goto LAB_03f5810a;
          }
        }
        pCVar11 = (CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)
                  il2cpp_runtime_glue(TypeInfo_CustomLogicVariableExpressionAst);
        if ((pSVar19 != (System_String_o *)0x0) && (pSVar19->klass != DAT_057110b0)) {
LAB_03f58119:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar19);
        }
        pCVar17 = (CustomLogic_CustomLogicBaseAst_array *)0x0;
        CustomLogic_CustomLogicVariableExpressionAst___ctor
                  ((CustomLogic_CustomLogicVariableExpressionAst_o *)pCVar11,pSVar19,iVar8,
                   (MethodInfo *)0x0);
      }
      prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar11;
      startIndex = startIndex + 1;
      goto joined_r0x03f57660;
    }
    if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f5810a;
    iVar8 = (pCVar10->fields).Line;
    __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNotExpressionAst)
    ;
    CustomLogic_CustomLogicNotExpressionAst___ctor
              ((CustomLogic_CustomLogicNotExpressionAst_o *)__this_00,iVar8,(MethodInfo *)0x0);
    prev_00 = __this_00;
LAB_03f580d6:
    pCVar16 = (CustomLogic_CustomLogicToken_o *)
              CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)prev_00,startIndex + 1
                         ,endIndex,method);
    if (__this_00 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f5810a;
    ppCVar20 = (CustomLogic_CustomLogicToken_o **)&(__this_00->fields).Left;
    (__this_00->fields).Left = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar16;
  }
  else {
    pSVar4 = (__this->fields)._tokens;
    if (pSVar4 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f5810a;
    pCVar10 = (CustomLogic_CustomLogicToken_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar4,iVar8,MethodInfo_CustomLogicToken_get_Item);
    pCVar14 = CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,
                         iVar8 + -1,method);
    pMVar18 = (MethodInfo *)(ulong)(uint)endIndex;
    pCVar16 = (CustomLogic_CustomLogicToken_o *)
              CustomLogic_CustomLogicParser__ParseExpression
                        (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar8 + 1,endIndex
                         ,method);
    pSVar13 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,5);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar13,fld_5D8B4B09ABB99266596E0F938E9883F0254EF5FCDCE6ADB,(MethodInfo *)0x0);
    bVar9 = CustomLogic_CustomLogicParser__IsAnySymbolValue(__this,pCVar10,pSVar13,pMVar18);
    if ((char)bVar9 != '\0') {
      if (token != (CustomLogic_CustomLogicToken_o *)0x0) {
        iVar8 = (token->fields).Line;
        __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicAssignmentExpressionAst);
        CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                  (__this_00,pCVar14,pCVar10,iVar8,(MethodInfo *)0x0);
        if (__this_00 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
          ppCVar20 = (CustomLogic_CustomLogicToken_o **)&(__this_00->fields).Right;
          (__this_00->fields).Right = (CustomLogic_CustomLogicBaseExpressionAst_o *)pCVar16;
          goto LAB_03f580f3;
        }
      }
      goto LAB_03f5810a;
    }
    if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f5810a;
    iVar8 = (pCVar10->fields).Line;
    __this_00 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicBinopExpressionAst)
    ;
    CustomLogic_CustomLogicBinopExpressionAst___ctor
              ((CustomLogic_CustomLogicBinopExpressionAst_o *)__this_00,pCVar10,iVar8,
               (MethodInfo *)0x0);
    if (__this_00 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
LAB_03f5810a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this_00->fields).Left = pCVar14;
    il2cpp_runtime_glue(&(__this_00->fields).Left,pCVar14);
    ppCVar20 = &(__this_00->fields).Operator;
    (__this_00->fields).Operator = pCVar16;
  }
LAB_03f580f3:
  il2cpp_runtime_glue(ppCVar20,pCVar16);
  return (CustomLogic_CustomLogicBaseExpressionAst_o *)__this_00;
}


// CustomLogic.CustomLogicParser$$ParseExpressionAst
// il2cpp: System_Object_array* CustomLogic_CustomLogicParser__ParseExpressionAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f58b80

System_Object_array *
CustomLogic_CustomLogicParser__ParseExpressionAst
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t iVar1;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar5;
  undefined8 uVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  int local_2c;
  
  if (DAT_05703e99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703e99 = '\x01';
    method = extraout_RDX;
  }
  iVar1 = CustomLogic_CustomLogicParser__FindSemicolon(__this,startIndex,method);
  pSVar2 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  local_2c = iVar1 + 1;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
  if (pSVar2 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    lVar4 = il2cpp_runtime_glue(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (lVar4 == 0) goto LAB_03f58c8a;
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = pIVar3;
    il2cpp_runtime_glue(pSVar2->m_Items);
    pCVar5 = CustomLogic_CustomLogicParser__ParseExpression
                       (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,
                        iVar1 + -1,in_R8);
    if (pCVar5 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pCVar5,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar4 == 0) {
LAB_03f58c8a:
        uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar6,0);
      }
    }
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = (Il2CppObject *)pCVar5;
      il2cpp_runtime_glue(pSVar2->m_Items + 1,pCVar5);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicParser$$ParseAst
// il2cpp: int32_t CustomLogic_CustomLogicParser__ParseAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, CustomLogic_CustomLogicBaseAst_o* prev, const MethodInfo* method);
// 0x3f56280

/* WARNING: Type propagation algorithm not settling */

int32_t CustomLogic_CustomLogicParser__ParseAst
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,
                  CustomLogic_CustomLogicBaseAst_o *prev,MethodInfo *method)

{
  int32_t *piVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_array *pSVar5;
  undefined1 *puVar6;
  bool_conflict bVar7;
  int iVar8;
  int32_t iVar9;
  int iVar10;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *token;
  CustomLogic_CustomLogicToken_o *pCVar11;
  System_Object_array *pSVar12;
  int *piVar13;
  CustomLogic_CustomLogicPrimitiveExpressionAst_o *__this_02;
  CustomLogic_CustomLogicVariableExpressionAst_o *__this_03;
  CustomLogic_CustomLogicClassDefinitionAst_o *__this_04;
  CustomLogic_CustomLogicConditionalBlockAst_o *__this_05;
  undefined4 extraout_var;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *__this_06;
  Il2CppObject *pIVar14;
  char *pcVar15;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar16;
  CustomLogic_CustomLogicContinueExpressionAst_o *__this_07;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_08;
  CustomLogic_CustomLogicToken_o *pCVar17;
  Il2CppClass *extraout_RAX;
  uint uVar18;
  uint *method_00;
  MethodInfo *pMVar19;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  System_String_o *name;
  Il2CppClass *pIVar20;
  CustomLogic_CustomLogicBaseAst_c *pCVar21;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar22;
  MethodInfo *in_R8;
  bool bVar23;
  undefined1 auVar24 [16];
  System_Nullable_CustomLogicSourceType__Fields local_48;
  System_Nullable_CustomLogicSourceType__Fields local_40;
  undefined8 local_38;
  MethodInfo *method_01;
  
  if (DAT_05703e9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAssignmentExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBaseExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBreakExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassDefinitionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicConditionalBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicContinueExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicForBlockAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMethodDefinitionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicReturnExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicStartAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWaitExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicToken_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSourceType_get_Value);
    DAT_05703e9a = '\x01';
  }
  local_40.hasValue = 0;
  local_40.value = 0;
  pSVar22 = (__this->fields)._tokens;
  if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f57501;
  if ((pSVar22->fields)._size <= startIndex) {
    return startIndex;
  }
  token = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar22,startIndex,MethodInfo_CustomLogicToken_get_Item);
  pSVar22 = (__this->fields)._tokens;
  if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f57501;
  if (startIndex < (pSVar22->fields)._size + -1) {
    pCVar11 = (CustomLogic_CustomLogicToken_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar22,startIndex + 1,
                         MethodInfo_CustomLogicToken_get_Item);
    pMVar19 = extraout_RDX_00;
  }
  else {
    pCVar11 = (CustomLogic_CustomLogicToken_o *)0x0;
    pMVar19 = extraout_RDX;
  }
  if (prev == (CustomLogic_CustomLogicBaseAst_o *)0x0) goto LAB_03f57501;
  method_00 = &switchD_03f56451::switchdataD_00d81dac;
  pIVar20 = DAT_05711068;
  switch((prev->fields).Type) {
  case 0:
    if (*(int *)((long)&TypeInfo_CustomLogicSymbols[5].fields.Error + 4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = CustomLogic_CustomLogicParser__IsSymbolIn
                      (TypeInfo_CustomLogicSymbols,(CustomLogic_CustomLogicToken_o *)token,
                       TypeInfo_CustomLogicSymbols[4].fields.Error[1].monitor,(MethodInfo *)method_00);
    pMVar19 = extraout_RDX_01;
    if ((char)bVar7 != '\0') {
      if (token == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
      iVar9 = *(int32_t *)&(token->fields).Operator;
      __this_04 = (CustomLogic_CustomLogicClassDefinitionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicClassDefinitionAst);
      pMVar19 = (MethodInfo *)0x0;
      CustomLogic_CustomLogicClassDefinitionAst___ctor
                (__this_04,(CustomLogic_CustomLogicToken_o *)token,iVar9,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._Compiler_k__BackingField;
      if ((__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) &&
         (local_40 = (System_Nullable_CustomLogicSourceType__Fields)
                     CustomLogic_CustomLogicCompiler__GetFileTypeForLine
                               (__this_00,*(int32_t *)&(token->fields).Operator,(MethodInfo *)0x0),
         (char)local_40.hasValue != '\0')) {
        iVar9 = System_Nullable<Int32Enum>__get_Value
                          ((System_Nullable_Int32Enum__o)&local_40,MethodInfo_CustomLogicSourceType_get_Value);
        local_48.hasValue = 0;
        local_48.value = 0;
        pMVar19 = (MethodInfo *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
        System_Nullable<Int32Enum>___ctor
                  ((System_Nullable_Int32Enum__o)&local_48,iVar9,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        if (__this_04 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) goto LAB_03f57501;
        (__this_04->fields)._Namespace_k__BackingField.fields = local_48;
      }
      pSVar22 = (__this->fields)._tokens;
      if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f57501;
      pCVar17 = (CustomLogic_CustomLogicToken_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar22,startIndex + 2,
                           MethodInfo_CustomLogicToken_get_Item);
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar17,9,pMVar19);
      iVar8 = CustomLogic_CustomLogicParser__ParseAst
                        (__this,startIndex + 3,(CustomLogic_CustomLogicBaseAst_o *)__this_04,pMVar19
                        );
      if (pCVar11 == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f57501;
      bVar3 = (TypeInfo_CustomLogicStartAst->_2).naturalAligment;
      if (((prev->klass->_2).naturalAligment < bVar3) ||
         ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicStartAst)) goto LAB_03f57607;
      __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(pCVar11->fields).Value;
      if ((__this_06 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) &&
         (pIVar20 = DAT_057110b0, (Il2CppClass *)__this_06->klass != DAT_057110b0))
      goto LAB_03f57602;
      method_01 = (MethodInfo *)0x0;
      CustomLogic_CustomLogicStartAst__AddClass
                ((CustomLogic_CustomLogicStartAst_o *)prev,(System_String_o *)__this_06,__this_04,
                 (MethodInfo *)0x0);
      pMVar19 = extraout_RDX_02;
      goto joined_r0x03f5695e;
    }
    break;
  case 1:
    if (token == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
    iVar8 = (token->fields).Type;
    if (iVar8 == 0) {
      __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
      if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
      if ((((System_String_c *)__this_06->klass)->_1).element_class !=
          (DAT_05711068->_1).element_class) goto LAB_03f57602;
      auVar24 = il2cpp_glue_022c7330();
      pMVar19 = auVar24._8_8_;
      if (*auVar24._0_8_ == 5) {
LAB_03f56b39:
        CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar11,2,(MethodInfo *)method_00);
        if ((token->fields).Type == 0) {
          __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
          if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
          goto LAB_03f57501;
          pIVar20 = DAT_05711068;
          if ((((System_String_c *)__this_06->klass)->_1).element_class !=
              (DAT_05711068->_1).element_class) goto LAB_03f57602;
          piVar13 = (int *)il2cpp_glue_022c7330();
          bVar23 = *piVar13 == 6;
        }
        else {
          bVar23 = false;
        }
        iVar9 = *(int32_t *)&(token->fields).Operator;
        __this_08 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMethodDefinitionAst)
        ;
        pMVar19 = (MethodInfo *)0x0;
        CustomLogic_CustomLogicMethodDefinitionAst___ctor
                  (__this_08,iVar9,(uint)bVar23,(MethodInfo *)0x0);
        pIVar20 = DAT_057110b0;
        if ((pCVar11 != (CustomLogic_CustomLogicToken_o *)0x0) &&
           (__this_08 != (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0)) {
          __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(pCVar11->fields).Value;
          if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
            (__this_08->fields).Name = (System_String_o *)0x0;
            il2cpp_runtime_glue(&(__this_08->fields).Name);
            pSVar22 = (__this->fields)._tokens;
          }
          else {
            if (((Il2CppClass *)__this_06->klass != DAT_057110b0) ||
               ((__this_08->fields).Name = (System_String_o *)__this_06,
               (Il2CppClass *)__this_06->klass != pIVar20)) goto LAB_03f57602;
            il2cpp_runtime_glue(&(__this_08->fields).Name);
            pSVar22 = (__this->fields)._tokens;
          }
          if (pSVar22 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
            pCVar17 = (CustomLogic_CustomLogicToken_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar22,startIndex + 2
                                 ,MethodInfo_CustomLogicToken_get_Item);
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar17,0xb,pMVar19);
            pSVar22 = (__this->fields)._tokens;
            if ((pSVar22 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) &&
               (pCVar17 = (CustomLogic_CustomLogicToken_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar22,
                                     startIndex + 3,MethodInfo_CustomLogicToken_get_Item),
               pCVar17 != (CustomLogic_CustomLogicToken_o *)0x0)) {
              iVar8 = startIndex + 5;
              iVar10 = (pCVar17->fields).Type;
              if (iVar10 != 0) goto LAB_03f57419;
LAB_03f574a0:
              __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                          (pCVar17->fields).Value;
              if (__this_06 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
                pIVar20 = DAT_05711068;
                if ((((System_String_c *)__this_06->klass)->_1).element_class !=
                    (DAT_05711068->_1).element_class) goto LAB_03f57602;
                piVar13 = (int *)il2cpp_glue_022c7330();
                if (*piVar13 == 0xc) {
                  pSVar22 = (__this->fields)._tokens;
                  if (pSVar22 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                    pCVar17 = (CustomLogic_CustomLogicToken_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar22,
                                         iVar8 + -1,MethodInfo_CustomLogicToken_get_Item);
                    CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar17,9,pMVar19);
                    iVar8 = CustomLogic_CustomLogicParser__ParseAst
                                      (__this,iVar8,(CustomLogic_CustomLogicBaseAst_o *)__this_08,
                                       pMVar19);
                    bVar3 = (TypeInfo_CustomLogicClassDefinitionAst->_2).naturalAligment;
                    if (((prev->klass->_2).naturalAligment < bVar3) ||
                       ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicClassDefinitionAst))
                    goto LAB_03f57614;
                    __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                                (pCVar11->fields).Value;
                    if ((__this_06 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) &&
                       (pIVar20 = DAT_057110b0, (Il2CppClass *)__this_06->klass != DAT_057110b0))
                    goto LAB_03f57602;
                    method_01 = (MethodInfo *)0x0;
                    CustomLogic_CustomLogicClassDefinitionAst__AddMethod
                              ((CustomLogic_CustomLogicClassDefinitionAst_o *)prev,
                               (System_String_o *)__this_06,__this_08,(MethodInfo *)0x0);
                    pMVar19 = extraout_RDX_08;
                    goto joined_r0x03f5695e;
                  }
                }
                else {
                  if ((pCVar17->fields).Type == 2) goto LAB_03f5741e;
LAB_03f573d0:
                  CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar17,0x25,pMVar19);
                  pSVar22 = (__this->fields)._tokens;
                  while (pSVar22 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                    while( true ) {
                      pCVar17 = (CustomLogic_CustomLogicToken_o *)
                                System_Collections_Generic_List<object>__get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar22,
                                           iVar8 + -1,MethodInfo_CustomLogicToken_get_Item);
                      iVar8 = iVar8 + 1;
                      if (pCVar17 == (CustomLogic_CustomLogicToken_o *)0x0) goto LAB_03f57501;
                      iVar10 = (pCVar17->fields).Type;
                      if (iVar10 == 0) goto LAB_03f574a0;
LAB_03f57419:
                      if (iVar10 != 2) goto LAB_03f573d0;
LAB_03f5741e:
                      pMVar19 = MethodInfo_Void_Add;
                      __this_01 = (__this_08->fields).ParameterNames;
                      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0)
                      goto LAB_03f57501;
                      __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                                  (pCVar17->fields).Value;
                      if ((__this_06 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) &&
                         (pIVar20 = DAT_057110b0, (Il2CppClass *)__this_06->klass != DAT_057110b0))
                      goto LAB_03f57602;
                      piVar1 = &(__this_01->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar5 = (__this_01->fields)._items;
                      if (pSVar5 == (System_String_array *)0x0) goto LAB_03f57501;
                      uVar4 = (__this_01->fields)._size;
                      if ((uint)pSVar5->max_length <= uVar4) break;
                      pMVar19 = (MethodInfo *)(ulong)(uVar4 + 1);
                      (__this_01->fields)._size = uVar4 + 1;
                      pSVar5->m_Items[(int)uVar4] = (System_String_o *)__this_06;
                      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
                      pSVar22 = (__this->fields)._tokens;
                      if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
                      goto LAB_03f57501;
                    }
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_01,
                               (Il2CppObject *)__this_06,
                               (MethodInfo_35A7350 *)pMVar19->klass->rgctx_data[0xe].method);
                    pSVar22 = (__this->fields)._tokens;
                  }
                }
              }
            }
          }
        }
        goto LAB_03f57501;
      }
      iVar8 = (token->fields).Type;
      if (iVar8 == 0) {
        __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
        if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
        pIVar20 = DAT_05711068;
        if ((((System_String_c *)__this_06->klass)->_1).element_class !=
            (DAT_05711068->_1).element_class) goto LAB_03f57602;
        auVar24 = il2cpp_glue_022c7330();
        pMVar19 = auVar24._8_8_;
        if (*auVar24._0_8_ == 6) goto LAB_03f56b39;
        iVar8 = (token->fields).Type;
      }
    }
    if (iVar8 == 0) {
      __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
      if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
      pIVar20 = DAT_05711068;
      if ((((System_String_c *)__this_06->klass)->_1).element_class !=
          (DAT_05711068->_1).element_class) goto LAB_03f57602;
      auVar24 = il2cpp_glue_022c7330();
      pMVar19 = auVar24._8_8_;
      iVar8 = *auVar24._0_8_;
joined_r0x03f575eb:
      if (iVar8 == 10) {
        return startIndex + 1;
      }
    }
    else if (iVar8 == 2) {
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar11,0x11,(MethodInfo *)method_00);
      name = (System_String_o *)(token->fields).Left;
      iVar9 = *(int32_t *)&(token->fields).Operator;
      __this_03 = (CustomLogic_CustomLogicVariableExpressionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVariableExpressionAst)
      ;
      if ((name != (System_String_o *)0x0) && ((Il2CppClass *)name->klass != DAT_057110b0)) {
LAB_03f57626:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(name);
      }
      CustomLogic_CustomLogicVariableExpressionAst___ctor(__this_03,name,iVar9,(MethodInfo *)0x0);
      iVar9 = *(int32_t *)&(token->fields).Operator;
      __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                  il2cpp_runtime_glue(TypeInfo_CustomLogicAssignmentExpressionAst);
      pMVar19 = (MethodInfo *)0x0;
      CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                (__this_06,(CustomLogic_CustomLogicBaseExpressionAst_o *)__this_03,pCVar11,iVar9,
                 (MethodInfo *)0x0);
      iVar9 = CustomLogic_CustomLogicParser__FindSemicolon(__this,startIndex,method_02);
      pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                          (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 2,
                           iVar9 + -1,pMVar19);
      if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
      (__this_06->fields).Right = pCVar16;
      il2cpp_runtime_glue(&(__this_06->fields).Right,pCVar16);
      method_01 = MethodInfo_Void_Add;
      bVar3 = (TypeInfo_CustomLogicClassDefinitionAst->_2).naturalAligment;
      if (((prev->klass->_2).naturalAligment < bVar3) ||
         ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicClassDefinitionAst)) goto LAB_03f57607;
      pCVar21 = prev[1].klass;
      if (pCVar21 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto LAB_03f57501;
      puVar6 = (undefined1 *)((long)&(pCVar21->_1).namespaze + 4);
      *(int *)puVar6 = *(int *)puVar6 + 1;
      pcVar15 = (pCVar21->_1).name;
      if (pcVar15 == (char *)0x0) goto LAB_03f57501;
      iVar8 = iVar9 + 1;
      uVar4 = *(uint *)&(pCVar21->_1).namespaze;
      if (uVar4 < *(uint *)(pcVar15 + 0x18)) {
LAB_03f56f7a:
        uVar18 = uVar4 + 1;
        *(uint *)&(pCVar21->_1).namespaze = uVar18;
        pcVar2 = pcVar15 + (long)(int)uVar4 * 8;
        *(CustomLogic_CustomLogicAssignmentExpressionAst_o **)
         (pcVar15 + (long)(int)uVar4 * 8 + 0x20) = __this_06;
LAB_03f56f90:
        method_01 = (MethodInfo *)(ulong)uVar18;
        il2cpp_runtime_glue(pcVar2 + 0x20,__this_06);
        pMVar19 = extraout_RDX_05;
      }
      else {
LAB_03f56796:
        pMVar19 = method_01->klass->rgctx_data[0xe].method;
LAB_03f5694e:
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pCVar21,(Il2CppObject *)__this_06,
                   (MethodInfo_35A7350 *)pMVar19);
        pMVar19 = extraout_RDX_03;
      }
      goto joined_r0x03f5695e;
    }
    break;
  case 2:
  case 0x10:
  case 0x11:
    if (token == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
    iVar8 = (token->fields).Type;
    if (iVar8 != 0) goto joined_r0x03f56c24;
    __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
    if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
    if ((((System_String_c *)__this_06->klass)->_1).element_class !=
        (DAT_05711068->_1).element_class) goto LAB_03f57602;
    auVar24 = il2cpp_glue_022c7330();
    pMVar19 = auVar24._8_8_;
    pIVar20 = DAT_05711068;
    if (*auVar24._0_8_ == 0xd) {
      if ((pCVar11 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar11->fields).Type != 0)) {
LAB_03f56a6a:
        pSVar12 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1,pMVar19);
        if (pSVar12 == (System_Object_array *)0x0) goto LAB_03f57501;
        if ((int)pSVar12->max_length == 0) {
LAB_03f5760f:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)pSVar12->m_Items[0];
        if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
        pIVar20 = DAT_05711068;
        if ((((System_String_c *)__this_06->klass)->_1).element_class !=
            (DAT_05711068->_1).element_class) goto LAB_03f57602;
        piVar13 = (int *)il2cpp_glue_022c7330();
        if ((uint)pSVar12->max_length < 2) goto LAB_03f5760f;
        iVar8 = *piVar13;
        __this_02 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)pSVar12->m_Items[1];
        if (__this_02 == (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)0x0) {
          __this_02 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)0x0;
        }
        else {
          bVar3 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
          if (((((System_String_c *)__this_02->klass)->_2).naturalAligment < bVar3) ||
             ((((System_String_c *)__this_02->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              TypeInfo_CustomLogicBaseExpressionAst)) {
LAB_03f5761e:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_02);
          }
        }
      }
      else {
        __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(pCVar11->fields).Value;
        if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
        if ((((System_String_c *)__this_06->klass)->_1).element_class !=
            (DAT_05711068->_1).element_class) goto LAB_03f57602;
        auVar24 = il2cpp_glue_022c7330();
        pMVar19 = auVar24._8_8_;
        if (*auVar24._0_8_ != 0x23) goto LAB_03f56a6a;
        iVar9 = *(int32_t *)&(token->fields).Operator;
        __this_02 = (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicPrimitiveExpressionAst);
        CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                  (__this_02,(Il2CppObject *)0x0,iVar9,(MethodInfo *)0x0);
        iVar8 = startIndex + 2;
      }
      iVar9 = *(int32_t *)&(token->fields).Operator;
      __this_05 = (CustomLogic_CustomLogicConditionalBlockAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicReturnExpressionAst);
      CustomLogic_CustomLogicReturnExpressionAst___ctor
                ((CustomLogic_CustomLogicReturnExpressionAst_o *)__this_05,
                 (CustomLogic_CustomLogicBaseExpressionAst_o *)__this_02,iVar9,(MethodInfo *)0x0);
    }
    else {
      iVar8 = (token->fields).Type;
      if (iVar8 == 0) {
        __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
        if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
        if ((((System_String_c *)__this_06->klass)->_1).element_class !=
            (DAT_05711068->_1).element_class) goto LAB_03f57602;
        auVar24 = il2cpp_glue_022c7330();
        pMVar19 = auVar24._8_8_;
        if (*auVar24._0_8_ != 7) {
          iVar8 = (token->fields).Type;
          goto joined_r0x03f56c24;
        }
        pSVar12 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1,pMVar19);
        if (pSVar12 == (System_Object_array *)0x0) goto LAB_03f57501;
        if ((int)pSVar12->max_length == 0) goto LAB_03f5760f;
        __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)pSVar12->m_Items[0];
        if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) goto LAB_03f57501;
        pIVar20 = DAT_05711068;
        if ((((System_String_c *)__this_06->klass)->_1).element_class !=
            (DAT_05711068->_1).element_class) goto LAB_03f57602;
        piVar13 = (int *)il2cpp_glue_022c7330();
        if ((uint)pSVar12->max_length < 2) goto LAB_03f5760f;
        iVar8 = *piVar13;
        name = (System_String_o *)pSVar12->m_Items[1];
        iVar9 = *(int32_t *)&(token->fields).Operator;
        __this_05 = (CustomLogic_CustomLogicConditionalBlockAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWaitExpressionAst)
        ;
        if (name != (System_String_o *)0x0) {
          bVar3 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
          if (((name->klass->_2).naturalAligment < bVar3) ||
             ((name->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicBaseExpressionAst)) goto LAB_03f57626;
        }
        CustomLogic_CustomLogicWaitExpressionAst___ctor
                  ((CustomLogic_CustomLogicWaitExpressionAst_o *)__this_05,
                   (CustomLogic_CustomLogicBaseExpressionAst_o *)name,iVar9,(MethodInfo *)0x0);
      }
      else {
joined_r0x03f56c24:
        if (iVar8 == 2) {
          pSVar12 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex,pMVar19);
          if (pSVar12 == (System_Object_array *)0x0) goto LAB_03f57501;
          if ((int)pSVar12->max_length == 0) goto LAB_03f5760f;
          __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)pSVar12->m_Items[0];
          if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
          goto LAB_03f57501;
          pIVar20 = DAT_05711068;
          if ((((System_String_c *)__this_06->klass)->_1).element_class !=
              (DAT_05711068->_1).element_class) goto LAB_03f57602;
          piVar13 = (int *)il2cpp_glue_022c7330();
          method_01 = MethodInfo_Void_Add;
          bVar3 = (TypeInfo_CustomLogicBlockAst->_2).naturalAligment;
          if (((prev->klass->_2).naturalAligment < bVar3) ||
             ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicBlockAst)) goto LAB_03f57607;
          if ((uint)pSVar12->max_length < 2) goto LAB_03f5760f;
          pCVar21 = prev[1].klass;
          if (pCVar21 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto LAB_03f57501;
          iVar8 = *piVar13;
          __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)pSVar12->m_Items[1];
          if (__this_06 != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
            bVar3 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
            pIVar20 = TypeInfo_CustomLogicBaseExpressionAst;
            if (((((System_String_c *)__this_06->klass)->_2).naturalAligment < bVar3) ||
               ((((System_String_c *)__this_06->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                TypeInfo_CustomLogicBaseExpressionAst)) goto LAB_03f57602;
          }
          puVar6 = (undefined1 *)((long)&(pCVar21->_1).namespaze + 4);
          *(int *)puVar6 = *(int *)puVar6 + 1;
          pcVar15 = (pCVar21->_1).name;
          if (pcVar15 == (char *)0x0) goto LAB_03f57501;
          uVar4 = *(uint *)&(pCVar21->_1).namespaze;
          if (uVar4 < *(uint *)(pcVar15 + 0x18)) {
            uVar18 = uVar4 + 1;
            *(uint *)&(pCVar21->_1).namespaze = uVar18;
            pcVar2 = pcVar15 + (long)(int)uVar4 * 8;
            *(CustomLogic_CustomLogicAssignmentExpressionAst_o **)
             (pcVar15 + (long)(int)uVar4 * 8 + 0x20) = __this_06;
            goto LAB_03f56f90;
          }
          pMVar19 = method_01->klass->rgctx_data[0xe].method;
          goto LAB_03f5694e;
        }
        if (*(int *)((long)&TypeInfo_CustomLogicSymbols[5].fields.Error + 4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = CustomLogic_CustomLogicParser__IsSymbolIn
                          (TypeInfo_CustomLogicSymbols,(CustomLogic_CustomLogicToken_o *)token,
                           (System_Collections_Generic_HashSet_int__o *)
                           TypeInfo_CustomLogicSymbols[4].fields.Error[1].fields,(MethodInfo *)method_00);
        if ((char)bVar7 == '\0') {
          pMVar19 = extraout_RDX_04;
          if ((token->fields).Type == 0) {
            __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
            if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
            goto LAB_03f57501;
            pIVar20 = DAT_05711068;
            if ((((System_String_c *)__this_06->klass)->_1).element_class !=
                (DAT_05711068->_1).element_class) goto LAB_03f57602;
            auVar24 = il2cpp_glue_022c7330();
            pMVar19 = auVar24._8_8_;
            if (*auVar24._0_8_ == 0x2b) {
              CustomLogic_CustomLogicParser__AssertSymbolValue
                        (__this,pCVar11,0xb,(MethodInfo *)method_00);
              iVar9 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,method_03);
              local_38 = CONCAT44(extraout_var,iVar9);
              iVar9 = *(int32_t *)&(token->fields).Operator;
              __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                          il2cpp_runtime_glue(TypeInfo_CustomLogicForBlockAst);
              CustomLogic_CustomLogicForBlockAst___ctor
                        ((CustomLogic_CustomLogicForBlockAst_o *)__this_06,iVar9,(MethodInfo *)0x0);
              pSVar22 = (__this->fields)._tokens;
              if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
              goto LAB_03f57501;
              iVar8 = startIndex + 2;
              pCVar11 = (CustomLogic_CustomLogicToken_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar22,iVar8,
                                   MethodInfo_CustomLogicToken_get_Item);
              CustomLogic_CustomLogicParser__AssertTokenType
                        (__this,pCVar11,2,(MethodInfo *)method_00);
              pSVar22 = (__this->fields)._tokens;
              if (((pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
                  (pIVar14 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar22,iVar8,
                                        MethodInfo_CustomLogicToken_get_Item), pIVar14 == (Il2CppObject *)0x0)) ||
                 (pSVar22 = (__this->fields)._tokens,
                 pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0))
              goto LAB_03f57501;
              __this_02 = pIVar14[1].monitor;
              pIVar14 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar22,iVar8,
                                   MethodInfo_CustomLogicToken_get_Item);
              if (pIVar14 == (Il2CppObject *)0x0) goto LAB_03f57501;
              iVar9 = *(int32_t *)&pIVar14[2].klass;
              pCVar11 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVariableExpressionAst);
              if ((__this_02 != (CustomLogic_CustomLogicPrimitiveExpressionAst_o *)0x0) &&
                 ((Il2CppClass *)__this_02->klass != DAT_057110b0)) goto LAB_03f5761e;
              pMVar19 = (MethodInfo *)0x0;
              CustomLogic_CustomLogicVariableExpressionAst___ctor
                        ((CustomLogic_CustomLogicVariableExpressionAst_o *)pCVar11,
                         (System_String_o *)__this_02,iVar9,(MethodInfo *)0x0);
              if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
              goto LAB_03f57501;
              (__this_06->fields).Operator = pCVar11;
              il2cpp_runtime_glue(&(__this_06->fields).Operator,pCVar11);
              pSVar22 = (__this->fields)._tokens;
              if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
              goto LAB_03f57501;
              pCVar11 = (CustomLogic_CustomLogicToken_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar22,
                                   startIndex + 3,MethodInfo_CustomLogicToken_get_Item);
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar11,0x2c,pMVar19);
              iVar8 = (int)local_38;
              pMVar19 = (MethodInfo *)(ulong)(iVar8 - 1U);
              pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                                  (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,
                                   startIndex + 4,iVar8 - 1U,in_R8);
              (__this_06->fields).Right = pCVar16;
              il2cpp_runtime_glue(&(__this_06->fields).Right,pCVar16);
              pSVar22 = (__this->fields)._tokens;
              if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
              goto LAB_03f57501;
              pCVar11 = (CustomLogic_CustomLogicToken_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar22,iVar8 + 1,
                                   MethodInfo_CustomLogicToken_get_Item);
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar11,9,pMVar19);
              iVar8 = CustomLogic_CustomLogicParser__ParseAst
                                (__this,iVar8 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_06,
                                 pMVar19);
              method_01 = MethodInfo_Void_Add;
              bVar3 = (TypeInfo_CustomLogicBlockAst->_2).naturalAligment;
              if (((prev->klass->_2).naturalAligment < bVar3) ||
                 ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicBlockAst))
              goto LAB_03f57607;
              pCVar21 = prev[1].klass;
              if (pCVar21 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto LAB_03f57501;
              puVar6 = (undefined1 *)((long)&(pCVar21->_1).namespaze + 4);
              *(int *)puVar6 = *(int *)puVar6 + 1;
              pcVar15 = (pCVar21->_1).name;
              if (pcVar15 == (char *)0x0) goto LAB_03f57501;
              uVar4 = *(uint *)&(pCVar21->_1).namespaze;
              if (uVar4 < *(uint *)(pcVar15 + 0x18)) goto LAB_03f56f7a;
              goto LAB_03f56796;
            }
            if ((token->fields).Type == 0) {
              __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
              if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
              goto LAB_03f57501;
              pIVar20 = DAT_05711068;
              if ((((System_String_c *)__this_06->klass)->_1).element_class !=
                  (DAT_05711068->_1).element_class) goto LAB_03f57602;
              auVar24 = il2cpp_glue_022c7330();
              pMVar19 = auVar24._8_8_;
              if (*auVar24._0_8_ == 0xe) {
                CustomLogic_CustomLogicParser__AssertSymbolValue
                          (__this,pCVar11,0x23,(MethodInfo *)method_00);
                iVar9 = *(int32_t *)&(token->fields).Operator;
                __this_07 = (CustomLogic_CustomLogicContinueExpressionAst_o *)
                            il2cpp_runtime_glue(TypeInfo_CustomLogicContinueExpressionAst);
                CustomLogic_CustomLogicContinueExpressionAst___ctor
                          (__this_07,iVar9,(MethodInfo *)0x0);
LAB_03f571e8:
                method_01 = MethodInfo_Void_Add;
                bVar3 = (TypeInfo_CustomLogicBlockAst->_2).naturalAligment;
                if (((prev->klass->_2).naturalAligment < bVar3) ||
                   ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicBlockAst)) {
LAB_03f57607:
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(prev);
                }
                pCVar21 = prev[1].klass;
                if (pCVar21 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto LAB_03f57501;
                piVar1 = (int32_t *)((long)&(pCVar21->_1).namespaze + 4);
                *piVar1 = *piVar1 + 1;
                pSVar12 = ((System_Collections_Generic_List_object__Fields *)&(pCVar21->_1).name)->
                          _items;
                if (pSVar12 == (System_Object_array *)0x0) goto LAB_03f57501;
                iVar8 = startIndex + 2;
                uVar4 = *(uint *)&(pCVar21->_1).namespaze;
                if (uVar4 < (uint)pSVar12->max_length) {
                  method_01 = (MethodInfo *)(ulong)(uVar4 + 1);
                  *(uint *)&(pCVar21->_1).namespaze = uVar4 + 1;
                  pSVar12->m_Items[(int)uVar4] = (Il2CppObject *)__this_07;
                  il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar4,__this_07);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pCVar21,
                             (Il2CppObject *)__this_07,
                             (MethodInfo_35A7350 *)method_01->klass->rgctx_data[0xe].method);
                }
                goto LAB_03f570ef;
              }
              if ((token->fields).Type == 0) {
                __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left
                ;
                if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
                goto LAB_03f57501;
                pIVar20 = DAT_05711068;
                if ((((System_String_c *)__this_06->klass)->_1).element_class !=
                    (DAT_05711068->_1).element_class) goto LAB_03f57602;
                auVar24 = il2cpp_glue_022c7330();
                pMVar19 = auVar24._8_8_;
                if (*auVar24._0_8_ == 0xf) {
                  CustomLogic_CustomLogicParser__AssertSymbolValue
                            (__this,pCVar11,0x23,(MethodInfo *)method_00);
                  iVar9 = *(int32_t *)&(token->fields).Operator;
                  __this_07 = (CustomLogic_CustomLogicContinueExpressionAst_o *)
                              il2cpp_runtime_glue(TypeInfo_CustomLogicBreakExpressionAst);
                  CustomLogic_CustomLogicBreakExpressionAst___ctor
                            ((CustomLogic_CustomLogicBreakExpressionAst_o *)__this_07,iVar9,
                             (MethodInfo *)0x0);
                  goto LAB_03f571e8;
                }
                if ((token->fields).Type == 0) {
                  __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)
                              (token->fields).Left;
                  if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
                  goto LAB_03f57501;
                  pIVar20 = DAT_05711068;
                  if ((((System_String_c *)__this_06->klass)->_1).element_class !=
                      (DAT_05711068->_1).element_class) goto LAB_03f57602;
                  auVar24 = il2cpp_glue_022c7330();
                  pMVar19 = auVar24._8_8_;
                  iVar8 = *auVar24._0_8_;
                  goto joined_r0x03f575eb;
                }
              }
            }
          }
          break;
        }
        iVar9 = *(int32_t *)&(token->fields).Operator;
        __this_05 = (CustomLogic_CustomLogicConditionalBlockAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicConditionalBlockAst)
        ;
        pMVar19 = (MethodInfo *)0x0;
        CustomLogic_CustomLogicConditionalBlockAst___ctor
                  (__this_05,(CustomLogic_CustomLogicToken_o *)token,iVar9,(MethodInfo *)0x0);
        if ((token->fields).Type == 0) {
          __this_06 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(token->fields).Left;
          if (__this_06 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0)
          goto LAB_03f57501;
          pIVar20 = DAT_05711068;
          if ((((System_String_c *)__this_06->klass)->_1).element_class !=
              (DAT_05711068->_1).element_class) goto LAB_03f57602;
          piVar13 = (int *)il2cpp_glue_022c7330();
          if (*piVar13 != 0x28) goto LAB_03f56fab;
          pSVar22 = (__this->fields)._tokens;
          if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
          goto LAB_03f57501;
          pCVar11 = (CustomLogic_CustomLogicToken_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar22,startIndex + 1,
                               MethodInfo_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar11,9,pMVar19);
          iVar8 = startIndex;
        }
        else {
LAB_03f56fab:
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar11,0xb,pMVar19);
          iVar8 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex + 1,method_04);
          pMVar19 = (MethodInfo *)(ulong)(iVar8 - 1U);
          pCVar16 = CustomLogic_CustomLogicParser__ParseExpression
                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,
                               startIndex + 2,iVar8 - 1U,in_R8);
          if (__this_05 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) goto LAB_03f57501;
          (__this_05->fields).Condition = pCVar16;
          il2cpp_runtime_glue(&(__this_05->fields).Condition,pCVar16);
          pSVar22 = (__this->fields)._tokens;
          if (pSVar22 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
          goto LAB_03f57501;
          pCVar11 = (CustomLogic_CustomLogicToken_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar22,iVar8 + 1,
                               MethodInfo_CustomLogicToken_get_Item);
          CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar11,9,pMVar19);
        }
        iVar8 = CustomLogic_CustomLogicParser__ParseAst
                          (__this,iVar8 + 2,(CustomLogic_CustomLogicBaseAst_o *)__this_05,pMVar19);
      }
    }
    method_01 = MethodInfo_Void_Add;
    bVar3 = (TypeInfo_CustomLogicBlockAst->_2).naturalAligment;
    if (((prev->klass->_2).naturalAligment < bVar3) ||
       ((prev->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicBlockAst)) {
LAB_03f57614:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(prev);
    }
    pCVar21 = prev[1].klass;
    if (pCVar21 == (CustomLogic_CustomLogicBaseAst_c *)0x0) {
LAB_03f57501:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = (int32_t *)((long)&(pCVar21->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar12 = ((System_Collections_Generic_List_object__Fields *)&(pCVar21->_1).name)->_items;
    if (pSVar12 == (System_Object_array *)0x0) goto LAB_03f57501;
    uVar4 = *(uint *)&(pCVar21->_1).namespaze;
    if (uVar4 < (uint)pSVar12->max_length) {
      method_01 = (MethodInfo *)(ulong)(uVar4 + 1);
      *(uint *)&(pCVar21->_1).namespaze = uVar4 + 1;
      pSVar12->m_Items[(int)uVar4] = (Il2CppObject *)__this_05;
      il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar4,__this_05);
      pMVar19 = extraout_RDX_06;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pCVar21,(Il2CppObject *)__this_05,
                 (MethodInfo_35A7350 *)method_01->klass->rgctx_data[0xe].method);
      pMVar19 = extraout_RDX_07;
    }
joined_r0x03f5695e:
    if (iVar8 != startIndex) {
LAB_03f570ef:
      iVar9 = CustomLogic_CustomLogicParser__ParseAst(__this,iVar8,prev,method_01);
      return iVar9;
    }
  }
  CustomLogic_CustomLogicParser__AssertFalse(__this,(CustomLogic_CustomLogicToken_o *)token,pMVar19)
  ;
  pIVar20 = extraout_RAX;
  __this_06 = token;
LAB_03f57602:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(__this_06,pIVar20);
}


// CustomLogic.CustomLogicParser$$FindLowestBinop
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindLowestBinop (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x3f58130

/* WARNING: Type propagation algorithm not settling */

int32_t CustomLogic_CustomLogicParser__FindLowestBinop
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,
                  MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  bool_conflict bVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicToken_o *token;
  int32_t *piVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  System_Collections_Generic_List_CustomLogicToken__o *__this_01;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int local_3c;
  int local_38;
  
  if (DAT_05703e9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicToken_get_Item);
    DAT_05703e9b = '\x01';
  }
  if (endIndex <= startIndex) {
    return -1;
  }
  local_38 = 0x7fffffff;
  local_3c = -1;
  iVar6 = 0;
  iVar5 = 0;
  __this_01 = (__this->fields)._tokens;
joined_r0x03f581ad:
  if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
LAB_03f58456:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  token = (CustomLogic_CustomLogicToken_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_01,startIndex,MethodInfo_CustomLogicToken_get_Item)
  ;
  method_00 = extraout_RDX;
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
    __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
    if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f58456;
    if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
    goto LAB_03f5845b;
    auVar7 = il2cpp_glue_022c7330();
    method_00 = auVar7._8_8_;
    if (*auVar7._0_8_ == 0xb) {
      iVar5 = iVar5 + 1;
    }
    else if ((token->fields).Type == 0) {
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
      if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
      goto LAB_03f58456;
      if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_03f5845b;
      auVar7 = il2cpp_glue_022c7330();
      method_00 = auVar7._8_8_;
      iVar5 = iVar5 - (uint)(*auVar7._0_8_ == 0xc);
    }
  }
  if (0 < iVar5) goto joined_r0x03f58358;
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0))
  goto LAB_03f5829f;
  __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
  if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f58456;
  if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
  goto LAB_03f5845b;
  auVar7 = il2cpp_glue_022c7330();
  method_00 = auVar7._8_8_;
  if (*auVar7._0_8_ == 0x1f) {
LAB_03f58396:
    if (iVar6 == 0) goto joined_r0x03f58358;
    __this_01 = (__this->fields)._tokens;
    if ((__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,startIndex + -1,
                            MethodInfo_CustomLogicToken_get_Item), pIVar4 == (Il2CppObject *)0x0)) goto LAB_03f58456;
    method_00 = extraout_RDX_00;
    if (*(int *)&pIVar4[1].klass == 0) {
      __this_01 = pIVar4[1].monitor;
      if (__this_01 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
        if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
        goto LAB_03f5845b;
        auVar7 = il2cpp_glue_022c7330();
        method_00 = auVar7._8_8_;
        if (*auVar7._0_8_ != 0xc) goto joined_r0x03f58358;
        goto LAB_03f5829f;
      }
      goto LAB_03f58456;
    }
  }
  else if ((token->fields).Type == 0) {
    __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(token->fields).Value;
    if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto LAB_03f58456;
    if ((__this_01->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
    goto LAB_03f5845b;
    auVar7 = il2cpp_glue_022c7330();
    method_00 = auVar7._8_8_;
    if (*auVar7._0_8_ == 0x1e) goto LAB_03f58396;
  }
LAB_03f5829f:
  bVar1 = CustomLogic_CustomLogicParser__IsSymbolBinop
                    ((CustomLogic_CustomLogicParser_o *)__this_01,token,method_00);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((token == (CustomLogic_CustomLogicToken_o *)0x0) ||
        (__this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)
                      (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18),
        __this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0)) ||
       (pIVar4 = (token->fields).Value, pIVar4 == (Il2CppObject *)0x0)) goto LAB_03f58456;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
LAB_03f5845b:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    piVar3 = (int32_t *)il2cpp_glue_022c7330();
    iVar2 = System_Collections_Generic_Dictionary<int__int>__get_Item
                      (__this_00,*piVar3,MethodInfo_Int32_get_Item);
    if (iVar2 <= local_38) {
      local_3c = startIndex;
      local_38 = iVar2;
    }
  }
joined_r0x03f58358:
  if (endIndex == startIndex + 1) {
    return local_3c;
  }
  iVar6 = iVar6 + -1;
  startIndex = startIndex + 1;
  __this_01 = (__this->fields)._tokens;
  goto joined_r0x03f581ad;
}


// CustomLogic.CustomLogicParser$$FindCommas
// il2cpp: System_Int32_array* CustomLogic_CustomLogicParser__FindCommas (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x3f58830

System_Int32_array *
CustomLogic_CustomLogicParser__FindCommas
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_int__o *__this_00;
  Il2CppObject *pIVar5;
  int *piVar6;
  System_Int32_array *pSVar7;
  int iVar8;
  
  if (DAT_05703e9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicToken_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    DAT_05703e9c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(__this_00,MethodInfo_List_1_System_Int32);
  if (startIndex < endIndex) {
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
      iVar8 = 0;
      pSVar3 = (__this->fields)._tokens;
      while (pSVar3 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,startIndex,
                            MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar5 != (Il2CppObject *)0x0) && (*(int *)&pIVar5[1].klass == 0)) {
          if (pIVar5[1].monitor == (long *)0x0) break;
          if (*(long *)(*(long *)pIVar5[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
          goto LAB_03f58b72;
          piVar6 = (int *)il2cpp_glue_022c7330();
          iVar8 = iVar8 + (uint)(*piVar6 == 0xb);
          if (*(int *)&pIVar5[1].klass == 0) {
            if (pIVar5[1].monitor == (long *)0x0) break;
            if (*(long *)(*(long *)pIVar5[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
            goto LAB_03f58b72;
            piVar6 = (int *)il2cpp_glue_022c7330();
            iVar8 = iVar8 - (uint)(*piVar6 == 0xc);
            if (*(int *)&pIVar5[1].klass == 0) {
              if (pIVar5[1].monitor == (long *)0x0) break;
              if (*(long *)(*(long *)pIVar5[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
              goto LAB_03f58b72;
              piVar6 = (int *)il2cpp_glue_022c7330();
              if ((iVar8 == 0) && (*piVar6 == 0x25)) break;
            }
          }
        }
        startIndex = startIndex + 1;
        if (endIndex == startIndex) goto LAB_03f58b47;
        pSVar3 = (__this->fields)._tokens;
      }
    }
    else {
      iVar8 = 0;
      pSVar3 = (__this->fields)._tokens;
      while (pSVar3 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,startIndex,
                            MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar5 != (Il2CppObject *)0x0) && (*(int *)&pIVar5[1].klass == 0)) {
          if (pIVar5[1].monitor == (long *)0x0) break;
          if (*(long *)(*(long *)pIVar5[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
          goto LAB_03f58b72;
          piVar6 = (int *)il2cpp_glue_022c7330();
          iVar8 = iVar8 + (uint)(*piVar6 == 0xb);
          if (*(int *)&pIVar5[1].klass == 0) {
            if (pIVar5[1].monitor == (long *)0x0) break;
            if (*(long *)(*(long *)pIVar5[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
            goto LAB_03f58b72;
            piVar6 = (int *)il2cpp_glue_022c7330();
            iVar8 = iVar8 - (uint)(*piVar6 == 0xc);
            if (*(int *)&pIVar5[1].klass == 0) {
              if (pIVar5[1].monitor == (long *)0x0) break;
              if (*(long *)(*(long *)pIVar5[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
LAB_03f58b72:
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              piVar6 = (int *)il2cpp_glue_022c7330();
              lVar4 = MethodInfo_Void_Add;
              if ((iVar8 == 0) && (*piVar6 == 0x25)) {
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (__this_00->fields)._items;
                if (pSVar7 == (System_Int32_array *)0x0) break;
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pSVar7->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pSVar7->m_Items[(int)uVar2] = startIndex;
                }
                else {
                  System_Collections_Generic_List<int>__AddWithResize
                            (__this_00,startIndex,
                             *(MethodInfo_3579120 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                iVar8 = 0;
              }
            }
          }
        }
        startIndex = startIndex + 1;
        if (endIndex == startIndex) goto LAB_03f58b47;
        pSVar3 = (__this->fields)._tokens;
      }
    }
  }
  else {
LAB_03f58b47:
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      pSVar7 = System_Collections_Generic_List<int>__ToArray(__this_00,MethodInfo_Int32___ToArray);
      return pSVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicParser$$FindClosingParen
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindClosingParen (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f58580

int32_t CustomLogic_CustomLogicParser__FindClosingParen
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int *piVar2;
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  int iVar3;
  
  if (DAT_05703e9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicToken_get_Item);
    DAT_05703e9d = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
LAB_03f5868e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar3 = 0;
  if (startIndex < (__this_00->fields)._size) {
    do {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,startIndex,
                          MethodInfo_CustomLogicToken_get_Item);
      if ((pIVar1 != (Il2CppObject *)0x0) && (*(int *)&pIVar1[1].klass == 0)) {
        if (pIVar1[1].monitor == (long *)0x0) goto LAB_03f5868e;
        if (*(long *)(*(long *)pIVar1[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
LAB_03f58693:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        piVar2 = (int *)il2cpp_glue_022c7330();
        if (*piVar2 == 0xb) {
          iVar3 = iVar3 + 1;
        }
        else if (*(int *)&pIVar1[1].klass == 0) {
          if (pIVar1[1].monitor == (long *)0x0) goto LAB_03f5868e;
          if (*(long *)(*(long *)pIVar1[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40))
          goto LAB_03f58693;
          piVar2 = (int *)il2cpp_glue_022c7330();
          if ((*piVar2 == 0xc) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
            return startIndex;
          }
        }
      }
      startIndex = startIndex + 1;
      __this_00 = (__this->fields)._tokens;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
      goto LAB_03f5868e;
    } while (startIndex < (__this_00->fields)._size);
  }
  return -1;
}


// CustomLogic.CustomLogicParser$$FindSemicolon
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindSemicolon (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f58ca0

int32_t CustomLogic_CustomLogicParser__FindSemicolon
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int *piVar2;
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (DAT_05703e9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicToken_get_Item);
    DAT_05703e9e = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
LAB_03f58d60:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (startIndex < (__this_00->fields)._size) {
    do {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,startIndex,
                          MethodInfo_CustomLogicToken_get_Item);
      if ((pIVar1 != (Il2CppObject *)0x0) && (*(int *)&pIVar1[1].klass == 0)) {
        if (pIVar1[1].monitor == (long *)0x0) goto LAB_03f58d60;
        if (*(long *)(*(long *)pIVar1[1].monitor + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        piVar2 = (int *)il2cpp_glue_022c7330();
        if (*piVar2 == 0x23) {
          return startIndex;
        }
      }
      startIndex = startIndex + 1;
      __this_00 = (__this->fields)._tokens;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
      goto LAB_03f58d60;
    } while (startIndex < (__this_00->fields)._size);
  }
  return -1;
}


// CustomLogic.CustomLogicParser$$IsSymbolIn
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolIn (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Collections_Generic_HashSet_int__o* symbols, const MethodInfo* method);
// 0x3f58d70

bool_conflict
CustomLogic_CustomLogicParser__IsSymbolIn
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          System_Collections_Generic_HashSet_int__o *symbols,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool_conflict bVar2;
  int32_t *piVar3;
  
  if (DAT_05703e9f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05703e9f = '\x01';
  }
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
    if ((symbols != (System_Collections_Generic_HashSet_int__o *)0x0) &&
       (pIVar1 = (token->fields).Value, pIVar1 != (Il2CppObject *)0x0)) {
      if ((pIVar1->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
        piVar3 = (int32_t *)il2cpp_glue_022c7330();
        bVar2 = System_Collections_Generic_HashSet<int>__Contains(symbols,*piVar3,MethodInfo_Boolean_Contains);
        return bVar2;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// CustomLogic.CustomLogicParser$$IsSymbolBinop
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolBinop (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x3f59070

bool_conflict
CustomLogic_CustomLogicParser__IsSymbolBinop
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppObject *pIVar1;
  bool_conflict bVar2;
  int32_t *piVar3;
  
  if (DAT_05703ea0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05703ea0 = '\x01';
  }
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)
               (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) &&
     (pIVar1 = (token->fields).Value, pIVar1 != (Il2CppObject *)0x0)) {
    if ((pIVar1->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
      piVar3 = (int32_t *)il2cpp_glue_022c7330();
      bVar2 = System_Collections_Generic_Dictionary<int__int>__ContainsKey
                        (__this_00,*piVar3,MethodInfo_Boolean_ContainsKey);
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicParser$$IsSymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x3f58530

bool_conflict
CustomLogic_CustomLogicParser__IsSymbolValue
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          int32_t symbolValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int *piVar2;
  
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return 0;
  }
  pIVar1 = (token->fields).Value;
  if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar1->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
    piVar2 = (int *)il2cpp_glue_022c7330();
    return (bool_conflict)CONCAT71((int7)((ulong)piVar2 >> 8),*piVar2 == symbolValue);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicParser$$IsAnySymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsAnySymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Int32_array* symbolValues, const MethodInfo* method);
// 0x3f58460

bool_conflict
CustomLogic_CustomLogicParser__IsAnySymbolValue
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          System_Int32_array *symbolValues,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  
  if (symbolValues == (System_Int32_array *)0x0) {
LAB_03f5851b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception(__this);
  }
  uVar5 = (uint)symbolValues->max_length;
  if (token == (CustomLogic_CustomLogicToken_o *)0x0) {
    uVar3 = 0;
    if ((int)uVar5 < 1) {
      return 0;
    }
    do {
      if (uVar5 <= uVar3) goto LAB_03f58516;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar5);
  }
  else if (0 < (int)uVar5) {
    uVar6 = 0;
    if ((symbolValues->max_length & 0xffffffff) != 0) {
      do {
        if ((token->fields).Type == 0) {
          pIVar2 = (token->fields).Value;
          __this = (CustomLogic_CustomLogicParser_o *)0x0;
          if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03f5851b;
          if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          iVar1 = symbolValues->m_Items[uVar6];
          piVar4 = (int *)il2cpp_glue_022c7330();
          if (*piVar4 == iVar1) {
            return (bool_conflict)CONCAT71((int7)((ulong)piVar4 >> 8),1);
          }
        }
        uVar6 = uVar6 + 1;
        uVar5 = (uint)symbolValues->max_length;
        if ((long)(int)uVar5 <= (long)uVar6) {
          return 0;
        }
      } while (uVar6 < uVar5);
    }
LAB_03f58516:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// CustomLogic.CustomLogicParser$$AssertSymbolValue
// il2cpp: void CustomLogic_CustomLogicParser__AssertSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x3f58e00

void CustomLogic_CustomLogicParser__AssertSymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t symbolValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int *piVar2;
  undefined8 uVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_Exception_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *__this_01;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == 0)) {
    pIVar1 = (token->fields).Value;
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    piVar2 = (int *)il2cpp_glue_022c7330();
    if (*piVar2 == symbolValue) {
      return;
    }
  }
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_string);
  values = (System_String_array *)il2cpp_glue_02274930(uVar3,6);
  il2cpp_glue_01f2f1a0(values);
  uVar3 = il2cpp_init_method_metadata(&"Parsing error at line ");
  il2cpp_glue_01f34f00(values,0,uVar3);
  il2cpp_glue_01f2f1a0(token);
  pSVar4 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00)
  ;
  il2cpp_glue_01f2f1a0(values);
  il2cpp_glue_01f34f00(values,1,pSVar4);
  il2cpp_glue_01f2f1a0(values);
  uVar3 = il2cpp_init_method_metadata(&", got ");
  __this_01 = values;
  il2cpp_glue_01f34f00(values,2,uVar3);
  pSVar4 = CustomLogic_CustomLogicParser__GetTokenString
                     ((CustomLogic_CustomLogicParser_o *)__this_01,token,method_01);
  il2cpp_glue_01f2f1a0(values);
  il2cpp_glue_01f34f00(values,3,pSVar4);
  il2cpp_glue_01f2f1a0(values);
  uVar3 = il2cpp_init_method_metadata(&", expected ");
  il2cpp_glue_01f34f00(values,4,uVar3);
  local_38.klass = (System_Enum_c *)il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = symbolValue;
  pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  il2cpp_glue_01f2f1a0(values);
  il2cpp_glue_01f34f00(values,5,pSVar4);
  pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
  System_Exception___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&MethodInfo_Void_AssertSymbolValue);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar3);
}


// CustomLogic.CustomLogicParser$$AssertTokenType
// il2cpp: void CustomLogic_CustomLogicParser__AssertTokenType (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t type, const MethodInfo* method);
// 0x3f586a0

void CustomLogic_CustomLogicParser__AssertTokenType
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t type,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Exception_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *__this_01;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == type)) {
    return;
  }
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_string);
  values = (System_String_array *)il2cpp_glue_02274930(uVar1,6);
  il2cpp_glue_01f2f1a0(values);
  uVar1 = il2cpp_init_method_metadata(&"Parsing error at line ");
  il2cpp_glue_01f34f00(values,0,uVar1);
  il2cpp_glue_01f2f1a0(token);
  pSVar2 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00)
  ;
  il2cpp_glue_01f2f1a0(values);
  il2cpp_glue_01f34f00(values,1,pSVar2);
  il2cpp_glue_01f2f1a0(values);
  uVar1 = il2cpp_init_method_metadata(&", got ");
  __this_01 = values;
  il2cpp_glue_01f34f00(values,2,uVar1);
  pSVar2 = CustomLogic_CustomLogicParser__GetTokenString
                     ((CustomLogic_CustomLogicParser_o *)__this_01,token,method_01);
  il2cpp_glue_01f2f1a0(values);
  il2cpp_glue_01f34f00(values,3,pSVar2);
  il2cpp_glue_01f2f1a0(values);
  uVar1 = il2cpp_init_method_metadata(&", expected ");
  il2cpp_glue_01f34f00(values,4,uVar1);
  local_38.klass = (System_Enum_c *)il2cpp_init_method_metadata(&TypeInfo_CustomLogicTokenType);
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = type;
  pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  il2cpp_glue_01f2f1a0(values);
  il2cpp_glue_01f34f00(values,5,pSVar2);
  pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
  System_Exception___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_AssertTokenType);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicParser$$AssertFalse
// il2cpp: void CustomLogic_CustomLogicParser__AssertFalse (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x3f58fd0

void CustomLogic_CustomLogicParser__AssertFalse
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_Exception_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  il2cpp_glue_01f2f1a0(token);
  pSVar1 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00)
  ;
  str3 = CustomLogic_CustomLogicParser__GetTokenString(__this,token,method_01);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"Parsing error at line ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&", got ");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,str3,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
  System_Exception___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_AssertFalse);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar2);
}


// CustomLogic.CustomLogicParser$$GetTokenString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetTokenString (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x3f59130

System_String_o *
CustomLogic_CustomLogicParser__GetTokenString
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined4 *puVar3;
  MethodInfo *extraout_RDX;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (DAT_05703ea1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
    il2cpp_init_method_metadata(&"null");
    DAT_05703ea1 = '\x01';
    method = extraout_RDX;
  }
  if (token != (CustomLogic_CustomLogicToken_o *)0x0) {
    pIVar1 = (token->fields).Value;
    if ((token->fields).Type == 0) {
      if (pIVar1 != (Il2CppObject *)0x0) {
        if ((pIVar1->klass->_1).element_class == (TypeInfo_CustomLogicSymbol->_1).element_class) {
          puVar3 = (undefined4 *)il2cpp_glue_022c7330();
          local_10 = *puVar3;
          local_20.klass = TypeInfo_CustomLogicSymbol;
          local_20.monitor = (void *)0xffffffffffffffff;
          pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
          return pSVar2;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar1,TypeInfo_CustomLogicSymbol,method);
      }
    }
    else if (pIVar1 != (Il2CppObject *)0x0) {
      vtable_dispatch = pIVar1->klass->vtable[3].methodPtr;
      pSVar2 = (System_String_o *)
               (*vtable_dispatch)
                         (pIVar1,pIVar1->klass->vtable[3].method,method,vtable_dispatch);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return "null";
}


