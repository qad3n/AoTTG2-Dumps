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

[Token(Token = "0x2000175")]
internal sealed class AottgColorSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x10")]
	private readonly ColorSetting _setting;

	[Token(Token = "0x17000107")]
	public override string TextValue
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x5CC6460", Offset = "0x5CC5460", VA = "0x5CC6460", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x5CC6430", Offset = "0x5CC5430", VA = "0x5CC6430")]
	public AottgColorSettingAdapter(ColorSetting setting)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x5CC6510", Offset = "0x5CC5510", VA = "0x5CC6510", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
