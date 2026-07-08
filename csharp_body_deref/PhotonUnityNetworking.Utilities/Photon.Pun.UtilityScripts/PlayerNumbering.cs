using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000011")]
public class PlayerNumbering : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000012")]
	public delegate void PlayerNumberingChanged();

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x0")]
	public static PlayerNumbering instance;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x8")]
	public static Player[] SortedPlayers;

	[Token(Token = "0x400005B")]
	public const string RoomPlayerIndexedProp = "pNr";

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x28")]
	public bool dontDestroyOnLoad;

	[Token(Token = "0x14000003")]
	public static event PlayerNumberingChanged OnPlayerNumberingChanged
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x3BEDB00", Offset = "0x3BEDB00", VA = "0x3BEDB00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x3BEDBC0", Offset = "0x3BEDBC0", VA = "0x3BEDBC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3BEDC80", Offset = "0x3BEDC80", VA = "0x3BEDC80")]
	public void Awake()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3BEE590", Offset = "0x3BEE590", VA = "0x3BEE590", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3BEE5A0", Offset = "0x3BEE5A0", VA = "0x3BEE5A0", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3BEE640", Offset = "0x3BEE640", VA = "0x3BEE640", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3BEE650", Offset = "0x3BEE650", VA = "0x3BEE650", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3BEE660", Offset = "0x3BEE660", VA = "0x3BEE660", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3BEDE10", Offset = "0x3BEDE10", VA = "0x3BEDE10")]
	public void RefreshData()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3BEEBD0", Offset = "0x3BEEBD0", VA = "0x3BEEBD0")]
	public PlayerNumbering()
	{
	}
}
