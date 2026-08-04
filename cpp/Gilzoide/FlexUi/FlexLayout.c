// Type: Gilzoide.FlexUi.FlexLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FlexLayout.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$MoveNext
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, const MethodInfo* method);
// 0x3b25210

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppType **ppIVar2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_02;
  char cVar3;
  bool_conflict bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  System_Threading_Tasks_Task_o *unaff_RBX;
  Il2CppType *pIVar9;
  int iVar10;
  MethodInfo *pMVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_ffffffffffffffb8;
  undefined1 uVar15;
  undefined7 in_stack_ffffffffffffffc1;
  undefined1 uVar16;
  undefined7 in_stack_ffffffffffffffc9;
  
  if (g_data_057a99ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Task);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YieldAwaiter);
    g_data_057a99ff = '\x01';
  }
  uVar15 = 0;
  uVar16 = 0;
  iVar12 = *(int *)&method->methodPointer;
  if (iVar12 == 0) {
    uVar15 = *(undefined1 *)&method->field7_0x38;
    *(undefined1 *)&method->field7_0x38 = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
    iVar12 = -1;
  }
  else {
    pIVar9 = method->return_type;
    if (pIVar9 == (Il2CppType *)0x0) goto label_03b25515;
    do {
      if (g_data_057a99ed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a99ed = '\x01';
      }
      pUVar1 = pIVar9[0x10].data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') goto label_03b252e1;
      pIVar9 = pIVar9[0x10].data;
    } while (pIVar9 != (Il2CppType *)0x0);
    il2cpp_runtime_helper_022b2c90();
label_03b252e1:
    method->parameters = &pIVar9->data;
    il2cpp_runtime_helper_022b4080(&method->parameters);
    ppIVar2 = method->parameters;
    if (ppIVar2 == (Il2CppType **)0x0) goto label_03b2551a;
    if (*(char *)((long)ppIVar2 + 0x111) != '\0') goto label_03b254b5;
    *(undefined1 *)((long)ppIVar2 + 0x111) = 1;
    if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = System_Threading_Tasks_Task__Yield((MethodInfo *)0x0);
    uVar15 = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(&stack0xffffffffffffffc8);
    if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                      (&stack0xffffffffffffffc0);
    if ((char)bVar4 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined1 *)&method->field7_0x38 = uVar15;
      __this_00.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar15;
      __this_00.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffffb8;
      __this_00.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffffc1;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar16;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffc9;
      __this_00.fields.m_task = unaff_RBX;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter__FlexLayout__RefreshRootLayout_d__155_
                (__this_00,
                 (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o *)
                 &method->virtualMethodPointer,
                 (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffffc0,
                 (MethodInfo_24C3300 *)method);
      return;
    }
  }
  if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(&stack0xffffffffffffffc0);
  pUVar1 = (UnityEngine_Object_o *)method->parameters;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  iVar10 = 9;
  if ((char)bVar4 != '\0') {
    if (method->parameters == (Il2CppType **)0x0) goto label_03b2551f;
    cVar3 = (**(code **)&(*method->parameters)[0x1c].bits)();
    if (cVar3 != '\0') {
      ppIVar2 = method->parameters;
      if (ppIVar2 == (Il2CppType **)0x0) goto label_03b25529;
      if (g_data_057a99ed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a99ed = '\x01';
      }
      pUVar1 = (UnityEngine_Object_o *)ppIVar2[0x20];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar11 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        lVar13 = 0;
        goto label_03b254f2;
      }
      if ((Gilzoide_FlexUi_FlexLayout_o *)method->parameters == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
      goto label_03b2552e;
      Gilzoide_FlexUi_FlexLayout__RefreshLayout((Gilzoide_FlexUi_FlexLayout_o *)method->parameters,pMVar11);
    }
  }
  lVar13 = 0;
  if (iVar12 < 0) goto label_03b254f7;
joined_r0x03b254aa:
  if (lVar13 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar13);
label_03b25515:
    il2cpp_runtime_helper_022b2c90();
label_03b2551a:
    il2cpp_runtime_helper_022b2c90();
label_03b2551f:
    il2cpp_runtime_helper_022b2c90();
    do {
      il2cpp_runtime_helper_022b2c90();
label_03b25529:
      il2cpp_runtime_helper_022b2c90();
label_03b2552e:
      auVar14 = il2cpp_runtime_helper_022b2c90();
      while( true ) {
        uVar7 = auVar14._0_8_;
        iVar10 = 0;
        if (auVar14._8_4_ == 1) break;
        if (-1 < iVar12) {
label_03b25570:
          if (auVar14._8_4_ != 1) {
            _Unwind_Resume(uVar7);
          }
          puVar6 = (undefined8 *)__cxa_begin_catch(uVar7);
          uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
          cVar3 = il2cpp_runtime_helper_0233e000(uVar7,*(undefined8 *)*puVar6);
          if (cVar3 != '\0') {
            pMVar11 = (MethodInfo *)*puVar6;
            __cxa_end_catch();
            *(undefined4 *)&method->methodPointer = 0xfffffffe;
            method->parameters = (Il2CppType **)0x0;
            il2cpp_runtime_helper_022b4080(&method->parameters,0);
            __this_02.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar15;
            __this_02.fields.m_synchronizationContext =
                 (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffffb8;
            __this_02.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffffc1;
            __this_02.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar16;
            __this_02.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffc9;
            __this_02.fields.m_task = unaff_RBX;
            System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetException
                      (__this_02,(System_Exception_o *)&method->virtualMethodPointer,pMVar11);
            return;
          }
          puVar8 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar8 = *puVar6;
          __cxa_throw(puVar8,&PTR_PTR_05215060,0);
        }
        if (method->parameters != (Il2CppType **)0x0) {
          *(undefined1 *)((long)method->parameters + 0x111) = 0;
          goto label_03b25570;
        }
        auVar14 = il2cpp_runtime_helper_022b2c90();
      }
      plVar5 = (long *)__cxa_begin_catch(uVar7);
      lVar13 = *plVar5;
      __cxa_end_catch();
label_03b254f2:
      if (-1 < iVar12) goto joined_r0x03b254aa;
label_03b254f7:
    } while (method->parameters == (Il2CppType **)0x0);
    *(undefined1 *)((long)method->parameters + 0x111) = 0;
    goto joined_r0x03b254aa;
  }
  if ((iVar10 != 0) && (iVar10 != 9)) {
    return;
  }
label_03b254b5:
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  method->parameters = (Il2CppType **)0x0;
  il2cpp_runtime_helper_022b4080(&method->parameters,0);
  __this_01.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar15;
  __this_01.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffffb8;
  __this_01.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffffc1;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar16;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffc9;
  __this_01.fields.m_task = unaff_RBX;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult
            (__this_01,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$SetStateMachine
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x3b25670

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  MethodInfo *in_RCX;
  System_Runtime_CompilerServices_AsyncMethodBuilderCore_o __this_00;
  
  __this_00.fields.m_stateMachine = stateMachine + 1;
  __this_00.fields.m_defaultContextAction = (System_Action_o *)method;
  System_Runtime_CompilerServices_AsyncMethodBuilderCore__SetStateMachine
            (__this_00,(System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0,in_RCX);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_IsRootLayoutNode
// il2cpp: bool Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e000

bool_conflict
Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool_conflict bVar1;
  
  if (g_data_057a99ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99ed = '\x01';
  }
  x = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gilzoide.FlexUi.FlexLayout$$get_RootLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e050

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool_conflict bVar1;
  Gilzoide_FlexUi_FlexLayout_o *unaff_RBX;
  
  while( true ) {
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return unaff_RBX;
    }
    if (g_data_057a99ed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a99ed = '\x01';
    }
    x = (__this->fields)._parentNode;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') break;
    __this = (__this->fields)._parentNode;
    unaff_RBX = __this;
  }
  return __this;
}


// Gilzoide.FlexUi.FlexLayout$$get_ParentLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e0d0

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._parentNode;
}


// Gilzoide.FlexUi.FlexLayout$$get_RectTransform
// il2cpp: UnityEngine_RectTransform_o* Gilzoide_FlexUi_FlexLayout__get_RectTransform (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e0e0

UnityEngine_RectTransform_o *
Gilzoide_FlexUi_FlexLayout__get_RectTransform(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (g_data_057a99ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a99ee = '\x01';
  }
  pUVar4 = (__this->fields)._rectTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._rectTransform;
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto label_03b1e180;
  pUVar4 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = TypeInfo_RectTransform;
  if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
label_03b1e172:
    *ppUVar1 = pUVar4;
  }
  else if ((pUVar4->klass != TypeInfo_RectTransform) || (*ppUVar1 = pUVar4, pUVar4->klass != pUVar2)) {
    pUVar4 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2fd0(pUVar4);
    goto label_03b1e172;
  }
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar4);
label_03b1e180:
  return *ppUVar1;
}


// Gilzoide.FlexUi.FlexLayout$$get_Configuration
// il2cpp: Gilzoide_FlexUi_FlexLayoutConfig_o* Gilzoide_FlexUi_FlexLayout__get_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e190

Gilzoide_FlexUi_FlexLayoutConfig_o *
Gilzoide_FlexUi_FlexLayout__get_Configuration(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._configuration;
}


// Gilzoide.FlexUi.FlexLayout$$set_Configuration
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayoutConfig_o* value, const MethodInfo* method);
// 0x3b1e1a0

void Gilzoide_FlexUi_FlexLayout__set_Configuration
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayoutConfig_o *value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_01;
  bool_conflict bVar1;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar2;
  Gilzoide_FlexUi_Yoga_YGConfig_o GVar3;
  intptr_t iVar4;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_118;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_110;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_108;
  _union_214693 _Stack_100;
  uint32_t uStack_f8;
  uint16_t uStack_f4;
  uint16_t uStack_f2;
  uint16_t uStack_f0;
  uint8_t uStack_ee;
  uint8_t uStack_ed;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint32_t uStack_d8;
  uint16_t uStack_d4;
  uint16_t uStack_d2;
  uint16_t uStack_d0;
  uint8_t uStack_ce;
  uint8_t uStack_cd;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGStack_b8;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_b0;
  undefined8 in_stack_ffffffffffffff58;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (g_data_057a99ef == '\0') {
    pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e1c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99ef = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._configuration = value;
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e1e6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._configuration,value,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e1fe;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e208;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)value,(MethodInfo *)0x0);
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e212;
  __this_02 = __this;
  GVar2._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_00);
  if ((char)bVar1 == '\0') {
    if (g_data_057a9a18 == (code *)0x0) {
      pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)((ulong)pGStack_70 & 0xffffff0000000000);
      pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e28b;
      g_data_057a9a18 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
    }
    pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e297;
    auVar5 = (*g_data_057a9a18)();
  }
  else {
    if (value == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e355;
      il2cpp_runtime_helper_022b2c90();
      if ((__this_02->fields)._layoutNode.fields._nodePtr != 0) {
        return;
      }
      pGStack_b8 = value;
      pGStack_b0 = __this;
      if (g_data_057a9a38 == (code *)0x0) {
        pGStack_118 = (Gilzoide_FlexUi_FlexLayout_o *)((ulong)pGStack_118 & 0xffffff0000000000);
        g_data_057a9a38 = (code *)il2cpp_runtime_helper_023055b0(&stack0xfffffffffffffec0);
      }
      iVar4 = (*g_data_057a9a38)();
      (__this_02->fields)._layoutNode.fields._nodePtr = iVar4;
      Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(__this_02,method_00);
      Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(__this_02,method_00);
      if (g_data_057a99f0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
        g_data_057a99f0 = '\x01';
      }
      pGStack_110 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      pGStack_108 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      pGStack_118 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      uVar6 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
                ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_100,(MethodInfo *)0x0);
      uStack_d0 = uStack_f0;
      uStack_ce = uStack_ee;
      uStack_cd = uStack_ed;
      uStack_cc = uStack_ec;
      uStack_c8 = uStack_e8;
      uStack_c4 = uStack_e4;
      uStack_e0 = _Stack_100._0_4_;
      uStack_dc = _Stack_100._4_4_;
      uStack_d8 = uStack_f8;
      uStack_d4 = uStack_f4;
      uStack_d2 = uStack_f2;
      il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xfffffffffffffec8,0)
      ;
      pGStack_118 = __this_02;
      il2cpp_runtime_helper_022b4080(&pGStack_118,__this_02);
      __this_00.fields.m_synchronizationContext._4_4_ = uVar6;
      __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
      __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_100._0_4_;
      __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_100._4_4_;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_f8;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_f4;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_f4,2);
      __this_00.fields.m_task._0_2_ = (uint16_t)_uStack_f0;
      __this_00.fields.m_task._2_1_ = SUB41(_uStack_f0,2);
      __this_00.fields.m_task._3_1_ = SUB41(_uStack_f0,3);
      __this_00.fields.m_task._4_4_ = uStack_ec;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
                (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xfffffffffffffec8,
                 (MethodInfo_24C3830 *)&stack0xfffffffffffffec0);
      return;
    }
    pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e22d;
    GVar3 = Gilzoide_FlexUi_FlexLayoutConfig__get_Config(value,method_00);
    auVar5._8_8_ = extraout_RDX_00;
    auVar5._0_8_ = GVar3.fields._configPtr;
  }
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e2a4;
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,
             (Gilzoide_FlexUi_Yoga_YGConfig_Fields)auVar5._0_8_,auVar5._8_8_);
  if (g_data_057a99f0 == '\0') {
    pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e2b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar6 = 0;
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e2e3;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e313;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e325;
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  pGStack_b0 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b1e344;
  __this_01.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar2._nodePtr;
  __this_01.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar6;
  __this_01.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_01.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_01,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionType
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e7e0

int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._positionType;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionType
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1e7f0

void Gilzoide_FlexUi_FlexLayout__set_PositionType
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._positionType = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9af8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9af8 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9af8)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e9a0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1e9b0

