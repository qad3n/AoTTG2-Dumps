// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebouncedInputAction.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10___ctor(Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_IDisposable_Dispose(Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__MoveNext (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x181909f90

bool Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
               MethodInfo *method)

{
  float time;
  int iVar1;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  
  if (Il2CppMethodInitialized_184342221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_184342221 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) {
label_18190a06f:
      ThrowNullReferenceException();
    }
    time = (__this_00->fields)._delay;
    if (0.0 < time) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_01,time,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) goto label_18190a06f;
  }
  (__this_00->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pending,(void *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch
            (__this_00,(__this_00->fields)._actionId,(MethodInfo *)0x0);
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x18190a080

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10_System_Collections_IEnu
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, TMPro_TMP_InputField_o* input, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float delay, const MethodInfo* method);
// 0x1818fd9d0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,TMPro_TMP_InputField_o *input
               ,Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float delay,MethodInfo *method)

{
  System_String_o **targetAddress;
  TMPro_TMP_InputField_o *pTVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar2;
  bool bVar3;
  DG_Tweening_Core_DOSetter_T__o *pDVar4;
  System_String_o *pSVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434221d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_18434221d = '\x01';
  }
  (__this->fields)._input = input;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._input,input);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,actions);
  (__this->fields)._node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node,node);
  targetAddress = &(__this->fields)._actionId;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields)._actionId = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
    pSVar5 = (System_String_o *)0x0;
  }
  else {
    pSVar5 = (node->fields).action;
    (__this->fields)._actionId = pSVar5;
    Il2CppCodeGenWriteBarrier(targetAddress,pSVar5);
    pSVar5 = (node->fields).commitAction;
  }
  (__this->fields)._commitActionId = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._commitActionId,pSVar5);
  pTVar1 = (__this->fields)._input;
  fVar6 = 0.0;
  if (0.0 <= delay) {
    fVar6 = delay;
  }
  (__this->fields)._delay = fVar6;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pTVar1 = (__this->fields)._input;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pTVar1->fields).m_OnValueChanged;
    pDVar4 = (DG_Tweening_Core_DOSetter_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged,
               (MethodInfo_EB6EC0 *)0x0);
    if (pUVar2 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
      UnityEngine_Events_UnityEvent_Vector2___AddListener
                (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)pDVar4,
                 (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      pTVar1 = (__this->fields)._input;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pTVar1->fields).m_OnEndEdit;
        pDVar4 = (DG_Tweening_Core_DOSetter_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pDVar4,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted,
                   (MethodInfo_EB6EC0 *)0x0);
        if (pUVar2 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)pDVar4,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, const MethodInfo* method);
// 0x1818fd8b0

void
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged(Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, MethodInfo* method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *routine;
  UnityEngine_Coroutine_o *value;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields)._actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_18434221e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
      Il2CppMethodInitialized_18434221e = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
    (__this->fields)._pending = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,value);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Schedule
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x1818fd8b0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *routine;
  UnityEngine_Coroutine_o *value;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields)._actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_18434221e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
      Il2CppMethodInitialized_18434221e = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
    (__this->fields)._pending = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,value);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$InvokeLater
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x1818fd6e0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_18434221e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
    Il2CppMethodInitialized_18434221e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputCommitted
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputCommitted (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, const MethodInfo* method);
// 0x1818fd970

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputCommitted
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,System_String_o *__,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
    (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,(void *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._commitActionId,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch
            (__this,(&(__this->fields)._actionId)[!bVar1],(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Dispatch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* actionId, const MethodInfo* method);
// 0x1818fd560

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,System_String_o *actionId,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar3;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *gameObject;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_18434221f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434221f = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((!bVar4) && ((__this->fields)._actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    if ((__this->fields)._node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pTVar1 = (__this->fields)._input;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar1 = (__this->fields)._input;
        if ((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
           (pGVar2 = (__this->fields)._node, pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
           ) {
          ThrowNullReferenceException();
        }
        pSVar5 = (pTVar1->fields).m_Text;
        (pGVar2->fields).value = pSVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,pSVar5);
      }
    }
    pGVar3 = (__this->fields)._actions;
    if ((__this->fields)._node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    }
    else {
      pSVar5 = (((__this->fields)._node)->fields).id;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_48.fields.ElementId = (System_String_o *)0x0;
    local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
    local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    local_48.fields.InputSource = 0;
    local_48.fields._28_4_ = 0;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
              (&local_48,pSVar5,gameObject,(__this->fields)._node,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_28 = local_48.fields.ElementId._0_4_;
    uStack_24 = local_48.fields.ElementId._4_4_;
    uStack_20 = local_48.fields.GameObject._0_4_;
    uStack_1c = local_48.fields.GameObject._4_4_;
    local_18 = local_48.fields.Node._0_4_;
    uStack_14 = local_48.fields.Node._4_4_;
    iStack_10 = local_48.fields.InputSource;
    uStack_c = local_48.fields._28_4_;
    il2cpp_runtime_helper_18022f820(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar3,actionId,&local_28);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x1818fd750

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  bool bVar2;
  DG_Tweening_Core_DOSetter_T__o *pDVar3;
  
  if (Il2CppMethodInitialized_184342220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    Il2CppMethodInitialized_184342220 = '\x01';
  }
  if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._input;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    __this_00 = (pTVar1->fields).m_OnValueChanged;
    pDVar3 = (DG_Tweening_Core_DOSetter_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar3,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged,
               (MethodInfo_EB6EC0 *)0x0);
    if (__this_00 != (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
                 (UnityEngine_Events_UnityAction_T0__T1__T2__o *)pDVar3,
                 (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
      pTVar1 = (__this->fields)._input;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        __this_01 = (pTVar1->fields).m_OnEndEdit;
        pDVar3 = (DG_Tweening_Core_DOSetter_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pDVar3,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted,
                   (MethodInfo_EB6EC0 *)0x0);
        if (__this_01 != (TMPro_TMP_InputField_SubmitEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_01,
                     (UnityEngine_Events_UnityAction_T0__T1__T2__o *)pDVar3,
                     (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor(Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


