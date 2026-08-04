// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebouncedInputAction.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b940a0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b941b0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__MoveNext (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b941c0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
          MethodInfo *method)

{
  float time;
  ushort uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this_00;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  UnityEngine_WaitForSecondsRealtime_o *__this_02;
  undefined8 uVar7;
  System_String_o *gameObject;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Il2CppMethodPointer *ppIVar9;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *elementId;
  long lVar10;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o local_68;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int32_t local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  elementId = __this;
  if (g_data_057a9ee1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    elementId = (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *)&TypeInfo_WaitForSecondsRealtime;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ee1 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) goto label_03b9438a;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) goto label_03b9438a;
    time = (__this_00->fields)._delay;
    if (0.0 < time) {
      __this_02 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSecondsRealtime);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_02,time,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_02;
      uVar7 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_02);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
    }
  }
  (__this_00->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pending);
  pGVar3 = (__this_00->fields)._actions;
  pGVar8 = (__this_00->fields)._node;
  pSVar4 = (__this_00->fields)._actionId;
  if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    gameObject = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  }
  else {
    gameObject = (pGVar8->fields).id;
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  local_68.fields.__1__state = 0;
  local_68.fields._4_4_ = 0;
  local_68.fields.__2__current = (Il2CppObject *)0x0;
  local_68.klass = (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_c *)0x0;
  local_68.monitor = (void *)0x0;
  elementId = &local_68;
  __this_01.fields.ElementId._4_4_ = in_stack_ffffffffffffff6c;
  __this_01.fields.ElementId._0_4_ = in_stack_ffffffffffffff68;
  __this_01.fields.GameObject._0_4_ = in_stack_ffffffffffffff70;
  __this_01.fields.GameObject._4_4_ = in_stack_ffffffffffffff74;
  __this_01.fields.Node._0_4_ = in_stack_ffffffffffffff78;
  __this_01.fields.Node._4_4_ = in_stack_ffffffffffffff7c;
  __this_01.fields.InputSource = in_stack_ffffffffffffff80;
  __this_01.fields._28_4_ = in_stack_ffffffffffffff84;
  Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
            (__this_01,(System_String_o *)elementId,(UnityEngine_GameObject_o *)gameObject,pGVar8,
             (MethodInfo *)(__this_00->fields)._node);
  if (pGVar3 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
    local_38 = local_68.fields.__1__state;
    uStack_34 = local_68.fields._4_4_;
    uStack_30 = local_68.fields.__2__current._0_4_;
    uStack_2c = local_68.fields.__2__current._4_4_;
    local_68.fields.__4__this._0_4_ = local_68.klass._0_4_;
    local_68.fields.__4__this._4_4_ = local_68.klass._4_4_;
    uStack_40 = local_68.monitor._0_4_;
    uStack_3c = local_68.monitor._4_4_;
    pGVar5 = pGVar3->klass;
    uVar1._0_1_ = (pGVar5->_2).rank;
    uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar6 = (pGVar5->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar10) == TypeInfo_IGisketchActionHandler) {
          ppIVar9 = &pGVar5->vtable[*(int *)((long)&pIVar6->offset + lVar10)].methodPtr;
          goto label_03b9435d;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    ppIVar9 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pGVar3,TypeInfo_IGisketchActionHandler,0);
label_03b9435d:
    (**ppIVar9)(pGVar3,pSVar4,(MethodInfo *)ppIVar9[1]);
    return 0;
  }
label_03b9438a:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(elementId->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b94390

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b943a0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b943e0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, TMPro_TMP_InputField_o* input, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float delay, const MethodInfo* method);
// 0x3b93df0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,TMPro_TMP_InputField_o *input
               ,Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float delay,MethodInfo *method)

