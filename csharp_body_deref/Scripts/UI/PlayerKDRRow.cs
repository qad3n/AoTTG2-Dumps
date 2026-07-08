using System.Text;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000600")]
internal class PlayerKDRRow : MonoBehaviour
{
	[Token(Token = "0x4001D99")]
	[FieldOffset(Offset = "0x20")]
	public Player player;

	[Token(Token = "0x4001D9A")]
	[FieldOffset(Offset = "0x28")]
	public Text id;

	[Token(Token = "0x4001D9B")]
	[FieldOffset(Offset = "0x30")]
	public RawImage weapon;

	[Token(Token = "0x4001D9C")]
	[FieldOffset(Offset = "0x38")]
	public Text playerName;

	[Token(Token = "0x4001D9D")]
	[FieldOffset(Offset = "0x40")]
	public Text score;

	[Token(Token = "0x4001D9E")]
	[FieldOffset(Offset = "0x48")]
	public bool isSet;

	[Token(Token = "0x4001D9F")]
	[FieldOffset(Offset = "0x49")]
	public bool isMasterClient;

	[Token(Token = "0x4001DA0")]
	[FieldOffset(Offset = "0x4C")]
	public int actorNumber;

	[Token(Token = "0x4001DA1")]
	[FieldOffset(Offset = "0x50")]
	public string status;

	[Token(Token = "0x4001DA2")]
	[FieldOffset(Offset = "0x58")]
	public string character;

	[Token(Token = "0x4001DA3")]
	[FieldOffset(Offset = "0x60")]
	public string loadout;

	[Token(Token = "0x4001DA4")]
	[FieldOffset(Offset = "0x68")]
	public string team;

	[Token(Token = "0x4001DA5")]
	[FieldOffset(Offset = "0x70")]
	public int kills;

	[Token(Token = "0x4001DA6")]
	[FieldOffset(Offset = "0x74")]
	public int deaths;

	[Token(Token = "0x4001DA7")]
	[FieldOffset(Offset = "0x78")]
	public int maxDamage;

	[Token(Token = "0x4001DA8")]
	[FieldOffset(Offset = "0x7C")]
	public int totalDamage;

	[Token(Token = "0x4001DA9")]
	[FieldOffset(Offset = "0x80")]
	private string[] trackedProperties;

	[Token(Token = "0x4001DAA")]
	private const string _deadStatus = " <color=red>*dead*</color> ";

	[Token(Token = "0x4001DAB")]
	[FieldOffset(Offset = "0x88")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x4001DAC")]
	[FieldOffset(Offset = "0x90")]
	private KDRPanel _kdrPanel;

	[Token(Token = "0x6003D35")]
	[Address(RVA = "0x3FC5AA0", Offset = "0x3FC5AA0", VA = "0x3FC5AA0")]
	public void Setup(ElementStyle style, Player player, KDRPanel panel)
	{
	}

	[Token(Token = "0x6003D36")]
	[Address(RVA = "0x3FC6470", Offset = "0x3FC6470", VA = "0x3FC6470")]
	public bool StatsChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D37")]
	[Address(RVA = "0x3FC6550", Offset = "0x3FC6550", VA = "0x3FC6550")]
	public bool StatsChanged(int kills, int deaths, int maxDamage, int totalDamage)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D38")]
	[Address(RVA = "0x3FC6570", Offset = "0x3FC6570", VA = "0x3FC6570")]
	public int GetKillDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003D39")]
	[Address(RVA = "0x3FC65B0", Offset = "0x3FC65B0", VA = "0x3FC65B0")]
	public int GetDeathDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003D3A")]
	[Address(RVA = "0x3FC65F0", Offset = "0x3FC65F0", VA = "0x3FC65F0")]
	public int GetMaxDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003D3B")]
	[Address(RVA = "0x3FC6630", Offset = "0x3FC6630", VA = "0x3FC6630")]
	public int GetTotalDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6003D3C")]
	[Address(RVA = "0x3FC6670", Offset = "0x3FC6670", VA = "0x3FC6670")]
	public void UpdateRow(Player player)
	{
	}

	[Token(Token = "0x6003D3D")]
	[Address(RVA = "0x3FC5D30", Offset = "0x3FC5D30", VA = "0x3FC5D30")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x6003D3E")]
	[Address(RVA = "0x3FC6B10", Offset = "0x3FC6B10", VA = "0x3FC6B10")]
	public string GetPlayerStatus(string status)
	{
		return null;
	}

	[Token(Token = "0x6003D3F")]
	[Address(RVA = "0x3FC6690", Offset = "0x3FC6690", VA = "0x3FC6690")]
	public Texture GetPlayerIcon(string character, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6003D40")]
	[Address(RVA = "0x3FC6BF0", Offset = "0x3FC6BF0", VA = "0x3FC6BF0")]
	public Texture GetPlayerIconFull(string character, string loadout, string status)
	{
		return null;
	}

	[Token(Token = "0x6003D41")]
	[Address(RVA = "0x3FC6DC0", Offset = "0x3FC6DC0", VA = "0x3FC6DC0")]
	public PlayerKDRRow()
	{
	}
}
