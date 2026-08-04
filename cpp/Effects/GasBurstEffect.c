// Type: Effects.GasBurstEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/GasBurstEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/GasBurstEffect.cs
// --------------------------------

// Effects.GasBurstEffect$$Setup
// il2cpp: void Effects_GasBurstEffect__Setup (Effects_GasBurstEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x4572b50

void Effects_GasBurstEffect__Setup
               (Effects_GasBurstEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  System_Object_array *pSVar1;
  int32_t viewID;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *value;
  System_Object_array *extraout_RDX;
  Photon_Pun_PhotonView_o *__this_01;
  
  if (g_data_057af086 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057af086 = '\x01';
    settings = extraout_RDX;
  }
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner,settings);
  (__this->fields)._timeLeft = liveTime;
  pPVar3 = (Photon_Pun_PhotonView_o *)
           UnityEngine_Component__GetComponentInChildren_object__24e7d50
                     ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     (owner,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < viewID) {
    pPVar4 = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = pPVar4;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
        pPVar4 = (Photon_Pun_PhotonView_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar4,MethodInfo_Human_GetComponent_Human);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_01 = pPVar4;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
          if ((char)(pPVar4->fields)._IsMine_k__BackingField != '\0') {
            return;
          }
          if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
            __this_00 = (UnityEngine_Renderer_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pPVar3,MethodInfo_Renderer_GetComponent_Renderer);
            pSVar1 = pPVar4[1].fields.instantiationDataField;
            __this_01 = pPVar3;
            if ((((pSVar1 != (System_Object_array *)0x0) &&
                 (__this_01 = (Photon_Pun_PhotonView_o *)pSVar1->m_Items[0xe],
                 __this_01 != (Photon_Pun_PhotonView_o *)0x0)) &&
                (pPVar3 = (Photon_Pun_PhotonView_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_01,MethodInfo_Renderer_GetComponent_Renderer),
                pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) &&
               (value = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pPVar3,(MethodInfo *)0x0)
               , __this_01 = pPVar3, __this_00 != (UnityEngine_Renderer_o *)0x0)) {
              UnityEngine_Renderer__set_material(__this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Effects.GasBurstEffect$$.ctor
// il2cpp: void Effects_GasBurstEffect___ctor (Effects_GasBurstEffect_o* __this, const MethodInfo* method);
// 0x4572d10

void Effects_GasBurstEffect___ctor(Effects_GasBurstEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


