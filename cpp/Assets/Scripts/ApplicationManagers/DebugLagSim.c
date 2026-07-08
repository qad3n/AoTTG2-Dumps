// Type: Assets.Scripts.ApplicationManagers.DebugLagSim
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Assets.Scripts.ApplicationManagers/DebugLagSim.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/DebugLagSim.cs  [CHANGED since prior version]
// --------------------------------

// Assets.Scripts.ApplicationManagers.DebugLagSim$$Init
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim__Init (const MethodInfo* method);
// 0x414ec70

void Assets_Scripts_ApplicationManagers_DebugLagSim__Init(MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  UnityEngine_Behaviour_o *pUVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (DAT_057049d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugLagSim);
    il2cpp_init_method_metadata(&MethodInfo_PhotonLagSimulationGui_AddComponent_PhotonLagSim);
    il2cpp_init_method_metadata(&MethodInfo_PhotonStatsGui_AddComponent_PhotonStatsGui);
    il2cpp_init_method_metadata(&MethodInfo_DebugLagSim_CreateSingleton_DebugLagSim);
    DAT_057049d1 = '\x01';
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugLagSim + 0xb8),MethodInfo_DebugLagSim_CreateSingleton_DebugLagSim);
  **(undefined8 **)(TypeInfo_DebugLagSim + 0xb8) = pIVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DebugLagSim + 0xb8));
  pUVar1 = (UnityEngine_Component_o *)**(undefined8 **)(TypeInfo_DebugLagSim + 0xb8);
  if (pUVar1 != (UnityEngine_Component_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_gameObject(pUVar1,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pIVar3 = UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_PhotonLagSimulationGui_AddComponent_PhotonLagSim);
      pUVar1[1].monitor = pIVar3;
      il2cpp_runtime_glue(&pUVar1[1].monitor);
      pUVar1 = (UnityEngine_Component_o *)**(undefined8 **)(TypeInfo_DebugLagSim + 0xb8);
      if (pUVar1 != (UnityEngine_Component_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject(pUVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pIVar3 = UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_PhotonStatsGui_AddComponent_PhotonStatsGui);
          pUVar1[1].fields.m_CachedPtr = (intptr_t)pIVar3;
          il2cpp_runtime_glue(&pUVar1[1].fields);
          if ((**(long **)(TypeInfo_DebugLagSim + 0xb8) != 0) &&
             (pUVar2 = *(UnityEngine_Behaviour_o **)(**(long **)(TypeInfo_DebugLagSim + 0xb8) + 0x20),
             pUVar2 != (UnityEngine_Behaviour_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled(pUVar2,0,(MethodInfo *)0x0);
            if ((**(long **)(TypeInfo_DebugLagSim + 0xb8) != 0) &&
               (pUVar2 = *(UnityEngine_Behaviour_o **)(**(long **)(TypeInfo_DebugLagSim + 0xb8) + 0x28),
               pUVar2 != (UnityEngine_Behaviour_o *)0x0)) {
              UnityEngine_Behaviour__set_enabled(pUVar2,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Assets.Scripts.ApplicationManagers.DebugLagSim$$Toggle
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle (const MethodInfo* method);
// 0x414edf0

void Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle(MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  UnityEngine_Behaviour_o *pUVar3;
  long lVar4;
  
  if (DAT_057049d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugLagSim);
    DAT_057049d2 = '\x01';
  }
  plVar2 = *(long **)(TypeInfo_DebugLagSim + 0xb8);
  bVar1 = *(byte *)(plVar2 + 1);
  *(byte *)(plVar2 + 1) = bVar1 ^ 1;
  if ((*plVar2 != 0) &&
     (pUVar3 = *(UnityEngine_Behaviour_o **)(*plVar2 + 0x20),
     pUVar3 != (UnityEngine_Behaviour_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled(pUVar3,(uint)(bVar1 ^ 1),(MethodInfo *)0x0);
    lVar4 = **(long **)(TypeInfo_DebugLagSim + 0xb8);
    if ((lVar4 != 0) &&
       (pUVar3 = *(UnityEngine_Behaviour_o **)(lVar4 + 0x28),
       pUVar3 != (UnityEngine_Behaviour_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                (pUVar3,(uint)*(byte *)(*(long **)(TypeInfo_DebugLagSim + 0xb8) + 1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Assets.Scripts.ApplicationManagers.DebugLagSim$$.ctor
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim___ctor (Assets_Scripts_ApplicationManagers_DebugLagSim_o* __this, const MethodInfo* method);
// 0x414ee70

void Assets_Scripts_ApplicationManagers_DebugLagSim___ctor
               (Assets_Scripts_ApplicationManagers_DebugLagSim_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


