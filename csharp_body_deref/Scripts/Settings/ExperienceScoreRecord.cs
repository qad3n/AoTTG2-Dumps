// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceScoreRecord
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceScoreRecord.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x2000077")]
internal sealed class ExperienceScoreRecord
{
	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x10")]
	public string ExperienceID;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x18")]
	public float Score;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x20")]
	public string Unit;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x28")]
	public bool LowerIsBetter;

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ExperienceScoreRecord()
	{
	}
}
