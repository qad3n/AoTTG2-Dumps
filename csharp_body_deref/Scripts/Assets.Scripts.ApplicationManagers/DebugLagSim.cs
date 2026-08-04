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

[Token(Token = "0x2000719")]
public class DebugLagSim : MonoBehaviour
{
	[Token(Token = "0x4002236")]
	[FieldOffset(Offset = "0x0")]
	private static DebugLagSim _instance;

	[Token(Token = "0x4002237")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x4002238")]
	[FieldOffset(Offset = "0x20")]
	public PhotonLagSimulationGui LagSimGui;

	[Token(Token = "0x4002239")]
	[FieldOffset(Offset = "0x28")]
	public PhotonStatsGui StatsGUI;

	[Token(Token = "0x6004617")]
	[Address(RVA = "0x4381C80", Offset = "0x4381C80", VA = "0x4381C80")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004618")]
	[Address(RVA = "0x4381E00", Offset = "0x4381E00", VA = "0x4381E00")]
	public static void Toggle()
	{
	}

	[Token(Token = "0x6004619")]
	[Address(RVA = "0x4381E80", Offset = "0x4381E80", VA = "0x4381E80")]
	public DebugLagSim()
	{
	}
}
