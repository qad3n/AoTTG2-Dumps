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
		[Address(RVA = "0x56E9470", Offset = "0x56E8470", VA = "0x56E9470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x56E9480", Offset = "0x56E8480", VA = "0x56E9480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x56E9490", Offset = "0x56E8490", VA = "0x56E9490")]
	public void Start()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x56E9590", Offset = "0x56E8590", VA = "0x56E9590")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x56E9720", Offset = "0x56E8720", VA = "0x56E9720")]
	private void NetSimHasNoPeerWindow(int windowId)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x56E97F0", Offset = "0x56E87F0", VA = "0x56E97F0")]
	private void NetSimWindow(int windowId)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x56EA1D0", Offset = "0x56E91D0", VA = "0x56EA1D0")]
	public PhotonLagSimulationGui()
	{
	}
}
