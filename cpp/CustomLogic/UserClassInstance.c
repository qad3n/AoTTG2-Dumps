// Type: CustomLogic.UserClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/UserClassInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.UserClassInstance$$.ctor
// il2cpp: void CustomLogic_UserClassInstance___ctor (CustomLogic_UserClassInstance_o* __this, System_String_o* className, const MethodInfo* method);
// 0x426fbc0

void CustomLogic_UserClassInstance___ctor
               (CustomLogic_UserClassInstance_o *__this,System_String_o *className,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  System_Collections_Generic_Stack_T__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  char cVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  System_Object_array *parameterValues;
  CustomLogic_CustomLogicClassInstance_c *pCVar7;
  int32_t *piVar8;
  System_Object_array *pSVar9;
  Il2CppClass *classInstance;
  uint *puVar10;
  char *pcVar11;
  undefined1 *puVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  Il2CppObject *right;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  Il2CppClass *method_00;
  CustomLogic_CustomLogicBaseExpressionAst_o *expression;
  Il2CppObject *pIVar13;
  undefined8 uVar14;
  System_String_o *pSVar15;
  Il2CppClass *pIVar16;
  CustomLogic_UserMethod_o *userMethod;
  long *plVar17;
  MethodInfo *pMVar18;
  CustomLogic_CustomLogicEvaluator_o *__this_04;
  MethodInfo_3A0C860 *method_01;
  System_String_o *className_00;
  CustomLogic_CustomLogicError_o *__this_05;
  long lVar19;
  long *plVar20;
  long *in_RCX;
  System_Object_array *__this_06;
  System_Object_array *pSVar21;
  Il2CppClass *classInstance_00;
  System_Object_array *pSVar22;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_Object_array *unaff_R12;
  System_Nullable_CustomLogicSourceType__Fields ns;
  undefined1 auVar23 [12];
  System_Object_array *pSStack_90;
  Il2CppClass *pIStack_88;
  System_String_o *pSStack_80;
  undefined1 auStack_78 [40];
  System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *pSStack_50;
  System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *pSStack_48;
  
  if (g_data_057adc59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"Type");
    g_data_057adc59 = '\x01';
  }
  CustomLogic_CustomLogicClassInstance___ctor
            ((CustomLogic_CustomLogicClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._className = className;
  classInstance_00 = (Il2CppClass *)className;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._className);
  pSVar21 = (System_Object_array *)(__this->fields).Variables;
  if (pSVar21 != (System_Object_array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21,"Type",
               (Il2CppObject *)className,MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_48 = (System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *)__this;
  if (g_data_057adc39 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Free);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_New);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ArrayPool_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBaseExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBinopExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicFieldExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMethodCallExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNotExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnaryExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVariableExpressionAst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicBaseAst_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UserMethod);
    il2cpp_runtime_helper_023445d0(&"self");
    g_data_057adc39 = '\x01';
  }
  auStack_78._24_8_ = (System_Collections_Generic_List_object__o *)0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *)0x0;
  classInstance = classInstance_00;
  pSVar9 = pSVar21;
  if (in_RCX == (long *)0x0) goto label_04270a1b;
  *(undefined4 *)(pSVar21->m_Items + 0x13) = *(undefined4 *)((long)in_RCX + 0x14);
  pSVar22 = __this_06;
  parameterValues = pSVar21;
  plVar17 = (long *)__this;
  pIVar16 = classInstance_00;
  unaff_R12 = __this_06;
  pIStack_88 = classInstance_00;
  switch((int)in_RCX[2]) {
  case 4:
    if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicMethodCallExpressionAst + 0x130)) ||
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicMethodCallExpressionAst + 0x130) * 8) != TypeInfo_CustomLogicMethodCallExpressionAst)
       ) goto label_04270a38;
    pIVar16 = (Il2CppClass *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,
                         (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                         (System_Collections_Generic_Dictionary_string__object__o *)__this_06,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[5],in_R8);
    if (pIVar16 != (Il2CppClass *)0x0) {
      pCVar7 = (pIVar16->_1).image;
      bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
      if ((bVar1 <= (pCVar7->_2).naturalAligment) &&
         ((pCVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicClassInstance)) goto label_0426feb3;
      goto label_04270a8c;
    }
label_0426feb3:
    if (in_RCX[4] != 0) {
      uVar2 = *(uint *)(in_RCX[4] + 0x18);
      __this = (CustomLogic_UserClassInstance_o *)(ulong)uVar2;
      if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      parameterValues = Unity_VisualScripting_ArrayPool_object___New(uVar2,MethodInfo_Object_New);
      pSVar22 = (System_Object_array *)in_RCX[4];
      classInstance = pIVar16;
      if (pSVar22 != (System_Object_array *)0x0) {
        if (parameterValues == (System_Object_array *)0x0) {
          pSStack_90 = pSVar21;
          if (0 < *(int *)&pSVar22->max_length) goto label_04270b2e;
label_042706c0:
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,
                     (CustomLogic_CustomLogicClassInstance_o *)pIVar16,(System_String_o *)in_RCX[3],
                     parameterValues,*(int32_t *)(pSVar21->m_Items + 0x13),in_R9);
          if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Unity_VisualScripting_ArrayPool_object___Free(parameterValues,MethodInfo_Void_Free);
          return;
        }
        classInstance = (Il2CppClass *)parameterValues->m_Items;
        __this = (CustomLogic_UserClassInstance_o *)0x0;
        do {
          if ((long)*(int *)&pSVar22->max_length <= (long)__this) goto label_042706c0;
          expression = (CustomLogic_CustomLogicBaseExpressionAst_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar22,(int32_t)__this,
                                  MethodInfo_CustomLogicBaseAst_get_Item);
          if (expression != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
            if ((expression->klass->_2).naturalAligment < bVar1) goto label_04270b87;
            if ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicBaseExpressionAst) goto label_04270b87;
          }
          pCVar7 = (CustomLogic_CustomLogicClassInstance_c *)
                   CustomLogic_CustomLogicEvaluator__EvaluateExpression
                             ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,
                              (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                              (System_Collections_Generic_Dictionary_string__object__o *)__this_06,expression,
                              in_R8);
          if ((pCVar7 != (CustomLogic_CustomLogicClassInstance_c *)0x0) &&
             (lVar19 = il2cpp_runtime_helper_023051f0(pCVar7), lVar19 == 0)) goto label_04270a0c;
          if ((System_Object_array *)(ulong)(uint)parameterValues->max_length <= __this) goto label_042709f8;
          (classInstance->_1).image = pCVar7;
          il2cpp_runtime_helper_022b4080(classInstance,pCVar7);
          __this = (CustomLogic_UserClassInstance_o *)
                   ((long)&(((System_Object_array *)__this)->obj).klass + 1);
          pSVar22 = (System_Object_array *)in_RCX[4];
          classInstance = (Il2CppClass *)&(classInstance->_1).gc_desc;
          pSVar9 = parameterValues;
        } while (pSVar22 != (System_Object_array *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
      goto switchD_0426fe2e_caseD_8;
    }
    goto label_04270abf;
  case 5:
    method_00 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_CustomLogicClassInstantiateExpressionAst + 0x130);
    if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicClassInstantiateExpressionAst + 0x130)) ||
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (long)method_00 * 8) != TypeInfo_CustomLogicClassInstantiateExpressionAst)) goto label_04270a58;
    if (in_RCX[4] == 0) goto label_04270aa7;
    uVar2 = *(uint *)(in_RCX[4] + 0x18);
    __this = (CustomLogic_UserClassInstance_o *)(ulong)uVar2;
    if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = Unity_VisualScripting_ArrayPool_object___New(uVar2,MethodInfo_Object_New);
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)in_RCX[4];
    pSVar22 = __this_06;
    if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0427037d:
      il2cpp_runtime_helper_022b2c90();
      pSStack_90 = pSVar21;
      goto switchD_0426fe2e_caseD_9;
    }
    if (pSVar9 != (System_Object_array *)0x0) {
      parameterValues = (System_Object_array *)pSVar9->m_Items;
      __this = (CustomLogic_UserClassInstance_o *)0x0;
      do {
        if ((long)*(int *)&(__this_03->fields)._entries <= (long)__this) goto label_04270600;
        method_00 = (Il2CppClass *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_03,(int32_t)__this,
                               MethodInfo_CustomLogicBaseAst_get_Item);
        if (method_00 != (Il2CppClass *)0x0) {
          pvVar3 = (method_00->_1).image;
          bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
          if ((*(byte *)((long)pvVar3 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicBaseExpressionAst))
          goto label_04270c98;
        }
        classInstance =
             (Il2CppClass *)
             CustomLogic_CustomLogicEvaluator__EvaluateExpression
                       ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,
                        (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                        (System_Collections_Generic_Dictionary_string__object__o *)__this_06,
                        (CustomLogic_CustomLogicBaseExpressionAst_o *)method_00,in_R8);
        if ((classInstance != (Il2CppClass *)0x0) && (lVar19 = il2cpp_runtime_helper_023051f0(classInstance), lVar19 == 0)
           ) goto label_042709fd;
        if ((System_Object_array *)(ulong)(uint)pSVar9->max_length <= __this) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_042709f8;
        }
        (parameterValues->obj).klass = classInstance;
        il2cpp_runtime_helper_022b4080(parameterValues);
        __this = (CustomLogic_UserClassInstance_o *)((long)&(((System_Object_array *)__this)->obj).klass + 1);
        __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)in_RCX[4];
        parameterValues = (System_Object_array *)&(parameterValues->obj).monitor;
        pSVar22 = pSVar9;
      } while (__this_03 != (System_Collections_Generic_Dictionary_object__object__o *)0x0);
      goto label_0427037d;
    }
    pSStack_90 = pSVar21;
    if (*(int *)&(__this_03->fields)._entries < 1) {
label_04270600:
      __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)in_RCX[3];
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType
                        ((System_String_o *)__this_03,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
label_04270663:
        if (classInstance_00 != (Il2CppClass *)0x0) {
          CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,(System_String_o *)in_RCX[3],pSVar9,1,
                     (System_Nullable_CustomLogicSourceType__o)
                     *(System_Nullable_CustomLogicSourceType__Fields *)
                      ((long)&(classInstance_00->_1).byval_arg.data + 4),in_R9);
          if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Unity_VisualScripting_ArrayPool_object___Free(pSVar9,MethodInfo_Void_Free);
          return;
        }
        goto label_04270ada;
      }
      pSStack_90 = pSVar21;
      if (pSVar21->m_Items[4] == (Il2CppObject *)0x0) goto label_04270ae8;
      __this_03 = pSVar21->m_Items[4][1].monitor;
      if (__this_03 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_03,(Il2CppObject *)in_RCX[3],MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 == '\0') {
          if (__this_06 == (System_Object_array *)0x0) goto label_04270c4f;
          bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                             (Il2CppObject *)in_RCX[3],MethodInfo_Boolean_ContainsKey);
          if (((char)bVar5 != '\0') &&
             (pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                                   (Il2CppObject *)in_RCX[3],MethodInfo_Object_get_Item), pIVar13 != (Il2CppObject *)0x0)) {
            pIVar16 = pIVar13->klass;
            bVar1 = (TypeInfo_CLMethodBinding->_2).naturalAligment;
            method_00 = TypeInfo_CLMethodBinding;
            if ((bVar1 <= (pIVar16->_2).naturalAligment) &&
               ((pIVar16->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CLMethodBinding)) {
              (*pIVar16->vtable[4].methodPtr)(pIVar13,classInstance_00,pSVar9,pIVar16->vtable[4].method);
              if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              Unity_VisualScripting_ArrayPool_object___Free(pSVar9,MethodInfo_Void_Free);
              return;
            }
          }
          userMethod = (CustomLogic_UserMethod_o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                                  (Il2CppObject *)in_RCX[3],MethodInfo_Object_get_Item);
          if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
            if ((userMethod->klass->_2).naturalAligment < *(byte *)(TypeInfo_UserMethod + 0x130)) goto label_04270c3e;
            method_00 = (Il2CppClass *)(userMethod->klass->_2).typeHierarchy;
            if (*(long *)((long)method_00 + (ulong)*(byte *)(TypeInfo_UserMethod + 0x130) * 8 + -8) != TypeInfo_UserMethod)
            goto label_04270c3e;
          }
          CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,userMethod,pSVar9,(MethodInfo *)method_00);
          if (*(int *)(TypeInfo_ArrayPool_object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Unity_VisualScripting_ArrayPool_object___Free(pSVar9,MethodInfo_Void_Free);
          return;
        }
        goto label_04270663;
      }
      goto label_04270aed;
    }
    goto label_04270af2;
  case 6:
    if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicFieldExpressionAst + 0x130)) ||
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicFieldExpressionAst + 0x130) * 8) != TypeInfo_CustomLogicFieldExpressionAst)
       ) goto label_04270a2c;
    pIVar16 = (Il2CppClass *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,
                         (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                         (System_Collections_Generic_Dictionary_string__object__o *)__this_06,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[4],in_R8);
    if (pIVar16 == (Il2CppClass *)0x0) goto label_04270ac4;
    pvVar3 = (pIVar16->_1).image;
    bVar1 = (TypeInfo_CustomLogicClassInstance->_2).naturalAligment;
    if ((*(byte *)((long)pvVar3 + 0x130) < bVar1) ||
       (*(Il2CppClass **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicClassInstance))
    goto label_04270a84;
    pIVar13 = CustomLogic_CustomLogicClassInstance__GetVariable
                        ((CustomLogic_CustomLogicClassInstance_o *)pIVar16,(System_String_o *)in_RCX[3],
                         (MethodInfo *)0x0);
    if (pIVar13 == (Il2CppObject *)0x0) {
      return;
    }
    bVar1 = (TypeInfo_CLPropertyBinding->_2).naturalAligment;
    if ((pIVar13->klass->_2).naturalAligment < bVar1) {
      return;
    }
    if ((pIVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CLPropertyBinding) {
      return;
    }
    if (pIVar13 != (Il2CppObject *)0x0) {
      (*pIVar13->klass->vtable[5].methodPtr)(pIVar13,pIVar16,pIVar13->klass->vtable[5].method);
      return;
    }
    goto label_04270cb6;
  case 7:
    if ((*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) <= *(byte *)(*in_RCX + 0x130)) &&
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicPrimitiveExpressionAst + 0x130) * 8) == TypeInfo_CustomLogicPrimitiveExpressionAst)
       ) {
      return;
    }
    goto label_04270a40;
  case 8:
