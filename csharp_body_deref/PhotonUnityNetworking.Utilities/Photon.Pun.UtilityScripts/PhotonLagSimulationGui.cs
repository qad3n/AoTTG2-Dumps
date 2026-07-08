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
		[Address(RVA = "0x3BE5A30", Offset = "0x3BE5A30", VA = "0x3BE5A30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3BE5A40", Offset = "0x3BE5A40", VA = "0x3BE5A40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3BE5A50", Offset = "0x3BE5A50", VA = "0x3BE5A50")]
	public void Start()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3BE5B00", Offset = "0x3BE5B00", VA = "0x3BE5B00")]
	public void OnGUI()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3BE5C90", Offset = "0x3BE5C90", VA = "0x3BE5C90")]
	private void NetSimHasNoPeerWindow(int windowId)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3BE5D60", Offset = "0x3BE5D60", VA = "0x3BE5D60")]
	private void NetSimWindow(int windowId)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3BE6720", Offset = "0x3BE6720", VA = "0x3BE6720")]
	public PhotonLagSimulationGui()
	{
	}
}
