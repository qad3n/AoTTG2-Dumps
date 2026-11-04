// Type: Gisketch.Aottg2UI.Actions.GisketchController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchController.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchController$$get_Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Actions_GisketchController__get_Root (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x1818fd460

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_Root
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342217 = '\x01';
  }
  x = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._root;
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_Actions_GisketchController__get_State (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x1818fd4d0

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_State
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342218 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return (pGVar1->fields)._State_k__BackingField;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__Awake (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x1818fd0a0

void Gisketch_Aottg2UI_Actions_GisketchController__Awake
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184342219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342219 = '\x01';
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
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_GisketchUIRoot);
    (__this->fields)._root = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._root,pGVar2);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1818fd160

void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *message;
  Il2CppObject *local_res10;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_18434221a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Unhandled Gisketch action: ");
    Il2CppMethodInitialized_18434221a = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)actionId,&local_res10,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
                        );
      if (!bVar1) goto label_1818fd223;
      if (local_res10 != (Il2CppObject *)0x0) {
        local_28 = *(undefined4 *)&(context->fields).ElementId;
        uStack_24 = *(undefined4 *)((longlong)&(context->fields).ElementId + 4);
        uStack_20 = *(undefined4 *)&(context->fields).GameObject;
        uStack_1c = *(undefined4 *)((longlong)&(context->fields).GameObject + 4);
        local_18 = *(undefined4 *)&(context->fields).Node;
        uStack_14 = *(undefined4 *)((longlong)&(context->fields).Node + 4);
        iStack_10 = (context->fields).InputSource;
        uStack_c = *(undefined4 *)&(context->fields).field_0x1c;
        (*local_res10[1].monitor)(local_res10[4].klass,&local_28,local_res10[2].monitor);
        return;
      }
    }
    ThrowNullReferenceException();
  }
label_1818fd223:
  message = System_String__Concat_1969e50("Unhandled Gisketch action: ",actionId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning_2ec3970
            ((Il2CppObject *)message,(UnityEngine_Object_o *)(context->fields).GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$RegisterAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818fd2b0

void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434221b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item)
    ;
    Il2CppMethodInitialized_18434221b = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((!bVar1) && (action != (System_Action_GisketchActionContext__o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)actionId,(Il2CppObject *)action,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$TryBeginOperation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x1818fd330

bool Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               System_String_o *message,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  
  state = Gisketch_Aottg2UI_Actions_GisketchController__get_State(__this,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
                    (state,operationKey,message,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$EndOperation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x1818fd130

void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  
  state = Gisketch_Aottg2UI_Actions_GisketchController__get_State(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIOperationState__End(state,operationKey,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$IsOperationActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x1818fd280

bool Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  
  state = Gisketch_Aottg2UI_Actions_GisketchController__get_State(__this,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy(state,operationKey,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController___ctor (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x1818fd370

void Gisketch_Aottg2UI_Actions_GisketchController___ctor
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  
  if (Il2CppMethodInitialized_18434221c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_18434221c = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
  (__this->fields)._actions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


