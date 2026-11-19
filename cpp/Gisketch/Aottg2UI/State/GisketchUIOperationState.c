// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIOperationState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIOperationState$$BusyKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey (System_String_o* operationKey, const MethodInfo* method);
// 0x5346260

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075428d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".busy");
    Il2CppMethodInitialized_075428d1 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(operationKey,".busy",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IdleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey (System_String_o* operationKey, const MethodInfo* method);
// 0x53462a0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075428d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".idle");
    Il2CppMethodInitialized_075428d2 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(operationKey,".idle",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$MessageKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey (System_String_o* operationKey, const MethodInfo* method);
// 0x53462e0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075428d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".message");
    Il2CppMethodInitialized_075428d3 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(operationKey,".message",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$TryBegin
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x5346320

bool Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               System_String_o *message,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  bVar3 = true;
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_075428d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".busy");
        Il2CppMethodInitialized_075428d1 = '\x01';
      }
      bVar3 = false;
      pSVar2 = System_String__Concat_52f0320(operationKey,".busy",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(state,pSVar2,false,method);
      if (!bVar1) {
        if (Il2CppMethodInitialized_075428d1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".busy");
          Il2CppMethodInitialized_075428d1 = '\x01';
        }
        pSVar2 = System_String__Concat_52f0320(operationKey,".busy",(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_075428d8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"false");
          il2cpp_codegen_initialize_runtime_metadata(&"true");
          Il2CppMethodInitialized_075428d8 = '\x01';
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",method);
        if (Il2CppMethodInitialized_075428d2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".idle");
          Il2CppMethodInitialized_075428d2 = '\x01';
        }
        pSVar2 = System_String__Concat_52f0320(operationKey,".idle",(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_075428d8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"false");
          il2cpp_codegen_initialize_runtime_metadata(&"true");
          Il2CppMethodInitialized_075428d8 = '\x01';
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",method);
        if (Il2CppMethodInitialized_075428d3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".message");
          Il2CppMethodInitialized_075428d3 = '\x01';
        }
        pSVar2 = System_String__Concat_52f0320(operationKey,".message",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,message,method);
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$End
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIOperationState__End (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x5346620

void Gisketch_Aottg2UI_State_GisketchUIOperationState__End
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_075428d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".busy");
        Il2CppMethodInitialized_075428d1 = '\x01';
      }
      pSVar2 = System_String__Concat_52f0320(operationKey,".busy",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075428d8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"false");
        il2cpp_codegen_initialize_runtime_metadata(&"true");
        Il2CppMethodInitialized_075428d8 = '\x01';
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",in_RCX);
      if (Il2CppMethodInitialized_075428d2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".idle");
        Il2CppMethodInitialized_075428d2 = '\x01';
      }
      pSVar2 = System_String__Concat_52f0320(operationKey,".idle",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075428d8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"false");
        il2cpp_codegen_initialize_runtime_metadata(&"true");
        Il2CppMethodInitialized_075428d8 = '\x01';
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",in_RCX);
      if (Il2CppMethodInitialized_075428d3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".message");
        Il2CppMethodInitialized_075428d3 = '\x01';
      }
      pSVar2 = System_String__Concat_52f0320(operationKey,".message",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                (state,pSVar2,(System_String_o *)(*(MethodInfo **)(g_data_07556758 + 0xb8))->methodPointer,
                 *(MethodInfo **)(g_data_07556758 + 0xb8));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IsBusy
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x5346780

bool Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *key;
  MethodInfo *in_RCX;
  
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_075428d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".busy");
        Il2CppMethodInitialized_075428d1 = '\x01';
      }
      key = System_String__Concat_52f0320(operationKey,".busy",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(state,key,false,in_RCX);
      return bVar1;
    }
  }
  return false;
}