{
  TMPro_TMP_InputField_o **ppTVar1;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  long lVar2;
  bool_conflict bVar3;
  TMPro_TMP_InputField_o *pTVar4;
  Il2CppClass *__this_01;
  UnityEngine_UI_Selectable_o *pUVar5;
  Il2CppObject *__this_02;
  undefined4 uVar6;
  System_String_o *pSVar7;
  TMPro_TMP_InputField_o *__this_03;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_04;
  float fVar9;
  
  if (g_data_057a9ede == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnInputChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9ede = '\x01';
  }
  ppTVar1 = &(__this->fields)._input;
  (__this->fields)._input = input;
  il2cpp_runtime_helper_022b4080(ppTVar1,input);
  (__this->fields)._actions = actions;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._actions,actions);
  (__this->fields)._node = node;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._node);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
  }
  else {
    pSVar7 = (node->fields).action;
  }
  (__this->fields)._actionId = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._actionId);
  fVar9 = 0.0;
  if (0.0 <= delay) {
    fVar9 = delay;
  }
  (__this->fields)._delay = fVar9;
  __this_03 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pTVar4 = *ppTVar1;
  if (pTVar4 != (TMPro_TMP_InputField_o *)0x0) {
    __this_00 = (pTVar4->fields).m_OnEndTextSelection;
    pTVar4 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    __this_03 = pTVar4;
    UnityEngine_Events_UnityAction_object____ctor();
    if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                 (UnityEngine_Events_UnityAction_T0__o *)pTVar4,MethodInfo_Void_AddListener);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  bVar3 = System_String__IsNullOrEmpty
                    ((System_String_o *)(__this_03->fields).m_Navigation.fields.m_SelectOnDown,
                     (MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (lVar2._0_4_ = (__this_03->fields).m_Navigation.fields.m_Mode,
     lVar2._4_4_ = (__this_03->fields).m_Navigation.fields.m_WrapAround, lVar2 != 0)) {
    pUVar5 = (__this_03->fields).m_Navigation.fields.m_SelectOnRight;
    if (pUVar5 != (UnityEngine_UI_Selectable_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                ((UnityEngine_MonoBehaviour_o *)__this_03,(UnityEngine_Coroutine_o *)pUVar5,(MethodInfo *)0x0)
      ;
    }
    if (g_data_057a9edf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
      g_data_057a9edf = '\x01';
    }
    __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
    pIVar8 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->_1).name = 0;
    if (__this_01 != (Il2CppClass *)0x0) {
      (__this_01->_1).byval_arg.data = __this_03;
      il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,__this_03);
      pUVar5 = (UnityEngine_UI_Selectable_o *)
               UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_03,
                          (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
      (__this_03->fields).m_Navigation.fields.m_SelectOnRight = pUVar5;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).m_Navigation.fields.m_SelectOnRight,pUVar5);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9edf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
      g_data_057a9edf = '\x01';
    }
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
    uVar6 = 0;
    __this_04 = __this_02;
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02[1].klass = 0;
    if (__this_02 != (Il2CppObject *)0x0) {
      __this_02[2].klass = pIVar8;
      il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar8);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_04,(MethodInfo *)0x0);
    *(undefined4 *)&__this_04[1].klass = uVar6;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b93f50

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppClass *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  Il2CppObject *__this_01;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_02;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') ||
     ((__this->fields)._actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    return;
  }
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  if (g_data_057a9edf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
    g_data_057a9edf = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
  pIVar4 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                        (MethodInfo *)0x0);
    (__this->fields)._pending = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pending,pUVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9edf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
    g_data_057a9edf = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
  uVar3 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar3;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Schedule
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b93f60

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppClass *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  Il2CppObject *__this_01;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_02;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') ||
     ((__this->fields)._actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    return;
  }
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  if (g_data_057a9edf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
    g_data_057a9edf = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
  pIVar4 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                        (MethodInfo *)0x0);
    (__this->fields)._pending = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pending,pUVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9edf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
    g_data_057a9edf = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
  uVar3 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar3;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$InvokeLater
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b94030

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057a9edf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InvokeLater_d__9);
    g_data_057a9edf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_InvokeLater_d__9);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b940c0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  bool_conflict bVar1;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_InputField_o *__this_01;
  
  if (g_data_057a9ee0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnInputChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveListener);
    g_data_057a9ee0 = '\x01';
  }
  __this_01 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pTVar2 = (__this->fields)._input;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      __this_00 = (pTVar2->fields).m_OnEndTextSelection;
      pTVar2 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      __this_01 = pTVar2;
      UnityEngine_Events_UnityAction_object____ctor();
      if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                   (UnityEngine_Events_UnityAction_T0__o *)pTVar2,MethodInfo_Void_RemoveListener);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b941a0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


