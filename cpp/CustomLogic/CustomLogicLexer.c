// Type: CustomLogic.CustomLogicLexer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLexer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicLexer.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicLexer$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicLexer__get_Compiler (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x3f50e10

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicLexer__get_Compiler
          (CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicLexer$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicLexer__set_Compiler (CustomLogic_CustomLogicLexer_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x3f50e20

void CustomLogic_CustomLogicLexer__set_Compiler
               (CustomLogic_CustomLogicLexer_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// CustomLogic.CustomLogicLexer$$.ctor
// il2cpp: void CustomLogic_CustomLogicLexer___ctor (CustomLogic_CustomLogicLexer_o* __this, System_String_o* source, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x3f50e30

void CustomLogic_CustomLogicLexer___ctor
               (CustomLogic_CustomLogicLexer_o *__this,System_String_o *source,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (DAT_05703e71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicToken);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicToken);
    il2cpp_init_method_metadata(&"");
    DAT_05703e71 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicToken__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicToken);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicToken);
  (__this->fields)._tokens = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._tokens,__this_00);
  (__this->fields).Error = "";
  il2cpp_runtime_glue(&(__this->fields).Error);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._source = source;
  il2cpp_runtime_glue(&(__this->fields)._source,source);
  (__this->fields)._Compiler_k__BackingField = compiler;
  il2cpp_runtime_glue(&__this->fields,compiler);
  return;
}


// CustomLogic.CustomLogicLexer$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__GetLineNumberString (CustomLogic_CustomLogicLexer_o* __this, int32_t line, const MethodInfo* method);
// 0x3f50f00

System_String_o *
CustomLogic_CustomLogicLexer__GetLineNumberString
          (CustomLogic_CustomLogicLexer_o *__this,int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,line,method);
    return pSVar1;
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicLexer$$GetTokens
// il2cpp: System_Collections_Generic_List_CustomLogicToken__o* CustomLogic_CustomLogicLexer__GetTokens (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x3f50f30