void Gilzoide_FlexUi_FlexLayout__set_PositionLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._positionLeft.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,0,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1ec90

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1eca0

void Gilzoide_FlexUi_FlexLayout__set_PositionTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._positionTop.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,1,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1ed80

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1ed90

void Gilzoide_FlexUi_FlexLayout__set_PositionRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._positionRight.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,2,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1ee70

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1ee80

void Gilzoide_FlexUi_FlexLayout__set_PositionBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._positionBottom.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,3,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Direction
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1ef60

int32_t Gilzoide_FlexUi_FlexLayout__get_Direction(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._direction;
}


// Gilzoide.FlexUi.FlexLayout$$set_Direction
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1ef70

void Gilzoide_FlexUi_FlexLayout__set_Direction
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._direction = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9ac8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9ac8 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9ac8)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_uStack_48;
  __this_00.fields.m_task._2_1_ = SUB41(_uStack_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_uStack_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexDirection
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1f120

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexDirection;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexDirection
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1f130

void Gilzoide_FlexUi_FlexLayout__set_FlexDirection
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._flexDirection = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9ad0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9ad0 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9ad0)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexWrap
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1f2e0

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexWrap;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexWrap
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1f2f0

void Gilzoide_FlexUi_FlexLayout__set_FlexWrap
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._flexWrap = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9b00 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9b00 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9b00)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexBasis
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1f4a0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_FlexBasis(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._flexBasis.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexBasis
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1f4b0

void Gilzoide_FlexUi_FlexLayout__set_FlexBasis
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._flexBasis.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexGrow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1f7a0

float Gilzoide_FlexUi_FlexLayout__get_FlexGrow(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexGrow;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexGrow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3b1f7b0

void Gilzoide_FlexUi_FlexLayout__set_FlexGrow
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._flexGrow = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_057a9b08 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9b08 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9b08)(value,GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexShrink
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1f980

float Gilzoide_FlexUi_FlexLayout__get_FlexShrink(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexShrink;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexShrink
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3b1f990

void Gilzoide_FlexUi_FlexLayout__set_FlexShrink
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._flexShrink = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_057a9b10 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9b10 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9b10)(value,GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_JustifyContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1fb60

int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._justifyContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_JustifyContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1fb70

void Gilzoide_FlexUi_FlexLayout__set_JustifyContent
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._justifyContent = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9ad8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9ad8 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9ad8)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignItems
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1fd20

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignItems;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignItems
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1fd30

void Gilzoide_FlexUi_FlexLayout__set_AlignItems
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._alignItems = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9ae8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9ae8 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9ae8)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignSelf
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1fee0

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignSelf;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignSelf
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b1fef0

void Gilzoide_FlexUi_FlexLayout__set_AlignSelf
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._alignSelf = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9af0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9af0 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9af0)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b200a0

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3b200b0

void Gilzoide_FlexUi_FlexLayout__set_AlignContent
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._alignContent = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_057a9ae0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9ae0 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9ae0)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_uStack_48;
  __this_00.fields.m_task._2_1_ = SUB41(_uStack_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_uStack_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Width
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Width (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b20260

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Width(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._width.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Width
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Width (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20270

void Gilzoide_FlexUi_FlexLayout__set_Width
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._width.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Height
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Height (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b20560

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Height(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._height.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Height
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Height (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20570

void Gilzoide_FlexUi_FlexLayout__set_Height
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._height.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b20860

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20870

void Gilzoide_FlexUi_FlexLayout__set_MinWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._minWidth.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b20b40

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20b50

void Gilzoide_FlexUi_FlexLayout__set_MinHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._minHeight.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b20e20

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20e30

void Gilzoide_FlexUi_FlexLayout__set_MaxWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._maxWidth.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b21100

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b21110

void Gilzoide_FlexUi_FlexLayout__set_MaxHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._maxHeight.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AspectRatio
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b213e0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_AspectRatio(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._aspectRatio.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_AspectRatio
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b213f0

void Gilzoide_FlexUi_FlexLayout__set_AspectRatio
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  float fVar2;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar3;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 a_Stack_58 [3];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  _union_214693 _Stack_38;
  undefined8 uStack_30;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fVar2 = value.fields.Value;
  (__this->fields)._aspectRatio.fields.Value = fVar2;
  (__this->fields)._aspectRatio.fields.Unit = value.fields.Unit;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)((ulong)value.fields >> 0x20));
  if (g_data_057a9be0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    g_data_057a9be0 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9be0)(GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar3 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)a_Stack_58,(MethodInfo *)0x0);
  uStack_28 = a_Stack_58[2]._0_2_;
  uStack_26 = a_Stack_58[2]._2_1_;
  uStack_25 = a_Stack_58[2]._3_1_;
  uStack_24 = a_Stack_58[2]._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  _Stack_38.genericMethod = a_Stack_58[0].genericMethod;
  uStack_30 = a_Stack_58[1];
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = fVar2;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar3;
  __this_00.fields.m_task = a_Stack_58[0].genericMethod;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b215d0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b215e0

void Gilzoide_FlexUi_FlexLayout__set_MarginLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._marginLeft.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,0,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b218d0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b218e0

void Gilzoide_FlexUi_FlexLayout__set_MarginTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._marginTop.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,1,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b219c0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b219d0

void Gilzoide_FlexUi_FlexLayout__set_MarginRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._marginRight.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,2,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b21ab0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b21ac0

void Gilzoide_FlexUi_FlexLayout__set_MarginBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._marginBottom.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,3,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b21ba0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b21bb0

void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._paddingLeft.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,0,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b21e90

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b21ea0

void Gilzoide_FlexUi_FlexLayout__set_PaddingTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._paddingTop.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,1,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b21f80

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b21f90

void Gilzoide_FlexUi_FlexLayout__set_PaddingRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._paddingRight.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,2,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22070

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b22080

void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._paddingBottom.fields = value.fields;
  GVar1._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,3,value,in_RCX);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapColumn
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22160

float Gilzoide_FlexUi_FlexLayout__get_GapColumn(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapColumn;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapColumn
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3b22170

void Gilzoide_FlexUi_FlexLayout__set_GapColumn
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._gapColumn = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_057a9b68 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0x10);
    g_data_057a9b68 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9b68)(value,GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapRow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22340

float Gilzoide_FlexUi_FlexLayout__get_GapRow(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapRow;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapRow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3b22350

void Gilzoide_FlexUi_FlexLayout__set_GapRow
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields)._gapRow = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_057a9b68 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0x10);
    g_data_057a9b68 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  (*g_data_057a9b68)(value,GVar1.fields._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_LayoutNode
// il2cpp: Gilzoide_FlexUi_Yoga_YGNode_o Gilzoide_FlexUi_FlexLayout__get_LayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e360

Gilzoide_FlexUi_Yoga_YGNode_o
Gilzoide_FlexUi_FlexLayout__get_LayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  intptr_t iVar2;
  undefined4 uVar3;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  GVar1._nodePtr = (__this->fields)._layoutNode.fields._nodePtr;
  if (GVar1._nodePtr != 0) {
    return (Gilzoide_FlexUi_Yoga_YGNode_o)(Gilzoide_FlexUi_Yoga_YGNode_Fields)GVar1._nodePtr;
  }
  if (g_data_057a9a38 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)((ulong)pGStack_70 & 0xffffff0000000000);
    g_data_057a9a38 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
  }
  iVar2 = (*g_data_057a9a38)();
  (__this->fields)._layoutNode.fields._nodePtr = iVar2;
  Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(__this,method);
  Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(__this,method);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar3 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar3;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return (Gilzoide_FlexUi_Yoga_YGNode_o)
         (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._layoutNode.fields._nodePtr;
}


// Gilzoide.FlexUi.FlexLayout$$OnEnable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnEnable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22fc0

void Gilzoide_FlexUi_FlexLayout__OnEnable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_RectTransform_o *__this_00;
  VirtualInvokeData *pVVar8;
  UnityEngine_Component_o *__this_01;
  System_Collections_IEnumerator_o *pSVar9;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  System_Collections_IEnumerator_o *unaff_RBX;
  long lVar13;
  long lVar14;
  MethodInfo_24E89E0 **unaff_R14;
  undefined1 auVar15 [12];
  Gilzoide_FlexUi_FlexLayout_o *apGStack_38 [2];
  
  pMVar12 = (MethodInfo *)0x0;
  UnityEngine_EventSystems_UIBehaviour__OnEnable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,pMVar12);
  if (g_data_057a99f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a99f7 = '\x01';
  }
  apGStack_38[0] = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar12);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    unaff_RBX = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    if (unaff_RBX != (System_Collections_IEnumerator_o *)0x0) {
      unaff_R14 = &MethodInfo_Boolean_TryGetComponent_FlexLayout;
      do {
        pSVar4 = unaff_RBX->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
              goto label_03b232d3;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_03b232d3:
        cVar6 = (*pVVar8->methodPtr)(unaff_RBX,pVVar8->method);
        if (cVar6 == '\0') {
          unaff_R14 = (MethodInfo_24E89E0 **)0x0;
          goto label_03b233e7;
        }
        pSVar4 = unaff_RBX->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
              goto label_03b23358;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar13);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,1);
label_03b23358:
        __this_01 = (UnityEngine_Component_o *)(*pVVar8->methodPtr)(unaff_RBX,pVVar8->method);
        if (__this_01 == (UnityEngine_Component_o *)0x0) goto label_03b2348a;
        if (((__this_01->klass->_2).naturalAligment < *(byte *)(TypeInfo_Transform + 0x130)) ||
           (pMVar12 = (MethodInfo *)(__this_01->klass->_2).typeHierarchy,
           *(long *)((long)pMVar12 + (ulong)*(byte *)(TypeInfo_Transform + 0x130) * 8 + -8) != TypeInfo_Transform))
        goto label_03b23482;
        bVar7 = UnityEngine_Component__TryGetComponent_object_
                          (__this_01,(Il2CppObject **)apGStack_38,MethodInfo_Boolean_TryGetComponent_FlexLayout);
        if ((char)bVar7 != '\0') {
          if (apGStack_38[0] == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b2348f;
          cVar6 = (*(apGStack_38[0]->klass->vtable)._9_IsActive.methodPtr)
                            (apGStack_38[0],(apGStack_38[0]->klass->vtable)._9_IsActive.method);
          if (cVar6 != '\0') {
            Gilzoide_FlexUi_FlexLayout__TrackChild(__this,apGStack_38[0],0,pMVar12);
          }
        }
      } while( true );
    }
    goto label_03b23499;
  }
  goto label_03b23494;
label_03b23482:
  il2cpp_runtime_helper_022b2fd0(__this_01);
label_03b2348a:
  il2cpp_runtime_helper_022b2c90();
label_03b2348f:
  il2cpp_runtime_helper_022b2c90();
label_03b23494:
  il2cpp_runtime_helper_022b2c90();
