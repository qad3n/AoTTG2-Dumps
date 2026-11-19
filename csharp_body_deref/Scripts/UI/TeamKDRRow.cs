// ==================== AoTTG2 cross-reference ====================
// Type: UI.TeamKDRRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TeamKDRRow.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TeamKDRRow.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000873")]
internal class TeamKDRRow : MonoBehaviour
{
	[Token(Token = "0x4002AD6")]
	[FieldOffset(Offset = "0x20")]
	public Text teamText;

	[Token(Token = "0x4002AD7")]
	[FieldOffset(Offset = "0x28")]
	public Text scoreText;

	[Token(Token = "0x4002AD8")]
	[FieldOffset(Offset = "0x30")]
	public string team;

	[Token(Token = "0x4002AD9")]
	[FieldOffset(Offset = "0x38")]
	public int kills;

	[Token(Token = "0x4002ADA")]
	[FieldOffset(Offset = "0x3C")]
	public int deaths;

	[Token(Token = "0x4002ADB")]
	[FieldOffset(Offset = "0x40")]
	public int maxDamage;

	[Token(Token = "0x4002ADC")]
	[FieldOffset(Offset = "0x44")]
	public int totalDamage;

	[Token(Token = "0x4002ADD")]
	[FieldOffset(Offset = "0x48")]
	public int playerCount;

	[Token(Token = "0x4002ADE")]
	[FieldOffset(Offset = "0x50")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x60050A2")]
	[Address(RVA = "0x5C51F40", Offset = "0x5C50F40", VA = "0x5C51F40")]
	public void Setup(ElementStyle style, string team)
	{
	}

	[Token(Token = "0x60050A3")]
	[Address(RVA = "0x5C520F0", Offset = "0x5C510F0", VA = "0x5C520F0")]
	public void ResetStats()
	{
	}

	[Token(Token = "0x60050A4")]
	[Address(RVA = "0x5C52100", Offset = "0x5C51100", VA = "0x5C52100")]
	public void RemovePlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x60050A5")]
	[Address(RVA = "0x5C52190", Offset = "0x5C51190", VA = "0x5C52190")]
	public void AddPlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x60050A6")]
	[Address(RVA = "0x5C52230", Offset = "0x5C51230", VA = "0x5C52230")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x60050A7")]
	[Address(RVA = "0x5C523C0", Offset = "0x5C513C0", VA = "0x5C523C0")]
	public TeamKDRRow()
	{
	}
}
