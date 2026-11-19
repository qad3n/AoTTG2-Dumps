// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceScoreRecord
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceScoreRecord.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x20000AE")]
internal sealed class ExperienceScoreRecord
{
	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x10")]
	public string ExperienceID;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x18")]
	public float Score;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x20")]
	public string Unit;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x28")]
	public bool LowerIsBetter;

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x58D6CB0", Offset = "0x58D5CB0", VA = "0x58D6CB0")]
	public ExperienceScoreRecord()
	{
		// Lifted from source/cpp/Settings/ExperienceScoreRecord.c (Settings.ExperienceScoreRecord$$.ctor): clean
		base();
		return;
	}
}