label_03b23499:
  il2cpp_runtime_helper_022b2c90();
  while (auVar15 = il2cpp_runtime_helper_022fefe0(unaff_R14), auVar15._8_4_ == 1) {
    puVar11 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
    unaff_R14 = (MethodInfo_24E89E0 **)*puVar11;
    __cxa_end_catch();
label_03b233e7:
    pMVar12 = TypeInfo_IDisposable;
    pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_023051f0();
    if (pSVar9 != (System_Collections_IEnumerator_o *)0x0) {
      pSVar4 = pSVar9->klass;
      uVar3._0_1_ = (pSVar4->_2).rank;
      uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(MethodInfo **)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IDisposable) {
            pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_03b2345d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IDisposable,0);
label_03b2345d:
      pMVar12 = pVVar8->method;
      (*pVVar8->methodPtr)(pSVar9);
      unaff_RBX = pSVar9;
    }
    if (unaff_R14 == (MethodInfo_24E89E0 **)0x0) {
      Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,pMVar12);
      return;
    }
  }
  plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_IDisposable);
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(MethodInfo **)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_03b2357d;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_03b2357d:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  _Unwind_Resume(auVar15._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$OnDisable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDisable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b235b0

void Gilzoide_FlexUi_FlexLayout__OnDisable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  Gilzoide_FlexUi_FlexLayout_o *exists;
  System_Collections_Generic_List_FlexLayout__o *pSVar2;
  UnityEngine_Object_o *exists_00;
  UnityEngine_Object_o *x;
  Gilzoide_FlexUi_FlexLayout_array *array;
  long lVar3;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_FlexLayout_o *unaff_RBX;
  undefined8 unaff_RBP;
  Gilzoide_FlexUi_FlexLayout_o *child;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  Gilzoide_FlexUi_FlexLayout_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar6 [12];
  undefined1 auStack_64 [52];
  undefined8 uStack_30;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_28;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_20;
  
  pGStack_20 = (Gilzoide_FlexUi_FlexLayout_o *)&g_data_03b235be;
  UnityEngine_EventSystems_UIBehaviour__OnDisable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (g_data_057a99f6 == '\0') {
    pGStack_20 = (Gilzoide_FlexUi_FlexLayout_o *)&g_data_03b235d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99f6 = '\x01';
  }
  exists = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pGStack_20 = (Gilzoide_FlexUi_FlexLayout_o *)&g_data_03b235f9;
    il2cpp_runtime_helper_02337ed0();
  }
  pGStack_20 = (Gilzoide_FlexUi_FlexLayout_o *)&g_data_03b23603;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    child = (__this->fields)._parentNode;
    if (child == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGStack_20 = (Gilzoide_FlexUi_FlexLayout_o *)&g_data_03b23634;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      register0x00000020 = (BADSPACEBASE *)&uStack_30;
      pGStack_28 = __this;
      pGStack_20 = exists;
      if (g_data_057a99f6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a99f6 = '\x01';
      }
      unaff_RBX = (child->fields)._parentNode;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      __this = (child->fields)._parentNode;
      if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__UntrackChild(__this,child,1,in_RCX);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      unaff_R14 = child;
    }
    else {
      pGStack_20 = (Gilzoide_FlexUi_FlexLayout_o *)&g_data_03b23620;
      Gilzoide_FlexUi_FlexLayout__UntrackChild(child,__this,1,in_RCX);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(Gilzoide_FlexUi_FlexLayout_o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(Gilzoide_FlexUi_FlexLayout_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057a99fb == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b236e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b236f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b236fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b2370a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23716;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23722;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99fb = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23747;
  UnityEngine_DrivenRectTransformTracker__Clear(&(__this->fields)._isRefreshScheduled,0);
  pSVar2 = (__this->fields)._childrenNodes;
  if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b2376b;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x60),
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x50);
    *(undefined8 *)((long)register0x00000020 + -0x78) = *(undefined8 *)((long)register0x00000020 + -0x60);
    *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x58);
    while( true ) {
      do {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b2379c;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o)
                           *(System_Collections_Generic_List_Enumerator_object__Fields *)
                            ((long)register0x00000020 + -0x78),
                           (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x78));
        if ((char)bVar4 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23827;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)
                      ((long)register0x00000020 + -0x78),
                     (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x78));
          goto label_03b23827;
        }
        exists_00 = *(UnityEngine_Object_o **)((long)register0x00000020 + -0x68);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b237b7;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b237c1;
        bVar4 = UnityEngine_Object__op_Implicit(exists_00,(MethodInfo *)0x0);
      } while ((char)bVar4 == '\0');
      if (exists_00 == (UnityEngine_Object_o *)0x0) break;
      x = (UnityEngine_Object_o *)exists_00[10].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b237e7;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b237f4;
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        exists_00[10].fields.m_CachedPtr = 0;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23810;
        il2cpp_runtime_helper_022b4080(&exists_00[10].fields,0);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b238de;
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b238e3;
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_03b2395a:
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23973;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)
                  ((long)register0x00000020 + -0x78),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x78))
      ;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23980;
      _Unwind_Resume(auVar6._0_8_);
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b2392f;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23937;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23949;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)
                ((long)register0x00000020 + -0x78),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x78));
    if (lVar3 != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b2395a;
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_03b2395a;
    }
label_03b23827:
    pSVar2 = (__this->fields)._childrenNodes;
    if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        array = (pSVar2->fields)._items;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b23856;
        System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
      }
      lVar3 = (__this->fields)._layoutNode.fields._nodePtr;
      if (lVar3 != 0) {
        if (g_data_057a9a60 == (code *)0x0) {
          *(char **)((long)register0x00000020 + -0x60) = "flex-ui";
          *(undefined8 *)((long)register0x00000020 + -0x58) = 7;
          *(char **)((long)register0x00000020 + -0x50) = "FlexUi_NodeRemoveAllChildren";
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x1c;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x200000000;
          *(undefined4 *)((long)register0x00000020 + -0x38) = 8;
          *(undefined1 *)((long)register0x00000020 + -0x34) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b238be;
          g_data_057a9a60 = (code *)il2cpp_runtime_helper_023055b0((undefined1 *)((long)register0x00000020 + -0x60));
        }
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b238ca;
        (*g_data_057a9a60)(lVar3);
      }
      return;
    }
  } while( true );
}


// Gilzoide.FlexUi.FlexLayout$$OnDestroy
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDestroy (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b23990

void Gilzoide_FlexUi_FlexLayout__OnDestroy(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields)._layoutNode.fields._nodePtr != 0) {
    __this_00 = &(__this->fields)._layoutNode;
    Gilzoide_FlexUi_Yoga_YGNode__Free((Gilzoide_FlexUi_Yoga_YGNode_o)__this_00,method_00);
    (__this_00->fields)._nodePtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnTransformParentChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnTransformParentChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b239e0

void Gilzoide_FlexUi_FlexLayout__OnTransformParentChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  char cVar1;
  MethodInfo *method_00;
  
  UnityEngine_EventSystems_UIBehaviour__OnTransformParentChanged
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  method_00 = (__this->klass->vtable)._9_IsActive.method;
  cVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this);
  if (cVar1 != '\0') {
    Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,method_00);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnTransformChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b23a10

void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_RectTransform_o *__this_00;
  VirtualInvokeData *pVVar8;
  UnityEngine_Component_o *__this_01;
  System_Collections_IEnumerator_o *pSVar9;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  System_Collections_IEnumerator_o *unaff_RBX;
  long lVar13;
  long lVar14;
  MethodInfo_24E89E0 **unaff_R14;
  undefined1 auVar15 [12];
  Gilzoide_FlexUi_FlexLayout_o *apGStack_38 [2];
  
  pMVar12 = (__this->klass->vtable)._9_IsActive.method;
  cVar6 = (*(__this->klass->vtable)._9_IsActive.methodPtr)();
  if (cVar6 == '\0') {
    return;
  }
  Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,pMVar12);
  if (g_data_057a99f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a99f7 = '\x01';
  }
  apGStack_38[0] = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar12);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    unaff_RBX = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    if (unaff_RBX != (System_Collections_IEnumerator_o *)0x0) {
      unaff_R14 = &MethodInfo_Boolean_TryGetComponent_FlexLayout;
      do {
        pSVar4 = unaff_RBX->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
              goto label_03b232d3;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_03b232d3:
        cVar6 = (*pVVar8->methodPtr)(unaff_RBX,pVVar8->method);
        if (cVar6 == '\0') {
          unaff_R14 = (MethodInfo_24E89E0 **)0x0;
          goto label_03b233e7;
        }
        pSVar4 = unaff_RBX->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
              goto label_03b23358;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar13);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,1);
label_03b23358:
        __this_01 = (UnityEngine_Component_o *)(*pVVar8->methodPtr)(unaff_RBX,pVVar8->method);
        if (__this_01 == (UnityEngine_Component_o *)0x0) goto label_03b2348a;
        if (((__this_01->klass->_2).naturalAligment < *(byte *)(TypeInfo_Transform + 0x130)) ||
           (pMVar12 = (MethodInfo *)(__this_01->klass->_2).typeHierarchy,
           *(long *)((long)pMVar12 + (ulong)*(byte *)(TypeInfo_Transform + 0x130) * 8 + -8) != TypeInfo_Transform))
        goto label_03b23482;
        bVar7 = UnityEngine_Component__TryGetComponent_object_
                          (__this_01,(Il2CppObject **)apGStack_38,MethodInfo_Boolean_TryGetComponent_FlexLayout);
        if ((char)bVar7 != '\0') {
          if (apGStack_38[0] == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b2348f;
          cVar6 = (*(apGStack_38[0]->klass->vtable)._9_IsActive.methodPtr)
                            (apGStack_38[0],(apGStack_38[0]->klass->vtable)._9_IsActive.method);
          if (cVar6 != '\0') {
            Gilzoide_FlexUi_FlexLayout__TrackChild(__this,apGStack_38[0],0,pMVar12);
          }
        }
      } while( true );
    }
    goto label_03b23499;
  }
  goto label_03b23494;
label_03b23482:
  il2cpp_runtime_helper_022b2fd0(__this_01);
label_03b2348a:
  il2cpp_runtime_helper_022b2c90();
label_03b2348f:
  il2cpp_runtime_helper_022b2c90();
label_03b23494:
  il2cpp_runtime_helper_022b2c90();
