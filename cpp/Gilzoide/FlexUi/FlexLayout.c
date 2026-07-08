// Type: Gilzoide.FlexUi.FlexLayout
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FlexLayout.cs
// Prior source: NEW in this update
// --------------------------------

// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$MoveNext
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, const MethodInfo* method);
// 0x3abbfc0

/* WARNING: Removing unreachable block (ram,0x03abc2bd) */

void Gilzoide_FlexUi_FlexLayout_<RefreshRootLayout>d__155__MoveNext
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppType **ppIVar2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_01;
  char cVar3;
  bool_conflict bVar4;
  System_Threading_Tasks_Task_o *unaff_RBX;
  Il2CppType *pIVar5;
  MethodInfo *method_00;
  int iVar6;
  undefined8 in_stack_ffffffffffffffb8;
  undefined1 uVar7;
  undefined7 in_stack_ffffffffffffffc1;
  undefined1 uVar8;
  undefined7 in_stack_ffffffffffffffc9;
  
  if (DAT_057010e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_YieldAwaitable_Yield);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Task);
    il2cpp_init_method_metadata(&TypeInfo_YieldAwaiter);
    DAT_057010e6 = '\x01';
  }
  uVar7 = 0;
  uVar8 = 0;
  iVar6 = *(int *)&method->methodPointer;
  if (iVar6 == 0) {
    uVar7 = *(undefined1 *)&method->field7_0x38;
    *(undefined1 *)&method->field7_0x38 = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
    iVar6 = -1;
  }
  else {
    pIVar5 = method->return_type;
    if (pIVar5 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    while( true ) {
      if (DAT_057010d4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_057010d4 = '\x01';
      }
      pUVar1 = pIVar5[0x10].data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') break;
      pIVar5 = pIVar5[0x10].data;
      if (pIVar5 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    method->parameters = &pIVar5->data;
    il2cpp_runtime_glue(&method->parameters);
    ppIVar2 = method->parameters;
    if (ppIVar2 == (Il2CppType **)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)((long)ppIVar2 + 0x111) != '\0') goto LAB_03abc265;
    *(undefined1 *)((long)ppIVar2 + 0x111) = 1;
    if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar8 = System_Threading_Tasks_Task__Yield((MethodInfo *)0x0);
    uVar7 = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(&stack0xffffffffffffffc8);
    if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                      (&stack0xffffffffffffffc0);
    if ((char)bVar4 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined1 *)&method->field7_0x38 = uVar7;
      __this_00.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar7;
      __this_00.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffffb8;
      __this_00.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffffc1;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar8;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffc9;
      __this_00.fields.m_task = unaff_RBX;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter__FlexLayout_<RefreshRootLayout>d__155>
                (__this_00,
                 (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o *)
                 &method->virtualMethodPointer,
                 (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffffc0,
                 (MethodInfo_247D1D0 *)method);
      return;
    }
  }
  if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(&stack0xffffffffffffffc0);
  pUVar1 = (UnityEngine_Object_o *)method->parameters;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (method->parameters == (Il2CppType **)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar3 = (**(code **)&(*method->parameters)[0x1c].bits)();
    if (cVar3 != '\0') {
      ppIVar2 = method->parameters;
      if (ppIVar2 == (Il2CppType **)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (DAT_057010d4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_057010d4 = '\x01';
      }
      pUVar1 = (UnityEngine_Object_o *)ppIVar2[0x20];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if ((Gilzoide_FlexUi_FlexLayout_o *)method->parameters ==
            (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Gilzoide_FlexUi_FlexLayout__RefreshLayout
                  ((Gilzoide_FlexUi_FlexLayout_o *)method->parameters,method_00);
      }
    }
  }
  if (iVar6 < 0) {
    if (method->parameters == (Il2CppType **)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)((long)method->parameters + 0x111) = 0;
  }
LAB_03abc265:
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  method->parameters = (Il2CppType **)0x0;
  il2cpp_runtime_glue(&method->parameters,0);
  __this_01.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar7;
  __this_01.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffffb8;
  __this_01.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffffc1;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar8;
  __this_01.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffc9;
  __this_01.fields.m_task = unaff_RBX;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult
            (__this_01,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$SetStateMachine
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x3abc420

void Gilzoide_FlexUi_FlexLayout_<RefreshRootLayout>d__155__SetStateMachine
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

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
// 0x3ab4db0

bool_conflict
Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool_conflict bVar1;
  
  if (DAT_057010d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010d4 = '\x01';
  }
  x = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gilzoide.FlexUi.FlexLayout$$get_RootLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab4e00

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool_conflict bVar1;
  
  while( true ) {
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (DAT_057010d4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057010d4 = '\x01';
    }
    x = (__this->fields)._parentNode;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') break;
    __this = (__this->fields)._parentNode;
  }
  return __this;
}


// Gilzoide.FlexUi.FlexLayout$$get_ParentLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab4e80

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._parentNode;
}


// Gilzoide.FlexUi.FlexLayout$$get_RectTransform
// il2cpp: UnityEngine_RectTransform_o* Gilzoide_FlexUi_FlexLayout__get_RectTransform (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab4e90

UnityEngine_RectTransform_o *
Gilzoide_FlexUi_FlexLayout__get_RectTransform
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (DAT_057010d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057010d5 = '\x01';
  }
  pUVar4 = (__this->fields)._rectTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._rectTransform;
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = TypeInfo_RectTransform;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar1 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar4->klass != TypeInfo_RectTransform) || (*ppUVar1 = pUVar4, pUVar4->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar4);
    }
    il2cpp_runtime_glue(ppUVar1,pUVar4);
  }
  return *ppUVar1;
}


