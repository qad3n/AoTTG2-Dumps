// Type: Assets.Scripts.ApplicationManagers.DebugLagSim
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Assets.Scripts.ApplicationManagers/DebugLagSim.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugLagSim.cs
// --------------------------------

// Assets.Scripts.ApplicationManagers.DebugLagSim$$Init
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim__Init (const MethodInfo* method);
// 0x4481c80

void Assets_Scripts_ApplicationManagers_DebugLagSim__Init(MethodInfo *method)

{
  byte bVar1;
  UnityEngine_MonoBehaviour_o *pUVar2;
  UnityEngine_Behaviour_o *pUVar3;
  long *plVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_MonoBehaviour_c *pUVar8;
  UnityEngine_MonoBehaviour_o *__this;
  
  if (g_data_057ae897 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugLagSim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonLagSimulationGui_AddComponent_PhotonLagSimulationG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonStatsGui_AddComponent_PhotonStatsGui);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugLagSim_CreateSingleton_DebugLagSim);
    g_data_057ae897 = '\x01';
  }
  pIVar6 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugLagSim + 0xb8),MethodInfo_DebugLagSim_CreateSingleton_DebugLagSim);
  **(undefined8 **)(TypeInfo_DebugLagSim + 0xb8) = pIVar6;
  __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_DebugLagSim + 0xb8);
  il2cpp_runtime_helper_022b4080();
  pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_DebugLagSim + 0xb8);
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    __this = pUVar2;
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      pUVar8 = (UnityEngine_MonoBehaviour_c *)
               UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_PhotonLagSimulationGui_AddComponent_PhotonLagSimulationG);
      pUVar2[1].klass = pUVar8;
      __this = pUVar2 + 1;
      il2cpp_runtime_helper_022b4080();
      pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_DebugLagSim + 0xb8);
      if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
        __this = pUVar2;
        pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_PhotonStatsGui_AddComponent_PhotonStatsGui);
          ((UnityEngine_Component_Fields *)&pUVar2[1].monitor)->m_CachedPtr = (intptr_t)pIVar6;
          __this = (UnityEngine_MonoBehaviour_o *)&pUVar2[1].monitor;
          il2cpp_runtime_helper_022b4080();
          if ((**(long **)(TypeInfo_DebugLagSim + 0xb8) != 0) &&
             (__this = *(UnityEngine_MonoBehaviour_o **)(**(long **)(TypeInfo_DebugLagSim + 0xb8) + 0x20),
             __this != (UnityEngine_MonoBehaviour_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
            if ((**(long **)(TypeInfo_DebugLagSim + 0xb8) != 0) &&
               (pUVar3 = *(UnityEngine_Behaviour_o **)(**(long **)(TypeInfo_DebugLagSim + 0xb8) + 0x28),
               __this = (UnityEngine_MonoBehaviour_o *)0x0, pUVar3 != (UnityEngine_Behaviour_o *)0x0)) {
              UnityEngine_Behaviour__set_enabled(pUVar3,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae898 == '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)&TypeInfo_DebugLagSim;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae898 = '\x01';
  }
  plVar4 = *(long **)(TypeInfo_DebugLagSim + 0xb8);
  bVar1 = *(byte *)(plVar4 + 1);
  *(byte *)(plVar4 + 1) = bVar1 ^ 1;
  if ((*plVar4 != 0) &&
     (__this = *(UnityEngine_MonoBehaviour_o **)(*plVar4 + 0x20), __this != (UnityEngine_MonoBehaviour_o *)0x0
     )) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,(uint)(bVar1 ^ 1),(MethodInfo *)0x0);
    lVar5 = **(long **)(TypeInfo_DebugLagSim + 0xb8);
    if ((lVar5 != 0) &&
       (pUVar3 = *(UnityEngine_Behaviour_o **)(lVar5 + 0x28), __this = (UnityEngine_MonoBehaviour_o *)0x0,
       pUVar3 != (UnityEngine_Behaviour_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                (pUVar3,(uint)*(byte *)(*(long **)(TypeInfo_DebugLagSim + 0xb8) + 1),(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// Assets.Scripts.ApplicationManagers.DebugLagSim$$Toggle
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle (const MethodInfo* method);
// 0x4481e00

void Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle(MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  UnityEngine_Behaviour_o *__this;
  
  if (g_data_057ae898 == '\0') {
    method = (MethodInfo *)&TypeInfo_DebugLagSim;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae898 = '\x01';
  }
  plVar2 = *(long **)(TypeInfo_DebugLagSim + 0xb8);
  bVar1 = *(byte *)(plVar2 + 1);
  *(byte *)(plVar2 + 1) = bVar1 ^ 1;
  if ((*plVar2 != 0) && (method = *(MethodInfo **)(*plVar2 + 0x20), method != (MethodInfo *)0x0)) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)method,(uint)(bVar1 ^ 1),(MethodInfo *)0x0);
    lVar3 = **(long **)(TypeInfo_DebugLagSim + 0xb8);
    if ((lVar3 != 0) &&
       (__this = *(UnityEngine_Behaviour_o **)(lVar3 + 0x28), method = (MethodInfo *)0x0,
       __this != (UnityEngine_Behaviour_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                (__this,(uint)*(byte *)(*(long **)(TypeInfo_DebugLagSim + 0xb8) + 1),(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)method,(MethodInfo *)0x0);
  return;
}


// Assets.Scripts.ApplicationManagers.DebugLagSim$$.ctor
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim___ctor (Assets_Scripts_ApplicationManagers_DebugLagSim_o* __this, const MethodInfo* method);
// 0x4481e80

void Assets_Scripts_ApplicationManagers_DebugLagSim___ctor
               (Assets_Scripts_ApplicationManagers_DebugLagSim_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


