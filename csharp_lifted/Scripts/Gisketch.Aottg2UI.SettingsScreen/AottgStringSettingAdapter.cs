// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$get_TextValue): clean
			StringSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			return pSVar1._value;
		}
	}

	[Token(Token = "0x17000106")]
	public override int MaxCharacters
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x5CC63A0", Offset = "0x5CC53A0", VA = "0x5CC63A0", Slot = "23")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$get_MaxCharacters): clean
			int iVar1;
			StringSetting pSVar2;
			int iVar3;

			pSVar2 = this._setting;
			if (pSVar2 == null) {
				return 0;
			}
			iVar1 = pSVar2.MaxLength;
			if (iVar1 != 0x7fffffff) {
			}
			return iVar3;
		}
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x5CC6320", Offset = "0x5CC5320", VA = "0x5CC6320")]
	public AottgStringSettingAdapter(StringSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$.ctor): clean
		base();
		this._setting = setting;
		return;
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x5CC63C0", Offset = "0x5CC53C0", VA = "0x5CC63C0", Slot = "26")]
	public override void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$SetText): clean
		StringSetting __this_00;

		__this_00 = this._setting;
		if (__this_00 == null) {
			return;
		}
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this_00.Value = (object)value;
		return;
	}
}