switchD_0426fe2e_caseD_8:
    plVar17 = &TypeInfo_CustomLogicUnaryExpressionAst;
    __this = (CustomLogic_UserClassInstance_o *)plVar17;
    if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicUnaryExpressionAst + 0x130)) ||
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicUnaryExpressionAst + 0x130) * 8) != TypeInfo_CustomLogicUnaryExpressionAst)
       ) goto label_04270a20;
    if (in_RCX[4] == 0) goto label_04270a94;
    plVar20 = *(long **)(in_RCX[4] + 0x18);
    if (plVar20 == (long *)0x0) goto label_04270a9d;
    if (*(long *)(*plVar20 + 0x40) == *(long *)(TypeInfo_CustomLogicSymbol + 0x40)) {
      piVar8 = (int32_t *)il2cpp_runtime_helper_02305440();
      pIVar16 = classInstance;
      if ((*(byte *)(TypeInfo_CustomLogicUnaryExpressionAst + 0x130) <= *(byte *)(*in_RCX + 0x130)) &&
         (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicUnaryExpressionAst + 0x130) * 8) ==
          TypeInfo_CustomLogicUnaryExpressionAst)) {
        iVar6 = *piVar8;
        pMVar18 = (MethodInfo *)in_RCX[3];
        pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            ((CustomLogic_CustomLogicEvaluator_o *)pSVar9,
                             (CustomLogic_CustomLogicClassInstance_o *)classInstance,
                             (System_Collections_Generic_Dictionary_string__object__o *)__this_06,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)pMVar18,in_R8);
        CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression
                  ((CustomLogic_CustomLogicEvaluator_o *)pSVar9,iVar6,pIVar13,pMVar18);
        return;
      }
      goto label_04270a78;
    }
    goto label_04270aa2;
  case 9:
