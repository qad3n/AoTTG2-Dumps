// Type: CustomLogic.CustomLogicUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUtils.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicUtils.cs
// --------------------------------

// CustomLogic.CustomLogicUtils$$OperatorException
// il2cpp: System_Exception_o* CustomLogic_CustomLogicUtils__OperatorException (System_String_o* operatorName, Il2CppObject* lhs, Il2CppObject* rhs, const MethodInfo* method);
// 0x42672d0

System_Exception_o *
CustomLogic_CustomLogicUtils__OperatorException
          (System_String_o *operatorName,Il2CppObject *lhs,Il2CppObject *rhs,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  System_String_c *__this;
  System_String_c *pSVar5;
  void *pvVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
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
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_15;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  char cVar9;
  bool_conflict bVar10;
  uint g;
  int32_t b;
  int32_t a;
  int32_t iVar11;
  System_Type_o *arg1;
  System_Type_o *arg2;
  System_String_o *pSVar12;
  System_Exception_o *pSVar13;
  Il2CppClass *pIVar14;
  Utility_Color255_o *__this_16;
  char *pcVar15;
  System_String_StaticFields *pSVar16;
  CustomLogic_CustomLogicBaseAst_o *pCVar17;
  System_String_array *value;
  undefined4 extraout_var;
  int *piVar18;
  undefined4 extraout_var_00;
  System_Exception_o *extraout_RAX;
  System_Exception_o *extraout_RAX_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_Dictionary_object__object__o *pSVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar23;
  CustomLogic_CustomLogicClassInstance_o *instance;
  long *plVar24;
  undefined8 uVar25;
  CustomLogic_CustomLogicEvaluator_o *__this_17;
  System_Exception_o *extraout_RAX_01;
  long *plVar26;
  MethodInfo_2A8BF80 **method_00;
  System_Collections_Generic_Dictionary_object__object__o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar27;
  MethodInfo *method_03;
  System_String_o **ppSVar28;
  System_Collections_Generic_List_object__o *__this_18;
  Il2CppClass **ppIVar29;
  Il2CppClass **__this_19;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_R12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar30;
  System_Collections_Generic_Dictionary_object__object__o *__this_20;
  float fVar31;
  float __this_21;
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
  undefined1 auVar32 [12];
  UnityEngine_Color_o color;
  undefined8 in_stack_fffffffffffffe48;
  undefined8 in_stack_fffffffffffffe50;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_fffffffffffffe58;
  long lStack_1a0;
  undefined1 auStack_198 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_188;
  Il2CppClass *pIStack_180;
  undefined1 auStack_178 [40];
  Il2CppType *pIStack_150;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_148;
  _union_236529 _Stack_138;
  Il2CppType *pIStack_130;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_128;
  _union_233249 _Stack_118;
  Il2CppType *pIStack_110;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_108;
  _union_233249 _Stack_f8;
  Il2CppType *pIStack_f0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_e8;
  Il2CppClass *pIStack_e0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_d8;
  Il2CppMethodPointer pIStack_80;
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  _union_13 _Stack_60;
  undefined8 uStack_58;
  Il2CppType *pIStack_50;
  _union_13 _Stack_48;
  _union_14 _Stack_40;
  
  ppSVar28 = (System_String_o **)operatorName;
  if (g_data_057adc15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    ppSVar28 = &"Operator {0} not defined for types {1} and {2}";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc15 = '\x01';
  }
  if ((lhs != (Il2CppObject *)0x0) &&
     (ppSVar28 = (System_String_o **)lhs, arg1 = System_Object__GetType(lhs,(MethodInfo *)0x0),
     rhs != (Il2CppObject *)0x0)) {
    arg2 = System_Object__GetType(rhs,(MethodInfo *)0x0);
    pSVar12 = System_String__Format_3af7930
                        ("Operator {0} not defined for types {1} and {2}",(Il2CppObject *)operatorName,(Il2CppObject *)arg1,(Il2CppObject *)arg2,
                         (MethodInfo *)0x0);
    pSVar13 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Exception);
    System_Exception___ctor_3cf6120(pSVar13,pSVar12,(MethodInfo *)0x0);
    return pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  _Stack_40 = (_union_14)lhs;
  if (g_data_057adc16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicBaseAst_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057adc16 = '\x01';
  }
  pIStack_50 = (Il2CppType *)0x0;
  _Stack_48.rgctx_data = (Il2CppRGCTXData *)0x0;
  fStack_78 = 0.0;
  pIStack_80 = (Il2CppMethodPointer)0x0;
  if ((System_String_o *)ppSVar28 != (System_String_o *)0x0) {
    pIVar14 = (Il2CppClass *)((System_String_o *)ppSVar28)->klass;
    bVar1 = (pIVar14->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicPrimitiveExpressionAst)) {
      bVar2 = (TypeInfo_CustomLogicClassInstantiateExpressionAst->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicClassInstantiateExpressionAst)) {
        if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor == (void *)0x0) {
label_04267b4b:
          il2cpp_runtime_helper_022b2c90();
label_04267b50:
          pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
        }
        else {
          iVar3 = *(int *)((long)((System_String_o *)((long)ppSVar28 + 0x18))->monitor + 0x18);
          bVar10 = System_String__op_Equality
                             ((System_String_o *)((System_String_o *)((long)ppSVar28 + 0x18))->klass,
                              "Color",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality
                               ((System_String_o *)((System_String_o *)((long)ppSVar28 + 0x18))->klass,
                                "Vector3",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') goto label_042676f7;
            if (iVar3 == 3) {
              if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item
                                    (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                uStack_70 = (Il2CppType *)CONCAT44(extraout_XMM0_Db_02,fVar31);
                uStack_68 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
                if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x1;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item
                                      (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                  _Stack_60._0_4_ = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                  _Stack_60._4_4_ = extraout_XMM0_Db_03;
                  uStack_58 = (Il2CppClass *)CONCAT44(extraout_XMM0_Dd_03,extraout_XMM0_Dc_03);
                  __this_18 = ((System_String_o *)((long)ppSVar28 + 0x18))->monitor;
                  if (__this_18 != (System_Collections_Generic_List_object__o *)0x0) {
                    pMVar27 = (MethodInfo *)0x2;
label_04267a3f:
                    pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                              System_Collections_Generic_List_object___get_Item
                                        (__this_18,(int32_t)pMVar27,MethodInfo_CustomLogicBaseAst_get_Item);
                    fStack_78 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                    pIStack_80 = (Il2CppMethodPointer)CONCAT44(_Stack_60._0_4_,(undefined4)uStack_70);
                    goto label_04267a8e;
                  }
                }
              }
            }
            else if (iVar3 == 2) {
              if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item
                                    (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                uStack_70 = (Il2CppType *)CONCAT44(extraout_XMM0_Db_01,fVar31);
                uStack_68 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01);
                if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x1;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item
                                      (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                  fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                  pIStack_80 = (Il2CppMethodPointer)CONCAT44(fVar31,(undefined4)uStack_70);
                  fStack_78 = 0.0;
                  goto label_04267a8e;
                }
              }
            }
            else if (iVar3 == 1) {
              if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item
                                    (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                uStack_70 = (Il2CppType *)CONCAT44(extraout_XMM0_Db,fVar31);
                uStack_68 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x0;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item
                                      (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                  _Stack_60._0_4_ = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                  _Stack_60._4_4_ = extraout_XMM0_Db_00;
                  uStack_58 = (Il2CppClass *)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
                  __this_18 = ((System_String_o *)((long)ppSVar28 + 0x18))->monitor;
                  if (__this_18 != (System_Collections_Generic_List_object__o *)0x0) {
                    pMVar27 = (MethodInfo *)0x0;
                    goto label_04267a3f;
                  }
                }
              }
            }
            else {
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              pIStack_80 = (Il2CppMethodPointer)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fStack_78 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
label_04267a8e:
              value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
              pSVar12 = System_Single__ToString(__this_21,(MethodInfo *)&pIStack_80);
              if (value != (System_String_array *)0x0) {
                if ((int)value->max_length != 0) {
                  value->m_Items[0] = pSVar12;
                  fVar31 = (float)il2cpp_runtime_helper_022b4080(value->m_Items,pSVar12);
                  pSVar12 = System_Single__ToString(fVar31,(MethodInfo *)((long)&pIStack_80 + 4));
                  if (1 < (uint)value->max_length) {
                    value->m_Items[1] = pSVar12;
                    fVar31 = (float)il2cpp_runtime_helper_022b4080(value->m_Items + 1,pSVar12);
                    pSVar12 = System_Single__ToString(fVar31,(MethodInfo *)&fStack_78);
                    if (2 < (uint)value->max_length) {
                      ppSVar28 = value->m_Items + 2;
                      value->m_Items[2] = pSVar12;
label_04267b1e:
                      il2cpp_runtime_helper_022b4080(ppSVar28,pSVar12);
                      pSVar13 = (System_Exception_o *)
                                System_String__Join("/",value,(MethodInfo *)0x0);
                      return pSVar13;
                    }
                  }
                }
                goto label_04267b50;
              }
            }
            goto label_04267b4b;
          }
          pIStack_50 = (Il2CppType *)0x3f8000003f800000;
          _Stack_48.rgctx_data = (Il2CppRGCTXData *)0x3f8000003f800000;
          if (iVar3 == 4) {
            if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                (System_Collections_Generic_List_object__o *)0x0) {
              pMVar27 = (MethodInfo *)0x0;
              pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                        System_Collections_Generic_List_object___get_Item
                                  (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
              iVar11 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
              if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x1;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item
                                    (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  unaff_R12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)g;
                  pMVar27 = (MethodInfo *)0x2;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item
                                      (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,2,MethodInfo_CustomLogicBaseAst_get_Item);
                  b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                  if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                      (System_Collections_Generic_List_object__o *)0x0) {
                    pMVar27 = (MethodInfo *)0x3;
                    pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                              System_Collections_Generic_List_object___get_Item
                                        (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,3,MethodInfo_CustomLogicBaseAst_get_Item)
                    ;
                    a = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                    __this_16 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                    goto label_04267890;
                  }
                }
              }
            }
            goto label_04267b4b;
          }
          if (iVar3 == 3) {
            if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                (System_Collections_Generic_List_object__o *)0x0) {
              pMVar27 = (MethodInfo *)0x0;
              pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                        System_Collections_Generic_List_object___get_Item
                                  (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
              iVar11 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
              if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x1;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item
                                    (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                if (((System_String_o *)((long)ppSVar28 + 0x18))->monitor !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x2;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item
                                      (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,2,MethodInfo_CustomLogicBaseAst_get_Item);
                  b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                  __this_16 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                  a = 0xff;
label_04267890:
                  in_R9 = (MethodInfo *)0x0;
                  Utility_Color255___ctor(__this_16,iVar11,g,b,a,(MethodInfo *)0x0);
                  goto label_042678b6;
                }
              }
            }
            goto label_04267b4b;
          }
          if (iVar3 != 1) {
            __this_16 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor_4388b90(__this_16,(MethodInfo *)0x0);
label_042678b6:
            value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
            if (__this_16 == (Utility_Color255_o *)0x0) goto label_04267b4b;
            iVar3 = (int)__this_16;
            pSVar12 = System_Int32__ToString(iVar3 + 0x10,(MethodInfo *)0x0);
            if (value == (System_String_array *)0x0) goto label_04267b4b;
            if ((int)value->max_length != 0) {
              value->m_Items[0] = pSVar12;
              il2cpp_runtime_helper_022b4080(value->m_Items);
              pSVar12 = System_Int32__ToString(iVar3 + 0x14,(MethodInfo *)0x0);
              if (1 < (uint)value->max_length) {
                value->m_Items[1] = pSVar12;
                il2cpp_runtime_helper_022b4080(value->m_Items + 1);
                pSVar12 = System_Int32__ToString(iVar3 + 0x18,(MethodInfo *)0x0);
                if (2 < (uint)value->max_length) {
                  value->m_Items[2] = pSVar12;
                  il2cpp_runtime_helper_022b4080(value->m_Items + 2);
                  pSVar12 = System_Int32__ToString(iVar3 + 0x1c,(MethodInfo *)0x0);
                  if (3 < (uint)value->max_length) {
                    ppSVar28 = value->m_Items + 3;
                    value->m_Items[3] = pSVar12;
                    goto label_04267b1e;
                  }
                }
              }
            }
            goto label_04267b50;
          }
          if ((((System_String_o *)((long)ppSVar28 + 0x18))->monitor ==
               (System_Collections_Generic_List_object__o *)0x0) ||
             (pIVar14 = (Il2CppClass *)
                        System_Collections_Generic_List_object___get_Item
                                  (((System_String_o *)((long)ppSVar28 + 0x18))->monitor,0,MethodInfo_CustomLogicBaseAst_get_Item),
             pIVar14 == (Il2CppClass *)0x0)) goto label_04267b4b;
          pIVar4 = (pIVar14->_1).image;
          bVar1 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
          if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
             ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
            plVar24 = (long *)(pIVar14->_1).namespaze;
            if (plVar24 != (long *)0x0) {
              pSVar12 = (System_String_o *)
                        (**(code **)(*plVar24 + 0x168))(plVar24,*(undefined8 *)(*plVar24 + 0x170));
              UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar12,(UnityEngine_Color_o *)&pIStack_50,(MethodInfo *)0x0);
              uStack_70 = pIStack_50;
              uStack_68 = (InvokerMethod)0x0;
              _Stack_60.methodMetadataHandle = _Stack_48.methodMetadataHandle;
              uStack_58 = (Il2CppClass *)0x0;
              __this_16 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              color.fields._8_8_ = _Stack_60.rgctx_data;
              color.fields._0_8_ = uStack_70;
              Utility_Color255___ctor_4388bb0(__this_16,color,(MethodInfo *)0x0);
              goto label_042678b6;
            }
            goto label_04267b4b;
          }
        }
        il2cpp_runtime_helper_022b2fd0();
        ppIVar29 = (Il2CppClass **)pIVar14;
        if (g_data_057adc18 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
          ppIVar29 = &TypeInfo_CustomLogicUnaryExpressionAst;
          il2cpp_runtime_helper_023445d0();
          g_data_057adc18 = '\x01';
        }
        if (pIVar14 == (Il2CppClass *)0x0) {
          return (System_Exception_o *)0x0;
        }
        pIVar4 = (pIVar14->_1).image;
        bVar1 = (pIVar4->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
        if ((bVar2 <= bVar1) &&
           (ppIVar29 = (pIVar4->_2).typeHierarchy,
           *(Il2CppClass **)((long)ppIVar29 + ((ulong)bVar2 - 1) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
          pIVar20 = (Il2CppObject *)(pIVar14->_1).namespaze;
          if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar11 = System_Convert__ToInt32(pIVar20,(MethodInfo *)0x0);
          return (System_Exception_o *)CONCAT44(extraout_var,iVar11);
        }
        bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
        if (bVar1 < bVar2) {
          return (System_Exception_o *)0x0;
        }
        if ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicUnaryExpressionAst) {
          return (System_Exception_o *)0x0;
        }
        pvVar6 = (pIVar14->_1).byval_arg.data;
        if ((pvVar6 == (void *)0x0) ||
           (ppIVar29 = *(Il2CppClass ***)((long)pvVar6 + 0x18), (Il2CppClass *)ppIVar29 == (Il2CppClass *)0x0)
           ) {
          il2cpp_runtime_helper_022b2c90();
        }
        else if ((((((Il2CppClass *)ppIVar29)->_1).image)->_1).element_class ==
                 (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
          pMVar27 = TypeInfo_CustomLogicSymbol;
          piVar18 = (int *)il2cpp_runtime_helper_02305440();
          iVar3 = *piVar18;
          iVar11 = CustomLogic_CustomLogicUtils__BaseAstToInt
                             ((CustomLogic_CustomLogicBaseAst_o *)(pIVar14->_1).namespaze,pMVar27);
          if (iVar3 == 0x1e) {
            return (System_Exception_o *)CONCAT44(extraout_var_00,iVar11);
          }
          if (iVar3 != 0x1f) {
            return (System_Exception_o *)0x0;
          }
          return (System_Exception_o *)(ulong)(uint)-iVar11;
        }
        pSVar13 = (System_Exception_o *)il2cpp_runtime_helper_022b2fd0();
        __this_19 = ppIVar29;
        if (g_data_057adc17 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
          __this_19 = &TypeInfo_CustomLogicUnaryExpressionAst;
          pSVar13 = (System_Exception_o *)il2cpp_runtime_helper_023445d0();
          g_data_057adc17 = '\x01';
        }
        if ((Il2CppClass *)ppIVar29 == (Il2CppClass *)0x0) {
          return pSVar13;
        }
        pIVar14 = (((Il2CppClass *)ppIVar29)->_1).image;
        bVar1 = (pIVar14->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
        if ((bVar2 <= bVar1) &&
           (__this_19 = (pIVar14->_2).typeHierarchy,
           *(Il2CppClass **)((long)__this_19 + ((ulong)bVar2 - 1) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
          pIVar20 = (Il2CppObject *)(((Il2CppClass *)ppIVar29)->_1).namespaze;
          if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Convert__ToSingle(pIVar20,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
        pMVar27 = (MethodInfo *)(ulong)bVar2;
        if (bVar1 < bVar2) {
          return (System_Exception_o *)pIVar14;
        }
        pSVar13 = (System_Exception_o *)(pIVar14->_2).typeHierarchy;
        if (*(Il2CppClass **)((long)pSVar13 + (long)pMVar27 * 8 + -8) != TypeInfo_CustomLogicUnaryExpressionAst) {
          return pSVar13;
        }
        pvVar6 = (((Il2CppClass *)ppIVar29)->_1).byval_arg.data;
        if ((pvVar6 == (void *)0x0) ||
           (__this_19 = *(Il2CppClass ***)((long)pvVar6 + 0x18),
           (Il2CppClass *)__this_19 == (Il2CppClass *)0x0)) {
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pMVar27 = TypeInfo_CustomLogicSymbol;
          if ((((((Il2CppClass *)__this_19)->_1).image)->_1).element_class ==
              (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
            piVar18 = (int *)il2cpp_runtime_helper_02305440();
            iVar3 = *piVar18;
            CustomLogic_CustomLogicUtils__BaseAstToFloat
                      ((CustomLogic_CustomLogicBaseAst_o *)(((Il2CppClass *)ppIVar29)->_1).namespaze,pMVar27);
            if (iVar3 == 0x1e) {
              return extraout_RAX_00;
            }
            if (iVar3 == 0x1f) {
              return extraout_RAX_00;
            }
            return extraout_RAX_00;
          }
        }
        il2cpp_runtime_helper_022b2fd0();
        method_03 = pMVar27;
        pIStack_e0 = (Il2CppClass *)ppIVar29;
        pSStack_d8 = unaff_R12;
        if (g_data_057adc19 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
          il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          il2cpp_runtime_helper_023445d0(&"OnGameStart");
          il2cpp_runtime_helper_023445d0(&"Init");
          il2cpp_runtime_helper_023445d0(&"Main");
          g_data_057adc19 = '\x01';
        }
        auStack_178._32_8_ =
             (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
        pIStack_150 = (Il2CppType *)0x0;
        pSStack_148 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        _Stack_138.genericMethod = (void *)0x0;
        pIStack_130 = (Il2CppType *)0x0;
        pSStack_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        auStack_178._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_178._8_8_ = (Il2CppType *)0x0;
        auStack_178._16_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        _Stack_118.genericMethod = (void *)0x0;
        pIStack_110 = (Il2CppType *)0x0;
        pSStack_108 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        _Stack_f8.genericMethod = (void *)0x0;
        pIStack_f0 = (Il2CppType *)0x0;
        pSStack_e8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        CustomLogic_CustomLogicEvaluator__Init((CustomLogic_CustomLogicEvaluator_o *)__this_19,method_03);
        *(undefined4 *)&(((Il2CppClass *)__this_19)->_1).byval_arg.data = 0;
        pIVar14 = (((Il2CppClass *)__this_19)->_1).castClass;
        key = unaff_R12;
        pIStack_180 = (Il2CppClass *)__this_19;
        if (pIVar14 == (Il2CppClass *)0x0) goto label_04268d2c;
        key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,"Main",
                         MethodInfo_CustomLogicClassInstance_get_Item);
        if (pMVar27 == (MethodInfo *)0x0) goto label_04268d31;
        pSVar19 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)pMVar27,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
        if (pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        goto label_04268d36;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_198,pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pSStack_148 = pSStack_188;
        auStack_178._32_8_ = CONCAT44(auStack_198._4_4_,auStack_198._0_4_);
        pIStack_150 = (Il2CppType *)auStack_198._8_8_;
        lStack_1a0 = 0;
        in_stack_fffffffffffffe58 = extraout_RDX;
        while (__this_01.fields._index = (int)in_stack_fffffffffffffe50,
              __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20),
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48,
              __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58,
              bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 (__this_01,(MethodInfo_3251B20 *)(auStack_178 + 0x20)), pSVar8 = pSStack_148,
              (char)bVar10 != '\0') {
          pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pMVar27,
                               (Il2CppObject *)pSStack_148,MethodInfo_BaseSetting_get_Item);
          if (pIVar20 != (Il2CppObject *)0x0) {
            pIVar14 = pIVar20->klass;
            bVar1 = (pIVar14->_2).naturalAligment;
            bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
            pSVar30 = key;
            if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
                bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
                if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                  bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                  if ((bVar2 <= bVar1) && ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
                    if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                    goto label_04268d18;
                    pSVar7 = (key->fields)._entries;
                    auStack_198[0] = *(undefined1 *)((long)&pIVar20[1].klass + 1);
                    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_198);
                    if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                    goto label_04268d1d;
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar7,
                               (Il2CppObject *)pSVar8,pIVar20,MethodInfo_Void_set_Item);
                  }
                }
                else {
                  if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d27;
                  pSVar7 = (key->fields)._entries;
                  auStack_198._0_4_ = *(undefined4 *)((long)&pIVar20[1].klass + 4);
                  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_198);
                  if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_04268d0e;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar7,
                             (Il2CppObject *)pSVar8,pIVar20,MethodInfo_Void_set_Item);
                }
              }
              else {
                if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d22;
                pSVar7 = (key->fields)._entries;
                if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_04268d13;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar7,
                           (Il2CppObject *)pSVar8,pIVar20[1].monitor,MethodInfo_Void_set_Item);
              }
            }
            else {
              if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d09;
              pSVar7 = (key->fields)._entries;
              auStack_198._0_4_ = *(undefined4 *)((long)&pIVar20[1].klass + 4);
              pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_198);
              pSVar30 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              if (pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_04268d04;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar7,
                         (Il2CppObject *)pSVar8,pIVar20,MethodInfo_Void_set_Item);
            }
          }
        }
        __this_02.fields._index = (int)in_stack_fffffffffffffe50;
        __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
        __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251B10 *)(auStack_178 + 0x20));
        pIVar14 = (pIStack_180->_1).declaringType;
        if (pIVar14 == (Il2CppClass *)0x0) goto label_04268d40;
        pSVar19 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
        if (pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        goto label_04268d45;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_198,pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pSStack_128 = pSStack_188;
        _Stack_138._4_4_ = auStack_198._4_4_;
        _Stack_138._0_4_ = auStack_198._0_4_;
        pIStack_130 = (Il2CppType *)auStack_198._8_8_;
        lStack_1a0 = 0;
        __this_20 = extraout_RDX;
        while( true ) {
          pIVar20 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
          __this_03.fields._index = (int)in_stack_fffffffffffffe50;
          __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
          __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58;
          bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_03,(MethodInfo_3251B20 *)&_Stack_138);
          pSVar8 = pSStack_128;
          if ((char)bVar10 == '\0') break;
          if ((__this_20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (__this_20,(Il2CppObject *)pSStack_128,MethodInfo_Boolean_ContainsKey), (char)bVar10 != '\0'))
          {
            pIVar14 = (pIStack_180->_1).declaringType;
            if (pIVar14 == (Il2CppClass *)0x0) goto label_04268cdb;
            pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,
                                 (Il2CppObject *)pSVar8,MethodInfo_CustomLogicClassInstance_get_Item);
            pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_20,(Il2CppObject *)pSVar8,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04268ce5;
            pSVar19 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar21,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
            if (pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
            goto label_04268ce0;
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       auStack_198,pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
            pSStack_148 = pSStack_188;
            auStack_178._32_8_ = CONCAT44(auStack_198._4_4_,auStack_198._0_4_);
            pIStack_150 = (Il2CppType *)auStack_198._8_8_;
            while (__this_04.fields._index = (int)in_stack_fffffffffffffe50,
                  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20),
                  __this_04.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48,
                  __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58,
                  bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                     (__this_04,(MethodInfo_3251B20 *)(auStack_178 + 0x20)), key = pSStack_148
                  , (char)bVar10 != '\0') {
              pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (__this_20,(Il2CppObject *)pSVar8,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04268cd6;
              }
              pIVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar21,(Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
              if (pIVar22 != (Il2CppObject *)0x0) {
                pIVar14 = pIVar22->klass;
                bVar1 = (pIVar14->_2).naturalAligment;
                bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
                if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
                  bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                  if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
                    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
                    if ((bVar1 < bVar2) || ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                      bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                      if ((bVar2 <= bVar1) && ((pIVar14->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting))
                      {
                        if (pIVar20 == (Il2CppObject *)0x0) {
                          il2cpp_runtime_helper_022b2c90();
                          goto label_04268cdb;
                        }
                        pSVar21 = pIVar20[1].monitor;
                        auStack_198[0] = *(undefined1 *)((long)&pIVar22[1].klass + 1);
                        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_198);
                        if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          il2cpp_runtime_helper_022b2c90();
                          goto label_04268cdb;
                        }
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar21,(Il2CppObject *)key,pIVar22,MethodInfo_Void_set_Item);
                      }
                    }
                    else {
                      if (pIVar20 == (Il2CppObject *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
                        goto label_04268cdb;
                      }
                      pSVar21 = pIVar20[1].monitor;
                      auStack_198._0_4_ = *(undefined4 *)((long)&pIVar22[1].klass + 4);
                      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_198);
                      if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
                        goto label_04268cdb;
                      }
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar21,(Il2CppObject *)key,pIVar22,MethodInfo_Void_set_Item);
                    }
                  }
                  else {
                    if (pIVar20 == (Il2CppObject *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_04268cdb;
                    }
                    if (pIVar20[1].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_04268cdb;
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pIVar20[1].monitor,(Il2CppObject *)key,pIVar22[1].monitor,MethodInfo_Void_set_Item);
                  }
                }
                else {
                  if (pIVar20 == (Il2CppObject *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  pSVar21 = pIVar20[1].monitor;
                  auStack_198._0_4_ = *(undefined4 *)((long)&pIVar22[1].klass + 4);
                  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_198);
                  if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  __this_20 = in_stack_fffffffffffffe58;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar21,(Il2CppObject *)key,pIVar22,MethodInfo_Void_set_Item);
                  in_stack_fffffffffffffe58 = __this_20;
                }
              }
            }
            key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            __this_05.fields._index = (int)in_stack_fffffffffffffe50;
            __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
            __this_05.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
            __this_05.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_05,(MethodInfo_3251B10 *)(auStack_178 + 0x20));
          }
        }
        __this_06.fields._index = (int)in_stack_fffffffffffffe50;
        __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
        __this_06.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
        __this_06.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_06,(MethodInfo_3251B10 *)&_Stack_138);
        pIVar4 = pIStack_180;
        pIVar14 = (pIStack_180->_1).castClass;
        if (pIVar14 == (Il2CppClass *)0x0) goto label_04268d4f;
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
        if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
        goto label_04268d54;
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_198,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        auStack_178._16_8_ = pSStack_188;
        auStack_178._0_8_ = CONCAT44(auStack_198._4_4_,auStack_198._0_4_);
        auStack_178._8_8_ = auStack_198._8_8_;
        pIVar20 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
        key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        while (__this_07.fields._index = (int)in_stack_fffffffffffffe50,
              __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20),
              __this_07.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48,
              __this_07.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58,
              bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                 (__this_07,(MethodInfo_3251CB0 *)auStack_178), uVar25 = auStack_178._16_8_,
              (char)bVar10 != '\0') {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    ((CustomLogic_CustomLogicEvaluator_o *)pIVar4,
                     (CustomLogic_CustomLogicClassInstance_o *)auStack_178._16_8_,"Init",
                     (System_Object_array *)0x0,0,in_R9);
          if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar25 ==
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cd6;
          *(undefined1 *)
           ((long)&((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)(uVar25 + 0x10))->_buckets +
           1) = 1;
        }
        __this_08.fields._index = (int)in_stack_fffffffffffffe50;
        __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
        __this_08.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
        __this_08.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_08,(MethodInfo_3251CA0 *)auStack_178);
        pIVar14 = (pIStack_180->_1).parent;
        if (pIVar14 == (Il2CppClass *)0x0) goto label_04268d61;
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
        if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
        goto label_04268d66;
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_198,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        pIVar14 = pIStack_180;
        pSStack_108 = pSStack_188;
        _Stack_118._4_4_ = auStack_198._4_4_;
        _Stack_118._0_4_ = auStack_198._0_4_;
        pIStack_110 = (Il2CppType *)auStack_198._8_8_;
        in_stack_fffffffffffffe58 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)&MethodInfo_Boolean_MoveNext;
        while (__this_09.fields._index = (int)in_stack_fffffffffffffe50,
              __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20),
              __this_09.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48,
              __this_09.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58,
              bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                 (__this_09,(MethodInfo_3251CB0 *)&_Stack_118), (char)bVar10 != '\0') {
          if (pSStack_108 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cff;
          pSVar23 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                              (pSStack_108,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
          if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
          goto label_04268cfa;
          System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     auStack_198,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          pSStack_e8 = pSStack_188;
          _Stack_f8._4_4_ = auStack_198._4_4_;
          _Stack_f8._0_4_ = auStack_198._0_4_;
          pIStack_f0 = (Il2CppType *)auStack_198._8_8_;
          while (__this_10.fields._index = (int)in_stack_fffffffffffffe50,
                __this_10.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20),
                __this_10.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48,
                __this_10.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58,
                bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                   (__this_10,(MethodInfo_3249910 *)&_Stack_f8), pSVar8 = pSStack_e8,
                (char)bVar10 != '\0') {
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      ((CustomLogic_CustomLogicEvaluator_o *)pIVar14,
                       (CustomLogic_CustomLogicClassInstance_o *)pSStack_e8,"Init",
                       (System_Object_array *)0x0,0,in_R9);
            if (pSVar8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              pIVar20 = (Il2CppObject *)0x0;
              goto label_04268cd6;
            }
            *(undefined1 *)((long)&(pSVar8->fields)._buckets + 1) = 1;
          }
          __this_11.fields._index = (int)in_stack_fffffffffffffe50;
          __this_11.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
          __this_11.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
          __this_11.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                    (__this_11,(MethodInfo_3249900 *)&_Stack_f8);
        }
        __this_12.fields._index = (int)in_stack_fffffffffffffe50;
        __this_12.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
        __this_12.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
        __this_12.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_12,(MethodInfo_3251CA0 *)&_Stack_118);
        pIVar14 = pIStack_180;
        if (in_stack_fffffffffffffe58 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto label_04268d6b;
        pIVar4 = (pIStack_180->_1).declaringType;
        if (pIVar4 == (Il2CppClass *)0x0) goto label_04268d70;
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar4,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
        if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
        goto label_04268d75;
        method_00 = &MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu;
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_198,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        auStack_178._16_8_ = pSStack_188;
        auStack_178._0_8_ = CONCAT44(auStack_198._4_4_,auStack_198._0_4_);
        auStack_178._8_8_ = auStack_198._8_8_;
        while (__this_13.fields._index = (int)in_stack_fffffffffffffe50,
              __this_13.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20),
              __this_13.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48,
              __this_13.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58,
              bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                 (__this_13,(MethodInfo_3251CB0 *)auStack_178), (char)bVar10 != '\0') {
          CustomLogic_CustomLogicEvaluator__AddCallbacks
                    ((CustomLogic_CustomLogicEvaluator_o *)pIVar14,
                     (CustomLogic_CustomLogicClassInstance_o *)auStack_178._16_8_,method_01);
        }
        __this_14.fields._index = (int)in_stack_fffffffffffffe50;
        __this_14.fields._version = (int)((ulong)in_stack_fffffffffffffe50 >> 0x20);
        __this_14.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
        __this_14.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe58;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_14,(MethodInfo_3251CA0 *)auStack_178);
        pIVar4 = pIStack_180;
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicEvaluator_o *)pIStack_180,"Init",(System_Object_array *)0x0,
                   (MethodInfo *)method_00);
        pIVar14 = (pIVar4->_1).castClass;
        if (pIVar14 == (Il2CppClass *)0x0) goto label_04268d82;
        instance = (CustomLogic_CustomLogicClassInstance_o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,"Main",
                              MethodInfo_CustomLogicClassInstance_get_Item);
        CustomLogic_CustomLogicEvaluator__AddCallbacks
                  ((CustomLogic_CustomLogicEvaluator_o *)pIVar4,instance,method_02);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicEvaluator_o *)pIVar4,"OnGameStart",(System_Object_array *)0x0,
                   (MethodInfo *)method_00);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
        }
        else {
          __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
        }
        if (g_data_057adc2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_OnSecond_d__18);
          g_data_057adc2a = '\x01';
        }
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnSecond_d__18);
        System_Object___ctor(pIVar20,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar20[1].klass = 0;
        if (pIVar20 != (Il2CppObject *)0x0) {
          pIVar20[2].klass = pIVar4;
          il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar4);
          if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pSVar13 = (System_Exception_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (__this_00,(System_Collections_IEnumerator_o *)pIVar20,(MethodInfo *)0x0);
            return pSVar13;
          }
          goto label_04268d8c;
        }
        goto label_04268d87;
      }
    }
    else {
      __this = ((System_String_o *)((long)ppSVar28 + 0x18))->klass;
      if (__this != (System_String_c *)0x0) {
        pSVar5 = (__this->_1).image;
        if ((pSVar5 == g_data_057b9be8) || (pSVar5 == g_data_057b9bb8)) {
          pSVar13 = (System_Exception_o *)
                    (*(pSVar5->vtable)._3_ToString.methodPtr)(__this,(pSVar5->vtable)._3_ToString.method);
          return pSVar13;
        }
        if (pSVar5 == g_data_057b9b98) {
          pcVar15 = (char *)il2cpp_runtime_helper_02305440();
          if (*pcVar15 == '\0') {
            pSVar16 = (System_String_StaticFields *)&"false";
          }
          else {
            pSVar16 = (System_String_StaticFields *)&"true";
          }
          goto label_0426770c;
        }
        if (pSVar5 == g_data_057b9c00) {
          pSVar12 = System_String__Replace((System_String_o *)__this,0x2c,0x20,(MethodInfo *)0x0);
          if ((pSVar12 != (System_String_o *)0x0) &&
             (pSVar12 = System_String__Replace(pSVar12,0x3a,0x20,(MethodInfo *)0x0),
             pSVar12 != (System_String_o *)0x0)) {
            pSVar13 = (System_Exception_o *)System_String__Replace(pSVar12,0x7c,0x20,(MethodInfo *)0x0);
            return pSVar13;
          }
          goto label_04267b4b;
        }
      }
    }
  }
