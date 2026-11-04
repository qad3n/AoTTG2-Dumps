// Type: Characters.WallColossalMovementSync
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalMovementSync.cs
// Prior real C# source: none
// --------------------------------

// Characters.WallColossalMovementSync$$Awake
// il2cpp: void Characters_WallColossalMovementSync__Awake (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x182194160

void Characters_WallColossalMovementSync__Awake
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *value;
  
  if (Il2CppMethodInitialized_184346d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_WallColossalShifter);
    Il2CppMethodInitialized_184346d70 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_WallColossalShifter);
  (__this->fields)._wallColossal = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._wallColossal,value);
  return;
}


// Characters.WallColossalMovementSync$$SendCustomStream
// il2cpp: void Characters_WallColossalMovementSync__SendCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x182194310

void Characters_WallColossalMovementSync__SendCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pCVar1 = (__this->fields)._wallColossal;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    local_res8[0] = (undefined1)(pCVar1->fields)._steamState;
    pIVar2 = il2cpp_value_box(g_data_184354dd8,local_res8);
    if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
      Photon_Pun_PhotonStream__SendNext(stream,pIVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        local_res10[0] = (undefined1)(pCVar1->fields)._stunState;
        pIVar2 = il2cpp_value_box(g_data_184354dd8,local_res10);
        Photon_Pun_PhotonStream__SendNext(stream,pIVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_WallColossalMovementSync__ReceiveCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x1821941c0

void Characters_WallColossalMovementSync__ReceiveCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_184346d71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalSteamState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalStunState);
    Il2CppMethodInitialized_184346d71 = '\x01';
  }
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_1821942f2;
  pIVar2 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar2->klass == g_data_184354dd8) {
      pIVar4 = pIVar2;
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar2 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_1821942f2;
      if ((pIVar2->klass->_1).element_class != (TypeInfo_Characters_ColossalSteamState->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar2,TypeInfo_Characters_ColossalSteamState);
      }
      piVar3 = il2cpp_object_unbox(pIVar2);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_1821942f2;
      if ((pCVar1->fields)._steamState != *piVar3) {
        Characters_WallColossalShifter__ApplySteamState(pCVar1,*piVar3,(MethodInfo *)0x0);
      }
    }
  }
  pIVar2 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar2->klass == g_data_184354dd8) {
      pIVar4 = pIVar2;
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar2 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((pIVar2->klass->_1).element_class != (TypeInfo_Characters_ColossalStunState->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,TypeInfo_Characters_ColossalStunState);
        }
        piVar3 = il2cpp_object_unbox(pIVar2);
        pCVar1 = (__this->fields)._wallColossal;
        if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
          if ((pCVar1->fields)._stunState == *piVar3) {
            return;
          }
          Characters_WallColossalShifter__ApplyStunState(pCVar1,*piVar3,(MethodInfo *)0x0);
          return;
        }
      }
label_1821942f2:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.WallColossalMovementSync$$.ctor
// il2cpp: void Characters_WallColossalMovementSync___ctor (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x1821531c0

void
Characters_WallColossalMovementSync___ctor(Characters_WallColossalMovementSync_o* __this, MethodInfo* method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