switchD_0426fe2e_caseD_9:
    if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicBinopExpressionAst + 0x130)) ||
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicBinopExpressionAst + 0x130) * 8) != TypeInfo_CustomLogicBinopExpressionAst)
       ) goto label_04270a60;
    if (in_RCX[5] == 0) goto label_04270aac;
    plVar17 = *(long **)(in_RCX[5] + 0x18);
    if (plVar17 == (long *)0x0) goto label_04270ab5;
    if (*(long *)(*plVar17 + 0x40) != *(long *)(TypeInfo_CustomLogicSymbol + 0x40)) goto label_04270aba;
    puVar10 = (uint *)il2cpp_runtime_helper_02305440();
    uVar2 = *puVar10;
    __this = (CustomLogic_UserClassInstance_o *)(ulong)uVar2;
    if (uVar2 == 0x16) {
      pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,
                           (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                           (System_Collections_Generic_Dictionary_string__object__o *)pSVar22,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[3],in_R8);
      if (pIVar13 == (Il2CppObject *)0x0) goto label_04270b9c;
      __this = (CustomLogic_UserClassInstance_o *)&g_data_057b9b70;
      if ((pIVar13->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_04270ba1;
      pcVar11 = (char *)il2cpp_runtime_helper_02305440(pIVar13);
      if (*pcVar11 != '\0') {
        pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,
                             (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                             (System_Collections_Generic_Dictionary_string__object__o *)pSVar22,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[4],in_R8);
        if (pIVar13 == (Il2CppObject *)0x0) goto label_04270c5d;
        if ((pIVar13->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_04270c62;
        puVar12 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar13);
        auStack_78[0] = *puVar12;
        il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_78);
        return;
      }
      auStack_78._0_8_ = auStack_78._0_8_ & 0xffffffffffffff00;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_78);
      return;
    }
    if (uVar2 != 0x17) {
      pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,
                           (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                           (System_Collections_Generic_Dictionary_string__object__o *)pSVar22,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[3],in_R8);
      right = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,
                         (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                         (System_Collections_Generic_Dictionary_string__object__o *)pSVar22,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[4],in_R8);
      CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
                ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,uVar2,pIVar13,right,in_R8);
      return;
    }
    pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,
                         (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                         (System_Collections_Generic_Dictionary_string__object__o *)pSVar22,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[3],in_R8);
    if (pIVar13 == (Il2CppObject *)0x0) goto label_04270b8f;
    __this = (CustomLogic_UserClassInstance_o *)&g_data_057b9b70;
    if ((pIVar13->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_04270b94;
    pcVar11 = (char *)il2cpp_runtime_helper_02305440(pIVar13);
    if (*pcVar11 != '\0') {
      auStack_78[0] = 1;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_78);
      return;
    }
    pIVar13 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        ((CustomLogic_CustomLogicEvaluator_o *)parameterValues,
                         (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                         (System_Collections_Generic_Dictionary_string__object__o *)pSVar22,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[4],in_R8);
    if (pIVar13 == (Il2CppObject *)0x0) goto label_04270ca9;
    if ((pIVar13->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar12 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar13);
      auStack_78[0] = *puVar12;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_78);
      return;
    }
    goto label_04270cae;
  case 10:
    if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicNotExpressionAst + 0x130)) ||
       (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicNotExpressionAst + 0x130) * 8) != TypeInfo_CustomLogicNotExpressionAst)
       ) goto label_04270a6c;
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          ((CustomLogic_CustomLogicEvaluator_o *)pSVar21,
                           (CustomLogic_CustomLogicClassInstance_o *)classInstance_00,
                           (System_Collections_Generic_Dictionary_string__object__o *)__this_06,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)in_RCX[3],in_R8);
    if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04270acd;
    __this = (CustomLogic_UserClassInstance_o *)&g_data_057b9b70;
    if ((__this_03->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      puVar12 = (undefined1 *)il2cpp_runtime_helper_02305440(__this_03);
      auStack_78._0_8_ = CONCAT71(auStack_78._1_7_,*puVar12) ^ 1;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,auStack_78);
      return;
    }
    goto label_04270ad2;
  case 0xb:
    break;
  default:
    goto label_04271484;
  }
  if ((*(byte *)(*in_RCX + 0x130) < *(byte *)(TypeInfo_CustomLogicVariableExpressionAst + 0x130)) ||
     (*(long *)(*(long *)(*in_RCX + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicVariableExpressionAst + 0x130) * 8) != TypeInfo_CustomLogicVariableExpressionAst))
  goto label_04270a4c;
  __this = (CustomLogic_UserClassInstance_o *)in_RCX[3];
  bVar5 = System_String__op_Equality((System_String_o *)__this,"self",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pSVar22 = (System_Object_array *)pSVar21->m_Items[5];
  __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar22 == (System_Object_array *)0x0) goto label_04270adf;
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar22,(Il2CppObject *)__this
                     ,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 == '\0') {
    pSVar22 = (System_Object_array *)pSVar21->m_Items[7];
    if (pSVar22 == (System_Object_array *)0x0) goto label_04270c46;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar22,
                       (Il2CppObject *)__this,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 != '\0') goto label_04270538;
    if (__this_06 != (System_Object_array *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,(Il2CppObject *)__this,
                 MethodInfo_Object_get_Item);
      return;
    }
    goto label_04270ca0;
  }