label_042676f7:
  pSVar16 = g_data_057b9c00->static_fields;
label_0426770c:
  return (System_Exception_o *)pSVar16->Empty;
label_04268cd6:
  il2cpp_runtime_helper_022b2c90();
label_04268cdb:
  il2cpp_runtime_helper_022b2c90();
label_04268ce0:
  il2cpp_runtime_helper_022b2c90();
label_04268ce5:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
  il2cpp_runtime_helper_022fefe0(pIVar20);
label_04268cfa:
  il2cpp_runtime_helper_022b2c90();
label_04268cff:
  il2cpp_runtime_helper_022b2c90();
  pSVar30 = key;
label_04268d04:
  il2cpp_runtime_helper_022b2c90();
label_04268d09:
  il2cpp_runtime_helper_022b2c90();
label_04268d0e:
  il2cpp_runtime_helper_022b2c90();
  key = pSVar30;
label_04268d13:
  il2cpp_runtime_helper_022b2c90();
label_04268d18:
  il2cpp_runtime_helper_022b2c90();
label_04268d1d:
  il2cpp_runtime_helper_022b2c90();
label_04268d22:
  il2cpp_runtime_helper_022b2c90();
label_04268d27:
  lStack_1a0 = 0;
  il2cpp_runtime_helper_022b2c90();
