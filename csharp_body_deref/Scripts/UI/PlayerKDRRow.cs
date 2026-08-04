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

[Token(Token = "0x200064B")]
internal class PlayerKDRRow : MonoBehaviour
{
	[Token(Token = "0x4001EDF")]
	[FieldOffset(Offset = "0x20")]
	public Player player;

	[Token(Token = "0x4001EE0")]
	[FieldOffset(Offset = "0x28")]
	public Text id;

	[Token(Token = "0x4001EE1")]
	[FieldOffset(Offset = "0x30")]
	public RawImage weapon;

	[Token(Token = "0x4001EE2")]
	[FieldOffset(Offset = "0x38")]
	public Text playerName;

	[Token(Token = "0x4001EE3")]
	[FieldOffset(Offset = "0x40")]
	public Text score;

	[Token(Token = "0x4001EE4")]
	[FieldOffset(Offset = "0x48")]
	public bool isSet;

	[Token(Token = "0x4001EE5")]
	[FieldOffset(Offset = "0x49")]
	public bool isMasterClient;

	[Token(Token = "0x4001EE6")]
	[FieldOffset(Offset = "0x4C")]
	public int actorNumber;

	[Token(Token = "0x4001EE7")]
	[FieldOffset(Offset = "0x50")]
	public string status;

	[Token(Token = "0x4001EE8")]
	[FieldOffset(Offset = "0x58")]
	public string character;

	[Token(Token = "0x4001EE9")]
	[FieldOffset(Offset = "0x60")]
	public string loadout;

	[Token(Token = "0x4001EEA")]
	[FieldOffset(Offset = "0x68")]
	public string team;

	[Token(Token = "0x4001EEB")]
	[FieldOffset(Offset = "0x70")]
	public int kills;

	[Token(Token = "0x4001EEC")]
	[FieldOffset(Offset = "0x74")]
	public int deaths;

	[Token(Token = "0x4001EED")]
	[FieldOffset(Offset = "0x78")]
	public int maxDamage;

	[Token(Token = "0x4001EEE")]
	[FieldOffset(Offset = "0x7C")]
	public int totalDamage;

	[Token(Token = "0x4001EEF")]
	[FieldOffset(Offset = "0x80")]
	private string[] trackedProperties;

	[Token(Token = "0x4001EF0")]
	private const string _deadStatus = " <color=red>*dead*</color> ";

	[Token(Token = "0x4001EF1")]
	[FieldOffset(Offset = "0x88")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x4001EF2")]
	[FieldOffset(Offset = "0x90")]
	private KDRPanel _kdrPanel;

	[Token(Token = "0x6003F82")]
	[Address(RVA = "0x42D7F90", Offset = "0x42D7F90", VA = "0x42D7F90")]
	public void Setup(ElementStyle style, Player player, KDRPanel panel)
	{
	}

	[Token(Token = "0x6003F83")]
	[Address(RVA = "0x42D8960", Offset = "0x42D8960", VA = "0x42D8960")]
	public bool StatsChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F84")]
	[Address(RVA = "0x42D8A40", Offset = "0x42D8A40", VA = "0x42D8A40")]
	public bool StatsChanged(int kills, int deaths, int maxDamage, int totalDamage)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F85")]
	[Address(RVA = "0x42D8A60", Offset = "0x42D8A60", VA = "0x42D8A60")]
	public int GetKillDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003F86")]
	[Address(RVA = "0x42D8AA0", Offset = "0x42D8AA0", VA = "0x42D8AA0")]
	public int GetDeathDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003F87")]
	[Address(RVA = "0x42D8AE0", Offset = "0x42D8AE0", VA = "0x42D8AE0")]
	public int GetMaxDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003F88")]
	[Address(RVA = "0x42D8B20", Offset = "0x42D8B20", VA = "0x42D8B20")]
	public int GetTotalDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003F89")]
	[Address(RVA = "0x42CFC40", Offset = "0x42CFC40", VA = "0x42CFC40")]
	public void UpdateRow(Player player)
	{
	}

	[Token(Token = "0x6003F8A")]
	[Address(RVA = "0x42D8220", Offset = "0x42D8220", VA = "0x42D8220")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x6003F8B")]
	[Address(RVA = "0x42D8FE0", Offset = "0x42D8FE0", VA = "0x42D8FE0")]
	public string GetPlayerStatus(string status)
	{
		return null;
	}

	[Token(Token = "0x6003F8C")]
	[Address(RVA = "0x42D8B60", Offset = "0x42D8B60", VA = "0x42D8B60")]
	public Texture GetPlayerIcon(string character, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6003F8D")]
	[Address(RVA = "0x42D90C0", Offset = "0x42D90C0", VA = "0x42D90C0")]
	public Texture GetPlayerIconFull(string character, string loadout, string status)
	{
		return null;
	}

	[Token(Token = "0x6003F8E")]
	[Address(RVA = "0x42D9290", Offset = "0x42D9290", VA = "0x42D9290")]
	public PlayerKDRRow()
	{
	}
}
