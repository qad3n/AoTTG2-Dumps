// Type: CustomLogic.CustomLogicUtils
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUtils.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicUtils.cs
// --------------------------------

// CustomLogic.CustomLogicUtils$$OperatorException
// il2cpp: System_Exception_o* CustomLogic_CustomLogicUtils__OperatorException (System_String_o* operatorName, Il2CppObject* lhs, Il2CppObject* rhs, const MethodInfo* method);
// 0x1820ea8a0

System_Exception_o *
CustomLogic_CustomLogicUtils__OperatorException
          (System_String_o *operatorName,Il2CppObject *lhs,Il2CppObject *rhs,MethodInfo *method)

{
  System_Type_o *arg1;
  System_Type_o *arg2;
  System_String_o *message;
  System_Exception_o *__this;
  
  if (Il2CppMethodInitialized_1843469d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Exception);
    il2cpp_codegen_initialize_runtime_metadata(&"Operator {0} not defined for types {1} and {2}");
    Il2CppMethodInitialized_1843469d7 = '\x01';
  }
  if (lhs != (Il2CppObject *)0x0) {
    arg1 = System_Object__GetType(lhs,(MethodInfo *)0x0);
    if (rhs != (Il2CppObject *)0x0) {
      arg2 = System_Object__GetType(rhs,(MethodInfo *)0x0);
      message = System_String__Format_196d050
                          ("Operator {0} not defined for types {1} and {2}",(Il2CppObject *)operatorName,(Il2CppObject *)arg1,
                           (Il2CppObject *)arg2,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Exception);
      System_Exception___ctor_1b6abf0(__this,message,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUtils$$SerializeAst
// il2cpp: System_String_o* CustomLogic_CustomLogicUtils__SerializeAst (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x1820ea960
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820eb19e: mov rcx, qword ptr [rip + 0x2269cab]

System_String_o *
CustomLogic_CustomLogicUtils__SerializeAst(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  CustomLogic_CustomLogicBaseAst_c *pCVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t finallyEnd;
  CustomLogic_CustomLogicBaseAst_c *pCVar13;
  System_String_o *pSVar14;
  char *pcVar15;
  CustomLogic_CustomLogicBaseAst_o *pCVar16;
  System_String_array *value;
  Utility_Color255_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o **targetAddress;
  CustomLogic_CustomLogicBaseAst_c *__this_01;
  float fVar17;
  float fVar18;
  float local_58 [4];
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843469d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843469d8 = '\x01';
  }
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  if (ast == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
label_1820eb1a5:
    return *(System_String_o **)g_data_184354e50->static_fields;
  }
  pCVar3 = ast->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
     ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
    pCVar3 = (*(uint64_t *)((char *)ast + 0x18));
    if (pCVar3 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
      __this_01 = (CustomLogic_CustomLogicBaseAst_c *)0x0;
      pCVar13 = __this_01;
      if ((pCVar3->_1).image == g_data_184354e38) {
        pCVar13 = pCVar3;
      }
      if (pCVar13 == (CustomLogic_CustomLogicBaseAst_c *)0x0) {
        pCVar13 = __this_01;
        if ((pCVar3->_1).image == g_data_184354e08) {
          pCVar13 = pCVar3;
        }
        if (pCVar13 == (CustomLogic_CustomLogicBaseAst_c *)0x0) {
          pCVar13 = __this_01;
          if ((pCVar3->_1).image == g_data_184354de8) {
            pCVar13 = pCVar3;
          }
          if (pCVar13 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
            if ((((pCVar3->_1).image)->_1).element_class != (g_data_184354de8->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar3,g_data_184354de8);
            }
            pcVar15 = il2cpp_object_unbox((Il2CppObject *)pCVar3);
            if (*pcVar15 == '\0') {
              return "false";
            }
            return "true";
          }
          if ((pCVar3->_1).image == g_data_184354e50) {
            __this_01 = pCVar3;
          }
          if (__this_01 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
            pSVar14 = System_String__Replace((System_String_o *)__this_01,0x2c,0x20,(MethodInfo *)0x0);
            if ((pSVar14 != (System_String_o *)0x0) &&
               (pSVar14 = System_String__Replace(pSVar14,0x3a,0x20,(MethodInfo *)0x0),
               pSVar14 != (System_String_o *)0x0)) {
              pSVar14 = System_String__Replace(pSVar14,0x7c,0x20,(MethodInfo *)0x0);
              return pSVar14;
            }
            goto label_1820eb1fd;
          }
          goto label_1820eb1a5;
        }
      }
      if (pCVar3 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
        pIVar4 = (pCVar3->_1).image;
        pSVar14 = (System_String_o *)(*pIVar4->vtable[3].methodPtr)(pCVar3,pIVar4->vtable[3].method);
        return pSVar14;
      }
      goto label_1820eb1fd;
    }
    goto label_1820eb1a5;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst->_2).typeHierarchyDepth;
  if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)) goto label_1820eb1a5;
  if ((*(uint64_t *)((char *)ast + 0x20)) == (void *)0x0) goto label_1820eb1fd;
  iVar2 = *(int *)((longlong)(*(uint64_t *)((char *)ast + 0x20)) + 0x18);
  bVar9 = System_String__op_Equality((System_String_o *)(*(uint64_t *)((char *)ast + 0x18)),"Color",(MethodInfo *)0x0);
  if (!bVar9) {
    bVar9 = System_String__op_Equality
                      ((System_String_o *)(*(uint64_t *)((char *)ast + 0x18)),"Vector3",(MethodInfo *)0x0);
    if (!bVar9) goto label_1820eb1a5;
    if (iVar2 == 1) {
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      fVar17 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      fVar18 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
      __this_00 = (*(uint64_t *)((char *)ast + 0x20));
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      iVar10 = 0;
label_1820ead8b:
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          (__this_00,iVar10,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      local_58[2] = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
    }
    else if (iVar2 == 2) {
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      fVar17 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),1,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      fVar18 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
      local_58[2] = 0.0;
    }
    else {
      if (iVar2 == 3) {
        if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
        pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((*(uint64_t *)((char *)ast + 0x20)),0,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
        fVar17 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
        if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
        pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((*(uint64_t *)((char *)ast + 0x20)),1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
        fVar18 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar16,(MethodInfo *)0x0);
        __this_00 = (*(uint64_t *)((char *)ast + 0x20));
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
        iVar10 = 2;
        goto label_1820ead8b;
      }
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar17 = (pUVar5->zeroVector).fields.x;
      fVar18 = (pUVar5->zeroVector).fields.y;
      local_58[2] = (pUVar5->zeroVector).fields.z;
    }
    local_58[1] = fVar18;
    local_58[0] = fVar17;
    value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    pSVar14 = System_Single__ToString(local_58,(MethodInfo *)0x0);
    if (value != (System_String_array *)0x0) {
      if ((int)value->max_length == 0) goto label_1820eb1f7;
      value->m_Items[0] = pSVar14;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar14);
      pSVar14 = System_Single__ToString(local_58 + 1,(MethodInfo *)0x0);
      if ((uint)value->max_length < 2) goto label_1820eb1f7;
      value->m_Items[1] = pSVar14;
      Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar14);
      pSVar14 = System_Single__ToString(local_58 + 2,(MethodInfo *)0x0);
      if ((uint)value->max_length < 3) goto label_1820eb1f7;
      value->m_Items[2] = pSVar14;
      targetAddress = value->m_Items + 2;
      goto label_1820eafb6;
    }
    goto label_1820eb1fd;
  }
  local_48.r = 1.0;
  local_48.g = 1.0;
  local_48.b = 1.0;
  local_48.a = 1.0;
  if (iVar2 == 1) {
    if (((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) ||
       (pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((*(uint64_t *)((char *)ast + 0x20)),0,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item),
       pCVar16 == (CustomLogic_CustomLogicBaseAst_o *)0x0)) goto label_1820eb1fd;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if (((pCVar16->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar16->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception
                (pCVar16,TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    }
    pCVar3 = (*(uint64_t *)((char *)pCVar16 + 0x18));
    if (pCVar3 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_1820eb1fd;
    pvVar6 = (pCVar3->_1).image;
    pSVar14 = (System_String_o *)
              (**(code **)((longlong)pvVar6 + 0x168))(pCVar3,*(undefined8 *)((longlong)pvVar6 + 0x170));
    UnityEngine_ColorUtility__TryParseHtmlString(pSVar14,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
label_1820eaedf:
    uVar8 = local_48._8_8_;
    uVar7 = local_48._0_8_;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    local_38[0]._0_8_ = uVar7;
    local_38[0]._8_8_ = uVar8;
    Utility_Color255___ctor_23327a0(__this,(UnityEngine_Color_o *)local_38,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 == 1) goto label_1820eaedf;
    if (iVar2 == 2) {
label_1820eb180:
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor_2332720(__this,(MethodInfo *)0x0);
    }
    else if (iVar2 == 3) {
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      iVar10 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),1,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      iVar11 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),2,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      iVar12 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this,iVar10,iVar11,iVar12,0xff,
                 (MethodInfo *)0x0);
    }
    else {
      if (iVar2 != 4) goto label_1820eb180;
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      iVar10 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),1,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      iVar11 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),2,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      iVar12 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_1820eb1fd;
      pCVar16 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((*(uint64_t *)((char *)ast + 0x20)),3,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
      finallyEnd = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar16,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this,iVar10,iVar11,iVar12,
                 finallyEnd,(MethodInfo *)0x0);
    }
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if ((__this != (Utility_Color255_o *)0x0) &&
     (pSVar14 = System_Int32__ToString(&(__this->fields).R,(MethodInfo *)0x0),
     value != (System_String_array *)0x0)) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar14;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar14);
      pSVar14 = System_Int32__ToString(&(__this->fields).G,(MethodInfo *)0x0);
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = pSVar14;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar14);
        pSVar14 = System_Int32__ToString(&(__this->fields).B,(MethodInfo *)0x0);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = pSVar14;
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar14);
          pSVar14 = System_Int32__ToString(&(__this->fields).A,(MethodInfo *)0x0);
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = pSVar14;
            targetAddress = value->m_Items + 3;