label_04268d2c:
  il2cpp_runtime_helper_022b2c90();
  unaff_R12 = key;
label_04268d31:
  key = unaff_R12;
  il2cpp_runtime_helper_022b2c90();
label_04268d36:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d40:
  il2cpp_runtime_helper_022b2c90();
label_04268d45:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d4f:
  il2cpp_runtime_helper_022b2c90();
label_04268d54:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d61:
  il2cpp_runtime_helper_022b2c90();
label_04268d66:
  il2cpp_runtime_helper_022b2c90();
label_04268d6b:
  il2cpp_runtime_helper_022fefe0();
label_04268d70:
  il2cpp_runtime_helper_022b2c90();
label_04268d75:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d82:
  il2cpp_runtime_helper_022b2c90();
label_04268d87:
  il2cpp_runtime_helper_022b2c90();
label_04268d8c:
  auVar32 = il2cpp_runtime_helper_022b2c90();
  while( true ) {
    if (auVar32._8_4_ != 1) {
      _Unwind_Resume(auVar32._0_8_);
    }
    plVar24 = (long *)__cxa_begin_catch(auVar32._0_8_);
    uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pMVar27 = (MethodInfo *)*plVar24;
    cVar9 = il2cpp_runtime_helper_0233e000(uVar25,pMVar27->methodPointer);
    if (cVar9 == '\0') break;
    plVar24 = (long *)*plVar24;
    __cxa_end_catch();
    if (plVar24 != (long *)0x0) {
      pSVar12 = (System_String_o *)(**(code **)(*plVar24 + 0x188))(plVar24,*(undefined8 *)(*plVar24 + 400));
      __this_17 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023445d0(&"Custom logic runtime error: ");
      pSVar12 = System_String__Concat_3ae5ba0((System_String_o *)__this_17,pSVar12,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_17,pSVar12,1,pMVar27);
      return extraout_RAX_01;
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar32 = il2cpp_runtime_helper_022fefe0(lStack_1a0);
      uVar25 = auVar32._0_8_;
      __this_15.fields._index = (int)uVar25;
      __this_15.fields._version = (int)((ulong)uVar25 >> 0x20);
      __this_15.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe48;
      __this_15.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe58;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_15,(MethodInfo_3251B10 *)(auStack_178 + 0x20));
      auVar32._8_4_ = auVar32._8_4_;
      auVar32._0_8_ = uVar25;
    } while (lStack_1a0 != 0);
  }
  plVar26 = (long *)__cxa_allocate_exception(8);
  *plVar26 = *plVar24;
  __cxa_throw(plVar26,&PTR_PTR_05215060,0);
}


// CustomLogic.CustomLogicUtils$$SerializeAst
// il2cpp: System_String_o* CustomLogic_CustomLogicUtils__SerializeAst (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x4267380

