// Type: CustomLogic.CustomLogicLexer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLexer.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicLexer.cs
// --------------------------------

// CustomLogic.CustomLogicLexer$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicLexer__get_Compiler (CustomLogic_CustomLogicLexer_o* __this, const MethodInfo* method);
// 0x425c5d0

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicLexer__get_Compiler(CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicLexer$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicLexer__set_Compiler (CustomLogic_CustomLogicLexer_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x425c5e0

void CustomLogic_CustomLogicLexer__set_Compiler
               (CustomLogic_CustomLogicLexer_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// CustomLogic.CustomLogicLexer$$.ctor
// il2cpp: void CustomLogic_CustomLogicLexer___ctor (CustomLogic_CustomLogicLexer_o* __this, System_String_o* source, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x425c5f0

void CustomLogic_CustomLogicLexer___ctor
               (CustomLogic_CustomLogicLexer_o *__this,System_String_o *source,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (g_data_057adbdc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicToken);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicToken);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbdc = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicToken__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicToken);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicToken);
  (__this->fields)._tokens = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tokens,__this_00);
  (__this->fields).Error = "";
  il2cpp_runtime_helper_022b4080(&(__this->fields).Error);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._source = source;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._source,source);
  (__this->fields)._Compiler_k__BackingField = compiler;
  il2cpp_runtime_helper_022b4080(&__this->fields,compiler);
  return;
}


// CustomLogic.CustomLogicLexer$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__GetLineNumberString (CustomLogic_CustomLogicLexer_o* __this, int32_t line, const MethodInfo* method);
// 0x425c6c0

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
// 0x425c6f0

System_Collections_Generic_List_CustomLogicToken__o *
CustomLogic_CustomLogicLexer__GetTokens(CustomLogic_CustomLogicLexer_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t *piVar2;
  System_Char_array **ppSVar3;
  int32_t length;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  CustomLogic_CustomLogicCompiler_o *__this_01;
  uint16_t uVar5;
  char cVar6;
  uint uVar7;
  bool_conflict bVar8;
  int iVar9;
  System_Char_array *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  undefined8 uVar14;
  System_String_o *str0;
  System_String_o *str2;
  long lVar15;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar16;
  MethodInfo_362B8B0 *method_00;
  long *plVar17;
  ulong uVar18;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  long *unaff_RBX;
  MethodInfo *in_R8;
  uint startIndex;
  bool bVar19;
  undefined1 auVar20 [12];
  uint16_t local_3a;
  float local_38;
  int32_t local_34;
  
  if (g_data_057adbdd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057adbdd = '\x01';
  }
  local_3a = 0;
  local_34 = 0;
  (__this->fields)._line = 0;
  pSVar16 = (__this->fields)._tokens;
  if (pSVar16 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar2 = &(pSVar16->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (pSVar16->fields)._size;
    (pSVar16->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar16->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar11 = (__this->fields)._source;
    if (pSVar11 != (System_String_o *)0x0) {
      startIndex = 0;
      pSVar10 = System_String__ToCharArray(pSVar11,(MethodInfo *)0x0);
      ppSVar3 = &(__this->fields)._chars;
      (__this->fields)._chars = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar3);
      pSVar10 = (__this->fields)._chars;
      if (pSVar10 != (System_Char_array *)0x0) {
        iVar9 = (int)pSVar10->max_length;
        bVar19 = iVar9 != 0;
        if (0 < iVar9) {
          do {
            if (!bVar19) {
              il2cpp_runtime_helper_022b2ca0();
label_0425ce21:
              il2cpp_runtime_helper_022b2c90();
label_0425ce26:
              il2cpp_runtime_helper_022b2ca0();
label_0425ce2b:
              il2cpp_runtime_helper_022b2c90();
label_0425ce30:
              il2cpp_runtime_helper_022b2c90();
label_0425ce35:
              il2cpp_runtime_helper_022b2ca0();
label_0425ce3a:
              il2cpp_runtime_helper_022b2c90();
label_0425ce3f:
              il2cpp_runtime_helper_022b2c90();
label_0425ce44:
              il2cpp_runtime_helper_022b2c90();
label_0425ce49:
              il2cpp_runtime_helper_022b2c90();
label_0425ce4e:
              il2cpp_runtime_helper_022b2c90();
label_0425ce53:
              il2cpp_runtime_helper_022b2c90();
label_0425ce58:
              il2cpp_runtime_helper_022b2c90();
label_0425ce5d:
              il2cpp_runtime_helper_022b2c90();
label_0425ce62:
              il2cpp_runtime_helper_022b2c90();
label_0425ce67:
              auVar20 = il2cpp_runtime_helper_022b2c90();
              if (auVar20._8_4_ != 1) {
                _Unwind_Resume(auVar20._0_8_);
              }
              unaff_RBX = (long *)__cxa_begin_catch(auVar20._0_8_);
              uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar6 = il2cpp_runtime_helper_0233e000(uVar14,*(undefined8 *)*unaff_RBX);
              if (cVar6 == '\0') goto label_0425d453;
              plVar17 = (long *)*unaff_RBX;
              __cxa_end_catch();
              local_38 = (float)((__this->fields)._line + 1);
              __this_01 = (__this->fields)._Compiler_k__BackingField;
              if (__this_01 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
                pSVar11 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
              }
              else {
                pSVar11 = CustomLogic_CustomLogicCompiler__FormatLineNumber
                                    (__this_01,(int32_t)local_38,method_07);
              }
              unaff_RBX = (long *)0x0;
              if (plVar17 != (long *)0x0) {
                pSVar12 = (System_String_o *)
                          (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
                str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error parsing custom logic at line ");
                str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&": ");
                pSVar11 = System_String__Concat_3af7470(str0,pSVar11,str2,pSVar12,(MethodInfo *)0x0);
                (__this->fields).Error = pSVar11;
                il2cpp_runtime_helper_022b4080(&(__this->fields).Error,pSVar11);
                pSVar11 = (__this->fields).Error;
                lVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0(lVar15);
                }
                ApplicationManagers_DebugConsole__Log(pSVar11,1,(MethodInfo *)0x0);
                uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicToken);
                pSVar16 = (System_Collections_Generic_List_CustomLogicToken__o *)il2cpp_runtime_helper_023052d0(uVar14);
                method_00 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicToken);
                System_Collections_Generic_List_object____ctor
                          ((System_Collections_Generic_List_object__o *)pSVar16,method_00);
                return pSVar16;
              }
              goto label_0425d44e;
            }
            local_3a = pSVar10->m_Items[(int)startIndex];
            if (local_3a == 10) {
              piVar2 = &(__this->fields)._line;
              *piVar2 = *piVar2 + 1;
label_0425c805:
              startIndex = startIndex + 1;
              pSVar10 = *ppSVar3;
            }
            else {
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar11 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
              pSVar10 = *ppSVar3;
              if (pSVar10 == (System_Char_array *)0x0) goto label_0425ce21;
              uVar7 = (uint)pSVar10->max_length;
              uVar18 = (ulong)(uVar7 - 1);
              if ((int)startIndex < (int)(uVar7 - 1)) {
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  uVar7 = (uint)pSVar10->max_length;
                }
                uVar1 = startIndex + 1;
                uVar18 = (ulong)uVar1;
                if (uVar7 <= uVar1) goto label_0425ce26;
                pSVar12 = System_Char__ToString((short)pSVar10 + (short)uVar1 * 2 + 0x20,(MethodInfo *)0x0);
                pSVar11 = System_String__Concat_3ae5ba0(pSVar11,pSVar12,(MethodInfo *)0x0);
              }
              uVar5 = local_3a;
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = System_Char__IsLetter(uVar5,(MethodInfo *)0x0);
              uVar5 = local_3a;
              unaff_RBX = (long *)(ulong)local_3a;
              method_01 = (MethodInfo *)CONCAT71((int7)(uVar18 >> 8),local_3a == 0x5f);
              if ((char)bVar8 == '\0' && local_3a != 0x5f) {
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar8 = System_Char__IsDigit(uVar5,(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  pSVar11 = CustomLogic_CustomLogicLexer__ScanNumber(__this,startIndex,method_04);
                  if (pSVar11 == (System_String_o *)0x0) goto label_0425ce2b;
                  bVar8 = System_String__Contains(pSVar11,".",(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    local_38 = (float)System_Int32__Parse(pSVar11,(MethodInfo *)0x0);
                    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
                    CustomLogic_CustomLogicLexer__AddToken(__this,1,pIVar13,(__this->fields)._line,in_R8);
                  }
                  else {
                    local_38 = System_Single__Parse(pSVar11,(MethodInfo *)0x0);
                    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_38);
                    CustomLogic_CustomLogicLexer__AddToken(__this,1,pIVar13,(__this->fields)._line,in_R8);
                  }
                  goto label_0425cc90;
                }
                if (local_3a == 0x23) {
                  pSVar11 = CustomLogic_CustomLogicLexer__ScanComment(__this,startIndex,method_04);
                  if (pSVar11 != (System_String_o *)0x0) {
                    iVar9 = (pSVar11->fields)._stringLength;
                    goto label_0425cb1c;
                  }
                  goto label_0425ce58;
                }
                if (local_3a == 0x22) {
                  pSVar11 = CustomLogic_CustomLogicLexer__ScanStringLiteral
                                      (__this,startIndex,&local_34,method_01);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,1,(Il2CppObject *)pSVar11,(__this->fields)._line,in_R8);
                  iVar9 = local_34;
label_0425cb1c:
                  startIndex = iVar9 + startIndex + 2;
                  pSVar10 = *ppSVar3;
                  goto joined_r0x0425cc03;
                }
                if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
                if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ce3f;
                bVar8 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar4,(Il2CppObject *)pSVar11,MethodInfo_Boolean_Contains);
                if ((char)bVar8 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
                  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar11 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
                  if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425ce53;
                  bVar8 = System_Collections_Generic_HashSet_object___Contains
                                    (pSVar4,(Il2CppObject *)pSVar11,MethodInfo_Boolean_Contains);
                  if ((char)bVar8 == '\0') goto label_0425c805;
                  if (local_3a != 0x2f) {
label_0425cd75:
                    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
                    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar11 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
                    goto label_0425ce44;
                    local_38 = (float)System_Collections_Generic_Dictionary_object__int___get_Item
                                                (__this_00,(Il2CppObject *)pSVar11,MethodInfo_Int32_get_Item);
                    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                    CustomLogic_CustomLogicLexer__AddToken(__this,0,pIVar13,(__this->fields)._line,in_R8);
                    goto label_0425c805;
                  }
                  pSVar10 = *ppSVar3;
                  if (pSVar10 == (System_Char_array *)0x0) goto label_0425ce3a;
                  uVar7 = startIndex + 1;
                  uVar1 = (uint)pSVar10->max_length;
                  if ((int)uVar1 <= (int)uVar7) goto label_0425cd75;
                  if (uVar1 <= uVar7) goto label_0425ce35;
                  if (pSVar10->m_Items[(int)uVar7] != 0x2a) goto label_0425cd75;
                  pSVar11 = CustomLogic_CustomLogicLexer__ScanBlockComment(__this,uVar7,method_06);
                  if (pSVar11 != (System_String_o *)0x0) {
                    startIndex = (pSVar11->fields)._stringLength + startIndex + 4;
                    pSVar10 = *ppSVar3;
                    goto joined_r0x0425cc03;
                  }
                  goto label_0425ce62;
                }
                if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if ((System_Collections_Generic_Dictionary_object__int__o *)
                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  local_38 = (float)System_Collections_Generic_Dictionary_object__int___get_Item
                                              ((System_Collections_Generic_Dictionary_object__int__o *)
                                               **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),(Il2CppObject *)pSVar11,
                                               MethodInfo_Int32_get_Item);
                  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                  CustomLogic_CustomLogicLexer__AddToken(__this,0,pIVar13,(__this->fields)._line,in_R8);
                  startIndex = startIndex + 2;
                  pSVar10 = *ppSVar3;
                  goto joined_r0x0425cc03;
                }
                goto label_0425ce67;
              }
              pSVar11 = CustomLogic_CustomLogicLexer__ScanBool(__this,startIndex,method_02);
              bVar8 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                pSVar11 = CustomLogic_CustomLogicLexer__ScanAlphaSymbol(__this,startIndex,method_03);
                bVar8 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  pSVar11 = CustomLogic_CustomLogicLexer__ScanName(__this,startIndex,method_05);
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,2,(Il2CppObject *)pSVar11,(__this->fields)._line,in_R8);
                  if (pSVar11 == (System_String_o *)0x0) goto label_0425ce49;
                }
                else {
                  bVar8 = System_String__op_Equality(pSVar11,"null",(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                      local_38 = (float)System_Collections_Generic_Dictionary_object__int___get_Item
                                                  ((System_Collections_Generic_Dictionary_object__int__o *)
                                                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                   (Il2CppObject *)pSVar11,MethodInfo_Int32_get_Item);
                      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                      CustomLogic_CustomLogicLexer__AddToken(__this,0,pIVar13,(__this->fields)._line,in_R8);
                      goto label_0425cc79;
                    }
                    goto label_0425ce5d;
                  }
                  CustomLogic_CustomLogicLexer__AddToken
                            (__this,1,(Il2CppObject *)0x0,(__this->fields)._line,in_R8);
label_0425cc79:
                  if (pSVar11 == (System_String_o *)0x0) goto label_0425ce4e;
                }
              }
              else {
                bVar8 = System_String__op_Equality(pSVar11,"true",(MethodInfo *)0x0);
                local_38 = (float)CONCAT31(local_38._1_3_,(char)bVar8);
                pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_38);
                CustomLogic_CustomLogicLexer__AddToken(__this,1,pIVar13,(__this->fields)._line,in_R8);
                if (pSVar11 == (System_String_o *)0x0) goto label_0425ce30;
              }
label_0425cc90:
              startIndex = (pSVar11->fields)._stringLength + startIndex;
              pSVar10 = *ppSVar3;
            }
joined_r0x0425cc03:
            if (pSVar10 == (System_Char_array *)0x0) goto label_0425d44e;
            uVar7 = (uint)pSVar10->max_length;
            bVar19 = startIndex < uVar7;
          } while ((int)startIndex < (int)uVar7);
        }
        return (__this->fields)._tokens;
      }
    }
  }
label_0425d44e:
  il2cpp_runtime_helper_022b2c90();
