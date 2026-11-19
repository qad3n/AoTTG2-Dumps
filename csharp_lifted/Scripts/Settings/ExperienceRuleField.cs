// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AB")]
internal class ExperienceRuleField
{
	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x10")]
	public string Id;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x18")]
	public BaseSetting Setting;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x20")]
	public UIRule Rule;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x28")]
	public bool Visible;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x29")]
	public bool Editable;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x2A")]
	public bool Locked;

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x58D38D0", Offset = "0x58D28D0", VA = "0x58D38D0")]
	public ExperienceRuleField()
	{
		// Lifted from source/cpp/Settings/ExperienceRuleField.c (Settings.ExperienceRuleField$$.ctor): clean
		base();
		return;
	}
}