// Gilzoide.FlexUi.FlexLayout$$get_Configuration
// il2cpp: Gilzoide_FlexUi_FlexLayoutConfig_o* Gilzoide_FlexUi_FlexLayout__get_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab4f40

Gilzoide_FlexUi_FlexLayoutConfig_o *
Gilzoide_FlexUi_FlexLayout__get_Configuration
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._configuration;
}


// Gilzoide.FlexUi.FlexLayout$$set_Configuration
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayoutConfig_o* value, const MethodInfo* method);
// 0x3ab4f50

void Gilzoide_FlexUi_FlexLayout__set_Configuration
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayoutConfig_o *value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  bool_conflict bVar1;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar2;
  Gilzoide_FlexUi_Yoga_YGConfig_o GVar3;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 auVar4 [16];
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 _Stack_58;
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
  
  if (DAT_057010d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010d6 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._configuration = value;
  il2cpp_runtime_glue(&(__this->fields)._configuration,value,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)value,(MethodInfo *)0x0);
  GVar2._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_00);
  if ((char)bVar1 == '\0') {
    if (DAT_05701100 == (code *)0x0) {
      pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)((ulong)pGStack_70 & 0xffffff0000000000);
      DAT_05701100 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
    }
    auVar4 = (*DAT_05701100)();
  }
  else {
    if (value == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GVar3 = Gilzoide_FlexUi_FlexLayoutConfig__get_Config(value,method_00);
    auVar4._8_8_ = extraout_RDX_00;
    auVar4._0_8_ = GVar3.fields._configPtr;
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,
             (Gilzoide_FlexUi_Yoga_YGConfig_Fields)auVar4._0_8_,auVar4._8_8_);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar5 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar2._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar5;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionType
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5590

int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._positionType;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionType
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab55a0

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
  _union_212922 local_58;
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
  if (DAT_057011e0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011e0 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011e0)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5750

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionLeft
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab5760

void Gilzoide_FlexUi_FlexLayout__set_PositionLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,0,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5a40

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab5a50

void Gilzoide_FlexUi_FlexLayout__set_PositionTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,1,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5b30

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionRight
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab5b40

void Gilzoide_FlexUi_FlexLayout__set_PositionRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,2,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5c20

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionBottom
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab5c30

void Gilzoide_FlexUi_FlexLayout__set_PositionBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,3,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Direction
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5d10

int32_t Gilzoide_FlexUi_FlexLayout__get_Direction
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._direction;
}


