// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000171")]
internal sealed class AottgBoolSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x10")]
	private readonly BoolSetting _setting;

	[Token(Token = "0x170000F4")]
	public override string TextValue
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x5CC5BA0", Offset = "0x5CC4BA0", VA = "0x5CC5BA0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_TextValue): clean
			bool bVar1;

			bVar1 = this.get_BoolValue();
			if (bVar1) {
				return "true";
			}
			return "false";
		}
	}

	[Token(Token = "0x170000F5")]
	public override bool BoolValue
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x5CC5C00", Offset = "0x5CC4C00", VA = "0x5CC5C00", Slot = "18")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_BoolValue): clean
			BoolSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return false;
			}
			return pSVar1._value != false;
		}
	}

	[Token(Token = "0x170000F6")]
	public override float FloatValue
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x5CC5C40", Offset = "0x5CC4C40", VA = "0x5CC5C40", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_FloatValue): clean
			bool bVar1;

			bVar1 = this.get_BoolValue();
			if (bVar1) {
				return 1.0;
			}
			return 0.0;
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x5CC5B70", Offset = "0x5CC4B70", VA = "0x5CC5B70")]
	public AottgBoolSettingAdapter(BoolSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$.ctor): clean
		base();
		this._setting = setting;
		return;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x5CC5C70", Offset = "0x5CC4C70", VA = "0x5CC5C70", Slot = "24")]
	public override void SetBool(bool value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetBool): clean
		BoolSetting __this_00;

		__this_00 = this._setting;
		if (__this_00 == null) {
			return;
		}
		__this_00.Value = value;
		return;
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x5CC5CC0", Offset = "0x5CC4CC0", VA = "0x5CC5CC0", Slot = "26")]
	public override void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetText): clean
		bool bVar1;
		bool bVar2;

		bVar1 = String.Equals(value, "true", 5);
		bVar2 = true;
		if (!bVar1) {
			bVar2 = (value == "1");
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.SetBool(bVar2);
		return;
	}
}
