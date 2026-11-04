// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIOperationState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIOperationState$$BusyKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey (System_String_o* operationKey, const MethodInfo* method);
// 0x1818bdc50

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184341f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".busy");
    Il2CppMethodInitialized_184341f56 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(operationKey,".busy",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IdleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey (System_String_o* operationKey, const MethodInfo* method);
// 0x1818bde00

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184341f57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".idle");
    Il2CppMethodInitialized_184341f57 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(operationKey,".idle",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$MessageKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey (System_String_o* operationKey, const MethodInfo* method);
// 0x1818bdf50

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey(System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184341f58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".message");
    Il2CppMethodInitialized_184341f58 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(operationKey,".message",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$TryBegin
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x1818bdf90

bool Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               System_String_o *message,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return true;
  }
  bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if (Il2CppMethodInitialized_184341f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".busy");
    Il2CppMethodInitialized_184341f56 = '\x01';
  }
  pSVar2 = System_String__Concat_1969e50(operationKey,".busy",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184341f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184341f5e = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_State_GisketchUIState__Get(state,pSVar2,"false",(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,"1",(MethodInfo *)0x0);
  if (!bVar1) {
    if (pSVar2 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__Equals_196c240(pSVar2,"true",5,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_184341f56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".busy");
        Il2CppMethodInitialized_184341f56 = '\x01';
      }
      pSVar2 = System_String__Concat_1969e50(operationKey,".busy",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"false");
        il2cpp_codegen_initialize_runtime_metadata(&"true");
        Il2CppMethodInitialized_184341f5c = '\x01';
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f57 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".idle");
        Il2CppMethodInitialized_184341f57 = '\x01';
      }
      pSVar2 = System_String__Concat_1969e50(operationKey,".idle",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"false");
        il2cpp_codegen_initialize_runtime_metadata(&"true");
        Il2CppMethodInitialized_184341f5c = '\x01';
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f58 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".message");
        Il2CppMethodInitialized_184341f58 = '\x01';
      }
      pSVar2 = System_String__Concat_1969e50(operationKey,".message",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,message,(MethodInfo *)0x0);
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$End
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIOperationState__End (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x1818bdc90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bdded: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x1818bddf2: add rsp, 0x20
// asm:   0x1818bddf6: pop rdi

void Gisketch_Aottg2UI_State_GisketchUIOperationState__End
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
     (bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0), !bVar1)) {
    if (Il2CppMethodInitialized_184341f56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".busy");
      Il2CppMethodInitialized_184341f56 = '\x01';
    }
    pSVar2 = System_String__Concat_1969e50(operationKey,".busy",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"false");
      il2cpp_codegen_initialize_runtime_metadata(&"true");
      Il2CppMethodInitialized_184341f5c = '\x01';
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f57 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".idle");
      Il2CppMethodInitialized_184341f57 = '\x01';
    }
    pSVar2 = System_String__Concat_1969e50(operationKey,".idle",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"false");
      il2cpp_codegen_initialize_runtime_metadata(&"true");
      Il2CppMethodInitialized_184341f5c = '\x01';
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f58 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".message");
      Il2CppMethodInitialized_184341f58 = '\x01';
    }
    pSVar2 = System_String__Concat_1969e50(operationKey,".message",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__Set
              (state,pSVar2,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IsBusy
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x1818bde40

bool Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_184341f56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".busy");
        Il2CppMethodInitialized_184341f56 = '\x01';
      }
      pSVar2 = System_String__Concat_1969e50(operationKey,".busy",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f5e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"false");
        il2cpp_codegen_initialize_runtime_metadata(&"true");
        il2cpp_codegen_initialize_runtime_metadata(&"1");
        Il2CppMethodInitialized_184341f5e = '\x01';
      }
      pSVar2 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (state,pSVar2,"false",(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,"1",(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      if (pSVar2 != (System_String_o *)0x0) {
        bVar1 = System_String__Equals_196c240(pSVar2,"true",5,(MethodInfo *)0x0);
        return bVar1;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


