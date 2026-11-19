// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000174")]
internal sealed class AottgStringSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085F")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringSetting _setting;

	[Token(Token = "0x17000105")]
	public override string TextValue
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x5CC6350", Offset = "0x5CC5350", VA = "0x5CC6350", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000106")]
	public override int MaxCharacters
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x5CC63A0", Offset = "0x5CC53A0", VA = "0x5CC63A0", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x5CC6320", Offset = "0x5CC5320", VA = "0x5CC6320")]
	public AottgStringSettingAdapter(StringSetting setting)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x5CC63C0", Offset = "0x5CC53C0", VA = "0x5CC63C0", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
