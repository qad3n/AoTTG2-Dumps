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

[Token(Token = "0x20007C7")]
internal class TeamKDRRow : MonoBehaviour
{
	[Token(Token = "0x4002756")]
	[FieldOffset(Offset = "0x20")]
	public Text teamText;

	[Token(Token = "0x4002757")]
	[FieldOffset(Offset = "0x28")]
	public Text scoreText;

	[Token(Token = "0x4002758")]
	[FieldOffset(Offset = "0x30")]
	public string team;

	[Token(Token = "0x4002759")]
	[FieldOffset(Offset = "0x38")]
	public int kills;

	[Token(Token = "0x400275A")]
	[FieldOffset(Offset = "0x3C")]
	public int deaths;

	[Token(Token = "0x400275B")]
	[FieldOffset(Offset = "0x40")]
	public int maxDamage;

	[Token(Token = "0x400275C")]
	[FieldOffset(Offset = "0x44")]
	public int totalDamage;

	[Token(Token = "0x400275D")]
	[FieldOffset(Offset = "0x48")]
	public int playerCount;

	[Token(Token = "0x400275E")]
	[FieldOffset(Offset = "0x50")]
	private StringBuilder _scoreBuilder;

	[Token(Token = "0x6004B82")]
	[Address(RVA = "0x22815E0", Offset = "0x227FBE0", VA = "0x1822815E0")]
	public void Setup(ElementStyle style, string team)
	{
	}

	[Token(Token = "0x6004B83")]
	[Address(RVA = "0x22815D0", Offset = "0x227FBD0", VA = "0x1822815D0")]
	public void ResetStats()
	{
	}

	[Token(Token = "0x6004B84")]
	[Address(RVA = "0x2281530", Offset = "0x227FB30", VA = "0x182281530")]
	public void RemovePlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x6004B85")]
	[Address(RVA = "0x2281490", Offset = "0x227FA90", VA = "0x182281490")]
	public void AddPlayerStats(PlayerKDRRow player)
	{
	}

	[Token(Token = "0x6004B86")]
	[Address(RVA = "0x2281790", Offset = "0x227FD90", VA = "0x182281790")]
	public void UpdateRow()
	{
	}

	[Token(Token = "0x6004B87")]
	[Address(RVA = "0x2281920", Offset = "0x227FF20", VA = "0x182281920")]
	public TeamKDRRow()
	{
	}
}