// Gilzoide.FlexUi.FlexLayout$$set_Direction
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab5d20

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
  _union_212922 _Stack_58;
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
  if (DAT_057011b0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011b0 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011b0)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexDirection
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5ed0

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexDirection;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexDirection
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab5ee0

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
  _union_212922 local_58;
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
  if (DAT_057011b8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011b8 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011b8)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexWrap
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6090

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexWrap;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexWrap
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab60a0

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
  _union_212922 local_58;
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
  if (DAT_057011e8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011e8 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011e8)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexBasis
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6250

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_FlexBasis(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._flexBasis.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexBasis
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab6260

void Gilzoide_FlexUi_FlexLayout__set_FlexBasis
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 _Stack_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexGrow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6550

float Gilzoide_FlexUi_FlexLayout__get_FlexGrow
                (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexGrow;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexGrow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3ab6560

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
  _union_212922 local_58;
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
  if (DAT_057011f0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011f0 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011f0)(value,GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexShrink
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6730

float Gilzoide_FlexUi_FlexLayout__get_FlexShrink
                (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexShrink;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexShrink
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3ab6740

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
  _union_212922 local_58;
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
  if (DAT_057011f8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011f8 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011f8)(value,GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_JustifyContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6910

int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._justifyContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_JustifyContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab6920

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
  _union_212922 local_58;
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
  if (DAT_057011c0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011c0 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011c0)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignItems
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6ad0

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignItems;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignItems
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab6ae0

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
  _union_212922 local_58;
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
  if (DAT_057011d0 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011d0 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011d0)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignSelf
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6c90

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignSelf;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignSelf
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab6ca0

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
  _union_212922 local_58;
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
  if (DAT_057011d8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011d8 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011d8)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab6e50

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x3ab6e60

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
  _union_212922 _Stack_58;
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
  if (DAT_057011c8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057011c8 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057011c8)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Width
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Width (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab7010

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Width(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._width.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Width
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Width (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7020

void Gilzoide_FlexUi_FlexLayout__set_Width
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Height
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Height (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab7310

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Height(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._height.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Height
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Height (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7320

void Gilzoide_FlexUi_FlexLayout__set_Height
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab7610

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7620

void Gilzoide_FlexUi_FlexLayout__set_MinWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab78f0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7900

void Gilzoide_FlexUi_FlexLayout__set_MinHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab7bd0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7be0

void Gilzoide_FlexUi_FlexLayout__set_MaxWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab7eb0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7ec0

void Gilzoide_FlexUi_FlexLayout__set_MaxHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,value,method_00);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AspectRatio
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8190

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_AspectRatio(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._aspectRatio.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_AspectRatio
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab81a0

void Gilzoide_FlexUi_FlexLayout__set_AspectRatio
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  float fVar2;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar3;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 a_Stack_58 [3];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  _union_212922 _Stack_38;
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
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)((ulong)value.fields >> 0x20));
  if (DAT_057012c8 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0xc);
    DAT_057012c8 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_057012c8)(GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar3 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)a_Stack_58,
             (MethodInfo *)0x0);
  uStack_28 = a_Stack_58[2]._0_2_;
  uStack_26 = a_Stack_58[2]._2_1_;
  uStack_25 = a_Stack_58[2]._3_1_;
  uStack_24 = a_Stack_58[2]._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  _Stack_38.genericMethod = a_Stack_58[0].genericMethod;
  uStack_30 = a_Stack_58[1];
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = fVar2;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar3;
  __this_00.fields.m_task = a_Stack_58[0].genericMethod;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8380

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8390

void Gilzoide_FlexUi_FlexLayout__set_MarginLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,0,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8680

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8690

void Gilzoide_FlexUi_FlexLayout__set_MarginTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,1,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8770

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8780

void Gilzoide_FlexUi_FlexLayout__set_MarginRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 _Stack_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,2,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8860

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginBottom
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8870

void Gilzoide_FlexUi_FlexLayout__set_MarginBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 _Stack_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,3,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = _Stack_58._0_4_;
  __this_00.fields.m_task._4_4_ = _Stack_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8950

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8960

void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,0,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8c40

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8c50

void Gilzoide_FlexUi_FlexLayout__set_PaddingTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,1,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8d30

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingRight
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8d40

void Gilzoide_FlexUi_FlexLayout__set_PaddingRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,2,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8e20

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingBottom
          (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8e30

void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  MethodInfo *in_RCX;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  GVar1._nodePtr =
       (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff60,3,value,in_RCX);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)GVar1._nodePtr;
  __this_00.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapColumn
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab8f10

float Gilzoide_FlexUi_FlexLayout__get_GapColumn
                (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapColumn;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapColumn
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3ab8f20

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
  _union_212922 local_58;
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
  if (DAT_05701250 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0x10);
    DAT_05701250 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_05701250)(value,GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapRow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab90f0

float Gilzoide_FlexUi_FlexLayout__get_GapRow
                (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapRow;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapRow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x3ab9100

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
  _union_212922 local_58;
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
  if (DAT_05701250 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,0x10);
    DAT_05701250 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  (*DAT_05701250)(value,GVar1.fields._nodePtr);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar2 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
  __this_00.fields.m_coreState.fields.m_stateMachine._4_4_ = value;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._0_4_ = 0xffffffff;
  __this_00.fields.m_coreState.fields.m_defaultContextAction._4_4_ = uVar2;
  __this_00.fields.m_task._0_4_ = local_58._0_4_;
  __this_00.fields.m_task._4_4_ = local_58._4_4_;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_LayoutNode
// il2cpp: Gilzoide_FlexUi_Yoga_YGNode_o Gilzoide_FlexUi_FlexLayout__get_LayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab5110

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
  _union_212922 local_58;
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
  if (DAT_05701120 == (code *)0x0) {
    pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)((ulong)pGStack_70 & 0xffffff0000000000);
    DAT_05701120 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
  }
  iVar2 = (*DAT_05701120)();
  (__this->fields)._layoutNode.fields._nodePtr = iVar2;
  Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(__this,method);
  Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(__this,method);
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar3 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return (Gilzoide_FlexUi_Yoga_YGNode_o)
         (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._layoutNode.fields._nodePtr;
}


// Gilzoide.FlexUi.FlexLayout$$OnEnable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnEnable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab9d70

void Gilzoide_FlexUi_FlexLayout__OnEnable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_EventSystems_UIBehaviour__OnEnable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,method_00);
  Gilzoide_FlexUi_FlexLayout__RefreshChildren(__this,method_00);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnDisable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDisable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3aba360

void Gilzoide_FlexUi_FlexLayout__OnDisable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_FlexLayout_o *method_00;
  
  UnityEngine_EventSystems_UIBehaviour__OnDisable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (DAT_057010dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010dd = '\x01';
  }
  pGVar1 = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._parentNode;
    if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = __this;
    Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar1,__this,1,in_RCX);
  }
  Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,(MethodInfo *)method_00);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnDestroy
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDestroy (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3aba740

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
// 0x3aba790

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
// 0x3aba7c0

void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  char cVar1;
  MethodInfo *method_00;
  
  method_00 = (__this->klass->vtable)._9_IsActive.method;
  cVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)();
  if (cVar1 != '\0') {
    Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,method_00);
    Gilzoide_FlexUi_FlexLayout__RefreshChildren(__this,method_00);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnRectTransformDimensionsChange
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3aba7f0

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
  _union_212922 _Stack_58;
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
    if (DAT_05701178 == (code *)0x0) {
      pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,8);
      DAT_05701178 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
      cVar1 = (*DAT_05701178)(GVar3.fields._nodePtr);
    }
    else {
      cVar1 = (*DAT_05701178)(GVar3.fields._nodePtr);
    }
    if (cVar1 != '\0') {
      GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar4);
      if (DAT_05701178 == (code *)0x0) {
        pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,8);
        DAT_05701178 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
      }
      cVar1 = (*DAT_05701178)(GVar3.fields._nodePtr);
      if (cVar1 != '\0') {
        if (DAT_05701180 == (code *)0x0) {
          pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(pGStack_70._5_3_,8);
          DAT_05701180 = (code *)il2cpp_glue_022c74a0(&stack0xffffffffffffff68);
        }
        (*DAT_05701180)(GVar3.fields._nodePtr);
      }
      if (DAT_057010d7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
        DAT_057010d7 = '\x01';
      }
      pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      uVar5 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
                ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
                 (MethodInfo *)0x0);
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
      il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                         &stack0xffffffffffffff70,0);
      pGStack_70 = __this;
      il2cpp_runtime_glue(&pGStack_70,__this);
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
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
                (__this_00,
                 (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
                 (MethodInfo_247D700 *)&stack0xffffffffffffff68);
      return;
    }
    if (DAT_057010d4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057010d4 = '\x01';
    }
    x = (__this->fields)._parentNode;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar4 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') &&
       (*(char *)((long)&(__this->fields)._isRefreshScheduled + 1) == '\0')) {
      Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,pMVar4);
      return;
    }
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab54d0

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  undefined4 uVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 _Stack_58;
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
  
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  pGStack_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar1 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&_Stack_58,
             (MethodInfo *)0x0);
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayoutImmediate
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3abaec0

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  while( true ) {
    if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (DAT_057010d4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057010d4 = '\x01';
    }
    x = (__this->fields)._parentNode;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') break;
    __this = (__this->fields)._parentNode;
  }
  Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,method_00);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$Compare
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__Compare (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* x, Gilzoide_FlexUi_FlexLayout_o* y, const MethodInfo* method);
// 0x3abaf40