label_0425d453:
  plVar17 = (long *)__cxa_allocate_exception(8);
  *plVar17 = *unaff_RBX;
  __cxa_throw(plVar17,&PTR_PTR_05215060,0);
}


// CustomLogic.CustomLogicLexer$$AddToken
// il2cpp: void CustomLogic_CustomLogicLexer__AddToken (CustomLogic_CustomLogicLexer_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x425d5f0

void CustomLogic_CustomLogicLexer__AddToken
               (CustomLogic_CustomLogicLexer_o *__this,int32_t type,Il2CppObject *value,int32_t line,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  ushort uVar3;
  short sVar4;
  CustomLogic_CustomLogicToken_array *pCVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar6;
  int iVar7;
  uint uVar8;
  System_Exception_o *pSVar9;
  System_String_o *str1;
  System_String_o *pSVar10;
  System_Exception_o *pSVar11;
  Il2CppObject *pIVar12;
  undefined8 *puVar13;
  System_Exception_o *pSVar14;
  undefined8 uVar15;
  int *extraout_RDX;
  System_Collections_Generic_List_CustomLogicToken__o *__this_01;
  ulong uVar16;
  System_String_o *pSVar17;
  long lVar18;
  System_Exception_o *pSVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  short sStack_10a;
  System_Exception_o *pSStack_108;
  System_Collections_Generic_List_CustomLogicToken__o *pSStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  System_Exception_o *pSStack_e8;
  System_Exception_o *pSStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  System_Collections_Generic_List_CustomLogicToken__o *pSStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  System_Exception_o *pSStack_b0;
  System_Exception_o *pSStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  System_Collections_Generic_List_CustomLogicToken__o *pSStack_90;
  Il2CppObject *pIStack_88;
  ulong uStack_80;
  System_Exception_o *pSStack_78;
  System_Exception_o *pSStack_70;
  System_String_o *pSStack_68;
  undefined8 uStack_60;
  System_Collections_Generic_List_CustomLogicToken__o *pSStack_58;
  Il2CppObject *pIStack_50;
  
  pSVar17 = (System_String_o *)(ulong)(uint)type;
  if (g_data_057adbde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicToken);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adbde = '\x01';
  }
  __this_01 = (__this->fields)._tokens;
  pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicToken);
  pSVar10 = pSVar17;
  pSVar14 = pSVar9;
  CustomLogic_CustomLogicToken___ctor
            ((CustomLogic_CustomLogicToken_o *)pSVar9,type,value,line,(MethodInfo *)0x0);
  lVar18 = MethodInfo_Void_Add;
  if (__this_01 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (__this_01->fields)._items;
    if (pCVar5 != (CustomLogic_CustomLogicToken_array *)0x0) {
      uVar22 = (__this_01->fields)._size;
      if ((uint)pCVar5->max_length <= uVar22) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_01->fields)._size = uVar22 + 1;
      pCVar5->m_Items[(int)uVar22] = (CustomLogic_CustomLogicToken_o *)pSVar9;
      il2cpp_runtime_helper_022b4080(pCVar5->m_Items + (int)uVar22,pSVar9);
      return;
    }
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  uVar20 = (ulong)pSVar10 & 0xffffffff;
  str1 = pSVar10;
  pSVar9 = pSVar14;
  pSStack_58 = __this_01;
  pIStack_50 = value;
  if (g_data_057adbdf == '\0') {
    pSStack_68 = (System_String_o *)0x425d6f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pSStack_68 = (System_String_o *)0x425d702;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSVar9 = (System_Exception_o *)&"";
    pSStack_68 = (System_String_o *)0x425d70e;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbdf = '\x01';
  }
  pIVar12 = (pSVar14->fields)._stackTrace;
  pSVar11 = (System_Exception_o *)(ulong)(uint)line;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pSVar17 = (System_String_o *)((long)(int)pSVar10 * 2 + 0x20);
    value = (Il2CppObject *)&g_data_057b9b70;
    pSVar19 = "";
    do {
      uVar22 = (uint)uVar20;
      if ((int)*(uint *)&pIVar12[1].monitor <= (int)uVar22) {
        return;
      }
      pSVar11 = pSVar19;
      if (*(uint *)&pIVar12[1].monitor <= uVar22) {
label_0425d867:
        pSStack_68 = (System_String_o *)0x425d86c;
        il2cpp_runtime_helper_022b2ca0();
        break;
      }
      uVar3 = *(ushort *)((long)&pSVar17->klass + (long)pIVar12);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        pSStack_68 = (System_String_o *)0x425d76a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Exception_o *)(ulong)uVar3;
      str1 = (System_String_o *)0x0;
      pSStack_68 = (System_String_o *)0x425d774;
      bVar6 = System_Char__IsLetter(uVar3,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(pSVar14->fields)._stackTrace;
      if ((char)bVar6 == '\0') {
        if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
        if ((uint)(__this_01->fields)._size <= uVar22) goto label_0425d867;
        if (*(short *)((long)&pSVar17->klass + (long)&__this_01->klass) != 0x5f) {
          __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)&TypeInfo_CustomLogicSymbols;
          if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
            pSStack_68 = (System_String_o *)0x425d822;
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                       (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
          pSVar9 = (System_Exception_o *)0x0;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            pSStack_68 = (System_String_o *)0x425d847;
            System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)pSVar19,MethodInfo_Boolean_Contains);
            return;
          }
          break;
        }
      }
      else if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
      pSVar9 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        pSStack_68 = (System_String_o *)0x425d7c0;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)(__this_01->fields)._size <= uVar22) goto label_0425d867;
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)
                  ((long)&pSVar17->klass + (long)&__this_01->klass);
      pSStack_68 = (System_String_o *)0x425d7d7;
      str1 = System_Char__ToString((uint16_t)__this_01,(MethodInfo *)0x0);
      pSStack_68 = (System_String_o *)0x425d7e4;
      pSVar11 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar19,str1,(MethodInfo *)0x0);
      uVar20 = (ulong)(uVar22 + 1);
      pIVar12 = (pSVar14->fields)._stackTrace;
      pSVar17 = (System_String_o *)((long)&pSVar17->klass + 2);
      pSVar9 = pSVar19;
      pSVar19 = pSVar11;
    } while (pIVar12 != (Il2CppObject *)0x0);
  }
  pSStack_68 = (System_String_o *)0x425d871;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  uVar16 = (ulong)str1 & 0xffffffff;
  pSVar10 = str1;
  pSVar19 = pSVar9;
  pSStack_90 = __this_01;
  pIStack_88 = value;
  uStack_80 = uVar20;
  pSStack_78 = pSVar14;
  pSStack_70 = pSVar11;
  pSStack_68 = pSVar17;
  if (g_data_057adbe2 == '\0') {
    pSVar19 = (System_Exception_o *)&"";
    lStack_a0 = 0x425d8a6;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe2 = '\x01';
  }
  pIVar12 = (pSVar9->fields)._stackTrace;
  if (pIVar12 != (Il2CppObject *)0x0) {
    lVar18 = (long)(int)str1 * 2 + 0x20;
    pSVar14 = "";
    do {
      uVar22 = (uint)uVar16;
      if ((int)*(uint *)&pIVar12[1].monitor <= (int)uVar22) {
        return;
      }
      if (*(uint *)&pIVar12[1].monitor <= uVar22) {
label_0425d9a6:
        lStack_a0 = 0x425d9ab;
        uStack_d0 = il2cpp_runtime_helper_022b2ca0();
        puStack_b8 = &g_data_057b9b70;
        uVar20 = (ulong)pSVar10 & 0xffffffff;
        pSVar17 = pSVar10;
        pSVar11 = pSVar19;
        pSStack_c8 = __this_01;
        uStack_c0 = uVar16;
        pSStack_b0 = pSVar9;
        pSStack_a8 = pSVar14;
        lStack_a0 = lVar18;
        if (g_data_057adbe1 == '\0') {
          pSVar11 = (System_Exception_o *)&"";
          lStack_d8 = 0x425d9d6;
          il2cpp_runtime_helper_023445d0();
          g_data_057adbe1 = '\x01';
        }
        pIVar12 = (pSVar19->fields)._stackTrace;
        if (pIVar12 == (Il2CppObject *)0x0) goto label_0425dabf;
        lVar18 = (long)(int)pSVar10 * 2 + 0x20;
        pSVar14 = "";
        goto label_0425da10;
      }
      uVar3 = *(ushort *)((long)&pIVar12->klass + lVar18);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_a0 = 0x425d909;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = (System_Exception_o *)(ulong)uVar3;
      pSVar10 = (System_String_o *)0x0;
      lStack_a0 = 0x425d913;
      bVar6 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(pSVar9->fields)._stackTrace;
      if ((char)bVar6 == '\0') {
        if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
        if ((uint)(__this_01->fields)._size <= uVar22) goto label_0425d9a6;
        if (*(short *)((long)&__this_01->klass + lVar18) != 0x5f) {
          return;
        }
      }
      else if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
      pSVar19 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_a0 = 0x425d957;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)(__this_01->fields)._size <= uVar22) goto label_0425d9a6;
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)((long)&__this_01->klass + lVar18);
      lStack_a0 = 0x425d96a;
      pSVar10 = System_Char__ToString((uint16_t)__this_01,(MethodInfo *)0x0);
      lStack_a0 = 0x425d977;
      pSVar11 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar14,pSVar10,(MethodInfo *)0x0);
      uVar16 = (ulong)(uVar22 + 1);
      pIVar12 = (pSVar9->fields)._stackTrace;
      lVar18 = lVar18 + 2;
      pSVar19 = pSVar14;
      pSVar14 = pSVar11;
    } while (pIVar12 != (Il2CppObject *)0x0);
  }
  lStack_a0 = 0x425d994;
  il2cpp_runtime_helper_022b2c90();
  return;
joined_r0x0425db74:
  if (pIVar12 == (Il2CppObject *)0x0) goto label_0425dd7c;
  uVar21 = (int)uVar16 + 1;
  uVar22 = *(uint *)&pIVar12[1].monitor;
  if ((int)uVar22 <= (int)uVar21) {
label_0425dd35:
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed string literal");
    System_Exception___ctor_3cf6120(pSVar11,pSVar17,(MethodInfo *)0x0);
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanStringLiteral);
    il2cpp_runtime_helper_022b2b10();
    goto label_0425dd7c;
  }
  iVar7 = *extraout_RDX;
  *extraout_RDX = iVar7 + 1;
  if (uVar22 <= uVar21) {
label_0425dd30:
    il2cpp_runtime_helper_022b2ca0();
    goto label_0425dd35;
  }
  sVar4 = *(short *)((long)&pIVar12[2].klass + (long)(int)uVar21 * 2);
  if (sVar4 == 10) {
    ppSVar2 = &(pSStack_108->fields)._helpURL;
    *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
    iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
joined_r0x0425dc8e:
    if (iVar7 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar22 = *(uint *)&pIVar12[1].monitor;
    }
    if (uVar22 <= uVar21) goto label_0425dd30;
    pSVar17 = System_Char__ToString((short)uVar21 * 2 + 0x20 + (short)pIVar12,(MethodInfo *)0x0);
    uVar16 = (ulong)uVar21;
  }
  else {
    if (sVar4 != 0x5c) {
      if (sVar4 == 0x22) {
        *extraout_RDX = iVar7;
        return;
      }
      iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
      goto joined_r0x0425dc8e;
    }
    uVar21 = (int)uVar16 + 2;
    uVar16 = (ulong)uVar21;
    if ((int)uVar22 <= (int)uVar21) goto label_0425dd35;
    *extraout_RDX = iVar7 + 2;
    if (uVar22 <= uVar21) goto label_0425dd30;
    sStack_10a = *(short *)((long)&pIVar12[2].klass + (long)(int)uVar21 * 2);
    switch(sStack_10a) {
    case 0x5c:
      puVar13 = &"\\";
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
switchD_0425dc53_caseD_5d:
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = System_Char__ToString((uint16_t)&sStack_10a,(MethodInfo *)0x0);
      goto label_0425db85;
    case 0x6e:
      puVar13 = &"\n";
      break;
    case 0x72:
      puVar13 = &"\r";
      break;
    case 0x74:
      puVar13 = &"\t";
      break;
    default:
      if (sStack_10a != 0x22) goto switchD_0425dc53_caseD_5d;
      puVar13 = &"\"";
    }
    pSVar17 = (System_String_o *)*puVar13;
  }
label_0425db85:
  pSVar9 = (System_Exception_o *)
           System_String__Concat_3ae5ba0((System_String_o *)pSVar14,pSVar17,(MethodInfo *)0x0);
  pIVar12 = (pSStack_108->fields)._stackTrace;
  pSVar11 = pSVar14;
  pSVar14 = pSVar9;
  goto joined_r0x0425db74;
label_0425dd7c:
  il2cpp_runtime_helper_022b2c90();
  uVar20 = (ulong)pSVar17 & 0xffffffff;
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pIVar12 = (pSVar11->fields)._stackTrace;
  pSVar14 = "";
  do {
    if (pIVar12 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0425de43:
      ppSVar2 = &(pSVar11->fields)._helpURL;
      *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
      return;
    }
    uVar21 = (int)uVar20 + 1;
    uVar20 = (ulong)uVar21;
    uVar22 = *(uint *)&pIVar12[1].monitor;
    if ((int)uVar22 <= (int)uVar21) {
label_0425de5f:
      uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
      pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
      System_Exception___ctor_3cf6120(pSVar14,pSVar17,(MethodInfo *)0x0);
      iVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
      il2cpp_runtime_helper_022b2b10();
      if (g_data_057adbe5 == '\0') {
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057adbe5 = '\x01';
      }
      pIVar12 = (pSVar14->fields)._stackTrace;
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0425dfd5;
      uVar22 = iVar7 + 2;
      lVar18 = (long)(iVar7 + 1) * 2 + 0x20;
      pSVar9 = "";
      break;
    }
    if (uVar22 <= uVar21) {
label_0425de5a:
      il2cpp_runtime_helper_022b2ca0();
      goto label_0425de5f;
    }
    if (*(short *)((long)&pIVar12[2].klass + (long)(int)uVar21 * 2) == 10) goto label_0425de43;
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar22 = *(uint *)&pIVar12[1].monitor;
    }
    if (uVar22 <= uVar21) goto label_0425de5a;
    pSVar17 = System_Char__ToString((short)pIVar12 + (short)uVar21 * 2 + 0x20,(MethodInfo *)0x0);
    pSVar14 = (System_Exception_o *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar14,pSVar17,(MethodInfo *)0x0);
    pIVar12 = (pSVar11->fields)._stackTrace;
  } while( true );
