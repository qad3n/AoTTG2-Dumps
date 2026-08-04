// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000126")]
internal sealed class AottgColorSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x10")]
	private readonly ColorSetting _setting;

	[Token(Token = "0x170000EA")]
	public override string TextValue
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x43607E0", Offset = "0x43607E0", VA = "0x43607E0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x43607B0", Offset = "0x43607B0", VA = "0x43607B0")]
	public AottgColorSettingAdapter(ColorSetting setting)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4360880", Offset = "0x4360880", VA = "0x4360880", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
