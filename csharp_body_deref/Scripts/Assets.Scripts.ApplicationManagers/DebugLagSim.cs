// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.ApplicationManagers.DebugLagSim
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/ApplicationManagers/DebugLagSim.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugLagSim.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x60055B0")]
	[Address(RVA = "0x5CDC2F0", Offset = "0x5CDB2F0", VA = "0x5CDC2F0")]
	public static void Toggle()
	{
	}

	[Token(Token = "0x60055B1")]
	[Address(RVA = "0x5CDC370", Offset = "0x5CDB370", VA = "0x5CDC370")]
	public DebugLagSim()
	{
	}
}
