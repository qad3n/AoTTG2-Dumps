// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PlayerNumbering
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/PhotonPlayer/PlayerNumbering.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F05FD0", Offset = "0x3F05FD0", VA = "0x3F05FD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x3F06090", Offset = "0x3F06090", VA = "0x3F06090")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3F06150", Offset = "0x3F06150", VA = "0x3F06150")]
	public void Awake()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3F06A60", Offset = "0x3F06A60", VA = "0x3F06A60", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3F06A70", Offset = "0x3F06A70", VA = "0x3F06A70", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3F06B10", Offset = "0x3F06B10", VA = "0x3F06B10", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3F06B20", Offset = "0x3F06B20", VA = "0x3F06B20", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3F06B30", Offset = "0x3F06B30", VA = "0x3F06B30", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3F062E0", Offset = "0x3F062E0", VA = "0x3F062E0")]
	public void RefreshData()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3F070A0", Offset = "0x3F070A0", VA = "0x3F070A0")]
	public PlayerNumbering()
	{
	}
}
