// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PhotonStatsGui
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Debugging/PhotonStatsGui.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000B")]
public class PhotonStatsGui : MonoBehaviour
{
	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x20")]
	public bool statsWindowOn;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x21")]
	public bool statsOn;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x22")]
	public bool healthStatsVisible;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x23")]
	public bool trafficStatsOn;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x24")]
	public bool buttonsOn;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x28")]
	public Rect statsRect;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x38")]
	public int WindowId;

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3EFEC10", Offset = "0x3EFEC10", VA = "0x3EFEC10")]
	public void Start()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3EFEC20", Offset = "0x3EFEC20", VA = "0x3EFEC20")]
	public void Update()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3EFEC30", Offset = "0x3EFEC30", VA = "0x3EFEC30")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3EFEE80", Offset = "0x3EFEE80", VA = "0x3EFEE80")]
	public void TrafficStatsWindow(int windowID)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3F005C0", Offset = "0x3F005C0", VA = "0x3F005C0")]
	public PhotonStatsGui()
	{
	}
}