label_04270538:
  if (classInstance_00 == (Il2CppClass *)0x0) goto label_04270b25;
  auStack_78._24_8_ = *(undefined8 *)((long)&(classInstance_00->_1).byval_arg.data + 4);
  if ((char)auStack_78._24_8_ == '\0') {
label_042707e3:
    if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[5] ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04270ba9;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[5],
                       (Il2CppObject *)__this,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') goto label_04270bb2;
    if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[5] ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04270c35;
    System_Collections_Generic_Dictionary_object__object___get_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[5],
               (Il2CppObject *)__this,MethodInfo_CustomLogicClassInstance_get_Item);
    return;
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[7] ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04270c54;
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[7],
                     (Il2CppObject *)__this,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 == '\0') goto label_042707e3;
  if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[7] ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04270cbf;
  __this_02 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[7],
                         (Il2CppObject *)__this,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
  auStack_78._24_8_ = *(undefined8 *)((long)&(classInstance_00->_1).byval_arg.data + 4);
  iVar6 = System_Nullable_Int32Enum___get_Value
                    ((System_Nullable_Int32Enum__o)((long)auStack_78 + 0x18),MethodInfo_CustomLogicSourceType_get_Value);
  if (__this_02 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                      (__this_02,iVar6,(Il2CppObject **)&pSStack_50,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar5 != '\0') {
      return;
    }
    goto label_042707e3;
  }
  goto label_04270cc8;