System_String_o *
CustomLogic_CustomLogicUtils__SerializeAst(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  Il2CppClass *pIVar5;
  System_String_c *pSVar6;
  void *pvVar7;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  uint g;
  int32_t b;
  int32_t a;
  int32_t iVar12;
  Il2CppClass *pIVar13;
  System_String_o *pSVar14;
  Utility_Color255_o *__this_15;
  char *pcVar15;
  System_String_StaticFields *pSVar16;
  CustomLogic_CustomLogicBaseAst_o *pCVar17;
  System_String_array *value;
  undefined4 extraout_var;
  int *piVar18;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_Dictionary_object__object__o *pSVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar23;
  CustomLogic_CustomLogicClassInstance_o *instance;
  long *plVar24;
  undefined8 uVar25;
  CustomLogic_CustomLogicEvaluator_o *__this_16;
  System_String_o *extraout_RAX_01;
  long *plVar26;
  MethodInfo_2A8BF80 **method_00;
  System_Collections_Generic_Dictionary_object__object__o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar27;
  MethodInfo *method_03;
  System_Collections_Generic_List_object__o *__this_17;
  System_String_o **ppSVar28;
  Il2CppClass **ppIVar29;
  Il2CppClass **__this_18;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_R12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar30;
  System_Collections_Generic_Dictionary_object__object__o *__this_19;
  float fVar31;
  float __this_20;
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
  undefined1 auVar32 [12];
  UnityEngine_Color_o color;
  undefined8 in_stack_fffffffffffffe60;
  undefined8 in_stack_fffffffffffffe68;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_fffffffffffffe70;
  long lStack_188;
  undefined1 auStack_180 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_170;
  Il2CppClass *pIStack_168;
  undefined1 auStack_160 [40];
  Il2CppType *pIStack_138;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_130;
  _union_236529 _Stack_120;
  Il2CppType *pIStack_118;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_110;
  _union_233249 _Stack_100;
  Il2CppType *pIStack_f8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_f0;
  _union_233249 _Stack_e0;
  Il2CppType *pIStack_d8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_d0;
  Il2CppClass *pIStack_c8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_c0;
  Il2CppMethodPointer local_68;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  _union_13 local_48;
  undefined8 uStack_40;
  Il2CppType *local_38;
  _union_13 _Stack_30;
  
  if (g_data_057adc16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicBaseAst_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057adc16 = '\x01';
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
        if (ast[1].monitor == (void *)0x0) {
label_04267b4b:
          il2cpp_runtime_helper_022b2c90();
label_04267b50:
          pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
        }
        else {
          iVar3 = *(int *)((long)ast[1].monitor + 0x18);
          bVar11 = System_String__op_Equality((System_String_o *)ast[1].klass,"Color",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            bVar11 = System_String__op_Equality
                               ((System_String_o *)ast[1].klass,"Vector3",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') goto label_042676f7;
            if (iVar3 == 3) {
              if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                local_58 = (Il2CppType *)CONCAT44(extraout_XMM0_Db_02,fVar31);
                uStack_50 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
                if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x1;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item(ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                  local_48._0_4_ = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                  local_48._4_4_ = extraout_XMM0_Db_03;
                  uStack_40 = (Il2CppClass *)CONCAT44(extraout_XMM0_Dd_03,extraout_XMM0_Dc_03);
                  __this_17 = ast[1].monitor;
                  if (__this_17 != (System_Collections_Generic_List_object__o *)0x0) {
                    pMVar27 = (MethodInfo *)0x2;
label_04267a3f:
                    pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                              System_Collections_Generic_List_object___get_Item
                                        (__this_17,(int32_t)pMVar27,MethodInfo_CustomLogicBaseAst_get_Item);
                    local_60 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                    local_68 = (Il2CppMethodPointer)CONCAT44(local_48._0_4_,(undefined4)local_58);
                    goto label_04267a8e;
                  }
                }
              }
            }
            else if (iVar3 == 2) {
              if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                local_58 = (Il2CppType *)CONCAT44(extraout_XMM0_Db_01,fVar31);
                uStack_50 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01);
                if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x1;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item(ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                  fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                  local_68 = (Il2CppMethodPointer)CONCAT44(fVar31,(undefined4)local_58);
                  local_60 = 0.0;
                  goto label_04267a8e;
                }
              }
            }
            else if (iVar3 == 1) {
              if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                fVar31 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                local_58 = (Il2CppType *)CONCAT44(extraout_XMM0_Db,fVar31);
                uStack_50 = (InvokerMethod)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x0;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
                  local_48._0_4_ = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar17,pMVar27);
                  local_48._4_4_ = extraout_XMM0_Db_00;
                  uStack_40 = (Il2CppClass *)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
                  __this_17 = ast[1].monitor;
                  if (__this_17 != (System_Collections_Generic_List_object__o *)0x0) {
                    pMVar27 = (MethodInfo *)0x0;
                    goto label_04267a3f;
                  }
                }
              }
            }
            else {
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              local_68 = (Il2CppMethodPointer)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              local_60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
label_04267a8e:
              value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
              pSVar14 = System_Single__ToString(__this_20,(MethodInfo *)&local_68);
              if (value != (System_String_array *)0x0) {
                if ((int)value->max_length != 0) {
                  value->m_Items[0] = pSVar14;
                  fVar31 = (float)il2cpp_runtime_helper_022b4080(value->m_Items,pSVar14);
                  pSVar14 = System_Single__ToString(fVar31,(MethodInfo *)((long)&local_68 + 4));
                  if (1 < (uint)value->max_length) {
                    value->m_Items[1] = pSVar14;
                    fVar31 = (float)il2cpp_runtime_helper_022b4080(value->m_Items + 1,pSVar14);
                    pSVar14 = System_Single__ToString(fVar31,(MethodInfo *)&local_60);
                    if (2 < (uint)value->max_length) {
                      ppSVar28 = value->m_Items + 2;
                      value->m_Items[2] = pSVar14;
label_04267b1e:
                      il2cpp_runtime_helper_022b4080(ppSVar28,pSVar14);
                      pSVar14 = System_String__Join("/",value,(MethodInfo *)0x0);
                      return pSVar14;
                    }
                  }
                }
                goto label_04267b50;
              }
            }
            goto label_04267b4b;
          }
          local_38 = (Il2CppType *)0x3f8000003f800000;
          _Stack_30.rgctx_data = (Il2CppRGCTXData *)0x3f8000003f800000;
          if (iVar3 == 4) {
            if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
              pMVar27 = (MethodInfo *)0x0;
              pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                        System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
              iVar12 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
              if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x1;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item(ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                  unaff_R12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)g;
                  pMVar27 = (MethodInfo *)0x2;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item(ast[1].monitor,2,MethodInfo_CustomLogicBaseAst_get_Item);
                  b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                  if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                    pMVar27 = (MethodInfo *)0x3;
                    pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                              System_Collections_Generic_List_object___get_Item(ast[1].monitor,3,MethodInfo_CustomLogicBaseAst_get_Item)
                    ;
                    a = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                    __this_15 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                    goto label_04267890;
                  }
                }
              }
            }
            goto label_04267b4b;
          }
          if (iVar3 == 3) {
            if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
              pMVar27 = (MethodInfo *)0x0;
              pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                        System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item);
              iVar12 = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
              if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                pMVar27 = (MethodInfo *)0x1;
                pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                          System_Collections_Generic_List_object___get_Item(ast[1].monitor,1,MethodInfo_CustomLogicBaseAst_get_Item);
                g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                if (ast[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
                  pMVar27 = (MethodInfo *)0x2;
                  pCVar17 = (CustomLogic_CustomLogicBaseAst_o *)
                            System_Collections_Generic_List_object___get_Item(ast[1].monitor,2,MethodInfo_CustomLogicBaseAst_get_Item);
                  b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar17,pMVar27);
                  __this_15 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                  a = 0xff;
label_04267890:
                  in_R9 = (MethodInfo *)0x0;
                  Utility_Color255___ctor(__this_15,iVar12,g,b,a,(MethodInfo *)0x0);
                  goto label_042678b6;
                }
              }
            }
            goto label_04267b4b;
          }
          if (iVar3 != 1) {
            __this_15 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor_4388b90(__this_15,(MethodInfo *)0x0);
label_042678b6:
            value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
            if (__this_15 == (Utility_Color255_o *)0x0) goto label_04267b4b;
            iVar3 = (int)__this_15;
            pSVar14 = System_Int32__ToString(iVar3 + 0x10,(MethodInfo *)0x0);
            if (value == (System_String_array *)0x0) goto label_04267b4b;
            if ((int)value->max_length != 0) {
              value->m_Items[0] = pSVar14;
              il2cpp_runtime_helper_022b4080(value->m_Items);
              pSVar14 = System_Int32__ToString(iVar3 + 0x14,(MethodInfo *)0x0);
              if (1 < (uint)value->max_length) {
                value->m_Items[1] = pSVar14;
                il2cpp_runtime_helper_022b4080(value->m_Items + 1);
                pSVar14 = System_Int32__ToString(iVar3 + 0x18,(MethodInfo *)0x0);
                if (2 < (uint)value->max_length) {
                  value->m_Items[2] = pSVar14;
                  il2cpp_runtime_helper_022b4080(value->m_Items + 2);
                  pSVar14 = System_Int32__ToString(iVar3 + 0x1c,(MethodInfo *)0x0);
                  if (3 < (uint)value->max_length) {
                    ppSVar28 = value->m_Items + 3;
                    value->m_Items[3] = pSVar14;
                    goto label_04267b1e;
                  }
                }
              }
            }
            goto label_04267b50;
          }
          if ((ast[1].monitor == (System_Collections_Generic_List_object__o *)0x0) ||
             (pIVar13 = (Il2CppClass *)
                        System_Collections_Generic_List_object___get_Item(ast[1].monitor,0,MethodInfo_CustomLogicBaseAst_get_Item),
             pIVar13 == (Il2CppClass *)0x0)) goto label_04267b4b;
          pIVar5 = (pIVar13->_1).image;
          bVar1 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
          if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
             ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
            plVar24 = (long *)(pIVar13->_1).namespaze;
            if (plVar24 != (long *)0x0) {
              pSVar14 = (System_String_o *)
                        (**(code **)(*plVar24 + 0x168))(plVar24,*(undefined8 *)(*plVar24 + 0x170));
              UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar14,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
              local_58 = local_38;
              uStack_50 = (InvokerMethod)0x0;
              local_48.methodMetadataHandle = _Stack_30.methodMetadataHandle;
              uStack_40 = (Il2CppClass *)0x0;
              __this_15 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              color.fields._8_8_ = local_48.rgctx_data;
              color.fields._0_8_ = local_58;
              Utility_Color255___ctor_4388bb0(__this_15,color,(MethodInfo *)0x0);
              goto label_042678b6;
            }
            goto label_04267b4b;
          }
        }
        il2cpp_runtime_helper_022b2fd0();
        ppIVar29 = (Il2CppClass **)pIVar13;
        if (g_data_057adc18 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
          ppIVar29 = &TypeInfo_CustomLogicUnaryExpressionAst;
          il2cpp_runtime_helper_023445d0();
          g_data_057adc18 = '\x01';
        }
        if (pIVar13 == (Il2CppClass *)0x0) {
          return (System_String_o *)0x0;
        }
        pIVar5 = (pIVar13->_1).image;
        bVar1 = (pIVar5->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
        if ((bVar2 <= bVar1) &&
           (ppIVar29 = (pIVar5->_2).typeHierarchy,
           *(Il2CppClass **)((long)ppIVar29 + ((ulong)bVar2 - 1) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
          pIVar20 = (Il2CppObject *)(pIVar13->_1).namespaze;
          if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar12 = System_Convert__ToInt32(pIVar20,(MethodInfo *)0x0);
          return (System_String_o *)CONCAT44(extraout_var,iVar12);
        }
        bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
        if (bVar1 < bVar2) {
          return (System_String_o *)0x0;
        }
        if ((pIVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicUnaryExpressionAst) {
          return (System_String_o *)0x0;
        }
        pvVar7 = (pIVar13->_1).byval_arg.data;
        if ((pvVar7 == (void *)0x0) ||
           (ppIVar29 = *(Il2CppClass ***)((long)pvVar7 + 0x18), (Il2CppClass *)ppIVar29 == (Il2CppClass *)0x0)
           ) {
          il2cpp_runtime_helper_022b2c90();
        }
        else if ((((((Il2CppClass *)ppIVar29)->_1).image)->_1).element_class ==
                 (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
          pMVar27 = TypeInfo_CustomLogicSymbol;
          piVar18 = (int *)il2cpp_runtime_helper_02305440();
          iVar3 = *piVar18;
          iVar12 = CustomLogic_CustomLogicUtils__BaseAstToInt
                             ((CustomLogic_CustomLogicBaseAst_o *)(pIVar13->_1).namespaze,pMVar27);
          if (iVar3 == 0x1e) {
            return (System_String_o *)CONCAT44(extraout_var_00,iVar12);
          }
          if (iVar3 != 0x1f) {
            return (System_String_o *)0x0;
          }
          return (System_String_o *)(ulong)(uint)-iVar12;
        }
        pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b2fd0();
        __this_18 = ppIVar29;
        if (g_data_057adc17 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
          __this_18 = &TypeInfo_CustomLogicUnaryExpressionAst;
          pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0();
          g_data_057adc17 = '\x01';
        }
        if ((Il2CppClass *)ppIVar29 == (Il2CppClass *)0x0) {
          return pSVar14;
        }
        pIVar13 = (((Il2CppClass *)ppIVar29)->_1).image;
        bVar1 = (pIVar13->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicPrimitiveExpressionAst->_2).naturalAligment;
        if ((bVar2 <= bVar1) &&
           (__this_18 = (pIVar13->_2).typeHierarchy,
           *(Il2CppClass **)((long)__this_18 + ((ulong)bVar2 - 1) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
          pIVar20 = (Il2CppObject *)(((Il2CppClass *)ppIVar29)->_1).namespaze;
          if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_Convert__ToSingle(pIVar20,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
        pMVar27 = (MethodInfo *)(ulong)bVar2;
        if (bVar1 < bVar2) {
          return (System_String_o *)pIVar13;
        }
        pSVar14 = (System_String_o *)(pIVar13->_2).typeHierarchy;
        if (*(Il2CppClass **)((long)pSVar14 + (long)pMVar27 * 8 + -8) != TypeInfo_CustomLogicUnaryExpressionAst) {
          return pSVar14;
        }
        pvVar7 = (((Il2CppClass *)ppIVar29)->_1).byval_arg.data;
        if ((pvVar7 == (void *)0x0) ||
           (__this_18 = *(Il2CppClass ***)((long)pvVar7 + 0x18),
           (Il2CppClass *)__this_18 == (Il2CppClass *)0x0)) {
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pMVar27 = TypeInfo_CustomLogicSymbol;
          if ((((((Il2CppClass *)__this_18)->_1).image)->_1).element_class ==
              (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
            piVar18 = (int *)il2cpp_runtime_helper_02305440();
            iVar3 = *piVar18;
            CustomLogic_CustomLogicUtils__BaseAstToFloat
                      ((CustomLogic_CustomLogicBaseAst_o *)(((Il2CppClass *)ppIVar29)->_1).namespaze,pMVar27);
            if (iVar3 == 0x1e) {
              return extraout_RAX_00;
            }
            if (iVar3 == 0x1f) {
              return extraout_RAX_00;
            }
            return extraout_RAX_00;
          }
        }
        il2cpp_runtime_helper_022b2fd0();
        method_03 = pMVar27;
        pIStack_c8 = (Il2CppClass *)ppIVar29;
        pSStack_c0 = unaff_R12;
        if (g_data_057adc19 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
          il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          il2cpp_runtime_helper_023445d0(&"OnGameStart");
          il2cpp_runtime_helper_023445d0(&"Init");
          il2cpp_runtime_helper_023445d0(&"Main");
          g_data_057adc19 = '\x01';
        }
        auStack_160._32_8_ =
             (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
        pIStack_138 = (Il2CppType *)0x0;
        pSStack_130 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        _Stack_120.genericMethod = (void *)0x0;
        pIStack_118 = (Il2CppType *)0x0;
        pSStack_110 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        auStack_160._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_160._8_8_ = (Il2CppType *)0x0;
        auStack_160._16_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        _Stack_100.genericMethod = (void *)0x0;
        pIStack_f8 = (Il2CppType *)0x0;
        pSStack_f0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        _Stack_e0.genericMethod = (void *)0x0;
        pIStack_d8 = (Il2CppType *)0x0;
        pSStack_d0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        CustomLogic_CustomLogicEvaluator__Init((CustomLogic_CustomLogicEvaluator_o *)__this_18,method_03);
        *(undefined4 *)&(((Il2CppClass *)__this_18)->_1).byval_arg.data = 0;
        pIVar13 = (((Il2CppClass *)__this_18)->_1).castClass;
        key = unaff_R12;
        pIStack_168 = (Il2CppClass *)__this_18;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_04268d2c;
        key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,"Main",
                         MethodInfo_CustomLogicClassInstance_get_Item);
        if (pMVar27 == (MethodInfo *)0x0) goto label_04268d31;
        pSVar19 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)pMVar27,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
        if (pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        goto label_04268d36;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_180,pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pSStack_130 = pSStack_170;
        auStack_160._32_8_ = CONCAT44(auStack_180._4_4_,auStack_180._0_4_);
        pIStack_138 = (Il2CppType *)auStack_180._8_8_;
        lStack_188 = 0;
        in_stack_fffffffffffffe70 = extraout_RDX;
        while (__this_00.fields._index = (int)in_stack_fffffffffffffe68,
              __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20),
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60,
              __this_00.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70,
              bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 (__this_00,(MethodInfo_3251B20 *)(auStack_160 + 0x20)), pSVar9 = pSStack_130,
              (char)bVar11 != '\0') {
          pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pMVar27,
                               (Il2CppObject *)pSStack_130,MethodInfo_BaseSetting_get_Item);
          if (pIVar20 != (Il2CppObject *)0x0) {
            pIVar13 = pIVar20->klass;
            bVar1 = (pIVar13->_2).naturalAligment;
            bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
            pSVar30 = key;
            if ((bVar1 < bVar2) || ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
                bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
                if ((bVar1 < bVar2) || ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                  bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                  if ((bVar2 <= bVar1) && ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
                    if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                    goto label_04268d18;
                    pSVar8 = (key->fields)._entries;
                    auStack_180[0] = *(undefined1 *)((long)&pIVar20[1].klass + 1);
                    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_180);
                    if (pSVar8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                    goto label_04268d1d;
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar8,
                               (Il2CppObject *)pSVar9,pIVar20,MethodInfo_Void_set_Item);
                  }
                }
                else {
                  if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d27;
                  pSVar8 = (key->fields)._entries;
                  auStack_180._0_4_ = *(undefined4 *)((long)&pIVar20[1].klass + 4);
                  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_180);
                  if (pSVar8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_04268d0e;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar8,
                             (Il2CppObject *)pSVar9,pIVar20,MethodInfo_Void_set_Item);
                }
              }
              else {
                if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d22;
                pSVar8 = (key->fields)._entries;
                if (pSVar8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_04268d13;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar8,
                           (Il2CppObject *)pSVar9,pIVar20[1].monitor,MethodInfo_Void_set_Item);
              }
            }
            else {
              if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d09;
              pSVar8 = (key->fields)._entries;
              auStack_180._0_4_ = *(undefined4 *)((long)&pIVar20[1].klass + 4);
              pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_180);
              pSVar30 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              if (pSVar8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_04268d04;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar8,
                         (Il2CppObject *)pSVar9,pIVar20,MethodInfo_Void_set_Item);
            }
          }
        }
        __this_01.fields._index = (int)in_stack_fffffffffffffe68;
        __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
        __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251B10 *)(auStack_160 + 0x20));
        pIVar13 = (pIStack_168->_1).declaringType;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_04268d40;
        pSVar19 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
        if (pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        goto label_04268d45;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_180,pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pSStack_110 = pSStack_170;
        _Stack_120._4_4_ = auStack_180._4_4_;
        _Stack_120._0_4_ = auStack_180._0_4_;
        pIStack_118 = (Il2CppType *)auStack_180._8_8_;
        lStack_188 = 0;
        __this_19 = extraout_RDX;
        while( true ) {
          pIVar20 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
          __this_02.fields._index = (int)in_stack_fffffffffffffe68;
          __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
          __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70;
          bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_02,(MethodInfo_3251B20 *)&_Stack_120);
          pSVar9 = pSStack_110;
          if ((char)bVar11 == '\0') break;
          if ((__this_19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (__this_19,(Il2CppObject *)pSStack_110,MethodInfo_Boolean_ContainsKey), (char)bVar11 != '\0'))
          {
            pIVar13 = (pIStack_168->_1).declaringType;
            if (pIVar13 == (Il2CppClass *)0x0) goto label_04268cdb;
            pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,
                                 (Il2CppObject *)pSVar9,MethodInfo_CustomLogicClassInstance_get_Item);
            pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_19,(Il2CppObject *)pSVar9,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04268ce5;
            pSVar19 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar21,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
            if (pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
            goto label_04268ce0;
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       auStack_180,pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
            pSStack_130 = pSStack_170;
            auStack_160._32_8_ = CONCAT44(auStack_180._4_4_,auStack_180._0_4_);
            pIStack_138 = (Il2CppType *)auStack_180._8_8_;
            while (__this_03.fields._index = (int)in_stack_fffffffffffffe68,
                  __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20),
                  __this_03.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60,
                  __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70,
                  bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                     (__this_03,(MethodInfo_3251B20 *)(auStack_160 + 0x20)), key = pSStack_130
                  , (char)bVar11 != '\0') {
              pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (__this_19,(Il2CppObject *)pSVar9,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04268cd6;
              }
              pIVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar21,(Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
              if (pIVar22 != (Il2CppObject *)0x0) {
                pIVar13 = pIVar22->klass;
                bVar1 = (pIVar13->_2).naturalAligment;
                bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
                if ((bVar1 < bVar2) || ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
                  bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                  if ((bVar1 < bVar2) || ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
                    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
                    if ((bVar1 < bVar2) || ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                      bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                      if ((bVar2 <= bVar1) && ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting))
                      {
                        if (pIVar20 == (Il2CppObject *)0x0) {
                          il2cpp_runtime_helper_022b2c90();
                          goto label_04268cdb;
                        }
                        pSVar21 = pIVar20[1].monitor;
                        auStack_180[0] = *(undefined1 *)((long)&pIVar22[1].klass + 1);
                        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_180);
                        if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          il2cpp_runtime_helper_022b2c90();
                          goto label_04268cdb;
                        }
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar21,(Il2CppObject *)key,pIVar22,MethodInfo_Void_set_Item);
                      }
                    }
                    else {
                      if (pIVar20 == (Il2CppObject *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
                        goto label_04268cdb;
                      }
                      pSVar21 = pIVar20[1].monitor;
                      auStack_180._0_4_ = *(undefined4 *)((long)&pIVar22[1].klass + 4);
                      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_180);
                      if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
                        goto label_04268cdb;
                      }
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar21,(Il2CppObject *)key,pIVar22,MethodInfo_Void_set_Item);
                    }
                  }
                  else {
                    if (pIVar20 == (Il2CppObject *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_04268cdb;
                    }
                    if (pIVar20[1].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_04268cdb;
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pIVar20[1].monitor,(Il2CppObject *)key,pIVar22[1].monitor,MethodInfo_Void_set_Item);
                  }
                }
                else {
                  if (pIVar20 == (Il2CppObject *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  pSVar21 = pIVar20[1].monitor;
                  auStack_180._0_4_ = *(undefined4 *)((long)&pIVar22[1].klass + 4);
                  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_180);
                  if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  __this_19 = in_stack_fffffffffffffe70;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar21,(Il2CppObject *)key,pIVar22,MethodInfo_Void_set_Item);
                  in_stack_fffffffffffffe70 = __this_19;
                }
              }
            }
            key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            __this_04.fields._index = (int)in_stack_fffffffffffffe68;
            __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
            __this_04.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
            __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_04,(MethodInfo_3251B10 *)(auStack_160 + 0x20));
          }
        }
        __this_05.fields._index = (int)in_stack_fffffffffffffe68;
        __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
        __this_05.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
        __this_05.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_05,(MethodInfo_3251B10 *)&_Stack_120);
        pIVar5 = pIStack_168;
        pIVar13 = (pIStack_168->_1).castClass;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_04268d4f;
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
        if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
        goto label_04268d54;
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_180,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        auStack_160._16_8_ = pSStack_170;
        auStack_160._0_8_ = CONCAT44(auStack_180._4_4_,auStack_180._0_4_);
        auStack_160._8_8_ = auStack_180._8_8_;
        pIVar20 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
        key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        while (__this_06.fields._index = (int)in_stack_fffffffffffffe68,
              __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20),
              __this_06.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60,
              __this_06.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70,
              bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                 (__this_06,(MethodInfo_3251CB0 *)auStack_160), uVar25 = auStack_160._16_8_,
              (char)bVar11 != '\0') {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    ((CustomLogic_CustomLogicEvaluator_o *)pIVar5,
                     (CustomLogic_CustomLogicClassInstance_o *)auStack_160._16_8_,"Init",
                     (System_Object_array *)0x0,0,in_R9);
          if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar25 ==
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cd6;
          *(undefined1 *)
           ((long)&((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)(uVar25 + 0x10))->_buckets +
           1) = 1;
        }
        __this_07.fields._index = (int)in_stack_fffffffffffffe68;
        __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
        __this_07.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
        __this_07.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_07,(MethodInfo_3251CA0 *)auStack_160);
        pIVar13 = (pIStack_168->_1).parent;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_04268d61;
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
        if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
        goto label_04268d66;
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_180,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        pIVar13 = pIStack_168;
        pSStack_f0 = pSStack_170;
        _Stack_100._4_4_ = auStack_180._4_4_;
        _Stack_100._0_4_ = auStack_180._0_4_;
        pIStack_f8 = (Il2CppType *)auStack_180._8_8_;
        in_stack_fffffffffffffe70 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)&MethodInfo_Boolean_MoveNext;
        while (__this_08.fields._index = (int)in_stack_fffffffffffffe68,
              __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20),
              __this_08.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60,
              __this_08.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70,
              bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                 (__this_08,(MethodInfo_3251CB0 *)&_Stack_100), (char)bVar11 != '\0') {
          if (pSStack_f0 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cff;
          pSVar23 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                              (pSStack_f0,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
          if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
          goto label_04268cfa;
          System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     auStack_180,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
          pSStack_d0 = pSStack_170;
          _Stack_e0._4_4_ = auStack_180._4_4_;
          _Stack_e0._0_4_ = auStack_180._0_4_;
          pIStack_d8 = (Il2CppType *)auStack_180._8_8_;
          while (__this_09.fields._index = (int)in_stack_fffffffffffffe68,
                __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20),
                __this_09.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60,
                __this_09.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70,
                bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                   (__this_09,(MethodInfo_3249910 *)&_Stack_e0), pSVar9 = pSStack_d0,
                (char)bVar11 != '\0') {
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      ((CustomLogic_CustomLogicEvaluator_o *)pIVar13,
                       (CustomLogic_CustomLogicClassInstance_o *)pSStack_d0,"Init",
                       (System_Object_array *)0x0,0,in_R9);
            if (pSVar9 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              pIVar20 = (Il2CppObject *)0x0;
              goto label_04268cd6;
            }
            *(undefined1 *)((long)&(pSVar9->fields)._buckets + 1) = 1;
          }
          __this_10.fields._index = (int)in_stack_fffffffffffffe68;
          __this_10.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
          __this_10.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
          __this_10.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                    (__this_10,(MethodInfo_3249900 *)&_Stack_e0);
        }
        __this_11.fields._index = (int)in_stack_fffffffffffffe68;
        __this_11.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
        __this_11.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
        __this_11.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_11,(MethodInfo_3251CA0 *)&_Stack_100);
        pIVar13 = pIStack_168;
        if (in_stack_fffffffffffffe70 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto label_04268d6b;
        pIVar5 = (pIStack_168->_1).declaringType;
        if (pIVar5 == (Il2CppClass *)0x0) goto label_04268d70;
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar5,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
        if (pSVar23 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
        goto label_04268d75;
        method_00 = &MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu;
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   auStack_180,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        auStack_160._16_8_ = pSStack_170;
        auStack_160._0_8_ = CONCAT44(auStack_180._4_4_,auStack_180._0_4_);
        auStack_160._8_8_ = auStack_180._8_8_;
        while (__this_12.fields._index = (int)in_stack_fffffffffffffe68,
              __this_12.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20),
              __this_12.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60,
              __this_12.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70,
              bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                 (__this_12,(MethodInfo_3251CB0 *)auStack_160), (char)bVar11 != '\0') {
          CustomLogic_CustomLogicEvaluator__AddCallbacks
                    ((CustomLogic_CustomLogicEvaluator_o *)pIVar13,
                     (CustomLogic_CustomLogicClassInstance_o *)auStack_160._16_8_,method_01);
        }
        __this_13.fields._index = (int)in_stack_fffffffffffffe68;
        __this_13.fields._version = (int)((ulong)in_stack_fffffffffffffe68 >> 0x20);
        __this_13.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
        __this_13.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffe70;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_13,(MethodInfo_3251CA0 *)auStack_160);
        pIVar5 = pIStack_168;
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicEvaluator_o *)pIStack_168,"Init",(System_Object_array *)0x0,
                   (MethodInfo *)method_00);
        pIVar13 = (pIVar5->_1).castClass;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_04268d82;
        instance = (CustomLogic_CustomLogicClassInstance_o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,"Main",
                              MethodInfo_CustomLogicClassInstance_get_Item);
        CustomLogic_CustomLogicEvaluator__AddCallbacks
                  ((CustomLogic_CustomLogicEvaluator_o *)pIVar5,instance,method_02);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicEvaluator_o *)pIVar5,"OnGameStart",(System_Object_array *)0x0,
                   (MethodInfo *)method_00);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
        }
        else {
          __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
        }
        if (g_data_057adc2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_OnSecond_d__18);
          g_data_057adc2a = '\x01';
        }
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnSecond_d__18);
        System_Object___ctor(pIVar20,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar20[1].klass = 0;
        if (pIVar20 != (Il2CppObject *)0x0) {
          pIVar20[2].klass = pIVar5;
          il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar5);
          if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
            pSVar14 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (__this,(System_Collections_IEnumerator_o *)pIVar20,(MethodInfo *)0x0);
            return pSVar14;
          }
          goto label_04268d8c;
        }
        goto label_04268d87;
      }
    }
    else {
      pCVar4 = ast[1].klass;
      if (pCVar4 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
        pSVar6 = (pCVar4->_1).image;
        if ((pSVar6 == g_data_057b9be8) || (pSVar6 == g_data_057b9bb8)) {
          pSVar14 = (System_String_o *)
                    (*(pSVar6->vtable)._3_ToString.methodPtr)(pCVar4,(pSVar6->vtable)._3_ToString.method);
          return pSVar14;
        }
        if (pSVar6 == g_data_057b9b98) {
          pcVar15 = (char *)il2cpp_runtime_helper_02305440();
          if (*pcVar15 == '\0') {
            pSVar16 = (System_String_StaticFields *)&"false";
          }
          else {
            pSVar16 = (System_String_StaticFields *)&"true";
          }
          goto label_0426770c;
        }
        if (pSVar6 == g_data_057b9c00) {
          pSVar14 = System_String__Replace((System_String_o *)pCVar4,0x2c,0x20,(MethodInfo *)0x0);
          if ((pSVar14 != (System_String_o *)0x0) &&
             (pSVar14 = System_String__Replace(pSVar14,0x3a,0x20,(MethodInfo *)0x0),
             pSVar14 != (System_String_o *)0x0)) {
            pSVar14 = System_String__Replace(pSVar14,0x7c,0x20,(MethodInfo *)0x0);
            return pSVar14;
          }
          goto label_04267b4b;
        }
      }
    }
  }
