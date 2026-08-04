// Type: Gilzoide.FlexUi.Yoga.Yoga
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/Yoga.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x3b25170

void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor(void)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppType **ppIVar2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o __this_01;
  char cVar3;
  char cVar4;
  bool_conflict bVar5;
  MethodInfo_24C3300 *method;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  System_Threading_Tasks_TaskScheduler_o *in_RDX;
  Il2CppType *pIVar10;
  int iVar11;
  Il2CppObject *in_RSI;
  MethodInfo *pMVar12;
  System_Threading_Tasks_Task_o *in_RDI;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_ffffffffffffff90;
  undefined1 uVar16;
  undefined7 in_stack_ffffffffffffff99;
  undefined1 uVar17;
  undefined7 in_stack_ffffffffffffffa1;
  
  *(void **)&in_RDI->fields = in_RDX->monitor;
  (in_RDI->fields).m_taskScheduler = in_RDX;
  (in_RDI->fields).m_stateObject = in_RSI;
  il2cpp_runtime_helper_022b4080(&(in_RDI->fields).m_stateObject);
  cVar4 = *(char *)((long)&in_RDX[3].monitor + 2);
  (in_RDI->fields).m_continuationObject = (Il2CppObject *)in_RDI;
  cVar3 = il2cpp_runtime_helper_022b2a80();
  if (cVar3 == '\0') {
    if (in_RSI == (Il2CppObject *)0x0) {
      method = (MethodInfo_24C3300 *)il2cpp_runtime_helper_0231a840(0);
      il2cpp_runtime_helper_022b2b10();
      if (g_data_057a99ff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Task);
        il2cpp_runtime_helper_023445d0(&TypeInfo_YieldAwaiter);
        g_data_057a99ff = '\x01';
      }
      uVar16 = 0;
      uVar17 = 0;
      iVar13 = *(int *)&method->methodPointer;
      if (iVar13 == 0) {
        uVar16 = *(undefined1 *)&method->rgctx_data;
        *(undefined1 *)&method->rgctx_data = 0;
        *(undefined4 *)&method->methodPointer = 0xffffffff;
        iVar13 = -1;
      }
      else {
        pIVar10 = method->return_type;
        if (pIVar10 == (Il2CppType *)0x0) goto label_03b25515;
        do {
          if (g_data_057a99ed == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a99ed = '\x01';
          }
          pUVar1 = pIVar10[0x10].data;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_03b252e1;
          pIVar10 = pIVar10[0x10].data;
        } while (pIVar10 != (Il2CppType *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_03b252e1:
        method->parameters = &pIVar10->data;
        il2cpp_runtime_helper_022b4080(&method->parameters);
        ppIVar2 = method->parameters;
        if (ppIVar2 == (Il2CppType **)0x0) goto label_03b2551a;
        if (*(char *)((long)ppIVar2 + 0x111) != '\0') goto label_03b254b5;
        *(undefined1 *)((long)ppIVar2 + 0x111) = 1;
        if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar17 = System_Threading_Tasks_Task__Yield((MethodInfo *)0x0);
        uVar16 = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(&stack0xffffffffffffffa0);
        if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                          (&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') {
          *(undefined4 *)&method->methodPointer = 0;
          *(undefined1 *)&method->rgctx_data = uVar16;
          __this.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar16;
          __this.fields.m_synchronizationContext =
               (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff90;
          __this.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffff99;
          __this.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar17;
          __this.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffa1;
          __this.fields.m_task = in_RDI;
          System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter__FlexLayout__RefreshRootLayout_d__155_
                    (__this,(System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o *)
                            &method->virtualMethodPointer,
                     (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&stack0xffffffffffffff98,method
                    );
          return;
        }
      }
      if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(&stack0xffffffffffffff98);
      pUVar1 = (UnityEngine_Object_o *)method->parameters;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
      iVar11 = 9;
      if ((char)bVar5 != '\0') {
        if (method->parameters == (Il2CppType **)0x0) goto label_03b2551f;
        cVar4 = (**(code **)&(*method->parameters)[0x1c].bits)();
        if (cVar4 != '\0') {
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
          pMVar12 = (MethodInfo *)0x0;
          bVar5 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            lVar14 = 0;
            goto label_03b254f2;
          }
          if ((Gilzoide_FlexUi_FlexLayout_o *)method->parameters == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
          goto label_03b2552e;
          Gilzoide_FlexUi_FlexLayout__RefreshLayout
                    ((Gilzoide_FlexUi_FlexLayout_o *)method->parameters,pMVar12);
        }
      }
      lVar14 = 0;
      if (iVar13 < 0) goto label_03b254f7;
joined_r0x03b254aa:
      if (lVar14 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar14);
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
          auVar15 = il2cpp_runtime_helper_022b2c90();
          while( true ) {
            uVar8 = auVar15._0_8_;
            iVar11 = 0;
            if (auVar15._8_4_ == 1) break;
            if (-1 < iVar13) {
label_03b25570:
              if (auVar15._8_4_ != 1) {
                _Unwind_Resume(uVar8);
              }
              puVar7 = (undefined8 *)__cxa_begin_catch(uVar8);
              uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar4 = il2cpp_runtime_helper_0233e000(uVar8,*(undefined8 *)*puVar7);
              if (cVar4 != '\0') {
                pMVar12 = (MethodInfo *)*puVar7;
                __cxa_end_catch();
                *(undefined4 *)&method->methodPointer = 0xfffffffe;
                method->parameters = (Il2CppType **)0x0;
                il2cpp_runtime_helper_022b4080(&method->parameters,0);
                __this_01.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar16;
                __this_01.fields.m_synchronizationContext =
                     (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff90;
                __this_01.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffff99;
                __this_01.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar17;
                __this_01.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffa1;
                __this_01.fields.m_task = in_RDI;
                System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetException
                          (__this_01,(System_Exception_o *)&method->virtualMethodPointer,pMVar12);
                return;
              }
              puVar9 = (undefined8 *)__cxa_allocate_exception(8);
              *puVar9 = *puVar7;
              __cxa_throw(puVar9,&PTR_PTR_05215060,0);
            }
            if (method->parameters != (Il2CppType **)0x0) {
              *(undefined1 *)((long)method->parameters + 0x111) = 0;
              goto label_03b25570;
            }
            auVar15 = il2cpp_runtime_helper_022b2c90();
          }
          plVar6 = (long *)__cxa_begin_catch(uVar8);
          lVar14 = *plVar6;
          __cxa_end_catch();
label_03b254f2:
          if (-1 < iVar13) goto joined_r0x03b254aa;
label_03b254f7:
        } while (method->parameters == (Il2CppType **)0x0);
        *(undefined1 *)((long)method->parameters + 0x111) = 0;
        goto joined_r0x03b254aa;
      }
      if ((iVar11 != 0) && (iVar11 != 9)) {
        return;
      }
label_03b254b5:
      *(undefined4 *)&method->methodPointer = 0xfffffffe;
      method->parameters = (Il2CppType **)0x0;
      il2cpp_runtime_helper_022b4080(&method->parameters,0);
      __this_00.fields.m_coreState.fields.m_stateMachine._0_1_ = uVar16;
      __this_00.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)in_stack_ffffffffffffff90;
      __this_00.fields.m_coreState.fields.m_stateMachine._1_7_ = in_stack_ffffffffffffff99;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar17;
      __this_00.fields.m_coreState.fields.m_defaultContextAction._1_7_ = in_stack_ffffffffffffffa1;
      __this_00.fields.m_task = in_RDI;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult
                (__this_00,(MethodInfo *)&method->virtualMethodPointer);
      return;
    }
  }
  else if (cVar4 == '\x05') {
    (in_RDI->fields).m_action = (System_Delegate_o *)&label_020986a0;
    goto label_03b251d5;
  }
  (in_RDI->fields).m_action = *(System_Delegate_o **)&in_RDI->fields;
  (in_RDI->fields).m_continuationObject = (in_RDI->fields).m_stateObject;
label_03b251d5:
  *(undefined1 **)&(in_RDI->fields).m_stateFlags = &label_02098610;
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$Invoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x3b293a0

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,int32_t widthMode,
          float height,int32_t heightMode,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields = (UnityEngine_Vector2_Fields)
                 (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x3b293c0

System_IAsyncResult_o *
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,int32_t widthMode,
          float height,int32_t heightMode,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_70;
  float local_6c;
  int32_t local_68;
  float local_64;
  intptr_t local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_70 = heightMode;
  local_6c = height;
  local_68 = widthMode;
  local_64 = width;
  local_60 = nodePtr;
  if (g_data_057a9be8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MeasureMode);
    g_data_057a9be8 = '\x01';
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_58 = il2cpp_runtime_helper_02304f30(g_data_057b9bc8,&local_60);
  uStack_50 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_64);
  local_48 = il2cpp_runtime_helper_02304f30(TypeInfo_MeasureMode,&local_68);
  uStack_40 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_6c);
  local_38 = il2cpp_runtime_helper_02304f30(TypeInfo_MeasureMode,&local_70);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_58,callback,object);
  return pSVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$EndInvoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x3b294b0

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  code *pcVar1;
  long lVar2;
  UnityEngine_Vector2_Fields *pUVar3;
  UnityEngine_Vector2_o UVar4;
  
  lVar2 = il2cpp_runtime_helper_0233bb60(result,0);
  if (lVar2 != 0) {
    pUVar3 = (UnityEngine_Vector2_Fields *)il2cpp_runtime_helper_02305440(lVar2);
    return (UnityEngine_Vector2_o)*pUVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  UVar4.fields = (UnityEngine_Vector2_Fields)(*pcVar1)();
  return (UnityEngine_Vector2_o)UVar4.fields;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew (const MethodInfo* method);
// 0x3b26070

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew(MethodInfo *method)

{
  intptr_t iVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (g_data_057a9a08 != (code *)0x0) {
    iVar1 = (*g_data_057a9a08)();
    return iVar1;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_ConfigNew";
  local_18 = 0x10;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  g_data_057a9a08 = (code *)il2cpp_runtime_helper_023055b0(&local_30);
  iVar1 = (*g_data_057a9a08)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree (intptr_t config, const MethodInfo* method);
// 0x3b26200

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree(intptr_t config,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a10 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigFree";
    local_20 = 0x11;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a10 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9a10)(config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigGetDefault
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault (const MethodInfo* method);
// 0x3b25ff0

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault(MethodInfo *method)

{
  intptr_t iVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (g_data_057a9a18 != (code *)0x0) {
    iVar1 = (*g_data_057a9a18)();
    return iVar1;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_ConfigGetDefault";
  local_18 = 0x17;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  g_data_057a9a18 = (code *)il2cpp_runtime_helper_023055b0(&local_30);
  iVar1 = (*g_data_057a9a18)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor (intptr_t config, float enabled, const MethodInfo* method);
// 0x3b26280

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor(intptr_t config,float enabled,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a20 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigSetPointScaleFactor";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9a20 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9a20)(enabled,config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata (intptr_t config, int32_t errata, const MethodInfo* method);
// 0x3b26310

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata(intptr_t config,int32_t errata,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9a28;
  if (g_data_057a9a28 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_ConfigSetErrata";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a28 = auVar1._0_8_;
  (*g_data_057a9a28)(config,errata,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled (intptr_t config, int32_t feature, bool enabled, const MethodInfo* method);
// 0x3b26390

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled
               (intptr_t config,int32_t feature,bool_conflict enabled,MethodInfo *method)

{
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (g_data_057a9a30 == (code *)0x0) {
    pcStack_48 = "flex-ui";
    uStack_40 = 7;
    pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
    uStack_30 = 0x2a;
    uStack_28 = 0x200000000;
    uStack_20 = 0x10;
    uStack_1c = 0;
    g_data_057a9a30 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_48);
  }
  (*g_data_057a9a30)(config,feature,enabled & 0xff);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew (const MethodInfo* method);
// 0x3b26430

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew(MethodInfo *method)

{
  intptr_t iVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (g_data_057a9a38 != (code *)0x0) {
    iVar1 = (*g_data_057a9a38)();
    return iVar1;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_NodeNew";
  local_18 = 0xe;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  g_data_057a9a38 = (code *)il2cpp_runtime_helper_023055b0(&local_30);
  iVar1 = (*g_data_057a9a38)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree (intptr_t node, const MethodInfo* method);
// 0x3b275f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a40 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeFree";
    local_20 = 0xf;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a40 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9a40)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeCalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout (intptr_t node, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x3b27670

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout
               (intptr_t node,float availableWidth,float availableHeight,int32_t ownerDirection,
               MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9a48;
  if (g_data_057a9a48 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeCalculateLayout";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x14;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a48 = auVar1._0_8_;
  (*g_data_057a9a48)(availableWidth,availableHeight,node,ownerDirection,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeInsertChild
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild (intptr_t node, intptr_t child, int32_t index, const MethodInfo* method);
// 0x3b27710

System_String_o *
Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild(intptr_t node,intptr_t child,int32_t index,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *pSVar2;
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (g_data_057a9a50 == (code *)0x0) {
    pcStack_48 = "flex-ui";
    uStack_40 = 7;
    pcStack_38 = "FlexUi_NodeInsertChild";
    uStack_30 = 0x16;
    uStack_28 = 0x200000000;
    uStack_20 = 0x14;
    uStack_1c = 0;
    g_data_057a9a50 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_48);
  }
  uVar1 = (*g_data_057a9a50)(node,child,index);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_02305c00(uVar1);
  il2cpp_runtime_helper_02305a80(uVar1);
  return pSVar2;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild (intptr_t node, intptr_t child, const MethodInfo* method);
// 0x3b277c0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild(intptr_t node,intptr_t child,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9a58;
  if (g_data_057a9a58 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeRemoveChild";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a58 = auVar1._0_8_;
  (*g_data_057a9a58)(node,child,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren (intptr_t node, const MethodInfo* method);
// 0x3b27840

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a60 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeRemoveAllChildren";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a60 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9a60)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount (intptr_t node, const MethodInfo* method);
// 0x3b278c0

int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount(intptr_t node,MethodInfo *method)

{
  int32_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a68 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetChildCount";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a68 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  iVar1 = (*g_data_057a9a68)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetConfig
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig (intptr_t node, intptr_t config, const MethodInfo* method);
// 0x3b27940

System_String_o * Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig(intptr_t node,intptr_t config,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *pSVar2;
  undefined1 auVar3 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = g_data_057a9a70;
  if (g_data_057a9a70 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetConfig";
    uStack_28 = 0x14;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar3 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a70 = auVar3._0_8_;
  uVar1 = (*g_data_057a9a70)(node,config,auVar3._8_8_);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_02305c00(uVar1);
  il2cpp_runtime_helper_02305a80(uVar1);
  return pSVar2;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext (intptr_t node, intptr_t context, const MethodInfo* method);
// 0x3b279e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext(intptr_t node,intptr_t context,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9a78;
  if (g_data_057a9a78 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetContext";
    uStack_28 = 0x15;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a78 = auVar1._0_8_;
  (*g_data_057a9a78)(node,context,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetContext
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext (intptr_t node, const MethodInfo* method);
// 0x3b27a60

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext(intptr_t node,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a80 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetContext";
    local_20 = 0x15;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a80 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  iVar1 = (*g_data_057a9a80)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, intptr_t measureFunc, const MethodInfo* method);
// 0x3b27bd0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc(intptr_t node,intptr_t measureFunc,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9a88;
  if (g_data_057a9a88 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a88 = auVar1._0_8_;
  (*g_data_057a9a88)(node,measureFunc,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeHasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc (intptr_t node, const MethodInfo* method);
// 0x3b27c50

bool_conflict Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc(intptr_t node,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a90 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeHasMeasureFunc";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a90 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  uVar1 = (*g_data_057a9a90)(node);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),(char)uVar1 != '\0');
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty (intptr_t node, const MethodInfo* method);
// 0x3b27cd0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a98 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeSetDirty";
    local_20 = 0x13;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a98 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9a98)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x3b27af0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc_3a27af0
               (intptr_t node,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,MethodInfo *method)

{
  intptr_t iVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (g_data_057a9aa0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
    g_data_057a9aa0 = '\x01';
  }
  if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_
                    ((Il2CppObject *)measureFunc,MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc);
  if (g_data_057a9a88 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    g_data_057a9a88 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  (*g_data_057a9a88)(node,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft (intptr_t node, const MethodInfo* method);
// 0x3b27d50

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9aa8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetLeft";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9aa8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar1 = (float)(*g_data_057a9aa8)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop (intptr_t node, const MethodInfo* method);
// 0x3b27dd0

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9ab0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetTop";
    local_20 = 0x17;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9ab0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar1 = (float)(*g_data_057a9ab0)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth (intptr_t node, const MethodInfo* method);
// 0x3b27e50

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9ab8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetWidth";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9ab8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar1 = (float)(*g_data_057a9ab8)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight (intptr_t node, const MethodInfo* method);
// 0x3b27ed0

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9ac0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetHeight";
    local_20 = 0x1a;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9ac0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar1 = (float)(*g_data_057a9ac0)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection (intptr_t node, int32_t direction, const MethodInfo* method);
// 0x3b27f50

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection(intptr_t node,int32_t direction,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9ac8;
  if (g_data_057a9ac8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetDirection";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ac8 = auVar1._0_8_;
  (*g_data_057a9ac8)(node,direction,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection (intptr_t node, int32_t flexDirection, const MethodInfo* method);
// 0x3b27fd0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection
               (intptr_t node,int32_t flexDirection,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9ad0;
  if (g_data_057a9ad0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ad0 = auVar1._0_8_;
  (*g_data_057a9ad0)(node,flexDirection,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent (intptr_t node, int32_t justifyContent, const MethodInfo* method);
// 0x3b28050

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent
               (intptr_t node,int32_t justifyContent,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9ad8;
  if (g_data_057a9ad8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ad8 = auVar1._0_8_;
  (*g_data_057a9ad8)(node,justifyContent,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent (intptr_t node, int32_t alignContent, const MethodInfo* method);
// 0x3b280d0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent
               (intptr_t node,int32_t alignContent,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9ae0;
  if (g_data_057a9ae0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ae0 = auVar1._0_8_;
  (*g_data_057a9ae0)(node,alignContent,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems (intptr_t node, int32_t alignItems, const MethodInfo* method);
// 0x3b28150

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems(intptr_t node,int32_t alignItems,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9ae8;
  if (g_data_057a9ae8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ae8 = auVar1._0_8_;
  (*g_data_057a9ae8)(node,alignItems,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf (intptr_t node, int32_t alignSelf, const MethodInfo* method);
// 0x3b281d0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf(intptr_t node,int32_t alignSelf,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9af0;
  if (g_data_057a9af0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9af0 = auVar1._0_8_;
  (*g_data_057a9af0)(node,alignSelf,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType (intptr_t node, int32_t positionType, const MethodInfo* method);
// 0x3b28250

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType
               (intptr_t node,int32_t positionType,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9af8;
  if (g_data_057a9af8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionType";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9af8 = auVar1._0_8_;
  (*g_data_057a9af8)(node,positionType,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap (intptr_t node, int32_t flexWrap, const MethodInfo* method);
// 0x3b282d0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap(intptr_t node,int32_t flexWrap,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b00;
  if (g_data_057a9b00 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b00 = auVar1._0_8_;
  (*g_data_057a9b00)(node,flexWrap,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow (intptr_t node, float flexGrow, const MethodInfo* method);
// 0x3b28350

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow(intptr_t node,float flexGrow,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b08 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexGrow";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b08 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b08)(flexGrow,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink (intptr_t node, float flexShrink, const MethodInfo* method);
// 0x3b283e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink(intptr_t node,float flexShrink,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b10 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexShrink";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b10 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b10)(flexShrink,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x3b28470

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis(intptr_t node,float flexBasis,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b18 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasis";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b18 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b18)(flexBasis,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x3b28500

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent
               (intptr_t node,float flexBasis,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b20 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b20 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b20)(flexBasis,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto (intptr_t node, const MethodInfo* method);
// 0x3b28590

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b28 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9b28 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b28)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x3b28610

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition
               (intptr_t node,int32_t edge,float position,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b30;
  if (g_data_057a9b30 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPosition";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b30 = auVar1._0_8_;
  (*g_data_057a9b30)(position,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x3b286a0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent
               (intptr_t node,int32_t edge,float position,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b38;
  if (g_data_057a9b38 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
    uStack_28 = 0x22;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b38 = auVar1._0_8_;
  (*g_data_057a9b38)(position,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x3b28730

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin
               (intptr_t node,int32_t edge,float margin,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b40;
  if (g_data_057a9b40 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMargin";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b40 = auVar1._0_8_;
  (*g_data_057a9b40)(margin,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x3b287c0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent
               (intptr_t node,int32_t edge,float margin,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b48;
  if (g_data_057a9b48 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b48 = auVar1._0_8_;
  (*g_data_057a9b48)(margin,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto (intptr_t node, int32_t edge, const MethodInfo* method);
// 0x3b28850

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto(intptr_t node,int32_t edge,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b50;
  if (g_data_057a9b50 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b50 = auVar1._0_8_;
  (*g_data_057a9b50)(node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x3b288d0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding
               (intptr_t node,int32_t edge,float padding,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b58;
  if (g_data_057a9b58 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPadding";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b58 = auVar1._0_8_;
  (*g_data_057a9b58)(padding,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x3b28960

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent
               (intptr_t node,int32_t edge,float padding,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b60;
  if (g_data_057a9b60 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b60 = auVar1._0_8_;
  (*g_data_057a9b60)(padding,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap (intptr_t node, int32_t gutter, float gapLength, const MethodInfo* method);
// 0x3b289f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap
               (intptr_t node,int32_t gutter,float gapLength,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = g_data_057a9b68;
  if (g_data_057a9b68 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetGap";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b68 = auVar1._0_8_;
  (*g_data_057a9b68)(gapLength,node,gutter,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth (intptr_t node, float width, const MethodInfo* method);
// 0x3b28a80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth(intptr_t node,float width,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b70 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidth";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b70 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b70)(width,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent (intptr_t node, float width, const MethodInfo* method);
// 0x3b28b10

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent(intptr_t node,float width,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b78 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthPercent";
    local_20 = 0x1f;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b78 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b78)(width,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto (intptr_t node, const MethodInfo* method);
// 0x3b28ba0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b80 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthAuto";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9b80 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b80)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight (intptr_t node, float height, const MethodInfo* method);
// 0x3b28c20

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight(intptr_t node,float height,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b88 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeight";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b88 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b88)(height,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent (intptr_t node, float height, const MethodInfo* method);
// 0x3b28cb0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent(intptr_t node,float height,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b90 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightPercent";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b90 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b90)(height,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto (intptr_t node, const MethodInfo* method);
// 0x3b28d40

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9b98 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightAuto";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9b98 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b98)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth (intptr_t node, float minWidth, const MethodInfo* method);
// 0x3b28dc0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth(intptr_t node,float minWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9ba0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9ba0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9ba0)(minWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent (intptr_t node, float minWidth, const MethodInfo* method);
// 0x3b28e50

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent(intptr_t node,float minWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9ba8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9ba8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9ba8)(minWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight (intptr_t node, float minHeight, const MethodInfo* method);
// 0x3b28ee0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight(intptr_t node,float minHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9bb0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bb0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bb0)(minHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent (intptr_t node, float minHeight, const MethodInfo* method);
// 0x3b28f70

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent
               (intptr_t node,float minHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9bb8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bb8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bb8)(minHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x3b29000

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth(intptr_t node,float maxWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9bc0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bc0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bc0)(maxWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x3b29090

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent(intptr_t node,float maxWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9bc8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bc8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bc8)(maxWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x3b29120

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight(intptr_t node,float maxHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9bd0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bd0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bd0)(maxHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x3b291b0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent
               (intptr_t node,float maxHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9bd8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bd8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bd8)(maxHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio (intptr_t node, float aspectRatio, const MethodInfo* method);
// 0x3b29240

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio(intptr_t node,float aspectRatio,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9be0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetAspectRatio";
    local_20 = 0x1e;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9be0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9be0)(aspectRatio,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga___ctor (Gilzoide_FlexUi_Yoga_Yoga_o* __this, const MethodInfo* method);
// 0x3b29390

void Gilzoide_FlexUi_Yoga_Yoga___ctor(Gilzoide_FlexUi_Yoga_Yoga_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


