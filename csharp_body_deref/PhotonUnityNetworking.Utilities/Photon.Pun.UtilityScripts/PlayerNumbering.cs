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

[Token(Token = "0x200000F")]
public class PlayerNumbering : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000010")]
	public delegate void PlayerNumberingChanged();

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x0")]
	public static PlayerNumbering instance;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x8")]
	public static Player[] SortedPlayers;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static PlayerNumberingChanged m_OnPlayerNumberingChanged;

	[Token(Token = "0x4000056")]
	public const string RoomPlayerIndexedProp = "pNr";

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x28")]
	public bool dontDestroyOnLoad;

	[Token(Token = "0x14000003")]
	public static event PlayerNumberingChanged OnPlayerNumberingChanged
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x1D5AE10", Offset = "0x1D59410", VA = "0x181D5AE10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x1D5AED0", Offset = "0x1D594D0", VA = "0x181D5AED0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x1D5A440", Offset = "0x1D58A40", VA = "0x181D5A440")]
	public void Awake()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x1D5A5F0", Offset = "0x1D58BF0", VA = "0x181D5A5F0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x1D5A600", Offset = "0x1D58C00", VA = "0x181D5A600", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x1D5A5F0", Offset = "0x1D58BF0", VA = "0x181D5A5F0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x1D5A5F0", Offset = "0x1D58BF0", VA = "0x181D5A5F0", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x1D5A680", Offset = "0x1D58C80", VA = "0x181D5A680", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x1D5A6F0", Offset = "0x1D58CF0", VA = "0x181D5A6F0")]
	public void RefreshData()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public PlayerNumbering()
	{
	}
}
