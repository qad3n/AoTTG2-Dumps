// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceScoreStore
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceScoreStore.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000078")]
internal sealed class ExperienceScoreStore
{
	[Serializable]
	[Token(Token = "0x2000079")]
	private sealed class ScoreFile
	{
		[Token(Token = "0x4000265")]
		[FieldOffset(Offset = "0x10")]
		public List<ExperienceScoreRecord> Records;

		[Token(Token = "0x6000345")]
		[Address(RVA = "0x1DCEEE0", Offset = "0x1DCD4E0", VA = "0x181DCEEE0")]
		public ScoreFile()
		{
		}
	}

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ExperienceScoreStore Local;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _directory;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _path;

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x1DBF890", Offset = "0x1DBDE90", VA = "0x181DBF890")]
	public ExperienceScoreStore(string directory)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x1DBE6B0", Offset = "0x1DBCCB0", VA = "0x181DBE6B0")]
	public ExperienceScoreRecord Get(string experienceID)
	{
		return null;
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x1DBF230", Offset = "0x1DBD830", VA = "0x181DBF230")]
	public void Save(string experienceID, float score, string unit, bool lowerIsBetter)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x1DBF5B0", Offset = "0x1DBDBB0", VA = "0x181DBF5B0")]
	private void Write(ScoreFile file)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x1DBE800", Offset = "0x1DBCE00", VA = "0x181DBE800")]
	private ScoreFile Load()
	{
		return null;
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x1DBF460", Offset = "0x1DBDA60", VA = "0x181DBF460")]
	private static void Validate(ExperienceScoreRecord record)
	{
	}
}
