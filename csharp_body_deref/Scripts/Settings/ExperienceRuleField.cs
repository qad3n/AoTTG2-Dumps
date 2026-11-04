// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceRuleField
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceRuleField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000074")]
internal class ExperienceRuleField
{
	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x10")]
	public string Id;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x18")]
	public BaseSetting Setting;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x20")]
	public UIRule Rule;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x28")]
	public bool Visible;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x29")]
	public bool Editable;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x2A")]
	public bool Locked;

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ExperienceRuleField()
	{
	}
}
