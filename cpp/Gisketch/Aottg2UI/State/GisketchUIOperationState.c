// Type: Gisketch.Aottg2UI.State.GisketchUIOperationState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIOperationState.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIOperationState$$BusyKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey (System_String_o* operationKey, const MethodInfo* method);
// 0x3adbee0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__BusyKey
          (System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05701385 == '\0') {
    il2cpp_init_method_metadata(&".busy");
    DAT_05701385 = '\x01';
  }
  pSVar1 = System_String__Concat(operationKey,".busy",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IdleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey (System_String_o* operationKey, const MethodInfo* method);
// 0x3adbf20

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__IdleKey
          (System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05701386 == '\0') {
    il2cpp_init_method_metadata(&".idle");
    DAT_05701386 = '\x01';
  }
  pSVar1 = System_String__Concat(operationKey,".idle",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$MessageKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey (System_String_o* operationKey, const MethodInfo* method);
// 0x3adbf60

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIOperationState__MessageKey
          (System_String_o *operationKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05701387 == '\0') {
    il2cpp_init_method_metadata(&".message");
    DAT_05701387 = '\x01';
  }
  pSVar1 = System_String__Concat(operationKey,".message",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$TryBegin
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__TryBegin (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, System_String_o* message, const MethodInfo* method);
// 0x3adbfa0

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
      if (DAT_05701385 == '\0') {
        il2cpp_init_method_metadata(&".busy");
        DAT_05701385 = '\x01';
      }
      bVar3 = 0;
      pSVar2 = System_String__Concat(operationKey,".busy",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(state,pSVar2,0,method);
      if ((char)bVar1 == '\0') {
        if (DAT_05701385 == '\0') {
          il2cpp_init_method_metadata(&".busy");
          DAT_05701385 = '\x01';
        }
        pSVar2 = System_String__Concat(operationKey,".busy",(MethodInfo *)0x0);
        if (DAT_0570138b == '\0') {
          il2cpp_init_method_metadata(&"false");
          il2cpp_init_method_metadata(&"true");
          DAT_0570138b = '\x01';
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",method);
        if (DAT_05701386 == '\0') {
          il2cpp_init_method_metadata(&".idle");
          DAT_05701386 = '\x01';
        }
        pSVar2 = System_String__Concat(operationKey,".idle",(MethodInfo *)0x0);
        if (DAT_0570138b == '\0') {
          il2cpp_init_method_metadata(&"false");
          il2cpp_init_method_metadata(&"true");
          DAT_0570138b = '\x01';
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",method);
        if (DAT_05701387 == '\0') {
          il2cpp_init_method_metadata(&".message");
          DAT_05701387 = '\x01';
        }
        key = System_String__Concat(operationKey,".message",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__Set(state,key,message,method);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),1);
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$End
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIOperationState__End (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x3adc2a0

void Gisketch_Aottg2UI_State_GisketchUIOperationState__End
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (DAT_05701385 == '\0') {
        il2cpp_init_method_metadata(&".busy");
        DAT_05701385 = '\x01';
      }
      pSVar2 = System_String__Concat(operationKey,".busy",(MethodInfo *)0x0);
      if (DAT_0570138b == '\0') {
        il2cpp_init_method_metadata(&"false");
        il2cpp_init_method_metadata(&"true");
        DAT_0570138b = '\x01';
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"false",in_RCX);
      if (DAT_05701386 == '\0') {
        il2cpp_init_method_metadata(&".idle");
        DAT_05701386 = '\x01';
      }
      pSVar2 = System_String__Concat(operationKey,".idle",(MethodInfo *)0x0);
      if (DAT_0570138b == '\0') {
        il2cpp_init_method_metadata(&"false");
        il2cpp_init_method_metadata(&"true");
        DAT_0570138b = '\x01';
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,pSVar2,"true",in_RCX);
      if (DAT_05701387 == '\0') {
        il2cpp_init_method_metadata(&".message");
        DAT_05701387 = '\x01';
      }
      pSVar2 = System_String__Concat(operationKey,".message",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                (state,pSVar2,
                 (System_String_o *)(*(MethodInfo **)(DAT_057110b0 + 0xb8))->methodPointer,
                 *(MethodInfo **)(DAT_057110b0 + 0xb8));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIOperationState$$IsBusy
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy (Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* operationKey, const MethodInfo* method);
// 0x3adc400

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIOperationState__IsBusy
          (Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *operationKey,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *key;
  MethodInfo *in_RCX;
  
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(operationKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (DAT_05701385 == '\0') {
        il2cpp_init_method_metadata(&".busy");
        DAT_05701385 = '\x01';
      }
      key = System_String__Concat(operationKey,".busy",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(state,key,0,in_RCX);
      return bVar1;
    }
  }
  return 0;
}