label_042709f8:
  il2cpp_runtime_helper_022b2ca0();
label_042709fd:
  uVar14 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar14);
label_04270a0c:
  uVar14 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar14);
  pSVar9 = parameterValues;
label_04270a1b:
  il2cpp_runtime_helper_022b2c90();
label_04270a20:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
  classInstance_00 = classInstance;
  pSVar21 = pSVar9;
label_04270a2c:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
label_04270a38:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
label_04270a40:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
label_04270a4c:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
  parameterValues = pSVar21;
label_04270a58:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
label_04270a60:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
  plVar17 = (long *)__this;
  pSVar9 = parameterValues;
label_04270a6c:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
  pIVar16 = classInstance_00;
label_04270a78:
  il2cpp_runtime_helper_022b2fd0(in_RCX);
  pSVar21 = pSVar9;
label_04270a84:
  il2cpp_runtime_helper_022b2fd0(pIVar16);
  pSVar9 = pSVar21;
label_04270a8c:
  il2cpp_runtime_helper_022b2fd0(pIVar16);
  classInstance = pIVar16;
label_04270a94:
  il2cpp_runtime_helper_022b2c90();
label_04270a9d:
  il2cpp_runtime_helper_022b2c90();
label_04270aa2:
  il2cpp_runtime_helper_022b2fd0();
  __this = (CustomLogic_UserClassInstance_o *)plVar17;
  classInstance_00 = classInstance;
  parameterValues = pSVar9;
