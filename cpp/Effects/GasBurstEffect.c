// Type: Effects.GasBurstEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/GasBurstEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/GasBurstEffect.cs
// --------------------------------

// Effects.GasBurstEffect$$Setup
// il2cpp: void Effects_GasBurstEffect__Setup (Effects_GasBurstEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x181e668a0

void Effects_GasBurstEffect__Setup
               (Effects_GasBurstEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  Characters_HumanComponentCache_o *pCVar1;
  bool bVar2;
  int32_t viewID;
  UnityEngine_ParticleSystem_o *pUVar3;
  Photon_Pun_PhotonView_o *x;
  Characters_Human_o *x_00;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Material_o *value;
  
  if (Il2CppMethodInitialized_184344f58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184344f58 = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  pUVar3 = UnityEngine_Component__GetComponentInChildren_object__664b50
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_664B50 *)
                      MethodInfo_UnityEngine_Component_GetComponentInChildren_ParticleSystem);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  viewID = PhotonExtensions__GetIntProperty
                     (owner,TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    x = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x != (Photon_Pun_PhotonView_o *)0x0) {
        x_00 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        if (x_00 != (Characters_Human_o *)0x0) {
          if ((x_00->fields).Dead != false) {
            return;
          }
          if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
            __this_00 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar3,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer
                                  );
            pCVar1 = (x_00->fields).HumanCache;
            if ((((pCVar1 != (Characters_HumanComponentCache_o *)0x0) &&
                 (pUVar3 = (pCVar1->fields).Smoke, pUVar3 != (UnityEngine_ParticleSystem_o *)0x0)) &&
                (__this_01 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar3,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                __this_01 != (UnityEngine_Renderer_o *)0x0)) &&
               (value = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_Renderer_o *)0x0)) {
              UnityEngine_Renderer__set_sharedMaterial(__this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Effects.GasBurstEffect$$.ctor
// il2cpp: void Effects_GasBurstEffect___ctor (Effects_GasBurstEffect_o* __this, const MethodInfo* method);
// 0x180528540

void
Effects_GasBurstEffect___ctor(Effects_GasBurstEffect_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


