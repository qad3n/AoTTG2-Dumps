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

[Token(Token = "0x2000009")]
public class PhotonStatsGui : MonoBehaviour
{
	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x20")]
	public bool statsWindowOn;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x21")]
	public bool statsOn;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x22")]
	public bool healthStatsVisible;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x23")]
	public bool trafficStatsOn;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x24")]
	public bool buttonsOn;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x28")]
	public Rect statsRect;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x38")]
	public int WindowId;

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x1D55560", Offset = "0x1D53B60", VA = "0x181D55560")]
	public void Start()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Update()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x1D553C0", Offset = "0x1D539C0", VA = "0x181D553C0")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x1D555D0", Offset = "0x1D53BD0", VA = "0x181D555D0")]
	public void TrafficStatsWindow(int windowID)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x1D563C0", Offset = "0x1D549C0", VA = "0x181D563C0")]
	public PhotonStatsGui()
	{
	}
}