label_042676f7:
  pSVar16 = g_data_057b9c00->static_fields;
label_0426770c:
  return pSVar16->Empty;
label_04268cd6:
  il2cpp_runtime_helper_022b2c90();
label_04268cdb:
  il2cpp_runtime_helper_022b2c90();
label_04268ce0:
  il2cpp_runtime_helper_022b2c90();
label_04268ce5:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
  il2cpp_runtime_helper_022fefe0(pIVar20);
label_04268cfa:
  il2cpp_runtime_helper_022b2c90();
label_04268cff:
  il2cpp_runtime_helper_022b2c90();
  pSVar30 = key;
label_04268d04:
  il2cpp_runtime_helper_022b2c90();
label_04268d09:
  il2cpp_runtime_helper_022b2c90();
label_04268d0e:
  il2cpp_runtime_helper_022b2c90();
  key = pSVar30;
label_04268d13:
  il2cpp_runtime_helper_022b2c90();
label_04268d18:
  il2cpp_runtime_helper_022b2c90();
label_04268d1d:
  il2cpp_runtime_helper_022b2c90();
label_04268d22:
  il2cpp_runtime_helper_022b2c90();
label_04268d27:
  lStack_188 = 0;
  il2cpp_runtime_helper_022b2c90();
label_04268d2c:
  il2cpp_runtime_helper_022b2c90();
  unaff_R12 = key;
label_04268d31:
  key = unaff_R12;
  il2cpp_runtime_helper_022b2c90();
label_04268d36:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d40:
  il2cpp_runtime_helper_022b2c90();
label_04268d45:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d4f:
  il2cpp_runtime_helper_022b2c90();
label_04268d54:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d61:
  il2cpp_runtime_helper_022b2c90();
label_04268d66:
  il2cpp_runtime_helper_022b2c90();
label_04268d6b:
  il2cpp_runtime_helper_022fefe0();
label_04268d70:
  il2cpp_runtime_helper_022b2c90();
label_04268d75:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d82:
  il2cpp_runtime_helper_022b2c90();
label_04268d87:
  il2cpp_runtime_helper_022b2c90();
label_04268d8c:
  auVar32 = il2cpp_runtime_helper_022b2c90();
  while( true ) {
    if (auVar32._8_4_ != 1) {
      _Unwind_Resume(auVar32._0_8_);
    }
    plVar24 = (long *)__cxa_begin_catch(auVar32._0_8_);
    uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pMVar27 = (MethodInfo *)*plVar24;
    cVar10 = il2cpp_runtime_helper_0233e000(uVar25,pMVar27->methodPointer);
    if (cVar10 == '\0') break;
    plVar24 = (long *)*plVar24;
    __cxa_end_catch();
    if (plVar24 != (long *)0x0) {
      pSVar14 = (System_String_o *)(**(code **)(*plVar24 + 0x188))(plVar24,*(undefined8 *)(*plVar24 + 400));
      __this_16 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023445d0(&"Custom logic runtime error: ");
      pSVar14 = System_String__Concat_3ae5ba0((System_String_o *)__this_16,pSVar14,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_16,pSVar14,1,pMVar27);
      return extraout_RAX_01;
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar32 = il2cpp_runtime_helper_022fefe0(lStack_188);
      uVar25 = auVar32._0_8_;
      __this_14.fields._index = (int)uVar25;
      __this_14.fields._version = (int)((ulong)uVar25 >> 0x20);
      __this_14.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe60;
      __this_14.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffe70;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_14,(MethodInfo_3251B10 *)(auStack_160 + 0x20));
      auVar32._8_4_ = auVar32._8_4_;
      auVar32._0_8_ = uVar25;
    } while (lStack_188 != 0);
  }
  plVar26 = (long *)__cxa_allocate_exception(8);
  *plVar26 = *plVar24;
  __cxa_throw(plVar26,&PTR_PTR_05215060,0);
}


