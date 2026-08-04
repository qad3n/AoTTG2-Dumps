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

[Token(Token = "0x200066B")]
internal class TeamKDRRow : MonoBehaviour
{
	[Token(Token = "0x4001F7B")]
	[FieldOffset(Offset = "0x20")]
	public Text teamText;

	[Token(Token = "0x4001F7C")]
	[FieldOffset(Offset = "0x28")]
	public Text scoreText;

	[Token(Token = "0x4001F7D")]
	[FieldOffset(Offset = "0x30")]
	public string team;

	[Token(Token = "0x4001F7E")]
	[FieldOffset(Offset = "0x38")]
	public int kills;

	[Token(Token = "0x4001F7F")]
	[FieldOffset(Offset = "0x3C")]
	public int deaths;

	[Token(Token = "0x4001F80")]
	[FieldOffset(Offset = "0x40")]
	public int maxDamage;

	[Token(Token = "0x4001F81")]
	[FieldOffset(Offset = "0x44")]
	public int totalDamage;

	[Token(Token = "0x4001F82")]
	[FieldOffset(Offset = "0x48")]
	public int playerCount;

	[Token(Token = "0x4001F83")]
	[FieldOffset(Offset = "0x50")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x6004085")]
	[Address(RVA = "0x42EC010", Offset = "0x42EC010", VA = "0x42EC010")]
	public void Setup(ElementStyle style, string team)
	{
	}

	[Token(Token = "0x6004086")]
	[Address(RVA = "0x42EC1C0", Offset = "0x42EC1C0", VA = "0x42EC1C0")]
	public void ResetStats()
	{
	}

	[Token(Token = "0x6004087")]
	[Address(RVA = "0x42EC1D0", Offset = "0x42EC1D0", VA = "0x42EC1D0")]
	public void RemovePlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x6004088")]
	[Address(RVA = "0x42EC260", Offset = "0x42EC260", VA = "0x42EC260")]
	public void AddPlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x6004089")]
	[Address(RVA = "0x42EC2F0", Offset = "0x42EC2F0", VA = "0x42EC2F0")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x600408A")]
	[Address(RVA = "0x42EC480", Offset = "0x42EC480", VA = "0x42EC480")]
	public TeamKDRRow()
	{
	}
}