int32_t Gilzoide_FlexUi_FlexLayout__Compare
                  (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *x,
                  Gilzoide_FlexUi_FlexLayout_o *y,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (DAT_057010d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010d8 = '\x01';
  }
  local_1c = 0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
  iVar2 = -1;
  if ((char)bVar1 != '\0') {
    if (x == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03abb018;
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(x,method_00);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03abb018;
    iVar2 = UnityEngine_Transform__GetSiblingIndex
                      ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
  }
  local_1c = iVar2;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  iVar2 = -1;
  if ((char)bVar1 != '\0') {
    if (y != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(y,(MethodInfo *)0xffffffff);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        iVar2 = UnityEngine_Transform__GetSiblingIndex
                          ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
        goto LAB_03abb002;
      }
    }
LAB_03abb018:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03abb002:
  iVar2 = System_Int32__CompareTo((int32_t)&local_1c,iVar2,(MethodInfo *)0x0);
  return iVar2;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3abac20

/* WARNING: Removing unreachable block (ram,0x03abae0a) */

void Gilzoide_FlexUi_FlexLayout__RefreshLayout
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar4;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar5;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  UnityEngine_Rect_o UVar7;
  undefined8 in_stack_ffffffffffffff68;
  Il2CppObject *pIVar8;
  float local_68;
  float fStack_64;
  Il2CppType **local_58;
  Il2CppRGCTXData *local_50;
  _union_247328 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  float local_28;
  float fStack_24;
  
  if (DAT_057010d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gilzoide_FlexUi_FlexLayout);
    DAT_057010d9 = '\x01';
  }
  pIVar8 = (Il2CppObject *)0x0;
  if (DAT_057010d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010d4 = '\x01';
  }
  x = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    GVar5._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar6);
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar6);
    Gilzoide_FlexUi_Yoga_YGNode__ApplyTo
              ((Gilzoide_FlexUi_Yoga_YGNode_o)&stack0xffffffffffffff70,pUVar3,method_00);
    __this_00 = (__this->fields)._childrenNodes;
  }
  else {
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar6);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03abae36;
    pMVar6 = (MethodInfo *)0x0;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    GVar4 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar6);
    local_68 = UVar7.fields.m_Width;
    fStack_64 = UVar7.fields.m_Height;
    iVar1 = (__this->fields)._direction;
    GVar5 = GVar4.fields._nodePtr;
    if (DAT_05701130 == (code *)0x0) {
      local_58 = (Il2CppType **)0xcd47d9;
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
      DAT_05701130 = (code *)il2cpp_glue_022c74a0(&local_58);
      fStack_64 = local_28;
    }
    (*DAT_05701130)(local_68,fStack_64,GVar4.fields._nodePtr,iVar1);
    __this_00 = (__this->fields)._childrenNodes;
  }
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Gilzoide_FlexUi_FlexLayout);
    __this_01.fields._index = (int)GVar5._nodePtr;
    __this_01.fields._version = (int)((ulong)GVar5._nodePtr >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_01.fields._current = pIVar8;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
    if ((char)bVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_02.fields._index = (int)GVar5._nodePtr;
    __this_02.fields._version = (int)((ulong)GVar5._nodePtr >> 0x20);
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_02.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    return;
  }
LAB_03abae36:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeStyle
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab9500

void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  int32_t iVar2;
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGVar3;
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar4;
  bool_conflict bVar5;
  Gilzoide_FlexUi_Yoga_YGConfig_o GVar6;
  MethodInfo *in_RCX;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  undefined1 auVar7 [16];
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (DAT_057010da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010da = '\x01';
  }
  local_50._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  pGVar3 = (__this->fields)._configuration;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_07 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar3,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (DAT_05701100 == (MethodInfo *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_ConfigGetDefault";
      local_30 = 0x17;
      local_28 = 0x200000000;
      local_20 = 0;
      local_1c = 0;
      DAT_05701100 = (MethodInfo *)il2cpp_glue_022c74a0(&local_48);
    }
    in_RCX = DAT_05701100;
    auVar7 = (*(code *)DAT_05701100)();
  }
  else {
    pGVar3 = (__this->fields)._configuration;
    if (pGVar3 == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GVar6 = Gilzoide_FlexUi_FlexLayoutConfig__get_Config(pGVar3,method_07);
    auVar7._8_8_ = extraout_RDX;
    auVar7._0_8_ = GVar6.fields._configPtr;
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
             (Gilzoide_FlexUi_Yoga_YGConfig_Fields)auVar7._0_8_,auVar7._8_8_);
  GVar4._nodePtr = local_50._nodePtr;
  if (DAT_057011e0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetPositionType";
    local_30 = 0x1f;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011e0 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011e0)(GVar4._nodePtr);
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
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._direction;
  if (DAT_057011b0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetDirection";
    local_30 = 0x1c;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011b0 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011b0)(GVar4._nodePtr,iVar2);
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._flexDirection;
  if (DAT_057011b8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetFlexDirection";
    local_30 = 0x20;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011b8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011b8)(GVar4._nodePtr,iVar2);
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._flexWrap;
  if (DAT_057011e8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetFlexWrap";
    local_30 = 0x1b;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011e8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011e8)(GVar4._nodePtr,iVar2);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
            ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_50,
             (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._flexBasis.fields,method_00);
  GVar4._nodePtr = local_50._nodePtr;
  fVar1 = (__this->fields)._flexGrow;
  if (DAT_057011f0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetFlexGrow";
    local_30 = 0x1b;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011f0 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011f0)(fVar1,GVar4._nodePtr);
  GVar4._nodePtr = local_50._nodePtr;
  fVar1 = (__this->fields)._flexShrink;
  if (DAT_057011f8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetFlexShrink";
    local_30 = 0x1d;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011f8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011f8)(fVar1,GVar4._nodePtr);
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._justifyContent;
  if (DAT_057011c0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetJustifyContent";
    local_30 = 0x21;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011c0 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011c0)(GVar4._nodePtr,iVar2);
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._alignItems;
  if (DAT_057011d0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetAlignItems";
    local_30 = 0x1d;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011d0 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011d0)(GVar4._nodePtr,iVar2);
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._alignSelf;
  if (DAT_057011d8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetAlignSelf";
    local_30 = 0x1c;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011d8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011d8)(GVar4._nodePtr,iVar2);
  GVar4._nodePtr = local_50._nodePtr;
  iVar2 = (__this->fields)._alignContent;
  if (DAT_057011c8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetAlignContent";
    local_30 = 0x1f;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057011c8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057011c8)(GVar4._nodePtr,iVar2);
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
  GVar4._nodePtr = local_50._nodePtr;
  fVar1 = (__this->fields)._aspectRatio.fields.Value;
  if (DAT_057012c8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetAspectRatio";
    local_30 = 0x1e;
    local_28 = 0x200000000;
    local_20 = 0xc;
    local_1c = 0;
    DAT_057012c8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_057012c8)(fVar1,GVar4._nodePtr);
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
  GVar4._nodePtr = local_50._nodePtr;
  fVar1 = (__this->fields)._gapColumn;
  if (DAT_05701250 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetGap";
    local_30 = 0x16;
    local_28 = 0x200000000;
    local_20 = 0x10;
    local_1c = 0;
    DAT_05701250 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_05701250)(fVar1,GVar4._nodePtr,0);
  GVar4._nodePtr = local_50._nodePtr;
  fVar1 = (__this->fields)._gapRow;
  if (DAT_05701250 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeStyleSetGap";
    local_30 = 0x16;
    local_28 = 0x200000000;
    local_20 = 0x10;
    local_1c = 0;
    DAT_05701250 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_05701250)(fVar1,GVar4._nodePtr,1);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeMeasure
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab92e0

void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

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
  
  if (DAT_057010db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_ILayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_Void_SetContext_RectTransform);
    DAT_057010db = '\x01';
  }
  local_20 = (Il2CppMethodPointer)0x0;
  iVar4 = (__this->fields)._layoutNode.fields._nodePtr;
  if (DAT_05701150 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeGetChildCount";
    local_38 = 0x18;
    local_30 = 0x200000000;
    local_28 = 8;
    local_24 = 0;
    DAT_05701150 = (code *)il2cpp_glue_022c74a0(&local_50);
  }
  __this_00 = &(__this->fields)._layoutNode;
  iVar1 = (*DAT_05701150)(iVar4);
  method_00 = extraout_RDX;
  if (iVar1 == 0) {
    method_01 = (MethodInfo *)&stack0xffffffffffffffe0;
    bVar2 = UnityEngine_Component__TryGetComponent<object>
                      ((UnityEngine_Component_o *)__this,(Il2CppObject **)method_01,MethodInfo_Boolean_TryGetComponent_ILayoutElement);
    method_00 = extraout_RDX_00;
    if ((char)bVar2 != '\0') {
      value = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method_01);
      Gilzoide_FlexUi_Yoga_YGNode__SetContext<object>
                ((Gilzoide_FlexUi_Yoga_YGNode_o)__this_00,(Il2CppObject *)value,MethodInfo_Void_SetContext_RectTransform);
      if (*(int *)(TypeInfo_FlexLayout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar3 = **(undefined8 **)(TypeInfo_FlexLayout + 0xb8);
      iVar4 = (__this_00->fields)._nodePtr;
      if (DAT_05701170 == (code *)0x0) {
        local_50 = "flex-ui";
        local_48 = 7;
        local_40 = "FlexUi_NodeSetMeasureFunc";
        local_38 = 0x19;
        local_30 = 0x200000000;
        local_28 = 0x10;
        local_24 = 0;
        DAT_05701170 = (code *)il2cpp_glue_022c74a0(&local_50);
      }
      goto LAB_03ab94ee;
    }
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext
            ((Gilzoide_FlexUi_Yoga_YGNode_o)__this_00,(System_Runtime_InteropServices_GCHandle_o)0x0
             ,method_00);
  iVar4 = (__this_00->fields)._nodePtr;
  if (DAT_05701170 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeSetMeasureFunc";
    local_38 = 0x19;
    local_30 = 0x200000000;
    local_28 = 0x10;
    local_24 = 0;
    DAT_05701170 = (code *)il2cpp_glue_022c74a0(&local_50);
  }
  uVar3 = 0;
LAB_03ab94ee:
  (*DAT_05701170)(iVar4,uVar3);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab9d90

void Gilzoide_FlexUi_FlexLayout__RefreshParent
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **ppGVar1;
  Gilzoide_FlexUi_FlexLayout_o *y;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  char cVar3;
  bool_conflict bVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *exists;
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_FlexLayout_o *local_28;
  
  if (DAT_057010dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010dc = '\x01';
  }
  local_28 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03ab9f89;
  exists = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (exists == (UnityEngine_Transform_o *)0x0) goto LAB_03ab9f89;
    bVar4 = UnityEngine_Component__TryGetComponent<object>
                      ((UnityEngine_Component_o *)exists,(Il2CppObject **)&local_28,MethodInfo_Boolean_TryGetComponent_FlexLayout);
    if ((char)bVar4 != '\0') {
      if (local_28 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03ab9f89;
      cVar3 = (*(local_28->klass->vtable)._9_IsActive.methodPtr)();
      pGVar2 = local_28;
      if (cVar3 != '\0') {
        y = (__this->fields)._parentNode;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)y,
                           (MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        if (DAT_057010dd == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Object);
          DAT_057010dd = '\x01';
        }
        pGVar2 = (__this->fields)._parentNode;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pGVar2 = (__this->fields)._parentNode;
          if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03ab9f89;
          Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar2,__this,1,in_RCX);
        }
        if (local_28 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__TrackChild(local_28,__this,1,in_RCX);
          return;
        }
        goto LAB_03ab9f89;
      }
    }
  }
  if (DAT_057010dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010dd = '\x01';
  }
  pGVar2 = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppGVar1 = &(__this->fields)._parentNode;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar2,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*ppGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