label_1820eafb6:
            Il2CppCodeGenWriteBarrier(targetAddress,pSVar14);
            pSVar14 = System_String__Join("/",value,(MethodInfo *)0x0);
            return pSVar14;
          }
        }
      }
    }
label_1820eb1f7:
    ThrowIndexOutOfRangeException();
  }
label_1820eb1fd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUtils$$BaseAstToFloat
// il2cpp: float CustomLogic_CustomLogicUtils__BaseAstToFloat (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x1820ea600

float CustomLogic_CustomLogicUtils__BaseAstToFloat(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  CustomLogic_CustomLogicBaseAst_c *pCVar3;
  Il2CppObject *obj;
  int *piVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843469d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    Il2CppMethodInitialized_1843469d9 = '\x01';
  }
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar3 = ast->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      pCVar3 = (*(uint64_t *)((char *)ast + 0x18));
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      fVar5 = System_Convert__ToSingle((Il2CppObject *)pCVar3,(MethodInfo *)0x0);
      return fVar5;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst)) {
      if (((*(uint64_t *)((char *)ast + 0x20)) == (void *)0x0) ||
         (obj = *(Il2CppObject **)((longlong)(*(uint64_t *)((char *)ast + 0x20)) + 0x18), obj == (Il2CppObject *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((obj->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,TypeInfo_CustomLogic_CustomLogicSymbol);
      }
      piVar4 = il2cpp_object_unbox(obj);
      iVar2 = *piVar4;
      fVar5 = CustomLogic_CustomLogicUtils__BaseAstToFloat
                        ((CustomLogic_CustomLogicBaseAst_o *)(*(uint64_t *)((char *)ast + 0x18)),(MethodInfo *)0x0);
      if (iVar2 == 0x22) {
        return -fVar5;
      }
      if (iVar2 == 0x21) {
        return fVar5;
      }
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicUtils$$BaseAstToInt
// il2cpp: int32_t CustomLogic_CustomLogicUtils__BaseAstToInt (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x1820ea750

int32_t CustomLogic_CustomLogicUtils__BaseAstToInt(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  CustomLogic_CustomLogicBaseAst_c *pCVar3;
  Il2CppObject *obj;
  int32_t iVar4;
  int *piVar5;
  
  if (Il2CppMethodInitialized_1843469da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    Il2CppMethodInitialized_1843469da = '\x01';
  }
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar3 = ast->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      pCVar3 = (*(uint64_t *)((char *)ast + 0x18));
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      iVar4 = System_Convert__ToInt32((Il2CppObject *)pCVar3,(MethodInfo *)0x0);
      return iVar4;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst)) {
      if (((*(uint64_t *)((char *)ast + 0x20)) == (void *)0x0) ||
         (obj = *(Il2CppObject **)((longlong)(*(uint64_t *)((char *)ast + 0x20)) + 0x18), obj == (Il2CppObject *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((obj->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,TypeInfo_CustomLogic_CustomLogicSymbol);
      }
      piVar5 = il2cpp_object_unbox(obj);
      iVar2 = *piVar5;
      iVar4 = CustomLogic_CustomLogicUtils__BaseAstToInt
                        ((CustomLogic_CustomLogicBaseAst_o *)(*(uint64_t *)((char *)ast + 0x18)),(MethodInfo *)0x0);
      if (iVar2 != 0x22) {
        if (iVar2 != 0x21) {
          iVar4 = 0;
        }
        return iVar4;
      }
      return -iVar4;
    }
  }
  return 0;
}