label_03b23499:
  il2cpp_runtime_helper_022b2c90();
  while (auVar15 = il2cpp_runtime_helper_022fefe0(unaff_R14), auVar15._8_4_ == 1) {
    puVar11 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
    unaff_R14 = (MethodInfo_24E89E0 **)*puVar11;
    __cxa_end_catch();
label_03b233e7:
    pMVar12 = TypeInfo_IDisposable;
    pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_023051f0();
    if (pSVar9 != (System_Collections_IEnumerator_o *)0x0) {
      pSVar4 = pSVar9->klass;
      uVar3._0_1_ = (pSVar4->_2).rank;
      uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(MethodInfo **)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IDisposable) {
            pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_03b2345d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IDisposable,0);
label_03b2345d:
      pMVar12 = pVVar8->method;
      (*pVVar8->methodPtr)(pSVar9);
      unaff_RBX = pSVar9;
    }
    if (unaff_R14 == (MethodInfo_24E89E0 **)0x0) {
      Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,pMVar12);
      return;
    }
  }
  plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_IDisposable);
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(MethodInfo **)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_03b2357d;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_03b2357d:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  _Unwind_Resume(auVar15._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$OnRectTransformDimensionsChange
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b23a40

void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  char cVar1;
  bool_conflict bVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar3;
  MethodInfo *pMVar4;
  undefined4 uVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  UnityEngine_EventSystems_UIBehaviour__OnRectTransformDimensionsChange
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pMVar4 = (__this->klass->vtable)._9_IsActive.method;
  cVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this);
  if (cVar1 != '\0') {
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar4);
    if (g_data_057a9a90 == (code *)0x0) {
      pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,8);
      g_data_057a9a90 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
      cVar1 = (*g_data_057a9a90)(GVar3.fields._nodePtr);
    }
    else {
      cVar1 = (*g_data_057a9a90)(GVar3.fields._nodePtr);
    }
    if (cVar1 != '\0') {
      GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar4);
      if (g_data_057a9a90 == (code *)0x0) {
        pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,8);
        g_data_057a9a90 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
      }
      cVar1 = (*g_data_057a9a90)(GVar3.fields._nodePtr);
      if (cVar1 != '\0') {
        if (g_data_057a9a98 == (code *)0x0) {
          pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,8);
          g_data_057a9a98 = (code *)il2cpp_runtime_helper_023055b0(&stack0xffffffffffffff68);
        }
        (*g_data_057a9a98)(GVar3.fields._nodePtr);
      }
      if (g_data_057a99f0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
        g_data_057a99f0 = '\x01';
      }
      pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      uVar5 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
                ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
      uStack_28 = uStack_48;
      uStack_26 = uStack_46;
      uStack_25 = uStack_45;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      uStack_38 = _Stack_58._0_4_;
      uStack_34 = _Stack_58._4_4_;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uStack_2a = uStack_4a;
      il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0)
      ;
      pGStack_70 = __this;
      il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
      __this_00.fields.m_synchronizationContext._4_4_ = uVar5;
      __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
      __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_58._0_4_;
      __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_58._4_4_;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
      __this_00.fields.m_task._0_2_ = (uint16_t)_uStack_48;
      __this_00.fields.m_task._2_1_ = SUB41(_uStack_48,2);
      __this_00.fields.m_task._3_1_ = SUB41(_uStack_48,3);
      __this_00.fields.m_task._4_4_ = uStack_44;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
                (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
                 (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
      return;
    }
    if (g_data_057a99ed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a99ed = '\x01';
    }
    x = (__this->fields)._parentNode;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') && (*(char *)((long)&(__this->fields)._isRefreshScheduled + 1) == '\0')) {
      Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,pMVar4);
      return;
    }
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b1e720

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  undefined4 uVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 _Stack_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar1 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,(MethodInfo *)0x0);
  uStack_28 = uStack_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_38 = _Stack_58._0_4_;
  uStack_34 = _Stack_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar1;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_uStack_48;
  __this_00.fields.m_task._2_1_ = SUB41(_uStack_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_uStack_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayoutImmediate
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b24110

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool_conflict bVar1;
  Gilzoide_FlexUi_FlexLayout_o *unaff_RBX;
  
  while (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    if (g_data_057a99ed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a99ed = '\x01';
    }
    x = (__this->fields)._parentNode;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    unaff_RBX = __this;
    if ((char)bVar1 != '\0') goto label_03b24181;
    __this = (__this->fields)._parentNode;
    unaff_RBX = __this;
  }
  il2cpp_runtime_helper_022b2c90();
label_03b24181:
  Gilzoide_FlexUi_FlexLayout__RefreshLayout(unaff_RBX,method);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$Compare
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__Compare (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* x, Gilzoide_FlexUi_FlexLayout_o* y, const MethodInfo* method);
// 0x3b24190

int32_t Gilzoide_FlexUi_FlexLayout__Compare
                  (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *x,
                  Gilzoide_FlexUi_FlexLayout_o *y,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_c *pGVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *method_00;
  Gilzoide_FlexUi_FlexLayout_o *pGVar5;
  undefined4 uVar6;
  char *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_38;
  int32_t local_1c;
  
  if (g_data_057a99f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99f1 = '\x01';
  }
  local_1c = 0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  pGVar5 = x;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
  iVar3 = -1;
  if ((char)bVar2 != '\0') {
    if (x == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b24268;
    pGVar5 = x;
    pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(x,method_00);
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_03b24268;
    iVar3 = UnityEngine_Transform__GetSiblingIndex((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
  }
  local_1c = iVar3;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = y;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&g_data_ffffffff;
  iVar3 = -1;
  if ((char)bVar2 != '\0') {
    if (y != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(y,(MethodInfo *)&g_data_ffffffff);
      pGVar5 = y;
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        iVar3 = UnityEngine_Transform__GetSiblingIndex((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
        goto label_03b24252;
      }
    }
label_03b24268:
    uVar6 = il2cpp_runtime_helper_022b2c90();
    pGVar1 = pGVar5->klass;
    pGStack_38 = x;
    if (g_data_057a9a48 == (code *)0x0) {
      local_68 = "flex-ui";
      local_60 = 7;
      local_58 = "FlexUi_NodeCalculateLayout";
      local_50 = 0x1a;
      local_48 = 0x200000000;
      local_40 = 0x14;
      local_3c = 0;
      g_data_057a9a48 = (code *)il2cpp_runtime_helper_023055b0(&local_68);
    }
    iVar3 = (*g_data_057a9a48)(uVar6,pGVar1,(ulong)method_00 & 0xffffffff);
    return iVar3;
  }
label_03b24252:
  iVar3 = System_Int32__CompareTo_3cb42c0((int32_t)&local_1c,iVar3,(MethodInfo *)0x0);
  return iVar3;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b23e70

void Gilzoide_FlexUi_FlexLayout__RefreshLayout(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar5;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  UnityEngine_Rect_o UVar8;
  undefined1 auVar9 [12];
  undefined8 in_stack_ffffffffffffff68;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar10;
  Il2CppObject *pIVar11;
  float local_68;
  float fStack_64;
  Il2CppType **local_58;
  Il2CppRGCTXData *local_50;
  _union_249689 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  float local_28;
  float fStack_24;
  
  if (g_data_057a99f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    g_data_057a99f2 = '\x01';
  }
  GVar10._nodePtr = 0;
  pIVar11 = (Il2CppObject *)0x0;
  if (g_data_057a99ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99ed = '\x01';
  }
  x = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    GVar10._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar7);
    pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar7);
    Gilzoide_FlexUi_Yoga_YGNode__ApplyTo
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff70,pUVar4,method_00);
    __this_00 = (__this->fields)._childrenNodes;
  }
  else {
    pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar7);
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_03b24086;
    pMVar7 = (MethodInfo *)0x0;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
    GVar5 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar7);
    local_68 = UVar8.fields.m_Width;
    fStack_64 = UVar8.fields.m_Height;
    iVar1 = (__this->fields)._direction;
    GVar10 = GVar5.fields._nodePtr;
    if (g_data_057a9a48 == (code *)0x0) {
      local_58 = (Il2CppType **)0xce5590;
      local_50 = (Il2CppRGCTXData *)0x7;
      local_48.genericMethod = "FlexUi_NodeCalculateLayout";
      local_40._0_4_ = 0x1a;
      local_40._4_2_ = 0;
      local_40._6_2_ = 0;
      local_38._0_2_ = 0;
      local_38._2_1_ = '\0';
      local_38._3_1_ = '\0';
      local_38._4_4_ = 2;
      local_30 = 0x14;
      local_2c = 0;
      local_28 = fStack_64;
      fStack_24 = fStack_64;
      g_data_057a9a48 = (code *)il2cpp_runtime_helper_023055b0(&local_58);
      fStack_64 = local_28;
    }
    (*g_data_057a9a48)(local_68,fStack_64,GVar5.fields._nodePtr,iVar1);
    __this_00 = (__this->fields)._childrenNodes;
  }
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    __this_01.fields._index = (int)GVar10._nodePtr;
    __this_01.fields._version = (int)((ulong)GVar10._nodePtr >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_01.fields._current = pIVar11;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
    if ((char)bVar3 == '\0') {
      __this_02.fields._index = (int)GVar10._nodePtr;
      __this_02.fields._version = (int)((ulong)GVar10._nodePtr >> 0x20);
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_02.fields._current = pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
label_03b24086:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._index = (int)GVar10._nodePtr;
    __this_03.fields._version = (int)((ulong)GVar10._nodePtr >> 0x20);
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_03.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._index = (int)GVar10._nodePtr;
  __this_04.fields._version = (int)((ulong)GVar10._nodePtr >> 0x20);
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
  __this_04.fields._current = pIVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar9._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeStyle
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22750

void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int32_t iVar5;
  UnityEngine_Object_c *pUVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar8;
  char cVar9;
  bool_conflict bVar10;
  Gilzoide_FlexUi_Yoga_YGConfig_o GVar11;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_FlexLayoutConfig_o *exists;
  VirtualInvokeData *pVVar12;
  UnityEngine_Component_o *__this_01;
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGVar13;
  long *plVar14;
  undefined8 *puVar15;
  MethodInfo *in_RCX;
  MethodInfo *pMVar16;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  Gilzoide_FlexUi_FlexLayout_o *pGStack_90;
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGStack_88;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_057a99f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99f3 = '\x01';
  }
  local_50._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  exists = (__this->fields)._configuration;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = (MethodInfo *)0x0;
  bVar10 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (g_data_057a9a18 == (MethodInfo *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_ConfigGetDefault";
      local_30 = 0x17;
      local_28 = 0x200000000;
      local_20 = 0;
      local_1c = 0;
      g_data_057a9a18 = (MethodInfo *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    in_RCX = g_data_057a9a18;
    auVar20 = (*(code *)g_data_057a9a18)();
label_03b2282a:
    Gilzoide_FlexUi_Yoga_YGNode__SetConfig
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,(Gilzoide_FlexUi_Yoga_YGConfig_Fields)auVar20._0_8_,
               auVar20._8_8_);
    GVar8._nodePtr = local_50._nodePtr;
    if (g_data_057a9af8 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetPositionType";
      local_30 = 0x1f;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9af8 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9af8)(GVar8._nodePtr);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,0,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,1,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,2,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,3,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields,in_RCX);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._direction;
    if (g_data_057a9ac8 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetDirection";
      local_30 = 0x1c;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9ac8 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9ac8)(GVar8._nodePtr,iVar5);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._flexDirection;
    if (g_data_057a9ad0 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetFlexDirection";
      local_30 = 0x20;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9ad0 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9ad0)(GVar8._nodePtr,iVar5);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._flexWrap;
    if (g_data_057a9b00 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetFlexWrap";
      local_30 = 0x1b;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9b00 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9b00)(GVar8._nodePtr,iVar5);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._flexBasis.fields,method_00);
    GVar8._nodePtr = local_50._nodePtr;
    fVar1 = (__this->fields)._flexGrow;
    if (g_data_057a9b08 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetFlexGrow";
      local_30 = 0x1b;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9b08 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9b08)(fVar1,GVar8._nodePtr);
    GVar8._nodePtr = local_50._nodePtr;
    fVar1 = (__this->fields)._flexShrink;
    if (g_data_057a9b10 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetFlexShrink";
      local_30 = 0x1d;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9b10 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9b10)(fVar1,GVar8._nodePtr);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._justifyContent;
    if (g_data_057a9ad8 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetJustifyContent";
      local_30 = 0x21;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9ad8 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9ad8)(GVar8._nodePtr,iVar5);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._alignItems;
    if (g_data_057a9ae8 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetAlignItems";
      local_30 = 0x1d;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9ae8 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9ae8)(GVar8._nodePtr,iVar5);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._alignSelf;
    if (g_data_057a9af0 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetAlignSelf";
      local_30 = 0x1c;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9af0 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9af0)(GVar8._nodePtr,iVar5);
    GVar8._nodePtr = local_50._nodePtr;
    iVar5 = (__this->fields)._alignContent;
    if (g_data_057a9ae0 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetAlignContent";
      local_30 = 0x1f;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9ae0 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9ae0)(GVar8._nodePtr,iVar5);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._width.fields,method_01);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._height.fields,method_02);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields,method_03);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields,method_04);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxWidth.fields,method_05);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxHeight.fields,method_06);
    GVar8._nodePtr = local_50._nodePtr;
    fVar1 = (__this->fields)._aspectRatio.fields.Value;
    if (g_data_057a9be0 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetAspectRatio";
      local_30 = 0x1e;
      local_28 = 0x200000000;
      local_20 = 0xc;
      local_1c = 0;
      g_data_057a9be0 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9be0)(fVar1,GVar8._nodePtr);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,0,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginLeft.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,1,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginTop.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,2,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginRight.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,3,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginBottom.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,0,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,1,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,2,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields,in_RCX);
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,3,
               (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields,in_RCX);
    GVar8._nodePtr = local_50._nodePtr;
    fVar1 = (__this->fields)._gapColumn;
    if (g_data_057a9b68 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetGap";
      local_30 = 0x16;
      local_28 = 0x200000000;
      local_20 = 0x10;
      local_1c = 0;
      g_data_057a9b68 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9b68)(fVar1,GVar8._nodePtr,0);
    GVar8._nodePtr = local_50._nodePtr;
    fVar1 = (__this->fields)._gapRow;
    if (g_data_057a9b68 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeStyleSetGap";
      local_30 = 0x16;
      local_28 = 0x200000000;
      local_20 = 0x10;
      local_1c = 0;
      g_data_057a9b68 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    (*g_data_057a9b68)(fVar1,GVar8._nodePtr,1);
    return;
  }
  __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)(__this->fields)._configuration;
  if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    GVar11 = Gilzoide_FlexUi_FlexLayoutConfig__get_Config
                       ((Gilzoide_FlexUi_FlexLayoutConfig_o *)__this_02,pMVar16);
    auVar20._8_8_ = extraout_RDX;
    auVar20._0_8_ = GVar11.fields._configPtr;
    goto label_03b2282a;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = (MethodInfo *)0x0;
  UnityEngine_EventSystems_UIBehaviour__OnEnable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this_02,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshParent(__this_02,pMVar16);
  pGStack_88 = exists;
  if (g_data_057a99f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a99f7 = '\x01';
  }
  pGStack_90 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this_02,pMVar16);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    exists = (Gilzoide_FlexUi_FlexLayoutConfig_o *)
             UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    if (exists != (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      do {
        pUVar6 = (UnityEngine_Object_c *)exists->klass;
        uVar2._0_1_ = (pUVar6->_2).rank;
        uVar2._1_1_ = (pUVar6->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar7 = (pUVar6->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
              pVVar12 = &(pUVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
              goto label_03b232d3;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar17);
        }
        pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(exists,TypeInfo_IEnumerator,0);
label_03b232d3:
        cVar9 = (*pVVar12->methodPtr)(exists,pVVar12->method);
        if (cVar9 == '\0') {
          __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          goto label_03b233e7;
        }
        pUVar6 = (UnityEngine_Object_c *)exists->klass;
        uVar3._0_1_ = (pUVar6->_2).rank;
        uVar3._1_1_ = (pUVar6->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pUVar6->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
              pVVar12 = &(pUVar6->vtable)._0_Equals + (*(int *)((long)&pIVar7->offset + lVar17) + 1);
              goto label_03b23358;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar17);
        }
        pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(exists,TypeInfo_IEnumerator,1);
label_03b23358:
        __this_01 = (UnityEngine_Component_o *)(*pVVar12->methodPtr)(exists,pVVar12->method);
        if (__this_01 == (UnityEngine_Component_o *)0x0) goto label_03b2348a;
        if (((__this_01->klass->_2).naturalAligment < *(byte *)(TypeInfo_Transform + 0x130)) ||
           (pMVar16 = (MethodInfo *)(__this_01->klass->_2).typeHierarchy,
           *(long *)((long)pMVar16 + (ulong)*(byte *)(TypeInfo_Transform + 0x130) * 8 + -8) != TypeInfo_Transform))
        goto label_03b23482;
        bVar10 = UnityEngine_Component__TryGetComponent_object_
                           (__this_01,(Il2CppObject **)&pGStack_90,MethodInfo_Boolean_TryGetComponent_FlexLayout);
        if ((char)bVar10 != '\0') {
          if (pGStack_90 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b2348f;
          cVar9 = (*(pGStack_90->klass->vtable)._9_IsActive.methodPtr)
                            (pGStack_90,(pGStack_90->klass->vtable)._9_IsActive.method);
          if (cVar9 != '\0') {
            Gilzoide_FlexUi_FlexLayout__TrackChild(__this_02,pGStack_90,0,pMVar16);
          }
        }
      } while( true );
    }
    goto label_03b23499;
  }
  goto label_03b23494;
label_03b23482:
  il2cpp_runtime_helper_022b2fd0(__this_01);
label_03b2348a:
  il2cpp_runtime_helper_022b2c90();
label_03b2348f:
  il2cpp_runtime_helper_022b2c90();
  __this = (Gilzoide_FlexUi_FlexLayout_o *)&MethodInfo_Boolean_TryGetComponent_FlexLayout;
label_03b23494:
  il2cpp_runtime_helper_022b2c90();
label_03b23499:
  il2cpp_runtime_helper_022b2c90();
  while (auVar19 = il2cpp_runtime_helper_022fefe0(__this), auVar19._8_4_ == 1) {
    puVar15 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
    __this = (Gilzoide_FlexUi_FlexLayout_o *)*puVar15;
    __cxa_end_catch();
label_03b233e7:
    pMVar16 = TypeInfo_IDisposable;
    pGVar13 = (Gilzoide_FlexUi_FlexLayoutConfig_o *)il2cpp_runtime_helper_023051f0();
    if (pGVar13 != (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      pUVar6 = (UnityEngine_Object_c *)pGVar13->klass;
      uVar4._0_1_ = (pUVar6->_2).rank;
      uVar4._1_1_ = (pUVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pUVar6->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(MethodInfo **)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar12 = &(pUVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
            goto label_03b2345d;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar17);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar13,TypeInfo_IDisposable,0);
label_03b2345d:
      pMVar16 = pVVar12->method;
      (*pVVar12->methodPtr)(pGVar13);
      exists = pGVar13;
    }
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this_02,pMVar16);
      return;
    }
  }
  plVar14 = (long *)il2cpp_runtime_helper_023051f0(exists,TypeInfo_IDisposable);
  if (plVar14 != (long *)0x0) {
    lVar17 = *plVar14;
    if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
      lVar18 = 0;
      do {
        if (*(MethodInfo **)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
          puVar15 = (undefined8 *)
                    (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
          goto label_03b2357d;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_03b2357d:
    (*(code *)*puVar15)(plVar14,puVar15[1]);
  }
  _Unwind_Resume(auVar19._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeMeasure
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22530

void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o *__this_00;
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar3;
  intptr_t iVar4;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  Il2CppMethodPointer local_20;
  
  if (g_data_057a99f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_ILayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetContext_RectTransform);
    g_data_057a99f4 = '\x01';
  }
  local_20 = (Il2CppMethodPointer)0x0;
  iVar4 = (__this->fields)._layoutNode.fields._nodePtr;
  if (g_data_057a9a68 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeGetChildCount";
    local_38 = 0x18;
    local_30 = 0x200000000;
    local_28 = 8;
    local_24 = 0;
    g_data_057a9a68 = (code *)il2cpp_runtime_helper_023055b0(&local_50);
  }
  __this_00 = &(__this->fields)._layoutNode;
  iVar1 = (*g_data_057a9a68)(iVar4);
  method_00 = extraout_RDX;
  if (iVar1 == 0) {
    method_01 = (MethodInfo *)&stack0xffffffffffffffe0;
    bVar2 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)__this,(Il2CppObject **)method_01,MethodInfo_Boolean_TryGetComponent_ILayoutElement);
    method_00 = extraout_RDX_00;
    if ((char)bVar2 != '\0') {
      value = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method_01);
      Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
                ((Gilzoide_FlexUi_Yoga_YGNode_o)__this_00,(Il2CppObject *)value,MethodInfo_Void_SetContext_RectTransform);
      if (*(int *)(TypeInfo_FlexLayout + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar3 = **(undefined8 **)(TypeInfo_FlexLayout + 0xb8);
      iVar4 = (__this_00->fields)._nodePtr;
      if (g_data_057a9a88 == (code *)0x0) {
        local_50 = "flex-ui";
        local_48 = 7;
        local_40 = "FlexUi_NodeSetMeasureFunc";
        local_38 = 0x19;
        local_30 = 0x200000000;
        local_28 = 0x10;
        local_24 = 0;
        g_data_057a9a88 = (code *)il2cpp_runtime_helper_023055b0(&local_50);
      }
      goto label_03b2273e;
    }
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext
            ((Gilzoide_FlexUi_Yoga_YGNode_o)__this_00,(System_Runtime_InteropServices_GCHandle_o)0x0,method_00
            );
  iVar4 = (__this_00->fields)._nodePtr;
  if (g_data_057a9a88 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeSetMeasureFunc";
    local_38 = 0x19;
    local_30 = 0x200000000;
    local_28 = 0x10;
    local_24 = 0;
    g_data_057a9a88 = (code *)il2cpp_runtime_helper_023055b0(&local_50);
  }
  uVar3 = 0;
label_03b2273e:
  (*g_data_057a9a88)(iVar4,uVar3);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b22fe0

void Gilzoide_FlexUi_FlexLayout__RefreshParent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Gilzoide_FlexUi_FlexLayout_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_RectTransform_o *pUVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Component_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *pGVar10;
  long *plVar11;
  undefined8 *puVar12;
  MethodInfo *in_RCX;
  MethodInfo *pMVar13;
  Gilzoide_FlexUi_FlexLayout_o *unaff_RBX;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  long lVar14;
  long lVar15;
  long *unaff_R12;
  undefined1 auVar16 [12];
  Gilzoide_FlexUi_FlexLayout_o *local_60;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_58;
  long *plStack_50;
  Gilzoide_FlexUi_FlexLayout_c *local_28;
  
  pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)&stack0xffffffffffffffd8;
  if (g_data_057a99f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99f5 = '\x01';
  }
  local_28 = (Gilzoide_FlexUi_FlexLayout_c *)0x0;
  __this_01 = __this;
  pUVar8 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method);
  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
    unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    __this_01 = unaff_RBX;
    bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_03b2315d:
      if (g_data_057a99f6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a99f6 = '\x01';
      }
      pGVar10 = (__this->fields)._parentNode;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)&(__this->fields)._parentNode;
      method = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar10,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