LAB_03ab9f89:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Gilzoide_FlexUi_FlexLayout__UntrackChild(*ppGVar1,__this,1,in_RCX);
  }
  *ppGVar1 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  il2cpp_runtime_glue(ppGVar1,0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$ClearParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3aba3f0

void Gilzoide_FlexUi_FlexLayout__ClearParent
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  
  if (DAT_057010dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010dd = '\x01';
  }
  pGVar1 = (__this->fields)._parentNode;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._parentNode;
    if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar1,__this,1,in_RCX);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3ab9f90

/* WARNING: Removing unreachable block (ram,0x03aba24e) */

void Gilzoide_FlexUi_FlexLayout__RefreshChildren
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_IEnumerator_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  UnityEngine_RectTransform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_Component_o *__this_01;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *pMVar11;
  long lVar12;
  long lVar13;
  Gilzoide_FlexUi_FlexLayout_o *local_38;
  
  if (DAT_057010de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_057010de = '\x01';
  }
  local_38 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar7 = UnityEngine_Transform__GetEnumerator
                     ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  if (pSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar3 = pSVar7->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
          pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
          goto LAB_03aba083;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar12);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerator,0);
LAB_03aba083:
    cVar5 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
    if (cVar5 == '\0') {
      pMVar11 = TypeInfo_IDisposable;
      plVar9 = (long *)il2cpp_runtime_glue();
      if (plVar9 == (long *)0x0) goto LAB_03aba216;
      lVar12 = *plVar9;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto LAB_03aba1ef;
      lVar13 = 0;
      break;
    }
    pSVar3 = pSVar7->klass;
    uVar2._0_1_ = (pSVar3->_2).rank;
    uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
          pVVar8 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
          goto LAB_03aba108;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar12);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerator,1);
