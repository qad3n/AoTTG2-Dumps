// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200012C")]
internal sealed class AottgSettingsGroup : AottgComponent
{
	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x20")]
	private readonly AottgSettingDescriptor[] _rows;

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4363970", Offset = "0x4363970", VA = "0x4363970")]
	public AottgSettingsGroup(string id, string title, params AottgSettingDescriptor[] rows)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4363A10", Offset = "0x4363A10", VA = "0x4363A10", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
