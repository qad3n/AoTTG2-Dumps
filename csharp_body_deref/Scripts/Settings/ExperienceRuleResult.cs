// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleResult
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000075")]
internal class ExperienceRuleResult
{
	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x10")]
	public PresetDefinition Experience;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x18")]
	public readonly List<ExperienceRuleField> Fields;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x20")]
	public readonly List<string> Errors;

	[Token(Token = "0x1700008B")]
	public bool IsValid
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x1DBE660", Offset = "0x1DBCC60", VA = "0x181DBE660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x1DBE5A0", Offset = "0x1DBCBA0", VA = "0x181DBE5A0")]
	public ExperienceRuleResult()
	{
	}
}