label_04270aa7:
  il2cpp_runtime_helper_022b2c90();
label_04270aac:
  il2cpp_runtime_helper_022b2c90();
label_04270ab5:
  il2cpp_runtime_helper_022b2c90();
  pIVar16 = classInstance_00;
label_04270aba:
  il2cpp_runtime_helper_022b2fd0();
  pSVar21 = parameterValues;
label_04270abf:
  il2cpp_runtime_helper_022b2c90();
label_04270ac4:
  il2cpp_runtime_helper_022b2c90();
  classInstance_00 = pIVar16;
label_04270acd:
  __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_022b2c90();
  parameterValues = pSVar21;
label_04270ad2:
  pSVar21 = (System_Object_array *)__this;
  il2cpp_runtime_helper_022b2fd0();
label_04270ada:
  il2cpp_runtime_helper_022b2c90();
  __this = (CustomLogic_UserClassInstance_o *)pSVar21;
label_04270adf:
  pSVar21 = (System_Object_array *)__this;
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = parameterValues;
label_04270ae8:
  il2cpp_runtime_helper_022b2c90();
label_04270aed:
  il2cpp_runtime_helper_022b2c90();
  __this = (CustomLogic_UserClassInstance_o *)pSVar21;
label_04270af2:
  method_00 = (Il2CppClass *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_03,0,MethodInfo_CustomLogicBaseAst_get_Item);
  if (method_00 != (Il2CppClass *)0x0) goto label_04270c6a;
  do {
    CustomLogic_CustomLogicEvaluator__EvaluateExpression
              ((CustomLogic_CustomLogicEvaluator_o *)pSStack_90,
               (CustomLogic_CustomLogicClassInstance_o *)pIStack_88,
               (System_Collections_Generic_Dictionary_string__object__o *)unaff_R12,
               (CustomLogic_CustomLogicBaseExpressionAst_o *)method_00,in_R8);
    il2cpp_runtime_helper_022b2c90();
    pSVar22 = pSStack_90;
label_04270b25:
    il2cpp_runtime_helper_022b2c90();
    classInstance = classInstance_00;
    pSStack_90 = parameterValues;
label_04270b2e:
    expression = (CustomLogic_CustomLogicBaseExpressionAst_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar22,0,MethodInfo_CustomLogicBaseAst_get_Item);
    if (expression == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
label_04270b6e:
      CustomLogic_CustomLogicEvaluator__EvaluateExpression
                ((CustomLogic_CustomLogicEvaluator_o *)pSStack_90,
                 (CustomLogic_CustomLogicClassInstance_o *)pIStack_88,
                 (System_Collections_Generic_Dictionary_string__object__o *)unaff_R12,expression,in_R8);
      expression = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
      if ((bVar1 <= (expression->klass->_2).naturalAligment) &&
         ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicBaseExpressionAst)) goto label_04270b6e;
    }