label_0425df10:
  uVar21 = uVar22 - 1;
  uVar8 = *(uint *)&pIVar12[1].monitor;
  if ((int)uVar8 <= (int)uVar21) goto label_0425dff1;
  if (uVar8 <= uVar21) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar14,pSVar17,(MethodInfo *)0x0);
    uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar14,uVar15);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar7 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar7 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar7 != 0) {
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    return;
  }
  sVar4 = *(short *)((long)&pIVar12->klass + lVar18);
  if (sVar4 == 0x2a) {
    if ((int)uVar22 < (int)uVar8) {
      if (uVar8 <= uVar22) goto label_0425dfec;
      if (*(short *)((long)&pIVar12[2].klass + (long)(int)uVar22 * 2) == 0x2f) {
        return;
      }
    }
label_0425df80:
    iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  else {
    if (sVar4 != 10) goto label_0425df80;
    ppSVar2 = &(pSVar14->fields)._helpURL;
    *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
    iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar8 = *(uint *)&pIVar12[1].monitor;
  }
  if (uVar8 <= uVar21) goto label_0425dfec;
  pSVar17 = System_Char__ToString((short)pIVar12 + (short)lVar18,(MethodInfo *)0x0);
  pSVar9 = (System_Exception_o *)
           System_String__Concat_3ae5ba0((System_String_o *)pSVar9,pSVar17,(MethodInfo *)0x0);
  pIVar12 = (pSVar14->fields)._stackTrace;
  uVar22 = uVar22 + 1;
  lVar18 = lVar18 + 2;
  if (pIVar12 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  goto label_0425df10;
  while( true ) {
    pSVar11 = g_data_057b9bf8;
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_d8 = 0x425da87;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((uint)(__this_01->fields)._size <= uVar22) goto label_0425dad6;
    __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)((long)&__this_01->klass + lVar18);
    lStack_d8 = 0x425da9a;
    pSVar17 = System_Char__ToString((uint16_t)__this_01,(MethodInfo *)0x0);
    lStack_d8 = 0x425daa7;
    pSVar9 = (System_Exception_o *)
             System_String__Concat_3ae5ba0((System_String_o *)pSVar14,pSVar17,(MethodInfo *)0x0);
    uVar20 = (ulong)(uVar22 + 1);
    pIVar12 = (pSVar19->fields)._stackTrace;
    lVar18 = lVar18 + 2;
    pSVar11 = pSVar14;
    pSVar14 = pSVar9;
    if (pIVar12 == (Il2CppObject *)0x0) break;
label_0425da10:
    uVar22 = (uint)uVar20;
    if ((int)*(uint *)&pIVar12[1].monitor <= (int)uVar22) {
      return;
    }
    if (*(uint *)&pIVar12[1].monitor <= uVar22) {
label_0425dad6:
      lStack_d8 = 0x425dadb;
      il2cpp_runtime_helper_022b2ca0();
      puStack_f0 = &g_data_057b9b70;
      uVar16 = (ulong)pSVar17 & 0xffffffff;
      pSStack_108 = pSVar11;
      pSStack_100 = __this_01;
      uStack_f8 = uVar20;
      pSStack_e8 = pSVar19;
      pSStack_e0 = pSVar14;
      lStack_d8 = lVar18;
      if (g_data_057adbe3 == '\0') {
        il2cpp_runtime_helper_023445d0(&"\n");
        il2cpp_runtime_helper_023445d0(&"\\");
        il2cpp_runtime_helper_023445d0(&"\t");
        il2cpp_runtime_helper_023445d0(&"\"");
        il2cpp_runtime_helper_023445d0(&"");
        pSVar11 = (System_Exception_o *)&"\r";
        il2cpp_runtime_helper_023445d0();
        g_data_057adbe3 = '\x01';
      }
      pSVar14 = "";
      sStack_10a = 0;
      *extraout_RDX = 0;
      pIVar12 = (pSStack_108->fields)._stackTrace;
      goto joined_r0x0425db74;
    }
    uVar3 = *(ushort *)((long)&pIVar12->klass + lVar18);
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_d8 = 0x425da39;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (System_Exception_o *)(ulong)uVar3;
    pSVar17 = (System_String_o *)0x0;
    lStack_d8 = 0x425da43;
    bVar6 = System_Char__IsDigit(uVar3,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)(pSVar19->fields)._stackTrace;
    if ((char)bVar6 == '\0') {
      if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
      if ((uint)(__this_01->fields)._size <= uVar22) goto label_0425dad6;
      if (*(short *)((long)&__this_01->klass + lVar18) != 0x2e) {
        return;
      }
    }
    else if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
  }
label_0425dabf:
  lStack_d8 = 0x425dac4;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLexer$$ScanAlphaSymbol
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanAlphaSymbol (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x425d6d0

System_String_o *
CustomLogic_CustomLogicLexer__ScanAlphaSymbol
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort uVar2;
  short sVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar4;
  int iVar5;
  uint uVar6;
  System_Char_array *pSVar7;
  System_String_o *str1;
  System_Exception_o *pSVar8;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int *extraout_RDX;
  System_Char_array *unaff_RBX;
  ulong uVar13;
  long unaff_RBP;
  long lVar14;
  System_Exception_o *pSVar15;
  System_Exception_o *pSVar16;
  undefined8 *unaff_R12;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  System_Exception_o *unaff_R15;
  short sStack_e2;
  System_Exception_o *pSStack_e0;
  System_Char_array *pSStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  System_Exception_o *pSStack_c0;
  System_Exception_o *pSStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  System_Char_array *pSStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  System_Exception_o *pSStack_88;
  System_Exception_o *pSStack_80;
  long lStack_78;
  undefined8 uStack_70;
  System_Char_array *pSStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  CustomLogic_CustomLogicLexer_o *pCStack_50;
  System_Exception_o *pSStack_48;
  long lStack_40;
  
  pSVar10 = (System_String_o *)(ulong)(uint)startIndex;
  uVar17 = (ulong)(uint)startIndex;
  pSVar15 = (System_Exception_o *)__this;
  if (g_data_057adbdf == '\0') {
    lStack_40 = 0x425d6f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    lStack_40 = 0x425d702;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSVar15 = (System_Exception_o *)&"";
    lStack_40 = 0x425d70e;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbdf = '\x01';
  }
  pSVar7 = (__this->fields)._chars;
  if (pSVar7 != (System_Char_array *)0x0) {
    unaff_RBP = (long)startIndex * 2 + 0x20;
    unaff_R12 = &g_data_057b9b70;
    pSVar16 = "";
    do {
      uVar19 = (uint)pSVar7->max_length;
      uVar18 = (uint)uVar17;
      if ((int)uVar19 <= (int)uVar18) {
        return (System_String_o *)"";
      }
      unaff_R15 = pSVar16;
      if (uVar19 <= uVar18) {
label_0425d867:
        lStack_40 = 0x425d86c;
        il2cpp_runtime_helper_022b2ca0();
        break;
      }
      uVar2 = *(ushort *)((long)pSVar7->m_Items + unaff_RBP + -0x20);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425d76a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_Exception_o *)(ulong)uVar2;
      pSVar10 = (System_String_o *)0x0;
      lStack_40 = 0x425d774;
      bVar4 = System_Char__IsLetter(uVar2,(MethodInfo *)0x0);
      unaff_RBX = (__this->fields)._chars;
      if ((char)bVar4 == '\0') {
        if (unaff_RBX == (System_Char_array *)0x0) break;
        if ((uint)unaff_RBX->max_length <= uVar18) goto label_0425d867;
        if (*(short *)((long)unaff_RBX->m_Items + unaff_RBP + -0x20) != 0x5f) {
          unaff_RBX = (System_Char_array *)&TypeInfo_CustomLogicSymbols;
          if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
            lStack_40 = 0x425d822;
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                       (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
          pSVar15 = (System_Exception_o *)0x0;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            lStack_40 = 0x425d847;
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              (__this_00,(Il2CppObject *)pSVar16,MethodInfo_Boolean_Contains);
            if ((char)bVar4 != '\0') {
              return (System_String_o *)pSVar16;
            }
            return (System_String_o *)"";
          }
          break;
        }
      }
      else if (unaff_RBX == (System_Char_array *)0x0) break;
      pSVar15 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425d7c0;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)unaff_RBX->max_length <= uVar18) goto label_0425d867;
      unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + unaff_RBP + -0x20);
      lStack_40 = 0x425d7d7;
      pSVar10 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
      lStack_40 = 0x425d7e4;
      unaff_R15 = (System_Exception_o *)
                  System_String__Concat_3ae5ba0((System_String_o *)pSVar16,pSVar10,(MethodInfo *)0x0);
      uVar17 = (ulong)(uVar18 + 1);
      pSVar7 = (__this->fields)._chars;
      unaff_RBP = unaff_RBP + 2;
      pSVar15 = pSVar16;
      pSVar16 = unaff_R15;
    } while (pSVar7 != (System_Char_array *)0x0);
  }
  lStack_40 = 0x425d871;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  uVar13 = (ulong)pSVar10 & 0xffffffff;
  str1 = pSVar10;
  pSVar16 = pSVar15;
  pSStack_68 = unaff_RBX;
  puStack_60 = unaff_R12;
  uStack_58 = uVar17;
  pCStack_50 = __this;
  pSStack_48 = unaff_R15;
  lStack_40 = unaff_RBP;
  if (g_data_057adbe2 == '\0') {
    pSVar16 = (System_Exception_o *)&"";
    lStack_78 = 0x425d8a6;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe2 = '\x01';
  }
  pIVar9 = (pSVar15->fields)._stackTrace;
  if (pIVar9 != (Il2CppObject *)0x0) {
    lVar14 = (long)(int)pSVar10 * 2 + 0x20;
    unaff_R15 = "";
    do {
      uVar19 = (uint)uVar13;
      if ((int)*(uint *)&pIVar9[1].monitor <= (int)uVar19) {
        return (System_String_o *)unaff_R15;
      }
      if (*(uint *)&pIVar9[1].monitor <= uVar19) {
label_0425d9a6:
        lStack_78 = 0x425d9ab;
        uStack_a8 = il2cpp_runtime_helper_022b2ca0();
        puStack_90 = &g_data_057b9b70;
        uVar17 = (ulong)str1 & 0xffffffff;
        pSVar10 = str1;
        pSVar8 = pSVar16;
        pSStack_a0 = unaff_RBX;
        uStack_98 = uVar13;
        pSStack_88 = pSVar15;
        pSStack_80 = unaff_R15;
        lStack_78 = lVar14;
        if (g_data_057adbe1 == '\0') {
          pSVar8 = (System_Exception_o *)&"";
          lStack_b0 = 0x425d9d6;
          il2cpp_runtime_helper_023445d0();
          g_data_057adbe1 = '\x01';
        }
        pIVar9 = (pSVar16->fields)._stackTrace;
        if (pIVar9 == (Il2CppObject *)0x0) goto label_0425dabf;
        lVar14 = (long)(int)str1 * 2 + 0x20;
        unaff_R15 = "";
        goto label_0425da10;
      }
      uVar2 = *(ushort *)((long)&pIVar9->klass + lVar14);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_78 = 0x425d909;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_Exception_o *)(ulong)uVar2;
      str1 = (System_String_o *)0x0;
      lStack_78 = 0x425d913;
      bVar4 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
      unaff_RBX = (System_Char_array *)(pSVar15->fields)._stackTrace;
      if ((char)bVar4 == '\0') {
        if (unaff_RBX == (System_Char_array *)0x0) break;
        if ((uint)unaff_RBX->max_length <= uVar19) goto label_0425d9a6;
        if (*(short *)((long)unaff_RBX->m_Items + lVar14 + -0x20) != 0x5f) {
          return (System_String_o *)unaff_R15;
        }
      }
      else if (unaff_RBX == (System_Char_array *)0x0) break;
      pSVar16 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_78 = 0x425d957;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)unaff_RBX->max_length <= uVar19) goto label_0425d9a6;
      unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + lVar14 + -0x20);
      lStack_78 = 0x425d96a;
      str1 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
      lStack_78 = 0x425d977;
      pSVar8 = (System_Exception_o *)
               System_String__Concat_3ae5ba0((System_String_o *)unaff_R15,str1,(MethodInfo *)0x0);
      uVar13 = (ulong)(uVar19 + 1);
      pIVar9 = (pSVar15->fields)._stackTrace;
      lVar14 = lVar14 + 2;
      pSVar16 = unaff_R15;
      unaff_R15 = pSVar8;
    } while (pIVar9 != (Il2CppObject *)0x0);
  }
  lStack_78 = 0x425d994;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)unaff_R15;
joined_r0x0425db74:
  if (pIVar9 == (Il2CppObject *)0x0) goto label_0425dd7c;
  uVar18 = (int)uVar13 + 1;
  uVar19 = *(uint *)&pIVar9[1].monitor;
  if ((int)uVar19 <= (int)uVar18) {
label_0425dd35:
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar12);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed string literal");
    System_Exception___ctor_3cf6120(pSVar8,pSVar10,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanStringLiteral);
    il2cpp_runtime_helper_022b2b10();
    goto label_0425dd7c;
  }
  iVar5 = *extraout_RDX;
  *extraout_RDX = iVar5 + 1;
  if (uVar19 <= uVar18) {
label_0425dd30:
    il2cpp_runtime_helper_022b2ca0();
    goto label_0425dd35;
  }
  sVar3 = *(short *)((long)&pIVar9[2].klass + (long)(int)uVar18 * 2);
  if (sVar3 == 10) {
    ppSVar1 = &(pSStack_e0->fields)._helpURL;
    *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
    iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
joined_r0x0425dc8e:
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar19 = *(uint *)&pIVar9[1].monitor;
    }
    if (uVar19 <= uVar18) goto label_0425dd30;
    pSVar10 = System_Char__ToString((short)uVar18 * 2 + 0x20 + (short)pIVar9,(MethodInfo *)0x0);
    uVar13 = (ulong)uVar18;
  }
  else {
    if (sVar3 != 0x5c) {
      if (sVar3 == 0x22) {
        *extraout_RDX = iVar5;
        return (System_String_o *)pSVar15;
      }
      iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
      goto joined_r0x0425dc8e;
    }
    uVar18 = (int)uVar13 + 2;
    uVar13 = (ulong)uVar18;
    if ((int)uVar19 <= (int)uVar18) goto label_0425dd35;
    *extraout_RDX = iVar5 + 2;
    if (uVar19 <= uVar18) goto label_0425dd30;
    sStack_e2 = *(short *)((long)&pIVar9[2].klass + (long)(int)uVar18 * 2);
    switch(sStack_e2) {
    case 0x5c:
      puVar11 = &"\\";
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
switchD_0425dc53_caseD_5d:
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Char__ToString((uint16_t)&sStack_e2,(MethodInfo *)0x0);
      goto label_0425db85;
    case 0x6e:
      puVar11 = &"\n";
      break;
    case 0x72:
      puVar11 = &"\r";
      break;
    case 0x74:
      puVar11 = &"\t";
      break;
    default:
      if (sStack_e2 != 0x22) goto switchD_0425dc53_caseD_5d;
      puVar11 = &"\"";
    }
    pSVar10 = (System_String_o *)*puVar11;
  }
