// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.ApplicationManagers.DebugLagSim
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/ApplicationManagers/DebugLagSim.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugLagSim.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun.UtilityScripts;
using UnityEngine;

namespace Assets.Scripts.ApplicationManagers;

[Token(Token = "0x2000904")]
public class DebugLagSim : MonoBehaviour
{
	[Token(Token = "0x4002D9D")]
	[FieldOffset(Offset = "0x0")]
	private static DebugLagSim _instance;

	[Token(Token = "0x4002D9E")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x4002D9F")]
	[FieldOffset(Offset = "0x20")]
	public PhotonLagSimulationGui LagSimGui;

	[Token(Token = "0x4002DA0")]
	[FieldOffset(Offset = "0x28")]
	public PhotonStatsGui StatsGUI;

	[Token(Token = "0x60055AF")]
	[Address(RVA = "0x5CDC170", Offset = "0x5CDB170", VA = "0x5CDC170")]
	public static void Init()
	{
		// Lifted from source/cpp/Assets/Scripts/ApplicationManagers/DebugLagSim.c (Assets.Scripts.ApplicationManagers.DebugLagSim$$Init): 1 lines keep C-only constructs
		DebugLagSim pAVar1;
		GameObject pUVar2;
		PhotonLagSimulationGui pPVar3;
		PhotonStatsGui pPVar4;

		if (Il2CppMethodInitialized_07548252 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PhotonStatsGui) ;
			Il2CppMethodInitialized_07548252 = true;
		}
		pAVar1 = SingletonFactory.CreateSingleton<DebugLagSim>((object)DebugLagSim._instance);
		DebugLagSim._instance = pAVar1;
		pAVar1 = DebugLagSim._instance;
		if (pAVar1 != null) {
			pUVar2 = pAVar1.gameObject;
			if (pUVar2 != null) {
				pPVar3 = pUVar2.AddComponent<PhotonLagSimulationGui>();
				pAVar1.LagSimGui = pPVar3;
				pAVar1 = DebugLagSim._instance;
				if (pAVar1 != null) {
					pUVar2 = pAVar1.gameObject;
					if (pUVar2 != null) {
						pPVar4 = pUVar2.AddComponent<PhotonStatsGui>();
						pAVar1.StatsGUI = pPVar4;
						pAVar1 = DebugLagSim._instance;
						if ((pAVar1 != null) &&(pPVar3 = pAVar1.LagSimGui, pPVar3 != null)) {
							pPVar3.enabled = false;
							pAVar1 = DebugLagSim._instance;
							if ((pAVar1 != null) &&(pPVar4 = pAVar1.StatsGUI, pPVar4 != null)) {
								pPVar4.enabled = false;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055B0")]
	[Address(RVA = "0x5CDC2F0", Offset = "0x5CDB2F0", VA = "0x5CDC2F0")]
	public static void Toggle()
	{
		// Lifted from source/cpp/Assets/Scripts/ApplicationManagers/DebugLagSim.c (Assets.Scripts.ApplicationManagers.DebugLagSim$$Toggle): clean
		PhotonLagSimulationGui __this;
		DebugLagSim pAVar2;
		PhotonStatsGui __this_00;
		bool value;

		value = (bool)(DebugLagSim.Enabled ^ 1);
		DebugLagSim.Enabled = value;
		if ((DebugLagSim._instance != null) &&(__this = DebugLagSim._instance.LagSimGui, __this != null)) {
			__this.enabled = value;
			pAVar2 = DebugLagSim._instance;
			if ((pAVar2 != null) &&(__this_00 = pAVar2.StatsGUI, __this_00 != null) ) {
				__this_00.enabled = DebugLagSim.Enabled;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055B1")]
	[Address(RVA = "0x5CDC370", Offset = "0x5CDB370", VA = "0x5CDC370")]
	public DebugLagSim()
	{
		// Lifted from source/cpp/Assets/Scripts/ApplicationManagers/DebugLagSim.c (Assets.Scripts.ApplicationManagers.DebugLagSim$$.ctor): clean
		base();
		return;
	}
}
