// Type: Gisketch.Aottg2UI.Actions.GisketchController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchController.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchController$$get_Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Actions_GisketchController__get_Root (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b27720

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_Root
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (DAT_057015a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015a9 = '\x01';
  }
  x = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pGVar2 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = (__this->fields)._root;
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_Actions_GisketchController__get_State (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b27780

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_Actions_GisketchController__get_State
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar3;
  
  if (DAT_057015aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015aa = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar3 = (pGVar1->fields)._codeActions;
  }
  return (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__Awake (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b277f0

void Gisketch_Aottg2UI_Actions_GisketchController__Awake
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (DAT_057015ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponent_GisketchUIRoot);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015ab = '\x01';
  }
  pGVar2 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponent_GisketchUIRoot);
    (__this->fields)._root = pGVar2;
    il2cpp_runtime_glue(&(__this->fields)._root,pGVar2);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b27880

void Gisketch_Aottg2UI_Actions_GisketchController__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_String_o *message;
  Il2CppObject *local_40;
  System_String_o *local_38;
  UnityEngine_GameObject_o *pUStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_28;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (DAT_057015ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&"Unhandled Gisketch action: ");
    DAT_057015ac = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
LAB_03b27944:
    message = System_String__Concat("Unhandled Gisketch action: ",actionId,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning
              ((Il2CppObject *)message,(UnityEngine_Object_o *)context.fields.GameObject,
               (MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)actionId,&local_40,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') goto LAB_03b27944;
    local_28 = context.fields.Node;
    iStack_20 = context.fields.InputSource;
    uStack_1c = context.fields._28_4_;
    local_38 = context.fields.ElementId;
    pUStack_30 = context.fields.GameObject;
    if (local_40 != (Il2CppObject *)0x0) {
      (*local_40[1].monitor)(local_40[4].klass,local_40[2].monitor);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchController$$RegisterAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* actionId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3b279a0

void Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *actionId,
               System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057015ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_057015ad = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((action != (System_Action_GisketchActionContext__o *)0x0) && ((char)bVar1 == '\0')) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions
    ;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this_00,(Il2CppObject *)actionId,(Il2CppObject *)action,MethodInfo_Void_set_Item);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$TryBeginOperation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x3b27a10

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
          System_String_o *message,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *state;
  
  if (DAT_057015aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015aa = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  state = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    state = (pGVar1->fields)._codeActions;
  }
  bVar2 = Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)state,operationKey,message,
                     (MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$EndOperation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x3b27aa0

void Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *state;
  
  if (DAT_057015aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015aa = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  state = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    state = (pGVar1->fields)._codeActions;
  }
  Gisketch_Aottg2UI_State_GisketchUIOperationState__End
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)state,operationKey,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$IsOperationActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, System_String_o* operationKey, const MethodInfo* method);
// 0x3b27b30

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive
          (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,System_String_o *operationKey,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *state;
  
  if (DAT_057015aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015aa = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  state = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    state = (pGVar1->fields)._codeActions;
  }
  bVar2 = Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy
                    ((Gisketch_Aottg2UI_State_GisketchUIState_o *)state,operationKey,
                     (MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchController___ctor (Gisketch_Aottg2UI_Actions_GisketchController_o* __this, const MethodInfo* method);
// 0x3b27bc0

void Gisketch_Aottg2UI_Actions_GisketchController___ctor
               (Gisketch_Aottg2UI_Actions_GisketchController_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057015ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Action_1_Giske);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_057015ae = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Action_GisketchActionContext);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Giske);
  (__this->fields)._actions =
       (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._actions);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