label_0425db85:
  pSVar16 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar15,pSVar10,(MethodInfo *)0x0);
  pIVar9 = (pSStack_e0->fields)._stackTrace;
  pSVar8 = pSVar15;
  pSVar15 = pSVar16;
  goto joined_r0x0425db74;
label_0425df10:
  uVar18 = uVar19 - 1;
  uVar6 = *(uint *)&pIVar9[1].monitor;
  if ((int)uVar6 <= (int)uVar18) goto label_0425dff1;
  if (uVar6 <= uVar18) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar15 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar12);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar15,pSVar10,(MethodInfo *)0x0);
    uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar15,uVar12);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar5 != 0) {
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
    }
    il2cpp_runtime_helper_02337ed0();
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  sVar3 = *(short *)((long)&pIVar9->klass + lVar14);
  if (sVar3 == 0x2a) {
    if ((int)uVar19 < (int)uVar6) {
      if (uVar6 <= uVar19) goto label_0425dfec;
      if (*(short *)((long)&pIVar9[2].klass + (long)(int)uVar19 * 2) == 0x2f) {
        return (System_String_o *)pSVar16;
      }
    }
label_0425df80:
    iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  else {
    if (sVar3 != 10) goto label_0425df80;
    ppSVar1 = &(pSVar15->fields)._helpURL;
    *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
    iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar6 = *(uint *)&pIVar9[1].monitor;
  }
  if (uVar6 <= uVar18) goto label_0425dfec;
  pSVar10 = System_Char__ToString((short)pIVar9 + (short)lVar14,(MethodInfo *)0x0);
  pSVar16 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar16,pSVar10,(MethodInfo *)0x0);
  pIVar9 = (pSVar15->fields)._stackTrace;
  uVar19 = uVar19 + 1;
  lVar14 = lVar14 + 2;
  if (pIVar9 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return (System_String_o *)pSVar16;
  }
  goto label_0425df10;
  while( true ) {
    pSVar8 = g_data_057b9bf8;
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_b0 = 0x425da87;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((uint)unaff_RBX->max_length <= uVar19) goto label_0425dad6;
    unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + lVar14 + -0x20);
    lStack_b0 = 0x425da9a;
    pSVar10 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
    lStack_b0 = 0x425daa7;
    pSVar15 = (System_Exception_o *)
              System_String__Concat_3ae5ba0((System_String_o *)unaff_R15,pSVar10,(MethodInfo *)0x0);
    uVar17 = (ulong)(uVar19 + 1);
    pIVar9 = (pSVar16->fields)._stackTrace;
    lVar14 = lVar14 + 2;
    pSVar8 = unaff_R15;
    unaff_R15 = pSVar15;
    if (pIVar9 == (Il2CppObject *)0x0) break;
label_0425da10:
    uVar19 = (uint)uVar17;
    if ((int)*(uint *)&pIVar9[1].monitor <= (int)uVar19) {
      return (System_String_o *)unaff_R15;
    }
    if (*(uint *)&pIVar9[1].monitor <= uVar19) {
label_0425dad6:
      lStack_b0 = 0x425dadb;
      il2cpp_runtime_helper_022b2ca0();
      puStack_c8 = &g_data_057b9b70;
      uVar13 = (ulong)pSVar10 & 0xffffffff;
      pSStack_e0 = pSVar8;
      pSStack_d8 = unaff_RBX;
      uStack_d0 = uVar17;
      pSStack_c0 = pSVar16;
      pSStack_b8 = unaff_R15;
      lStack_b0 = lVar14;
      if (g_data_057adbe3 == '\0') {
        il2cpp_runtime_helper_023445d0(&"\n");
        il2cpp_runtime_helper_023445d0(&"\\");
        il2cpp_runtime_helper_023445d0(&"\t");
        il2cpp_runtime_helper_023445d0(&"\"");
        il2cpp_runtime_helper_023445d0(&"");
        pSVar8 = (System_Exception_o *)&"\r";
        il2cpp_runtime_helper_023445d0();
        g_data_057adbe3 = '\x01';
      }
      pSVar15 = "";
      sStack_e2 = 0;
      *extraout_RDX = 0;
      pIVar9 = (pSStack_e0->fields)._stackTrace;
      goto joined_r0x0425db74;
    }
    uVar2 = *(ushort *)((long)&pIVar9->klass + lVar14);
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_b0 = 0x425da39;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_Exception_o *)(ulong)uVar2;
    pSVar10 = (System_String_o *)0x0;
    lStack_b0 = 0x425da43;
    bVar4 = System_Char__IsDigit(uVar2,(MethodInfo *)0x0);
    unaff_RBX = (System_Char_array *)(pSVar16->fields)._stackTrace;
    if ((char)bVar4 == '\0') {
      if (unaff_RBX == (System_Char_array *)0x0) break;
      if ((uint)unaff_RBX->max_length <= uVar19) goto label_0425dad6;
      if (*(short *)((long)unaff_RBX->m_Items + lVar14 + -0x20) != 0x2e) {
        return (System_String_o *)unaff_R15;
      }
    }
    else if (unaff_RBX == (System_Char_array *)0x0) break;
  }
label_0425dabf:
  lStack_b0 = 0x425dac4;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)unaff_R15;
label_0425dd7c:
  il2cpp_runtime_helper_022b2c90();
  uVar17 = (ulong)pSVar10 & 0xffffffff;
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pIVar9 = (pSVar8->fields)._stackTrace;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pSVar16 = (System_Exception_o *)&g_data_057b9b70;
    pSVar15 = "";
    do {
      uVar18 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar18;
      uVar19 = *(uint *)&pIVar9[1].monitor;
      if ((int)uVar19 <= (int)uVar18) {
label_0425de5f:
        uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        pSVar15 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar12);
        pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
        System_Exception___ctor_3cf6120(pSVar15,pSVar10,(MethodInfo *)0x0);
        iVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
        il2cpp_runtime_helper_022b2b10();
        if (g_data_057adbe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adbe5 = '\x01';
        }
        pIVar9 = (pSVar15->fields)._stackTrace;
        if (pIVar9 == (Il2CppObject *)0x0) goto label_0425dfd5;
        uVar19 = iVar5 + 2;
        lVar14 = (long)(iVar5 + 1) * 2 + 0x20;
        pSVar16 = "";
        goto label_0425df10;
      }
      if (uVar19 <= uVar18) {
label_0425de5a:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0425de5f;
      }
      if (*(short *)((long)&pIVar9[2].klass + (long)(int)uVar18 * 2) == 10) goto label_0425de43;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar19 = *(uint *)&pIVar9[1].monitor;
      }
      if (uVar19 <= uVar18) goto label_0425de5a;
      pSVar10 = System_Char__ToString((short)pIVar9 + (short)uVar18 * 2 + 0x20,(MethodInfo *)0x0);
      pSVar15 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar15,pSVar10,(MethodInfo *)0x0);
      pIVar9 = (pSVar8->fields)._stackTrace;
    } while (pIVar9 != (Il2CppObject *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_0425de43:
  ppSVar1 = &(pSVar8->fields)._helpURL;
  *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
  return (System_String_o *)pSVar15;
}


// CustomLogic.CustomLogicLexer$$ScanBool
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBool (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x425d490

System_String_o *
CustomLogic_CustomLogicLexer__ScanBool
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  uint16_t c;
  ushort uVar3;
  short sVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar6;
  int iVar7;
  uint uVar8;
  System_Char_array *pSVar9;
  System_String_o *pSVar10;
  System_Exception_o *pSVar11;
  System_String_o *extraout_RAX;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  Il2CppObject *value;
  int *extraout_RDX;
  System_Char_array *unaff_RBX;
  System_Collections_Generic_List_object__o *__this_01;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  System_Exception_o *pSVar20;
  System_Exception_o *pSVar21;
  Il2CppObject *pIVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  System_Exception_o *unaff_R15;
  System_Exception_o *pSVar26;
  short sStack_142;
  System_Exception_o *pSStack_140;
  System_Collections_Generic_List_object__o *pSStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  System_Exception_o *pSStack_120;
  System_Exception_o *pSStack_118;
  long lStack_110;
  undefined8 uStack_108;
  System_Collections_Generic_List_object__o *pSStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  System_Exception_o *pSStack_e8;
  System_Exception_o *pSStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  System_Collections_Generic_List_object__o *pSStack_c8;
  Il2CppObject *pIStack_c0;
  ulong uStack_b8;
  System_Exception_o *pSStack_b0;
  System_Exception_o *pSStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  System_Collections_Generic_List_object__o *pSStack_90;
  Il2CppObject *pIStack_88;
  ulong uStack_80;
  System_Exception_o *pSStack_78;
  System_Exception_o *pSStack_70;
  ulong uStack_68;
  System_Char_array *pSStack_60;
  undefined8 *puStack_58;
  CustomLogic_CustomLogicLexer_o *pCStack_50;
  System_Exception_o *pSStack_48;
  long lStack_40;
  
  pSVar10 = (System_String_o *)(ulong)(uint)startIndex;
  pSVar20 = (System_Exception_o *)__this;
  if (g_data_057adbe0 == '\0') {
    lStack_40 = 0x425d4b6;
    il2cpp_runtime_helper_023445d0(&"false");
    lStack_40 = 0x425d4c2;
    il2cpp_runtime_helper_023445d0(&"true");
    pSVar20 = (System_Exception_o *)&"";
    lStack_40 = 0x425d4ce;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe0 = '\x01';
  }
  pSVar9 = (__this->fields)._chars;
  if (pSVar9 != (System_Char_array *)0x0) {
    lVar16 = (long)startIndex;
    lVar18 = lVar16 * 2 + 0x20;
    pSVar11 = "";
    do {
      uVar24 = (uint)lVar16;
      uVar25 = (uint)pSVar9->max_length;
      if ((int)uVar25 <= startIndex) goto label_0425d5c8;
      if (uVar25 <= (uint)startIndex) {
label_0425d5e4:
        lStack_40 = 0x425d5e9;
        il2cpp_runtime_helper_022b2ca0();
        puStack_58 = &g_data_057b9b70;
        pSVar26 = (System_Exception_o *)(ulong)uVar24;
        uVar19 = (ulong)pSVar10 & 0xffffffff;
        pSStack_60 = unaff_RBX;
        pCStack_50 = __this;
        pSStack_48 = pSVar11;
        lStack_40 = lVar18;
        if (g_data_057adbde == '\0') {
          uStack_68 = 0x425d618;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicToken);
          uStack_68 = 0x425d624;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          g_data_057adbde = '\x01';
        }
        __this_01 = (System_Collections_Generic_List_object__o *)(pSVar20->fields)._data;
        uStack_68 = 0x425d63e;
        pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicToken);
        pSVar12 = (System_String_o *)((ulong)pSVar10 & 0xffffffff);
        uStack_68 = 0x425d654;
        pSVar20 = pSVar11;
        CustomLogic_CustomLogicToken___ctor
                  ((CustomLogic_CustomLogicToken_o *)pSVar11,(int32_t)pSVar10,value,uVar24,(MethodInfo *)0x0);
        lVar16 = MethodInfo_Void_Add;
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_01->fields)._items;
          if (pSVar5 != (System_Object_array *)0x0) {
            uVar25 = (__this_01->fields)._size;
            if ((uint)pSVar5->max_length <= uVar25) {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,(Il2CppObject *)pSVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              return extraout_RAX;
            }
            (__this_01->fields)._size = uVar25 + 1;
            pSVar5->m_Items[(int)uVar25] = (Il2CppObject *)pSVar11;
            pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar25,pSVar11);
            return pSVar10;
          }
        }
        uStack_68 = 0x425d6c3;
        uStack_98 = il2cpp_runtime_helper_022b2c90();
        uVar17 = (ulong)pSVar12 & 0xffffffff;
        pSVar10 = pSVar12;
        pSVar21 = pSVar20;
        pSStack_90 = __this_01;
        pIStack_88 = value;
        uStack_80 = (ulong)(uint)startIndex;
        pSStack_78 = pSVar11;
        pSStack_70 = pSVar26;
        uStack_68 = uVar19;
        if (g_data_057adbdf == '\0') {
          uStack_a0 = 0x425d6f6;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
          uStack_a0 = 0x425d702;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
          pSVar21 = (System_Exception_o *)&"";
          uStack_a0 = 0x425d70e;
          il2cpp_runtime_helper_023445d0();
          g_data_057adbdf = '\x01';
        }
        pIVar13 = (pSVar20->fields)._stackTrace;
        pIVar22 = value;
        if (pIVar13 == (Il2CppObject *)0x0) goto label_0425d86c;
        uVar19 = (long)(int)pSVar12 * 2 + 0x20;
        pIVar22 = (Il2CppObject *)&g_data_057b9b70;
        pSVar11 = "";
        goto label_0425d740;
      }
      c = *(uint16_t *)((long)pSVar9->m_Items + lVar18 + -0x20);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425d52a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = (System_String_o *)0x0;
      lStack_40 = 0x425d534;
      bVar6 = System_Char__IsLetter(c,(MethodInfo *)0x0);
      unaff_R15 = pSVar11;
      if ((char)bVar6 == '\0') goto label_0425d598;
      unaff_RBX = (__this->fields)._chars;
      if (unaff_RBX == (System_Char_array *)0x0) break;
      pSVar20 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425d557;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar24 = (uint)lVar16;
      if ((uint)unaff_RBX->max_length <= (uint)startIndex) goto label_0425d5e4;
      startIndex = startIndex + 1;
      unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + lVar18 + -0x20);
      lVar18 = lVar18 + 2;
      lStack_40 = 0x425d576;
      pSVar10 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
      lStack_40 = 0x425d583;
      unaff_R15 = (System_Exception_o *)
                  System_String__Concat_3ae5ba0((System_String_o *)pSVar11,pSVar10,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._chars;
      pSVar20 = pSVar11;
      pSVar11 = unaff_R15;
    } while (pSVar9 != (System_Char_array *)0x0);
  }
  lStack_40 = 0x425d598;
  il2cpp_runtime_helper_022b2c90();
