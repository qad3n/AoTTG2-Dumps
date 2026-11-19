// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebouncedInputAction.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x539f760

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x539fb00

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__MoveNext (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x539fb10

bool Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
               MethodInfo *method)

{
  float time;
  int iVar1;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542ba0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_07542ba0 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) goto label_0539fbea;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) {
label_0539fbea:
      ThrowNullReferenceException();
    }
    time = (__this_00->fields)._delay;
    if (0.0 < time) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_01,time,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  (__this_00->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pending);
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch
            (__this_00,(__this_00->fields)._actionId,method_00);
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x539fbf0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o* __this, const MethodInfo* method);
// 0x539fc00

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
// 0x539fc40

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, TMPro_TMP_InputField_o* input, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float delay, const MethodInfo* method);
// 0x539f430
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539f4f8: lea rdi, [rbp + 0x38]
// asm:   0x539f4fc: mov qword ptr [rbp + 0x38], 0
// asm:   0x539f504: xor ebx, ebx
// asm:   0x539f506: xor esi, esi
// asm:   0x539f508: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,TMPro_TMP_InputField_o *input
               ,Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float delay,MethodInfo *method)

{
  TMPro_TMP_InputField_o **targetAddress;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  System_String_o *pSVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07542b9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_07542b9c = '\x01';
  }
  targetAddress = &(__this->fields)._input;
  (__this->fields)._input = input;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  (__this->fields)._node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields)._actionId = (System_String_o *)0x0;
    pSVar3 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._actionId);
  }
  else {
    if (__this == (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) goto label_0539f614;
    (__this->fields)._actionId = (node->fields).action;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._actionId);
    pSVar3 = (node->fields).commitAction;
  }
  (__this->fields)._commitActionId = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._commitActionId);
  fVar4 = 0.0;
  if (0.0 <= delay) {
    fVar4 = delay;
  }
  (__this->fields)._delay = fVar4;
  x = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*targetAddress != (TMPro_TMP_InputField_o *)0x0) {
    __this_00 = ((*targetAddress)->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 != (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar2,
                 (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      if (*targetAddress != (TMPro_TMP_InputField_o *)0x0) {
        __this_01 = ((*targetAddress)->fields).m_OnEndEdit;
        pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pUVar2,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted,
                   (MethodInfo_4311A10 *)0x0);
        if (__this_01 != (TMPro_TMP_InputField_SubmitEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent_object___AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar2,
                     (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          return;
        }
      }
    }
  }
label_0539f614:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, const MethodInfo* method);
// 0x539f620

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputChanged
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,System_String_o *__,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule(__this,(MethodInfo *)__);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Schedule
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x539f630

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Schedule
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._actionId,(MethodInfo *)0x0);
  if ((bVar1) || ((__this->fields)._actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
    return;
  }
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_07542b9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
    Il2CppMethodInitialized_07542b9d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                     ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                      (MethodInfo *)0x0);
  (__this->fields)._pending = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$InvokeLater
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x539f6f0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater
          (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__InvokeLater_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_07542b9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
    Il2CppMethodInitialized_07542b9d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputCommitted
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputCommitted (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* __, const MethodInfo* method);
// 0x539f780

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnInputCommitted
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,System_String_o *__,
               MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  bool bVar1;
  MethodInfo *method_00;
  
  routine = (__this->fields)._pending;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._commitActionId,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch
            (__this,(&(__this->fields)._actionId)[!bVar1],method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Dispatch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, System_String_o* actionId, const MethodInfo* method);
// 0x539f7e0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Dispatch
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,System_String_o *actionId,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar5;
  System_String_o *elementId;
  UnityEngine_GameObject_o *gameObject;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  
  if (Il2CppMethodInitialized_07542b9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b9e = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  obj = (Il2CppObject *)(__this->fields)._actions;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  if ((__this->fields)._node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_0539f8ac:
    elementId = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  }
  else {
    pTVar1 = (__this->fields)._input;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar1 = (__this->fields)._input;
      if ((pTVar1 == (TMPro_TMP_InputField_o *)0x0) ||
         (pGVar2 = (__this->fields)._node, pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0))
      goto label_0539f988;
      (pGVar2->fields).value = (pTVar1->fields).m_Text;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
    }
    obj = (Il2CppObject *)(__this->fields)._actions;
    pGVar2 = (__this->fields)._node;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0539f8ac;
    elementId = (pGVar2->fields).id;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  local_68.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  local_68.fields.InputSource = 0;
  local_68.fields._28_4_ = 0;
  local_68.fields.ElementId = (System_String_o *)0x0;
  local_68.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
  Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
            (&local_68,elementId,gameObject,(__this->fields)._node,(MethodInfo *)0x0);
  if (obj != (Il2CppObject *)0x0) {
    local_38 = local_68.fields.Node;
    iStack_30 = local_68.fields.InputSource;
    uStack_2c = local_68.fields._28_4_;
    local_48 = local_68.fields.ElementId;
    pUStack_40 = local_68.fields.GameObject;
    pIVar3 = obj->klass;
    uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)((long)&pIVar4->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
          pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
          goto label_0539f95d;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_0539f95d:
    context.fields.GameObject = pUStack_40;
    context.fields.ElementId = local_48;
    context.fields.Node = local_38;
    context.fields.InputSource = iStack_30;
    context.fields._28_4_ = uStack_2c;
    (*pVVar6->methodPtr)(obj,actionId,context,pVVar6->method);
    return;
  }
label_0539f988:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x539f990

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *pUVar3;
  
  if (Il2CppMethodInitialized_07542b9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
    Il2CppMethodInitialized_07542b9f = '\x01';
  }
  routine = (__this->fields)._pending;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._input;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      __this_00 = (pTVar1->fields).m_OnValueChanged;
      pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
      UnityEngine_Events_UnityAction_object____ctor
                (pUVar3,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged,
                 (MethodInfo_4311A10 *)0x0);
      if (__this_00 != (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent_object___RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar3,
                   (MethodInfo_4319030 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
        pTVar1 = (__this->fields)._input;
        if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
          __this_01 = (pTVar1->fields).m_OnEndEdit;
          pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
          UnityEngine_Events_UnityAction_object____ctor
                    (pUVar3,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted,
                     (MethodInfo_4311A10 *)0x0);
          if (__this_01 != (TMPro_TMP_InputField_SubmitEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent_object___RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar3,
                       (MethodInfo_4319030 *)MethodInfo_UnityEngine_Events_UnityEvent_string_RemoveListener);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o* __this, const MethodInfo* method);
// 0x539faf0

void Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


