using Il2CppDummyDll;
using Photon.Pun.UtilityScripts;
using UnityEngine;

namespace Assets.Scripts.ApplicationManagers;

[Token(Token = "0x20006CB")]
public class DebugLagSim : MonoBehaviour
{
	[Token(Token = "0x40020D9")]
	[FieldOffset(Offset = "0x0")]
	private static DebugLagSim _instance;

	[Token(Token = "0x40020DA")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x40020DB")]
	[FieldOffset(Offset = "0x20")]
	public PhotonLagSimulationGui LagSimGui;

	[Token(Token = "0x40020DC")]
	[FieldOffset(Offset = "0x28")]
	public PhotonStatsGui StatsGUI;

	[Token(Token = "0x60043AF")]
	[Address(RVA = "0x404EC70", Offset = "0x404EC70", VA = "0x404EC70")]
	public static void Init()
	{
	}

	[Token(Token = "0x60043B0")]
	[Address(RVA = "0x404EDF0", Offset = "0x404EDF0", VA = "0x404EDF0")]
	public static void Toggle()
	{
	}

	[Token(Token = "0x60043B1")]
	[Address(RVA = "0x404EE70", Offset = "0x404EE70", VA = "0x404EE70")]
	public DebugLagSim()
	{
	}
}