label_04270b87:
    il2cpp_runtime_helper_022b2fd0(expression);
    classInstance_00 = classInstance;
label_04270b8f:
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_04270b94:
    il2cpp_runtime_helper_022b2fd0(pIVar13);
label_04270b9c:
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_04270ba1:
    il2cpp_runtime_helper_022b2fd0(pIVar13);
    pSVar21 = parameterValues;
label_04270ba9:
    il2cpp_runtime_helper_022b2c90();
label_04270bb2:
    auStack_78._0_8_ =
         ((System_Nullable_CustomLogicSourceType__o *)((long)&(classInstance_00->_1).byval_arg.data + 4))->
         fields;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceType);
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(uVar14,auStack_78);
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Static class {0} not found for namespace {1}");
    __this = (CustomLogic_UserClassInstance_o *)
             System_String__Format_3af78e0(pSVar15,(Il2CppObject *)__this,pIVar13,(MethodInfo *)0x0);
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar14);
    System_Exception___ctor_3cf6120((System_Exception_o *)pIVar16,(System_String_o *)__this,(MethodInfo *)0x0)
    ;
    uVar14 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object_EvaluateExpression);
    il2cpp_runtime_helper_022b2b10(pIVar16,uVar14);
    parameterValues = pSVar21;
label_04270c35:
    pSVar21 = (System_Object_array *)__this;
    userMethod = (CustomLogic_UserMethod_o *)il2cpp_runtime_helper_022b2c90();
label_04270c3e:
    il2cpp_runtime_helper_022b2fd0(userMethod);
    __this = (CustomLogic_UserClassInstance_o *)pSVar21;
    classInstance_00 = pIVar16;
label_04270c46:
    pSVar21 = (System_Object_array *)__this;
    il2cpp_runtime_helper_022b2c90();
label_04270c4f:
    il2cpp_runtime_helper_022b2c90();
    __this = (CustomLogic_UserClassInstance_o *)pSVar21;
label_04270c54:
    il2cpp_runtime_helper_022b2c90();
    pSStack_90 = parameterValues;
label_04270c5d:
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_04270c62:
    method_00 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0(pIVar13);