System_Collections_Generic_List_CustomLogicToken__o *
CustomLogic_CustomLogicLexer__GetTokens(CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t *piVar2;
  System_Char_array **ppSVar3;
  int32_t length;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  uint16_t uVar6;
  uint uVar7;
  bool_conflict bVar8;
  int iVar9;
  System_Char_array *pSVar10;
  System_String_o *pSVar11;
  System_String_o *str1;
  Il2CppObject *pIVar12;
  ulong uVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *in_R8;
  uint startIndex;
  bool bVar14;
  uint16_t local_3a;
  float local_38;
  int32_t local_34;
  
  if (DAT_05703e72 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"true");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&".");
    DAT_05703e72 = '\x01';
  }
  local_3a = 0;
  local_34 = 0;
  (__this->fields)._line = 0;
  pSVar4 = (__this->fields)._tokens;
  if (pSVar4 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar2 = &(pSVar4->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar11 = (__this->fields)._source;
    if (pSVar11 != (System_String_o *)0x0) {
      startIndex = 0;
      pSVar10 = System_String__ToCharArray(pSVar11,(MethodInfo *)0x0);
      ppSVar3 = &(__this->fields)._chars;
      (__this->fields)._chars = pSVar10;
      il2cpp_runtime_glue(ppSVar3);
      pSVar10 = (__this->fields)._chars;
      if (pSVar10 != (System_Char_array *)0x0) {
        iVar9 = (int)pSVar10->max_length;
        bVar14 = iVar9 != 0;
        if (0 < iVar9) {
          do {
            if (!bVar14) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            local_3a = pSVar10->m_Items[(int)startIndex];
            if (local_3a == 10) {
              piVar2 = &(__this->fields)._line;
              *piVar2 = *piVar2 + 1;
LAB_03f51045:
              startIndex = startIndex + 1;
              pSVar10 = *ppSVar3;
            }
            else {
              if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
              pSVar10 = *ppSVar3;
              if (pSVar10 == (System_Char_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar7 = (uint)pSVar10->max_length;
              uVar13 = (ulong)(uVar7 - 1);
              if ((int)startIndex < (int)(uVar7 - 1)) {
                if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                  il2cpp_init_class();
                  uVar7 = (uint)pSVar10->max_length;
                }
                uVar1 = startIndex + 1;
                uVar13 = (ulong)uVar1;
                if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                str1 = System_Char__ToString
                                 ((short)pSVar10 + (short)uVar1 * 2 + 0x20,(MethodInfo *)0x0);
                pSVar11 = System_String__Concat(pSVar11,str1,(MethodInfo *)0x0);
              }
              uVar6 = local_3a;
              if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar8 = System_Char__IsLetter(uVar6,(MethodInfo *)0x0);
              uVar6 = local_3a;
              method_00 = (MethodInfo *)CONCAT71((int7)(uVar13 >> 8),local_3a == 0x5f);
              if ((char)bVar8 != '\0' || local_3a == 0x5f) {
                pSVar11 = CustomLogic_CustomLogicLexer__ScanBool(__this,startIndex,method_01);
                bVar8 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  pSVar11 = CustomLogic_CustomLogicLexer__ScanAlphaSymbol
                                      (__this,startIndex,method_02);
                  bVar8 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    pSVar11 = CustomLogic_CustomLogicLexer__ScanName(__this,startIndex,method_04);
                    CustomLogic_CustomLogicLexer__AddToken
                              (__this,2,(Il2CppObject *)pSVar11,(__this->fields)._line,in_R8);
                    if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                  }
                  else {
                    bVar8 = System_String__op_Equality(pSVar11,"null",(MethodInfo *)0x0);
                    if ((char)bVar8 == '\0') {
                      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) ==
                          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      local_38 = (float)System_Collections_Generic_Dictionary<object__int>__get_Item
                                                  ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  (Il2CppObject *)pSVar11,MethodInfo_Int32_get_Item);
                      pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068);
                      CustomLogic_CustomLogicLexer__AddToken
                                (__this,0,pIVar12,(__this->fields)._line,in_R8);
                    }
                    else {
                      CustomLogic_CustomLogicLexer__AddToken
                                (__this,1,(Il2CppObject *)0x0,(__this->fields)._line,in_R8);
                    }
                    if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                  }
                }
                else {
                  bVar8 = System_String__op_Equality(pSVar11,"true",(MethodInfo *)0x0);
                  local_38 = (float)CONCAT31(local_38._1_3_,(char)bVar8);
                  pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_38);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,1,pIVar12,(__this->fields)._line,in_R8);
                  if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
              }
              else {
                if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = System_Char__IsDigit(uVar6,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  if (local_3a == 0x23) {
                    pSVar11 = CustomLogic_CustomLogicLexer__ScanComment(__this,startIndex,method_03)
                    ;
                    if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    iVar9 = (pSVar11->fields)._stringLength;
LAB_03f5135c:
                    startIndex = iVar9 + startIndex;
                    pSVar10 = *ppSVar3;
                  }
                  else {
                    if (local_3a == 0x22) {
                      pSVar11 = CustomLogic_CustomLogicLexer__ScanStringLiteral
                                          (__this,startIndex,&local_34,method_00);
                      CustomLogic_CustomLogicLexer__AddToken
                                (__this,1,(Il2CppObject *)pSVar11,(__this->fields)._line,in_R8);
                      iVar9 = local_34;
                      goto LAB_03f5135c;
                    }
                    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar5 = *(System_Collections_Generic_HashSet_object__o **)
                              (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
                    if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar8 = System_Collections_Generic_HashSet<object>__Contains
                                      (pSVar5,(Il2CppObject *)pSVar11,MethodInfo_Boolean_Contains);
                    if ((char)bVar8 == '\0') {
                      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar5 = *(System_Collections_Generic_HashSet_object__o **)
                                (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
                      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar11 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
                      if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar8 = System_Collections_Generic_HashSet<object>__Contains
                                        (pSVar5,(Il2CppObject *)pSVar11,MethodInfo_Boolean_Contains);
                      if ((char)bVar8 == '\0') goto LAB_03f51045;
                      if (local_3a != 0x2f) {
LAB_03f515b5:
                        if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
                        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pSVar11 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
                        if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0
                           ) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        local_38 = (float)System_Collections_Generic_Dictionary<object__int>__get_Item
                                                    (__this_00,(Il2CppObject *)pSVar11,MethodInfo_Int32_get_Item)
                        ;
                        pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068);
                        CustomLogic_CustomLogicLexer__AddToken
                                  (__this,0,pIVar12,(__this->fields)._line,in_R8);
                        goto LAB_03f51045;
                      }
                      pSVar10 = *ppSVar3;
                      if (pSVar10 == (System_Char_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      uVar7 = startIndex + 1;
                      uVar1 = (uint)pSVar10->max_length;
                      if ((int)uVar1 <= (int)uVar7) goto LAB_03f515b5;
                      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      if (pSVar10->m_Items[(int)uVar7] != 0x2a) goto LAB_03f515b5;
                      pSVar11 = CustomLogic_CustomLogicLexer__ScanBlockComment
                                          (__this,uVar7,method_05);
                      if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      startIndex = (pSVar11->fields)._stringLength + startIndex + 4;
                      pSVar10 = *ppSVar3;
                      goto joined_r0x03f51443;
                    }
                    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) ==
                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    local_38 = (float)System_Collections_Generic_Dictionary<object__int>__get_Item
                                                ((System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                 (Il2CppObject *)pSVar11,MethodInfo_Int32_get_Item);
                    pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068);
                    CustomLogic_CustomLogicLexer__AddToken
                              (__this,0,pIVar12,(__this->fields)._line,in_R8);
                    pSVar10 = *ppSVar3;
                  }
                  startIndex = startIndex + 2;
                  goto joined_r0x03f51443;
                }
                pSVar11 = CustomLogic_CustomLogicLexer__ScanNumber(__this,startIndex,method_03);
                if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar8 = System_String__Contains(pSVar11,".",(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  local_38 = (float)System_Int32__Parse(pSVar11,(MethodInfo *)0x0);
                  pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,1,pIVar12,(__this->fields)._line,in_R8);
                }
                else {
                  local_38 = System_Single__Parse(pSVar11,(MethodInfo *)0x0);
                  pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_38);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,1,pIVar12,(__this->fields)._line,in_R8);
                }
              }
              startIndex = (pSVar11->fields)._stringLength + startIndex;
              pSVar10 = *ppSVar3;
            }
