// Type: Characters.WallColossalMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/WallColossalMovementSync.cs
// Prior source: NEW in this update
// --------------------------------

// Characters.WallColossalMovementSync$$Awake
// il2cpp: void Characters_WallColossalMovementSync__Awake (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x3ff8870

void Characters_WallColossalMovementSync__Awake
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  if (DAT_057041e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_WallColossalShifter_GetComponent_WallColossalShi);
    DAT_057041e0 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (Characters_WallColossalShifter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_WallColossalShifter_GetComponent_WallColossalShi);
  (__this->fields)._wallColossal = pCVar1;
  il2cpp_runtime_glue(&(__this->fields)._wallColossal,pCVar1);
  return;
}


// Characters.WallColossalMovementSync$$SendCustomStream
// il2cpp: void Characters_WallColossalMovementSync__SendCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3ff88d0

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
    local_19 = *(undefined1 *)((long)&(pCVar1->fields).PreviousHumanWeapon + 4);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_19);
    if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
      Photon_Pun_PhotonStream__SendNext(stream,pIVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        local_1a = *(undefined1 *)&(pCVar1->fields)._steamDamageTimeLeft;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_1a);
        Photon_Pun_PhotonStream__SendNext(stream,pIVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_WallColossalMovementSync__ReceiveCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3ff8960

void Characters_WallColossalMovementSync__ReceiveCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auVar3 [16];
  
  if (DAT_057041e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColossalSteamState);
    il2cpp_init_method_metadata(&TypeInfo_ColossalStunState);
    DAT_057041e1 = '\x01';
  }
  if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
    pIVar2 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == DAT_05711038)) {
      pIVar2 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03ff8a86;
      if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_ColossalSteamState + 0x40))
      goto LAB_03ff8a8b;
      auVar3 = il2cpp_glue_022c7330(pIVar2);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03ff8a86;
      if (*(int *)((long)&(pCVar1->fields).PreviousHumanWeapon + 4) != *auVar3._0_8_) {
        Characters_WallColossalShifter__ApplySteamState(pCVar1,*auVar3._0_8_,auVar3._8_8_);
      }
    }
    pIVar2 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2->klass != DAT_05711038)) {
      return;
    }
    pIVar2 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_ColossalStunState + 0x40)) {
LAB_03ff8a8b:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar2);
      }
      auVar3 = il2cpp_glue_022c7330(pIVar2);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        if ((pCVar1->fields)._steamDamageTimeLeft == *auVar3._0_8_) {
          return;
        }
        Characters_WallColossalShifter__ApplyStunState(pCVar1,(int32_t)*auVar3._0_8_,auVar3._8_8_);
        return;
      }
    }
  }
LAB_03ff8a86:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalMovementSync$$.ctor
// il2cpp: void Characters_WallColossalMovementSync___ctor (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x3ff91a0

void Characters_WallColossalMovementSync___ctor
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