label_04270c6a:
    pvVar3 = (method_00->_1).image;
    bVar1 = (TypeInfo_CustomLogicBaseExpressionAst->_2).naturalAligment;
  } while ((bVar1 <= *(byte *)((long)pvVar3 + 0x130)) &&
          (*(Il2CppClass **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicBaseExpressionAst));
label_04270c98:
  il2cpp_runtime_helper_022b2fd0(method_00);
label_04270ca0:
  il2cpp_runtime_helper_022b2c90();
label_04270ca9:
  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_04270cae:
  il2cpp_runtime_helper_022b2fd0(pIVar13);
  pSVar21 = parameterValues;
label_04270cb6:
  il2cpp_runtime_helper_022b2c90();
label_04270cbf:
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = pSVar21;
label_04270cc8:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar14 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) goto label_042714d8;
  plVar17 = (long *)__cxa_begin_catch(uVar14);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pMVar18 = (MethodInfo *)*plVar17;
  cVar4 = il2cpp_runtime_helper_0233e000(uVar14,pMVar18->methodPointer);
  if (cVar4 == '\0') {
    plVar20 = (long *)__cxa_allocate_exception(8);
    *plVar20 = *plVar17;
    __cxa_throw(plVar20,&PTR_PTR_05215060,0);
  }
  plVar17 = (long *)*plVar17;
  __cxa_end_catch();
  auStack_78._0_4_ = *(int32_t *)(pSStack_90->m_Items + 0x13);
  __this_04 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_90->m_Items[0xf];
  if (__this_04 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    __this_04 = (CustomLogic_CustomLogicEvaluator_o *)auStack_78;
    pSStack_80 = System_Int32__ToString((int32_t)__this_04,(MethodInfo *)0x0);
    if (plVar17 != (long *)0x0) goto label_0427128c;
label_04271454:
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_80 = CustomLogic_CustomLogicCompiler__FormatLineNumber
                           ((CustomLogic_CustomLogicCompiler_o *)__this_04,
                            *(int32_t *)(pSStack_90->m_Items + 0x13),(MethodInfo *)0x0);
    if (plVar17 == (long *)0x0) goto label_04271454;
label_0427128c:
    pMVar18 = (MethodInfo *)(**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
    __this_04 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023445d0(&"Custom logic runtime error at line ");
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&": ");
    pSVar15 = System_String__Concat_3af7470
                        ((System_String_o *)__this_04,pSStack_80,pSVar15,(System_String_o *)pMVar18,
                         (MethodInfo *)0x0);
    if (*(char *)(pSStack_90->m_Items + 0x10) != '\0') {
      auStack_78._32_8_ = il2cpp_runtime_helper_023445d0(&"");
      if (pIStack_88 == (Il2CppClass *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_042714bc:
        il2cpp_runtime_helper_022b2c90();
label_042714c1:
        il2cpp_runtime_helper_022b2c90();
label_042714c6:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pIVar13 = pSStack_90->m_Items[0x12];
        if (pIVar13 == (Il2CppObject *)0x0) goto label_042714bc;
        ns = *(System_Nullable_CustomLogicSourceType__Fields *)((long)&(pIStack_88->_1).byval_arg.data + 4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        if (*(int *)&pIVar13[1].monitor < 1) {
label_04271377:
          __this_01 = (System_Collections_Generic_List_object__o *)pSStack_90->m_Items[0x11];
          pSVar15 = (System_String_o *)
                    (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
          pvVar3 = (pIStack_88->_1).image;
          className_00 = (System_String_o *)
                         (**(code **)((long)pvVar3 + 0x178))(pIStack_88,*(undefined8 *)((long)pvVar3 + 0x180))
          ;
          iVar6 = *(int32_t *)(pSStack_90->m_Items + 0x13);
          uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicError);
          __this_05 = (CustomLogic_CustomLogicError_o *)il2cpp_runtime_helper_023052d0(uVar14);
          CustomLogic_CustomLogicError___ctor
                    (__this_05,pSVar15,className_00,(System_String_o *)auStack_78._32_8_,iVar6,pSStack_80,
                     (System_Nullable_CustomLogicSourceType__o)ns,(MethodInfo *)0x0);
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_042714c1;
          lVar19 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          piVar8 = &(__this_01->fields)._version;
          *piVar8 = *piVar8 + 1;
          pSVar21 = (__this_01->fields)._items;
          if (pSVar21 != (System_Object_array *)0x0) {
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar21->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar21->m_Items[(int)uVar2] = (Il2CppObject *)__this_05;
              il2cpp_runtime_helper_022b4080(pSVar21->m_Items + (int)uVar2,__this_05);
              return;
            }
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,(Il2CppObject *)__this_05,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            return;
          }
          goto label_042714c6;
        }
        __this_00 = (System_Collections_Generic_Stack_T__o *)pSStack_90->m_Items[0x12];
        if (__this_00 != (System_Collections_Generic_Stack_T__o *)0x0) {
          method_01 = (MethodInfo_3A0C860 *)il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_3_String_String_Nullable_1_CustomLogic_Custom);
          System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Peek
                    ((System_ValueTuple_object__object__Nullable_Int32Enum___o *)auStack_78,__this_00,
                     method_01);
          auStack_78._32_8_ = auStack_78._8_8_;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
          if ((char)auStack_78._16_8_ != '\0') {
            ns = (System_Nullable_CustomLogicSourceType__Fields)auStack_78._16_8_;
          }
          goto label_04271377;
        }
      }
      uVar14 = il2cpp_runtime_helper_022b2c90();
      __cxa_end_catch();
label_042714d8:
      _Unwind_Resume(uVar14);
    }
  }
  CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_04,pSVar15,1,pMVar18);
label_04271484:
  return;
}


// CustomLogic.UserClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_UserClassInstance__get_ClassName (CustomLogic_UserClassInstance_o* __this, const MethodInfo* method);
// 0x427ac40

System_String_o *
CustomLogic_UserClassInstance__get_ClassName(CustomLogic_UserClassInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._className;
}


