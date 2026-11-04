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

[Token(Token = "0x200089E")]
public class DebugLagSim : MonoBehaviour
{
	[Token(Token = "0x4002AF5")]
	[FieldOffset(Offset = "0x0")]
	private static DebugLagSim _instance;

	[Token(Token = "0x4002AF6")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x4002AF7")]
	[FieldOffset(Offset = "0x20")]
	public PhotonLagSimulationGui LagSimGui;

	[Token(Token = "0x4002AF8")]
	[FieldOffset(Offset = "0x28")]
	public PhotonStatsGui StatsGUI;

	[Token(Token = "0x6005273")]
	[Address(RVA = "0x2335290", Offset = "0x2333890", VA = "0x182335290")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005274")]
	[Address(RVA = "0x2335420", Offset = "0x2333A20", VA = "0x182335420")]
	public static void Toggle()
	{
	}

	[Token(Token = "0x6005275")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugLagSim()
	{
	}
}
