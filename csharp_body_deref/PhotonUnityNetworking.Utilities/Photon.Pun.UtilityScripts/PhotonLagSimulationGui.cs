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

[Token(Token = "0x200000A")]
public class PhotonLagSimulationGui : MonoBehaviour
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x20")]
	public Rect WindowRect;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x30")]
	public int WindowId;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x34")]
	public bool Visible;

	[Token(Token = "0x17000005")]
	public PhotonPeer Peer
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3EFDF00", Offset = "0x3EFDF00", VA = "0x3EFDF00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3EFDF10", Offset = "0x3EFDF10", VA = "0x3EFDF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3EFDF20", Offset = "0x3EFDF20", VA = "0x3EFDF20")]
	public void Start()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3EFDFD0", Offset = "0x3EFDFD0", VA = "0x3EFDFD0")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3EFE160", Offset = "0x3EFE160", VA = "0x3EFE160")]
	private void NetSimHasNoPeerWindow(int windowId)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3EFE230", Offset = "0x3EFE230", VA = "0x3EFE230")]
	private void NetSimWindow(int windowId)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3EFEBF0", Offset = "0x3EFEBF0", VA = "0x3EFEBF0")]
	public PhotonLagSimulationGui()
	{
	}
}