label_03b231bc:
        *(Gilzoide_FlexUi_FlexLayout_o **)unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        il2cpp_runtime_helper_022b4080(unaff_RBX,0);
        return;
      }
      __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      if (*(Gilzoide_FlexUi_FlexLayout_o **)unaff_RBX != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__UntrackChild(*(Gilzoide_FlexUi_FlexLayout_o **)unaff_RBX,__this,1,in_RCX);
        goto label_03b231bc;
      }
    }
    else if (unaff_RBX != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      bVar7 = UnityEngine_Component__TryGetComponent_object_
                        ((UnityEngine_Component_o *)unaff_RBX,(Il2CppObject **)&stack0xffffffffffffffd8,
                         MethodInfo_Boolean_TryGetComponent_FlexLayout);
      if ((char)bVar7 == '\0') goto label_03b2315d;
      __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      method = (MethodInfo *)pGVar10;
      if (local_28 != (Gilzoide_FlexUi_FlexLayout_c *)0x0) {
        cVar6 = (*(((local_28->_1).image)->vtable)._9_IsActive.methodPtr)();
        pGVar4 = local_28;
        if (cVar6 == '\0') goto label_03b2315d;
        pGVar10 = (__this->fields)._parentNode;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)pGVar10,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        if (g_data_057a99f6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a99f6 = '\x01';
        }
        unaff_RBX = (__this->fields)._parentNode;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pGVar10 = (__this->fields)._parentNode;
          __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (pGVar10 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b231d9;
          method = (MethodInfo *)__this;
          Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar10,__this,1,in_RCX);
        }
        __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        if (local_28 != (Gilzoide_FlexUi_FlexLayout_c *)0x0) {
          Gilzoide_FlexUi_FlexLayout__TrackChild((Gilzoide_FlexUi_FlexLayout_o *)local_28,__this,1,in_RCX);
          return;
        }
      }
    }
  }
label_03b231d9:
  local_60 = (Gilzoide_FlexUi_FlexLayout_o *)il2cpp_runtime_helper_022b2c90();
  pGStack_58 = unaff_RBX;
  plStack_50 = unaff_R12;
  if (g_data_057a99f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a99f7 = '\x01';
  }
  local_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pUVar8 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this_01,method);
  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
    unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pUVar8,(MethodInfo *)0x0);
    if (unaff_RBX != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      do {
        pGVar4 = unaff_RBX->klass;
        uVar1._0_1_ = (pGVar4->_2).rank;
        uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pGVar4->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerator) {
              pVVar9 = &(pGVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar14);
              goto label_03b232d3;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar14);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_03b232d3:
        cVar6 = (*pVVar9->methodPtr)(unaff_RBX,pVVar9->method);
        if (cVar6 == '\0') {
          __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          goto label_03b233e7;
        }
        pGVar4 = unaff_RBX->klass;
        uVar2._0_1_ = (pGVar4->_2).rank;
        uVar2._1_1_ = (pGVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pGVar4->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerator) {
              pVVar9 = &(pGVar4->vtable)._0_Equals + (*(int *)((long)&pIVar5->offset + lVar14) + 1);
              goto label_03b23358;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar14);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,1);