joined_r0x03f51443:
            if (pSVar10 == (System_Char_array *)0x0) goto LAB_03f51c8e;
            uVar7 = (uint)pSVar10->max_length;
            bVar14 = startIndex < uVar7;
          } while ((int)startIndex < (int)uVar7);
        }
        return (__this->fields)._tokens;
      }
    }
  }
LAB_03f51c8e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$AddToken
// il2cpp: void CustomLogic_CustomLogicLexer__AddToken (CustomLogic_CustomLogicLexer_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x3f51e30

void CustomLogic_CustomLogicLexer__AddToken
               (CustomLogic_CustomLogicLexer_o *__this,int32_t type,Il2CppObject *value,int32_t line
               ,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  CustomLogic_CustomLogicToken_array *pCVar3;
  long lVar4;
  CustomLogic_CustomLogicToken_o *__this_01;
  
  if (DAT_05703e73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicToken);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05703e73 = '\x01';
  }
  __this_00 = (__this->fields)._tokens;
  __this_01 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicToken);
  CustomLogic_CustomLogicToken___ctor(__this_01,type,value,line,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicToken_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = __this_01;
        il2cpp_runtime_glue(pCVar3->m_Items + (int)uVar2,__this_01);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$ScanAlphaSymbol
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanAlphaSymbol (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f51f10

System_String_o *
CustomLogic_CustomLogicLexer__ScanAlphaSymbol
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar2;
  System_Char_array *pSVar3;
  System_String_o *str1;
  System_String_o *str0;
  long lVar4;
  
  if (DAT_05703e74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&"");
    DAT_05703e74 = '\x01';
  }
  pSVar3 = (__this->fields)._chars;
  if (pSVar3 != (System_Char_array *)0x0) {
    lVar4 = (long)startIndex * 2 + 0x20;
    str0 = "";
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 <= startIndex) {
        return "";
      }
      if (uVar1 <= (uint)startIndex) {
LAB_03f520a7:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      c = *(uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_Char__IsLetter(c,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._chars;
      if ((char)bVar2 == '\0') {
        if (pSVar3 == (System_Char_array *)0x0) break;
        if ((uint)pSVar3->max_length <= (uint)startIndex) goto LAB_03f520a7;
        if (*(short *)((long)pSVar3->m_Items + lVar4 + -0x20) != 0x5f) {
          if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                       (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            bVar2 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_00,(Il2CppObject *)str0,MethodInfo_Boolean_Contains);
            if ((char)bVar2 != '\0') {
              return str0;
            }
            return "";
          }
          break;
        }
      }
      else if (pSVar3 == (System_Char_array *)0x0) break;
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)pSVar3->max_length <= (uint)startIndex) goto LAB_03f520a7;
      str1 = System_Char__ToString((short)pSVar3 + (short)lVar4,(MethodInfo *)0x0);
      str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar3 = (__this->fields)._chars;
      lVar4 = lVar4 + 2;
    } while (pSVar3 != (System_Char_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$ScanBool
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBool (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f51cd0

System_String_o *
CustomLogic_CustomLogicLexer__ScanBool
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  short sVar2;
  bool_conflict bVar3;
  System_Char_array *pSVar4;
  System_String_o *str1;
  System_String_o *a;
  long lVar5;
  
  if (DAT_05703e75 == '\0') {
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    il2cpp_init_method_metadata(&"");
    DAT_05703e75 = '\x01';
  }
  pSVar4 = (__this->fields)._chars;
  if (pSVar4 != (System_Char_array *)0x0) {
    lVar5 = (long)startIndex * 2 + 0x20;
    a = "";
    do {
      uVar1 = (uint)pSVar4->max_length;
      if ((int)uVar1 <= startIndex) {
        return "";
      }
      if (uVar1 <= (uint)startIndex) {
LAB_03f51e24:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      c = *(uint16_t *)((long)pSVar4->m_Items + lVar5 + -0x20);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_Char__IsLetter(c,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        bVar3 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return a;
        }
        bVar3 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return "";
        }
        return a;
      }
      pSVar4 = (__this->fields)._chars;
      if (pSVar4 == (System_Char_array *)0x0) break;
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)pSVar4->max_length <= (uint)startIndex) goto LAB_03f51e24;
      startIndex = startIndex + 1;
      sVar2 = (short)lVar5;
      lVar5 = lVar5 + 2;
      str1 = System_Char__ToString((short)pSVar4 + sVar2,(MethodInfo *)0x0);
      a = System_String__Concat(a,str1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._chars;
    } while (pSVar4 != (System_Char_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$ScanNumber
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanNumber (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f521f0

System_String_o *
CustomLogic_CustomLogicLexer__ScanNumber
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  bool_conflict bVar2;
  System_Char_array *pSVar3;
  System_String_o *str1;
  System_String_o *str0;
  long lVar4;
  
  if (DAT_05703e76 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05703e76 = '\x01';
  }
  pSVar3 = (__this->fields)._chars;
  if (pSVar3 != (System_Char_array *)0x0) {
    lVar4 = (long)startIndex * 2 + 0x20;
    str0 = "";
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 <= startIndex) {
        return str0;
      }
      if (uVar1 <= (uint)startIndex) {
LAB_03f52316:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      c = *(uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_Char__IsDigit(c,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._chars;
      if ((char)bVar2 == '\0') {
        if (pSVar3 == (System_Char_array *)0x0) break;
        if ((uint)pSVar3->max_length <= (uint)startIndex) goto LAB_03f52316;
        if (*(short *)((long)pSVar3->m_Items + lVar4 + -0x20) != 0x2e) {
          return str0;
        }
      }
      else if (pSVar3 == (System_Char_array *)0x0) break;
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)pSVar3->max_length <= (uint)startIndex) goto LAB_03f52316;
      str1 = System_Char__ToString((short)pSVar3 + (short)lVar4,(MethodInfo *)0x0);
      str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar3 = (__this->fields)._chars;
      lVar4 = lVar4 + 2;
    } while (pSVar3 != (System_Char_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$ScanName
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanName (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f520c0

System_String_o *
CustomLogic_CustomLogicLexer__ScanName
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  bool_conflict bVar2;
  System_Char_array *pSVar3;
  System_String_o *str1;
  System_String_o *str0;
  long lVar4;
  
  if (DAT_05703e77 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05703e77 = '\x01';
  }
  pSVar3 = (__this->fields)._chars;
  if (pSVar3 != (System_Char_array *)0x0) {
    lVar4 = (long)startIndex * 2 + 0x20;
    str0 = "";
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 <= startIndex) {
        return str0;
      }
      if (uVar1 <= (uint)startIndex) {
LAB_03f521e6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      c = *(uint16_t *)((long)pSVar3->m_Items + lVar4 + -0x20);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._chars;
      if ((char)bVar2 == '\0') {
        if (pSVar3 == (System_Char_array *)0x0) break;
        if ((uint)pSVar3->max_length <= (uint)startIndex) goto LAB_03f521e6;
        if (*(short *)((long)pSVar3->m_Items + lVar4 + -0x20) != 0x5f) {
          return str0;
        }
      }
      else if (pSVar3 == (System_Char_array *)0x0) break;
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)pSVar3->max_length <= (uint)startIndex) goto LAB_03f521e6;
      str1 = System_Char__ToString((short)pSVar3 + (short)lVar4,(MethodInfo *)0x0);
      str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar3 = (__this->fields)._chars;
      lVar4 = lVar4 + 2;
    } while (pSVar3 != (System_Char_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$ScanStringLiteral
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanStringLiteral (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, int32_t* rawLiteralLength, const MethodInfo* method);
// 0x3f52320

System_String_o *
CustomLogic_CustomLogicLexer__ScanStringLiteral
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,int32_t *rawLiteralLength,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint16_t uVar2;
  int iVar3;
  uint uVar4;
  System_Char_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  undefined8 *puVar7;
  undefined8 uVar8;
  System_Exception_o *__this_00;
  uint uVar9;
  uint16_t local_3a;
  CustomLogic_CustomLogicLexer_o *local_38;
  
  local_38 = __this;
  if (DAT_05703e78 == '\0') {
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"\\");
    il2cpp_init_method_metadata(&"\t");
    il2cpp_init_method_metadata(&"\"");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"\r");
    DAT_05703e78 = '\x01';
  }
  pSVar6 = "";
  local_3a = 0;
  *rawLiteralLength = 0;
  pSVar5 = (local_38->fields)._chars;
  do {
    if (pSVar5 == (System_Char_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar9 = startIndex + 1;
    uVar4 = (uint)pSVar5->max_length;
    if ((int)uVar4 <= (int)uVar9) {
LAB_03f52575:
      uVar8 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar8);
      pSVar6 = (System_String_o *)il2cpp_init_method_metadata(&"Unclosed string literal");
      System_Exception___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
      uVar8 = il2cpp_init_method_metadata(&MethodInfo_String_ScanStringLiteral);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar8);
    }
    iVar3 = *rawLiteralLength;
    *rawLiteralLength = iVar3 + 1;
    if (uVar4 <= uVar9) goto LAB_03f52570;
    uVar2 = pSVar5->m_Items[(int)uVar9];
    if (uVar2 == 10) {
      piVar1 = &(local_38->fields)._line;
      *piVar1 = *piVar1 + 1;
      iVar3 = *(int *)(DAT_057110a8 + 0xe4);
joined_r0x03f524ce:
      if (iVar3 == 0) {
        il2cpp_init_class();
        uVar4 = (uint)pSVar5->max_length;
      }
      if (uVar4 <= uVar9) {
LAB_03f52570:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      str1 = System_Char__ToString((short)uVar9 * 2 + 0x20 + (short)pSVar5,(MethodInfo *)0x0);
    }
    else {
      if (uVar2 != 0x5c) {
        if (uVar2 == 0x22) {
          *rawLiteralLength = iVar3;
          return pSVar6;
        }
        iVar3 = *(int *)(DAT_057110a8 + 0xe4);
        goto joined_r0x03f524ce;
      }
      uVar9 = startIndex + 2;
      if ((int)uVar4 <= (int)uVar9) goto LAB_03f52575;
      *rawLiteralLength = iVar3 + 2;
      if (uVar4 <= uVar9) goto LAB_03f52570;
      local_3a = pSVar5->m_Items[(int)uVar9];
      switch(local_3a) {
      case 0x5c:
        puVar7 = &"\\";
        break;
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
switchD_03f52493_caseD_5d:
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        str1 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
        goto LAB_03f523c5;
      case 0x6e:
        puVar7 = &"\n";
        break;
      case 0x72:
        puVar7 = &"\r";
        break;
      case 0x74:
        puVar7 = &"\t";
        break;
      default:
        if (local_3a != 0x22) goto switchD_03f52493_caseD_5d;
        puVar7 = &"\"";
      }
      str1 = (System_String_o *)*puVar7;
    }
LAB_03f523c5:
    pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
    pSVar5 = (local_38->fields)._chars;
    startIndex = uVar9;
  } while( true );
}


// CustomLogic.CustomLogicLexer$$ScanComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f525d0

System_String_o *
CustomLogic_CustomLogicLexer__ScanComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  System_Char_array *pSVar2;
  uint uVar3;
  System_String_o *str1;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_Exception_o *__this_00;
  
  if (DAT_05703e79 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05703e79 = '\x01';
  }
  pSVar2 = (__this->fields)._chars;
  pSVar4 = "";
  while( true ) {
    if (pSVar2 == (System_Char_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    startIndex = startIndex + 1;
    uVar3 = (uint)pSVar2->max_length;
    if ((int)uVar3 <= startIndex) {
      uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
      pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Unclosed comment");
      System_Exception___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&MethodInfo_String_ScanComment);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar5);
    }
    if (uVar3 <= (uint)startIndex) break;
    if (pSVar2->m_Items[startIndex] == 10) {
      piVar1 = &(__this->fields)._line;
      *piVar1 = *piVar1 + 1;
      return pSVar4;
    }
    if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
      il2cpp_init_class();
      uVar3 = (uint)pSVar2->max_length;
    }
    if (uVar3 <= (uint)startIndex) break;
    str1 = System_Char__ToString((short)pSVar2 + (short)startIndex * 2 + 0x20,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._chars;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLexer$$ScanBlockComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBlockComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x3f526f0

System_String_o *
CustomLogic_CustomLogicLexer__ScanBlockComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_Exception_o *__this_00;
  System_Char_array *pSVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  if (DAT_05703e7a == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05703e7a = '\x01';
  }
  pSVar7 = (__this->fields)._chars;
  if (pSVar7 != (System_Char_array *)0x0) {
    uVar10 = startIndex + 2;
    lVar9 = (long)(startIndex + 1) * 2 + 0x20;
    pSVar5 = "";
    do {
      uVar8 = uVar10 - 1;
      uVar4 = (uint)pSVar7->max_length;
      if ((int)uVar4 <= (int)uVar8) {
        uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
        pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Unclosed block comment");
        System_Exception___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
        uVar6 = il2cpp_init_method_metadata(&MethodInfo_String_ScanBlockComment);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar6);
      }
      if (uVar4 <= uVar8) goto LAB_03f5282c;
      sVar2 = *(short *)((long)pSVar7->m_Items + lVar9 + -0x20);
      if (sVar2 == 0x2a) {
        if ((int)uVar10 < (int)uVar4) {
          if (uVar4 <= uVar10) goto LAB_03f5282c;
          if (pSVar7->m_Items[(int)uVar10] == 0x2f) {
            return pSVar5;
          }
        }
LAB_03f527c0:
        iVar3 = *(int *)(DAT_057110a8 + 0xe4);
      }
      else {
        if (sVar2 != 10) goto LAB_03f527c0;
        piVar1 = &(__this->fields)._line;
        *piVar1 = *piVar1 + 1;
        iVar3 = *(int *)(DAT_057110a8 + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_init_class();
        uVar4 = (uint)pSVar7->max_length;
      }
      if (uVar4 <= uVar8) {
LAB_03f5282c:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      str1 = System_Char__ToString((short)pSVar7 + (short)lVar9,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(pSVar5,str1,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._chars;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 2;
    } while (pSVar7 != (System_Char_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


