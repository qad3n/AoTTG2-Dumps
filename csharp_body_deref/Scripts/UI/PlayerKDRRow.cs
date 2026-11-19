// ==================== AoTTG2 cross-reference ====================
// Type: UI.PlayerKDRRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PlayerKDRRow.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PlayerKDRRow.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000854")]
internal class PlayerKDRRow : MonoBehaviour
{
	[Token(Token = "0x4002A29")]
	[FieldOffset(Offset = "0x20")]
	public Player player;

	[Token(Token = "0x4002A2A")]
	[FieldOffset(Offset = "0x28")]
	public Text id;

	[Token(Token = "0x4002A2B")]
	[FieldOffset(Offset = "0x30")]
	public RawImage weapon;

	[Token(Token = "0x4002A2C")]
	[FieldOffset(Offset = "0x38")]
	public Text playerName;

	[Token(Token = "0x4002A2D")]
	[FieldOffset(Offset = "0x40")]
	public Text score;

	[Token(Token = "0x4002A2E")]
	[FieldOffset(Offset = "0x48")]
	public bool isSet;

	[Token(Token = "0x4002A2F")]
	[FieldOffset(Offset = "0x49")]
	public bool isMasterClient;

	[Token(Token = "0x4002A30")]
	[FieldOffset(Offset = "0x4C")]
	public int actorNumber;

	[Token(Token = "0x4002A31")]
	[FieldOffset(Offset = "0x50")]
	public string status;

	[Token(Token = "0x4002A32")]
	[FieldOffset(Offset = "0x58")]
	public string character;

	[Token(Token = "0x4002A33")]
	[FieldOffset(Offset = "0x60")]
	public string loadout;

	[Token(Token = "0x4002A34")]
	[FieldOffset(Offset = "0x68")]
	public string team;

	[Token(Token = "0x4002A35")]
	[FieldOffset(Offset = "0x70")]
	public int kills;

	[Token(Token = "0x4002A36")]
	[FieldOffset(Offset = "0x74")]
	public int deaths;

	[Token(Token = "0x4002A37")]
	[FieldOffset(Offset = "0x78")]
	public int maxDamage;

	[Token(Token = "0x4002A38")]
	[FieldOffset(Offset = "0x7C")]
	public int totalDamage;

	[Token(Token = "0x4002A39")]
	[FieldOffset(Offset = "0x80")]
	private string[] trackedProperties;

	[Token(Token = "0x4002A3A")]
	private const string _deadStatus = " <color=red>*dead*</color> ";

	[Token(Token = "0x4002A3B")]
	[FieldOffset(Offset = "0x88")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x4002A3C")]
	[FieldOffset(Offset = "0x90")]
	private KDRPanel _kdrPanel;

	[Token(Token = "0x6004F9F")]
	[Address(RVA = "0x5C3A4F0", Offset = "0x5C394F0", VA = "0x5C3A4F0")]
	public void Setup(ElementStyle style, Player player, KDRPanel panel)
	{
	}

	[Token(Token = "0x6004FA0")]
	[Address(RVA = "0x5C3AEA0", Offset = "0x5C39EA0", VA = "0x5C3AEA0")]
	public bool StatsChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6004FA1")]
	[Address(RVA = "0x5C3AF80", Offset = "0x5C39F80", VA = "0x5C3AF80")]
	public bool StatsChanged(int kills, int deaths, int maxDamage, int totalDamage)
	{
		return default(bool);
	}

	[Token(Token = "0x6004FA2")]
	[Address(RVA = "0x5C3AFA0", Offset = "0x5C39FA0", VA = "0x5C3AFA0")]
	public int GetKillDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004FA3")]
	[Address(RVA = "0x5C3AFE0", Offset = "0x5C39FE0", VA = "0x5C3AFE0")]
	public int GetDeathDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004FA4")]
	[Address(RVA = "0x5C3B020", Offset = "0x5C3A020", VA = "0x5C3B020")]
	public int GetMaxDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004FA5")]
	[Address(RVA = "0x5C3B060", Offset = "0x5C3A060", VA = "0x5C3B060")]
	public int GetTotalDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004FA6")]
	[Address(RVA = "0x5C3B0A0", Offset = "0x5C3A0A0", VA = "0x5C3B0A0")]
	public void UpdateRow(Player player)
	{
	}

	[Token(Token = "0x6004FA7")]
	[Address(RVA = "0x5C3A780", Offset = "0x5C39780", VA = "0x5C3A780")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x6004FA8")]
	[Address(RVA = "0x5C3B600", Offset = "0x5C3A600", VA = "0x5C3B600")]
	public string GetPlayerStatus(string status)
	{
		return null;
	}

	[Token(Token = "0x6004FA9")]
	[Address(RVA = "0x5C3B0C0", Offset = "0x5C3A0C0", VA = "0x5C3B0C0")]
	public Texture GetPlayerIcon(string character, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6004FAA")]
	[Address(RVA = "0x5C3B6E0", Offset = "0x5C3A6E0", VA = "0x5C3B6E0")]
	public Texture GetPlayerIconFull(string character, string loadout, string status)
	{
		return null;
	}

	[Token(Token = "0x6004FAB")]
	[Address(RVA = "0x5C3B8C0", Offset = "0x5C3A8C0", VA = "0x5C3B8C0")]
	public PlayerKDRRow()
	{
	}
}
