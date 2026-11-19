// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementCount
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementCount.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementCount.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x200035D")]
internal class AchievementCount
{
	[Token(Token = "0x40010D5")]
	[FieldOffset(Offset = "0x10")]
	public int FinishedBronze;

	[Token(Token = "0x40010D6")]
	[FieldOffset(Offset = "0x14")]
	public int TotalBronze;

	[Token(Token = "0x40010D7")]
	[FieldOffset(Offset = "0x18")]
	public int FinishedSilver;

	[Token(Token = "0x40010D8")]
	[FieldOffset(Offset = "0x1C")]
	public int TotalSilver;

	[Token(Token = "0x40010D9")]
	[FieldOffset(Offset = "0x20")]
	public int FinishedGold;

	[Token(Token = "0x40010DA")]
	[FieldOffset(Offset = "0x24")]
	public int TotalGold;

	[Token(Token = "0x40010DB")]
	[FieldOffset(Offset = "0x28")]
	public int FinishedAll;

	[Token(Token = "0x40010DC")]
	[FieldOffset(Offset = "0x2C")]
	public int TotalAll;

	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x581AA70", Offset = "0x5819A70", VA = "0x581AA70")]
	public AchievementCount()
	{
		// Lifted from source/cpp/GameProgress/AchievementCount.c (GameProgress.AchievementCount$$.ctor): clean
		base();
		return;
	}
}