label_0425d598:
  lStack_40 = 0x425d5ac;
  bVar6 = System_String__op_Equality((System_String_o *)unaff_R15,"true",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    lStack_40 = 0x425d5c4;
    bVar6 = System_String__op_Equality((System_String_o *)unaff_R15,"false",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_0425d5c8:
      unaff_R15 = "";
    }
  }
  return (System_String_o *)unaff_R15;
joined_r0x0425db74:
  if (pIVar13 == (Il2CppObject *)0x0) goto label_0425dd7c;
  uVar24 = (int)uVar17 + 1;
  uVar25 = *(uint *)&pIVar13[1].monitor;
  if ((int)uVar25 <= (int)uVar24) {
label_0425dd35:
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar20 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed string literal");
    System_Exception___ctor_3cf6120(pSVar20,pSVar10,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanStringLiteral);
    il2cpp_runtime_helper_022b2b10();
    goto label_0425dd7c;
  }
  iVar7 = *extraout_RDX;
  *extraout_RDX = iVar7 + 1;
  if (uVar25 <= uVar24) {
label_0425dd30:
    il2cpp_runtime_helper_022b2ca0();
    goto label_0425dd35;
  }
  sVar4 = *(short *)((long)&pIVar13[2].klass + (long)(int)uVar24 * 2);
  if (sVar4 == 10) {
    ppSVar2 = &(pSStack_140->fields)._helpURL;
    *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
    iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
joined_r0x0425dc8e:
    if (iVar7 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar25 = *(uint *)&pIVar13[1].monitor;
    }
    if (uVar25 <= uVar24) goto label_0425dd30;
    pSVar10 = System_Char__ToString((short)uVar24 * 2 + 0x20 + (short)pIVar13,(MethodInfo *)0x0);
    uVar17 = (ulong)uVar24;
  }
  else {
    if (sVar4 != 0x5c) {
      if (sVar4 == 0x22) {
        *extraout_RDX = iVar7;
        return (System_String_o *)pSVar11;
      }
      iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
      goto joined_r0x0425dc8e;
    }
    uVar24 = (int)uVar17 + 2;
    uVar17 = (ulong)uVar24;
    if ((int)uVar25 <= (int)uVar24) goto label_0425dd35;
    *extraout_RDX = iVar7 + 2;
    if (uVar25 <= uVar24) goto label_0425dd30;
    sStack_142 = *(short *)((long)&pIVar13[2].klass + (long)(int)uVar24 * 2);
    switch(sStack_142) {
    case 0x5c:
      puVar14 = &"\\";
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
switchD_0425dc53_caseD_5d:
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Char__ToString((uint16_t)&sStack_142,(MethodInfo *)0x0);
      goto label_0425db85;
    case 0x6e:
      puVar14 = &"\n";
      break;
    case 0x72:
      puVar14 = &"\r";
      break;
    case 0x74:
      puVar14 = &"\t";
      break;
    default:
      if (sStack_142 != 0x22) goto switchD_0425dc53_caseD_5d;
      puVar14 = &"\"";
    }
    pSVar10 = (System_String_o *)*puVar14;
  }
label_0425db85:
  pSVar26 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar11,pSVar10,(MethodInfo *)0x0);
  pIVar13 = (pSStack_140->fields)._stackTrace;
  pSVar20 = pSVar11;
  pSVar11 = pSVar26;
  goto joined_r0x0425db74;
label_0425df10:
  uVar24 = uVar25 - 1;
  uVar8 = *(uint *)&pIVar13[1].monitor;
  if ((int)uVar8 <= (int)uVar24) goto label_0425dff1;
  if (uVar8 <= uVar24) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar20 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar20,pSVar10,(MethodInfo *)0x0);
    uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar20,uVar15);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar7 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar7 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar7 != 0) {
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
    }
    il2cpp_runtime_helper_02337ed0();
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  sVar4 = *(short *)((long)&pIVar13->klass + lVar16);
  if (sVar4 == 0x2a) {
    if ((int)uVar25 < (int)uVar8) {
      if (uVar8 <= uVar25) goto label_0425dfec;
      if (*(short *)((long)&pIVar13[2].klass + (long)(int)uVar25 * 2) == 0x2f) {
        return (System_String_o *)pSVar26;
      }
    }
label_0425df80:
    iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  else {
    if (sVar4 != 10) goto label_0425df80;
    ppSVar2 = &(pSVar20->fields)._helpURL;
    *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
    iVar7 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar8 = *(uint *)&pIVar13[1].monitor;
  }
  if (uVar8 <= uVar24) goto label_0425dfec;
  pSVar10 = System_Char__ToString((short)pIVar13 + (short)lVar16,(MethodInfo *)0x0);
  pSVar26 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar26,pSVar10,(MethodInfo *)0x0);
  pIVar13 = (pSVar20->fields)._stackTrace;
  uVar25 = uVar25 + 1;
  lVar16 = lVar16 + 2;
  if (pIVar13 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return (System_String_o *)pSVar26;
  }
  goto label_0425df10;
  while( true ) {
    pSVar21 = g_data_057b9bf8;
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      uStack_a0 = 0x425d7c0;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((uint)(__this_01->fields)._size <= uVar25) goto label_0425d867;
    __this_01 = (System_Collections_Generic_List_object__o *)((long)&__this_01->klass + uVar19);
    uStack_a0 = 0x425d7d7;
    pSVar10 = System_Char__ToString((uint16_t)__this_01,(MethodInfo *)0x0);
    uStack_a0 = 0x425d7e4;
    pSVar26 = (System_Exception_o *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar11,pSVar10,(MethodInfo *)0x0);
    uVar17 = (ulong)(uVar25 + 1);
    pIVar13 = (pSVar20->fields)._stackTrace;
    uVar19 = uVar19 + 2;
    pSVar21 = pSVar11;
    pSVar11 = pSVar26;
    if (pIVar13 == (Il2CppObject *)0x0) break;
label_0425d740:
    uVar25 = (uint)uVar17;
    if ((int)*(uint *)&pIVar13[1].monitor <= (int)uVar25) {
      return (System_String_o *)"";
    }
    pSVar26 = pSVar11;
    if (*(uint *)&pIVar13[1].monitor <= uVar25) {
label_0425d867:
      uStack_a0 = 0x425d86c;
      il2cpp_runtime_helper_022b2ca0();
      break;
    }
    uVar3 = *(ushort *)((long)&pIVar13->klass + uVar19);
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      uStack_a0 = 0x425d76a;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_Exception_o *)(ulong)uVar3;
    pSVar10 = (System_String_o *)0x0;
    uStack_a0 = 0x425d774;
    bVar6 = System_Char__IsLetter(uVar3,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)(pSVar20->fields)._stackTrace;
    if ((char)bVar6 == '\0') {
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((uint)(__this_01->fields)._size <= uVar25) goto label_0425d867;
      if (*(short *)((long)&__this_01->klass + uVar19) != 0x5f) {
        __this_01 = (System_Collections_Generic_List_object__o *)&TypeInfo_CustomLogicSymbols;
        if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
          uStack_a0 = 0x425d822;
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
        pSVar21 = (System_Exception_o *)0x0;
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          uStack_a0 = 0x425d847;
          bVar6 = System_Collections_Generic_HashSet_object___Contains
                            (__this_00,(Il2CppObject *)pSVar11,MethodInfo_Boolean_Contains);
          if ((char)bVar6 != '\0') {
            return (System_String_o *)pSVar11;
          }
          return (System_String_o *)"";
        }
        break;
      }
    }
    else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
  }
label_0425d86c:
  uStack_a0 = 0x425d871;
  uStack_d0 = il2cpp_runtime_helper_022b2c90();
  uVar23 = (ulong)pSVar10 & 0xffffffff;
  pSVar12 = pSVar10;
  pSVar11 = pSVar21;
  pSStack_c8 = __this_01;
  pIStack_c0 = pIVar22;
  uStack_b8 = uVar17;
  pSStack_b0 = pSVar20;
  pSStack_a8 = pSVar26;
  uStack_a0 = uVar19;
  if (g_data_057adbe2 == '\0') {
    pSVar11 = (System_Exception_o *)&"";
    lStack_d8 = 0x425d8a6;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe2 = '\x01';
  }
  pIVar13 = (pSVar21->fields)._stackTrace;
  if (pIVar13 != (Il2CppObject *)0x0) {
    lVar16 = (long)(int)pSVar10 * 2 + 0x20;
    pSVar26 = "";
    do {
      uVar25 = (uint)uVar23;
      if ((int)*(uint *)&pIVar13[1].monitor <= (int)uVar25) {
        return (System_String_o *)pSVar26;
      }
      if (*(uint *)&pIVar13[1].monitor <= uVar25) {
label_0425d9a6:
        lStack_d8 = 0x425d9ab;
        uStack_108 = il2cpp_runtime_helper_022b2ca0();
        puStack_f0 = &g_data_057b9b70;
        uVar19 = (ulong)pSVar12 & 0xffffffff;
        pSVar10 = pSVar12;
        pSVar20 = pSVar11;
        pSStack_100 = __this_01;
        uStack_f8 = uVar23;
        pSStack_e8 = pSVar21;
        pSStack_e0 = pSVar26;
        lStack_d8 = lVar16;
        if (g_data_057adbe1 == '\0') {
          pSVar20 = (System_Exception_o *)&"";
          lStack_110 = 0x425d9d6;
          il2cpp_runtime_helper_023445d0();
          g_data_057adbe1 = '\x01';
        }
        pIVar13 = (pSVar11->fields)._stackTrace;
        if (pIVar13 == (Il2CppObject *)0x0) goto label_0425dabf;
        lVar16 = (long)(int)pSVar12 * 2 + 0x20;
        pSVar26 = "";
        goto label_0425da10;
      }
      uVar3 = *(ushort *)((long)&pIVar13->klass + lVar16);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_d8 = 0x425d909;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (System_Exception_o *)(ulong)uVar3;
      pSVar12 = (System_String_o *)0x0;
      lStack_d8 = 0x425d913;
      bVar6 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_List_object__o *)(pSVar21->fields)._stackTrace;
      if ((char)bVar6 == '\0') {
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
        if ((uint)(__this_01->fields)._size <= uVar25) goto label_0425d9a6;
        if (*(short *)((long)&__this_01->klass + lVar16) != 0x5f) {
          return (System_String_o *)pSVar26;
        }
      }
      else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar11 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_d8 = 0x425d957;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)(__this_01->fields)._size <= uVar25) goto label_0425d9a6;
      __this_01 = (System_Collections_Generic_List_object__o *)((long)&__this_01->klass + lVar16);
      lStack_d8 = 0x425d96a;
      pSVar12 = System_Char__ToString((uint16_t)__this_01,(MethodInfo *)0x0);
      lStack_d8 = 0x425d977;
      pSVar20 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar26,pSVar12,(MethodInfo *)0x0);
      uVar23 = (ulong)(uVar25 + 1);
      pIVar13 = (pSVar21->fields)._stackTrace;
      lVar16 = lVar16 + 2;
      pSVar11 = pSVar26;
      pSVar26 = pSVar20;
    } while (pIVar13 != (Il2CppObject *)0x0);
  }
  lStack_d8 = 0x425d994;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)pSVar26;
  while( true ) {
    pSVar20 = g_data_057b9bf8;
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_110 = 0x425da87;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((uint)(__this_01->fields)._size <= uVar25) goto label_0425dad6;
    __this_01 = (System_Collections_Generic_List_object__o *)((long)&__this_01->klass + lVar16);
    lStack_110 = 0x425da9a;
    pSVar10 = System_Char__ToString((uint16_t)__this_01,(MethodInfo *)0x0);
    lStack_110 = 0x425daa7;
    pSVar21 = (System_Exception_o *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar26,pSVar10,(MethodInfo *)0x0);
    uVar19 = (ulong)(uVar25 + 1);
    pIVar13 = (pSVar11->fields)._stackTrace;
    lVar16 = lVar16 + 2;
    pSVar20 = pSVar26;
    pSVar26 = pSVar21;
    if (pIVar13 == (Il2CppObject *)0x0) break;
label_0425da10:
    uVar25 = (uint)uVar19;
    if ((int)*(uint *)&pIVar13[1].monitor <= (int)uVar25) {
      return (System_String_o *)pSVar26;
    }
    if (*(uint *)&pIVar13[1].monitor <= uVar25) {
label_0425dad6:
      lStack_110 = 0x425dadb;
      il2cpp_runtime_helper_022b2ca0();
      puStack_128 = &g_data_057b9b70;
      uVar17 = (ulong)pSVar10 & 0xffffffff;
      pSStack_140 = pSVar20;
      pSStack_138 = __this_01;
      uStack_130 = uVar19;
      pSStack_120 = pSVar11;
      pSStack_118 = pSVar26;
      lStack_110 = lVar16;
      if (g_data_057adbe3 == '\0') {
        il2cpp_runtime_helper_023445d0(&"\n");
        il2cpp_runtime_helper_023445d0(&"\\");
        il2cpp_runtime_helper_023445d0(&"\t");
        il2cpp_runtime_helper_023445d0(&"\"");
        il2cpp_runtime_helper_023445d0(&"");
        pSVar20 = (System_Exception_o *)&"\r";
        il2cpp_runtime_helper_023445d0();
        g_data_057adbe3 = '\x01';
      }
      pSVar11 = "";
      sStack_142 = 0;
      *extraout_RDX = 0;
      pIVar13 = (pSStack_140->fields)._stackTrace;
      goto joined_r0x0425db74;
    }
    uVar3 = *(ushort *)((long)&pIVar13->klass + lVar16);
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_110 = 0x425da39;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar20 = (System_Exception_o *)(ulong)uVar3;
    pSVar10 = (System_String_o *)0x0;
    lStack_110 = 0x425da43;
    bVar6 = System_Char__IsDigit(uVar3,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)(pSVar11->fields)._stackTrace;
    if ((char)bVar6 == '\0') {
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((uint)(__this_01->fields)._size <= uVar25) goto label_0425dad6;
      if (*(short *)((long)&__this_01->klass + lVar16) != 0x2e) {
        return (System_String_o *)pSVar26;
      }
    }
    else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
  }