label_03b23358:
        __this_00 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(unaff_RBX,pVVar9->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_03b2348a;
        if (((__this_00->klass->_2).naturalAligment < *(byte *)(TypeInfo_Transform + 0x130)) ||
           (pMVar13 = (MethodInfo *)(__this_00->klass->_2).typeHierarchy,
           *(long *)((long)pMVar13 + (ulong)*(byte *)(TypeInfo_Transform + 0x130) * 8 + -8) != TypeInfo_Transform))
        goto label_03b23482;
        bVar7 = UnityEngine_Component__TryGetComponent_object_
                          (__this_00,(Il2CppObject **)&local_60,MethodInfo_Boolean_TryGetComponent_FlexLayout);
        if ((char)bVar7 != '\0') {
          if (local_60 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b2348f;
          cVar6 = (*(local_60->klass->vtable)._9_IsActive.methodPtr)
                            (local_60,(local_60->klass->vtable)._9_IsActive.method);
          if (cVar6 != '\0') {
            Gilzoide_FlexUi_FlexLayout__TrackChild(__this_01,local_60,0,pMVar13);
          }
        }
      } while( true );
    }
    goto label_03b23499;
  }
  goto label_03b23494;
label_03b23482:
  il2cpp_runtime_helper_022b2fd0(__this_00);
label_03b2348a:
  il2cpp_runtime_helper_022b2c90();
label_03b2348f:
  il2cpp_runtime_helper_022b2c90();
  __this = (Gilzoide_FlexUi_FlexLayout_o *)&MethodInfo_Boolean_TryGetComponent_FlexLayout;
label_03b23494:
  il2cpp_runtime_helper_022b2c90();
label_03b23499:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar16 = il2cpp_runtime_helper_022fefe0(__this);
    if (auVar16._8_4_ != 1) break;
    puVar12 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    __this = (Gilzoide_FlexUi_FlexLayout_o *)*puVar12;
    __cxa_end_catch();
label_03b233e7:
    pMVar13 = TypeInfo_IDisposable;
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)il2cpp_runtime_helper_023051f0();
    if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar4 = pGVar10->klass;
      uVar3._0_1_ = (pGVar4->_2).rank;
      uVar3._1_1_ = (pGVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pGVar4->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(MethodInfo **)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IDisposable) {
            pVVar9 = &(pGVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar14);
            goto label_03b2345d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar10,TypeInfo_IDisposable,0);
label_03b2345d:
      pMVar13 = pVVar9->method;
      (*pVVar9->methodPtr)(pGVar10);
      unaff_RBX = pGVar10;
    }
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this_01,pMVar13);
      return;
    }
  }
  plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_IDisposable);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(MethodInfo **)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_03b2357d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_03b2357d:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  _Unwind_Resume(auVar16._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$ClearParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b23640

void Gilzoide_FlexUi_FlexLayout__ClearParent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  Gilzoide_FlexUi_FlexLayout_o *exists;
  System_Collections_Generic_List_FlexLayout__o *pSVar2;
  UnityEngine_Object_o *x;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_FlexLayout_o *__this_04;
  undefined1 auVar6 [12];
  undefined1 auVar7 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Object_o *exists_00;
  undefined1 auStack_78 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSStack_70;
  UnityEngine_Object_o *pUStack_68;
  Il2CppType **ppIStack_60;
  Il2CppRGCTXData *pIStack_58;
  _union_249689 _Stack_50;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_48;
  
  if (g_data_057a99f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99f6 = '\x01';
  }
  exists = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  __this_04 = (__this->fields)._parentNode;
  if (__this_04 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__UntrackChild(__this_04,__this,1,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_48 = exists;
  if (g_data_057a99fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99fb = '\x01';
  }
  auVar7 = (undefined1  [8])0x0;
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar9 = (UnityEngine_Object_o *)0x0;
  UnityEngine_DrivenRectTransformTracker__Clear(&(__this_04->fields)._isRefreshScheduled,0);
  pSVar2 = (__this_04->fields)._childrenNodes;
  if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    auVar7 = auStack_78;
    pSVar8 = pSStack_70;
    pUVar9 = pUStack_68;
    while( true ) {
      do {
        exists_00 = pUVar9;
        __this_00.fields._8_8_ = pSVar8;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
        __this_00.fields._current = (Il2CppObject *)exists_00;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
        if ((char)bVar4 == '\0') {
          __this_01.fields._8_8_ = pSVar8;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
          __this_01.fields._current = (Il2CppObject *)exists_00;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
          pUVar9 = exists_00;
          goto label_03b23827;
        }
        pUVar9 = exists_00;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Implicit(exists_00,(MethodInfo *)0x0);
      } while ((char)bVar4 == '\0');
      if (exists_00 == (UnityEngine_Object_o *)0x0) break;
      x = (UnityEngine_Object_o *)exists_00[10].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this_04,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        exists_00[10].fields.m_CachedPtr = 0;
        il2cpp_runtime_helper_022b4080(&exists_00[10].fields,0);
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_03b2395a:
      __this_03.fields._8_8_ = pSVar8;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
      __this_03.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar8;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
    __this_02.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_03b2395a;
    }
label_03b23827:
    pSVar2 = (__this_04->fields)._childrenNodes;
    if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      lVar3 = (__this_04->fields)._layoutNode.fields._nodePtr;
      if (lVar3 != 0) {
        if (g_data_057a9a60 == (code *)0x0) {
          auStack_78 = (undefined1  [8])0xce5590;
          pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x7;
          pUStack_68 = (UnityEngine_Object_o *)0xd1427b;
          ppIStack_60 = (Il2CppType **)&g_data_0000001c;
          pIStack_58 = (Il2CppRGCTXData *)0x200000000;
          _Stack_50._0_4_ = 8;
          _Stack_50._4_1_ = 0;
          g_data_057a9a60 = (code *)il2cpp_runtime_helper_023055b0(auStack_78);
        }
        (*g_data_057a9a60)(lVar3);
      }
      return;
    }
  } while( true );
}


// Gilzoide.FlexUi.FlexLayout$$RefreshChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b231e0

void Gilzoide_FlexUi_FlexLayout__RefreshChildren(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_RectTransform_o *__this_00;
  VirtualInvokeData *pVVar8;
  UnityEngine_Component_o *__this_01;
  System_Collections_IEnumerator_o *pSVar9;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  System_Collections_IEnumerator_o *unaff_RBX;
  long lVar13;
  long lVar14;
  MethodInfo_24E89E0 **unaff_R14;
  undefined1 auVar15 [12];
  Gilzoide_FlexUi_FlexLayout_o *pGStack_38;
  
  if (g_data_057a99f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a99f7 = '\x01';
  }
  pGStack_38 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    unaff_RBX = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    if (unaff_RBX != (System_Collections_IEnumerator_o *)0x0) {
      unaff_R14 = &MethodInfo_Boolean_TryGetComponent_FlexLayout;
      do {
        pSVar4 = unaff_RBX->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
              goto label_03b232d3;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_03b232d3:
        cVar6 = (*pVVar8->methodPtr)(unaff_RBX,pVVar8->method);
        if (cVar6 == '\0') {
          unaff_R14 = (MethodInfo_24E89E0 **)0x0;
          goto label_03b233e7;
        }
        pSVar4 = unaff_RBX->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
              goto label_03b23358;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar13);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,1);
label_03b23358:
        __this_01 = (UnityEngine_Component_o *)(*pVVar8->methodPtr)(unaff_RBX,pVVar8->method);
        if (__this_01 == (UnityEngine_Component_o *)0x0) goto label_03b2348a;
        if (((__this_01->klass->_2).naturalAligment < *(byte *)(TypeInfo_Transform + 0x130)) ||
           (pMVar12 = (MethodInfo *)(__this_01->klass->_2).typeHierarchy,
           *(long *)((long)pMVar12 + (ulong)*(byte *)(TypeInfo_Transform + 0x130) * 8 + -8) != TypeInfo_Transform))
        goto label_03b23482;
        bVar7 = UnityEngine_Component__TryGetComponent_object_
                          (__this_01,(Il2CppObject **)&pGStack_38,MethodInfo_Boolean_TryGetComponent_FlexLayout);
        if ((char)bVar7 != '\0') {
          if (pGStack_38 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b2348f;
          cVar6 = (*(pGStack_38->klass->vtable)._9_IsActive.methodPtr)
                            (pGStack_38,(pGStack_38->klass->vtable)._9_IsActive.method);
          if (cVar6 != '\0') {
            Gilzoide_FlexUi_FlexLayout__TrackChild(__this,pGStack_38,0,pMVar12);
          }
        }
      } while( true );
    }
    goto label_03b23499;
  }
  goto label_03b23494;
label_03b23482:
  il2cpp_runtime_helper_022b2fd0(__this_01);
label_03b2348a:
  il2cpp_runtime_helper_022b2c90();
label_03b2348f:
  il2cpp_runtime_helper_022b2c90();
label_03b23494:
  il2cpp_runtime_helper_022b2c90();
label_03b23499:
  il2cpp_runtime_helper_022b2c90();
  while (auVar15 = il2cpp_runtime_helper_022fefe0(unaff_R14), auVar15._8_4_ == 1) {
    puVar11 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
    unaff_R14 = (MethodInfo_24E89E0 **)*puVar11;
    __cxa_end_catch();
label_03b233e7:
    pMVar12 = TypeInfo_IDisposable;
    pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_023051f0();
    if (pSVar9 != (System_Collections_IEnumerator_o *)0x0) {
      pSVar4 = pSVar9->klass;
      uVar3._0_1_ = (pSVar4->_2).rank;
      uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(MethodInfo **)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IDisposable) {
            pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_03b2345d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IDisposable,0);
label_03b2345d:
      pMVar12 = pVVar8->method;
      (*pVVar8->methodPtr)(pSVar9);
      unaff_RBX = pSVar9;
    }
    if (unaff_R14 == (MethodInfo_24E89E0 **)0x0) {
      Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,pMVar12);
      return;
    }
  }
  plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_IDisposable);
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(MethodInfo **)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_03b2357d;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_03b2357d:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  _Unwind_Resume(auVar15._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$TrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__TrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x3b24770

void Gilzoide_FlexUi_FlexLayout__TrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool_conflict callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *pSVar1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  uint uVar2;
  Gilzoide_FlexUi_Yoga_YGNode_Fields child_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar3;
  MethodInfo *pMVar4;
  ulong extraout_RDX;
  Gilzoide_FlexUi_Yoga_YGNode_Fields unaff_RBX;
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields method_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  undefined4 uVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_f0;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_e8;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_e0;
  _union_214693 _Stack_d8;
  uint32_t uStack_d0;
  uint16_t uStack_cc;
  uint16_t uStack_ca;
  uint16_t uStack_c8;
  uint8_t uStack_c6;
  uint8_t uStack_c5;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint16_t uStack_a8;
  uint8_t uStack_a6;
  uint8_t uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  intptr_t iStack_90;
  ulong uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_28;
  
  child_00._nodePtr = (intptr_t)child;
  __this_01 = __this;
  if (g_data_057a99f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_BinarySearch);
    __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)&MethodInfo_Void_Insert;
    il2cpp_runtime_helper_023445d0();
    g_data_057a99f8 = '\x01';
  }
  local_28._nodePtr = 0;
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = __this;
    child_00._nodePtr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&(child->fields)._parentNode);
    pSVar1 = (__this->fields)._childrenNodes;
    __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      child_00._nodePtr = (intptr_t)child;
      uVar2 = System_Collections_Generic_List_object___BinarySearch_362c630
                        ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)child,
                         (System_Collections_Generic_IComparer_T__o *)__this,MethodInfo_Int32_BinarySearch);
      if ((int)uVar2 < 0) {
        pSVar1 = (__this->fields)._childrenNodes;
        __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        if (pSVar1 == (System_Collections_Generic_List_FlexLayout__o *)0x0) goto label_03b24858;
        uVar2 = ~uVar2;
        method_00 = (MethodInfo *)(ulong)uVar2;
        pMVar4 = MethodInfo_Void_Insert;
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)pSVar1,uVar2,(Il2CppObject *)child,
                   (MethodInfo_362D240 *)MethodInfo_Void_Insert);
        local_28._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_00);
        child_00._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,method_00);
        Gilzoide_FlexUi_Yoga_YGNode__InsertChild
                  ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_28,(Gilzoide_FlexUi_Yoga_YGNode_o)child_00._nodePtr,
                   uVar2,pMVar4);
      }
      if ((char)callChildrenChanged != '\0') {
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)child_00._nodePtr);
      }
      return;
    }
  }
