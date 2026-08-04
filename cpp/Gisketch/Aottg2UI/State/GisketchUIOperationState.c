// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIOperationState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIOperationState$$BusyKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey (System_String_o* operationKey, const MethodInfo* method);
// 0x3b46560

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9ca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&".busy");
    g_data_057a9ca5 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(operationKey,".busy",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IdleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey (System_String_o* operationKey, const MethodInfo* method);
// 0x3b465a0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9ca6 == '\0') {
    il2cpp_runtime_helper_023445d0(&".idle");
    g_data_057a9ca6 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(operationKey,".idle",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$MessageKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey (System_String_o* operationKey, const MethodInfo* method);
// 0x3b465e0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9ca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&".message");
    g_data_057a9ca7 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(operationKey,".message",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$TryBegin
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x3b46620

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
          (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
          System_String_o *message,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *key;
  bool_conflict bVar3;
  undefined8 unaff_RBX;
  
  bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (g_data_057a9ca5 == '\0') {
        il2cpp_runtime_helper_023445d0(&".busy");
        g_data_057a9ca5 = '\x01';
      }
      bVar3 = 0;
      pSVar2 = System_String__Concat_3ae5ba0(operationKey,".busy",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(state,pSVar2,0,method);
      if ((char)bVar1 == '\0') {
        if (g_data_057a9ca5 == '\0') {
          il2cpp_runtime_helper_023445d0(&".busy");
          g_data_057a9ca5 = '\x01';
        }
        pSVar2 = System_String__Concat_3ae5ba0(operationKey,".busy",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          il2cpp_runtime_helper_023445d0(&"false");
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",method);
        if (g_data_057a9ca6 == '\0') {
          il2cpp_runtime_helper_023445d0(&".idle");
          g_data_057a9ca6 = '\x01';
        }
        pSVar2 = System_String__Concat_3ae5ba0(operationKey,".idle",(MethodInfo *)0x0);
        if (g_data_057a9cab == '\0') {
          il2cpp_runtime_helper_023445d0(&"false");
          il2cpp_runtime_helper_023445d0(&"true");
          g_data_057a9cab = '\x01';
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",method);
        if (g_data_057a9ca7 == '\0') {
          il2cpp_runtime_helper_023445d0(&".message");
          g_data_057a9ca7 = '\x01';
        }
        key = System_String__Concat_3ae5ba0(operationKey,".message",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,key,message,method);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),1);
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$End
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIOperationState__End (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x3b46920

void Gisketch_Aottg2UI_State_GisketchUIOperationState__End
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_string__o *pSVar2;
  intptr_t iVar3;
  intptr_t iVar4;
  code *pcVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  MethodInfo *in_RCX;
  System_String_o *unaff_RBX;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *unaff_R14;
  System_String_o *unaff_R15;
  
  do {
    __this = state;
    *(System_String_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(Gisketch_Aottg2UI_State_GisketchUIState_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_String_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b4693a;
    bVar6 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (g_data_057a9ca5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46959;
      il2cpp_runtime_helper_023445d0(&".busy");
      g_data_057a9ca5 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46974;
    pSVar7 = System_String__Concat_3ae5ba0(operationKey,".busy",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b4698c;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46998;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469b4;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,pSVar7,"false",in_RCX);
    if (g_data_057a9ca6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469c9;
      il2cpp_runtime_helper_023445d0(&".idle");
      g_data_057a9ca6 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469e4;
    pSVar7 = System_String__Concat_3ae5ba0(operationKey,".idle",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b469fc;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a08;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a24;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,pSVar7,"true",in_RCX);
    if (g_data_057a9ca7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a39;
      il2cpp_runtime_helper_023445d0(&".message");
      g_data_057a9ca7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b46a54;
    unaff_RBX = System_String__Concat_3ae5ba0(operationKey,".message",(MethodInfo *)0x0);
    in_RCX = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
    unaff_R15 = (System_String_o *)in_RCX->methodPointer;
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x18);
    if (g_data_057a9caa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b46857;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b46863;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057a9caa = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    operationKey = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4687d;
    bVar6 = System_String__IsNullOrEmpty(unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (unaff_R15 == (System_String_o *)0x0) {
      unaff_R15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468c2;
      in_RCX = MethodInfo_Boolean_TryGetValue;
      operationKey = unaff_RBX;
      bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)unaff_RBX,(Il2CppObject **)((long)register0x00000020 + -0x20),
                         (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
      if ((char)bVar6 != '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468d5;
        operationKey = unaff_R15;
        bVar6 = System_String__op_Equality
                          (*(System_String_o **)((long)register0x00000020 + -0x20),unaff_R15,(MethodInfo *)0x0
                          );
        if ((char)bVar6 != '\0') {
          return;
        }
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468f7;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)unaff_RBX,(Il2CppObject *)unaff_R15,MethodInfo_Void_set_Item);
        pSVar2 = (__this->fields).Changed;
        if (pSVar2 == (System_Action_string__o *)0x0) {
          return;
        }
        iVar3 = (pSVar2->fields).method;
        iVar4 = (pSVar2->fields).method_code;
        pcVar5 = (code *)(pSVar2->fields).invoke_impl;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4690e;
        (*pcVar5)(iVar4,unaff_RBX,iVar3);
        return;
      }
    }
    state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4691d;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    unaff_R14 = __this;
  } while( true );
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IsBusy
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x3b46a80

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy
          (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *key;
  MethodInfo *in_RCX;
  
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (g_data_057a9ca5 == '\0') {
        il2cpp_runtime_helper_023445d0(&".busy");
        g_data_057a9ca5 = '\x01';
      }
      key = System_String__Concat_3ae5ba0(operationKey,".busy",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(state,key,0,in_RCX);
      return bVar1;
    }
  }
  return 0;
}