LAB_03aba108:
    __this_01 = (UnityEngine_Component_o *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
    if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (((__this_01->klass->_2).naturalAligment < *(byte *)(TypeInfo_Transform + 0x130)) ||
       (pMVar11 = (MethodInfo *)(__this_01->klass->_2).typeHierarchy,
       *(long *)((long)pMVar11 + (ulong)*(byte *)(TypeInfo_Transform + 0x130) * 8 + -8) != TypeInfo_Transform))
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_01);
    }
    bVar6 = UnityEngine_Component__TryGetComponent<object>
                      (__this_01,(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetComponent_FlexLayout);
    if ((char)bVar6 != '\0') {
      if (local_38 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      cVar5 = (*(local_38->klass->vtable)._9_IsActive.methodPtr)
                        (local_38,(local_38->klass->vtable)._9_IsActive.method);
      if (cVar5 != '\0') {
        Gilzoide_FlexUi_FlexLayout__TrackChild(__this,local_38,0,pMVar11);
      }
    }
  } while( true );
  while (lVar13 = lVar13 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13) {
    if (*(MethodInfo **)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
      goto LAB_03aba20d;
    }
  }
LAB_03aba1ef:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_03aba20d:
  pMVar11 = (MethodInfo *)puVar10[1];
  (*(code *)*puVar10)(plVar9);
LAB_03aba216:
  Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,pMVar11);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$TrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__TrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x3abb520