label_03b24858:
  il2cpp_runtime_helper_022b2c90();
  method_01._nodePtr = child_00._nodePtr;
  __this_02 = __this_01;
  if (g_data_057a99f9 == '\0') {
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)&MethodInfo_Boolean_Remove;
    uStack_88 = 0x3b2488a;
    il2cpp_runtime_helper_023445d0();
    g_data_057a99f9 = '\x01';
  }
  if ((Gilzoide_FlexUi_FlexLayout_o *)child_00._nodePtr != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (((Gilzoide_FlexUi_FlexLayout_o *)child_00._nodePtr)->fields)._parentNode =
         (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    pMVar4 = (MethodInfo *)0x0;
    uStack_88 = 0x3b248b3;
    il2cpp_runtime_helper_022b4080(&(((Gilzoide_FlexUi_FlexLayout_o *)child_00._nodePtr)->fields)._parentNode);
    uStack_88 = 0x3b248bb;
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this_01,pMVar4);
    uStack_88 = 0x3b248c6;
    unaff_RBX._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child_00._nodePtr,pMVar4);
    if (g_data_057a9a58 == (code *)0x0) {
      pcStack_80 = "flex-ui";
      uStack_78 = 7;
      pcStack_70 = "FlexUi_NodeRemoveChild";
      uStack_68 = 0x16;
      uStack_60 = 0x200000000;
      uStack_58 = 0x10;
      uStack_54 = 0;
      uStack_88 = 0x3b24922;
      g_data_057a9a58 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_80);
    }
    uStack_88 = 0x3b24931;
    method_01._nodePtr = unaff_RBX._nodePtr;
    (*g_data_057a9a58)(GVar3.fields._nodePtr);
    pSVar1 = (__this_01->fields)._childrenNodes;
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      uStack_88 = 0x3b2494f;
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)child_00._nodePtr,
                 MethodInfo_Boolean_Remove);
      if ((char)(extraout_RDX & 0xffffffff) != '\0') {
        uStack_88 = 0x3b2495c;
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this_01,(MethodInfo *)child_00._nodePtr);
      }
      return;
    }
  }
  uStack_88 = 0x3b2496e;
  il2cpp_runtime_helper_022b2c90();
  iStack_90 = unaff_RBX._nodePtr;
  uStack_88 = extraout_RDX & 0xffffffff;
  Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this_02,(MethodInfo *)method_01._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_e8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_e0 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_f0 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar5 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_d8,(MethodInfo *)0x0);
  uStack_a8 = uStack_c8;
  uStack_a6 = uStack_c6;
  uStack_a5 = uStack_c5;
  uStack_a4 = uStack_c4;
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  uStack_b8 = _Stack_d8._0_4_;
  uStack_b4 = _Stack_d8._4_4_;
  uStack_b0 = uStack_d0;
  uStack_ac = uStack_cc;
  uStack_aa = uStack_ca;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xfffffffffffffef0,0);
  pGStack_f0 = __this_02;
  il2cpp_runtime_helper_022b4080(&pGStack_f0,__this_02);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar5;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_d8._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_d8._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_d0;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_cc;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_cc,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_uStack_c8;
  __this_00.fields.m_task._2_1_ = SUB41(_uStack_c8,2);
  __this_00.fields.m_task._3_1_ = SUB41(_uStack_c8,3);
  __this_00.fields.m_task._4_4_ = uStack_c4;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xfffffffffffffef0,
             (MethodInfo_24C3830 *)&stack0xfffffffffffffee8);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$UntrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UntrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x3b24860

void Gilzoide_FlexUi_FlexLayout__UntrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool_conflict callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_01;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_Yoga_YGNode_Fields unaff_RBX;
  Gilzoide_FlexUi_Yoga_YGNode_Fields method_00;
  MethodInfo *method_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_c8;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_c0;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_b8;
  _union_214693 _Stack_b0;
  uint32_t uStack_a8;
  uint16_t uStack_a4;
  uint16_t uStack_a2;
  uint16_t uStack_a0;
  uint8_t uStack_9e;
  uint8_t uStack_9d;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint32_t uStack_88;
  uint16_t uStack_84;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint8_t uStack_7e;
  uint8_t uStack_7d;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  intptr_t iStack_68;
  ulong uStack_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  method_00._nodePtr = (intptr_t)child;
  __this_02 = __this;
  if (g_data_057a99f9 == '\0') {
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)&MethodInfo_Boolean_Remove;
    uStack_60 = 0x3b2488a;
    il2cpp_runtime_helper_023445d0();
    g_data_057a99f9 = '\x01';
  }
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    method_01 = (MethodInfo *)0x0;
    uStack_60 = 0x3b248b3;
    il2cpp_runtime_helper_022b4080(&(child->fields)._parentNode);
    uStack_60 = 0x3b248bb;
    GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_01);
    uStack_60 = 0x3b248c6;
    unaff_RBX._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,method_01);
    if (g_data_057a9a58 == (code *)0x0) {
      local_58 = "flex-ui";
      local_50 = 7;
      local_48 = "FlexUi_NodeRemoveChild";
      local_40 = 0x16;
      local_38 = 0x200000000;
      local_30 = 0x10;
      local_2c = 0;
      uStack_60 = 0x3b24922;
      g_data_057a9a58 = (code *)il2cpp_runtime_helper_023055b0(&local_58);
    }
    uStack_60 = 0x3b24931;
    method_00._nodePtr = unaff_RBX._nodePtr;
    (*g_data_057a9a58)(GVar1.fields._nodePtr);
    __this_00 = (__this->fields)._childrenNodes;
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      uStack_60 = 0x3b2494f;
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,MethodInfo_Boolean_Remove);
      if ((char)callChildrenChanged != '\0') {
        uStack_60 = 0x3b2495c;
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)child);
      }
      return;
    }
  }
  uStack_60 = 0x3b2496e;
  il2cpp_runtime_helper_022b2c90();
  iStack_68 = unaff_RBX._nodePtr;
  uStack_60 = (ulong)(uint)callChildrenChanged;
  Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this_02,(MethodInfo *)method_00._nodePtr);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  pGStack_c0 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_b8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_c8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_b0,(MethodInfo *)0x0);
  uStack_80 = uStack_a0;
  uStack_7e = uStack_9e;
  uStack_7d = uStack_9d;
  uStack_7c = uStack_9c;
  uStack_78 = uStack_98;
  uStack_74 = uStack_94;
  uStack_90 = _Stack_b0._0_4_;
  uStack_8c = _Stack_b0._4_4_;
  uStack_88 = uStack_a8;
  uStack_84 = uStack_a4;
  uStack_82 = uStack_a2;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff18,0);
  pGStack_c8 = __this_02;
  il2cpp_runtime_helper_022b4080(&pGStack_c8,__this_02);
  __this_01.fields.m_synchronizationContext._4_4_ = uVar2;
  __this_01.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_01.fields.m_coreState.fields.m_stateMachine._0_4_ = _Stack_b0._0_4_;
  __this_01.fields.m_coreState.fields.m_stateMachine._4_4_ = _Stack_b0._4_4_;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_a8;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_a4;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_a4,2);
  __this_01.fields.m_task._0_2_ = (uint16_t)_uStack_a0;
  __this_01.fields.m_task._2_1_ = SUB41(_uStack_a0,2);
  __this_01.fields.m_task._3_1_ = SUB41(_uStack_a0,3);
  __this_01.fields.m_task._4_4_ = uStack_9c;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_01,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff18,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff10);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshDrivenRectTransformTracker
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b24c20

void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  long *plVar5;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Gilzoide_FlexUi_FlexLayout_o *__this_05;
  
  if (g_data_057a99fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    g_data_057a99fa = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_05 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pbVar1 = &(__this->fields)._isRefreshScheduled;
  UnityEngine_DrivenRectTransformTracker__Clear(pbVar1,0);
  __this_00 = (__this->fields)._childrenNodes;
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    while( true ) {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = pSVar7;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = pSVar7;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        return;
      }
      if (__this_05 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) break;
      pUVar4 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this_05,method_00);
      UnityEngine_DrivenRectTransformTracker__Add(pbVar1,__this,pUVar4,0x3f06,0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = pSVar7;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._list = pSVar7;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar6._0_8_);
}


// Gilzoide.FlexUi.FlexLayout$$OnChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b24970

void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  undefined4 uVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_214693 local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t local_48;
  uint8_t uStack_46;
  uint8_t uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t local_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this,method);
  if (g_data_057a99f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_FlexLayout_RefreshRootLayout_d__155);
    g_data_057a99f0 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar1 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0);
  local_28 = local_48;
  uStack_26 = uStack_46;
  uStack_25 = uStack_45;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58._0_4_;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_2a = uStack_4a;
  il2cpp_runtime_helper_022b4080((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_helper_022b4080(&pGStack_70,__this);
  __this_00.fields.m_synchronizationContext._4_4_ = uVar1;
  __this_00.fields.m_synchronizationContext._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_stateMachine._0_4_ = local_58._0_4_;
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = local_58._4_4_;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = uStack_50;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_uStack_4c;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_uStack_4c,2);
  __this_00.fields.m_task._0_2_ = (uint16_t)_local_48;
  __this_00.fields.m_task._2_1_ = SUB41(_local_48,2);
  __this_00.fields.m_task._3_1_ = SUB41(_local_48,3);
  __this_00.fields.m_task._4_4_ = uStack_44;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (__this_00,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_24C3830 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$ClearTrackedChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b236c0

void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_FlexLayout__o *pSVar2;
  UnityEngine_Object_o *x;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Object_o *exists;
  undefined1 local_60 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSStack_58;
  UnityEngine_Object_o *local_50;
  Il2CppType **local_48;
  Il2CppRGCTXData *local_40;
  _union_249689 local_38;
  
  if (g_data_057a99fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a99fb = '\x01';
  }
  auVar7 = (undefined1  [8])0x0;
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar9 = (UnityEngine_Object_o *)0x0;
  UnityEngine_DrivenRectTransformTracker__Clear(&(__this->fields)._isRefreshScheduled,0);
  pSVar2 = (__this->fields)._childrenNodes;
  if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_Gilzoide_FlexUi_FlexLayout_GetEnumer);
    auVar7 = local_60;
    pSVar8 = pSStack_58;
    pUVar9 = local_50;
    while( true ) {
      do {
        exists = pUVar9;
        __this_00.fields._8_8_ = pSVar8;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
        __this_00.fields._current = (Il2CppObject *)exists;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
        if ((char)bVar4 == '\0') {
          __this_01.fields._8_8_ = pSVar8;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
          __this_01.fields._current = (Il2CppObject *)exists;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
          pUVar9 = exists;
          goto label_03b23827;
        }
        pUVar9 = exists;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      } while ((char)bVar4 == '\0');
      if (exists == (UnityEngine_Object_o *)0x0) break;
      x = (UnityEngine_Object_o *)exists[10].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        exists[10].fields.m_CachedPtr = 0;
        il2cpp_runtime_helper_022b4080(&exists[10].fields,0);
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_03b2395a:
      __this_03.fields._8_8_ = pSVar8;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
      __this_03.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar8;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auVar7;
    __this_02.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_03b2395a;
    }
label_03b23827:
    pSVar2 = (__this->fields)._childrenNodes;
    if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      lVar3 = (__this->fields)._layoutNode.fields._nodePtr;
      if (lVar3 != 0) {
        if (g_data_057a9a60 == (code *)0x0) {
          local_60 = (undefined1  [8])0xce5590;
          pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x7;
          local_50 = (UnityEngine_Object_o *)0xd1427b;
          local_48 = (Il2CppType **)&g_data_0000001c;
          local_40 = (Il2CppRGCTXData *)0x200000000;
          local_38._0_4_ = 8;
          local_38._4_1_ = 0;
          g_data_057a9a60 = (code *)il2cpp_runtime_helper_023055b0(local_60);
        }
        (*g_data_057a9a60)(lVar3);
      }
      return;
    }
  } while( true );
}


