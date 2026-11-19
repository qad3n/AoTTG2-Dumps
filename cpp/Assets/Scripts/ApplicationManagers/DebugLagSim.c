// Type: Assets.Scripts.ApplicationManagers.DebugLagSim
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Assets.Scripts.ApplicationManagers/DebugLagSim.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugLagSim.cs
// --------------------------------

// Assets.Scripts.ApplicationManagers.DebugLagSim$$Init
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim__Init (const MethodInfo* method);
// 0x5ddc170

void Assets_Scripts_ApplicationManagers_DebugLagSim__Init(MethodInfo *method)

{
  Assets_Scripts_ApplicationManagers_DebugLagSim_o *pAVar1;
  UnityEngine_GameObject_o *pUVar2;
  Photon_Pun_UtilityScripts_PhotonLagSimulationGui_o *pPVar3;
  Photon_Pun_UtilityScripts_PhotonStatsGui_o *pPVar4;
  
  if (Il2CppMethodInitialized_07548252 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_PhotonLagSimulationGui);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PhotonStatsGui)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugLagSim);
    Il2CppMethodInitialized_07548252 = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugLagSim);
  TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance);
  pAVar1 = TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance;
  if (pAVar1 != (Assets_Scripts_ApplicationManagers_DebugLagSim_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pAVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pPVar3 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_PhotonLagSimulationGui);
      (pAVar1->fields).LagSimGui = pPVar3;
      Il2CppCodeGenWriteBarrier(&(pAVar1->fields).LagSimGui);
      pAVar1 = TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance;
      if (pAVar1 != (Assets_Scripts_ApplicationManagers_DebugLagSim_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pAVar1,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pPVar4 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar2,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_PhotonStatsGui);
          (pAVar1->fields).StatsGUI = pPVar4;
          Il2CppCodeGenWriteBarrier(&(pAVar1->fields).StatsGUI);
          pAVar1 = TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance;
          if ((pAVar1 != (Assets_Scripts_ApplicationManagers_DebugLagSim_o *)0x0) &&
             (pPVar3 = (pAVar1->fields).LagSimGui,
             pPVar3 != (Photon_Pun_UtilityScripts_PhotonLagSimulationGui_o *)0x0)) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pPVar3,false,(MethodInfo *)0x0);
            pAVar1 = TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance;
            if ((pAVar1 != (Assets_Scripts_ApplicationManagers_DebugLagSim_o *)0x0) &&
               (pPVar4 = (pAVar1->fields).StatsGUI,
               pPVar4 != (Photon_Pun_UtilityScripts_PhotonStatsGui_o *)0x0)) {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pPVar4,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Assets.Scripts.ApplicationManagers.DebugLagSim$$Toggle
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle (const MethodInfo* method);
// 0x5ddc2f0

void Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle(MethodInfo *method)

{
  Assets_Scripts_ApplicationManagers_DebugLagSim_StaticFields *pAVar1;
  Photon_Pun_UtilityScripts_PhotonLagSimulationGui_o *__this;
  Assets_Scripts_ApplicationManagers_DebugLagSim_o *pAVar2;
  Photon_Pun_UtilityScripts_PhotonStatsGui_o *__this_00;
  bool value;
  
  if (Il2CppMethodInitialized_07548253 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim);
    Il2CppMethodInitialized_07548253 = '\x01';
  }
  pAVar1 = TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields;
  value = (bool)(pAVar1->Enabled ^ 1);
  pAVar1->Enabled = value;
  if ((pAVar1->_instance != (Assets_Scripts_ApplicationManagers_DebugLagSim_o *)0x0) &&
     (__this = (pAVar1->_instance->fields).LagSimGui,
     __this != (Photon_Pun_UtilityScripts_PhotonLagSimulationGui_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->_instance;
    if ((pAVar2 != (Assets_Scripts_ApplicationManagers_DebugLagSim_o *)0x0) &&
       (__this_00 = (pAVar2->fields).StatsGUI, __this_00 != (Photon_Pun_UtilityScripts_PhotonStatsGui_o *)0x0)
       ) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_00,
                 TypeInfo_Assets_Scripts_ApplicationManagers_DebugLagSim->static_fields->Enabled,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Assets.Scripts.ApplicationManagers.DebugLagSim$$.ctor
// il2cpp: void Assets_Scripts_ApplicationManagers_DebugLagSim___ctor (Assets_Scripts_ApplicationManagers_DebugLagSim_o* __this, const MethodInfo* method);
// 0x5ddc370

void Assets_Scripts_ApplicationManagers_DebugLagSim___ctor
               (Assets_Scripts_ApplicationManagers_DebugLagSim_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


