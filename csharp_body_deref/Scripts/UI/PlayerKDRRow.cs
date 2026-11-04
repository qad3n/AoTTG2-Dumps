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

[Token(Token = "0x20007A9")]
internal class PlayerKDRRow : MonoBehaviour
{
	[Token(Token = "0x40026AC")]
	[FieldOffset(Offset = "0x20")]
	public Player player;

	[Token(Token = "0x40026AD")]
	[FieldOffset(Offset = "0x28")]
	public Text id;

	[Token(Token = "0x40026AE")]
	[FieldOffset(Offset = "0x30")]
	public RawImage weapon;

	[Token(Token = "0x40026AF")]
	[FieldOffset(Offset = "0x38")]
	public Text playerName;

	[Token(Token = "0x40026B0")]
	[FieldOffset(Offset = "0x40")]
	public Text score;

	[Token(Token = "0x40026B1")]
	[FieldOffset(Offset = "0x48")]
	public bool isSet;

	[Token(Token = "0x40026B2")]
	[FieldOffset(Offset = "0x49")]
	public bool isMasterClient;

	[Token(Token = "0x40026B3")]
	[FieldOffset(Offset = "0x4C")]
	public int actorNumber;

	[Token(Token = "0x40026B4")]
	[FieldOffset(Offset = "0x50")]
	public string status;

	[Token(Token = "0x40026B5")]
	[FieldOffset(Offset = "0x58")]
	public string character;

	[Token(Token = "0x40026B6")]
	[FieldOffset(Offset = "0x60")]
	public string loadout;

	[Token(Token = "0x40026B7")]
	[FieldOffset(Offset = "0x68")]
	public string team;

	[Token(Token = "0x40026B8")]
	[FieldOffset(Offset = "0x70")]
	public int kills;

	[Token(Token = "0x40026B9")]
	[FieldOffset(Offset = "0x74")]
	public int deaths;

	[Token(Token = "0x40026BA")]
	[FieldOffset(Offset = "0x78")]
	public int maxDamage;

	[Token(Token = "0x40026BB")]
	[FieldOffset(Offset = "0x7C")]
	public int totalDamage;

	[Token(Token = "0x40026BC")]
	[FieldOffset(Offset = "0x80")]
	private string[] trackedProperties;

	[Token(Token = "0x40026BD")]
	private const string _deadStatus = " <color=red>*dead*</color> ";

	[Token(Token = "0x40026BE")]
	[FieldOffset(Offset = "0x88")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x40026BF")]
	[FieldOffset(Offset = "0x90")]
	private KDRPanel _kdrPanel;

	[Token(Token = "0x6004A88")]
	[Address(RVA = "0x225FA30", Offset = "0x225E030", VA = "0x18225FA30")]
	public void Setup(ElementStyle style, Player player, KDRPanel panel)
	{
	}

	[Token(Token = "0x6004A89")]
	[Address(RVA = "0x225FCF0", Offset = "0x225E2F0", VA = "0x18225FCF0")]
	public bool StatsChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6004A8A")]
	[Address(RVA = "0x225FCD0", Offset = "0x225E2D0", VA = "0x18225FCD0")]
	public bool StatsChanged(int kills, int deaths, int maxDamage, int totalDamage)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A8B")]
	[Address(RVA = "0x225ED30", Offset = "0x225D330", VA = "0x18225ED30")]
	public int GetKillDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004A8C")]
	[Address(RVA = "0x225ECE0", Offset = "0x225D2E0", VA = "0x18225ECE0")]
	public int GetDeathDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004A8D")]
	[Address(RVA = "0x225ED80", Offset = "0x225D380", VA = "0x18225ED80")]
	public int GetMaxDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004A8E")]
	[Address(RVA = "0x225F9E0", Offset = "0x225DFE0", VA = "0x18225F9E0")]
	public int GetTotalDamageDiff()
	{
		return default(int);
	}

	[Token(Token = "0x6004A8F")]
	[Address(RVA = "0x22605C0", Offset = "0x225EBC0", VA = "0x1822605C0")]
	public void UpdateRow(Player player)
	{
	}

	[Token(Token = "0x6004A90")]
	[Address(RVA = "0x225FDD0", Offset = "0x225E3D0", VA = "0x18225FDD0")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x6004A91")]
	[Address(RVA = "0x225F8E0", Offset = "0x225DEE0", VA = "0x18225F8E0")]
	public string GetPlayerStatus(string status)
	{
		return null;
	}

	[Token(Token = "0x6004A92")]
	[Address(RVA = "0x225F020", Offset = "0x225D620", VA = "0x18225F020")]
	public Texture GetPlayerIcon(string character, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6004A93")]
	[Address(RVA = "0x225EDD0", Offset = "0x225D3D0", VA = "0x18225EDD0")]
	public Texture GetPlayerIconFull(string character, string loadout, string status)
	{
		return null;
	}

	[Token(Token = "0x6004A94")]
	[Address(RVA = "0x22605F0", Offset = "0x225EBF0", VA = "0x1822605F0")]
	public PlayerKDRRow()
	{
	}
}
