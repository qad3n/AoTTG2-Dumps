// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200016D")]
internal sealed class AottgColorSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x10")]
	private readonly ColorSetting _setting;

	[Token(Token = "0x17000104")]
	public override string TextValue
	{
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x2303BC0", Offset = "0x23021C0", VA = "0x182303BC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public AottgColorSettingAdapter(ColorSetting setting)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x2303B00", Offset = "0x2302100", VA = "0x182303B00", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