label_0425dabf:
  lStack_110 = 0x425dac4;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)pSVar26;
label_0425dd7c:
  il2cpp_runtime_helper_022b2c90();
  uVar19 = (ulong)pSVar10 & 0xffffffff;
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pIVar13 = (pSVar20->fields)._stackTrace;
  if (pIVar13 != (Il2CppObject *)0x0) {
    pSVar26 = (System_Exception_o *)&g_data_057b9b70;
    pSVar11 = "";
    do {
      uVar24 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar24;
      uVar25 = *(uint *)&pIVar13[1].monitor;
      if ((int)uVar25 <= (int)uVar24) {
label_0425de5f:
        uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        pSVar20 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
        pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
        System_Exception___ctor_3cf6120(pSVar20,pSVar10,(MethodInfo *)0x0);
        iVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
        il2cpp_runtime_helper_022b2b10();
        if (g_data_057adbe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adbe5 = '\x01';
        }
        pIVar13 = (pSVar20->fields)._stackTrace;
        if (pIVar13 == (Il2CppObject *)0x0) goto label_0425dfd5;
        uVar25 = iVar7 + 2;
        lVar16 = (long)(iVar7 + 1) * 2 + 0x20;
        pSVar26 = "";
        goto label_0425df10;
      }
      if (uVar25 <= uVar24) {
label_0425de5a:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0425de5f;
      }
      if (*(short *)((long)&pIVar13[2].klass + (long)(int)uVar24 * 2) == 10) goto label_0425de43;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar25 = *(uint *)&pIVar13[1].monitor;
      }
      if (uVar25 <= uVar24) goto label_0425de5a;
      pSVar10 = System_Char__ToString((short)pIVar13 + (short)uVar24 * 2 + 0x20,(MethodInfo *)0x0);
      pSVar11 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar11,pSVar10,(MethodInfo *)0x0);
      pIVar13 = (pSVar20->fields)._stackTrace;
    } while (pIVar13 != (Il2CppObject *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_0425de43:
  ppSVar2 = &(pSVar20->fields)._helpURL;
  *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
  return (System_String_o *)pSVar11;
}


// CustomLogic.CustomLogicLexer$$ScanNumber
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanNumber (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x425d9b0

System_String_o *
CustomLogic_CustomLogicLexer__ScanNumber
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort c;
  short sVar2;
  bool_conflict bVar3;
  int iVar4;
  uint uVar5;
  System_Char_array *pSVar6;
  System_String_o *pSVar7;
  System_Exception_o *pSVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *extraout_RDX;
  System_Char_array *unaff_RBX;
  ulong uVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  System_Exception_o *pSVar14;
  uint uVar15;
  uint uVar16;
  System_Exception_o *unaff_R15;
  System_Exception_o *pSVar17;
  short sStack_72;
  System_Exception_o *pSStack_70;
  System_Char_array *pSStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  CustomLogic_CustomLogicLexer_o *pCStack_50;
  System_Exception_o *pSStack_48;
  long lStack_40;
  
  pSVar7 = (System_String_o *)(ulong)(uint)startIndex;
  pSVar14 = (System_Exception_o *)__this;
  if (g_data_057adbe1 == '\0') {
    pSVar14 = (System_Exception_o *)&"";
    lStack_40 = 0x425d9d6;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe1 = '\x01';
  }
  pSVar6 = (__this->fields)._chars;
  if (pSVar6 != (System_Char_array *)0x0) {
    lVar13 = (long)startIndex * 2 + 0x20;
    unaff_R15 = "";
    do {
      uVar16 = (uint)pSVar6->max_length;
      if ((int)uVar16 <= startIndex) {
        return (System_String_o *)unaff_R15;
      }
      if (uVar16 <= (uint)startIndex) {
label_0425dad6:
        lStack_40 = 0x425dadb;
        il2cpp_runtime_helper_022b2ca0();
        puStack_58 = &g_data_057b9b70;
        uVar11 = (ulong)pSVar7 & 0xffffffff;
        pSStack_70 = pSVar14;
        pSStack_68 = unaff_RBX;
        uStack_60 = (ulong)(uint)startIndex;
        pCStack_50 = __this;
        pSStack_48 = unaff_R15;
        lStack_40 = lVar13;
        if (g_data_057adbe3 == '\0') {
          il2cpp_runtime_helper_023445d0(&"\n");
          il2cpp_runtime_helper_023445d0(&"\\");
          il2cpp_runtime_helper_023445d0(&"\t");
          il2cpp_runtime_helper_023445d0(&"\"");
          il2cpp_runtime_helper_023445d0(&"");
          pSVar14 = (System_Exception_o *)&"\r";
          il2cpp_runtime_helper_023445d0();
          g_data_057adbe3 = '\x01';
        }
        pSVar8 = "";
        sStack_72 = 0;
        *extraout_RDX = 0;
        pIVar12 = (pSStack_70->fields)._stackTrace;
        goto joined_r0x0425db74;
      }
      c = *(ushort *)((long)pSVar6->m_Items + lVar13 + -0x20);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425da39;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = (System_Exception_o *)(ulong)c;
      pSVar7 = (System_String_o *)0x0;
      lStack_40 = 0x425da43;
      bVar3 = System_Char__IsDigit(c,(MethodInfo *)0x0);
      unaff_RBX = (__this->fields)._chars;
      if ((char)bVar3 == '\0') {
        if (unaff_RBX == (System_Char_array *)0x0) break;
        if ((uint)unaff_RBX->max_length <= (uint)startIndex) goto label_0425dad6;
        if (*(short *)((long)unaff_RBX->m_Items + lVar13 + -0x20) != 0x2e) {
          return (System_String_o *)unaff_R15;
        }
      }
      else if (unaff_RBX == (System_Char_array *)0x0) break;
      pSVar14 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425da87;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)unaff_RBX->max_length <= (uint)startIndex) goto label_0425dad6;
      unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + lVar13 + -0x20);
      lStack_40 = 0x425da9a;
      pSVar7 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
      lStack_40 = 0x425daa7;
      pSVar8 = (System_Exception_o *)
               System_String__Concat_3ae5ba0((System_String_o *)unaff_R15,pSVar7,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar6 = (__this->fields)._chars;
      lVar13 = lVar13 + 2;
      pSVar14 = unaff_R15;
      unaff_R15 = pSVar8;
    } while (pSVar6 != (System_Char_array *)0x0);
  }
  lStack_40 = 0x425dac4;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)unaff_R15;
joined_r0x0425db74:
  if (pIVar12 == (Il2CppObject *)0x0) goto label_0425dd7c;
  uVar15 = (int)uVar11 + 1;
  uVar16 = *(uint *)&pIVar12[1].monitor;
  if ((int)uVar16 <= (int)uVar15) {
label_0425dd35:
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed string literal");
    System_Exception___ctor_3cf6120(pSVar14,pSVar7,(MethodInfo *)0x0);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanStringLiteral);
    il2cpp_runtime_helper_022b2b10();
    goto label_0425dd7c;
  }
  iVar4 = *extraout_RDX;
  *extraout_RDX = iVar4 + 1;
  if (uVar16 <= uVar15) {
label_0425dd30:
    il2cpp_runtime_helper_022b2ca0();
    goto label_0425dd35;
  }
  sVar2 = *(short *)((long)&pIVar12[2].klass + (long)(int)uVar15 * 2);
  if (sVar2 == 10) {
    ppSVar1 = &(pSStack_70->fields)._helpURL;
    *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
    iVar4 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
joined_r0x0425dc8e:
    if (iVar4 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar16 = *(uint *)&pIVar12[1].monitor;
    }
    if (uVar16 <= uVar15) goto label_0425dd30;
    pSVar7 = System_Char__ToString((short)uVar15 * 2 + 0x20 + (short)pIVar12,(MethodInfo *)0x0);
    uVar11 = (ulong)uVar15;
  }
  else {
    if (sVar2 != 0x5c) {
      if (sVar2 == 0x22) {
        *extraout_RDX = iVar4;
        return (System_String_o *)pSVar8;
      }
      iVar4 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
      goto joined_r0x0425dc8e;
    }
    uVar15 = (int)uVar11 + 2;
    uVar11 = (ulong)uVar15;
    if ((int)uVar16 <= (int)uVar15) goto label_0425dd35;
    *extraout_RDX = iVar4 + 2;
    if (uVar16 <= uVar15) goto label_0425dd30;
    sStack_72 = *(short *)((long)&pIVar12[2].klass + (long)(int)uVar15 * 2);
    switch(sStack_72) {
    case 0x5c:
      puVar9 = &"\\";
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
switchD_0425dc53_caseD_5d:
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = System_Char__ToString((uint16_t)&sStack_72,(MethodInfo *)0x0);
      goto label_0425db85;
    case 0x6e:
      puVar9 = &"\n";
      break;
    case 0x72:
      puVar9 = &"\r";
      break;
    case 0x74:
      puVar9 = &"\t";
      break;
    default:
      if (sStack_72 != 0x22) goto switchD_0425dc53_caseD_5d;
      puVar9 = &"\"";
    }
    pSVar7 = (System_String_o *)*puVar9;
  }
label_0425db85:
  pSVar17 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar8,pSVar7,(MethodInfo *)0x0);
  pIVar12 = (pSStack_70->fields)._stackTrace;
  pSVar14 = pSVar8;
  pSVar8 = pSVar17;
  goto joined_r0x0425db74;
label_0425df10:
  uVar15 = uVar16 - 1;
  uVar5 = *(uint *)&pIVar12[1].monitor;
  if ((int)uVar5 <= (int)uVar15) goto label_0425dff1;
  if (uVar5 <= uVar15) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar14,pSVar7,(MethodInfo *)0x0);
    uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar14,uVar10);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar4 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar4 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar4 != 0) {
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
    }
    il2cpp_runtime_helper_02337ed0();
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  sVar2 = *(short *)((long)&pIVar12->klass + lVar13);
  if (sVar2 == 0x2a) {
    if ((int)uVar16 < (int)uVar5) {
      if (uVar5 <= uVar16) goto label_0425dfec;
      if (*(short *)((long)&pIVar12[2].klass + (long)(int)uVar16 * 2) == 0x2f) {
        return (System_String_o *)pSVar17;
      }
    }
label_0425df80:
    iVar4 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  else {
    if (sVar2 != 10) goto label_0425df80;
    ppSVar1 = &(pSVar14->fields)._helpURL;
    *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
    iVar4 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar5 = *(uint *)&pIVar12[1].monitor;
  }
  if (uVar5 <= uVar15) goto label_0425dfec;
  pSVar7 = System_Char__ToString((short)pIVar12 + (short)lVar13,(MethodInfo *)0x0);
  pSVar17 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar17,pSVar7,(MethodInfo *)0x0);
  pIVar12 = (pSVar14->fields)._stackTrace;
  uVar16 = uVar16 + 1;
  lVar13 = lVar13 + 2;
  if (pIVar12 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return (System_String_o *)pSVar17;
  }
  goto label_0425df10;