void Gilzoide_FlexUi_FlexLayout__TrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool_conflict callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *pSVar1;
  uint uVar2;
  Gilzoide_FlexUi_Yoga_YGNode_Fields child_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_28;
  
  if (DAT_057010df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_BinarySearch);
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    DAT_057010df = '\x01';
  }
  local_28._nodePtr = 0;
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = __this;
    il2cpp_runtime_glue(&(child->fields)._parentNode,__this);
    pSVar1 = (__this->fields)._childrenNodes;
    if (pSVar1 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      child_00._nodePtr = (intptr_t)child;
      uVar2 = System_Collections_Generic_List<object>__BinarySearch
                        ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)child,
                         (System_Collections_Generic_IComparer_T__o *)__this,MethodInfo_Int32_BinarySearch);
      if ((int)uVar2 < 0) {
        pSVar1 = (__this->fields)._childrenNodes;
        if (pSVar1 == (System_Collections_Generic_List_FlexLayout__o *)0x0) goto LAB_03abb608;
        uVar2 = ~uVar2;
        method_01 = (MethodInfo *)(ulong)uVar2;
        method_00 = MethodInfo_Void_Insert;
        System_Collections_Generic_List<object>__Insert
                  ((System_Collections_Generic_List_object__o *)pSVar1,uVar2,(Il2CppObject *)child,
                   (MethodInfo_35A8370 *)MethodInfo_Void_Insert);
        local_28._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_01);
        child_00._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,method_01);
        Gilzoide_FlexUi_Yoga_YGNode__InsertChild
                  ((Gilzoide_FlexUi_Yoga_YGNode_o)&local_28,
                   (Gilzoide_FlexUi_Yoga_YGNode_o)child_00._nodePtr,uVar2,method_00);
      }
      if ((char)callChildrenChanged != '\0') {
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)child_00._nodePtr);
      }
      return;
    }
  }
LAB_03abb608:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.FlexLayout$$UntrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UntrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x3abb610

void Gilzoide_FlexUi_FlexLayout__UntrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool_conflict callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar2;
  MethodInfo *method_00;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (DAT_057010e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_057010e0 = '\x01';
  }
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    method_00 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(&(child->fields)._parentNode);
    GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_00);
    GVar2 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,method_00);
    if (DAT_05701140 == (code *)0x0) {
      local_58 = "flex-ui";
      local_50 = 7;
      local_48 = "FlexUi_NodeRemoveChild";
      local_40 = 0x16;
      local_38 = 0x200000000;
      local_30 = 0x10;
      local_2c = 0;
      DAT_05701140 = (code *)il2cpp_glue_022c74a0(&local_58);
    }
    (*DAT_05701140)(GVar1.fields._nodePtr,GVar2.fields._nodePtr);
    __this_00 = (__this->fields)._childrenNodes;
    if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,
                 MethodInfo_Boolean_Remove);
      if ((char)callChildrenChanged != '\0') {
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)child);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.FlexLayout$$RefreshDrivenRectTransformTracker
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3abb9d0