// CustomLogic.CustomLogicUtils$$BaseAstToFloat
// il2cpp: float CustomLogic_CustomLogicUtils__BaseAstToFloat (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x4267c90

float CustomLogic_CustomLogicUtils__BaseAstToFloat(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar6;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  char cVar8;
  bool_conflict bVar9;
  int *piVar10;
  System_Collections_Generic_Dictionary_TKey__TValue__o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar15;
  CustomLogic_CustomLogicClassInstance_o *instance;
  long *plVar16;
  undefined8 uVar17;
  System_String_o *pSVar18;
  CustomLogic_CustomLogicEvaluator_o *__this_15;
  long *plVar19;
  MethodInfo *pMVar20;
  System_Collections_Generic_Dictionary_object__object__o *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppClass *pIVar21;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_R12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar22;
  System_Collections_Generic_Dictionary_object__object__o *__this_16;
  float fVar23;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 auVar24 [12];
  undefined8 in_stack_fffffffffffffee0;
  undefined8 in_stack_fffffffffffffee8;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_fffffffffffffef0;
  long lStack_108;
  undefined1 auStack_100 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_f0;
  Il2CppClass *pIStack_e8;
  undefined1 auStack_e0 [40];
  Il2CppType *pIStack_b8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b0;
  _union_236529 _Stack_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_90;
  _union_233249 _Stack_80;
  Il2CppType *pIStack_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  _union_233085 _Stack_60;
  Il2CppType *pIStack_58;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_50;
  CustomLogic_CustomLogicBaseAst_o *pCStack_48;
  
  pIVar21 = (Il2CppClass *)ast;
  if (g_data_057adc17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    pIVar21 = (Il2CppClass *)&TypeInfo_CustomLogicUnaryExpressionAst;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc17 = '\x01';
  }
  if (ast == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    return 0.0;
  }
  pCVar4 = ast->klass;
  bVar1 = (pCVar4->_2).naturalAligment;
  if ((*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) <= bVar1) &&
     (pIVar21 = (Il2CppClass *)(pCVar4->_2).typeHierarchy,
     *(long *)((long)pIVar21 + (ulong)*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) * 8 + -8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
    pCVar4 = ast[1].klass;
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar23 = System_Convert__ToSingle((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
    return fVar23;
  }
  bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
  pMVar20 = (MethodInfo *)(ulong)bVar2;
  if (bVar1 < bVar2) {
    return 0.0;
  }
  if ((pCVar4->_2).typeHierarchy[(long)&pMVar20[-1].field_0x57] != TypeInfo_CustomLogicUnaryExpressionAst) {
    return 0.0;
  }
  if ((ast[1].monitor == (void *)0x0) ||
     (pIVar21 = *(Il2CppClass **)((long)ast[1].monitor + 0x18), pIVar21 == (Il2CppClass *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar20 = TypeInfo_CustomLogicSymbol;
    if (*(void **)((long)(pIVar21->_1).image + 0x40) == (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
      piVar10 = (int *)il2cpp_runtime_helper_02305440();
      iVar3 = *piVar10;
      fVar23 = CustomLogic_CustomLogicUtils__BaseAstToFloat
                         ((CustomLogic_CustomLogicBaseAst_o *)ast[1].klass,pMVar20);
      if (iVar3 == 0x1e) {
        return fVar23;
      }
      if (iVar3 != 0x1f) {
        return 0.0;
      }
      return -fVar23;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  method_02 = pMVar20;
  pCStack_48 = ast;
  if (g_data_057adc19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"OnGameStart");
    il2cpp_runtime_helper_023445d0(&"Init");
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057adc19 = '\x01';
  }
  auStack_e0._32_8_ = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_b8 = (Il2CppType *)0x0;
  pSStack_b0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_a0.genericMethod = (void *)0x0;
  pIStack_98 = (Il2CppType *)0x0;
  pSStack_90 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._8_8_ = (Il2CppType *)0x0;
  auStack_e0._16_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_80.genericMethod = (void *)0x0;
  pIStack_78 = (Il2CppType *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_60.genericMethod = (void *)0x0;
  pIStack_58 = (Il2CppType *)0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  CustomLogic_CustomLogicEvaluator__Init((CustomLogic_CustomLogicEvaluator_o *)pIVar21,method_02);
  *(undefined4 *)&(pIVar21->_1).byval_arg.data = 0;
  pIVar5 = (pIVar21->_1).castClass;
  key = unaff_R12;
  pIStack_e8 = pIVar21;
  if (pIVar5 == (Il2CppClass *)0x0) goto label_04268d2c;
  key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
        System_Collections_Generic_Dictionary_object__object___get_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar5,"Main",MethodInfo_CustomLogicClassInstance_get_Item
                  );
  if (pMVar20 == (MethodInfo *)0x0) goto label_04268d31;
  pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Keys
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar20,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
  if (pSVar11 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04268d36;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_100,
             pSVar11,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSStack_b0 = pSStack_f0;
  auStack_e0._32_8_ = CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
  pIStack_b8 = (Il2CppType *)auStack_100._8_8_;
  lStack_108 = 0;
  in_stack_fffffffffffffef0 = extraout_RDX;
  while (__this_00.fields._index = (int)in_stack_fffffffffffffee8,
        __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20),
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0,
        __this_00.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0,
        bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_00,(MethodInfo_3251B20 *)(auStack_e0 + 0x20)), pSVar7 = pSStack_b0,
        (char)bVar9 != '\0') {
    pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pMVar20,
                         (Il2CppObject *)pSStack_b0,MethodInfo_BaseSetting_get_Item);
    if (pIVar12 != (Il2CppObject *)0x0) {
      pIVar21 = pIVar12->klass;
      bVar1 = (pIVar21->_2).naturalAligment;
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      pSVar22 = key;
      if ((bVar1 < bVar2) || ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
        bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
            bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
            if ((bVar2 <= bVar1) && ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
              if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d18;
              pSVar6 = (key->fields)._entries;
              auStack_100[0] = *(undefined1 *)((long)&pIVar12[1].klass + 1);
              pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_100);
              if (pSVar6 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_04268d1d;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,
                         (Il2CppObject *)pSVar7,pIVar12,MethodInfo_Void_set_Item);
            }
          }
          else {
            if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d27;
            pSVar6 = (key->fields)._entries;
            auStack_100._0_4_ = *(undefined4 *)((long)&pIVar12[1].klass + 4);
            pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_100);
            if (pSVar6 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_04268d0e;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,
                       (Il2CppObject *)pSVar7,pIVar12,MethodInfo_Void_set_Item);
          }
        }
        else {
          if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d22;
          pSVar6 = (key->fields)._entries;
          if (pSVar6 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04268d13;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,(Il2CppObject *)pSVar7,
                     pIVar12[1].monitor,MethodInfo_Void_set_Item);
        }
      }
      else {
        if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d09;
        pSVar6 = (key->fields)._entries;
        auStack_100._0_4_ = *(undefined4 *)((long)&pIVar12[1].klass + 4);
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_100);
        pSVar22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        if (pSVar6 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_04268d04;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,(Il2CppObject *)pSVar7,
                   pIVar12,MethodInfo_Void_set_Item);
      }
    }
  }
  __this_01.fields._index = (int)in_stack_fffffffffffffee8;
  __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  __this_01.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
  __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_01,(MethodInfo_3251B10 *)(auStack_e0 + 0x20));
  pIVar21 = (pIStack_e8->_1).declaringType;
  if (pIVar21 == (Il2CppClass *)0x0) goto label_04268d40;
  pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Keys
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar21,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
  if (pSVar11 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04268d45;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_100,
             pSVar11,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSStack_90 = pSStack_f0;
  _Stack_a0._4_4_ = auStack_100._4_4_;
  _Stack_a0._0_4_ = auStack_100._0_4_;
  pIStack_98 = (Il2CppType *)auStack_100._8_8_;
  lStack_108 = 0;
  __this_16 = extraout_RDX;
  while( true ) {
    pIVar12 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
    __this_02.fields._index = (int)in_stack_fffffffffffffee8;
    __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
    __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0;
    bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_02,(MethodInfo_3251B20 *)&_Stack_a0);
    pSVar7 = pSStack_90;
    if ((char)bVar9 == '\0') break;
    if ((__this_16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_16,(Il2CppObject *)pSStack_90,MethodInfo_Boolean_ContainsKey), (char)bVar9 != '\0')) {
      pIVar21 = (pIStack_e8->_1).declaringType;
      if (pIVar21 == (Il2CppClass *)0x0) goto label_04268cdb;
      pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar21,
                           (Il2CppObject *)pSVar7,MethodInfo_CustomLogicClassInstance_get_Item);
      pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_16,(Il2CppObject *)pSVar7,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
      if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04268ce5;
      pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar13,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
      if (pSVar11 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04268ce0;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_100
                 ,pSVar11,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pSStack_b0 = pSStack_f0;
      auStack_e0._32_8_ = CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
      pIStack_b8 = (Il2CppType *)auStack_100._8_8_;
      while (__this_03.fields._index = (int)in_stack_fffffffffffffee8,
            __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20),
            __this_03.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0,
            __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0,
            bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_03,(MethodInfo_3251B20 *)(auStack_e0 + 0x20)), key = pSStack_b0,
            (char)bVar9 != '\0') {
        pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_16,(Il2CppObject *)pSVar7,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
        if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04268cd6;
        }
        pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar13,(Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
        if (pIVar14 != (Il2CppObject *)0x0) {
          pIVar21 = pIVar14->klass;
          bVar1 = (pIVar21->_2).naturalAligment;
          bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
            bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar1 < bVar2) || ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
              bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                if ((bVar2 <= bVar1) && ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
                  if (pIVar12 == (Il2CppObject *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  pSVar13 = pIVar12[1].monitor;
                  auStack_100[0] = *(undefined1 *)((long)&pIVar14[1].klass + 1);
                  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_100);
                  if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar13,(Il2CppObject *)key,pIVar14,MethodInfo_Void_set_Item);
                }
              }
              else {
                if (pIVar12 == (Il2CppObject *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04268cdb;
                }
                pSVar13 = pIVar12[1].monitor;
                auStack_100._0_4_ = *(undefined4 *)((long)&pIVar14[1].klass + 4);
                pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_100);
                if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04268cdb;
                }
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar13,(Il2CppObject *)key,pIVar14,MethodInfo_Void_set_Item);
              }
            }
            else {
              if (pIVar12 == (Il2CppObject *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04268cdb;
              }
              if (pIVar12[1].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04268cdb;
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pIVar12[1].monitor,(Il2CppObject *)key,pIVar14[1].monitor,MethodInfo_Void_set_Item);
            }
          }
          else {
            if (pIVar12 == (Il2CppObject *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04268cdb;
            }
            pSVar13 = pIVar12[1].monitor;
            auStack_100._0_4_ = *(undefined4 *)((long)&pIVar14[1].klass + 4);
            pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_100);
            if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04268cdb;
            }
            __this_16 = in_stack_fffffffffffffef0;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar13,(Il2CppObject *)key,pIVar14,MethodInfo_Void_set_Item);
            in_stack_fffffffffffffef0 = __this_16;
          }
        }
      }
      key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      __this_04.fields._index = (int)in_stack_fffffffffffffee8;
      __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
      __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251B10 *)(auStack_e0 + 0x20));
    }
  }
  __this_05.fields._index = (int)in_stack_fffffffffffffee8;
  __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
  __this_05.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&_Stack_a0);
  pIVar5 = pIStack_e8;
  pIVar21 = (pIStack_e8->_1).castClass;
  if (pIVar21 == (Il2CppClass *)0x0) goto label_04268d4f;
  pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar21,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
  if (pSVar15 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_04268d54;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_100,
             pSVar15,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  auStack_e0._16_8_ = pSStack_f0;
  auStack_e0._0_8_ = CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
  auStack_e0._8_8_ = auStack_100._8_8_;
  pIVar12 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
  key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  while (__this_06.fields._index = (int)in_stack_fffffffffffffee8,
        __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20),
        __this_06.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0,
        __this_06.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0,
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_06,(MethodInfo_3251CB0 *)auStack_e0), uVar17 = auStack_e0._16_8_,
        (char)bVar9 != '\0') {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              ((CustomLogic_CustomLogicEvaluator_o *)pIVar5,
               (CustomLogic_CustomLogicClassInstance_o *)auStack_e0._16_8_,"Init",
               (System_Object_array *)0x0,0,in_R9);
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar17 ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cd6;
    *(undefined1 *)
     ((long)&((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)(uVar17 + 0x10))->_buckets + 1) =
         1;
  }
  __this_07.fields._index = (int)in_stack_fffffffffffffee8;
  __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  __this_07.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
  __this_07.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_07,(MethodInfo_3251CA0 *)auStack_e0);
  pIVar21 = (pIStack_e8->_1).parent;
  if (pIVar21 == (Il2CppClass *)0x0) goto label_04268d61;
  pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar21,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
  if (pSVar15 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_04268d66;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_100,
             pSVar15,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  pIVar21 = pIStack_e8;
  pSStack_70 = pSStack_f0;
  _Stack_80._4_4_ = auStack_100._4_4_;
  _Stack_80._0_4_ = auStack_100._0_4_;
  pIStack_78 = (Il2CppType *)auStack_100._8_8_;
  in_stack_fffffffffffffef0 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)&MethodInfo_Boolean_MoveNext;
  while (__this_08.fields._index = (int)in_stack_fffffffffffffee8,
        __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20),
        __this_08.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0,
        __this_08.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0,
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_08,(MethodInfo_3251CB0 *)&_Stack_80), (char)bVar9 != '\0') {
    if (pSStack_70 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cff;
    pSVar15 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values(pSStack_70,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
    if (pSVar15 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
    goto label_04268cfa;
    System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_100
               ,pSVar15,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    pSStack_50 = pSStack_f0;
    _Stack_60._4_4_ = auStack_100._4_4_;
    _Stack_60._0_4_ = auStack_100._0_4_;
    pIStack_58 = (Il2CppType *)auStack_100._8_8_;
    while (__this_09.fields._index = (int)in_stack_fffffffffffffee8,
          __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20),
          __this_09.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0,
          __this_09.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0,
          bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                            (__this_09,(MethodInfo_3249910 *)&_Stack_60), pSVar7 = pSStack_50,
          (char)bVar9 != '\0') {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                ((CustomLogic_CustomLogicEvaluator_o *)pIVar21,
                 (CustomLogic_CustomLogicClassInstance_o *)pSStack_50,"Init",(System_Object_array *)0x0,
                 0,in_R9);
      if (pSVar7 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pIVar12 = (Il2CppObject *)0x0;
        goto label_04268cd6;
      }
      *(undefined1 *)((long)&(pSVar7->fields)._buckets + 1) = 1;
    }
    __this_10.fields._index = (int)in_stack_fffffffffffffee8;
    __this_10.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
    __this_10.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
    __this_10.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
              (__this_10,(MethodInfo_3249900 *)&_Stack_60);
  }
  __this_11.fields._index = (int)in_stack_fffffffffffffee8;
  __this_11.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  __this_11.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
  __this_11.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_11,(MethodInfo_3251CA0 *)&_Stack_80);
  pIVar21 = pIStack_e8;
  if (in_stack_fffffffffffffef0 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto label_04268d6b;
  pIVar5 = (pIStack_e8->_1).declaringType;
  if (pIVar5 == (Il2CppClass *)0x0) goto label_04268d70;
  pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar5,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
  if (pSVar15 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_04268d75;
  pMVar20 = (MethodInfo *)&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_100,
             pSVar15,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  auStack_e0._16_8_ = pSStack_f0;
  auStack_e0._0_8_ = CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
  auStack_e0._8_8_ = auStack_100._8_8_;
  while (__this_12.fields._index = (int)in_stack_fffffffffffffee8,
        __this_12.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20),
        __this_12.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0,
        __this_12.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0,
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_12,(MethodInfo_3251CB0 *)auStack_e0), (char)bVar9 != '\0') {
    CustomLogic_CustomLogicEvaluator__AddCallbacks
              ((CustomLogic_CustomLogicEvaluator_o *)pIVar21,
               (CustomLogic_CustomLogicClassInstance_o *)auStack_e0._16_8_,method_00);
  }
  __this_13.fields._index = (int)in_stack_fffffffffffffee8;
  __this_13.fields._version = (int)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  __this_13.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
  __this_13.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_13,(MethodInfo_3251CA0 *)auStack_e0);
  pIVar5 = pIStack_e8;
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            ((CustomLogic_CustomLogicEvaluator_o *)pIStack_e8,"Init",(System_Object_array *)0x0,pMVar20)
  ;
  pIVar21 = (pIVar5->_1).castClass;
  if (pIVar21 == (Il2CppClass *)0x0) goto label_04268d82;
  instance = (CustomLogic_CustomLogicClassInstance_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar21,"Main",
                        MethodInfo_CustomLogicClassInstance_get_Item);
  CustomLogic_CustomLogicEvaluator__AddCallbacks
            ((CustomLogic_CustomLogicEvaluator_o *)pIVar5,instance,method_01);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            ((CustomLogic_CustomLogicEvaluator_o *)pIVar5,"OnGameStart",(System_Object_array *)0x0,pMVar20);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057adc2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnSecond_d__18);
    g_data_057adc2a = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnSecond_d__18);
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar12[1].klass = 0;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar5);
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this,(System_Collections_IEnumerator_o *)pIVar12,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
    goto label_04268d8c;
  }
  goto label_04268d87;
