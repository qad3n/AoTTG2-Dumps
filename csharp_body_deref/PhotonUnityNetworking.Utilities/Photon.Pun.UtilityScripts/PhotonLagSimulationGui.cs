// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PhotonLagSimulationGui
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Debugging/PhotonLagSimulationGui.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000008")]
public class PhotonLagSimulationGui : MonoBehaviour
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x20")]
	public Rect WindowRect;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x30")]
	public int WindowId;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x34")]
	public bool Visible;

	[Token(Token = "0x17000005")]
	public PhotonPeer Peer
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x1D552B0", Offset = "0x1D538B0", VA = "0x181D552B0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x1D55190", Offset = "0x1D53790", VA = "0x181D55190")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x1D54C40", Offset = "0x1D53240", VA = "0x181D54C40")]
	private void NetSimHasNoPeerWindow(int windowId)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x1D54C90", Offset = "0x1D53290", VA = "0x181D54C90")]
	private void NetSimWindow(int windowId)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x1D55390", Offset = "0x1D53990", VA = "0x181D55390")]
	public PhotonLagSimulationGui()
	{
	}
}
