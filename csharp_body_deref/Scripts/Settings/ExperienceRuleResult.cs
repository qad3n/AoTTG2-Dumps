// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AC")]
internal class ExperienceRuleResult
{
	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x10")]
	public PresetDefinition Experience;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x18")]
	public readonly List<ExperienceRuleField> Fields;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x20")]
	public readonly List<string> Errors;

	[Token(Token = "0x170000A8")]
	public bool IsValid
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x58D38E0", Offset = "0x58D28E0", VA = "0x58D38E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x58D3920", Offset = "0x58D2920", VA = "0x58D3920")]
	public ExperienceRuleResult()
	{
	}
}