label_04268cd6:
  il2cpp_runtime_helper_022b2c90();
label_04268cdb:
  il2cpp_runtime_helper_022b2c90();
label_04268ce0:
  il2cpp_runtime_helper_022b2c90();
label_04268ce5:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
  il2cpp_runtime_helper_022fefe0(pIVar12);
label_04268cfa:
  il2cpp_runtime_helper_022b2c90();
label_04268cff:
  il2cpp_runtime_helper_022b2c90();
  pSVar22 = key;
label_04268d04:
  il2cpp_runtime_helper_022b2c90();
label_04268d09:
  il2cpp_runtime_helper_022b2c90();
label_04268d0e:
  il2cpp_runtime_helper_022b2c90();
  key = pSVar22;
label_04268d13:
  il2cpp_runtime_helper_022b2c90();
label_04268d18:
  il2cpp_runtime_helper_022b2c90();
label_04268d1d:
  il2cpp_runtime_helper_022b2c90();
label_04268d22:
  il2cpp_runtime_helper_022b2c90();
label_04268d27:
  lStack_108 = 0;
  il2cpp_runtime_helper_022b2c90();
label_04268d2c:
  il2cpp_runtime_helper_022b2c90();
  unaff_R12 = key;
label_04268d31:
  key = unaff_R12;
  il2cpp_runtime_helper_022b2c90();
label_04268d36:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d40:
  il2cpp_runtime_helper_022b2c90();
label_04268d45:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d4f:
  il2cpp_runtime_helper_022b2c90();
label_04268d54:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d61:
  il2cpp_runtime_helper_022b2c90();
label_04268d66:
  il2cpp_runtime_helper_022b2c90();
label_04268d6b:
  il2cpp_runtime_helper_022fefe0();
label_04268d70:
  il2cpp_runtime_helper_022b2c90();
label_04268d75:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d82:
  il2cpp_runtime_helper_022b2c90();
label_04268d87:
  il2cpp_runtime_helper_022b2c90();
label_04268d8c:
  auVar24 = il2cpp_runtime_helper_022b2c90();
  while( true ) {
    if (auVar24._8_4_ != 1) {
      _Unwind_Resume(auVar24._0_8_);
    }
    plVar16 = (long *)__cxa_begin_catch(auVar24._0_8_);
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pMVar20 = (MethodInfo *)*plVar16;
    cVar8 = il2cpp_runtime_helper_0233e000(uVar17,pMVar20->methodPointer);
    if (cVar8 == '\0') break;
    plVar16 = (long *)*plVar16;
    __cxa_end_catch();
    if (plVar16 != (long *)0x0) {
      pSVar18 = (System_String_o *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
      __this_15 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023445d0(&"Custom logic runtime error: ");
      pSVar18 = System_String__Concat_3ae5ba0((System_String_o *)__this_15,pSVar18,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_15,pSVar18,1,pMVar20);
      return extraout_XMM0_Da_00;
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar24 = il2cpp_runtime_helper_022fefe0(lStack_108);
      uVar17 = auVar24._0_8_;
      __this_14.fields._index = (int)uVar17;
      __this_14.fields._version = (int)((ulong)uVar17 >> 0x20);
      __this_14.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee0;
      __this_14.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffef0;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_14,(MethodInfo_3251B10 *)(auStack_e0 + 0x20));
      auVar24._8_4_ = auVar24._8_4_;
      auVar24._0_8_ = uVar17;
    } while (lStack_108 != 0);
  }
  plVar19 = (long *)__cxa_allocate_exception(8);
  *plVar19 = *plVar16;
  __cxa_throw(plVar19,&PTR_PTR_05215060,0);
}


// CustomLogic.CustomLogicUtils$$BaseAstToInt
// il2cpp: int32_t CustomLogic_CustomLogicUtils__BaseAstToInt (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x4267b60

