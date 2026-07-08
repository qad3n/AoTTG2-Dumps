// Type: CustomLogic.CustomLogicUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUtils.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicUtils.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicUtils$$OperatorException
// il2cpp: System_Exception_o* CustomLogic_CustomLogicUtils__OperatorException (System_String_o* operatorName, Il2CppObject* lhs, Il2CppObject* rhs, const MethodInfo* method);
// 0x3f5adc0

System_Exception_o *
CustomLogic_CustomLogicUtils__OperatorException
          (System_String_o *operatorName,Il2CppObject *lhs,Il2CppObject *rhs,MethodInfo *method)

{
  System_Type_o *arg1;
  System_Type_o *arg2;
  System_String_o *message;
  System_Exception_o *__this;
  
  if (DAT_05703ea7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Exception);
    il2cpp_init_method_metadata(&"Operator {0} not defined for types {1} and {2}");
    DAT_05703ea7 = '\x01';
  }
  if (lhs != (Il2CppObject *)0x0) {
    arg1 = System_Object__GetType(lhs,(MethodInfo *)0x0);
    if (rhs != (Il2CppObject *)0x0) {
      arg2 = System_Object__GetType(rhs,(MethodInfo *)0x0);
      message = System_String__Format
                          ("Operator {0} not defined for types {1} and {2}",(Il2CppObject *)operatorName,(Il2CppObject *)arg1,
                           (Il2CppObject *)arg2,(MethodInfo *)0x0);
      __this = (System_Exception_o *)il2cpp_runtime_glue(TypeInfo_Exception);
      System_Exception___ctor(__this,message,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUtils$$SerializeAst
// il2cpp: System_String_o* CustomLogic_CustomLogicUtils__SerializeAst (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x3f5ae70

System_String_o *
CustomLogic_CustomLogicUtils__SerializeAst(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  long *plVar5;
  System_String_c *pSVar6;
  bool_conflict bVar7;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  Utility_Color255_o *__this;
  char *pcVar10;
  System_String_StaticFields *pSVar11;
  CustomLogic_CustomLogicBaseAst_o *pCVar12;
  System_String_array *value;
  MethodInfo *pMVar13;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o **ppSVar14;
  float fVar15;
  float __this_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  UnityEngine_Color_o color;
  Il2CppMethodPointer local_68;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  _union_13 local_48;
  undefined8 uStack_40;
  Il2CppType *local_38;
  _union_13 _Stack_30;
  
  if (DAT_05703ea8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicBaseAst_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Vector3");
    il2cpp_init_method_metadata(&"true");
    DAT_05703ea8 = '\x01';
  }
  local_38 = (Il2CppType *)0x0;
  _Stack_30.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_60 = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar4 = ast->klass;
    bVar1 = (pCVar4->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicPrimitiveExpressionAst)) {
      bVar2 = (TypeInfo_CustomLogicClassInstantiateExpressionAst->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicClassInstantiateExpressionAst)) {
        if (ast[1].monitor == (void *)0x0) goto LAB_03f5b63b;
        iVar3 = *(int *)((long)ast[1].monitor + 0x18);
        bVar7 = System_String__op_Equality
                          ((System_String_o *)ast[1].klass,"Color",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          bVar7 = System_String__op_Equality
                            ((System_String_o *)ast[1].klass,"Vector3",(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') goto LAB_03f5b1e7;
          if (iVar3 == 3) {
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x0;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
            fVar15 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
            local_58 = (Il2CppType *)CONCAT44(extraout_XMM0_Db_02,fVar15);
            uStack_50 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x1;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
            local_48._0_4_ = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
            local_48._4_4_ = extraout_XMM0_Db_03;
            uStack_40 = (Il2CppClass *)CONCAT44(extraout_XMM0_Dd_03,extraout_XMM0_Dc_03);
            __this_00 = ast[1].monitor;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x2;
LAB_03f5b52f:
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_00,(int32_t)pMVar13,MethodInfo_CustomLogicBaseAst_get_Item);
            local_60 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
            local_68 = (Il2CppMethodPointer)CONCAT44(local_48._0_4_,(undefined4)local_58);
          }
          else if (iVar3 == 2) {
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x0;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
            fVar15 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
            local_58 = (Il2CppType *)CONCAT44(extraout_XMM0_Db_01,fVar15);
            uStack_50 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01);
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x1;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
            fVar15 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
            local_68 = (Il2CppMethodPointer)CONCAT44(fVar15,(undefined4)local_58);
            local_60 = 0.0;
          }
          else {
            if (iVar3 == 1) {
              if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
              goto LAB_03f5b63b;
              pMVar13 = (MethodInfo *)0x0;
              pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
              fVar15 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
              local_58 = (Il2CppType *)CONCAT44(extraout_XMM0_Db,fVar15);
              uStack_50 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
              if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
              goto LAB_03f5b63b;
              pMVar13 = (MethodInfo *)0x0;
              pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
              local_48._0_4_ = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar12,pMVar13);
              local_48._4_4_ = extraout_XMM0_Db_00;
              uStack_40 = (Il2CppClass *)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
              __this_00 = ast[1].monitor;
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f5b63b;
              pMVar13 = (MethodInfo *)0x0;
              goto LAB_03f5b52f;
            }
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            local_68 = (Il2CppMethodPointer)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            local_60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
          pSVar9 = System_Single__ToString(__this_01,(MethodInfo *)&local_68);
          if (value != (System_String_array *)0x0) {
            if ((int)value->max_length == 0) goto LAB_03f5b640;
            value->m_Items[0] = pSVar9;
            fVar15 = (float)il2cpp_runtime_glue(value->m_Items,pSVar9);
            pSVar9 = System_Single__ToString(fVar15,(MethodInfo *)((long)&local_68 + 4));
            if ((uint)value->max_length < 2) goto LAB_03f5b640;
            value->m_Items[1] = pSVar9;
            fVar15 = (float)il2cpp_runtime_glue(value->m_Items + 1,pSVar9);
            pSVar9 = System_Single__ToString(fVar15,(MethodInfo *)&local_60);
            if ((uint)value->max_length < 3) goto LAB_03f5b640;
            ppSVar14 = value->m_Items + 2;
            value->m_Items[2] = pSVar9;
            goto LAB_03f5b60e;
          }
          goto LAB_03f5b63b;
        }
        local_38 = (Il2CppType *)0x3f8000003f800000;
        _Stack_30.rgctx_data = (Il2CppRGCTXData *)0x3f8000003f800000;
        if (iVar3 == 4) {
          if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f5b63b;
          pMVar13 = (MethodInfo *)0x0;
          pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                    System_Collections_Generic_List<object>__get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item)
          ;
          r = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
          if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f5b63b;
          pMVar13 = (MethodInfo *)0x1;
          pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                    System_Collections_Generic_List<object>__get_Item(ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item)
          ;
          g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
          if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f5b63b;
          pMVar13 = (MethodInfo *)0x2;
          pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                    System_Collections_Generic_List<object>__get_Item(ast[1].monitor,2,MethodInfo_CustomLogicBaseAst_get_Item)
          ;
          b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
          if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f5b63b;
          pMVar13 = (MethodInfo *)0x3;
          pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                    System_Collections_Generic_List<object>__get_Item(ast[1].monitor,3,MethodInfo_CustomLogicBaseAst_get_Item)
          ;
          a = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
          __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
LAB_03f5b380:
          Utility_Color255___ctor(__this,r,g,b,a,(MethodInfo *)0x0);
        }
        else {
          if (iVar3 == 3) {
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x0;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
            r = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x1;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
            g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
            if (ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
            goto LAB_03f5b63b;
            pMVar13 = (MethodInfo *)0x2;
            pCVar12 = (CustomLogic_CustomLogicBaseAst_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (ast[1].monitor,2,MethodInfo_CustomLogicBaseAst_get_Item);
            b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar12,pMVar13);
            __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
            a = 0xff;
            goto LAB_03f5b380;
          }
          if (iVar3 == 1) {
            if ((ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0) ||
               (pIVar8 = System_Collections_Generic_List<object>__get_Item
                                   (ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item), pIVar8 == (Il2CppObject *)0x0))
            goto LAB_03f5b63b;
            bVar1 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
            if (((pIVar8->klass->_2).naturalAligment < bVar1) ||
               ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicPrimitiveExpressionAst)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar8);
            }
            plVar5 = pIVar8[1].monitor;
            if (plVar5 == (long *)0x0) goto LAB_03f5b63b;
            pSVar9 = (System_String_o *)
                     (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
            UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar9,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
            local_58 = local_38;
            uStack_50 = (InvokerMethod)0x0;
            local_48.methodMetadataHandle = _Stack_30.methodMetadataHandle;
            uStack_40 = (Il2CppClass *)0x0;
            __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
            color.fields._8_8_ = local_48.rgctx_data;
            color.fields._0_8_ = local_58;
            Utility_Color255___ctor(__this,color,(MethodInfo *)0x0);
          }
          else {
            __this = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
            Utility_Color255___ctor(__this,(MethodInfo *)0x0);
          }
        }
        value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
        if (__this != (Utility_Color255_o *)0x0) {
          iVar3 = (int)__this;
          pSVar9 = System_Int32__ToString(iVar3 + 0x10,(MethodInfo *)0x0);
          if (value != (System_String_array *)0x0) {
            if ((int)value->max_length != 0) {
              value->m_Items[0] = pSVar9;
              il2cpp_runtime_glue(value->m_Items);
              pSVar9 = System_Int32__ToString(iVar3 + 0x14,(MethodInfo *)0x0);
              if (1 < (uint)value->max_length) {
                value->m_Items[1] = pSVar9;
                il2cpp_runtime_glue(value->m_Items + 1);
                pSVar9 = System_Int32__ToString(iVar3 + 0x18,(MethodInfo *)0x0);
                if (2 < (uint)value->max_length) {
                  value->m_Items[2] = pSVar9;
                  il2cpp_runtime_glue(value->m_Items + 2);
                  pSVar9 = System_Int32__ToString(iVar3 + 0x1c,(MethodInfo *)0x0);
                  if (3 < (uint)value->max_length) {
                    ppSVar14 = value->m_Items + 3;
                    value->m_Items[3] = pSVar9;
LAB_03f5b60e:
                    il2cpp_runtime_glue(ppSVar14,pSVar9);
                    pSVar9 = System_String__Join("/",value,(MethodInfo *)0x0);
                    return pSVar9;
                  }
                }
              }
            }
LAB_03f5b640:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
LAB_03f5b63b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pCVar4 = ast[1].klass;
      if (pCVar4 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
        pSVar6 = (pCVar4->_1).image;
        if ((pSVar6 == DAT_05711098) || (pSVar6 == DAT_05711068)) {
          pSVar9 = (System_String_o *)
                   (*(pSVar6->vtable)._3_ToString.methodPtr)
                             (pCVar4,(pSVar6->vtable)._3_ToString.method);
          return pSVar9;
        }
        if (pSVar6 == DAT_05711048) {
          pcVar10 = (char *)il2cpp_glue_022c7330();
          if (*pcVar10 == '\0') {
            pSVar11 = (System_String_StaticFields *)&"false";
          }
          else {
            pSVar11 = (System_String_StaticFields *)&"true";
          }
          goto LAB_03f5b1fc;
        }
        if (pSVar6 == DAT_057110b0) {
          pSVar9 = System_String__Replace((System_String_o *)pCVar4,0x2c,0x20,(MethodInfo *)0x0);
          if ((pSVar9 != (System_String_o *)0x0) &&
             (pSVar9 = System_String__Replace(pSVar9,0x3a,0x20,(MethodInfo *)0x0),
             pSVar9 != (System_String_o *)0x0)) {
            pSVar9 = System_String__Replace(pSVar9,0x7c,0x20,(MethodInfo *)0x0);
            return pSVar9;
          }
          goto LAB_03f5b63b;
        }
      }
    }
  }
LAB_03f5b1e7:
  pSVar11 = DAT_057110b0->static_fields;
LAB_03f5b1fc:
  return pSVar11->Empty;
}


// CustomLogic.CustomLogicUtils$$BaseAstToFloat
// il2cpp: float CustomLogic_CustomLogicUtils__BaseAstToFloat (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x3f5b780

float CustomLogic_CustomLogicUtils__BaseAstToFloat
                (CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  long *plVar5;
  int *piVar6;
  MethodInfo *method_00;
  float fVar7;
  
  if (DAT_05703ea9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnaryExpressionAst);
    DAT_05703ea9 = '\x01';
  }
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar4 = ast->klass;
    bVar1 = (pCVar4->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
      pCVar4 = ast[1].klass;
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar7 = System_Convert__ToSingle((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
      return fVar7;
    }
    bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicUnaryExpressionAst)) {
      if ((ast[1].monitor == (void *)0x0) ||
         (plVar5 = *(long **)((long)ast[1].monitor + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(void **)(*plVar5 + 0x40) != (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      method_00 = TypeInfo_CustomLogicSymbol;
      piVar6 = (int *)il2cpp_glue_022c7330();
      iVar3 = *piVar6;
      fVar7 = CustomLogic_CustomLogicUtils__BaseAstToFloat
                        ((CustomLogic_CustomLogicBaseAst_o *)ast[1].klass,method_00);
      if (iVar3 == 0x1e) {
        return fVar7;
      }
      if (iVar3 == 0x1f) {
        return -fVar7;
      }
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicUtils$$BaseAstToInt
// il2cpp: int32_t CustomLogic_CustomLogicUtils__BaseAstToInt (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x3f5b650

int32_t CustomLogic_CustomLogicUtils__BaseAstToInt
                  (CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  long *plVar5;
  int32_t iVar6;
  int *piVar7;
  MethodInfo *method_00;
  
  if (DAT_05703eaa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnaryExpressionAst);
    DAT_05703eaa = '\x01';
  }
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar4 = ast->klass;
    bVar1 = (pCVar4->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
      pCVar4 = ast[1].klass;
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar6 = System_Convert__ToInt32((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
      return iVar6;
    }
    bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicUnaryExpressionAst)) {
      if ((ast[1].monitor == (void *)0x0) ||
         (plVar5 = *(long **)((long)ast[1].monitor + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(void **)(*plVar5 + 0x40) != (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      method_00 = TypeInfo_CustomLogicSymbol;
      piVar7 = (int *)il2cpp_glue_022c7330();
      iVar3 = *piVar7;
      iVar6 = CustomLogic_CustomLogicUtils__BaseAstToInt
                        ((CustomLogic_CustomLogicBaseAst_o *)ast[1].klass,method_00);
      if (iVar3 == 0x1e) {
        return iVar6;
      }
      if (iVar3 == 0x1f) {
        return -iVar6;
      }
    }
  }
  return 0;
}