label_0425dd7c:
  il2cpp_runtime_helper_022b2c90();
  uVar11 = (ulong)pSVar7 & 0xffffffff;
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pIVar12 = (pSVar14->fields)._stackTrace;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pSVar17 = (System_Exception_o *)&g_data_057b9b70;
    pSVar8 = "";
    do {
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar15;
      uVar16 = *(uint *)&pIVar12[1].monitor;
      if ((int)uVar16 <= (int)uVar15) {
label_0425de5f:
        uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
        System_Exception___ctor_3cf6120(pSVar14,pSVar7,(MethodInfo *)0x0);
        iVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
        il2cpp_runtime_helper_022b2b10();
        if (g_data_057adbe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adbe5 = '\x01';
        }
        pIVar12 = (pSVar14->fields)._stackTrace;
        if (pIVar12 == (Il2CppObject *)0x0) goto label_0425dfd5;
        uVar16 = iVar4 + 2;
        lVar13 = (long)(iVar4 + 1) * 2 + 0x20;
        pSVar17 = "";
        goto label_0425df10;
      }
      if (uVar16 <= uVar15) {
label_0425de5a:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0425de5f;
      }
      if (*(short *)((long)&pIVar12[2].klass + (long)(int)uVar15 * 2) == 10) goto label_0425de43;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar16 = *(uint *)&pIVar12[1].monitor;
      }
      if (uVar16 <= uVar15) goto label_0425de5a;
      pSVar7 = System_Char__ToString((short)pIVar12 + (short)uVar15 * 2 + 0x20,(MethodInfo *)0x0);
      pSVar8 = (System_Exception_o *)
               System_String__Concat_3ae5ba0((System_String_o *)pSVar8,pSVar7,(MethodInfo *)0x0);
      pIVar12 = (pSVar14->fields)._stackTrace;
    } while (pIVar12 != (Il2CppObject *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_0425de43:
  ppSVar1 = &(pSVar14->fields)._helpURL;
  *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
  return (System_String_o *)pSVar8;
}


// CustomLogic.CustomLogicLexer$$ScanName
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanName (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x425d880

System_String_o *
CustomLogic_CustomLogicLexer__ScanName
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort uVar2;
  short sVar3;
  bool_conflict bVar4;
  int iVar5;
  uint uVar6;
  System_Char_array *pSVar7;
  System_String_o *pSVar8;
  System_Exception_o *pSVar9;
  Il2CppObject *pIVar10;
  System_String_o *str1;
  System_Exception_o *pSVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *extraout_RDX;
  System_Char_array *unaff_RBX;
  ulong uVar14;
  long lVar15;
  System_Exception_o *pSVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  System_Exception_o *unaff_R15;
  short sStack_aa;
  System_Exception_o *pSStack_a8;
  System_Char_array *pSStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  System_Exception_o *pSStack_88;
  System_Exception_o *pSStack_80;
  long lStack_78;
  undefined8 uStack_70;
  System_Char_array *pSStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  CustomLogic_CustomLogicLexer_o *pCStack_50;
  System_Exception_o *pSStack_48;
  long lStack_40;
  
  pSVar8 = (System_String_o *)(ulong)(uint)startIndex;
  pSVar16 = (System_Exception_o *)__this;
  if (g_data_057adbe2 == '\0') {
    pSVar16 = (System_Exception_o *)&"";
    lStack_40 = 0x425d8a6;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe2 = '\x01';
  }
  pSVar7 = (__this->fields)._chars;
  if (pSVar7 != (System_Char_array *)0x0) {
    lVar15 = (long)startIndex * 2 + 0x20;
    unaff_R15 = "";
    do {
      uVar19 = (uint)pSVar7->max_length;
      if ((int)uVar19 <= startIndex) {
        return (System_String_o *)unaff_R15;
      }
      if (uVar19 <= (uint)startIndex) {
label_0425d9a6:
        lStack_40 = 0x425d9ab;
        uStack_70 = il2cpp_runtime_helper_022b2ca0();
        puStack_58 = &g_data_057b9b70;
        uVar17 = (ulong)pSVar8 & 0xffffffff;
        str1 = pSVar8;
        pSVar9 = pSVar16;
        pSStack_68 = unaff_RBX;
        uStack_60 = (ulong)(uint)startIndex;
        pCStack_50 = __this;
        pSStack_48 = unaff_R15;
        lStack_40 = lVar15;
        if (g_data_057adbe1 == '\0') {
          pSVar9 = (System_Exception_o *)&"";
          lStack_78 = 0x425d9d6;
          il2cpp_runtime_helper_023445d0();
          g_data_057adbe1 = '\x01';
        }
        pIVar10 = (pSVar16->fields)._stackTrace;
        if (pIVar10 == (Il2CppObject *)0x0) goto label_0425dabf;
        lVar15 = (long)(int)pSVar8 * 2 + 0x20;
        unaff_R15 = "";
        goto label_0425da10;
      }
      uVar2 = *(ushort *)((long)pSVar7->m_Items + lVar15 + -0x20);
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425d909;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_Exception_o *)(ulong)uVar2;
      pSVar8 = (System_String_o *)0x0;
      lStack_40 = 0x425d913;
      bVar4 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
      unaff_RBX = (__this->fields)._chars;
      if ((char)bVar4 == '\0') {
        if (unaff_RBX == (System_Char_array *)0x0) break;
        if ((uint)unaff_RBX->max_length <= (uint)startIndex) goto label_0425d9a6;
        if (*(short *)((long)unaff_RBX->m_Items + lVar15 + -0x20) != 0x5f) {
          return (System_String_o *)unaff_R15;
        }
      }
      else if (unaff_RBX == (System_Char_array *)0x0) break;
      pSVar16 = g_data_057b9bf8;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        lStack_40 = 0x425d957;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((uint)unaff_RBX->max_length <= (uint)startIndex) goto label_0425d9a6;
      unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + lVar15 + -0x20);
      lStack_40 = 0x425d96a;
      pSVar8 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
      lStack_40 = 0x425d977;
      pSVar9 = (System_Exception_o *)
               System_String__Concat_3ae5ba0((System_String_o *)unaff_R15,pSVar8,(MethodInfo *)0x0);
      startIndex = startIndex + 1;
      pSVar7 = (__this->fields)._chars;
      lVar15 = lVar15 + 2;
      pSVar16 = unaff_R15;
      unaff_R15 = pSVar9;
    } while (pSVar7 != (System_Char_array *)0x0);
  }
  lStack_40 = 0x425d994;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)unaff_R15;
joined_r0x0425db74:
  if (pIVar10 == (Il2CppObject *)0x0) goto label_0425dd7c;
  uVar18 = (int)uVar14 + 1;
  uVar19 = *(uint *)&pIVar10[1].monitor;
  if ((int)uVar19 <= (int)uVar18) {
label_0425dd35:
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar13);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed string literal");
    System_Exception___ctor_3cf6120(pSVar9,pSVar8,(MethodInfo *)0x0);
    str1 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanStringLiteral);
    il2cpp_runtime_helper_022b2b10();
    goto label_0425dd7c;
  }
  iVar5 = *extraout_RDX;
  *extraout_RDX = iVar5 + 1;
  if (uVar19 <= uVar18) {
label_0425dd30:
    il2cpp_runtime_helper_022b2ca0();
    goto label_0425dd35;
  }
  sVar3 = *(short *)((long)&pIVar10[2].klass + (long)(int)uVar18 * 2);
  if (sVar3 == 10) {
    ppSVar1 = &(pSStack_a8->fields)._helpURL;
    *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
    iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
joined_r0x0425dc8e:
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar19 = *(uint *)&pIVar10[1].monitor;
    }
    if (uVar19 <= uVar18) goto label_0425dd30;
    str1 = System_Char__ToString((short)uVar18 * 2 + 0x20 + (short)pIVar10,(MethodInfo *)0x0);
    uVar14 = (ulong)uVar18;
  }
  else {
    if (sVar3 != 0x5c) {
      if (sVar3 == 0x22) {
        *extraout_RDX = iVar5;
        return (System_String_o *)pSVar16;
      }
      iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
      goto joined_r0x0425dc8e;
    }
    uVar18 = (int)uVar14 + 2;
    uVar14 = (ulong)uVar18;
    if ((int)uVar19 <= (int)uVar18) goto label_0425dd35;
    *extraout_RDX = iVar5 + 2;
    if (uVar19 <= uVar18) goto label_0425dd30;
    sStack_aa = *(short *)((long)&pIVar10[2].klass + (long)(int)uVar18 * 2);
    switch(sStack_aa) {
    case 0x5c:
      puVar12 = &"\\";
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
switchD_0425dc53_caseD_5d:
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str1 = System_Char__ToString((uint16_t)&sStack_aa,(MethodInfo *)0x0);
      goto label_0425db85;
    case 0x6e:
      puVar12 = &"\n";
      break;
    case 0x72:
      puVar12 = &"\r";
      break;
    case 0x74:
      puVar12 = &"\t";
      break;
    default:
      if (sStack_aa != 0x22) goto switchD_0425dc53_caseD_5d;
      puVar12 = &"\"";
    }
    str1 = (System_String_o *)*puVar12;
  }
label_0425db85:
  pSVar11 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar16,str1,(MethodInfo *)0x0);
  pIVar10 = (pSStack_a8->fields)._stackTrace;
  pSVar9 = pSVar16;
  pSVar16 = pSVar11;
  goto joined_r0x0425db74;
label_0425df10:
  uVar18 = uVar19 - 1;
  uVar6 = *(uint *)&pIVar10[1].monitor;
  if ((int)uVar6 <= (int)uVar18) goto label_0425dff1;
  if (uVar6 <= uVar18) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar16 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar13);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar16,pSVar8,(MethodInfo *)0x0);
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar16,uVar13);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar5 != 0) {
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
    }
    il2cpp_runtime_helper_02337ed0();
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  sVar3 = *(short *)((long)&pIVar10->klass + lVar15);
  if (sVar3 == 0x2a) {
    if ((int)uVar19 < (int)uVar6) {
      if (uVar6 <= uVar19) goto label_0425dfec;
      if (*(short *)((long)&pIVar10[2].klass + (long)(int)uVar19 * 2) == 0x2f) {
        return (System_String_o *)pSVar11;
      }
    }
label_0425df80:
    iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  else {
    if (sVar3 != 10) goto label_0425df80;
    ppSVar1 = &(pSVar16->fields)._helpURL;
    *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
    iVar5 = *(int *)&g_data_057b9bf8[1].fields.field_0x44;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar6 = *(uint *)&pIVar10[1].monitor;
  }
  if (uVar6 <= uVar18) goto label_0425dfec;
  pSVar8 = System_Char__ToString((short)pIVar10 + (short)lVar15,(MethodInfo *)0x0);
  pSVar11 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar11,pSVar8,(MethodInfo *)0x0);
  pIVar10 = (pSVar16->fields)._stackTrace;
  uVar19 = uVar19 + 1;
  lVar15 = lVar15 + 2;
  if (pIVar10 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return (System_String_o *)pSVar11;
  }
  goto label_0425df10;
  while( true ) {
    pSVar9 = g_data_057b9bf8;
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_78 = 0x425da87;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((uint)unaff_RBX->max_length <= uVar19) goto label_0425dad6;
    unaff_RBX = (System_Char_array *)((long)unaff_RBX->m_Items + lVar15 + -0x20);
    lStack_78 = 0x425da9a;
    str1 = System_Char__ToString((uint16_t)unaff_RBX,(MethodInfo *)0x0);
    lStack_78 = 0x425daa7;
    pSVar11 = (System_Exception_o *)
              System_String__Concat_3ae5ba0((System_String_o *)unaff_R15,str1,(MethodInfo *)0x0);
    uVar17 = (ulong)(uVar19 + 1);
    pIVar10 = (pSVar16->fields)._stackTrace;
    lVar15 = lVar15 + 2;
    pSVar9 = unaff_R15;
    unaff_R15 = pSVar11;
    if (pIVar10 == (Il2CppObject *)0x0) break;
label_0425da10:
    uVar19 = (uint)uVar17;
    if ((int)*(uint *)&pIVar10[1].monitor <= (int)uVar19) {
      return (System_String_o *)unaff_R15;
    }
    if (*(uint *)&pIVar10[1].monitor <= uVar19) {
label_0425dad6:
      lStack_78 = 0x425dadb;
      il2cpp_runtime_helper_022b2ca0();
      puStack_90 = &g_data_057b9b70;
      uVar14 = (ulong)str1 & 0xffffffff;
      pSStack_a8 = pSVar9;
      pSStack_a0 = unaff_RBX;
      uStack_98 = uVar17;
      pSStack_88 = pSVar16;
      pSStack_80 = unaff_R15;
      lStack_78 = lVar15;
      if (g_data_057adbe3 == '\0') {
        il2cpp_runtime_helper_023445d0(&"\n");
        il2cpp_runtime_helper_023445d0(&"\\");
        il2cpp_runtime_helper_023445d0(&"\t");
        il2cpp_runtime_helper_023445d0(&"\"");
        il2cpp_runtime_helper_023445d0(&"");
        pSVar9 = (System_Exception_o *)&"\r";
        il2cpp_runtime_helper_023445d0();
        g_data_057adbe3 = '\x01';
      }
      pSVar16 = "";
      sStack_aa = 0;
      *extraout_RDX = 0;
      pIVar10 = (pSStack_a8->fields)._stackTrace;
      goto joined_r0x0425db74;
    }
    uVar2 = *(ushort *)((long)&pIVar10->klass + lVar15);
    if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
      lStack_78 = 0x425da39;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_Exception_o *)(ulong)uVar2;
    str1 = (System_String_o *)0x0;
    lStack_78 = 0x425da43;
    bVar4 = System_Char__IsDigit(uVar2,(MethodInfo *)0x0);
    unaff_RBX = (System_Char_array *)(pSVar16->fields)._stackTrace;
    if ((char)bVar4 == '\0') {
      if (unaff_RBX == (System_Char_array *)0x0) break;
      if ((uint)unaff_RBX->max_length <= uVar19) goto label_0425dad6;
      if (*(short *)((long)unaff_RBX->m_Items + lVar15 + -0x20) != 0x2e) {
        return (System_String_o *)unaff_R15;
      }
    }
    else if (unaff_RBX == (System_Char_array *)0x0) break;
  }