int32_t CustomLogic_CustomLogicUtils__BaseAstToInt(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar5;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  char cVar7;
  int32_t iVar8;
  int32_t extraout_EAX;
  bool_conflict bVar9;
  int32_t extraout_EAX_00;
  int *piVar10;
  void *pvVar11;
  void *extraout_RAX;
  System_Collections_Generic_Dictionary_TKey__TValue__o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar12;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar14;
  Il2CppObject *pIVar15;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar16;
  CustomLogic_CustomLogicClassInstance_o *instance;
  UnityEngine_Coroutine_o *pUVar17;
  long *plVar18;
  undefined8 uVar19;
  System_String_o *pSVar20;
  CustomLogic_CustomLogicEvaluator_o *__this_15;
  long *plVar21;
  MethodInfo *pMVar22;
  System_Collections_Generic_Dictionary_object__object__o *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_R12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_16;
  undefined1 auVar26 [12];
  undefined8 in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_fffffffffffffed8;
  long lStack_120;
  undefined1 auStack_118 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_108;
  Il2CppClass *pIStack_100;
  undefined1 auStack_f8 [40];
  Il2CppType *pIStack_d0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_c8;
  _union_236529 _Stack_b8;
  Il2CppType *pIStack_b0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_a8;
  _union_233249 _Stack_98;
  Il2CppType *pIStack_90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_88;
  _union_233085 _Stack_78;
  Il2CppType *pIStack_70;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_68;
  Il2CppClass *pIStack_60;
  
  pIVar23 = (Il2CppClass *)ast;
  if (g_data_057adc18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    pIVar23 = (Il2CppClass *)&TypeInfo_CustomLogicUnaryExpressionAst;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc18 = '\x01';
  }
  if (ast == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    return 0;
  }
  pCVar4 = ast->klass;
  bVar1 = (pCVar4->_2).naturalAligment;
  if ((*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) <= bVar1) &&
     (pIVar23 = (Il2CppClass *)(pCVar4->_2).typeHierarchy,
     *(long *)((long)pIVar23 + ((ulong)*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) - 1) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
    pCVar4 = ast[1].klass;
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar8 = System_Convert__ToInt32((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
    return iVar8;
  }
  bVar2 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
  if (bVar1 < bVar2) {
    return 0;
  }
  if ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicUnaryExpressionAst) {
    return 0;
  }
  if ((ast[1].monitor == (void *)0x0) ||
     (pIVar23 = *(Il2CppClass **)((long)ast[1].monitor + 0x18), pIVar23 == (Il2CppClass *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(void **)((long)(pIVar23->_1).image + 0x40) == (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
    pMVar22 = TypeInfo_CustomLogicSymbol;
    piVar10 = (int *)il2cpp_runtime_helper_02305440();
    iVar3 = *piVar10;
    iVar8 = CustomLogic_CustomLogicUtils__BaseAstToInt
                      ((CustomLogic_CustomLogicBaseAst_o *)ast[1].klass,pMVar22);
    if (iVar3 == 0x1e) {
      return iVar8;
    }
    if (iVar3 != 0x1f) {
      return 0;
    }
    return -iVar8;
  }
  pvVar11 = (void *)il2cpp_runtime_helper_022b2fd0();
  pIVar24 = pIVar23;
  if (g_data_057adc17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    pIVar24 = (Il2CppClass *)&TypeInfo_CustomLogicUnaryExpressionAst;
    pvVar11 = (void *)il2cpp_runtime_helper_023445d0();
    g_data_057adc17 = '\x01';
  }
  if (pIVar23 == (Il2CppClass *)0x0) {
label_04267d2c:
    return (int32_t)pvVar11;
  }
  pvVar11 = (pIVar23->_1).image;
  if ((*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) <= *(byte *)((long)pvVar11 + 0x130)) &&
     (pIVar24 = *(Il2CppClass **)((long)pvVar11 + 200),
     *(long *)((long)pIVar24 + ((ulong)*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) - 1) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)) {
    pIVar13 = (Il2CppObject *)(pIVar23->_1).namespaze;
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Convert__ToSingle(pIVar13,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  bVar1 = (TypeInfo_CustomLogicUnaryExpressionAst->_2).naturalAligment;
  pMVar22 = (MethodInfo *)(ulong)bVar1;
  if ((*(byte *)((long)pvVar11 + 0x130) < bVar1) ||
     (pvVar11 = *(void **)((long)pvVar11 + 200),
     *(Il2CppClass **)((long)pvVar11 + (long)pMVar22 * 8 + -8) != TypeInfo_CustomLogicUnaryExpressionAst)) goto label_04267d2c;
  pvVar11 = (pIVar23->_1).byval_arg.data;
  if ((pvVar11 == (void *)0x0) ||
     (pIVar24 = *(Il2CppClass **)((long)pvVar11 + 0x18), pIVar24 == (Il2CppClass *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar22 = TypeInfo_CustomLogicSymbol;
    if (*(void **)((long)(pIVar24->_1).image + 0x40) == (TypeInfo_CustomLogicSymbol->field8_0x40).genericMethod) {
      piVar10 = (int *)il2cpp_runtime_helper_02305440();
      iVar3 = *piVar10;
      CustomLogic_CustomLogicUtils__BaseAstToFloat
                ((CustomLogic_CustomLogicBaseAst_o *)(pIVar23->_1).namespaze,pMVar22);
      if (iVar3 == 0x1e) {
        return (int32_t)extraout_RAX;
      }
      pvVar11 = extraout_RAX;
      if (iVar3 == 0x1f) {
        return (int32_t)extraout_RAX;
      }
      goto label_04267d2c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  method_02 = pMVar22;
  pIStack_60 = pIVar23;
  if (g_data_057adc19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"OnGameStart");
    il2cpp_runtime_helper_023445d0(&"Init");
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057adc19 = '\x01';
  }
  auStack_f8._32_8_ = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_d0 = (Il2CppType *)0x0;
  pSStack_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_b8.genericMethod = (void *)0x0;
  pIStack_b0 = (Il2CppType *)0x0;
  pSStack_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_f8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_f8._8_8_ = (Il2CppType *)0x0;
  auStack_f8._16_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_98.genericMethod = (void *)0x0;
  pIStack_90 = (Il2CppType *)0x0;
  pSStack_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_78.genericMethod = (void *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  pSStack_68 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  CustomLogic_CustomLogicEvaluator__Init((CustomLogic_CustomLogicEvaluator_o *)pIVar24,method_02);
  *(undefined4 *)&(pIVar24->_1).byval_arg.data = 0;
  pIVar23 = (pIVar24->_1).castClass;
  key = unaff_R12;
  pIStack_100 = pIVar24;
  if (pIVar23 == (Il2CppClass *)0x0) goto label_04268d2c;
  key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
        System_Collections_Generic_Dictionary_object__object___get_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,"Main",
                   MethodInfo_CustomLogicClassInstance_get_Item);
  if (pMVar22 == (MethodInfo *)0x0) goto label_04268d31;
  pSVar12 = System_Collections_Generic_Dictionary_object__object___get_Keys
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar22,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
  if (pSVar12 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04268d36;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_118,
             pSVar12,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSStack_c8 = pSStack_108;
  auStack_f8._32_8_ = CONCAT44(auStack_118._4_4_,auStack_118._0_4_);
  pIStack_d0 = (Il2CppType *)auStack_118._8_8_;
  lStack_120 = 0;
  in_stack_fffffffffffffed8 = extraout_RDX;
  while (__this_00.fields._index = (int)in_stack_fffffffffffffed0,
        __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20),
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8,
        __this_00.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8,
        bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_00,(MethodInfo_3251B20 *)(auStack_f8 + 0x20)), pSVar6 = pSStack_c8,
        (char)bVar9 != '\0') {
    pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pMVar22,
                         (Il2CppObject *)pSStack_c8,MethodInfo_BaseSetting_get_Item);
    if (pIVar13 != (Il2CppObject *)0x0) {
      pIVar23 = pIVar13->klass;
      bVar1 = (pIVar23->_2).naturalAligment;
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      pSVar25 = key;
      if ((bVar1 < bVar2) || ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
        bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
            bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
            if ((bVar2 <= bVar1) && ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
              if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d18;
              pSVar5 = (key->fields)._entries;
              auStack_118[0] = *(undefined1 *)((long)&pIVar13[1].klass + 1);
              pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_118);
              if (pSVar5 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_04268d1d;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
                         (Il2CppObject *)pSVar6,pIVar13,MethodInfo_Void_set_Item);
            }
          }
          else {
            if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d27;
            pSVar5 = (key->fields)._entries;
            auStack_118._0_4_ = *(undefined4 *)((long)&pIVar13[1].klass + 4);
            pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_118);
            if (pSVar5 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_04268d0e;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
                       (Il2CppObject *)pSVar6,pIVar13,MethodInfo_Void_set_Item);
          }
        }
        else {
          if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d22;
          pSVar5 = (key->fields)._entries;
          if (pSVar5 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04268d13;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar6,
                     pIVar13[1].monitor,MethodInfo_Void_set_Item);
        }
      }
      else {
        if (key == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268d09;
        pSVar5 = (key->fields)._entries;
        auStack_118._0_4_ = *(undefined4 *)((long)&pIVar13[1].klass + 4);
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_118);
        pSVar25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        if (pSVar5 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_04268d04;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar6,
                   pIVar13,MethodInfo_Void_set_Item);
      }
    }
  }
  __this_01.fields._index = (int)in_stack_fffffffffffffed0;
  __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_01.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_01,(MethodInfo_3251B10 *)(auStack_f8 + 0x20));
  pIVar23 = (pIStack_100->_1).declaringType;
  if (pIVar23 == (Il2CppClass *)0x0) goto label_04268d40;
  pSVar12 = System_Collections_Generic_Dictionary_object__object___get_Keys
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
  if (pSVar12 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04268d45;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_118,
             pSVar12,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSStack_a8 = pSStack_108;
  _Stack_b8._4_4_ = auStack_118._4_4_;
  _Stack_b8._0_4_ = auStack_118._0_4_;
  pIStack_b0 = (Il2CppType *)auStack_118._8_8_;
  lStack_120 = 0;
  __this_16 = extraout_RDX;
  while( true ) {
    pIVar13 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
    __this_02.fields._index = (int)in_stack_fffffffffffffed0;
    __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
    __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
    bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_02,(MethodInfo_3251B20 *)&_Stack_b8);
    pSVar6 = pSStack_a8;
    if ((char)bVar9 == '\0') break;
    if ((__this_16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_16,(Il2CppObject *)pSStack_a8,MethodInfo_Boolean_ContainsKey), (char)bVar9 != '\0')) {
      pIVar23 = (pIStack_100->_1).declaringType;
      if (pIVar23 == (Il2CppClass *)0x0) goto label_04268cdb;
      pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,
                           (Il2CppObject *)pSVar6,MethodInfo_CustomLogicClassInstance_get_Item);
      pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_16,(Il2CppObject *)pSVar6,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
      if (pSVar14 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04268ce5;
      pSVar12 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar14,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
      if (pSVar12 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04268ce0;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_118
                 ,pSVar12,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pSStack_c8 = pSStack_108;
      auStack_f8._32_8_ = CONCAT44(auStack_118._4_4_,auStack_118._0_4_);
      pIStack_d0 = (Il2CppType *)auStack_118._8_8_;
      while (__this_03.fields._index = (int)in_stack_fffffffffffffed0,
            __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20),
            __this_03.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8,
            __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8,
            bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_03,(MethodInfo_3251B20 *)(auStack_f8 + 0x20)), key = pSStack_c8,
            (char)bVar9 != '\0') {
        pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_16,(Il2CppObject *)pSVar6,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
        if (pSVar14 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04268cd6;
        }
        pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar14,(Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
        if (pIVar15 != (Il2CppObject *)0x0) {
          pIVar23 = pIVar15->klass;
          bVar1 = (pIVar23->_2).naturalAligment;
          bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) {
            bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar1 < bVar2) || ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
              bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
                bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
                if ((bVar2 <= bVar1) && ((pIVar23->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
                  if (pIVar13 == (Il2CppObject *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  pSVar14 = pIVar13[1].monitor;
                  auStack_118[0] = *(undefined1 *)((long)&pIVar15[1].klass + 1);
                  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_118);
                  if (pSVar14 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04268cdb;
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar14,(Il2CppObject *)key,pIVar15,MethodInfo_Void_set_Item);
                }
              }
              else {
                if (pIVar13 == (Il2CppObject *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04268cdb;
                }
                pSVar14 = pIVar13[1].monitor;
                auStack_118._0_4_ = *(undefined4 *)((long)&pIVar15[1].klass + 4);
                pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_118);
                if (pSVar14 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04268cdb;
                }
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar14,(Il2CppObject *)key,pIVar15,MethodInfo_Void_set_Item);
              }
            }
            else {
              if (pIVar13 == (Il2CppObject *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04268cdb;
              }
              if (pIVar13[1].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04268cdb;
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pIVar13[1].monitor,(Il2CppObject *)key,pIVar15[1].monitor,MethodInfo_Void_set_Item);
            }
          }
          else {
            if (pIVar13 == (Il2CppObject *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04268cdb;
            }
            pSVar14 = pIVar13[1].monitor;
            auStack_118._0_4_ = *(undefined4 *)((long)&pIVar15[1].klass + 4);
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_118);
            if (pSVar14 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04268cdb;
            }
            __this_16 = in_stack_fffffffffffffed8;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar14,(Il2CppObject *)key,pIVar15,MethodInfo_Void_set_Item);
            in_stack_fffffffffffffed8 = __this_16;
          }
        }
      }
      key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      __this_04.fields._index = (int)in_stack_fffffffffffffed0;
      __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
      __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251B10 *)(auStack_f8 + 0x20));
    }
  }
  __this_05.fields._index = (int)in_stack_fffffffffffffed0;
  __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_05.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&_Stack_b8);
  pIVar24 = pIStack_100;
  pIVar23 = (pIStack_100->_1).castClass;
  if (pIVar23 == (Il2CppClass *)0x0) goto label_04268d4f;
  pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
  if (pSVar16 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_04268d54;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_118,
             pSVar16,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  auStack_f8._16_8_ = pSStack_108;
  auStack_f8._0_8_ = CONCAT44(auStack_118._4_4_,auStack_118._0_4_);
  auStack_f8._8_8_ = auStack_118._8_8_;
  pIVar13 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
  key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  while (__this_06.fields._index = (int)in_stack_fffffffffffffed0,
        __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20),
        __this_06.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8,
        __this_06.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8,
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_06,(MethodInfo_3251CB0 *)auStack_f8), uVar19 = auStack_f8._16_8_,
        (char)bVar9 != '\0') {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              ((CustomLogic_CustomLogicEvaluator_o *)pIVar24,
               (CustomLogic_CustomLogicClassInstance_o *)auStack_f8._16_8_,"Init",
               (System_Object_array *)0x0,0,in_R9);
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar19 ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cd6;
    *(undefined1 *)
     ((long)&((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)(uVar19 + 0x10))->_buckets + 1) =
         1;
  }
  __this_07.fields._index = (int)in_stack_fffffffffffffed0;
  __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_07.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_07.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_07,(MethodInfo_3251CA0 *)auStack_f8);
  pIVar23 = (pIStack_100->_1).parent;
  if (pIVar23 == (Il2CppClass *)0x0) goto label_04268d61;
  pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
  if (pSVar16 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_04268d66;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_118,
             pSVar16,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  pIVar23 = pIStack_100;
  pSStack_88 = pSStack_108;
  _Stack_98._4_4_ = auStack_118._4_4_;
  _Stack_98._0_4_ = auStack_118._0_4_;
  pIStack_90 = (Il2CppType *)auStack_118._8_8_;
  in_stack_fffffffffffffed8 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  key = (System_Collections_Generic_Dictionary_TKey__TValue__o *)&MethodInfo_Boolean_MoveNext;
  while (__this_08.fields._index = (int)in_stack_fffffffffffffed0,
        __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20),
        __this_08.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8,
        __this_08.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8,
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_08,(MethodInfo_3251CB0 *)&_Stack_98), (char)bVar9 != '\0') {
    if (pSStack_88 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04268cff;
    pSVar16 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values(pSStack_88,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
    if (pSVar16 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
    goto label_04268cfa;
    System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_118
               ,pSVar16,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    pSStack_68 = pSStack_108;
    _Stack_78._4_4_ = auStack_118._4_4_;
    _Stack_78._0_4_ = auStack_118._0_4_;
    pIStack_70 = (Il2CppType *)auStack_118._8_8_;
    while (__this_09.fields._index = (int)in_stack_fffffffffffffed0,
          __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20),
          __this_09.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8,
          __this_09.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8,
          bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                            (__this_09,(MethodInfo_3249910 *)&_Stack_78), pSVar6 = pSStack_68,
          (char)bVar9 != '\0') {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                ((CustomLogic_CustomLogicEvaluator_o *)pIVar23,
                 (CustomLogic_CustomLogicClassInstance_o *)pSStack_68,"Init",(System_Object_array *)0x0,
                 0,in_R9);
      if (pSVar6 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pIVar13 = (Il2CppObject *)0x0;
        goto label_04268cd6;
      }
      *(undefined1 *)((long)&(pSVar6->fields)._buckets + 1) = 1;
    }
    __this_10.fields._index = (int)in_stack_fffffffffffffed0;
    __this_10.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
    __this_10.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
    __this_10.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
              (__this_10,(MethodInfo_3249900 *)&_Stack_78);
  }
  __this_11.fields._index = (int)in_stack_fffffffffffffed0;
  __this_11.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_11.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_11.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_11,(MethodInfo_3251CA0 *)&_Stack_98);
  pIVar23 = pIStack_100;
  if (in_stack_fffffffffffffed8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto label_04268d6b;
  pIVar24 = (pIStack_100->_1).declaringType;
  if (pIVar24 == (Il2CppClass *)0x0) goto label_04268d70;
  pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Values
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar24,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
  if (pSVar16 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_04268d75;
  pMVar22 = (MethodInfo *)&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_118,
             pSVar16,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  auStack_f8._16_8_ = pSStack_108;
  auStack_f8._0_8_ = CONCAT44(auStack_118._4_4_,auStack_118._0_4_);
  auStack_f8._8_8_ = auStack_118._8_8_;
  while (__this_12.fields._index = (int)in_stack_fffffffffffffed0,
        __this_12.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20),
        __this_12.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8,
        __this_12.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8,
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_12,(MethodInfo_3251CB0 *)auStack_f8), (char)bVar9 != '\0') {
    CustomLogic_CustomLogicEvaluator__AddCallbacks
              ((CustomLogic_CustomLogicEvaluator_o *)pIVar23,
               (CustomLogic_CustomLogicClassInstance_o *)auStack_f8._16_8_,method_00);
  }
  __this_13.fields._index = (int)in_stack_fffffffffffffed0;
  __this_13.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_13.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_13.fields._currentValue = (Il2CppObject *)in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_13,(MethodInfo_3251CA0 *)auStack_f8);
  pIVar24 = pIStack_100;
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            ((CustomLogic_CustomLogicEvaluator_o *)pIStack_100,"Init",(System_Object_array *)0x0,pMVar22
            );
  pIVar23 = (pIVar24->_1).castClass;
  if (pIVar23 == (Il2CppClass *)0x0) goto label_04268d82;
  instance = (CustomLogic_CustomLogicClassInstance_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,"Main",
                        MethodInfo_CustomLogicClassInstance_get_Item);
  CustomLogic_CustomLogicEvaluator__AddCallbacks
            ((CustomLogic_CustomLogicEvaluator_o *)pIVar24,instance,method_01);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            ((CustomLogic_CustomLogicEvaluator_o *)pIVar24,"OnGameStart",(System_Object_array *)0x0,pMVar22);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057adc2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnSecond_d__18);
    g_data_057adc2a = '\x01';
  }
  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnSecond_d__18);
  System_Object___ctor(pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar13[1].klass = 0;
  if (pIVar13 != (Il2CppObject *)0x0) {
    pIVar13[2].klass = pIVar24;
    il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar24);
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (__this,(System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
      return (int32_t)pUVar17;
    }
    goto label_04268d8c;
  }
  goto label_04268d87;
label_04268cd6:
  il2cpp_runtime_helper_022b2c90();
label_04268cdb:
  il2cpp_runtime_helper_022b2c90();
label_04268ce0:
  il2cpp_runtime_helper_022b2c90();
label_04268ce5:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
  il2cpp_runtime_helper_022fefe0(pIVar13);
label_04268cfa:
  il2cpp_runtime_helper_022b2c90();
label_04268cff:
  il2cpp_runtime_helper_022b2c90();
  pSVar25 = key;
label_04268d04:
  il2cpp_runtime_helper_022b2c90();
label_04268d09:
  il2cpp_runtime_helper_022b2c90();
label_04268d0e:
  il2cpp_runtime_helper_022b2c90();
  key = pSVar25;
label_04268d13:
  il2cpp_runtime_helper_022b2c90();
label_04268d18:
  il2cpp_runtime_helper_022b2c90();
label_04268d1d:
  il2cpp_runtime_helper_022b2c90();
label_04268d22:
  il2cpp_runtime_helper_022b2c90();
label_04268d27:
  lStack_120 = 0;
  il2cpp_runtime_helper_022b2c90();
label_04268d2c:
  il2cpp_runtime_helper_022b2c90();
  unaff_R12 = key;
label_04268d31:
  key = unaff_R12;
  il2cpp_runtime_helper_022b2c90();
label_04268d36:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d40:
  il2cpp_runtime_helper_022b2c90();
label_04268d45:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
label_04268d4f:
  il2cpp_runtime_helper_022b2c90();
label_04268d54:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d61:
  il2cpp_runtime_helper_022b2c90();
label_04268d66:
  il2cpp_runtime_helper_022b2c90();
label_04268d6b:
  il2cpp_runtime_helper_022fefe0();
label_04268d70:
  il2cpp_runtime_helper_022b2c90();
label_04268d75:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(key);
label_04268d82:
  il2cpp_runtime_helper_022b2c90();
label_04268d87:
  il2cpp_runtime_helper_022b2c90();
label_04268d8c:
  auVar26 = il2cpp_runtime_helper_022b2c90();
  while( true ) {
    if (auVar26._8_4_ != 1) {
      _Unwind_Resume(auVar26._0_8_);
    }
    plVar18 = (long *)__cxa_begin_catch(auVar26._0_8_);
    uVar19 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pMVar22 = (MethodInfo *)*plVar18;
    cVar7 = il2cpp_runtime_helper_0233e000(uVar19,pMVar22->methodPointer);
    if (cVar7 == '\0') break;
    plVar18 = (long *)*plVar18;
    __cxa_end_catch();
    if (plVar18 != (long *)0x0) {
      pSVar20 = (System_String_o *)(**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
      __this_15 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023445d0(&"Custom logic runtime error: ");
      pSVar20 = System_String__Concat_3ae5ba0((System_String_o *)__this_15,pSVar20,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_15,pSVar20,1,pMVar22);
      return extraout_EAX_00;
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar26 = il2cpp_runtime_helper_022fefe0(lStack_120);
      uVar19 = auVar26._0_8_;
      __this_14.fields._index = (int)uVar19;
      __this_14.fields._version = (int)((ulong)uVar19 >> 0x20);
      __this_14.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
      __this_14.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_14,(MethodInfo_3251B10 *)(auStack_f8 + 0x20));
      auVar26._8_4_ = auVar26._8_4_;
      auVar26._0_8_ = uVar19;
    } while (lStack_120 != 0);
  }
  plVar21 = (long *)__cxa_allocate_exception(8);
  *plVar21 = *plVar18;
  __cxa_throw(plVar21,&PTR_PTR_05215060,0);
}


