// Type: Effects.GasBurstEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Effects/GasBurstEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Effects/GasBurstEffect.cs  [CHANGED since prior version]
// --------------------------------

// Effects.GasBurstEffect$$Setup
// il2cpp: void Effects_GasBurstEffect__Setup (Effects_GasBurstEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x423e1c0

void Effects_GasBurstEffect__Setup
               (Effects_GasBurstEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  int32_t viewID;
  bool_conflict bVar1;
  UnityEngine_Component_o *pUVar2;
  Photon_Pun_PhotonView_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Material_o *value;
  System_Object_array *extraout_RDX;
  
  if (DAT_05705193 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSy);
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05705193 = '\x01';
    settings = extraout_RDX;
  }
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner,settings);
  (__this->fields)._timeLeft = liveTime;
  pUVar2 = (UnityEngine_Component_o *)
           UnityEngine_Component__GetComponentInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSy);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  viewID = PhotonExtensions__GetIntProperty
                     (owner,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    x = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x != (Photon_Pun_PhotonView_o *)0x0) {
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)x,MethodInfo_Human_GetComponent_Human);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          return;
        }
        if (x_00 != (UnityEngine_Object_o *)0x0) {
          if (*(char *)&x_00[4].monitor != '\0') {
            return;
          }
          if (pUVar2 != (UnityEngine_Component_o *)0x0) {
            __this_00 = (UnityEngine_Renderer_o *)
                        UnityEngine_Component__GetComponent<object>(pUVar2,MethodInfo_Renderer_GetComponent_Renderer);
            if ((((x_00[10].klass != (UnityEngine_Object_c *)0x0) &&
                 (pUVar2 = ((x_00[10].klass)->_1).properties,
                 pUVar2 != (UnityEngine_Component_o *)0x0)) &&
                (__this_01 = (UnityEngine_Renderer_o *)
                             UnityEngine_Component__GetComponent<object>(pUVar2,MethodInfo_Renderer_GetComponent_Renderer),
                __this_01 != (UnityEngine_Renderer_o *)0x0)) &&
               (value = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_Renderer_o *)0x0)) {
              UnityEngine_Renderer__set_material(__this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Effects.GasBurstEffect$$.ctor
// il2cpp: void Effects_GasBurstEffect___ctor (Effects_GasBurstEffect_o* __this, const MethodInfo* method);
// 0x423e380

void Effects_GasBurstEffect___ctor(Effects_GasBurstEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


