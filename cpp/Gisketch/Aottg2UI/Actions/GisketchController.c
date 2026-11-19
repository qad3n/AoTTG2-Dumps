// Type: Gisketch.Aottg2UI.Actions.GisketchController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchController.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchController$$get_Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Actions_GisketchController__get_Root (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x539ee90

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_Root
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542b96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b96 = '\x01';
  }
  x = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pGVar2 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pGVar2 = (__this->fields)._root;
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_Actions_GisketchController__get_State (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x539eef0

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_State
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  
  if (Il2CppMethodInitialized_07542b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b97 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pGVar3 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar3 = (pGVar1->fields)._State_k__BackingField;
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__Awake (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x539ef60

void Gisketch_Aottg2UI_Actions_GisketchController__Awake
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542b98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b98 = '\x01';
  }
  pGVar2 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pGVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_GisketchUIRoot);
    (__this->fields)._root = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x539eff0

void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *message;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_07542b99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Unhandled Gisketch action: ");
    Il2CppMethodInitialized_07542b99 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (bVar1) {
label_0539f0a0:
    message = System_String__Concat_52f0320("Unhandled Gisketch action: ",actionId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning_68c53f0
              ((Il2CppObject *)message,(UnityEngine_Object_o *)context.fields.GameObject,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)actionId,&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
                      );
    if (!bVar1) goto label_0539f0a0;
    if (local_20 != (Il2CppObject *)0x0) {
      (*local_20[1].monitor)(local_20[4].klass,local_20[2].monitor);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchController$$RegisterAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x539f0f0

void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542b9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item)
    ;
    Il2CppMethodInitialized_07542b9a = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((action == (System_Action_GisketchActionContext__o *)0x0) || (bVar1)) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)actionId,(Il2CppObject *)action,
             (MethodInfo_4AAD4C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$TryBeginOperation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x539f160

bool Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               System_String_o *message,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  
  if (Il2CppMethodInitialized_07542b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b97 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    state = (pGVar1->fields)._State_k__BackingField;
  }
  bVar2 = Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
                    (state,operationKey,message,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$EndOperation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x539f1f0

void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  
  if (Il2CppMethodInitialized_07542b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b97 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    state = (pGVar1->fields)._State_k__BackingField;
  }
  Gisketch_Aottg2UI_State_GisketchUIOperationState__End(state,operationKey,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$IsOperationActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x539f280

bool Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  
  if (Il2CppMethodInitialized_07542b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b97 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    state = (pGVar1->fields)._State_k__BackingField;
  }
  bVar2 = Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy(state,operationKey,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController___ctor (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x539f310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539f33c: cmp byte ptr [rip + 0x21a3543], 0

void Gisketch_Aottg2UI_Actions_GisketchController___ctor
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  
  if (Il2CppMethodInitialized_07542b9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542b9b = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
  (__this->fields)._actions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


