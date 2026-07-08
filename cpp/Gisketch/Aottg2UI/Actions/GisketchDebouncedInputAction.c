// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebouncedInputAction.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b27f90

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_<InvokeLater>d__9___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b280a0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_<InvokeLater>d__9__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__MoveNext (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b280b0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_<InvokeLater>d__9__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
          MethodInfo *method)

{
  float time;
  ushort uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this_00;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  undefined8 uVar8;
  UnityEngine_GameObject_o *pUVar9;
  Il2CppMethodPointer *ppIVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (DAT_057015b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IGisketchActionHandler);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSecondsRealtime);
    DAT_057015b2 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0)
    goto LAB_03b282cd;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0)
    goto LAB_03b282cd;
    time = (__this_00->fields)._delay;
    if (0.0 < time) {
      __this_01 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_glue(TypeInfo_WaitForSecondsRealtime);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_01,time,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      uVar8 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar8 >> 8),1);
    }
  }
  (__this_00->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(&(__this_00->fields)._pending);
  pGVar3 = (__this_00->fields)._actions;
  pGVar4 = (__this_00->fields)._node;
  pSVar5 = (__this_00->fields)._actionId;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    uStack_78 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  }
  else {
    uStack_78 = (pGVar4->fields).id;
  }
  pUVar9 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  pGVar4 = (__this_00->fields)._node;
  uStack_70 = (UnityEngine_GameObject_o *)0x0;
  pGStack_68 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  uStack_60 = 0;
  il2cpp_runtime_glue(&uStack_78,uStack_78);
  uStack_70 = pUVar9;
  il2cpp_runtime_glue(&uStack_70,pUVar9);
  pGStack_68 = pGVar4;
  il2cpp_runtime_glue(&pGStack_68,pGVar4);
  uStack_3c = (undefined4)(uStack_60 >> 0x20);
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if (pGVar3 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
    pGStack_48 = pGStack_68;
    uStack_40 = 0;
    uStack_58 = (undefined4)uStack_78;
    uStack_54 = uStack_78._4_4_;
    uStack_50 = (undefined4)uStack_70;
    uStack_4c = uStack_70._4_4_;
    pGVar6 = pGVar3->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pGVar6->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IGisketchActionHandler) {
          ppIVar10 = &pGVar6->vtable[*(int *)((long)&pIVar7->offset + lVar11)].methodPtr;
          goto LAB_03b2829d;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pGVar3,TypeInfo_IGisketchActionHandler,0);
LAB_03b2829d:
    (**ppIVar10)(pGVar3,pSVar5,(MethodInfo *)ppIVar10[1]);
    return 0;
  }
LAB_03b282cd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b282e0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_<InvokeLater>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b282f0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_<InvokeLater>d__9__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o* __this, const MethodInfo* method);
// 0x3b28330

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_<InvokeLater>d__9__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, TMPro_TMP_InputField_o* input, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float delay, const MethodInfo* method);
// 0x3b27ce0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,
               TMPro_TMP_InputField_o *input,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float delay,MethodInfo *method)

{
  TMPro_TMP_InputField_o **ppTVar1;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  bool_conflict bVar3;
  UnityEngine_Events_UnityAction_T0__o *call;
  System_String_o *pSVar4;
  float fVar5;
  
  if (DAT_057015af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnInputChanged);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_057015af = '\x01';
  }
  ppTVar1 = &(__this->fields)._input;
  (__this->fields)._input = input;
  il2cpp_runtime_glue(ppTVar1,input);
  (__this->fields)._actions = actions;
  il2cpp_runtime_glue(&(__this->fields)._actions,actions);
  (__this->fields)._node = node;
  il2cpp_runtime_glue(&(__this->fields)._node);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar4 = (System_String_o *)0x0;
  }
  else {
    pSVar4 = (node->fields).action;
  }
  (__this->fields)._actionId = pSVar4;
  il2cpp_runtime_glue(&(__this->fields)._actionId);
  fVar5 = 0.0;
  if (0.0 <= delay) {
    fVar5 = delay;
  }
  (__this->fields)._delay = fVar5;
  pTVar2 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar2 = *ppTVar1;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      __this_00 = (pTVar2->fields).m_OnEndTextSelection;
      call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,MethodInfo_Void_AddListener);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b27e40

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') ||
     ((__this->fields)._actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    return;
  }
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  if (DAT_057015b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InvokeLater_d__9);
    DAT_057015b0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_InvokeLater_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine
                       ((UnityEngine_MonoBehaviour_o *)__this,
                        (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields)._pending = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._pending,pUVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Schedule
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b27e50

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') ||
     ((__this->fields)._actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    return;
  }
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  if (DAT_057015b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InvokeLater_d__9);
    DAT_057015b0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_InvokeLater_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine
                       ((UnityEngine_MonoBehaviour_o *)__this,
                        (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields)._pending = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._pending,pUVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$InvokeLater
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b27f20

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057015b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InvokeLater_d__9);
    DAT_057015b0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_InvokeLater_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b27fb0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Events_UnityAction_T0__o *call;
  
  if (DAT_057015b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnInputChanged);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveListener);
    DAT_057015b1 = '\x01';
  }
  pTVar1 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      __this_00 = (pTVar1->fields).m_OnEndTextSelection;
      call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,MethodInfo_Void_RemoveListener);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x3b28090

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


