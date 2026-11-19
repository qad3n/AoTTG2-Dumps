// Type: Characters.WallColossalMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/WallColossalMovementSync.cs
// Prior real C# source: none
// --------------------------------

// Characters.WallColossalMovementSync$$Awake
// il2cpp: void Characters_WallColossalMovementSync__Awake (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x5c1e490

void Characters_WallColossalMovementSync__Awake
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547744 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_WallColossalShifter);
    Il2CppMethodInitialized_07547744 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_WallColossalShifter)
  ;
  (__this->fields)._wallColossal = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._wallColossal);
  return;
}


// Characters.WallColossalMovementSync$$SendCustomStream
// il2cpp: void Characters_WallColossalMovementSync__SendCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5c1e4f0

void Characters_WallColossalMovementSync__SendCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_1a;
  undefined1 local_19;
  
  pCVar1 = (__this->fields)._wallColossal;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    local_19 = (undefined1)(pCVar1->fields)._steamState;
    pIVar2 = il2cpp_vm_Object_Box(g_data_075566e0,&local_19);
    if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
      Photon_Pun_PhotonStream__SendNext(stream,pIVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        local_1a = (undefined1)(pCVar1->fields)._stunState;
        pIVar2 = il2cpp_vm_Object_Box(g_data_075566e0,&local_1a);
        Photon_Pun_PhotonStream__SendNext(stream,pIVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_WallColossalMovementSync__ReceiveCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5c1e580

void Characters_WallColossalMovementSync__ReceiveCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int *piVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547745 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalSteamState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalStunState);
    Il2CppMethodInitialized_07547745 = '\x01';
  }
  if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
    pIVar2 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == g_data_075566e0)) {
      pIVar2 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05c1e6a6;
      if ((pIVar2->klass->_1).element_class != (TypeInfo_Characters_ColossalSteamState->_1).element_class)
      goto label_05c1e6ab;
      piVar3 = il2cpp_vm_Object_Unbox(pIVar2);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05c1e6a6;
      if ((pCVar1->fields)._steamState != *piVar3) {
        Characters_WallColossalShifter__ApplySteamState(pCVar1,*piVar3,method_00);
      }
    }
    pIVar2 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2->klass != g_data_075566e0)) {
      return;
    }
    pIVar2 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((pIVar2->klass->_1).element_class != (TypeInfo_Characters_ColossalStunState->_1).element_class) {
label_05c1e6ab:
        il2cpp_codegen_raise_invalid_cast_exception(pIVar2);
      }
      piVar3 = il2cpp_vm_Object_Unbox(pIVar2);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        if ((pCVar1->fields)._stunState == *piVar3) {
          return;
        }
        Characters_WallColossalShifter__ApplyStunState(pCVar1,*piVar3,method_01);
        return;
      }
    }
  }
label_05c1e6a6:
  ThrowNullReferenceException();
}


// Characters.WallColossalMovementSync$$.ctor
// il2cpp: void Characters_WallColossalMovementSync___ctor (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x5c1ee20

void Characters_WallColossalMovementSync___ctor
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


