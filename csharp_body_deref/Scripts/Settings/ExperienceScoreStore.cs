// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceScoreStore
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceScoreStore.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AF")]
internal sealed class ExperienceScoreStore
{
	[Serializable]
	[Token(Token = "0x20000B0")]
	private sealed class ScoreFile
	{
		[Token(Token = "0x4000392")]
		[FieldOffset(Offset = "0x10")]
		public List<ExperienceScoreRecord> Records;

		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x5A39120", Offset = "0x5A38120", VA = "0x5A39120")]
		public ScoreFile()
		{
		}
	}

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ExperienceScoreStore Local;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _directory;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _path;

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x58D6CC0", Offset = "0x58D5CC0", VA = "0x58D6CC0")]
	public ExperienceScoreStore(string directory)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x58D6D60", Offset = "0x58D5D60", VA = "0x58D6D60")]
	public ExperienceScoreRecord Get(string experienceID)
	{
		return null;
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x58D7930", Offset = "0x58D6930", VA = "0x58D7930")]
	public void Save(string experienceID, float score, string unit, bool lowerIsBetter)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x58D7C20", Offset = "0x58D6C20", VA = "0x58D7C20")]
	private void Write(ScoreFile file)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x58D6EB0", Offset = "0x58D5EB0", VA = "0x58D6EB0")]
	private ScoreFile Load()
	{
		return null;
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x58D7B40", Offset = "0x58D6B40", VA = "0x58D7B40")]
	private static void Validate(ExperienceScoreRecord record)
	{
	}
}