// Gilzoide.FlexUi.FlexLayout$$RectTransformMeasureFunc
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc (intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x3b1df30

UnityEngine_Vector2_o
Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc
          (intptr_t nodePtr,float width,int32_t widthMode,float height,int32_t heightMode,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *rect;
  float fVar2;
  intptr_t local_30;
  float local_28;
  
  local_28 = height;
  if (g_data_057a99fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetContext_RectTransform);
    g_data_057a99fc = '\x01';
  }
  local_30 = nodePtr;
  rect = (UnityEngine_RectTransform_o *)
         Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_
                   ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_30,MethodInfo_RectTransform_GetContext_RectTransform);
  if (widthMode == 2) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(rect,(MethodInfo *)0x0);
    if (fVar2 <= width) {
      width = fVar2;
    }
  }
  else if (widthMode == 0) {
    width = UnityEngine_UI_LayoutUtility__GetPreferredWidth(rect,(MethodInfo *)0x0);
  }
  if (heightMode == 2) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredHeight(rect,(MethodInfo *)0x0);
    if (fVar2 <= local_28) {
      local_28 = fVar2;
    }
  }
  else if (heightMode == 0) {
    local_28 = UnityEngine_UI_LayoutUtility__GetPreferredHeight(rect,(MethodInfo *)0x0);
  }
  UVar1.fields.y = local_28;
  UVar1.fields.x = width;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gilzoide.FlexUi.FlexLayout$$.ctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___ctor (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3b24e20

void Gilzoide_FlexUi_FlexLayout___ctor(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  
  if (g_data_057a99fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gilzoide_FlexUi_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a99fd = '\x01';
  }
  (__this->fields)._positionType = 1;
  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = TypeInfo_YGValue;
  (__this->fields)._positionLeft.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8);
  (__this->fields)._positionTop.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8)
  ;
  (__this->fields)._positionRight.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._positionBottom.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._flexDirection = 2;
  (__this->fields)._flexWrap = 1;
  (__this->fields)._flexBasis.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 0x10);
  (__this->fields)._flexShrink = 1.0;
  (__this->fields)._alignItems = 1;
  (__this->fields)._width.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 0x10);
  (__this->fields)._height.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 0x10);
  (__this->fields)._minWidth.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._minHeight.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._maxWidth.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._maxHeight.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._aspectRatio.fields = *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8)
  ;
  (__this->fields)._marginLeft.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._marginTop.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._marginRight.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._marginBottom.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingLeft.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingTop.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingRight.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingBottom.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  __this_00 = (System_Collections_Generic_List_FlexLayout__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_FlexLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gilzoide_FlexUi_FlexLayout);
  (__this->fields)._childrenNodes = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._childrenNodes);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$.cctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___cctor (const MethodInfo* method);
// 0x3b25040

void Gilzoide_FlexUi_FlexLayout___cctor(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppType **ppIVar2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_01;
  void *pvVar3;
  char cVar4;
  char cVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  intptr_t iVar8;
  System_Threading_Tasks_Task_o *pSVar9;
  MethodInfo_24C3300 *method_00;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  System_Threading_Tasks_TaskScheduler_o *extraout_RDX;
  Il2CppType *pIVar14;
  int iVar15;
  MethodInfo *pMVar16;
  int iVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_ffffffffffffff78;
  undefined1 uVar20;
  undefined7 in_stack_ffffffffffffff81;
  undefined1 uVar21;
  undefined7 in_stack_ffffffffffffff89;
  
  if (g_data_057a99fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RectTransformMeasureFunc);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGMeasureFunc);
    g_data_057a99fe = '\x01';
  }
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_YGMeasureFunc);
  pvVar3 = MethodInfo_Vector2_RectTransformMeasureFunc;
  pIVar7[1].klass = (Il2CppClass *)*(undefined8 *)((long)MethodInfo_Vector2_RectTransformMeasureFunc + 8);
  pIVar7[2].monitor = pvVar3;
  pIVar7[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b4080(pIVar7 + 2,0);
  cVar5 = *(char *)((long)pvVar3 + 0x52);
  pIVar7[4].klass = (Il2CppClass *)pIVar7;
  cVar4 = il2cpp_runtime_helper_022b2a80(pvVar3);
  if (cVar4 != '\0') {
    if (cVar5 == '\x05') {
      pIVar7[1].monitor = &label_020986a0;
    }
    else {
      uVar12 = pIVar7[2].klass;
      pIVar7[1].monitor = pIVar7[1].klass;
      pIVar7[4].klass = (Il2CppClass *)uVar12;
    }
    pIVar7[3].monitor = &label_02098610;
    if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar8 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_(pIVar7,MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc)
    ;
    **(intptr_t **)(TypeInfo_FlexLayout + 0xb8) = iVar8;
    return;
  }
  pSVar9 = (System_Threading_Tasks_Task_o *)il2cpp_runtime_helper_0231a840(0);
  pIVar7 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  *(void **)&pSVar9->fields = extraout_RDX->monitor;
  (pSVar9->fields).m_taskScheduler = extraout_RDX;
  (pSVar9->fields).m_stateObject = pIVar7;
  il2cpp_runtime_helper_022b4080(&(pSVar9->fields).m_stateObject);
  cVar5 = *(char *)((long)&extraout_RDX[3].monitor + 2);
  (pSVar9->fields).m_continuationObject = (Il2CppObject *)pSVar9;
  cVar4 = il2cpp_runtime_helper_022b2a80(extraout_RDX);
  if (cVar4 == '\0') {
    if (pIVar7 == (Il2CppObject *)0x0) {
      method_00 = (MethodInfo_24C3300 *)il2cpp_runtime_helper_0231a840(0);
      il2cpp_runtime_helper_022b2b10();
      if (g_data_057a99ff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Task);
        il2cpp_runtime_helper_023445d0(&TypeInfo_YieldAwaiter);
        g_data_057a99ff = '\x01';
      }
      uVar20 = 0;
      uVar21 = 0;
      iVar17 = *(int *)&method_00->methodPointer;
      if (iVar17 == 0) {
        uVar20 = *(undefined1 *)&method_00->rgctx_data;
        *(undefined1 *)&method_00->rgctx_data = 0;
        *(undefined4 *)&method_00->methodPointer = 0xffffffff;
        iVar17 = -1;
      }
      else {
        pIVar14 = method_00->return_type;
        if (pIVar14 == (Il2CppType *)0x0) goto label_03b25515;
        do {
          if (g_data_057a99ed == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a99ed = '\x01';
          }
          pUVar1 = pIVar14[0x10].data;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto label_03b252e1;
          pIVar14 = pIVar14[0x10].data;
        } while (pIVar14 != (Il2CppType *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_03b252e1:
        method_00->parameters = &pIVar14->data;
        il2cpp_runtime_helper_022b4080(&method_00->parameters);
        ppIVar2 = method_00->parameters;
        if (ppIVar2 == (Il2CppType **)0x0) goto label_03b2551a;
        if (*(char *)((long)ppIVar2 + 0x111) != '\0') goto label_03b254b5;
        *(undefined1 *)((long)ppIVar2 + 0x111) = 1;
        if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar21 = System_Threading_Tasks_Task__Yield((MethodInfo *)0x0);
        uVar20 = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(&stack0xffffffffffffff88);
        if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                          (&stack0xffffffffffffff80);
        if ((char)bVar6 == '\0') {
          *(undefined4 *)&method_00->methodPointer = 0;
          *(undefined1 *)&method_00->rgctx_data = uVar20;
          __this.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar20;
          __this.fields.m_synchronizationContext =
               (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff78;
          __this.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffff81;
          __this.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar21;
          __this.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffff89;
          __this.fields.m_task = pSVar9;
          System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter__FlexLayout__RefreshRootLayout_d__155_
                    (__this,(System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o *)
                            &method_00->virtualMethodPointer,
                     (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff80,
                     method_00);
          return;
        }
      }
      if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(&stack0xffffffffffffff80);
      pUVar1 = (UnityEngine_Object_o *)method_00->parameters;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
      iVar15 = 9;
      if ((char)bVar6 != '\0') {
        if (method_00->parameters == (Il2CppType **)0x0) goto label_03b2551f;
        cVar5 = (**(code **)&(*method_00->parameters)[0x1c].bits)();
        if (cVar5 != '\0') {
          ppIVar2 = method_00->parameters;
          if (ppIVar2 == (Il2CppType **)0x0) goto label_03b25529;
          if (g_data_057a99ed == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a99ed = '\x01';
          }
          pUVar1 = (UnityEngine_Object_o *)ppIVar2[0x20];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar16 = (MethodInfo *)0x0;
          bVar6 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            lVar18 = 0;
            goto label_03b254f2;
          }
          if ((Gilzoide_FlexUi_FlexLayout_o *)method_00->parameters == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
          goto label_03b2552e;
          Gilzoide_FlexUi_FlexLayout__RefreshLayout
                    ((Gilzoide_FlexUi_FlexLayout_o *)method_00->parameters,pMVar16);
        }
      }
      lVar18 = 0;
      if (iVar17 < 0) goto label_03b254f7;
joined_r0x03b254aa:
      if (lVar18 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar18);
label_03b25515:
        il2cpp_runtime_helper_022b2c90();
label_03b2551a:
        il2cpp_runtime_helper_022b2c90();
label_03b2551f:
        il2cpp_runtime_helper_022b2c90();
        do {
          il2cpp_runtime_helper_022b2c90();
label_03b25529:
          il2cpp_runtime_helper_022b2c90();
label_03b2552e:
          auVar19 = il2cpp_runtime_helper_022b2c90();
          while( true ) {
            uVar12 = auVar19._0_8_;
            iVar15 = 0;
            if (auVar19._8_4_ == 1) break;
            if (-1 < iVar17) {
label_03b25570:
              if (auVar19._8_4_ != 1) {
                _Unwind_Resume(uVar12);
              }
              puVar11 = (undefined8 *)__cxa_begin_catch(uVar12);
              uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar5 = il2cpp_runtime_helper_0233e000(uVar12,*(undefined8 *)*puVar11);
              if (cVar5 != '\0') {
                pMVar16 = (MethodInfo *)*puVar11;
                __cxa_end_catch();
                *(undefined4 *)&method_00->methodPointer = 0xfffffffe;
                method_00->parameters = (Il2CppType **)0x0;
                il2cpp_runtime_helper_022b4080(&method_00->parameters,0);
                __this_01.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar20;
                __this_01.fields.m_synchronizationContext =
                     (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff78;
                __this_01.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffff81;
                __this_01.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar21;
                __this_01.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffff89;
                __this_01.fields.m_task = pSVar9;
                System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetException
                          (__this_01,(System_Exception_o *)&method_00->virtualMethodPointer,pMVar16);
                return;
              }
              puVar13 = (undefined8 *)__cxa_allocate_exception(8);
              *puVar13 = *puVar11;
              __cxa_throw(puVar13,&PTR_PTR_05215060,0);
            }
            if (method_00->parameters != (Il2CppType **)0x0) {
              *(undefined1 *)((long)method_00->parameters + 0x111) = 0;
              goto label_03b25570;
            }
            auVar19 = il2cpp_runtime_helper_022b2c90();
          }
          plVar10 = (long *)__cxa_begin_catch(uVar12);
          lVar18 = *plVar10;
          __cxa_end_catch();
label_03b254f2:
          if (-1 < iVar17) goto joined_r0x03b254aa;
label_03b254f7:
        } while (method_00->parameters == (Il2CppType **)0x0);
        *(undefined1 *)((long)method_00->parameters + 0x111) = 0;
        goto joined_r0x03b254aa;
      }
      if ((iVar15 != 0) && (iVar15 != 9)) {
        return;
      }
label_03b254b5:
      *(undefined4 *)&method_00->methodPointer = 0xfffffffe;
      method_00->parameters = (Il2CppType **)0x0;
      il2cpp_runtime_helper_022b4080(&method_00->parameters,0);
      __this_00.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar20;
      __this_00.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff78;
      __this_00.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffff81;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar21;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffff89;
      __this_00.fields.m_task = pSVar9;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult
                (__this_00,(MethodInfo *)&method_00->virtualMethodPointer);
      return;
    }
  }
  else if (cVar5 == '\x05') {
    (pSVar9->fields).m_action = (System_Delegate_o *)&label_020986a0;
    goto label_03b251d5;
  }
  (pSVar9->fields).m_action = *(System_Delegate_o **)&pSVar9->fields;
  (pSVar9->fields).m_continuationObject = (pSVar9->fields).m_stateObject;
label_03b251d5:
  *(undefined1 **)&(pSVar9->fields).m_stateFlags = &label_02098610;
  return;
}