void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Gilzoide_FlexUi_FlexLayout_o *__this_03;
  
  if (DAT_057010e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gilzoide_FlexUi_FlexLayout);
    DAT_057010e1 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pbVar1 = &(__this->fields)._isRefreshScheduled;
  UnityEngine_DrivenRectTransformTracker__Clear(pbVar1,0);
  __this_00 = (__this->fields)._childrenNodes;
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Gilzoide_FlexUi_FlexLayout);
    while( true ) {
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = pSVar4;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar5;
        __this_02.fields._list = pSVar4;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        return;
      }
      if (__this_03 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) break;
      pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this_03,method_00);
      UnityEngine_DrivenRectTransformTracker__Add(pbVar1,__this,pUVar3,0x3f06,0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.FlexLayout$$OnChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3abb720

void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  undefined4 uVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_70;
  Gilzoide_FlexUi_FlexLayout_o *local_68;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_60;
  _union_212922 local_58;
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
  if (DAT_057010d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_FlexLayout__RefreshRootLayout_d__155);
    DAT_057010d7 = '\x01';
  }
  local_68 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_60 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGStack_70 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  uVar1 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)&local_58,(MethodInfo *)0x0
            );
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
  il2cpp_runtime_glue((Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)
                     &stack0xffffffffffffff70,0);
  pGStack_70 = __this;
  il2cpp_runtime_glue(&pGStack_70,__this);
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
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start<FlexLayout_<RefreshRootLayout>d__155>
            (__this_00,
             (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff70,
             (MethodInfo_247D700 *)&stack0xffffffffffffff68);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$ClearTrackedChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x3aba470

void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_FlexLayout__o *pSVar2;
  UnityEngine_Object_o *x;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar4;
  undefined1 auVar5 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  UnityEngine_Object_o *exists;
  UnityEngine_Object_o *pUVar7;
  undefined1 local_60 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSStack_58;
  UnityEngine_Object_o *local_50;
  Il2CppType **local_48;
  Il2CppRGCTXData *local_40;
  _union_247328 local_38;
  
  if (DAT_057010e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gilzoide_FlexUi_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057010e2 = '\x01';
  }
  UnityEngine_DrivenRectTransformTracker__Clear(&(__this->fields)._isRefreshScheduled,0);
  pSVar2 = (__this->fields)._childrenNodes;
  if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_Gilzoide_FlexUi_FlexLayout);
    auVar5 = local_60;
    pSVar6 = pSStack_58;
    pUVar7 = local_50;
    while( true ) {
      exists = pUVar7;
      __this_00.fields._8_8_ = pSVar6;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)auVar5;
      __this_00.fields._current = (Il2CppObject *)exists;
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
      if ((char)bVar4 == '\0') break;
      pUVar7 = exists;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (exists == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        x = (UnityEngine_Object_o *)exists[10].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          exists[10].fields.m_CachedPtr = 0;
          il2cpp_runtime_glue(&exists[10].fields,0);
        }
      }
    }
    __this_01.fields._8_8_ = pSVar6;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)auVar5;
    __this_01.fields._current = (Il2CppObject *)exists;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
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
        if (DAT_05701148 == (code *)0x0) {
          local_60 = (undefined1  [8])0xcd47d9;
          pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x7;
          local_50 = (UnityEngine_Object_o *)0xd03547;
          local_48 = (Il2CppType **)0x1c;
          local_40 = (Il2CppRGCTXData *)0x200000000;
          local_38._0_4_ = 8;
          local_38._4_1_ = 0;
          DAT_05701148 = (code *)il2cpp_glue_022c74a0(local_60);
        }
        (*DAT_05701148)(lVar3);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.FlexLayout$$RectTransformMeasureFunc
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc (intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x3ab4ce0

UnityEngine_Vector2_o
Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc
          (intptr_t nodePtr,float width,int32_t widthMode,float height,int32_t heightMode,
          MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *rect;
  float fVar2;
  intptr_t local_30;
  float local_28;
  
  local_28 = height;
  if (DAT_057010e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetContext_RectTransform);
    DAT_057010e3 = '\x01';
  }
  local_30 = nodePtr;
  rect = (UnityEngine_RectTransform_o *)
         Gilzoide_FlexUi_Yoga_YGNode__GetContext<object>
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
// 0x3abbbd0

void Gilzoide_FlexUi_FlexLayout___ctor(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  
  if (DAT_057010e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gilzoide_FlexUi_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_List_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_057010e4 = '\x01';
  }
  (__this->fields)._positionType = 1;
  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = TypeInfo_YGValue;
  (__this->fields)._positionLeft.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8);
  (__this->fields)._positionTop.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
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
  (__this->fields)._width.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 0x10);
  (__this->fields)._height.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 0x10);
  (__this->fields)._minWidth.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._minHeight.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._maxWidth.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._maxHeight.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._aspectRatio.fields =
       *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(lVar1 + 0xb8) + 8);
  (__this->fields)._marginLeft.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._marginTop.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._marginRight.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._marginBottom.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingLeft.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingTop.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingRight.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  (__this->fields)._paddingBottom.fields = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(lVar1 + 0xb8);
  __this_00 = (System_Collections_Generic_List_FlexLayout__o *)il2cpp_runtime_glue(TypeInfo_List_FlexLayout);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gilzoide_FlexUi_FlexLayout);
  (__this->fields)._childrenNodes = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._childrenNodes);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$.cctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___cctor (const MethodInfo* method);
// 0x3abbdf0

/* WARNING: Type propagation algorithm not settling */

void Gilzoide_FlexUi_FlexLayout___cctor(MethodInfo *method)

{
  char cVar1;
  void *pvVar2;
  char cVar3;
  Il2CppObject *d;
  intptr_t iVar4;
  undefined8 uVar5;
  
  if (DAT_057010e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector2_RectTransformMeasureFunc);
    il2cpp_init_method_metadata(&TypeInfo_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeas);
    il2cpp_init_method_metadata(&TypeInfo_Marshal);
    il2cpp_init_method_metadata(&TypeInfo_YGMeasureFunc);
    DAT_057010e5 = '\x01';
  }
  d = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_YGMeasureFunc);
  pvVar2 = MethodInfo_Vector2_RectTransformMeasureFunc;
  d[1].klass = (Il2CppClass *)*(undefined8 *)((long)MethodInfo_Vector2_RectTransformMeasureFunc + 8);
  d[2].monitor = pvVar2;
  d[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_glue(d + 2,0);
  cVar1 = *(char *)((long)pvVar2 + 0x52);
  d[4].klass = (Il2CppClass *)d;
  cVar3 = il2cpp_glue_02274970(pvVar2);
  if (cVar3 != '\0') {
    if (cVar1 == '\x05') {
      d[1].monitor = &LAB_0205d870;
    }
    else {
      uVar5 = d[2].klass;
      d[1].monitor = d[1].klass;
      d[4].klass = (Il2CppClass *)uVar5;
    }
    d[3].monitor = &LAB_0205d7e0;
    if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar4 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate<object>
                      (d,MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeas);
    **(intptr_t **)(TypeInfo_FlexLayout + 0xb8) = iVar4;
    return;
  }
  uVar5 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(uVar5,0);
}