label_0425dabf:
  lStack_78 = 0x425dac4;
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)unaff_R15;
label_0425dd7c:
  il2cpp_runtime_helper_022b2c90();
  uVar17 = (ulong)str1 & 0xffffffff;
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pIVar10 = (pSVar9->fields)._stackTrace;
  if (pIVar10 != (Il2CppObject *)0x0) {
    pSVar11 = (System_Exception_o *)&g_data_057b9b70;
    pSVar16 = "";
    do {
      uVar18 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar18;
      uVar19 = *(uint *)&pIVar10[1].monitor;
      if ((int)uVar19 <= (int)uVar18) {
label_0425de5f:
        uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        pSVar16 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar13);
        pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
        System_Exception___ctor_3cf6120(pSVar16,pSVar8,(MethodInfo *)0x0);
        iVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
        il2cpp_runtime_helper_022b2b10();
        if (g_data_057adbe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adbe5 = '\x01';
        }
        pIVar10 = (pSVar16->fields)._stackTrace;
        if (pIVar10 == (Il2CppObject *)0x0) goto label_0425dfd5;
        uVar19 = iVar5 + 2;
        lVar15 = (long)(iVar5 + 1) * 2 + 0x20;
        pSVar11 = "";
        goto label_0425df10;
      }
      if (uVar19 <= uVar18) {
label_0425de5a:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0425de5f;
      }
      if (*(short *)((long)&pIVar10[2].klass + (long)(int)uVar18 * 2) == 10) goto label_0425de43;
      if (*(int *)&g_data_057b9bf8[1].fields.field_0x44 == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar19 = *(uint *)&pIVar10[1].monitor;
      }
      if (uVar19 <= uVar18) goto label_0425de5a;
      pSVar8 = System_Char__ToString((short)pIVar10 + (short)uVar18 * 2 + 0x20,(MethodInfo *)0x0);
      pSVar16 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar16,pSVar8,(MethodInfo *)0x0);
      pIVar10 = (pSVar9->fields)._stackTrace;
    } while (pIVar10 != (Il2CppObject *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_0425de43:
  ppSVar1 = &(pSVar9->fields)._helpURL;
  *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
  return (System_String_o *)pSVar16;
}


// CustomLogic.CustomLogicLexer$$ScanStringLiteral
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanStringLiteral (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, int32_t* rawLiteralLength, const MethodInfo* method);
// 0x425dae0

System_String_o *
CustomLogic_CustomLogicLexer__ScanStringLiteral
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,int32_t *rawLiteralLength,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  uint16_t uVar3;
  short sVar4;
  System_Char_array *pSVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  System_Exception_o *pSVar10;
  undefined8 uVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  System_Exception_o *pSVar17;
  uint16_t local_3a;
  CustomLogic_CustomLogicLexer_o *local_38;
  
  pSVar9 = (System_String_o *)(ulong)(uint)startIndex;
  local_38 = __this;
  if (g_data_057adbe3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"\t");
    il2cpp_runtime_helper_023445d0(&"\"");
    il2cpp_runtime_helper_023445d0(&"");
    __this = (CustomLogic_CustomLogicLexer_o *)&"\r";
    il2cpp_runtime_helper_023445d0();
    g_data_057adbe3 = '\x01';
  }
  pSVar10 = "";
  local_3a = 0;
  *rawLiteralLength = 0;
  pSVar5 = (local_38->fields)._chars;
  while (pSVar5 != (System_Char_array *)0x0) {
    uVar14 = startIndex + 1;
    uVar15 = (uint)pSVar5->max_length;
    if ((int)uVar15 <= (int)uVar14) {
label_0425dd35:
      uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      __this = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(uVar11);
      pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed string literal");
      System_Exception___ctor_3cf6120((System_Exception_o *)__this,pSVar9,(MethodInfo *)0x0);
      pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanStringLiteral);
      il2cpp_runtime_helper_022b2b10();
      break;
    }
    iVar6 = *rawLiteralLength;
    *rawLiteralLength = iVar6 + 1;
    if (uVar15 <= uVar14) {
label_0425dd30:
      il2cpp_runtime_helper_022b2ca0();
      goto label_0425dd35;
    }
    uVar3 = pSVar5->m_Items[(int)uVar14];
    if (uVar3 == 10) {
      piVar1 = &(local_38->fields)._line;
      *piVar1 = *piVar1 + 1;
      iVar6 = *(int *)(g_data_057b9bf8 + 0xe4);
joined_r0x0425dc8e:
      if (iVar6 == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar15 = (uint)pSVar5->max_length;
      }
      if (uVar15 <= uVar14) goto label_0425dd30;
      pSVar9 = System_Char__ToString((short)uVar14 * 2 + 0x20 + (short)pSVar5,(MethodInfo *)0x0);
    }
    else {
      if (uVar3 != 0x5c) {
        if (uVar3 == 0x22) {
          *rawLiteralLength = iVar6;
          return (System_String_o *)pSVar10;
        }
        iVar6 = *(int *)(g_data_057b9bf8 + 0xe4);
        goto joined_r0x0425dc8e;
      }
      uVar14 = startIndex + 2;
      if ((int)uVar15 <= (int)uVar14) goto label_0425dd35;
      *rawLiteralLength = iVar6 + 2;
      if (uVar15 <= uVar14) goto label_0425dd30;
      local_3a = pSVar5->m_Items[(int)uVar14];
      switch(local_3a) {
      case 0x5c:
        puVar8 = &"\\";
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
switchD_0425dc53_caseD_5d:
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = System_Char__ToString((uint16_t)&local_3a,(MethodInfo *)0x0);
        goto label_0425db85;
      case 0x6e:
        puVar8 = &"\n";
        break;
      case 0x72:
        puVar8 = &"\r";
        break;
      case 0x74:
        puVar8 = &"\t";
        break;
      default:
        if (local_3a != 0x22) goto switchD_0425dc53_caseD_5d;
        puVar8 = &"\"";
      }
      pSVar9 = (System_String_o *)*puVar8;
    }
label_0425db85:
    pSVar17 = (System_Exception_o *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar10,pSVar9,(MethodInfo *)0x0);
    startIndex = uVar14;
    __this = (CustomLogic_CustomLogicLexer_o *)pSVar10;
    pSVar10 = pSVar17;
    pSVar5 = (local_38->fields)._chars;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar16 = (ulong)pSVar9 & 0xffffffff;
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pIVar12 = (((System_Exception_o *)__this)->fields)._stackTrace;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pSVar17 = (System_Exception_o *)&g_data_057b9b70;
    pSVar10 = "";
    do {
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar14;
      uVar15 = *(uint *)&pIVar12[1].monitor;
      if ((int)uVar15 <= (int)uVar14) {
label_0425de5f:
        uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar11);
        pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
        System_Exception___ctor_3cf6120(pSVar10,pSVar9,(MethodInfo *)0x0);
        iVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
        il2cpp_runtime_helper_022b2b10();
        if (g_data_057adbe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adbe5 = '\x01';
        }
        pIVar12 = (pSVar10->fields)._stackTrace;
        if (pIVar12 == (Il2CppObject *)0x0) goto label_0425dfd5;
        uVar15 = iVar6 + 2;
        lVar13 = (long)(iVar6 + 1) * 2 + 0x20;
        pSVar17 = "";
        goto label_0425df10;
      }
      if (uVar15 <= uVar14) {
label_0425de5a:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0425de5f;
      }
      if (*(short *)((long)&pIVar12[2].klass + (long)(int)uVar14 * 2) == 10) goto label_0425de43;
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar15 = *(uint *)&pIVar12[1].monitor;
      }
      if (uVar15 <= uVar14) goto label_0425de5a;
      pSVar9 = System_Char__ToString((short)pIVar12 + (short)uVar14 * 2 + 0x20,(MethodInfo *)0x0);
      pSVar10 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar10,pSVar9,(MethodInfo *)0x0);
      pIVar12 = (((System_Exception_o *)__this)->fields)._stackTrace;
    } while (pIVar12 != (Il2CppObject *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_0425de43:
  ppSVar2 = &(((System_Exception_o *)__this)->fields)._helpURL;
  *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
  return (System_String_o *)pSVar10;
label_0425df10:
  uVar14 = uVar15 - 1;
  uVar7 = *(uint *)&pIVar12[1].monitor;
  if ((int)uVar7 <= (int)uVar14) goto label_0425dff1;
  if (uVar7 <= uVar14) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar11);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar10,pSVar9,(MethodInfo *)0x0);
    uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar10,uVar11);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar6 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar6 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar6 == 0) {
      il2cpp_runtime_helper_02337ed0();
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
    }
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  sVar4 = *(short *)((long)&pIVar12->klass + lVar13);
  if (sVar4 == 0x2a) {
    if ((int)uVar15 < (int)uVar7) {
      if (uVar7 <= uVar15) goto label_0425dfec;
      if (*(short *)((long)&pIVar12[2].klass + (long)(int)uVar15 * 2) == 0x2f) {
        return (System_String_o *)pSVar17;
      }
    }
label_0425df80:
    iVar6 = *(int *)(g_data_057b9bf8 + 0xe4);
  }
  else {
    if (sVar4 != 10) goto label_0425df80;
    ppSVar2 = &(pSVar10->fields)._helpURL;
    *(int *)ppSVar2 = *(int *)ppSVar2 + 1;
    iVar6 = *(int *)(g_data_057b9bf8 + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar7 = *(uint *)&pIVar12[1].monitor;
  }
  if (uVar7 <= uVar14) goto label_0425dfec;
  pSVar9 = System_Char__ToString((short)pIVar12 + (short)lVar13,(MethodInfo *)0x0);
  pSVar17 = (System_Exception_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar17,pSVar9,(MethodInfo *)0x0);
  pIVar12 = (pSVar10->fields)._stackTrace;
  uVar15 = uVar15 + 1;
  lVar13 = lVar13 + 2;
  if (pIVar12 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return (System_String_o *)pSVar17;
  }
  goto label_0425df10;
}


// CustomLogic.CustomLogicLexer$$ScanComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x425dd90

System_String_o *
CustomLogic_CustomLogicLexer__ScanComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  uint uVar1;
  int32_t *piVar2;
  System_String_o **ppSVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *pSVar9;
  System_Char_array *pSVar10;
  Il2CppObject *pIVar11;
  System_String_o *unaff_R12;
  long lVar12;
  uint uVar13;
  System_String_o *pSVar14;
  
  if (g_data_057adbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe4 = '\x01';
  }
  pSVar10 = (__this->fields)._chars;
  if (pSVar10 != (System_Char_array *)0x0) {
    pSVar14 = (System_String_o *)&g_data_057b9b70;
    unaff_R12 = "";
    do {
      startIndex = startIndex + 1;
      uVar13 = (uint)pSVar10->max_length;
      if ((int)uVar13 <= startIndex) {
label_0425de5f:
        uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed comment");
        System_Exception___ctor_3cf6120(pSVar9,pSVar7,(MethodInfo *)0x0);
        iVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanComment);
        il2cpp_runtime_helper_022b2b10();
        if (g_data_057adbe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adbe5 = '\x01';
        }
        pIVar11 = (pSVar9->fields)._stackTrace;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0425dfd5;
        uVar13 = iVar5 + 2;
        lVar12 = (long)(iVar5 + 1) * 2 + 0x20;
        pSVar14 = "";
        goto label_0425df10;
      }
      if (uVar13 <= (uint)startIndex) {
label_0425de5a:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0425de5f;
      }
      if (pSVar10->m_Items[startIndex] == 10) goto label_0425de43;
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar13 = (uint)pSVar10->max_length;
      }
      if (uVar13 <= (uint)startIndex) goto label_0425de5a;
      pSVar7 = System_Char__ToString((short)pSVar10 + (short)startIndex * 2 + 0x20,(MethodInfo *)0x0);
      unaff_R12 = System_String__Concat_3ae5ba0(unaff_R12,pSVar7,(MethodInfo *)0x0);
      pSVar10 = (__this->fields)._chars;
    } while (pSVar10 != (System_Char_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_0425de43:
  piVar2 = &(__this->fields)._line;
  *piVar2 = *piVar2 + 1;
  return unaff_R12;
label_0425df10:
  uVar1 = uVar13 - 1;
  uVar6 = *(uint *)&pIVar11[1].monitor;
  if ((int)uVar6 <= (int)uVar1) goto label_0425dff1;
  if (uVar6 <= uVar1) {
label_0425dfec:
    il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
    System_Exception___ctor_3cf6120(pSVar9,pSVar14,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
    il2cpp_runtime_helper_022b2b10(pSVar9,uVar8);
    if (g_data_057adbe6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      g_data_057adbe6 = '\x01';
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
    }
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  sVar4 = *(short *)((long)&pIVar11->klass + lVar12);
  if (sVar4 == 0x2a) {
    if ((int)uVar13 < (int)uVar6) {
      if (uVar6 <= uVar13) goto label_0425dfec;
      if (*(short *)((long)&pIVar11[2].klass + (long)(int)uVar13 * 2) == 0x2f) {
        return pSVar14;
      }
    }
label_0425df80:
    iVar5 = *(int *)(g_data_057b9bf8 + 0xe4);
  }
  else {
    if (sVar4 != 10) goto label_0425df80;
    ppSVar3 = &(pSVar9->fields)._helpURL;
    *(int *)ppSVar3 = *(int *)ppSVar3 + 1;
    iVar5 = *(int *)(g_data_057b9bf8 + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar6 = *(uint *)&pIVar11[1].monitor;
  }
  if (uVar6 <= uVar1) goto label_0425dfec;
  pSVar7 = System_Char__ToString((short)pIVar11 + (short)lVar12,(MethodInfo *)0x0);
  pSVar14 = System_String__Concat_3ae5ba0(pSVar14,pSVar7,(MethodInfo *)0x0);
  pIVar11 = (pSVar9->fields)._stackTrace;
  uVar13 = uVar13 + 1;
  lVar12 = lVar12 + 2;
  if (pIVar11 == (Il2CppObject *)0x0) {
label_0425dfd5:
    il2cpp_runtime_helper_022b2c90();
    return pSVar14;
  }
  goto label_0425df10;
}


// CustomLogic.CustomLogicLexer$$ScanBlockComment
// il2cpp: System_String_o* CustomLogic_CustomLogicLexer__ScanBlockComment (CustomLogic_CustomLogicLexer_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x425deb0

System_String_o *
CustomLogic_CustomLogicLexer__ScanBlockComment
          (CustomLogic_CustomLogicLexer_o *__this,int32_t startIndex,MethodInfo *method)

{
  int32_t *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_Exception_o *__this_00;
  System_Char_array *pSVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  System_String_o *unaff_R15;
  
  if (g_data_057adbe5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbe5 = '\x01';
  }
  pSVar7 = (__this->fields)._chars;
  if (pSVar7 != (System_Char_array *)0x0) {
    uVar10 = startIndex + 2;
    lVar9 = (long)(startIndex + 1) * 2 + 0x20;
    unaff_R15 = "";
    do {
      uVar8 = uVar10 - 1;
      uVar4 = (uint)pSVar7->max_length;
      if ((int)uVar4 <= (int)uVar8) goto label_0425dff1;
      if (uVar4 <= uVar8) {
label_0425dfec:
        il2cpp_runtime_helper_022b2ca0();
label_0425dff1:
        uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unclosed block comment");
        System_Exception___ctor_3cf6120(__this_00,pSVar5,(MethodInfo *)0x0);
        uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_ScanBlockComment);
        il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
        if (g_data_057adbe6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adbe6 = '\x01';
          iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          return (System_String_o *)
                 CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                          *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
        }
        return (System_String_o *)
               CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                        *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
      }
      sVar2 = *(short *)((long)pSVar7->m_Items + lVar9 + -0x20);
      if (sVar2 == 0x2a) {
        if ((int)uVar10 < (int)uVar4) {
          if (uVar4 <= uVar10) goto label_0425dfec;
          if (pSVar7->m_Items[(int)uVar10] == 0x2f) {
            return unaff_R15;
          }
        }
label_0425df80:
        iVar3 = *(int *)(g_data_057b9bf8 + 0xe4);
      }
      else {
        if (sVar2 != 10) goto label_0425df80;
        piVar1 = &(__this->fields)._line;
        *piVar1 = *piVar1 + 1;
        iVar3 = *(int *)(g_data_057b9bf8 + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar4 = (uint)pSVar7->max_length;
      }
      if (uVar4 <= uVar8) goto label_0425dfec;
      pSVar5 = System_Char__ToString((short)pSVar7 + (short)lVar9,(MethodInfo *)0x0);
      unaff_R15 = System_String__Concat_3ae5ba0(unaff_R15,pSVar5,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._chars;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 2;
    } while (pSVar7 != (System_Char_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return unaff_R15;
}


